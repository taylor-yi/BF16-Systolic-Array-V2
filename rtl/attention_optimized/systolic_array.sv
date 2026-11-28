`timescale 1ns/1ps
module systolic_array import sa_pkg::*; (
    input  logic                clk,
    input  logic [N - 1:0]      rst,
    input  logic                en,
    input  logic                clear,
    input  logic                drain_en,
    input  logic [N*16-1:0]     a_in,
    input  logic [N*16-1:0]     b_in,
    output logic [N*32-1:0]     result_out
);
    // Every PE's forwarded A, forwarded B, and result, packed flat.
    // PE[r][c] owns slice 16*(r*N + c).
    logic [N * N * 16 - 1:0] a_q_flat, b_q_flat;
    logic [N * N * 32 - 1:0] res_flat;

    genvar r, c;
    generate
        for (r = 0; r < N; r++) begin : row
            for (c = 0; c < N; c++) begin : col
                logic loc_rst;
                assign loc_rst = rst[r];
                logic [15:0] a, b;
                logic [31:0] above, res;
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
                    assign above = 32'h0000_0000;
                end else begin : b_mid
                    assign b     = b_q_flat[16*((r-1)*N + c) +: 16];
                    assign above = res_flat[32*((r-1)*N + c) +: 32];
                end

                processing_element pe (
                    .clk(clk), .rst(loc_rst), .en(en), .clear(clear),
                    .drain_en(drain_en),
                    .a(a), .b(b),
                    .data_from_above(above),
                    .result(res),
                    .a_out(a_q),
                    .b_out(b_q)
                );

                // Publish this PE's outputs to the flat buses
                assign a_q_flat[16*(r*N + c) +: 16] = a_q;
                assign b_q_flat[16*(r*N + c) +: 16] = b_q;
                assign res_flat[32*(r*N + c) +: 32] = res;
            end
        end

        for (c = 0; c < N; c++) begin : out
            assign result_out[32*c +: 16] = res_flat[32*((N-1)*N + c) +: 16];
        end
    endgenerate
endmodule