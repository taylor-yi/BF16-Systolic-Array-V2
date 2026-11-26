// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_mini_tpu.h for the primary calling header

#ifndef VERILATED_VTB_MINI_TPU_STD_H_
#define VERILATED_VTB_MINI_TPU_STD_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vtb_mini_tpu__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_mini_tpu_std final {
  public:

    // INTERNAL VARIABLES
    Vtb_mini_tpu__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vtb_mini_tpu_std(Vtb_mini_tpu__Syms* symsp, const char* namep);
    ~Vtb_mini_tpu_std();
    VL_UNCOPYABLE(Vtb_mini_tpu_std);
    VL_UNMOVABLE(Vtb_mini_tpu_std);

    // INTERNAL METHODS
};


#endif  // guard
