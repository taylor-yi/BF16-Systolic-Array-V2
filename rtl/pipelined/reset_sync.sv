(* keep_hierarchy *)
module reset_sync (
    input logic clk,
    input logic rst_in,
    output logic rst_out
);

    logic s1;
    always_ff @(posedge clk or negedge rst_in) begin
        if(!rst_in) begin
            {rst_out, s1} <= 2'b00;
        end else begin
            s1 <= 1'b1;
            rst_out <= s1;
        end
    end
endmodule
