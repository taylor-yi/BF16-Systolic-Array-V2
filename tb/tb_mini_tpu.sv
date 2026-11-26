// Top level testbench. Each line of the vector file is one matmul:
// N*N A values, N*N B values, N*N expected C values (hex BF16, row-major).
// +FILE=<vectors>  +TOL=<ulps, default 0>  +MAXERR=<mismatches to print>
`timescale 1ns/1ps
module tb_mini_tpu;
    localparam N = 4;
    localparam TIMEOUT = 100;

    logic clk = 0, rst = 0, start = 0;
    logic [N*16-1:0]   a_flat = '0, b_flat = '0;
    logic [N*N*16-1:0] result_flat;
    logic              result_valid, done;

    `ifdef GLS
        mini_tpu_top dut (.*);
    `else
        mini_tpu_top #(.N(N)) dut (.*);
    `endif

    initial begin
        if ($test$plusargs("WAVES")) begin
            $dumpfile("waves.vcd");
            $dumpvars(0, tb_mini_tpu);   // depth 1: testbench signals + DUT ports only
        end
    end

    always #5 clk = ~clk;

    logic [15:0] A [N][N], B [N][N], C_exp [N][N];
    string fname;
    int TOL = 0, MAXERR = 20;
    int fh, tests = 0, bad_tests = 0, bad_cells = 0, x_cells = 0, max_ulp = 0;

    function automatic int ulp_dist(logic [15:0] x, logic [15:0] y);
        if (x[15] == y[15])
            return (x[14:0] > y[14:0]) ? x[14:0] - y[14:0] : y[14:0] - x[14:0];
        return int'(x[14:0]) + int'(y[14:0]);
    endfunction

    task automatic read_vector(output bit ok);
        logic [15:0] t;
        ok = 1;
        for (int m = 0; m < 3; m++)
            for (int r = 0; r < N; r++)
                for (int c = 0; c < N; c++)
                    if (ok) begin
                        if ($fscanf(fh, "%h", t) != 1)
                            ok = 0;
                        else case (m)
                            0: A[r][c] = t;
                            1: B[r][c] = t;
                            2: C_exp[r][c] = t;
                        endcase
                    end
    endtask

    task automatic run_matmul();
        int cycles = 0, errs = 0, d;
        logic [15:0] got;

        // drive on negedge so nothing races the DUT's posedge
        @(negedge clk) start = 1;
        @(negedge clk) start = 0;
        for (int t = 0; t < N; t++) begin
            for (int r = 0; r < N; r++) a_flat[16*r +: 16] = A[r][t];
            for (int c = 0; c < N; c++) b_flat[16*c +: 16] = B[t][c];
            @(negedge clk);
        end
        a_flat = '0;
        b_flat = '0;

        while (!result_valid) begin
            @(posedge clk);
            cycles++;
            if (cycles > TIMEOUT) begin
                `ifdef GLS
                    $display("FATAL: test %0d timed out", tests);
                `else
                    $display("FATAL: test %0d timed out, state=%0d", tests, dut.u_ctrl.state);
                `endif
                $finish;
            end
        end

        for (int r = 0; r < N; r++)
            for (int c = 0; c < N; c++) begin
                got = result_flat[16*(r*N + c) +: 16];
                if ($isunknown(got)) begin
                    x_cells++;
                    errs++;
                    $display("  X     test %0d C[%0d][%0d] = %h, expected %h", tests, r, c, got, C_exp[r][c]);
                end else begin
                    d = ulp_dist(got, C_exp[r][c]);
                    if (d > max_ulp) max_ulp = d;
                    if (d > TOL) begin
                        errs++;
                        if (bad_cells + errs <= MAXERR)
                            $display("  FAIL  test %0d C[%0d][%0d] = %h, expected %h (%0d ulp)", tests, r, c, got, C_exp[r][c], d);
                    end
                end
            end

        if (errs) begin
            bad_tests++;
            bad_cells += errs;
        end
        wait (done);
    endtask

    initial begin
        bit ok;
        if (!$value$plusargs("FILE=%s", fname)) fname = "vectors/matmul_vectors.txt";
        void'($value$plusargs("TOL=%d", TOL));
        void'($value$plusargs("MAXERR=%d", MAXERR));

        fh = $fopen(fname, "r");
        if (fh == 0) begin
            $display("FATAL: can't open %s", fname);
            $finish;
        end

        repeat (2) @(negedge clk);
        rst = 1;
        @(negedge clk);

        begin : vec_loop
            forever begin
                read_vector(ok);
                if (!ok) disable vec_loop;
                run_matmul();
                tests++;
            end
        end
        $fclose(fh);

        if (tests == 0)
            $display("FAIL: no vectors read from %s", fname);
        else
            $display("%s: %s  tests=%0d  failing=%0d  bad_cells=%0d  x_cells=%0d  max_ulp=%0d  tol=%0d",
                     bad_cells == 0 ? "PASS" : "FAIL", fname, tests, bad_tests, bad_cells, x_cells, max_ulp, TOL);
        $finish;
    end
endmodule
