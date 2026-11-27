#!/bin/bash
# Save the key results from a LibreLane run into metrics/<tag>/,
# each file prefixed with the tag (e.g. clk50ns_metrics.csv).
# Usage: ./save <run_tag>            save the files, keep the run
#        ./save <run_tag> --delete   save the files, then delete the run
set -e
cd "$(dirname "$0")"

tag="$1"
if [ -z "$tag" ]; then
    echo "usage: ./save <run_tag> [--delete]"
    exit 1
fi

run="runs/$tag"
out="metrics/$tag"
if [ ! -d "$run" ]; then
    echo "no run found at $run (runs available: $(ls runs 2>/dev/null | tr '\n' ' '))"
    exit 1
fi

mkdir -p "$out"

copy() {  # copy() <source path pattern> <label>
    local found=0
    for f in $1; do
        [ -e "$f" ] || continue
        cp "$f" "$out/${tag}_$(basename "$f")"
        echo "  saved ${tag}_$(basename "$f")"
        found=1
    done
    [ "$found" = 1 ] || echo "  missing: $2"
}

echo "Saving $run -> $out"
copy "$run/final/metrics.csv"                              "metrics.csv (did the run finish?)"
copy "$run/resolved.json"                                  "resolved.json"
copy "$run/*yosys-synthesis/reports/stat.rpt"              "stat.rpt"
copy "$run/*openroad-stapostpnr/max_ss_100C_1v60/*max*.rpt" "max_ss setup report"
copy "$run/*netgen-lvs/reports/*"    "LVS reports"
copy "$run/*magic-drc/reports/*"     "Magic DRC reports"

if [ "$2" = "--delete" ]; then
    if [ -f "$out/${tag}_metrics.csv" ]; then
        echo "Deleting $run ($(du -sh "$run" | cut -f1))"
        rm -rf "$run"
    else
        echo "Not deleting $run: metrics.csv wasn't saved"
        exit 1
    fi
fi