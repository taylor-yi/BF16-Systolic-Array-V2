module systolic_array #(parameter N = 4) (
    input  logic                clk,
    input  logic [N - 1:0]      rst,
    input  logic                en,
    input  logic                clear,
    input  logic                drain_en,
    input  logic [N*16-1:0]     a_in,
    input  logic [N*16-1:0]     b_in,
    output logic [N*16-1:0]     result_out
);
    // Every PE's forwarded A, forwarded B, and result, packed flat.
    // PE[r][c] owns slice 16*(r*N + c).
    logic [N*N*16-1:0] a_q_flat, b_q_flat, res_flat;

    genvar r, c;
    generate
        for (r = 0; r < N; r++) begin : row
            for (c = 0; c < N; c++) begin : col
                logic loc_rst = rst[r];
                logic [15:0] a, b, above, res;
                logic [15:0] a_q, b_q;

                // A comes from the left edge or the PE to the left
                if (c == 0) begin : a_edge
                    assign a = a_in[16*r +: 16];
                end else begin : a_mid
                    assign a = a_q_flat[16*(r*N + c - 1) +: 16];
                end

                // B and partial results come from the top edge or the PE above
                if (r == 0) begin : b_edge
                    assign b     = b_in[16*c +: 16];
                    assign above = 16'h0000;
                end else begin : b_mid
                    assign b     = b_q_flat[16*((r-1)*N + c) +: 16];
                    assign above = res_flat[16*((r-1)*N + c) +: 16];
                end

                processing_element pe (
                    .clk(clk), .rst(loc_rst), .en(en), .clear(clear),
                    .drain_en(drain_en),
                    .a(a), .b(b),
                    .data_from_above(above),
                    .result(res)
                );

                always_ff @(posedge clk or negedge rst) begin
                    if (!rst) begin
                        a_q <= 16'h0000;
                        b_q <= 16'h0000;
                    end else begin
                        a_q <= a;
                        b_q <= b;
                    end
                end

                // Publish this PE's outputs to the flat buses
                assign a_q_flat[16*(r*N + c) +: 16] = a_q;
                assign b_q_flat[16*(r*N + c) +: 16] = b_q;
                assign res_flat[16*(r*N + c) +: 16] = res;
            end
        end

        for (c = 0; c < N; c++) begin : out
            assign result_out[16*c +: 16] = res_flat[16*((N-1)*N + c) +: 16];
        end
    endgenerate
endmodule