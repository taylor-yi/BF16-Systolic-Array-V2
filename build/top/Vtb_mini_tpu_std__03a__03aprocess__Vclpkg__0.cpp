// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_mini_tpu.h for the primary calling header

#include "Vtb_mini_tpu__pch.h"

void Vtb_mini_tpu_std__03a__03aprocess::init(Vtb_mini_tpu__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_mini_tpu_std__03a__03aprocess::new\n"); );
    // Body
    _ctor_var_reset(vlSymsp);
}

void Vtb_mini_tpu_std__03a__03aprocess::_ctor_var_reset(Vtb_mini_tpu__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_mini_tpu_std__03a__03aprocess::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
}

Vtb_mini_tpu_std__03a__03aprocess::~Vtb_mini_tpu_std__03a__03aprocess() {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_mini_tpu_std__03a__03aprocess::~\n"); );
    // Body



//*** Below code from `systemc in Verilog file
// From `systemc at /opt/homebrew/Cellar/verilator/5.054/share/verilator/include/verilated_std.sv:179:14

    if (m_process) m_process->clearSelf(this);
//*** Above code from `systemc in Verilog file


}
