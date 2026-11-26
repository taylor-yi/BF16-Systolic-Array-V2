// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_mini_tpu.h for the primary calling header

#include "Vtb_mini_tpu__pch.h"

void Vtb_mini_tpu_std__03a__03aprocess__Vclpkg__ctor(Vtb_mini_tpu_std__03a__03aprocess__Vclpkg* vlSelf, Vtb_mini_tpu__Syms* symsp, const char* namep) {
    vlSelf->vlSymsp = symsp;
    vlSelf->vlNamep = strdup(namep);
    // Construct members
    // Reset structure values
}

Vtb_mini_tpu_std__03a__03aprocess__Vclpkg::Vtb_mini_tpu_std__03a__03aprocess__Vclpkg(Vtb_mini_tpu__Syms* symsp, const char* namep) {
    Vtb_mini_tpu_std__03a__03aprocess__Vclpkg__ctor(this, symsp, namep);
}

void Vtb_mini_tpu_std__03a__03aprocess__Vclpkg__dtor(Vtb_mini_tpu_std__03a__03aprocess__Vclpkg* vlSelf) {
    // Destroy members
    VL_DO_DANGLING(std::free(const_cast<char*>(vlSelf->vlNamep)), vlSelf->vlNamep);
}

Vtb_mini_tpu_std__03a__03aprocess__Vclpkg::~Vtb_mini_tpu_std__03a__03aprocess__Vclpkg() {
    Vtb_mini_tpu_std__03a__03aprocess__Vclpkg__dtor(this);
}
