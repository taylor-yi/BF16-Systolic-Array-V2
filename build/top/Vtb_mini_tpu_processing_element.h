// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_mini_tpu.h for the primary calling header

#ifndef VERILATED_VTB_MINI_TPU_PROCESSING_ELEMENT_H_
#define VERILATED_VTB_MINI_TPU_PROCESSING_ELEMENT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vtb_mini_tpu__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_mini_tpu_processing_element final {
  public:

    // TRIVIALLY CONSTRUCTIBLE STATE
    ::CData/*0:0*/ __PVT__u_add__DOT__a_inf;
    ::CData/*0:0*/ __PVT__u_add__DOT__b_inf;
    ::CData/*0:0*/ __PVT__pipeline_register__DOT__en_out;
    ::CData/*0:0*/ __PVT__pipeline_register__DOT__skip_out;
    ::CData/*0:0*/ __PVT__u_mul__DOT__a_inf;
    ::CData/*0:0*/ __PVT__u_mul__DOT__b_inf;
    ::CData/*0:0*/ __Vdfg_Regularize_454;
    ::SData/*15:0*/ __PVT__u_mul__DOT__prod;
    ::SData/*10:0*/ __Vdfg_Regularize_452;
    ::SData/*9:0*/ __Vdfg_Regularize_457;
    ::IData/*31:0*/ __PVT__accumulator;
    ::IData/*31:0*/ __PVT__pipeline_register__DOT__out;
    ::IData/*26:0*/ __Vdfg_Regularize_456;
    ::IData/*31:0*/ __Vdly__accumulator_65;

    // INTERNAL VARIABLES
    Vtb_mini_tpu__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vtb_mini_tpu_processing_element(Vtb_mini_tpu__Syms* symsp, const char* namep);
    ~Vtb_mini_tpu_processing_element();
    VL_UNCOPYABLE(Vtb_mini_tpu_processing_element);
    VL_UNMOVABLE(Vtb_mini_tpu_processing_element);

    // INTERNAL METHODS
};


#endif  // guard
