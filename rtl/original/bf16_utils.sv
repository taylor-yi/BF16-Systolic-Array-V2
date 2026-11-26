module fp32_to_bf16 (
    input  logic [31:0] fp32_in,
    output logic [15:0] bf16_out
);
    // truncate (round toward zero), golden model does the same
    assign bf16_out = fp32_in[31:16];
endmodule

module bf16_to_fp32 (
    input  logic [15:0] bf16_in,
    output logic [31:0] fp32_out
);
    assign fp32_out = {bf16_in, 16'h0000};
endmodule
