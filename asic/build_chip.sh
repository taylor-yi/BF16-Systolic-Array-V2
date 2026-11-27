#!/bin/bash
set -e
cd "$(dirname "$0")"
[ -n "$1" ] || { echo "usage: ./build_chip.sh <run_tag> [extra librelane flags]"; exit 1; }

RTL=../rtl/pipelined
mkdir -p build
sv2v $RTL/reset_sync.sv \
     $RTL/controller.sv \
     $RTL/mem_interface.sv \
     $RTL/systolic_array.sv \
     $RTL/mini_tpu_top.sv \
     > build/design.v

tag="$1"; shift
nix-shell ~/librelane/shell.nix --run "librelane --run-tag '$tag' $* config.json"