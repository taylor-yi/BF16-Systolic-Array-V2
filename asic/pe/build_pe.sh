#!/bin/bash
set -e
cd "$(dirname "$0")"

[ -n "$1" ] || { echo "usage: ./build_pe.sh <run_tag>"; exit 1; }

RTL=../../rtl/pipelined
mkdir -p build
sv2v $RTL/bf16_utils.sv \
     $RTL/bf16_mul.sv \
     $RTL/fp32_add.sv \
     $RTL/mul_add_register.sv \
     $RTL/processing_element.sv \
     > build/pe.v

nix-shell ~/librelane/shell.nix --run "librelane --run-tag '$1' config.json"