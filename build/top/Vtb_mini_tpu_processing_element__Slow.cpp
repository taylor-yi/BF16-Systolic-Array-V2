// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_mini_tpu.h for the primary calling header

#include "Vtb_mini_tpu__pch.h"

void Vtb_mini_tpu_processing_element___ctor_var_reset(Vtb_mini_tpu_processing_element* vlSelf);

void Vtb_mini_tpu_processing_element__ctor(Vtb_mini_tpu_processing_element* vlSelf, Vtb_mini_tpu__Syms* symsp, const char* namep) {
    vlSelf->vlSymsp = symsp;
    vlSelf->vlNamep = strdup(namep);
    // Construct members
    // Reset structure values
    Vtb_mini_tpu_processing_element___ctor_var_reset(vlSelf);
}

Vtb_mini_tpu_processing_element::Vtb_mini_tpu_processing_element(Vtb_mini_tpu__Syms* symsp, const char* namep) {
    Vtb_mini_tpu_processing_element__ctor(this, symsp, namep);
}

void Vtb_mini_tpu_processing_element__dtor(Vtb_mini_tpu_processing_element* vlSelf) {
    // Destroy members
    VL_DO_DANGLING(std::free(const_cast<char*>(vlSelf->vlNamep)), vlSelf->vlNamep);
}

Vtb_mini_tpu_processing_element::~Vtb_mini_tpu_processing_element() {
    Vtb_mini_tpu_processing_element__dtor(this);
}
