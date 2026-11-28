`timescale 1ns/1ps
module mul_add_register import sa_pkg::*; (
    input logic clk, rst,
    input logic [31:0] in, 
    output logic [31:0] out,
    input logic en_in, 
    output logic en_out,
    input logic skip_in,
    output logic skip_out
);

always_ff @(posedge clk or negedge rst)
    if (!rst) begin
        out <= 32'd0;
        en_out <= 1'b0;
        skip_out <= 1'b0;
    end else begin
        out <= in;
        en_out <= en_in;
        skip_out <= skip_in;
    end
endmodule