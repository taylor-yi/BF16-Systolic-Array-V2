// Input skew buffers and output latch.
// Row r of A (and column r of B) is delayed r extra cycles so matching
// elements meet in the right PE. Results come out of the array one row per
// cycle during drain (bottom row first) and get shifted into result_matrix.
`timescale 1ns/1ps
module mem_interface import sa_pkg::*; (
    input logic clk,
    input logic rst,
    input logic load_en,
    input logic drain_en,
    input logic [N*16-1:0] a_flat,
    input logic [N*16-1:0] b_flat,
    output logic [N*16-1:0] a_skewed,
    output logic [N*16-1:0] b_skewed,
    input logic [N*32-1:0] result_in,
    // output logic [N*N*16-1:0] result_flat,
    // output logic result_valid
    output logic [N*32-1:0] out_row,
    output logic out_valid,
    output logic [$clog2(N)-1:0] out_row_idx,
);
    genvar i, j;
    generate
        for (i = 0; i < N; i++) begin : skew
            logic [15:0] sr_a [N-1:0];
            logic [15:0] sr_b [N-1:0];

            always_ff @(posedge clk or negedge rst) begin
                if (!rst) begin
                    for (int d = 0; d < N; d++) begin
                        sr_a[d] <= 16'h0000;
                        sr_b[d] <= 16'h0000;
                    end
                end else if (load_en) begin
                    sr_a[0] <= a_flat[16*i +: 16];
                    sr_b[0] <= b_flat[16*i +: 16];
                    for (int d = 1; d < N; d++) begin
                        sr_a[d] <= sr_a[d-1];
                        sr_b[d] <= sr_b[d-1];
                    end
                end
            end

            assign a_skewed[16*i +: 16] = sr_a[i];
            assign b_skewed[16*i +: 16] = sr_b[i];
        end
    endgenerate

    always_ff @(posedge clk or negedge rst) begin
        if (!rst) begin
            // reset
        end else begin
            out_valid <= drain_en;
            out_row <= result_in;
        end
    end

    // logic [15:0] result_matrix [N-1:0][N-1:0];

    // always_ff @(posedge clk or negedge rst) begin
    //     if (!rst) begin
    //         for (int r = 0; r < N; r++)
    //             for (int c = 0; c < N; c++)
    //                 result_matrix[r][c] <= 16'h0000;
    //     end else if (drain_en) begin
    //         for (int c = 0; c < N; c++) begin
    //             for (int r = N-1; r > 0; r--)
    //                 result_matrix[r][c] <= result_matrix[r-1][c];
    //             result_matrix[0][c] <= result_in[16*c +: 16];
    //         end
    //     end
    // end

    // generate
    //     for (i = 0; i < N; i++) begin : pack_row
    //         for (j = 0; j < N; j++) begin : pack_col
    //             assign result_flat[16*(i*N + j) +: 16] = result_matrix[i][j];
    //         end
    //     end
    // endgenerate

    // // result_valid pulses for one cycle after drain_en falls
    // logic drain_q;

    // always_ff @(posedge clk or negedge rst) begin
    //     if (!rst) begin
    //         drain_q <= 1'b0;
    //         result_valid <= 1'b0;
    //     end else begin
    //         drain_q <= drain_en;
    //         result_valid <= drain_q && !drain_en;
    //     end
    // end
endmodule
