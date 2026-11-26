// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_mini_tpu.h for the primary calling header

#include "Vtb_mini_tpu__pch.h"

void Vtb_mini_tpu___024root___ctor_var_reset(Vtb_mini_tpu___024root* vlSelf);

void Vtb_mini_tpu___024root__ctor(Vtb_mini_tpu___024root* vlSelf, Vtb_mini_tpu__Syms* symsp, const char* namep) {
    vlSelf->vlSymsp = symsp;
    vlSelf->vlNamep = strdup(namep);
    // Construct members
    VL_INPLACE_CONSTRUCT(vlSelf->__Vnontrivs.tb_mini_tpu__DOT__fname);
    VL_INPLACE_CONSTRUCT(vlSelf->__Vnontrivs.__VdlySched, *vlSelf->vlSymsp->_vm_contextp__);
    VL_INPLACE_CONSTRUCT(vlSelf->__Vnontrivs.__VtrigSched_h57d84607__0);
    VL_INPLACE_CONSTRUCT(vlSelf->__Vnontrivs.__VtrigSched_h57d84742__0);
    VL_INPLACE_CONSTRUCT(vlSelf->__Vnontrivs.__VtrigSched_hafb832d4__0);
    // Reset structure values
    Vtb_mini_tpu___024root___ctor_var_reset(vlSelf);
}

Vtb_mini_tpu___024root::Vtb_mini_tpu___024root(Vtb_mini_tpu__Syms* symsp, const char* namep) {
    Vtb_mini_tpu___024root__ctor(this, symsp, namep);
}

void Vtb_mini_tpu___024root__dtor(Vtb_mini_tpu___024root* vlSelf) {
    // Destroy members
    VL_INPLACE_DESTRUCT(vlSelf->__Vnontrivs.__VtrigSched_hafb832d4__0);
    VL_INPLACE_DESTRUCT(vlSelf->__Vnontrivs.__VtrigSched_h57d84742__0);
    VL_INPLACE_DESTRUCT(vlSelf->__Vnontrivs.__VtrigSched_h57d84607__0);
    VL_INPLACE_DESTRUCT(vlSelf->__Vnontrivs.__VdlySched);
    VL_INPLACE_DESTRUCT(vlSelf->__Vnontrivs.tb_mini_tpu__DOT__fname);
    VL_DO_DANGLING(std::free(const_cast<char*>(vlSelf->vlNamep)), vlSelf->vlNamep);
}

Vtb_mini_tpu___024root::~Vtb_mini_tpu___024root() {
    Vtb_mini_tpu___024root__dtor(this);
}
