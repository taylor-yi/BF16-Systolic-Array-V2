# Mini TPU: 4x4 BF16 Systolic Array

A 4x4 output-stationary systolic array that multiplies BF16 matrices. Each PE does an exact BF16 x BF16 multiply and accumulates in FP32, and the results come out as BF16.

## Architecture

- **Dataflow:** output-stationary. A streams left to right, B streams top to bottom, and each PE keeps its own C[r][c]. When the computation finishes, the results shift down the columns and come out of the bottom row.
- **PE:** `bf16_mul` gives the exact product in FP32 (an 8x8-bit mantissa product always fits). `fp32_add` adds it to the accumulator. Multiplies with an exact-zero operand are skipped.
- **Controller:** IDLE -> LOAD (2N-1 cycles) -> COMPUTE (N) -> DRAIN (N) -> IDLE.
- **mem_interface:** skew buffers on the inputs and the result latch on the output.

## Numeric behavior

| Step | Behavior |
| --- | --- |
| Inputs | BF16, subnormals treated as zero |
| Multiply | exact, result in FP32 |
| Accumulate | FP32, k = 0 to N-1, round toward zero, flush to zero, overflow to Inf |
| Output | FP32 to BF16 by truncation |
| Inf / NaN | IEEE propagation. Inf x 0 is skipped like any zero product (no NaN) |

`model/golden_bitexact.py` implements exactly this, so the testbench compares at zero tolerance.

## Layout

```
rtl/       design
tb/        tb_mini_tpu.sv (top level), tb_units.sv (multiplier and adder)
model/     bit-exact golden model and vector generators
vectors/   test vectors
scripts/   regression and synthesis scripts, file list
```

## Running

From the repo root:

```
./scripts/run_verilator.sh      # or ./scripts/run_icarus.sh
vsim -c -do scripts/run_modelsim.do
./scripts/synth_yosys.sh        # gate count and logic depth
```

You should get 9 PASS lines: the unit test, the 10 original vectors, and 6 sets of 1,000 random matrices (uniform, wide range, sparse, cancellation, underflow, overflow).

The testbench takes `+FILE=<vectors>`, `+TOL=<ulps>` (default 0) and `+MAXERR=<n>`. It flags X outputs and times out if `result_valid` never comes.

To make new vectors:

```
python3 model/gen_vectors.py wide 1000 [seed]
python3 model/gen_unit_vectors.py
```

## Status

- Bit-exact at zero tolerance on all vectors in Verilator 5.020 and Icarus 12.
- Synthesizes in Yosys. Logic depth: multiplier 43 levels, adder 140 levels (generic gates).
- Not done yet: OpenLane timing and area, directed reset/protocol tests, N other than 4, functional coverage.

## Team

- **Tyler Braham:** Python golden model, tbd.
- **Taylor Yi:** tbd.
