#!/bin/bash
set -e
cd "$(dirname "$0")"

if [ -z "$1" ]; then
    run="--last-run"
else
    run="--run-tag $1"
fi

nix-shell ~/librelane/shell.nix --run "librelane $run --flow OpenInOpenROAD config.json"