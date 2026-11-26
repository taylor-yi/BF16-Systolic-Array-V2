| run_tag     | clock_ns | setup_ws_ns | hold_ws_ns | cell_area_um2 | die_area_um2 | drc | lvs | notes                                                                                              |
| ----------- | -------- | ----------- | ---------- | ------------- | ------------ | --- | --- | -------------------------------------------------------------------------------------------------- |
| baseline    | 40       | -4.964      | 0.111      | 321533        | 546137       | 0   | 0   | fails setup at ss corners only                                                                     |
| clk_50_ns   | 50       | -4.139      | 0.111      | 311810        | 546137       | 0   | 0   | setup slack still negative marginally improved                                                     |
| clk_60_ns   | 60       | -4.643      | 0.112      | 311957        | 546137       | 0   | 0   | setup worst slack got worse so its not a timing issue try pipelining tomorrow                      |
| 40_ns_piped | 40       | -5.347      | 0.1044     | 406253        | 698633       | 0   | 0   | clean run worst negative slack still non zero. Attempting to increase clock period with pipelining |
