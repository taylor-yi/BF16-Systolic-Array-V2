// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_units.h for the primary calling header

#include "Vtb_units__pch.h"

void Vtb_units___024root___ctor_var_reset(Vtb_units___024root* vlSelf);

Vtb_units___024root::Vtb_units___024root(Vtb_units__Syms* symsp, const char* namep)
    : __VdlySched{*symsp->_vm_contextp__}
 {
    vlSymsp = symsp;
    vlNamep = strdup(namep);
    // Reset structure values
    Vtb_units___024root___ctor_var_reset(this);
}

void Vtb_units___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vtb_units___024root::~Vtb_units___024root() {
    VL_DO_DANGLING(std::free(const_cast<char*>(vlNamep)), vlNamep);
}
