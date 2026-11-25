| Run Tag | Change | Setup WNS (ns) | Hold WNS (ns) | Cell Area (µm^2) | Die Area | DRC | LVS | Notes
| :--- | :---: | ---: | :--- | :---: | ---: | :--- | :---: | ---: |
| Baseline | 40 ns clock, defaults | --4.964 | +0.111 | 321,533 | 546,137 | 0 (clean) | 0 (clean) | Fails setup at ss corners only, 512 endpoints, TNS -1586 ns. Hold clean. 4,439 max slew, 7 max cap, 39 max fanout violations. |
| clk50ns| 50ns clock, defaults| -4.964| 0.11| 321533| 546137| 0 (clean)| 0 (clean)| Appears the same as the baseline. 50ns period was not enough.|
| | | | | | | | | |
| | | | | | | | | |
| | | | | | | | | |