#!/bin/bash
set -e
cd "$(dirname "$0")"

if [ -z "$1" ]; then
    echo "You retard. You forgot an argument."
    exit 1
fi

tag="$1"
grep -E "timing__setup__ws,|timing__setup__ws__corner:max_ss_100C_1v60,|timing__hold__ws,|magic__drc_error__count,|klayout__drc_error__count,|design__lvs_error__count,|design__max_slew_violation__count,|design__max_cap_violation__count,|design__die__area," "metrics/$tag/${tag}_metrics.csv"