module processing_element (
    input  logic        clk,
    input  logic        rst,
    input  logic        en,
    input  logic        clear,
    input  logic        drain_en,
    input  logic [15:0] a,
    input  logic [15:0] b,
    input  logic [15:0] data_from_above,
    output logic [15:0] result
);
    logic [31:0] product, sum, accumulator, from_above;
    logic skip;

    // don't bother accumulating when either input is zero
    assign skip = (a[14:0] == 0) || (b[14:0] == 0);

    bf16_mul     u_mul  (.a(a), .b(b), .result(product));
    fp32_add     u_add  (.a(product), .b(accumulator), .result(sum));
    bf16_to_fp32 u_wide (.bf16_in(data_from_above), .fp32_out(from_above));
    fp32_to_bf16 u_narr (.fp32_in(accumulator), .bf16_out(result));

    always_ff @(posedge clk or negedge rst) begin
        if (!rst)
            accumulator <= 32'd0;
        else if (clear)
            accumulator <= 32'd0;
        else if (drain_en)
            accumulator <= from_above;
        else if (en && !skip)
            accumulator <= sum;
    end
endmodule
