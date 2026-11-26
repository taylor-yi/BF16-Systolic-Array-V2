// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_mini_tpu.h for the primary calling header

#ifndef VERILATED_VTB_MINI_TPU_STD__03A__03APROCESS__VCLPKG_H_
#define VERILATED_VTB_MINI_TPU_STD__03A__03APROCESS__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vtb_mini_tpu__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_mini_tpu_std__03a__03aprocess__Vclpkg final {
  public:

    // INTERNAL VARIABLES
    Vtb_mini_tpu__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vtb_mini_tpu_std__03a__03aprocess__Vclpkg(Vtb_mini_tpu__Syms* symsp, const char* namep);
    ~Vtb_mini_tpu_std__03a__03aprocess__Vclpkg();
    VL_UNCOPYABLE(Vtb_mini_tpu_std__03a__03aprocess__Vclpkg);
    VL_UNMOVABLE(Vtb_mini_tpu_std__03a__03aprocess__Vclpkg);

    // INTERNAL METHODS
};


class Vtb_mini_tpu__Syms;

class Vtb_mini_tpu_std__03a__03aprocess : public virtual VlClass {
  public:

    // NOT TRIVIALLY CONSTRUCTIBLE STATE
    ::VlProcessRef m_process;

    // INTERNAL METHODS
    virtual const char* typeName() const { return "std::process"; }
    VlClass* clone() const { return new Vtb_mini_tpu_std__03a__03aprocess(*this); }
  private:
    void _ctor_var_reset(Vtb_mini_tpu__Syms* __restrict vlSymsp);
  public:
    Vtb_mini_tpu_std__03a__03aprocess() = default;
    void init(Vtb_mini_tpu__Syms* __restrict vlSymsp);
    ~Vtb_mini_tpu_std__03a__03aprocess();
};


#endif  // guard
