// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_mini_tpu.h for the primary calling header

#ifndef VERILATED_VTB_MINI_TPU___024ROOT_H_
#define VERILATED_VTB_MINI_TPU___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
class Vtb_mini_tpu_processing_element;
class Vtb_mini_tpu_std;
class Vtb_mini_tpu_std__03a__03aprocess__Vclpkg;
class Vtb_mini_tpu_std__03a__03asemaphore__Vclpkg;


class Vtb_mini_tpu__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_mini_tpu___024root final {
  public:
    // CELLS
    Vtb_mini_tpu_std* std;
    Vtb_mini_tpu_processing_element* __PVT__tb_mini_tpu__DOT__dut__DOT__u_array__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__pe;
    Vtb_mini_tpu_processing_element* __PVT__tb_mini_tpu__DOT__dut__DOT__u_array__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__pe;
    Vtb_mini_tpu_processing_element* __PVT__tb_mini_tpu__DOT__dut__DOT__u_array__DOT__row__BRA__0__KET____DOT__col__BRA__2__KET____DOT__pe;
    Vtb_mini_tpu_processing_element* __PVT__tb_mini_tpu__DOT__dut__DOT__u_array__DOT__row__BRA__0__KET____DOT__col__BRA__3__KET____DOT__pe;
    Vtb_mini_tpu_processing_element* __PVT__tb_mini_tpu__DOT__dut__DOT__u_array__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__pe;
    Vtb_mini_tpu_processing_element* __PVT__tb_mini_tpu__DOT__dut__DOT__u_array__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__pe;
    Vtb_mini_tpu_processing_element* __PVT__tb_mini_tpu__DOT__dut__DOT__u_array__DOT__row__BRA__1__KET____DOT__col__BRA__2__KET____DOT__pe;
    Vtb_mini_tpu_processing_element* __PVT__tb_mini_tpu__DOT__dut__DOT__u_array__DOT__row__BRA__1__KET____DOT__col__BRA__3__KET____DOT__pe;
    Vtb_mini_tpu_processing_element* __PVT__tb_mini_tpu__DOT__dut__DOT__u_array__DOT__row__BRA__2__KET____DOT__col__BRA__0__KET____DOT__pe;
    Vtb_mini_tpu_processing_element* __PVT__tb_mini_tpu__DOT__dut__DOT__u_array__DOT__row__BRA__2__KET____DOT__col__BRA__1__KET____DOT__pe;
    Vtb_mini_tpu_processing_element* __PVT__tb_mini_tpu__DOT__dut__DOT__u_array__DOT__row__BRA__2__KET____DOT__col__BRA__2__KET____DOT__pe;
    Vtb_mini_tpu_processing_element* __PVT__tb_mini_tpu__DOT__dut__DOT__u_array__DOT__row__BRA__2__KET____DOT__col__BRA__3__KET____DOT__pe;
    Vtb_mini_tpu_processing_element* __PVT__tb_mini_tpu__DOT__dut__DOT__u_array__DOT__row__BRA__3__KET____DOT__col__BRA__0__KET____DOT__pe;
    Vtb_mini_tpu_processing_element* __PVT__tb_mini_tpu__DOT__dut__DOT__u_array__DOT__row__BRA__3__KET____DOT__col__BRA__1__KET____DOT__pe;
    Vtb_mini_tpu_processing_element* __PVT__tb_mini_tpu__DOT__dut__DOT__u_array__DOT__row__BRA__3__KET____DOT__col__BRA__2__KET____DOT__pe;
    Vtb_mini_tpu_processing_element* __PVT__tb_mini_tpu__DOT__dut__DOT__u_array__DOT__row__BRA__3__KET____DOT__col__BRA__3__KET____DOT__pe;
    Vtb_mini_tpu_std__03a__03aprocess__Vclpkg* std__03a__03aprocess__Vclpkg;
    Vtb_mini_tpu_std__03a__03asemaphore__Vclpkg* std__03a__03asemaphore__Vclpkg;

