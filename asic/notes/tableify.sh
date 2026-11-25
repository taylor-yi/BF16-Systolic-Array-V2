#!/bin/bash
# Convert a simple CSV (no commas inside values) to an aligned markdown table.
# Usage: ./tableify.sh results.csv            # prints the table
#        ./tableify.sh results.csv > results.md
awk -F',' '
{
    for (i = 1; i <= NF; i++) {
        gsub(/^[ \t]+|[ \t\r]+$/, "", $i)        # trim spaces
        cell[NR, i] = $i
        if (length($i) > w[i]) w[i] = length($i)
    }
    if (NF > ncol) ncol = NF
    nrow = NR
}
END {
    for (r = 1; r <= nrow; r++) {
        line = "|"
        for (i = 1; i <= ncol; i++) line = line sprintf(" %-*s |", w[i], cell[r, i])
        print line
        if (r == 1) {                              # separator under the header
            line = "|"
            for (i = 1; i <= ncol; i++) {
                dashes = ""
                for (k = 0; k < (w[i] < 3 ? 3 : w[i]); k++) dashes = dashes "-"
                line = line " " dashes " |"
            }
            print line
        }
    }
}' "$1"