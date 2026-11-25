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
module controller (
	clk,
	rst,
	start,
	load_en,
	array_en,
	array_clear,
	drain_en,
	done
);
	reg _sv2v_0;
	parameter N = 4;
	input wire clk;
	input wire rst;
	input wire start;
	output reg load_en;
	output reg array_en;
	output reg array_clear;
	output reg drain_en;
	output reg done;
	reg [1:0] state;
	reg [1:0] next_state;
	localparam LOAD_CYCLES = (2 * N) - 1;
	localparam COMPUTE_CYCLES = N;
	localparam CTR_WIDTH = $clog2((LOAD_CYCLES + COMPUTE_CYCLES) + 2);
	reg [CTR_WIDTH - 1:0] cycle_cnt;
	always @(posedge clk or negedge rst)
		if (!rst)
			state <= 2'd0;
		else
			state <= next_state;
	always @(posedge clk or negedge rst)
		if (!rst)
			cycle_cnt <= {CTR_WIDTH {1'b0}};
		else if (state != next_state)
			cycle_cnt <= {CTR_WIDTH {1'b0}};
		else
			cycle_cnt <= cycle_cnt + 1'b1;
	always @(posedge clk or negedge rst)
		if (!rst)
			done <= 1'b0;
		else if (start)
			done <= 1'b0;
		else if ((state == 2'd3) && (next_state == 2'd0))
			done <= 1'b1;
	function automatic signed [CTR_WIDTH - 1:0] sv2v_cast_3E48E_signed;
		input reg signed [CTR_WIDTH - 1:0] inp;
		sv2v_cast_3E48E_signed = inp;
	endfunction
	always @(*) begin
		if (_sv2v_0)
			;
		next_state = state;
		case (state)
			2'd0:
				if (start)
					next_state = 2'd1;
			2'd1:
				if (cycle_cnt == sv2v_cast_3E48E_signed(LOAD_CYCLES - 1))
					next_state = 2'd2;
			2'd2:
				if (cycle_cnt == sv2v_cast_3E48E_signed(COMPUTE_CYCLES - 1))
					next_state = 2'd3;
			2'd3:
				if (cycle_cnt == sv2v_cast_3E48E_signed(N - 1))
					next_state = 2'd0;
		endcase
	end
	always @(*) begin
		if (_sv2v_0)
			;
		load_en = 1'b0;
		array_en = 1'b0;
		array_clear = 1'b0;
		drain_en = 1'b0;
		case (state)
			2'd0: array_clear = 1'b1;
			2'd1: begin
				load_en = 1'b1;
				array_en = 1'b1;
			end
			2'd2: begin
				load_en = 1'b1;
				array_en = 1'b1;
			end
			2'd3: drain_en = 1'b1;
		endcase
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
module mem_interface (
	clk,
	rst,
	load_en,
	drain_en,
	a_flat,
	b_flat,
	a_skewed,
	b_skewed,
	result_in,
	result_flat,
	result_valid
);
	parameter N = 4;
	input wire clk;
	input wire rst;
	input wire load_en;
	input wire drain_en;
	input wire [(N * 16) - 1:0] a_flat;
	input wire [(N * 16) - 1:0] b_flat;
	output wire [(N * 16) - 1:0] a_skewed;
	output wire [(N * 16) - 1:0] b_skewed;
	input wire [(N * 16) - 1:0] result_in;
	output wire [((N * N) * 16) - 1:0] result_flat;
	output reg result_valid;
	genvar _gv_i_1;
	genvar _gv_j_1;
	generate
		for (_gv_i_1 = 0; _gv_i_1 < N; _gv_i_1 = _gv_i_1 + 1) begin : skew
			localparam i = _gv_i_1;
			reg [15:0] sr_a [N - 1:0];
			reg [15:0] sr_b [N - 1:0];
			always @(posedge clk or negedge rst)
				if (!rst) begin : sv2v_autoblock_1
					reg signed [31:0] d;
					for (d = 0; d < N; d = d + 1)
						begin
							sr_a[d] <= 16'h0000;
							sr_b[d] <= 16'h0000;
						end
				end
				else if (load_en) begin
					sr_a[0] <= a_flat[16 * i+:16];
					sr_b[0] <= b_flat[16 * i+:16];
					begin : sv2v_autoblock_2
						reg signed [31:0] d;
						for (d = 1; d < N; d = d + 1)
							begin
								sr_a[d] <= sr_a[d - 1];
								sr_b[d] <= sr_b[d - 1];
							end
					end
				end
			assign a_skewed[16 * i+:16] = sr_a[i];
			assign b_skewed[16 * i+:16] = sr_b[i];
		end
	endgenerate
	reg [15:0] result_matrix [N - 1:0][N - 1:0];
	always @(posedge clk or negedge rst)
		if (!rst) begin : sv2v_autoblock_3
			reg signed [31:0] r;
			for (r = 0; r < N; r = r + 1)
				begin : sv2v_autoblock_4
					reg signed [31:0] c;
					for (c = 0; c < N; c = c + 1)
						result_matrix[r][c] <= 16'h0000;
				end
		end
		else if (drain_en) begin : sv2v_autoblock_5
			reg signed [31:0] c;
			for (c = 0; c < N; c = c + 1)
				begin
					begin : sv2v_autoblock_6
						reg signed [31:0] r;
						for (r = N - 1; r > 0; r = r - 1)
							result_matrix[r][c] <= result_matrix[r - 1][c];
					end
					result_matrix[0][c] <= result_in[16 * c+:16];
				end
		end
	generate
		for (_gv_i_1 = 0; _gv_i_1 < N; _gv_i_1 = _gv_i_1 + 1) begin : pack_row
			localparam i = _gv_i_1;
			for (_gv_j_1 = 0; _gv_j_1 < N; _gv_j_1 = _gv_j_1 + 1) begin : pack_col
				localparam j = _gv_j_1;
				assign result_flat[16 * ((i * N) + j)+:16] = result_matrix[i][j];
			end
		end
	endgenerate
	reg drain_q;
	always @(posedge clk or negedge rst)
		if (!rst) begin
			drain_q <= 1'b0;
			result_valid <= 1'b0;
		end
		else begin
			drain_q <= drain_en;
			result_valid <= drain_q && !drain_en;
		end
endmodule
module mini_tpu_top (
	clk,
	rst,
	start,
	a_flat,
	b_flat,
	result_flat,
	result_valid,
	done
);
	parameter N = 4;
	input wire clk;
	input wire rst;
	input wire start;
	input wire [(N * 16) - 1:0] a_flat;
	input wire [(N * 16) - 1:0] b_flat;
	output wire [((N * N) * 16) - 1:0] result_flat;
	output wire result_valid;
	output wire done;
	wire load_en;
	wire array_en;
	wire array_clear;
	wire drain_en;
	wire [(N * 16) - 1:0] a_skewed;
	wire [(N * 16) - 1:0] b_skewed;
	wire [(N * 16) - 1:0] result_raw;
	controller #(.N(N)) u_ctrl(
		.clk(clk),
		.rst(rst),
		.start(start),
		.load_en(load_en),
		.array_en(array_en),
		.array_clear(array_clear),
		.drain_en(drain_en),
		.done(done)
	);
	mem_interface #(.N(N)) u_mem(
		.clk(clk),
		.rst(rst),
		.load_en(load_en),
		.drain_en(drain_en),
		.a_flat(a_flat),
		.b_flat(b_flat),
		.a_skewed(a_skewed),
		.b_skewed(b_skewed),
		.result_in(result_raw),
		.result_flat(result_flat),
		.result_valid(result_valid)
	);
	systolic_array #(.N(N)) u_array(
		.clk(clk),
		.rst(rst),
		.en(array_en),
		.clear(array_clear),
		.drain_en(drain_en),
		.a_in(a_skewed),
		.b_in(b_skewed),
		.result_out(result_raw)
	);
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
	result
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
	wire [31:0] product;
	wire [31:0] sum;
	reg [31:0] accumulator;
	wire [31:0] from_above;
	wire skip;
	assign skip = (a[14:0] == 0) || (b[14:0] == 0);
	bf16_mul u_mul(
		.a(a),
		.b(b),
		.result(product)
	);
	fp32_add u_add(
		.a(product),
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
		else if (en && !skip)
			accumulator <= sum;
endmodule
module systolic_array (
	clk,
	rst,
	en,
	clear,
	drain_en,
	a_in,
	b_in,
	result_out
);
	parameter N = 4;
	input wire clk;
	input wire rst;
	input wire en;
	input wire clear;
	input wire drain_en;
	input wire [(N * 16) - 1:0] a_in;
	input wire [(N * 16) - 1:0] b_in;
	output wire [(N * 16) - 1:0] result_out;
	wire [((N * N) * 16) - 1:0] a_q_flat;
	wire [((N * N) * 16) - 1:0] b_q_flat;
	wire [((N * N) * 16) - 1:0] res_flat;
	genvar _gv_r_1;
	genvar _gv_c_1;
	generate
		for (_gv_r_1 = 0; _gv_r_1 < N; _gv_r_1 = _gv_r_1 + 1) begin : row
			localparam r = _gv_r_1;
			for (_gv_c_1 = 0; _gv_c_1 < N; _gv_c_1 = _gv_c_1 + 1) begin : col
				localparam c = _gv_c_1;
				wire [15:0] a;
				wire [15:0] b;
				wire [15:0] above;
				wire [15:0] res;
				reg [15:0] a_q;
				reg [15:0] b_q;
				if (c == 0) begin : a_edge
					assign a = a_in[16 * r+:16];
				end
				else begin : a_mid
					assign a = a_q_flat[16 * (((r * N) + c) - 1)+:16];
				end
				if (r == 0) begin : b_edge
					assign b = b_in[16 * c+:16];
					assign above = 16'h0000;
				end
				else begin : b_mid
					assign b = b_q_flat[16 * (((r - 1) * N) + c)+:16];
					assign above = res_flat[16 * (((r - 1) * N) + c)+:16];
				end
				processing_element pe(
					.clk(clk),
					.rst(rst),
					.en(en),
					.clear(clear),
					.drain_en(drain_en),
					.a(a),
					.b(b),
					.data_from_above(above),
					.result(res)
				);
				always @(posedge clk or negedge rst)
					if (!rst) begin
						a_q <= 16'h0000;
						b_q <= 16'h0000;
					end
					else begin
						a_q <= a;
						b_q <= b;
					end
				assign a_q_flat[16 * ((r * N) + c)+:16] = a_q;
				assign b_q_flat[16 * ((r * N) + c)+:16] = b_q;
				assign res_flat[16 * ((r * N) + c)+:16] = res;
			end
		end
		for (_gv_c_1 = 0; _gv_c_1 < N; _gv_c_1 = _gv_c_1 + 1) begin : out
			localparam c = _gv_c_1;
			assign result_out[16 * c+:16] = res_flat[16 * (((N - 1) * N) + c)+:16];
		end
	endgenerate
endmodule
