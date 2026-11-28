// BF16 x BF16 -> FP32. The 8x8 bit mantissa product always fits in FP32,
// so the result is exact. Subnormals are flushed to zero.
`timescale 1ns/1ps
module bf16_mul (
    input  logic [15:0] a,
    input  logic [15:0] b,
    output logic [31:0] result
);
    logic       sa, sb, sign;
    logic [7:0] ea, eb;
    logic [6:0] fa, fb;
    logic [15:0] prod;
    logic signed [10:0] exp;
    logic a_zero, b_zero, a_inf, b_inf, a_nan, b_nan;

    assign {sa, ea, fa} = a;
    assign {sb, eb, fb} = b;
    assign sign = sa ^ sb;

    assign a_zero = (ea == 8'h00);
    assign b_zero = (eb == 8'h00);
    assign a_inf  = (ea == 8'hFF) && (fa == 0);
    assign b_inf  = (eb == 8'hFF) && (fb == 0);
    assign a_nan  = (ea == 8'hFF) && (fa != 0);
    assign b_nan  = (eb == 8'hFF) && (fb != 0);

    assign prod = {1'b1, fa} * {1'b1, fb};

    always_comb begin
        exp = $signed({3'b0, ea}) + $signed({3'b0, eb}) - 11'sd127 + (prod[15] ? 11'sd1 : 11'sd0);

        if (a_nan || b_nan || (a_inf && b_zero) || (b_inf && a_zero))
            result = 32'h7FC0_0000;
        else if (a_inf || b_inf)
            result = {sign, 8'hFF, 23'd0};
        else if (a_zero || b_zero || exp <= 0)
            result = {sign, 31'd0};
        else if (exp >= 255)
            result = {sign, 8'hFF, 23'd0};
        else if (prod[15])
            result = {sign, exp[7:0], prod[14:0], 8'd0};
        else
            result = {sign, exp[7:0], prod[13:0], 9'd0};
    end
endmodule
