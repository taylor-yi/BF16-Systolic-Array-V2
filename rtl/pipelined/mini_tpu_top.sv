module mini_tpu_top #(parameter N = 4) (
    input  logic              clk,
    input  logic              rst,
    input  logic              start,
    input  logic [N*16-1:0]   a_flat,
    input  logic [N*16-1:0]   b_flat,
    output logic [N*N*16-1:0] result_flat,
    output logic              result_valid,
    output logic              done
);
    logic load_en, array_en, array_clear, drain_en;
    logic [N*16-1:0] a_skewed, b_skewed, result_raw;

    logic [N-1:0] rst_row;
    logic rst_core;

    genvar r;
    generate 
        for(r = 0; r < N; r++) begin
            reset_sync u_rst(.clk(clk), .rst_in(rst), .rst_out(rst_row[r]));
        end
    endgenerate

    reset_sync u_rst_core (.clk(clk), .rst_in(rst), .rst_out(rst_core));

    controller #(.N(N)) u_ctrl (
        .clk         (clk),
        .rst         (rst_core),
        .start       (start),
        .load_en     (load_en),
        .array_en    (array_en),
        .array_clear (array_clear),
        .drain_en    (drain_en),
        .done        (done)
    );

    mem_interface #(.N(N)) u_mem (
        .clk          (clk),
        .rst          (rst_core),
        .load_en      (load_en),
        .drain_en     (drain_en),
        .a_flat       (a_flat),
        .b_flat       (b_flat),
        .a_skewed     (a_skewed),
        .b_skewed     (b_skewed),
        .result_in    (result_raw),
        .result_flat  (result_flat),
        .result_valid (result_valid)
    );

    systolic_array #(.N(N)) u_array (
        .clk        (clk),
        .rst        (rst_row),
        .en         (array_en),
        .clear      (array_clear),
        .drain_en   (drain_en),
        .a_in       (a_skewed),
        .b_in       (b_skewed),
        .result_out (result_raw)
    );
endmodule
