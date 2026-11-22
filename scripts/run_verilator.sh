#!/usr/bin/env bash
# Full regression with Verilator 5.x. Run from the repo root.
set -e
mkdir -p build
verilator --binary --timing -Wno-fatal --top-module tb_units -Mdir build/units -o sim \
    tb/tb_units.sv rtl/bf16_mul.sv rtl/fp32_add.sv > build/units.log 2>&1
verilator --binary --timing -Wno-fatal --top-module tb_mini_tpu -Mdir build/top -o sim \
    tb/tb_mini_tpu.sv -f scripts/files.f > build/top.log 2>&1

./build/units/sim | grep -E "^(PASS|FAIL)"
for f in vectors/matmul_vectors.txt vectors/mm_*.txt; do
    ./build/top/sim +FILE=$f | grep -E "^(PASS|FAIL)"
done
