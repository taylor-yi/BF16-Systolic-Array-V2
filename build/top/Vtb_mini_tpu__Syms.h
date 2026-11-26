// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VTB_MINI_TPU__SYMS_H_
#define VERILATED_VTB_MINI_TPU__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Vtb_mini_tpu.h"

// INCLUDE MODULE CLASSES
#include "Vtb_mini_tpu___024root.h"
#include "Vtb_mini_tpu_std.h"
#include "Vtb_mini_tpu_processing_element.h"
#include "Vtb_mini_tpu_std__03a__03aprocess__Vclpkg.h"
#include "Vtb_mini_tpu_std__03a__03asemaphore__Vclpkg.h"

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES) Vtb_mini_tpu__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vtb_mini_tpu* const __Vm_modelp;
    const bool __Vm_isRoot;
    std::string __Vm_topNames[2];
    VlDeleter __Vm_deleter;
    bool& __Vm_didInit;

    // MODULE INSTANCE STATE
    union {
        struct {
            Vtb_mini_tpu___024root         TOP;
            Vtb_mini_tpu_processing_element TOP__tb_mini_tpu__DOT__dut__DOT__u_array__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__pe;
            Vtb_mini_tpu_processing_element TOP__tb_mini_tpu__DOT__dut__DOT__u_array__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__pe;
            Vtb_mini_tpu_processing_element TOP__tb_mini_tpu__DOT__dut__DOT__u_array__DOT__row__BRA__0__KET____DOT__col__BRA__2__KET____DOT__pe;
            Vtb_mini_tpu_processing_element TOP__tb_mini_tpu__DOT__dut__DOT__u_array__DOT__row__BRA__0__KET____DOT__col__BRA__3__KET____DOT__pe;
            Vtb_mini_tpu_processing_element TOP__tb_mini_tpu__DOT__dut__DOT__u_array__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__pe;
            Vtb_mini_tpu_processing_element TOP__tb_mini_tpu__DOT__dut__DOT__u_array__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__pe;
            Vtb_mini_tpu_processing_element TOP__tb_mini_tpu__DOT__dut__DOT__u_array__DOT__row__BRA__1__KET____DOT__col__BRA__2__KET____DOT__pe;
            Vtb_mini_tpu_processing_element TOP__tb_mini_tpu__DOT__dut__DOT__u_array__DOT__row__BRA__1__KET____DOT__col__BRA__3__KET____DOT__pe;
            Vtb_mini_tpu_processing_element TOP__tb_mini_tpu__DOT__dut__DOT__u_array__DOT__row__BRA__2__KET____DOT__col__BRA__0__KET____DOT__pe;
            Vtb_mini_tpu_processing_element TOP__tb_mini_tpu__DOT__dut__DOT__u_array__DOT__row__BRA__2__KET____DOT__col__BRA__1__KET____DOT__pe;
            Vtb_mini_tpu_processing_element TOP__tb_mini_tpu__DOT__dut__DOT__u_array__DOT__row__BRA__2__KET____DOT__col__BRA__2__KET____DOT__pe;
            Vtb_mini_tpu_processing_element TOP__tb_mini_tpu__DOT__dut__DOT__u_array__DOT__row__BRA__2__KET____DOT__col__BRA__3__KET____DOT__pe;
            Vtb_mini_tpu_processing_element TOP__tb_mini_tpu__DOT__dut__DOT__u_array__DOT__row__BRA__3__KET____DOT__col__BRA__0__KET____DOT__pe;
            Vtb_mini_tpu_processing_element TOP__tb_mini_tpu__DOT__dut__DOT__u_array__DOT__row__BRA__3__KET____DOT__col__BRA__1__KET____DOT__pe;
            Vtb_mini_tpu_processing_element TOP__tb_mini_tpu__DOT__dut__DOT__u_array__DOT__row__BRA__3__KET____DOT__col__BRA__2__KET____DOT__pe;
            Vtb_mini_tpu_processing_element TOP__tb_mini_tpu__DOT__dut__DOT__u_array__DOT__row__BRA__3__KET____DOT__col__BRA__3__KET____DOT__pe;
            Vtb_mini_tpu_std               TOP__std;
            Vtb_mini_tpu_std__03a__03aprocess__Vclpkg TOP__std__03a__03aprocess__Vclpkg;
            Vtb_mini_tpu_std__03a__03asemaphore__Vclpkg TOP__std__03a__03asemaphore__Vclpkg;
        } vlInst;
    };

    // CONSTRUCTORS
    Vtb_mini_tpu__Syms(VerilatedContext* contextp, Vtb_mini_tpu* modelp, const char* namep, bool isRoot);
    ~Vtb_mini_tpu__Syms();

    // METHODS
    const char* name() const { return vlInst.TOP.vlNamep; }
};

#endif  // guard
