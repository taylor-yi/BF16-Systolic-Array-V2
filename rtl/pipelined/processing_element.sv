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
    output  logic [15:0] a_out,
    output  logic [15:0] b_out,
);
    logic [31:0] product_out, product_in, sum, accumulator, from_above;
    logic skip, en_out, skip_out;

    // don't bother accumulating when either input is zero
    assign skip = (a[14:0] == 0) || (b[14:0] == 0);

    bf16_mul     u_mul  (.a(a), .b(b), .result(product_out));
    mul_add_register pipeline_register (.clk(clk), .rst(rst), .in(product_out), .out(product_in), .en_in(en), .en_out(en_out), .skip_in(skip), .skip_out(skip_out));
    fp32_add     u_add  (.a(product_in), .b(accumulator), .result(sum));
    bf16_to_fp32 u_wide (.bf16_in(data_from_above), .fp32_out(from_above));
    fp32_to_bf16 u_narr (.fp32_in(accumulator), .bf16_out(result));

    always_ff @(posedge clk or negedge rst) begin
        if (!rst)
            accumulator <= 32'd0;
        else if (clear)
            accumulator <= 32'd0;
        else if (drain_en)
            accumulator <= from_above;
        else if (en_out && !skip_out)
            accumulator <= sum;
    end

    always_ff @(posedge clk or negedge rst) begin
        if (!rst) begin
            a_out <= 16'h0000;
            b_out <= 16'h0000;
        end else begin
            a_out <= a;
            b_out <= b;
        end
    end
endmodule
