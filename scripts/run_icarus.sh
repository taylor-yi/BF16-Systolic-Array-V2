#!/usr/bin/env bash
# Full regression with Icarus Verilog 12. Run from the repo root.
set -e
mkdir -p build
iverilog -g2012 -o build/units.vvp -s tb_units tb/tb_units.sv rtl/bf16_mul.sv rtl/fp32_add.sv > build/units.log 2>&1
iverilog -g2012 -o build/top.vvp -s tb_mini_tpu -c scripts/files.f tb/tb_mini_tpu.sv > build/top.log 2>&1

vvp -n build/units.vvp | grep -E "^(PASS|FAIL)"
for f in vectors/matmul_vectors.txt vectors/mm_*.txt; do
    vvp -n build/top.vvp +FILE=$f | grep -E "^(PASS|FAIL)"
done
