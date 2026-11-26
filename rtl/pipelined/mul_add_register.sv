module mul_add_register(
    input logic clk, rst,
    input logic [31:0] in, 
    output logic [31:0] out,
    input logic en_in, 
    output logic en_out
    input logic skip_in,
    output logic skip_out
);

always_ff @(posedge clk or negedge rst)
    if(!rst) begin
        out <= in;
        en_out <= en_in;
    end
endmodule