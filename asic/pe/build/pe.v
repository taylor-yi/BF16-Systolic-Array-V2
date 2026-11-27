module fp32_to_bf16 (
	fp32_in,
	bf16_out
);
	input wire [31:0] fp32_in;
	output wire [15:0] bf16_out;
	assign bf16_out = fp32_in[31:16];
endmodule
module bf16_to_fp32 (
	bf16_in,
	fp32_out
);
	input wire [15:0] bf16_in;
	output wire [31:0] fp32_out;
	assign fp32_out = {bf16_in, 16'h0000};
endmodule
module bf16_mul (
	a,
	b,
	result
);
	reg _sv2v_0;
	input wire [15:0] a;
	input wire [15:0] b;
	output reg [31:0] result;
	wire sa;
	wire sb;
	wire sign;
	wire [7:0] ea;
	wire [7:0] eb;
	wire [6:0] fa;
	wire [6:0] fb;
	wire [15:0] prod;
	reg signed [10:0] exp;
	wire a_zero;
	wire b_zero;
	wire a_inf;
	wire b_inf;
	wire a_nan;
	wire b_nan;
	assign {sa, ea, fa} = a;
	assign {sb, eb, fb} = b;
	assign sign = sa ^ sb;
	assign a_zero = ea == 8'h00;
	assign b_zero = eb == 8'h00;
	assign a_inf = (ea == 8'hff) && (fa == 0);
	assign b_inf = (eb == 8'hff) && (fb == 0);
	assign a_nan = (ea == 8'hff) && (fa != 0);
	assign b_nan = (eb == 8'hff) && (fb != 0);
	assign prod = {1'b1, fa} * {1'b1, fb};
	always @(*) begin
		if (_sv2v_0)
			;
		exp = (($signed({3'b000, ea}) + $signed({3'b000, eb})) - 11'sd127) + (prod[15] ? 11'sd1 : 11'sd0);
		if (((a_nan || b_nan) || (a_inf && b_zero)) || (b_inf && a_zero))
			result = 32'h7fc00000;
		else if (a_inf || b_inf)
			result = {sign, 31'h7f800000};
		else if ((a_zero || b_zero) || (exp <= 0))
			result = {sign, 31'd0};
		else if (exp >= 255)
			result = {sign, 31'h7f800000};
		else if (prod[15])
			result = {sign, exp[7:0], prod[14:0], 8'd0};
		else
			result = {sign, exp[7:0], prod[13:0], 9'd0};
	end
	initial _sv2v_0 = 0;
endmodule
module fp32_add (
	a,
	b,
	result
);
	reg _sv2v_0;
	input wire [31:0] a;
	input wire [31:0] b;
	output reg [31:0] result;
	wire sa;
	wire sb;
	wire [7:0] ea;
	wire [7:0] eb;
	wire [22:0] fa;
	wire [22:0] fb;
	wire a_zero;
	wire b_zero;
	wire a_inf;
	wire b_inf;
	wire a_nan;
	wire b_nan;
	assign {sa, ea, fa} = a;
	assign {sb, eb, fb} = b;
	assign a_zero = ea == 0;
	assign b_zero = eb == 0;
	assign a_inf = (ea == 8'hff) && (fa == 0);
	assign b_inf = (eb == 8'hff) && (fb == 0);
	assign a_nan = (ea == 8'hff) && (fa != 0);
	assign b_nan = (eb == 8'hff) && (fb != 0);
	function automatic signed [4:0] sv2v_cast_5_signed;
		input reg signed [4:0] inp;
		sv2v_cast_5_signed = inp;
	endfunction
	function automatic [4:0] lzc27;
		input reg [26:0] x;
		begin
			lzc27 = 5'd27;
			begin : sv2v_autoblock_1
				reg signed [31:0] i;
				for (i = 0; i < 27; i = i + 1)
					if (x[i])
						lzc27 = sv2v_cast_5_signed(26 - i);
			end
		end
	endfunction
	reg sl;
	reg ss;
	reg [7:0] el;
	reg [7:0] es;
	reg [7:0] diff;
	reg [26:0] ml;
	reg [26:0] ms;
	reg [26:0] ms_shift;
	reg [27:0] sum;
	reg [26:0] norm;
	reg [4:0] lz;
	reg signed [9:0] exp;
	reg sticky;
	always @(*) begin
		if (_sv2v_0)
			;
		if ({ea, fa} >= {eb, fb}) begin
			sl = sa;
			ss = sb;
			el = ea;
			es = eb;
			ml = {1'b1, fa, 3'b000};
			ms = {1'b1, fb, 3'b000};
		end
		else begin
			sl = sb;
			ss = sa;
			el = eb;
			es = ea;
			ml = {1'b1, fb, 3'b000};
			ms = {1'b1, fa, 3'b000};
		end
		diff = el - es;
		sticky = 1'b0;
		if (diff >= 27)
			ms_shift = 27'd1;
		else begin
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
			exp = $signed({2'b00, el}) + 10'sd1;
		end
		else begin
			lz = lzc27(sum[26:0]);
			norm = sum[26:0] << lz;
			exp = $signed({2'b00, el}) - $signed({5'd0, lz});
		end
		if ((a_nan || b_nan) || ((a_inf && b_inf) && (sa != sb)))
			result = 32'h7fc00000;
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
		else if ((norm == 0) || (exp <= 0))
			result = 32'd0;
		else if (exp >= 255)
			result = {sl, 31'h7f800000};
		else
			result = {sl, exp[7:0], norm[25:3]};
	end
	initial _sv2v_0 = 0;
endmodule
module mul_add_register (
	clk,
	rst,
	in,
	out,
	en_in,
	en_out,
	skip_in,
	skip_out
);
	input wire clk;
	input wire rst;
	input wire [31:0] in;
	output reg [31:0] out;
	input wire en_in;
	output reg en_out;
	input wire skip_in;
	output reg skip_out;
	always @(posedge clk or negedge rst)
		if (!rst) begin
			out <= 32'd0;
			en_out <= 1'b0;
			skip_out <= 1'b0;
		end
		else begin
			out <= in;
			en_out <= en_in;
			skip_out <= skip_in;
		end
endmodule
module processing_element (
	clk,
	rst,
	en,
	clear,
	drain_en,
	a,
	b,
	data_from_above,
	result,
	a_out,
	b_out
);
	input wire clk;
	input wire rst;
	input wire en;
	input wire clear;
	input wire drain_en;
	input wire [15:0] a;
	input wire [15:0] b;
	input wire [15:0] data_from_above;
	output wire [15:0] result;
	output reg [15:0] a_out;
	output reg [15:0] b_out;
	wire [31:0] product_out;
	wire [31:0] product_in;
	wire [31:0] sum;
	reg [31:0] accumulator;
	wire [31:0] from_above;
	wire skip;
	wire en_out;
	wire skip_out;
	assign skip = (a[14:0] == 0) || (b[14:0] == 0);
	bf16_mul u_mul(
		.a(a),
		.b(b),
		.result(product_out)
	);
	mul_add_register pipeline_register(
		.clk(clk),
		.rst(rst),
		.in(product_out),
		.out(product_in),
		.en_in(en),
		.en_out(en_out),
		.skip_in(skip),
		.skip_out(skip_out)
	);
	fp32_add u_add(
		.a(product_in),
		.b(accumulator),
		.result(sum)
	);
	bf16_to_fp32 u_wide(
		.bf16_in(data_from_above),
		.fp32_out(from_above)
	);
	fp32_to_bf16 u_narr(
		.fp32_in(accumulator),
		.bf16_out(result)
	);
	always @(posedge clk or negedge rst)
		if (!rst)
			accumulator <= 32'd0;
		else if (clear)
			accumulator <= 32'd0;
		else if (drain_en)
			accumulator <= from_above;
		else if (en_out && !skip_out)
			accumulator <= sum;
	always @(posedge clk or negedge rst)
		if (!rst) begin
			a_out <= 16'h0000;
			b_out <= 16'h0000;
		end
		else begin
			a_out <= a;
			b_out <= b;
		end
endmodule
