`ifndef SA_PKG_SV
`define SA_PKG_SV

`timescale 1ns/1ps

package sa_pkg;
    parameter int N = 4; // Square dimension of systolic array
    parameter int K = 16; // Reduction length, essentially how many units are we passing in from the left side

endpackage
`endif