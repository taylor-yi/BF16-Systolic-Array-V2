#!/usr/bin/env bash
# Generic-gate synthesis sanity check: cell counts and logic depth. Run from the repo root.
set -e
mkdir -p build
for m in bf16_mul fp32_add; do
    yosys -p "read_verilog -sv rtl/$m.sv; synth -top $m -flatten; abc -g AND,NAND,OR,NOR,XOR,XNOR,MUX; stat; ltp -noff" > build/synth_$m.log 2>&1
    echo "$m: $(grep 'Number of cells' build/synth_$m.log | tail -1 | xargs), $(grep 'Longest topological path' build/synth_$m.log | tail -1 | sed 's/.*(//; s/)://')"
done
yosys -p "read_verilog -sv $(tr '\n' ' ' < scripts/files.f); synth -top mini_tpu_top -flatten; stat" > build/synth_top.log 2>&1
echo "mini_tpu_top: $(grep 'Number of cells' build/synth_top.log | tail -1 | xargs)"