    // TRIVIALLY CONSTRUCTIBLE STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        ::CData/*0:0*/ tb_mini_tpu__DOT__clk;
        ::CData/*0:0*/ tb_mini_tpu__DOT__rst;
        ::CData/*0:0*/ tb_mini_tpu__DOT__start;
        ::CData/*0:0*/ tb_mini_tpu__DOT__unnamedblk9__DOT__ok;
        ::CData/*3:0*/ tb_mini_tpu__DOT__dut__DOT__rst_row;
        ::CData/*0:0*/ tb_mini_tpu__DOT__dut__DOT__u_array__DOT__loc_rst;
        ::CData/*0:0*/ tb_mini_tpu__DOT__dut__DOT__genblk1__BRA__3__KET____DOT__u_rst__DOT__rst_out;
        ::CData/*0:0*/ tb_mini_tpu__DOT__dut__DOT__genblk1__BRA__3__KET____DOT__u_rst__DOT__s1;
        ::CData/*0:0*/ tb_mini_tpu__DOT__dut__DOT__genblk1__BRA__2__KET____DOT__u_rst__DOT__rst_out;
        ::CData/*0:0*/ tb_mini_tpu__DOT__dut__DOT__genblk1__BRA__2__KET____DOT__u_rst__DOT__s1;
        ::CData/*0:0*/ tb_mini_tpu__DOT__dut__DOT__genblk1__BRA__1__KET____DOT__u_rst__DOT__rst_out;
        ::CData/*0:0*/ tb_mini_tpu__DOT__dut__DOT__genblk1__BRA__1__KET____DOT__u_rst__DOT__s1;
        ::CData/*0:0*/ tb_mini_tpu__DOT__dut__DOT__genblk1__BRA__0__KET____DOT__u_rst__DOT__rst_out;
        ::CData/*0:0*/ tb_mini_tpu__DOT__dut__DOT__genblk1__BRA__0__KET____DOT__u_rst__DOT__s1;
        ::CData/*0:0*/ tb_mini_tpu__DOT__dut__DOT__u_rst_core__DOT__rst_out;
        ::CData/*0:0*/ tb_mini_tpu__DOT__dut__DOT__u_rst_core__DOT__s1;
        ::CData/*0:0*/ tb_mini_tpu__DOT__dut__DOT__u_mem__DOT__result_valid;
        ::CData/*0:0*/ tb_mini_tpu__DOT__dut__DOT__u_mem__DOT__drain_q;
        ::CData/*0:0*/ tb_mini_tpu__DOT__dut__DOT__u_ctrl__DOT__done;
        ::CData/*1:0*/ tb_mini_tpu__DOT__dut__DOT__u_ctrl__DOT__state;
        ::CData/*3:0*/ tb_mini_tpu__DOT__dut__DOT__u_ctrl__DOT__cycle_cnt;
        ::CData/*1:0*/ __Vdly__tb_mini_tpu__DOT__dut__DOT__u_ctrl__DOT__state_72;
        ::CData/*0:0*/ __Vtrigprevexpr___TOP__tb_mini_tpu__DOT__clk__0;
        ::CData/*0:0*/ __Vtrigprevexpr___TOP__tb_mini_tpu__DOT__dut__DOT__u_array__DOT__loc_rst__0;
        ::CData/*0:0*/ __Vtrigprevexpr___TOP__tb_mini_tpu__DOT__rst__0;
        ::CData/*0:0*/ __Vtrigprevexpr___TOP__tb_mini_tpu__DOT__dut__DOT__u_rst_core__DOT__rst_out__0;
        ::CData/*0:0*/ __Vtrigprevexpr___TOP__tb_mini_tpu__DOT__dut__DOT__u_ctrl__DOT__done__0;
        ::SData/*15:0*/ tb_mini_tpu__DOT__C_exp__BRA__0__KET____BRA__0__KET__;
        ::SData/*15:0*/ tb_mini_tpu__DOT__C_exp__BRA__0__KET____BRA__1__KET__;
        ::SData/*15:0*/ tb_mini_tpu__DOT__C_exp__BRA__0__KET____BRA__2__KET__;
        ::SData/*15:0*/ tb_mini_tpu__DOT__C_exp__BRA__0__KET____BRA__3__KET__;
        ::SData/*15:0*/ tb_mini_tpu__DOT__C_exp__BRA__1__KET____BRA__0__KET__;
        ::SData/*15:0*/ tb_mini_tpu__DOT__C_exp__BRA__1__KET____BRA__1__KET__;
        ::SData/*15:0*/ tb_mini_tpu__DOT__C_exp__BRA__1__KET____BRA__2__KET__;
        ::SData/*15:0*/ tb_mini_tpu__DOT__C_exp__BRA__1__KET____BRA__3__KET__;
        ::SData/*15:0*/ tb_mini_tpu__DOT__C_exp__BRA__2__KET____BRA__0__KET__;
        ::SData/*15:0*/ tb_mini_tpu__DOT__C_exp__BRA__2__KET____BRA__1__KET__;
        ::SData/*15:0*/ tb_mini_tpu__DOT__C_exp__BRA__2__KET____BRA__2__KET__;
        ::SData/*15:0*/ tb_mini_tpu__DOT__C_exp__BRA__2__KET____BRA__3__KET__;
        ::SData/*15:0*/ tb_mini_tpu__DOT__C_exp__BRA__3__KET____BRA__0__KET__;
        ::SData/*15:0*/ tb_mini_tpu__DOT__C_exp__BRA__3__KET____BRA__1__KET__;
        ::SData/*15:0*/ tb_mini_tpu__DOT__C_exp__BRA__3__KET____BRA__2__KET__;
        ::SData/*15:0*/ tb_mini_tpu__DOT__C_exp__BRA__3__KET____BRA__3__KET__;
        ::SData/*15:0*/ tb_mini_tpu__DOT__dut__DOT__u_array__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__a_q;
        ::SData/*15:0*/ tb_mini_tpu__DOT__dut__DOT__u_array__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__b_q;
        ::SData/*15:0*/ tb_mini_tpu__DOT__dut__DOT__u_array__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__a_q;
        ::SData/*15:0*/ tb_mini_tpu__DOT__dut__DOT__u_array__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__b_q;
        ::SData/*15:0*/ tb_mini_tpu__DOT__dut__DOT__u_array__DOT__row__BRA__0__KET____DOT__col__BRA__2__KET____DOT__a_q;
        ::SData/*15:0*/ tb_mini_tpu__DOT__dut__DOT__u_array__DOT__row__BRA__0__KET____DOT__col__BRA__2__KET____DOT__b_q;
        ::SData/*15:0*/ tb_mini_tpu__DOT__dut__DOT__u_array__DOT__row__BRA__0__KET____DOT__col__BRA__3__KET____DOT__b_q;
        ::SData/*15:0*/ tb_mini_tpu__DOT__dut__DOT__u_array__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__a_q;
        ::SData/*15:0*/ tb_mini_tpu__DOT__dut__DOT__u_array__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__b_q;
        ::SData/*15:0*/ tb_mini_tpu__DOT__dut__DOT__u_array__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__a_q;
        ::SData/*15:0*/ tb_mini_tpu__DOT__dut__DOT__u_array__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__b_q;
        ::SData/*15:0*/ tb_mini_tpu__DOT__dut__DOT__u_array__DOT__row__BRA__1__KET____DOT__col__BRA__2__KET____DOT__a_q;
        ::SData/*15:0*/ tb_mini_tpu__DOT__dut__DOT__u_array__DOT__row__BRA__1__KET____DOT__col__BRA__2__KET____DOT__b_q;
        ::SData/*15:0*/ tb_mini_tpu__DOT__dut__DOT__u_array__DOT__row__BRA__1__KET____DOT__col__BRA__3__KET____DOT__b_q;
        ::SData/*15:0*/ tb_mini_tpu__DOT__dut__DOT__u_array__DOT__row__BRA__2__KET____DOT__col__BRA__0__KET____DOT__a_q;
        ::SData/*15:0*/ tb_mini_tpu__DOT__dut__DOT__u_array__DOT__row__BRA__2__KET____DOT__col__BRA__0__KET____DOT__b_q;
        ::SData/*15:0*/ tb_mini_tpu__DOT__dut__DOT__u_array__DOT__row__BRA__2__KET____DOT__col__BRA__1__KET____DOT__a_q;
        ::SData/*15:0*/ tb_mini_tpu__DOT__dut__DOT__u_array__DOT__row__BRA__2__KET____DOT__col__BRA__1__KET____DOT__b_q;
        ::SData/*15:0*/ tb_mini_tpu__DOT__dut__DOT__u_array__DOT__row__BRA__2__KET____DOT__col__BRA__2__KET____DOT__a_q;
        ::SData/*15:0*/ tb_mini_tpu__DOT__dut__DOT__u_array__DOT__row__BRA__2__KET____DOT__col__BRA__2__KET____DOT__b_q;
        ::SData/*15:0*/ tb_mini_tpu__DOT__dut__DOT__u_array__DOT__row__BRA__2__KET____DOT__col__BRA__3__KET____DOT__b_q;
    };
    struct {
        ::SData/*15:0*/ tb_mini_tpu__DOT__dut__DOT__u_array__DOT__row__BRA__3__KET____DOT__col__BRA__0__KET____DOT__a_q;
        ::SData/*15:0*/ tb_mini_tpu__DOT__dut__DOT__u_array__DOT__row__BRA__3__KET____DOT__col__BRA__1__KET____DOT__a_q;
        ::SData/*15:0*/ tb_mini_tpu__DOT__dut__DOT__u_array__DOT__row__BRA__3__KET____DOT__col__BRA__2__KET____DOT__a_q;
        ::SData/*15:0*/ tb_mini_tpu__DOT__dut__DOT__u_mem__DOT__result_matrix__BRA__0__KET____BRA__0__KET__;
        ::SData/*15:0*/ tb_mini_tpu__DOT__dut__DOT__u_mem__DOT__result_matrix__BRA__0__KET____BRA__1__KET__;
        ::SData/*15:0*/ tb_mini_tpu__DOT__dut__DOT__u_mem__DOT__result_matrix__BRA__0__KET____BRA__2__KET__;
        ::SData/*15:0*/ tb_mini_tpu__DOT__dut__DOT__u_mem__DOT__result_matrix__BRA__0__KET____BRA__3__KET__;
        ::SData/*15:0*/ tb_mini_tpu__DOT__dut__DOT__u_mem__DOT__result_matrix__BRA__1__KET____BRA__0__KET__;
        ::SData/*15:0*/ tb_mini_tpu__DOT__dut__DOT__u_mem__DOT__result_matrix__BRA__1__KET____BRA__1__KET__;
        ::SData/*15:0*/ tb_mini_tpu__DOT__dut__DOT__u_mem__DOT__result_matrix__BRA__1__KET____BRA__2__KET__;
        ::SData/*15:0*/ tb_mini_tpu__DOT__dut__DOT__u_mem__DOT__result_matrix__BRA__1__KET____BRA__3__KET__;
        ::SData/*15:0*/ tb_mini_tpu__DOT__dut__DOT__u_mem__DOT__result_matrix__BRA__2__KET____BRA__0__KET__;
        ::SData/*15:0*/ tb_mini_tpu__DOT__dut__DOT__u_mem__DOT__result_matrix__BRA__2__KET____BRA__1__KET__;
        ::SData/*15:0*/ tb_mini_tpu__DOT__dut__DOT__u_mem__DOT__result_matrix__BRA__2__KET____BRA__2__KET__;
        ::SData/*15:0*/ tb_mini_tpu__DOT__dut__DOT__u_mem__DOT__result_matrix__BRA__2__KET____BRA__3__KET__;
        ::SData/*15:0*/ tb_mini_tpu__DOT__dut__DOT__u_mem__DOT__result_matrix__BRA__3__KET____BRA__0__KET__;
        ::SData/*15:0*/ tb_mini_tpu__DOT__dut__DOT__u_mem__DOT__result_matrix__BRA__3__KET____BRA__1__KET__;
        ::SData/*15:0*/ tb_mini_tpu__DOT__dut__DOT__u_mem__DOT__result_matrix__BRA__3__KET____BRA__2__KET__;
        ::SData/*15:0*/ tb_mini_tpu__DOT__dut__DOT__u_mem__DOT__result_matrix__BRA__3__KET____BRA__3__KET__;
        ::SData/*15:0*/ tb_mini_tpu__DOT__dut__DOT__u_mem__DOT__skew__BRA__0__KET____DOT__sr_a__BRA__0__KET__;
        ::SData/*15:0*/ tb_mini_tpu__DOT__dut__DOT__u_mem__DOT__skew__BRA__0__KET____DOT__sr_b__BRA__0__KET__;
        ::SData/*15:0*/ tb_mini_tpu__DOT__dut__DOT__u_mem__DOT__skew__BRA__1__KET____DOT__sr_a__BRA__0__KET__;
        ::SData/*15:0*/ tb_mini_tpu__DOT__dut__DOT__u_mem__DOT__skew__BRA__1__KET____DOT__sr_a__BRA__1__KET__;
        ::SData/*15:0*/ tb_mini_tpu__DOT__dut__DOT__u_mem__DOT__skew__BRA__1__KET____DOT__sr_b__BRA__0__KET__;
        ::SData/*15:0*/ tb_mini_tpu__DOT__dut__DOT__u_mem__DOT__skew__BRA__1__KET____DOT__sr_b__BRA__1__KET__;
        ::SData/*15:0*/ tb_mini_tpu__DOT__dut__DOT__u_mem__DOT__skew__BRA__2__KET____DOT__sr_a__BRA__0__KET__;
        ::SData/*15:0*/ tb_mini_tpu__DOT__dut__DOT__u_mem__DOT__skew__BRA__2__KET____DOT__sr_a__BRA__1__KET__;
        ::SData/*15:0*/ tb_mini_tpu__DOT__dut__DOT__u_mem__DOT__skew__BRA__2__KET____DOT__sr_a__BRA__2__KET__;
        ::SData/*15:0*/ tb_mini_tpu__DOT__dut__DOT__u_mem__DOT__skew__BRA__2__KET____DOT__sr_b__BRA__0__KET__;
        ::SData/*15:0*/ tb_mini_tpu__DOT__dut__DOT__u_mem__DOT__skew__BRA__2__KET____DOT__sr_b__BRA__1__KET__;
        ::SData/*15:0*/ tb_mini_tpu__DOT__dut__DOT__u_mem__DOT__skew__BRA__2__KET____DOT__sr_b__BRA__2__KET__;
        ::SData/*15:0*/ tb_mini_tpu__DOT__dut__DOT__u_mem__DOT__skew__BRA__3__KET____DOT__sr_a__BRA__0__KET__;
        ::SData/*15:0*/ tb_mini_tpu__DOT__dut__DOT__u_mem__DOT__skew__BRA__3__KET____DOT__sr_a__BRA__1__KET__;
        ::SData/*15:0*/ tb_mini_tpu__DOT__dut__DOT__u_mem__DOT__skew__BRA__3__KET____DOT__sr_a__BRA__2__KET__;
        ::SData/*15:0*/ tb_mini_tpu__DOT__dut__DOT__u_mem__DOT__skew__BRA__3__KET____DOT__sr_a__BRA__3__KET__;
        ::SData/*15:0*/ tb_mini_tpu__DOT__dut__DOT__u_mem__DOT__skew__BRA__3__KET____DOT__sr_b__BRA__0__KET__;
        ::SData/*15:0*/ tb_mini_tpu__DOT__dut__DOT__u_mem__DOT__skew__BRA__3__KET____DOT__sr_b__BRA__1__KET__;
        ::SData/*15:0*/ tb_mini_tpu__DOT__dut__DOT__u_mem__DOT__skew__BRA__3__KET____DOT__sr_b__BRA__2__KET__;
        ::SData/*15:0*/ tb_mini_tpu__DOT__dut__DOT__u_mem__DOT__skew__BRA__3__KET____DOT__sr_b__BRA__3__KET__;
        ::IData/*31:0*/ tb_mini_tpu__DOT__TOL;
        ::IData/*31:0*/ tb_mini_tpu__DOT__MAXERR;
        ::IData/*31:0*/ tb_mini_tpu__DOT__tests;
        ::IData/*31:0*/ tb_mini_tpu__DOT__bad_tests;
        ::IData/*31:0*/ tb_mini_tpu__DOT__bad_cells;
        ::IData/*31:0*/ tb_mini_tpu__DOT__max_ulp;
        ::IData/*31:0*/ __Vi;
        ::QData/*63:0*/ tb_mini_tpu__DOT__a_flat;
        ::QData/*63:0*/ tb_mini_tpu__DOT__b_flat;
        ::QData/*63:0*/ tb_mini_tpu__DOT__dut__DOT__u_array__DOT__result_out;
        ::VlUnpacked<::SData/*15:0*/, 4> tb_mini_tpu__DOT__A__BRA__0__KET__;
        ::VlUnpacked<::SData/*15:0*/, 4> tb_mini_tpu__DOT__A__BRA__1__KET__;
        ::VlUnpacked<::SData/*15:0*/, 4> tb_mini_tpu__DOT__A__BRA__2__KET__;
        ::VlUnpacked<::SData/*15:0*/, 4> tb_mini_tpu__DOT__A__BRA__3__KET__;
        ::VlUnpacked<::VlUnpacked<::SData/*15:0*/, 4>, 4> tb_mini_tpu__DOT__B;
        ::VlUnpacked<::QData/*63:0*/, 1> __VstlTriggered;
        ::VlUnpacked<::QData/*63:0*/, 1> __VicoTriggered;
        ::VlUnpacked<::QData/*63:0*/, 1> __VactTriggered;
        ::VlUnpacked<::QData/*63:0*/, 1> __VactTriggeredAcc;
        ::VlUnpacked<::QData/*63:0*/, 1> __VnbaTriggered;
    };

    // NOT TRIVIALLY CONSTRUCTIBLE STATE
    union {
        struct {
            ::std::string tb_mini_tpu__DOT__fname;
            ::VlDelayScheduler __VdlySched;
            ::VlTriggerScheduler __VtrigSched_h57d84607__0;
            ::VlTriggerScheduler __VtrigSched_h57d84742__0;
            ::VlTriggerScheduler __VtrigSched_hafb832d4__0;
        } __Vnontrivs;
    };

    // INTERNAL VARIABLES
    Vtb_mini_tpu__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vtb_mini_tpu___024root(Vtb_mini_tpu__Syms* symsp, const char* namep);
    ~Vtb_mini_tpu___024root();
    VL_UNCOPYABLE(Vtb_mini_tpu___024root);
    VL_UNMOVABLE(Vtb_mini_tpu___024root);

    // INTERNAL METHODS
};


#endif  // guard
