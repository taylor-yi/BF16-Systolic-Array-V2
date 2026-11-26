#!/bin/bash
set -e
cd "$(dirname "$0")"
mkdir -p build
sv2v ../rtl/pipelined/*.sv > build/design.v
# librelane --run-tag "$1" config.json
nix-shell ~/librelane/shell.nix --run "librelane --run-tag '$1' config.json"