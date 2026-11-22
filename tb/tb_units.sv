// Unit checks for bf16_mul and fp32_add. Vector lines are "a b expected" in hex.
`timescale 1ns/1ps
module tb_units;
    logic [15:0] ma, mb;
    logic [31:0] mr, aa, ab, ar, expected;
    logic [15:0] t1, t2;
    logic [31:0] t3, u1, u2, u3;
    int fh, n, bad;

    bf16_mul u_mul (.a(ma), .b(mb), .result(mr));
    fp32_add u_add (.a(aa), .b(ab), .result(ar));

    // +0 and -0 count as equal
    function automatic bit same(logic [31:0] x, logic [31:0] y);
        return (x === y) || (x[30:0] == 0 && y[30:0] == 0);
    endfunction

    initial begin
        fh = $fopen("vectors/unit_mul.txt", "r");
        n = 0; bad = 0;
        while ($fscanf(fh, "%h %h %h\n", t1, t2, t3) == 3) begin
            ma = t1; mb = t2; expected = t3;
            #1; #1;
            n++;
            if (!same(mr, expected)) begin
                bad++;
                if (bad <= 10) $display("  mul a=%h b=%h expected %h got %h", ma, mb, expected, mr);
            end
        end
        $fclose(fh);
        $display("%s: bf16_mul  %0d vectors, %0d failures", bad ? "FAIL" : "PASS", n, bad);

        fh = $fopen("vectors/unit_add.txt", "r");
        n = 0; bad = 0;
        while ($fscanf(fh, "%h %h %h\n", u1, u2, u3) == 3) begin
            aa = u1; ab = u2; expected = u3;
            #1; #1;
            n++;
            if (!same(ar, expected)) begin
                bad++;
                if (bad <= 10) $display("  add a=%h b=%h expected %h got %h", aa, ab, expected, ar);
            end
        end
        $fclose(fh);
        $display("%s: fp32_add  %0d vectors, %0d failures", bad ? "FAIL" : "PASS", n, bad);
        $finish;
    end
endmodule
