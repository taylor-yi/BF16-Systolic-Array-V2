// IDLE -> LOAD (2N-1 cycles) -> COMPUTE (N cycles) -> DRAIN (N cycles) -> IDLE
// LOAD streams the inputs through the skew buffers, COMPUTE lets the last
// values reach PE[N-1][N-1], DRAIN shifts the results out of the array.
module controller #(parameter N = 4) (
    input  logic clk,
    input  logic rst,
    input  logic start,
    output logic load_en,
    output logic array_en,
    output logic array_clear,
    output logic drain_en,
    output logic done
);
    typedef enum logic [1:0] {IDLE, LOAD, COMPUTE, DRAIN} state_t;
    state_t state, next_state;

    localparam LOAD_CYCLES    = 2*N - 1;
    localparam COMPUTE_CYCLES = N;
    localparam CTR_WIDTH      = $clog2(LOAD_CYCLES + COMPUTE_CYCLES + 2);

    logic [CTR_WIDTH-1:0] cycle_cnt;

    always_ff @(posedge clk or negedge rst) begin
        if (!rst)
            state <= IDLE;
        else
            state <= next_state;
    end

    always_ff @(posedge clk or negedge rst) begin
        if (!rst)
            cycle_cnt <= '0;
        else if (state != next_state)
            cycle_cnt <= '0;
        else
            cycle_cnt <= cycle_cnt + 1'b1;
    end

    always_ff @(posedge clk or negedge rst) begin
        if (!rst)
            done <= 1'b0;
        else if (start)
            done <= 1'b0;
        else if (state == DRAIN && next_state == IDLE)
            done <= 1'b1;
    end

    always_comb begin
        next_state = state;
        case (state)
            IDLE:    if (start) next_state = LOAD;
            LOAD:    if (cycle_cnt == CTR_WIDTH'(LOAD_CYCLES - 1)) next_state = COMPUTE;
            COMPUTE: if (cycle_cnt == CTR_WIDTH'(COMPUTE_CYCLES - 1)) next_state = DRAIN;
            DRAIN:   if (cycle_cnt == CTR_WIDTH'(N - 1)) next_state = IDLE;
        endcase
    end

    always_comb begin
        load_en     = 1'b0;
        array_en    = 1'b0;
        array_clear = 1'b0;
        drain_en    = 1'b0;
        case (state)
            IDLE:    array_clear = 1'b1;
            LOAD:    begin load_en = 1'b1; array_en = 1'b1; end
            COMPUTE: begin load_en = 1'b1; array_en = 1'b1; end   // keep shifting zeros through
            DRAIN:   drain_en = 1'b1;
        endcase
    end
endmodule
