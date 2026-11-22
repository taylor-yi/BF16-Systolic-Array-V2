// Output-stationary NxN array. A moves left to right, B moves top to bottom,
// each PE keeps its own C[r][c]. On drain the results shift down a column
// and come out of the bottom row.
module systolic_array #(parameter N = 4) (
    input  logic            clk,
    input  logic            rst,
    input  logic            en,
    input  logic            clear,
    input  logic            drain_en,
    input  logic [N*16-1:0] a_in,
    input  logic [N*16-1:0] b_in,
    output logic [N*16-1:0] result_out
);
    genvar r, c;
    generate
        for (r = 0; r < N; r++) begin : row
            for (c = 0; c < N; c++) begin : col
                logic [15:0] a, b, a_q, b_q, above, res;

                if (c == 0) begin : a_edge
                    assign a = a_in[16*r +: 16];
                end else begin : a_mid
                    assign a = row[r].col[c-1].a_q;
                end

                if (r == 0) begin : b_edge
                    assign b = b_in[16*c +: 16];
                    assign above = 16'h0000;
                end else begin : b_mid
                    assign b = row[r-1].col[c].b_q;
                    assign above = row[r-1].col[c].res;
                end

                processing_element pe (
                    .clk             (clk),
                    .rst             (rst),
                    .en              (en),
                    .clear           (clear),
                    .drain_en        (drain_en),
                    .a               (a),
                    .b               (b),
                    .data_from_above (above),
                    .result          (res)
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
            end
        end

        for (c = 0; c < N; c++) begin : out
            assign result_out[16*c +: 16] = row[N-1].col[c].res;
        end
    endgenerate
endmodule
