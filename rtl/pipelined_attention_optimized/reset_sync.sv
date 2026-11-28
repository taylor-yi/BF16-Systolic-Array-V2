
module reset_sync (
    input logic clk,
    input logic rst_in,
    output logic rst_out
);

    (* keep *) logic s1;
    (* keep *) logic q;
    always_ff @(posedge clk or negedge rst_in) begin
        if(!rst_in) begin
            {q, s1} <= 2'b00;
        end else begin
            s1 <= 1'b1;
            q <= s1;
        end
    end

    assign rst_out = q;
endmodule
