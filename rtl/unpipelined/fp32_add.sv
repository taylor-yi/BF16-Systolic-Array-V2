// FP32 adder. Round toward zero, flush to zero, guard/round/sticky bits kept
// through alignment so the truncated result is correct.
module fp32_add (
    input  logic [31:0] a,
    input  logic [31:0] b,
    output logic [31:0] result
);
    logic       sa, sb;
    logic [7:0] ea, eb;
    logic [22:0] fa, fb;
    logic a_zero, b_zero, a_inf, b_inf, a_nan, b_nan;

    assign {sa, ea, fa} = a;
    assign {sb, eb, fb} = b;

    assign a_zero = (ea == 0);
    assign b_zero = (eb == 0);
    assign a_inf  = (ea == 8'hFF) && (fa == 0);
    assign b_inf  = (eb == 8'hFF) && (fb == 0);
    assign a_nan  = (ea == 8'hFF) && (fa != 0);
    assign b_nan  = (eb == 8'hFF) && (fb != 0);

    function automatic logic [4:0] lzc27(input logic [26:0] x);
        lzc27 = 5'd27;
        for (int i = 0; i < 27; i++)
            if (x[i]) lzc27 = 5'(26 - i);
    endfunction

    logic        sl, ss;
    logic [7:0]  el, es, diff;
    logic [26:0] ml, ms, ms_shift;   // {1, mantissa, g, r, s}
    logic [27:0] sum;
    logic [26:0] norm;
    logic [4:0]  lz;
    logic signed [9:0] exp;
    logic        sticky;

    always_comb begin
        if ({ea, fa} >= {eb, fb}) begin
            sl = sa; ss = sb; el = ea; es = eb;
            ml = {1'b1, fa, 3'b000};
            ms = {1'b1, fb, 3'b000};
        end else begin
            sl = sb; ss = sa; el = eb; es = ea;
            ml = {1'b1, fb, 3'b000};
            ms = {1'b1, fa, 3'b000};
        end

        diff = el - es;
        sticky = 1'b0;
        if (diff >= 27) begin
            ms_shift = 27'd1;
        end else begin
            sticky = |(ms & ((27'd1 << diff) - 27'd1));
            ms_shift = (ms >> diff) | {26'd0, sticky};
        end

        if (sl == ss)
            sum = {1'b0, ml} + {1'b0, ms_shift};
        else
            sum = {1'b0, ml} - {1'b0, ms_shift};

        lz = 5'd0;
        if (sum[27]) begin
            norm = sum[27:1] | {26'd0, sum[0]};
            exp  = $signed({2'b00, el}) + 10'sd1;
        end else begin
            lz   = lzc27(sum[26:0]);
            norm = sum[26:0] << lz;
            exp  = $signed({2'b00, el}) - $signed({5'd0, lz});
        end

        if (a_nan || b_nan || (a_inf && b_inf && sa != sb))
            result = 32'h7FC0_0000;
        else if (a_inf)
            result = a;
        else if (b_inf)
            result = b;
        else if (a_zero && b_zero)
            result = {sa & sb, 31'd0};
        else if (a_zero)
            result = b;
        else if (b_zero)
            result = a;
        else if (norm == 0 || exp <= 0)
            result = 32'd0;
        else if (exp >= 255)
            result = {sl, 8'hFF, 23'd0};
        else
            result = {sl, exp[7:0], norm[25:3]};
    end
endmodule
