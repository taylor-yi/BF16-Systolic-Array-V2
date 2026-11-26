#!/bin/bash
# Gate-level sim of a LibreLane run's final netlist.
# Usage: ./gls.sh <run_tag> [vector_file]
set -e
cd "$(dirname "$0")"

tag="$1"
vec="${2:-../vectors/matmul_vectors.txt}"
nl="runs/$tag/final/nl/mini_tpu_top.nl.v"
cells=$(find ~/.ciel -type d -path "*sky130A/libs.ref/sky130_fd_sc_hd/verilog" | head -1)

[ -n "$tag" ]   || { echo "usage: ./gls.sh <run_tag> [vector_file]"; exit 1; }
[ -f "$nl" ]    || { echo "no netlist at $nl (runs: $(ls runs | tr '\n' ' '))"; exit 1; }
[ -n "$cells" ] || { echo "couldn't find the sky130 cell models under ~/.ciel"; exit 1; }

mkdir -p build notes
echo "Compiling $nl with cell models from $cells"
iverilog -g2012 -DFUNCTIONAL -DUNIT_DELAY=#1 -DGLS -s tb_mini_tpu \
  -o build/gls_$tag.vvp \
  "$cells/primitives.v" "$cells/sky130_fd_sc_hd.v" \
  "$nl" ../tb/tb_mini_tpu.sv

echo "Running with $vec"
# vvp -n build/gls_$tag.vvp +FILE="$vec" | tee notes/gls_$tag.log
vvp -n build/gls_$tag.vvp +FILE="$vec" +WAVES | tee notes/gls_$tag.log #generate waves