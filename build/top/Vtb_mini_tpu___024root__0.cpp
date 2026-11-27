// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_mini_tpu.h for the primary calling header

#include "Vtb_mini_tpu__pch.h"

VlCoroutine Vtb_mini_tpu___024root___eval_initial__TOP__Vtiming__0(Vtb_mini_tpu___024root* vlSelf);
VlCoroutine Vtb_mini_tpu___024root___eval_initial__TOP__Vtiming__1(Vtb_mini_tpu___024root* vlSelf);

void Vtb_mini_tpu___024root___eval_initial(Vtb_mini_tpu___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_mini_tpu___024root___eval_initial\n"); );
    Vtb_mini_tpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    {
        // Inlined CFunc: _eval_initial__TOP
        if ((0U != VL_TESTPLUSARGS_I("WAVES"s))) {
            vlSymsp->_vm_contextp__->dumpfile("waves.vcd"s);
            VL_PRINTF_MT("-Info: tb/tb_mini_tpu.sv:23: $dumpvar ignored, as Verilated without --trace\n");
        }
    }
    Vtb_mini_tpu___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    Vtb_mini_tpu___024root___eval_initial__TOP__Vtiming__1(vlSelf);
}

void Vtb_mini_tpu___024root___eval_sample(Vtb_mini_tpu___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_mini_tpu___024root___eval_sample\n"); );
    Vtb_mini_tpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_mini_tpu___024root___dump_triggers__ico(const ::VlUnpacked<::QData/*63:0*/, 1> &triggers, const ::std::string &tag);
#endif  // VL_DEBUG

bool Vtb_mini_tpu___024root___eval_ico(Vtb_mini_tpu___024root* vlSelf, ::CData/*0:0*/ firstIteration) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_mini_tpu___024root___eval_ico\n"); );
    Vtb_mini_tpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VicoTriggered[0U] = ((0xfffffffffffffffeULL 
                                      & vlSelfRef.__VicoTriggered[0U]) 
                                     | (::IData)((::IData)(firstIteration)));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtb_mini_tpu___024root___dump_triggers__ico(vlSelfRef.__VicoTriggered, "ico"s);
    }
#endif
    return (0U);
}

void Vtb_mini_tpu___024root___timing_ready(Vtb_mini_tpu___024root* vlSelf);
void Vtb_mini_tpu___024root___trigger_orInto__act_vec_vec(::VlUnpacked<::QData/*63:0*/, 1> &out, const ::VlUnpacked<::QData/*63:0*/, 1> &in);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_mini_tpu___024root___dump_triggers__act(const ::VlUnpacked<::QData/*63:0*/, 1> &triggers, const ::std::string &tag);
#endif  // VL_DEBUG
bool Vtb_mini_tpu___024root___trigger_anySet__act(const ::VlUnpacked<::QData/*63:0*/, 1> &in);
void Vtb_mini_tpu___024root___timing_resume(Vtb_mini_tpu___024root* vlSelf);

bool Vtb_mini_tpu___024root___eval_act(Vtb_mini_tpu___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_mini_tpu___024root___eval_act\n"); );
    Vtb_mini_tpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    ::CData/*0:0*/ __VactExecute;
    // Body
    {
        // Inlined CFunc: _eval_triggers_vec__act
        vlSelfRef.__VactTriggered[0U] = (::QData)((::IData)(
                                                            (((vlSelfRef.__Vnontrivs.__VdlySched.awaitingCurrentTime() 
                                                               << 9U) 
                                                              | (((::IData)(vlSelfRef.tb_mini_tpu__DOT__dut__DOT__u_ctrl__DOT__done) 
                                                                  != (::IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_mini_tpu__DOT__dut__DOT__u_ctrl__DOT__done__0)) 
                                                                 << 8U)) 
                                                             | (((((((~ (::IData)(vlSelfRef.tb_mini_tpu__DOT__clk)) 
                                                                     & (::IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_mini_tpu__DOT__clk__0)) 
                                                                    << 3U) 
                                                                   | (((~ (::IData)(vlSelfRef.tb_mini_tpu__DOT__dut__DOT__genblk1__BRA__3__KET____DOT__u_rst__DOT__q)) 
                                                                       & (::IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_mini_tpu__DOT__dut__DOT__genblk1__BRA__3__KET____DOT__u_rst__DOT__q__0)) 
                                                                      << 2U)) 
                                                                  | ((((~ (::IData)(vlSelfRef.tb_mini_tpu__DOT__dut__DOT__genblk1__BRA__2__KET____DOT__u_rst__DOT__q)) 
                                                                       & (::IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_mini_tpu__DOT__dut__DOT__genblk1__BRA__2__KET____DOT__u_rst__DOT__q__0)) 
                                                                      << 1U) 
                                                                     | ((~ (::IData)(vlSelfRef.tb_mini_tpu__DOT__dut__DOT__genblk1__BRA__1__KET____DOT__u_rst__DOT__q)) 
                                                                        & (::IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_mini_tpu__DOT__dut__DOT__genblk1__BRA__1__KET____DOT__u_rst__DOT__q__0)))) 
                                                                 << 4U) 
                                                                | (((((~ (::IData)(vlSelfRef.tb_mini_tpu__DOT__dut__DOT__genblk1__BRA__0__KET____DOT__u_rst__DOT__q)) 
                                                                      & (::IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_mini_tpu__DOT__dut__DOT__genblk1__BRA__0__KET____DOT__u_rst__DOT__q__0)) 
                                                                     << 3U) 
                                                                    | (((~ (::IData)(vlSelfRef.tb_mini_tpu__DOT__dut__DOT__u_rst_core__DOT__q)) 
                                                                        & (::IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_mini_tpu__DOT__dut__DOT__u_rst_core__DOT__q__0)) 
                                                                       << 2U)) 
                                                                   | ((((~ (::IData)(vlSelfRef.tb_mini_tpu__DOT__rst)) 
                                                                        & (::IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_mini_tpu__DOT__rst__0)) 
                                                                       << 1U) 
                                                                      | ((::IData)(vlSelfRef.tb_mini_tpu__DOT__clk) 
                                                                         & (~ (::IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_mini_tpu__DOT__clk__0)))))))));
        vlSelfRef.__Vtrigprevexpr___TOP__tb_mini_tpu__DOT__clk__0 
            = vlSelfRef.tb_mini_tpu__DOT__clk;
        vlSelfRef.__Vtrigprevexpr___TOP__tb_mini_tpu__DOT__rst__0 
            = vlSelfRef.tb_mini_tpu__DOT__rst;
        vlSelfRef.__Vtrigprevexpr___TOP__tb_mini_tpu__DOT__dut__DOT__u_rst_core__DOT__q__0 
            = vlSelfRef.tb_mini_tpu__DOT__dut__DOT__u_rst_core__DOT__q;
        vlSelfRef.__Vtrigprevexpr___TOP__tb_mini_tpu__DOT__dut__DOT__genblk1__BRA__0__KET____DOT__u_rst__DOT__q__0 
            = vlSelfRef.tb_mini_tpu__DOT__dut__DOT__genblk1__BRA__0__KET____DOT__u_rst__DOT__q;
        vlSelfRef.__Vtrigprevexpr___TOP__tb_mini_tpu__DOT__dut__DOT__genblk1__BRA__1__KET____DOT__u_rst__DOT__q__0 
            = vlSelfRef.tb_mini_tpu__DOT__dut__DOT__genblk1__BRA__1__KET____DOT__u_rst__DOT__q;
        vlSelfRef.__Vtrigprevexpr___TOP__tb_mini_tpu__DOT__dut__DOT__genblk1__BRA__2__KET____DOT__u_rst__DOT__q__0 
            = vlSelfRef.tb_mini_tpu__DOT__dut__DOT__genblk1__BRA__2__KET____DOT__u_rst__DOT__q;
        vlSelfRef.__Vtrigprevexpr___TOP__tb_mini_tpu__DOT__dut__DOT__genblk1__BRA__3__KET____DOT__u_rst__DOT__q__0 
            = vlSelfRef.tb_mini_tpu__DOT__dut__DOT__genblk1__BRA__3__KET____DOT__u_rst__DOT__q;
        vlSelfRef.__Vtrigprevexpr___TOP__tb_mini_tpu__DOT__dut__DOT__u_ctrl__DOT__done__0 
            = vlSelfRef.tb_mini_tpu__DOT__dut__DOT__u_ctrl__DOT__done;
    }
    Vtb_mini_tpu___024root___timing_ready(vlSelf);
    Vtb_mini_tpu___024root___trigger_orInto__act_vec_vec(vlSelfRef.__VactTriggered, vlSelfRef.__VactTriggeredAcc);
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtb_mini_tpu___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
    }
#endif
    Vtb_mini_tpu___024root___trigger_orInto__act_vec_vec(vlSelfRef.__VnbaTriggered, vlSelfRef.__VactTriggered);
    __VactExecute = Vtb_mini_tpu___024root___trigger_anySet__act(vlSelfRef.__VactTriggered);
    if (__VactExecute) {
        vlSelfRef.__VactTriggeredAcc.fill(0ULL);
        Vtb_mini_tpu___024root___timing_resume(vlSelf);
    }
    return (__VactExecute);
}

bool Vtb_mini_tpu___024root___eval_inact(Vtb_mini_tpu___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_mini_tpu___024root___eval_inact\n"); );
    Vtb_mini_tpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    ::CData/*0:0*/ __VinactExecute;
    // Body
    __VinactExecute = vlSelfRef.__Vnontrivs.__VdlySched.awaitingZeroDelay();
    if (__VinactExecute) {
        VL_FATAL_MT("tb/tb_mini_tpu.sv", 5, "", "ZERODLY: Design Verilated with '--no-sched-zero-delay', but #0 delay executed at runtime");
    }
    return (__VinactExecute);
}

void Vtb_mini_tpu___024root___eval_body__nba(Vtb_mini_tpu___024root* vlSelf);
void Vtb_mini_tpu___024root___trigger_clear__act(::VlUnpacked<::QData/*63:0*/, 1> &out);

bool Vtb_mini_tpu___024root___eval_nba(Vtb_mini_tpu___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_mini_tpu___024root___eval_nba\n"); );
    Vtb_mini_tpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    ::CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = Vtb_mini_tpu___024root___trigger_anySet__act(vlSelfRef.__VnbaTriggered);
    if (__VnbaExecute) {
        Vtb_mini_tpu___024root___eval_body__nba(vlSelf);
        Vtb_mini_tpu___024root___trigger_clear__act(vlSelfRef.__VnbaTriggered);
    }
    return (__VnbaExecute);
}

bool Vtb_mini_tpu___024root___eval_obs(Vtb_mini_tpu___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_mini_tpu___024root___eval_obs\n"); );
    Vtb_mini_tpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    return (0U);
}

bool Vtb_mini_tpu___024root___eval_react(Vtb_mini_tpu___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_mini_tpu___024root___eval_react\n"); );
    Vtb_mini_tpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    return (0U);
}

void Vtb_mini_tpu___024root___eval_postponed(Vtb_mini_tpu___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_mini_tpu___024root___eval_postponed\n"); );
    Vtb_mini_tpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

void Vtb_mini_tpu___024root____VbeforeTrig_h57d84607__0(Vtb_mini_tpu___024root* vlSelf, const char* __VeventDescription);
void Vtb_mini_tpu___024root____VbeforeTrig_h57d84742__0(Vtb_mini_tpu___024root* vlSelf, const char* __VeventDescription);
void Vtb_mini_tpu___024root____VbeforeTrig_hafb832d4__0(Vtb_mini_tpu___024root* vlSelf, const char* __VeventDescription);

VlCoroutine Vtb_mini_tpu___024root___eval_initial__TOP__Vtiming__0(Vtb_mini_tpu___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_mini_tpu___024root___eval_initial__TOP__Vtiming__0\n"); );
    Vtb_mini_tpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    ::IData/*31:0*/ tb_mini_tpu__DOT____VlemExpr_0;
    ::IData/*31:0*/ tb_mini_tpu__DOT__fh;
    tb_mini_tpu__DOT__fh = 0;
    ::IData/*31:0*/ tb_mini_tpu__DOT__unnamedblk9__DOT__unnamedblk1_1__DOT____Vrepeat0;
    tb_mini_tpu__DOT__unnamedblk9__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    ::CData/*0:0*/ __Vtask_tb_mini_tpu__DOT__read_vector__ok_0;
    __Vtask_tb_mini_tpu__DOT__read_vector__ok_0 = 0;
    ::IData/*31:0*/ __Vtask_tb_mini_tpu__DOT__read_vector____VlefExpr_0_1;
    __Vtask_tb_mini_tpu__DOT__read_vector____VlefExpr_0_1 = 0;
    ::SData/*15:0*/ __Vtask_tb_mini_tpu__DOT__read_vector__t_5;
    __Vtask_tb_mini_tpu__DOT__read_vector__t_5 = 0;
    ::IData/*31:0*/ __Vtask_tb_mini_tpu__DOT__run_matmul__unnamedblk4__DOT__t_6;
    __Vtask_tb_mini_tpu__DOT__run_matmul__unnamedblk4__DOT__t_6 = 0;
    ::IData/*31:0*/ __Vtask_tb_mini_tpu__DOT__run_matmul__cycles_11;
    __Vtask_tb_mini_tpu__DOT__run_matmul__cycles_11 = 0;
    ::IData/*31:0*/ __Vtask_tb_mini_tpu__DOT__run_matmul__errs_12;
    __Vtask_tb_mini_tpu__DOT__run_matmul__errs_12 = 0;
    ::IData/*31:0*/ __Vtask_tb_mini_tpu__DOT__run_matmul__d_13;
    __Vtask_tb_mini_tpu__DOT__run_matmul__d_13 = 0;
    ::SData/*15:0*/ __Vtask_tb_mini_tpu__DOT__run_matmul__got_14;
    __Vtask_tb_mini_tpu__DOT__run_matmul__got_14 = 0;
    ::IData/*31:0*/ __Vfunc_tb_mini_tpu__DOT__ulp_dist__Vfuncout_0;
    __Vfunc_tb_mini_tpu__DOT__ulp_dist__Vfuncout_0 = 0;
    ::SData/*15:0*/ __Vfunc_tb_mini_tpu__DOT__ulp_dist__x_1;
    __Vfunc_tb_mini_tpu__DOT__ulp_dist__x_1 = 0;
    ::SData/*15:0*/ __Vfunc_tb_mini_tpu__DOT__ulp_dist__y_2;
    __Vfunc_tb_mini_tpu__DOT__ulp_dist__y_2 = 0;
    // Body
    tb_mini_tpu__DOT____VlemExpr_0 = VL_VALUEPLUSARGS_INN(64, "FILE=%s"s, 
                                                          vlSelfRef.__Vnontrivs.tb_mini_tpu__DOT__fname);
    if ((1U & (~ (0U != tb_mini_tpu__DOT____VlemExpr_0)))) {
        vlSelfRef.__Vnontrivs.tb_mini_tpu__DOT__fname = "vectors/matmul_vectors.txt"s;
    }
    std::ignore = VL_VALUEPLUSARGS_INI(32, "TOL=%d"s, 
                                       vlSelfRef.tb_mini_tpu__DOT__TOL);
    std::ignore = VL_VALUEPLUSARGS_INI(32, "MAXERR=%d"s, 
                                       vlSelfRef.tb_mini_tpu__DOT__MAXERR);
    tb_mini_tpu__DOT__fh = VL_FOPEN_NN(vlSelfRef.__Vnontrivs.tb_mini_tpu__DOT__fname
                                       , "r"s);
    ;
    if (VL_UNLIKELY(((0U == tb_mini_tpu__DOT__fh)))) {
        VL_WRITEF_NX("FATAL: can't open %s\n",1, 'S',&(vlSelfRef.__Vnontrivs.tb_mini_tpu__DOT__fname));
        VL_FINISH_MT("tb/tb_mini_tpu.sv", 119, "");
    }
    tb_mini_tpu__DOT__unnamedblk9__DOT__unnamedblk1_1__DOT____Vrepeat0 = 2U;
    while (VL_LTS_III(32, 0U, tb_mini_tpu__DOT__unnamedblk9__DOT__unnamedblk1_1__DOT____Vrepeat0)) {
        Vtb_mini_tpu___024root____VbeforeTrig_h57d84607__0(vlSelf, 
                                                           "@(negedge tb_mini_tpu.clk)");
        co_await vlSelfRef.__Vnontrivs.__VtrigSched_h57d84607__0.trigger(0U, 
                                                                         nullptr, 
                                                                         "@(negedge tb_mini_tpu.clk)", 
                                                                         "tb/tb_mini_tpu.sv", 
                                                                         122);
        tb_mini_tpu__DOT__unnamedblk9__DOT__unnamedblk1_1__DOT____Vrepeat0 
            = (tb_mini_tpu__DOT__unnamedblk9__DOT__unnamedblk1_1__DOT____Vrepeat0 
               - (::IData)(1U));
    }
    vlSelfRef.tb_mini_tpu__DOT__rst = 1U;
    Vtb_mini_tpu___024root____VbeforeTrig_h57d84607__0(vlSelf, 
                                                       "@(negedge tb_mini_tpu.clk)");
    co_await vlSelfRef.__Vnontrivs.__VtrigSched_h57d84607__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(negedge tb_mini_tpu.clk)", 
                                                                     "tb/tb_mini_tpu.sv", 
                                                                     124);
    {
        while (true) {
            __Vtask_tb_mini_tpu__DOT__read_vector__ok_0 = 0U;
            __Vtask_tb_mini_tpu__DOT__read_vector__t_5 = 0;
            __Vtask_tb_mini_tpu__DOT__read_vector__ok_0 = 1U;
            __Vtask_tb_mini_tpu__DOT__read_vector____VlefExpr_0_1 
                = VL_FSCANF_INX(tb_mini_tpu__DOT__fh,"%h",1
                                , '#',16,&(__Vtask_tb_mini_tpu__DOT__read_vector__t_5)) ;
            if ((1U != __Vtask_tb_mini_tpu__DOT__read_vector____VlefExpr_0_1)) {
                __Vtask_tb_mini_tpu__DOT__read_vector__ok_0 = 0U;
            } else {
                vlSelfRef.tb_mini_tpu__DOT__A__BRA__0__KET__[0U] 
                    = __Vtask_tb_mini_tpu__DOT__read_vector__t_5;
            }
            if (__Vtask_tb_mini_tpu__DOT__read_vector__ok_0) {
                __Vtask_tb_mini_tpu__DOT__read_vector____VlefExpr_0_1 
                    = VL_FSCANF_INX(tb_mini_tpu__DOT__fh,"%h",1
                                    , '#',16,&(__Vtask_tb_mini_tpu__DOT__read_vector__t_5)) ;
                if ((1U != __Vtask_tb_mini_tpu__DOT__read_vector____VlefExpr_0_1)) {
                    __Vtask_tb_mini_tpu__DOT__read_vector__ok_0 = 0U;
                } else {
                    vlSelfRef.tb_mini_tpu__DOT__A__BRA__0__KET__[1U] 
                        = __Vtask_tb_mini_tpu__DOT__read_vector__t_5;
                }
            }
            if (__Vtask_tb_mini_tpu__DOT__read_vector__ok_0) {
                __Vtask_tb_mini_tpu__DOT__read_vector____VlefExpr_0_1 
                    = VL_FSCANF_INX(tb_mini_tpu__DOT__fh,"%h",1
                                    , '#',16,&(__Vtask_tb_mini_tpu__DOT__read_vector__t_5)) ;
                if ((1U != __Vtask_tb_mini_tpu__DOT__read_vector____VlefExpr_0_1)) {
                    __Vtask_tb_mini_tpu__DOT__read_vector__ok_0 = 0U;
                } else {
                    vlSelfRef.tb_mini_tpu__DOT__A__BRA__0__KET__[2U] 
                        = __Vtask_tb_mini_tpu__DOT__read_vector__t_5;
                }
            }
            if (__Vtask_tb_mini_tpu__DOT__read_vector__ok_0) {
                __Vtask_tb_mini_tpu__DOT__read_vector____VlefExpr_0_1 
                    = VL_FSCANF_INX(tb_mini_tpu__DOT__fh,"%h",1
                                    , '#',16,&(__Vtask_tb_mini_tpu__DOT__read_vector__t_5)) ;
                if ((1U != __Vtask_tb_mini_tpu__DOT__read_vector____VlefExpr_0_1)) {
                    __Vtask_tb_mini_tpu__DOT__read_vector__ok_0 = 0U;
                } else {
                    vlSelfRef.tb_mini_tpu__DOT__A__BRA__0__KET__[3U] 
                        = __Vtask_tb_mini_tpu__DOT__read_vector__t_5;
                }
            }
            if (__Vtask_tb_mini_tpu__DOT__read_vector__ok_0) {
                __Vtask_tb_mini_tpu__DOT__read_vector____VlefExpr_0_1 
                    = VL_FSCANF_INX(tb_mini_tpu__DOT__fh,"%h",1
                                    , '#',16,&(__Vtask_tb_mini_tpu__DOT__read_vector__t_5)) ;
                if ((1U != __Vtask_tb_mini_tpu__DOT__read_vector____VlefExpr_0_1)) {
                    __Vtask_tb_mini_tpu__DOT__read_vector__ok_0 = 0U;
                } else {
                    vlSelfRef.tb_mini_tpu__DOT__A__BRA__1__KET__[0U] 
                        = __Vtask_tb_mini_tpu__DOT__read_vector__t_5;
                }
            }
            if (__Vtask_tb_mini_tpu__DOT__read_vector__ok_0) {
                __Vtask_tb_mini_tpu__DOT__read_vector____VlefExpr_0_1 
                    = VL_FSCANF_INX(tb_mini_tpu__DOT__fh,"%h",1
                                    , '#',16,&(__Vtask_tb_mini_tpu__DOT__read_vector__t_5)) ;
                if ((1U != __Vtask_tb_mini_tpu__DOT__read_vector____VlefExpr_0_1)) {
                    __Vtask_tb_mini_tpu__DOT__read_vector__ok_0 = 0U;
                } else {
                    vlSelfRef.tb_mini_tpu__DOT__A__BRA__1__KET__[1U] 
                        = __Vtask_tb_mini_tpu__DOT__read_vector__t_5;
                }
            }
            if (__Vtask_tb_mini_tpu__DOT__read_vector__ok_0) {
                __Vtask_tb_mini_tpu__DOT__read_vector____VlefExpr_0_1 
                    = VL_FSCANF_INX(tb_mini_tpu__DOT__fh,"%h",1
                                    , '#',16,&(__Vtask_tb_mini_tpu__DOT__read_vector__t_5)) ;
                if ((1U != __Vtask_tb_mini_tpu__DOT__read_vector____VlefExpr_0_1)) {
                    __Vtask_tb_mini_tpu__DOT__read_vector__ok_0 = 0U;
                } else {
                    vlSelfRef.tb_mini_tpu__DOT__A__BRA__1__KET__[2U] 
                        = __Vtask_tb_mini_tpu__DOT__read_vector__t_5;
                }
            }
            if (__Vtask_tb_mini_tpu__DOT__read_vector__ok_0) {
                __Vtask_tb_mini_tpu__DOT__read_vector____VlefExpr_0_1 
                    = VL_FSCANF_INX(tb_mini_tpu__DOT__fh,"%h",1
                                    , '#',16,&(__Vtask_tb_mini_tpu__DOT__read_vector__t_5)) ;
                if ((1U != __Vtask_tb_mini_tpu__DOT__read_vector____VlefExpr_0_1)) {
                    __Vtask_tb_mini_tpu__DOT__read_vector__ok_0 = 0U;
                } else {
                    vlSelfRef.tb_mini_tpu__DOT__A__BRA__1__KET__[3U] 
                        = __Vtask_tb_mini_tpu__DOT__read_vector__t_5;
                }
            }
            if (__Vtask_tb_mini_tpu__DOT__read_vector__ok_0) {
                __Vtask_tb_mini_tpu__DOT__read_vector____VlefExpr_0_1 
                    = VL_FSCANF_INX(tb_mini_tpu__DOT__fh,"%h",1
                                    , '#',16,&(__Vtask_tb_mini_tpu__DOT__read_vector__t_5)) ;
                if ((1U != __Vtask_tb_mini_tpu__DOT__read_vector____VlefExpr_0_1)) {
                    __Vtask_tb_mini_tpu__DOT__read_vector__ok_0 = 0U;
                } else {
                    vlSelfRef.tb_mini_tpu__DOT__A__BRA__2__KET__[0U] 
                        = __Vtask_tb_mini_tpu__DOT__read_vector__t_5;
                }
            }
            if (__Vtask_tb_mini_tpu__DOT__read_vector__ok_0) {
                __Vtask_tb_mini_tpu__DOT__read_vector____VlefExpr_0_1 
                    = VL_FSCANF_INX(tb_mini_tpu__DOT__fh,"%h",1
                                    , '#',16,&(__Vtask_tb_mini_tpu__DOT__read_vector__t_5)) ;
                if ((1U != __Vtask_tb_mini_tpu__DOT__read_vector____VlefExpr_0_1)) {
                    __Vtask_tb_mini_tpu__DOT__read_vector__ok_0 = 0U;
                } else {
                    vlSelfRef.tb_mini_tpu__DOT__A__BRA__2__KET__[1U] 
                        = __Vtask_tb_mini_tpu__DOT__read_vector__t_5;
                }
            }
            if (__Vtask_tb_mini_tpu__DOT__read_vector__ok_0) {
                __Vtask_tb_mini_tpu__DOT__read_vector____VlefExpr_0_1 
                    = VL_FSCANF_INX(tb_mini_tpu__DOT__fh,"%h",1
                                    , '#',16,&(__Vtask_tb_mini_tpu__DOT__read_vector__t_5)) ;
                if ((1U != __Vtask_tb_mini_tpu__DOT__read_vector____VlefExpr_0_1)) {
                    __Vtask_tb_mini_tpu__DOT__read_vector__ok_0 = 0U;
                } else {
                    vlSelfRef.tb_mini_tpu__DOT__A__BRA__2__KET__[2U] 
                        = __Vtask_tb_mini_tpu__DOT__read_vector__t_5;
                }
            }
            if (__Vtask_tb_mini_tpu__DOT__read_vector__ok_0) {
                __Vtask_tb_mini_tpu__DOT__read_vector____VlefExpr_0_1 
                    = VL_FSCANF_INX(tb_mini_tpu__DOT__fh,"%h",1
                                    , '#',16,&(__Vtask_tb_mini_tpu__DOT__read_vector__t_5)) ;
                if ((1U != __Vtask_tb_mini_tpu__DOT__read_vector____VlefExpr_0_1)) {
                    __Vtask_tb_mini_tpu__DOT__read_vector__ok_0 = 0U;
                } else {
                    vlSelfRef.tb_mini_tpu__DOT__A__BRA__2__KET__[3U] 
                        = __Vtask_tb_mini_tpu__DOT__read_vector__t_5;
                }
            }
            if (__Vtask_tb_mini_tpu__DOT__read_vector__ok_0) {
                __Vtask_tb_mini_tpu__DOT__read_vector____VlefExpr_0_1 
                    = VL_FSCANF_INX(tb_mini_tpu__DOT__fh,"%h",1
                                    , '#',16,&(__Vtask_tb_mini_tpu__DOT__read_vector__t_5)) ;
                if ((1U != __Vtask_tb_mini_tpu__DOT__read_vector____VlefExpr_0_1)) {
                    __Vtask_tb_mini_tpu__DOT__read_vector__ok_0 = 0U;
                } else {
                    vlSelfRef.tb_mini_tpu__DOT__A__BRA__3__KET__[0U] 
                        = __Vtask_tb_mini_tpu__DOT__read_vector__t_5;
                }
            }
            if (__Vtask_tb_mini_tpu__DOT__read_vector__ok_0) {
                __Vtask_tb_mini_tpu__DOT__read_vector____VlefExpr_0_1 
                    = VL_FSCANF_INX(tb_mini_tpu__DOT__fh,"%h",1
                                    , '#',16,&(__Vtask_tb_mini_tpu__DOT__read_vector__t_5)) ;
                if ((1U != __Vtask_tb_mini_tpu__DOT__read_vector____VlefExpr_0_1)) {
                    __Vtask_tb_mini_tpu__DOT__read_vector__ok_0 = 0U;
                } else {
                    vlSelfRef.tb_mini_tpu__DOT__A__BRA__3__KET__[1U] 
                        = __Vtask_tb_mini_tpu__DOT__read_vector__t_5;
                }
            }
            if (__Vtask_tb_mini_tpu__DOT__read_vector__ok_0) {
                __Vtask_tb_mini_tpu__DOT__read_vector____VlefExpr_0_1 
                    = VL_FSCANF_INX(tb_mini_tpu__DOT__fh,"%h",1
                                    , '#',16,&(__Vtask_tb_mini_tpu__DOT__read_vector__t_5)) ;
                if ((1U != __Vtask_tb_mini_tpu__DOT__read_vector____VlefExpr_0_1)) {
                    __Vtask_tb_mini_tpu__DOT__read_vector__ok_0 = 0U;
                } else {
                    vlSelfRef.tb_mini_tpu__DOT__A__BRA__3__KET__[2U] 
                        = __Vtask_tb_mini_tpu__DOT__read_vector__t_5;
                }
            }
            if (__Vtask_tb_mini_tpu__DOT__read_vector__ok_0) {
                __Vtask_tb_mini_tpu__DOT__read_vector____VlefExpr_0_1 
                    = VL_FSCANF_INX(tb_mini_tpu__DOT__fh,"%h",1
                                    , '#',16,&(__Vtask_tb_mini_tpu__DOT__read_vector__t_5)) ;
                if ((1U != __Vtask_tb_mini_tpu__DOT__read_vector____VlefExpr_0_1)) {
                    __Vtask_tb_mini_tpu__DOT__read_vector__ok_0 = 0U;
                } else {
                    vlSelfRef.tb_mini_tpu__DOT__A__BRA__3__KET__[3U] 
                        = __Vtask_tb_mini_tpu__DOT__read_vector__t_5;
                }
            }
            if (__Vtask_tb_mini_tpu__DOT__read_vector__ok_0) {
                __Vtask_tb_mini_tpu__DOT__read_vector____VlefExpr_0_1 
                    = VL_FSCANF_INX(tb_mini_tpu__DOT__fh,"%h",1
                                    , '#',16,&(__Vtask_tb_mini_tpu__DOT__read_vector__t_5)) ;
                if ((1U != __Vtask_tb_mini_tpu__DOT__read_vector____VlefExpr_0_1)) {
                    __Vtask_tb_mini_tpu__DOT__read_vector__ok_0 = 0U;
                } else {
                    vlSelfRef.tb_mini_tpu__DOT__B[0U][0U] 
                        = __Vtask_tb_mini_tpu__DOT__read_vector__t_5;
                }
            }
            if (__Vtask_tb_mini_tpu__DOT__read_vector__ok_0) {
                __Vtask_tb_mini_tpu__DOT__read_vector____VlefExpr_0_1 
                    = VL_FSCANF_INX(tb_mini_tpu__DOT__fh,"%h",1
                                    , '#',16,&(__Vtask_tb_mini_tpu__DOT__read_vector__t_5)) ;
                if ((1U != __Vtask_tb_mini_tpu__DOT__read_vector____VlefExpr_0_1)) {
                    __Vtask_tb_mini_tpu__DOT__read_vector__ok_0 = 0U;
                } else {
                    vlSelfRef.tb_mini_tpu__DOT__B[0U][1U] 
                        = __Vtask_tb_mini_tpu__DOT__read_vector__t_5;
                }
            }
            if (__Vtask_tb_mini_tpu__DOT__read_vector__ok_0) {
                __Vtask_tb_mini_tpu__DOT__read_vector____VlefExpr_0_1 
                    = VL_FSCANF_INX(tb_mini_tpu__DOT__fh,"%h",1
                                    , '#',16,&(__Vtask_tb_mini_tpu__DOT__read_vector__t_5)) ;
                if ((1U != __Vtask_tb_mini_tpu__DOT__read_vector____VlefExpr_0_1)) {
                    __Vtask_tb_mini_tpu__DOT__read_vector__ok_0 = 0U;
                } else {
                    vlSelfRef.tb_mini_tpu__DOT__B[0U][2U] 
                        = __Vtask_tb_mini_tpu__DOT__read_vector__t_5;
                }
            }
            if (__Vtask_tb_mini_tpu__DOT__read_vector__ok_0) {
                __Vtask_tb_mini_tpu__DOT__read_vector____VlefExpr_0_1 
                    = VL_FSCANF_INX(tb_mini_tpu__DOT__fh,"%h",1
                                    , '#',16,&(__Vtask_tb_mini_tpu__DOT__read_vector__t_5)) ;
                if ((1U != __Vtask_tb_mini_tpu__DOT__read_vector____VlefExpr_0_1)) {
                    __Vtask_tb_mini_tpu__DOT__read_vector__ok_0 = 0U;
                } else {
                    vlSelfRef.tb_mini_tpu__DOT__B[0U][3U] 
                        = __Vtask_tb_mini_tpu__DOT__read_vector__t_5;
                }
            }
            if (__Vtask_tb_mini_tpu__DOT__read_vector__ok_0) {
                __Vtask_tb_mini_tpu__DOT__read_vector____VlefExpr_0_1 
                    = VL_FSCANF_INX(tb_mini_tpu__DOT__fh,"%h",1
                                    , '#',16,&(__Vtask_tb_mini_tpu__DOT__read_vector__t_5)) ;
                if ((1U != __Vtask_tb_mini_tpu__DOT__read_vector____VlefExpr_0_1)) {
                    __Vtask_tb_mini_tpu__DOT__read_vector__ok_0 = 0U;
                } else {
                    vlSelfRef.tb_mini_tpu__DOT__B[1U][0U] 
                        = __Vtask_tb_mini_tpu__DOT__read_vector__t_5;
                }
            }
            if (__Vtask_tb_mini_tpu__DOT__read_vector__ok_0) {
                __Vtask_tb_mini_tpu__DOT__read_vector____VlefExpr_0_1 
                    = VL_FSCANF_INX(tb_mini_tpu__DOT__fh,"%h",1
                                    , '#',16,&(__Vtask_tb_mini_tpu__DOT__read_vector__t_5)) ;
                if ((1U != __Vtask_tb_mini_tpu__DOT__read_vector____VlefExpr_0_1)) {
                    __Vtask_tb_mini_tpu__DOT__read_vector__ok_0 = 0U;
                } else {
                    vlSelfRef.tb_mini_tpu__DOT__B[1U][1U] 
                        = __Vtask_tb_mini_tpu__DOT__read_vector__t_5;
                }
            }
            if (__Vtask_tb_mini_tpu__DOT__read_vector__ok_0) {
                __Vtask_tb_mini_tpu__DOT__read_vector____VlefExpr_0_1 
                    = VL_FSCANF_INX(tb_mini_tpu__DOT__fh,"%h",1
                                    , '#',16,&(__Vtask_tb_mini_tpu__DOT__read_vector__t_5)) ;
                if ((1U != __Vtask_tb_mini_tpu__DOT__read_vector____VlefExpr_0_1)) {
                    __Vtask_tb_mini_tpu__DOT__read_vector__ok_0 = 0U;
                } else {
                    vlSelfRef.tb_mini_tpu__DOT__B[1U][2U] 
                        = __Vtask_tb_mini_tpu__DOT__read_vector__t_5;
                }
            }
            if (__Vtask_tb_mini_tpu__DOT__read_vector__ok_0) {
                __Vtask_tb_mini_tpu__DOT__read_vector____VlefExpr_0_1 
                    = VL_FSCANF_INX(tb_mini_tpu__DOT__fh,"%h",1
                                    , '#',16,&(__Vtask_tb_mini_tpu__DOT__read_vector__t_5)) ;
                if ((1U != __Vtask_tb_mini_tpu__DOT__read_vector____VlefExpr_0_1)) {
                    __Vtask_tb_mini_tpu__DOT__read_vector__ok_0 = 0U;
                } else {
                    vlSelfRef.tb_mini_tpu__DOT__B[1U][3U] 
                        = __Vtask_tb_mini_tpu__DOT__read_vector__t_5;
                }
            }
            if (__Vtask_tb_mini_tpu__DOT__read_vector__ok_0) {
                __Vtask_tb_mini_tpu__DOT__read_vector____VlefExpr_0_1 
                    = VL_FSCANF_INX(tb_mini_tpu__DOT__fh,"%h",1
                                    , '#',16,&(__Vtask_tb_mini_tpu__DOT__read_vector__t_5)) ;
                if ((1U != __Vtask_tb_mini_tpu__DOT__read_vector____VlefExpr_0_1)) {
                    __Vtask_tb_mini_tpu__DOT__read_vector__ok_0 = 0U;
                } else {
                    vlSelfRef.tb_mini_tpu__DOT__B[2U][0U] 
                        = __Vtask_tb_mini_tpu__DOT__read_vector__t_5;
                }
            }
            if (__Vtask_tb_mini_tpu__DOT__read_vector__ok_0) {
                __Vtask_tb_mini_tpu__DOT__read_vector____VlefExpr_0_1 
                    = VL_FSCANF_INX(tb_mini_tpu__DOT__fh,"%h",1
                                    , '#',16,&(__Vtask_tb_mini_tpu__DOT__read_vector__t_5)) ;
                if ((1U != __Vtask_tb_mini_tpu__DOT__read_vector____VlefExpr_0_1)) {
                    __Vtask_tb_mini_tpu__DOT__read_vector__ok_0 = 0U;
                } else {
                    vlSelfRef.tb_mini_tpu__DOT__B[2U][1U] 
                        = __Vtask_tb_mini_tpu__DOT__read_vector__t_5;
                }
            }
            if (__Vtask_tb_mini_tpu__DOT__read_vector__ok_0) {
                __Vtask_tb_mini_tpu__DOT__read_vector____VlefExpr_0_1 
                    = VL_FSCANF_INX(tb_mini_tpu__DOT__fh,"%h",1
                                    , '#',16,&(__Vtask_tb_mini_tpu__DOT__read_vector__t_5)) ;
                if ((1U != __Vtask_tb_mini_tpu__DOT__read_vector____VlefExpr_0_1)) {
                    __Vtask_tb_mini_tpu__DOT__read_vector__ok_0 = 0U;
                } else {
                    vlSelfRef.tb_mini_tpu__DOT__B[2U][2U] 
                        = __Vtask_tb_mini_tpu__DOT__read_vector__t_5;
                }
            }
            if (__Vtask_tb_mini_tpu__DOT__read_vector__ok_0) {
                __Vtask_tb_mini_tpu__DOT__read_vector____VlefExpr_0_1 
                    = VL_FSCANF_INX(tb_mini_tpu__DOT__fh,"%h",1
                                    , '#',16,&(__Vtask_tb_mini_tpu__DOT__read_vector__t_5)) ;
                if ((1U != __Vtask_tb_mini_tpu__DOT__read_vector____VlefExpr_0_1)) {
                    __Vtask_tb_mini_tpu__DOT__read_vector__ok_0 = 0U;
                } else {
                    vlSelfRef.tb_mini_tpu__DOT__B[2U][3U] 
                        = __Vtask_tb_mini_tpu__DOT__read_vector__t_5;
                }
            }
            if (__Vtask_tb_mini_tpu__DOT__read_vector__ok_0) {
                __Vtask_tb_mini_tpu__DOT__read_vector____VlefExpr_0_1 
                    = VL_FSCANF_INX(tb_mini_tpu__DOT__fh,"%h",1
                                    , '#',16,&(__Vtask_tb_mini_tpu__DOT__read_vector__t_5)) ;
                if ((1U != __Vtask_tb_mini_tpu__DOT__read_vector____VlefExpr_0_1)) {
                    __Vtask_tb_mini_tpu__DOT__read_vector__ok_0 = 0U;
                } else {
                    vlSelfRef.tb_mini_tpu__DOT__B[3U][0U] 
                        = __Vtask_tb_mini_tpu__DOT__read_vector__t_5;
                }
            }
            if (__Vtask_tb_mini_tpu__DOT__read_vector__ok_0) {
                __Vtask_tb_mini_tpu__DOT__read_vector____VlefExpr_0_1 
                    = VL_FSCANF_INX(tb_mini_tpu__DOT__fh,"%h",1
                                    , '#',16,&(__Vtask_tb_mini_tpu__DOT__read_vector__t_5)) ;
                if ((1U != __Vtask_tb_mini_tpu__DOT__read_vector____VlefExpr_0_1)) {
                    __Vtask_tb_mini_tpu__DOT__read_vector__ok_0 = 0U;
                } else {
                    vlSelfRef.tb_mini_tpu__DOT__B[3U][1U] 
                        = __Vtask_tb_mini_tpu__DOT__read_vector__t_5;
                }
            }
            if (__Vtask_tb_mini_tpu__DOT__read_vector__ok_0) {
                __Vtask_tb_mini_tpu__DOT__read_vector____VlefExpr_0_1 
                    = VL_FSCANF_INX(tb_mini_tpu__DOT__fh,"%h",1
                                    , '#',16,&(__Vtask_tb_mini_tpu__DOT__read_vector__t_5)) ;
                if ((1U != __Vtask_tb_mini_tpu__DOT__read_vector____VlefExpr_0_1)) {
                    __Vtask_tb_mini_tpu__DOT__read_vector__ok_0 = 0U;
                } else {
                    vlSelfRef.tb_mini_tpu__DOT__B[3U][2U] 
                        = __Vtask_tb_mini_tpu__DOT__read_vector__t_5;
                }
            }
            if (__Vtask_tb_mini_tpu__DOT__read_vector__ok_0) {
                __Vtask_tb_mini_tpu__DOT__read_vector____VlefExpr_0_1 
                    = VL_FSCANF_INX(tb_mini_tpu__DOT__fh,"%h",1
                                    , '#',16,&(__Vtask_tb_mini_tpu__DOT__read_vector__t_5)) ;
                if ((1U != __Vtask_tb_mini_tpu__DOT__read_vector____VlefExpr_0_1)) {
                    __Vtask_tb_mini_tpu__DOT__read_vector__ok_0 = 0U;
                } else {
                    vlSelfRef.tb_mini_tpu__DOT__B[3U][3U] 
                        = __Vtask_tb_mini_tpu__DOT__read_vector__t_5;
                }
            }
            if (__Vtask_tb_mini_tpu__DOT__read_vector__ok_0) {
                __Vtask_tb_mini_tpu__DOT__read_vector____VlefExpr_0_1 
                    = VL_FSCANF_INX(tb_mini_tpu__DOT__fh,"%h",1
                                    , '#',16,&(__Vtask_tb_mini_tpu__DOT__read_vector__t_5)) ;
                if ((1U != __Vtask_tb_mini_tpu__DOT__read_vector____VlefExpr_0_1)) {
                    __Vtask_tb_mini_tpu__DOT__read_vector__ok_0 = 0U;
                } else {
                    vlSelfRef.tb_mini_tpu__DOT__C_exp__BRA__0__KET____BRA__0__KET__ 
                        = __Vtask_tb_mini_tpu__DOT__read_vector__t_5;
                }
            }
            if (__Vtask_tb_mini_tpu__DOT__read_vector__ok_0) {
                __Vtask_tb_mini_tpu__DOT__read_vector____VlefExpr_0_1 
                    = VL_FSCANF_INX(tb_mini_tpu__DOT__fh,"%h",1
                                    , '#',16,&(__Vtask_tb_mini_tpu__DOT__read_vector__t_5)) ;
                if ((1U != __Vtask_tb_mini_tpu__DOT__read_vector____VlefExpr_0_1)) {
                    __Vtask_tb_mini_tpu__DOT__read_vector__ok_0 = 0U;
                } else {
                    vlSelfRef.tb_mini_tpu__DOT__C_exp__BRA__0__KET____BRA__1__KET__ 
                        = __Vtask_tb_mini_tpu__DOT__read_vector__t_5;
                }
            }
            if (__Vtask_tb_mini_tpu__DOT__read_vector__ok_0) {
                __Vtask_tb_mini_tpu__DOT__read_vector____VlefExpr_0_1 
                    = VL_FSCANF_INX(tb_mini_tpu__DOT__fh,"%h",1
                                    , '#',16,&(__Vtask_tb_mini_tpu__DOT__read_vector__t_5)) ;
                if ((1U != __Vtask_tb_mini_tpu__DOT__read_vector____VlefExpr_0_1)) {
                    __Vtask_tb_mini_tpu__DOT__read_vector__ok_0 = 0U;
                } else {
                    vlSelfRef.tb_mini_tpu__DOT__C_exp__BRA__0__KET____BRA__2__KET__ 
                        = __Vtask_tb_mini_tpu__DOT__read_vector__t_5;
                }
            }
            if (__Vtask_tb_mini_tpu__DOT__read_vector__ok_0) {
                __Vtask_tb_mini_tpu__DOT__read_vector____VlefExpr_0_1 
                    = VL_FSCANF_INX(tb_mini_tpu__DOT__fh,"%h",1
                                    , '#',16,&(__Vtask_tb_mini_tpu__DOT__read_vector__t_5)) ;
                if ((1U != __Vtask_tb_mini_tpu__DOT__read_vector____VlefExpr_0_1)) {
                    __Vtask_tb_mini_tpu__DOT__read_vector__ok_0 = 0U;
                } else {
                    vlSelfRef.tb_mini_tpu__DOT__C_exp__BRA__0__KET____BRA__3__KET__ 
                        = __Vtask_tb_mini_tpu__DOT__read_vector__t_5;
                }
            }
            if (__Vtask_tb_mini_tpu__DOT__read_vector__ok_0) {
                __Vtask_tb_mini_tpu__DOT__read_vector____VlefExpr_0_1 
                    = VL_FSCANF_INX(tb_mini_tpu__DOT__fh,"%h",1
                                    , '#',16,&(__Vtask_tb_mini_tpu__DOT__read_vector__t_5)) ;
                if ((1U != __Vtask_tb_mini_tpu__DOT__read_vector____VlefExpr_0_1)) {
                    __Vtask_tb_mini_tpu__DOT__read_vector__ok_0 = 0U;
                } else {
                    vlSelfRef.tb_mini_tpu__DOT__C_exp__BRA__1__KET____BRA__0__KET__ 
                        = __Vtask_tb_mini_tpu__DOT__read_vector__t_5;
                }
            }
            if (__Vtask_tb_mini_tpu__DOT__read_vector__ok_0) {
                __Vtask_tb_mini_tpu__DOT__read_vector____VlefExpr_0_1 
                    = VL_FSCANF_INX(tb_mini_tpu__DOT__fh,"%h",1
                                    , '#',16,&(__Vtask_tb_mini_tpu__DOT__read_vector__t_5)) ;
                if ((1U != __Vtask_tb_mini_tpu__DOT__read_vector____VlefExpr_0_1)) {
                    __Vtask_tb_mini_tpu__DOT__read_vector__ok_0 = 0U;
                } else {
                    vlSelfRef.tb_mini_tpu__DOT__C_exp__BRA__1__KET____BRA__1__KET__ 
                        = __Vtask_tb_mini_tpu__DOT__read_vector__t_5;
                }
            }
            if (__Vtask_tb_mini_tpu__DOT__read_vector__ok_0) {
                __Vtask_tb_mini_tpu__DOT__read_vector____VlefExpr_0_1 
                    = VL_FSCANF_INX(tb_mini_tpu__DOT__fh,"%h",1
                                    , '#',16,&(__Vtask_tb_mini_tpu__DOT__read_vector__t_5)) ;
                if ((1U != __Vtask_tb_mini_tpu__DOT__read_vector____VlefExpr_0_1)) {
                    __Vtask_tb_mini_tpu__DOT__read_vector__ok_0 = 0U;
                } else {
                    vlSelfRef.tb_mini_tpu__DOT__C_exp__BRA__1__KET____BRA__2__KET__ 
                        = __Vtask_tb_mini_tpu__DOT__read_vector__t_5;
                }
            }
            if (__Vtask_tb_mini_tpu__DOT__read_vector__ok_0) {
                __Vtask_tb_mini_tpu__DOT__read_vector____VlefExpr_0_1 
                    = VL_FSCANF_INX(tb_mini_tpu__DOT__fh,"%h",1
                                    , '#',16,&(__Vtask_tb_mini_tpu__DOT__read_vector__t_5)) ;
                if ((1U != __Vtask_tb_mini_tpu__DOT__read_vector____VlefExpr_0_1)) {
                    __Vtask_tb_mini_tpu__DOT__read_vector__ok_0 = 0U;
                } else {
                    vlSelfRef.tb_mini_tpu__DOT__C_exp__BRA__1__KET____BRA__3__KET__ 
                        = __Vtask_tb_mini_tpu__DOT__read_vector__t_5;
                }
            }
            if (__Vtask_tb_mini_tpu__DOT__read_vector__ok_0) {
                __Vtask_tb_mini_tpu__DOT__read_vector____VlefExpr_0_1 
                    = VL_FSCANF_INX(tb_mini_tpu__DOT__fh,"%h",1
                                    , '#',16,&(__Vtask_tb_mini_tpu__DOT__read_vector__t_5)) ;
                if ((1U != __Vtask_tb_mini_tpu__DOT__read_vector____VlefExpr_0_1)) {
                    __Vtask_tb_mini_tpu__DOT__read_vector__ok_0 = 0U;
                } else {
                    vlSelfRef.tb_mini_tpu__DOT__C_exp__BRA__2__KET____BRA__0__KET__ 
                        = __Vtask_tb_mini_tpu__DOT__read_vector__t_5;
                }
            }
            if (__Vtask_tb_mini_tpu__DOT__read_vector__ok_0) {
                __Vtask_tb_mini_tpu__DOT__read_vector____VlefExpr_0_1 
                    = VL_FSCANF_INX(tb_mini_tpu__DOT__fh,"%h",1
                                    , '#',16,&(__Vtask_tb_mini_tpu__DOT__read_vector__t_5)) ;
                if ((1U != __Vtask_tb_mini_tpu__DOT__read_vector____VlefExpr_0_1)) {
                    __Vtask_tb_mini_tpu__DOT__read_vector__ok_0 = 0U;
                } else {
                    vlSelfRef.tb_mini_tpu__DOT__C_exp__BRA__2__KET____BRA__1__KET__ 
                        = __Vtask_tb_mini_tpu__DOT__read_vector__t_5;
                }
            }
            if (__Vtask_tb_mini_tpu__DOT__read_vector__ok_0) {
                __Vtask_tb_mini_tpu__DOT__read_vector____VlefExpr_0_1 
                    = VL_FSCANF_INX(tb_mini_tpu__DOT__fh,"%h",1
                                    , '#',16,&(__Vtask_tb_mini_tpu__DOT__read_vector__t_5)) ;
                if ((1U != __Vtask_tb_mini_tpu__DOT__read_vector____VlefExpr_0_1)) {
                    __Vtask_tb_mini_tpu__DOT__read_vector__ok_0 = 0U;
                } else {
                    vlSelfRef.tb_mini_tpu__DOT__C_exp__BRA__2__KET____BRA__2__KET__ 
                        = __Vtask_tb_mini_tpu__DOT__read_vector__t_5;
                }
            }
            if (__Vtask_tb_mini_tpu__DOT__read_vector__ok_0) {
                __Vtask_tb_mini_tpu__DOT__read_vector____VlefExpr_0_1 
                    = VL_FSCANF_INX(tb_mini_tpu__DOT__fh,"%h",1
                                    , '#',16,&(__Vtask_tb_mini_tpu__DOT__read_vector__t_5)) ;
                if ((1U != __Vtask_tb_mini_tpu__DOT__read_vector____VlefExpr_0_1)) {
                    __Vtask_tb_mini_tpu__DOT__read_vector__ok_0 = 0U;
                } else {
                    vlSelfRef.tb_mini_tpu__DOT__C_exp__BRA__2__KET____BRA__3__KET__ 
                        = __Vtask_tb_mini_tpu__DOT__read_vector__t_5;
                }
            }
            if (__Vtask_tb_mini_tpu__DOT__read_vector__ok_0) {
                __Vtask_tb_mini_tpu__DOT__read_vector____VlefExpr_0_1 
                    = VL_FSCANF_INX(tb_mini_tpu__DOT__fh,"%h",1
                                    , '#',16,&(__Vtask_tb_mini_tpu__DOT__read_vector__t_5)) ;
                if ((1U != __Vtask_tb_mini_tpu__DOT__read_vector____VlefExpr_0_1)) {
                    __Vtask_tb_mini_tpu__DOT__read_vector__ok_0 = 0U;
                } else {
                    vlSelfRef.tb_mini_tpu__DOT__C_exp__BRA__3__KET____BRA__0__KET__ 
                        = __Vtask_tb_mini_tpu__DOT__read_vector__t_5;
                }
            }
            if (__Vtask_tb_mini_tpu__DOT__read_vector__ok_0) {
                __Vtask_tb_mini_tpu__DOT__read_vector____VlefExpr_0_1 
                    = VL_FSCANF_INX(tb_mini_tpu__DOT__fh,"%h",1
                                    , '#',16,&(__Vtask_tb_mini_tpu__DOT__read_vector__t_5)) ;
                if ((1U != __Vtask_tb_mini_tpu__DOT__read_vector____VlefExpr_0_1)) {
                    __Vtask_tb_mini_tpu__DOT__read_vector__ok_0 = 0U;
                } else {
                    vlSelfRef.tb_mini_tpu__DOT__C_exp__BRA__3__KET____BRA__1__KET__ 
                        = __Vtask_tb_mini_tpu__DOT__read_vector__t_5;
                }
            }
            if (__Vtask_tb_mini_tpu__DOT__read_vector__ok_0) {
                __Vtask_tb_mini_tpu__DOT__read_vector____VlefExpr_0_1 
                    = VL_FSCANF_INX(tb_mini_tpu__DOT__fh,"%h",1
                                    , '#',16,&(__Vtask_tb_mini_tpu__DOT__read_vector__t_5)) ;
                if ((1U != __Vtask_tb_mini_tpu__DOT__read_vector____VlefExpr_0_1)) {
                    __Vtask_tb_mini_tpu__DOT__read_vector__ok_0 = 0U;
                } else {
                    vlSelfRef.tb_mini_tpu__DOT__C_exp__BRA__3__KET____BRA__2__KET__ 
                        = __Vtask_tb_mini_tpu__DOT__read_vector__t_5;
                }
            }
            if (__Vtask_tb_mini_tpu__DOT__read_vector__ok_0) {
                __Vtask_tb_mini_tpu__DOT__read_vector____VlefExpr_0_1 
                    = VL_FSCANF_INX(tb_mini_tpu__DOT__fh,"%h",1
                                    , '#',16,&(__Vtask_tb_mini_tpu__DOT__read_vector__t_5)) ;
                if ((1U != __Vtask_tb_mini_tpu__DOT__read_vector____VlefExpr_0_1)) {
                    __Vtask_tb_mini_tpu__DOT__read_vector__ok_0 = 0U;
                } else {
                    vlSelfRef.tb_mini_tpu__DOT__C_exp__BRA__3__KET____BRA__3__KET__ 
                        = __Vtask_tb_mini_tpu__DOT__read_vector__t_5;
                }
            }
            vlSelfRef.tb_mini_tpu__DOT__unnamedblk9__DOT__ok 
                = __Vtask_tb_mini_tpu__DOT__read_vector__ok_0;
            if ((1U & (~ (::IData)(vlSelfRef.tb_mini_tpu__DOT__unnamedblk9__DOT__ok)))) {
                goto __Vlabel0;
            }
            __Vtask_tb_mini_tpu__DOT__run_matmul__cycles_11 = 0U;
            __Vtask_tb_mini_tpu__DOT__run_matmul__errs_12 = 0U;
            __Vtask_tb_mini_tpu__DOT__run_matmul__d_13 = 0U;
            __Vtask_tb_mini_tpu__DOT__run_matmul__got_14 = 0;
            Vtb_mini_tpu___024root____VbeforeTrig_h57d84607__0(vlSelf, 
                                                               "@(negedge tb_mini_tpu.clk)");
            co_await vlSelfRef.__Vnontrivs.__VtrigSched_h57d84607__0.trigger(0U, 
                                                                             nullptr, 
                                                                             "@(negedge tb_mini_tpu.clk)", 
                                                                             "tb/tb_mini_tpu.sv", 
                                                                             62);
            vlSelfRef.tb_mini_tpu__DOT__start = 1U;
            Vtb_mini_tpu___024root____VbeforeTrig_h57d84607__0(vlSelf, 
                                                               "@(negedge tb_mini_tpu.clk)");
            co_await vlSelfRef.__Vnontrivs.__VtrigSched_h57d84607__0.trigger(0U, 
                                                                             nullptr, 
                                                                             "@(negedge tb_mini_tpu.clk)", 
                                                                             "tb/tb_mini_tpu.sv", 
                                                                             63);
            vlSelfRef.tb_mini_tpu__DOT__start = 0U;
            __Vtask_tb_mini_tpu__DOT__run_matmul__unnamedblk4__DOT__t_6 = 0U;
            __Vtask_tb_mini_tpu__DOT__run_matmul__unnamedblk4__DOT__t_6 = 0U;
            while (VL_GTS_III(32, 4U, __Vtask_tb_mini_tpu__DOT__run_matmul__unnamedblk4__DOT__t_6)) {
                vlSelfRef.tb_mini_tpu__DOT__a_flat 
                    = ((0xffffffff00000000ULL & vlSelfRef.tb_mini_tpu__DOT__a_flat) 
                       | (::IData)((::IData)((((::IData)(vlSelfRef.tb_mini_tpu__DOT__A__BRA__1__KET__
                                                         [
                                                         (3U 
                                                          & __Vtask_tb_mini_tpu__DOT__run_matmul__unnamedblk4__DOT__t_6)]) 
                                               << 0x00000010U) 
                                              | vlSelfRef.tb_mini_tpu__DOT__A__BRA__0__KET__
                                              [(3U 
                                                & __Vtask_tb_mini_tpu__DOT__run_matmul__unnamedblk4__DOT__t_6)]))));
                vlSelfRef.tb_mini_tpu__DOT__a_flat 
                    = ((0x00000000ffffffffULL & vlSelfRef.tb_mini_tpu__DOT__a_flat) 
                       | ((::QData)((::IData)((((::IData)(vlSelfRef.tb_mini_tpu__DOT__A__BRA__3__KET__
                                                          [
                                                          (3U 
                                                           & __Vtask_tb_mini_tpu__DOT__run_matmul__unnamedblk4__DOT__t_6)]) 
                                                << 0x00000010U) 
                                               | vlSelfRef.tb_mini_tpu__DOT__A__BRA__2__KET__
                                               [(3U 
                                                 & __Vtask_tb_mini_tpu__DOT__run_matmul__unnamedblk4__DOT__t_6)]))) 
                          << 0x00000020U));
                vlSelfRef.tb_mini_tpu__DOT__b_flat 
                    = ((0xffffffffffff0000ULL & vlSelfRef.tb_mini_tpu__DOT__b_flat) 
                       | (::IData)((::IData)(vlSelfRef.tb_mini_tpu__DOT__B
                                             [(3U & __Vtask_tb_mini_tpu__DOT__run_matmul__unnamedblk4__DOT__t_6)][0U])));
                vlSelfRef.tb_mini_tpu__DOT__b_flat 
                    = ((0xffffffff0000ffffULL & vlSelfRef.tb_mini_tpu__DOT__b_flat) 
                       | ((::QData)((::IData)(vlSelfRef.tb_mini_tpu__DOT__B
                                              [(3U 
                                                & __Vtask_tb_mini_tpu__DOT__run_matmul__unnamedblk4__DOT__t_6)][1U])) 
                          << 0x00000010U));
                vlSelfRef.tb_mini_tpu__DOT__b_flat 
                    = ((0xffff0000ffffffffULL & vlSelfRef.tb_mini_tpu__DOT__b_flat) 
                       | ((::QData)((::IData)(vlSelfRef.tb_mini_tpu__DOT__B
                                              [(3U 
                                                & __Vtask_tb_mini_tpu__DOT__run_matmul__unnamedblk4__DOT__t_6)][2U])) 
                          << 0x00000020U));
                vlSelfRef.tb_mini_tpu__DOT__b_flat 
                    = ((0x0000ffffffffffffULL & vlSelfRef.tb_mini_tpu__DOT__b_flat) 
                       | ((::QData)((::IData)(vlSelfRef.tb_mini_tpu__DOT__B
                                              [(3U 
                                                & __Vtask_tb_mini_tpu__DOT__run_matmul__unnamedblk4__DOT__t_6)][3U])) 
                          << 0x00000030U));
                Vtb_mini_tpu___024root____VbeforeTrig_h57d84607__0(vlSelf, 
                                                                   "@(negedge tb_mini_tpu.clk)");
                co_await vlSelfRef.__Vnontrivs.__VtrigSched_h57d84607__0.trigger(0U, 
                                                                                nullptr, 
                                                                                "@(negedge tb_mini_tpu.clk)", 
                                                                                "tb/tb_mini_tpu.sv", 
                                                                                67);
                __Vtask_tb_mini_tpu__DOT__run_matmul__unnamedblk4__DOT__t_6 
                    = ((::IData)(1U) + __Vtask_tb_mini_tpu__DOT__run_matmul__unnamedblk4__DOT__t_6);
            }
            vlSelfRef.tb_mini_tpu__DOT__a_flat = 0ULL;
            vlSelfRef.tb_mini_tpu__DOT__b_flat = 0ULL;
            {
                while ((1U & (~ (::IData)(vlSelfRef.tb_mini_tpu__DOT__dut__DOT__u_mem__DOT__result_valid)))) {
                    Vtb_mini_tpu___024root____VbeforeTrig_h57d84742__0(vlSelf, 
                                                                       "@(posedge tb_mini_tpu.clk)");
                    co_await vlSelfRef.__Vnontrivs.__VtrigSched_h57d84742__0.trigger(0U, 
                                                                                nullptr, 
                                                                                "@(posedge tb_mini_tpu.clk)", 
                                                                                "tb/tb_mini_tpu.sv", 
                                                                                73);
                    __Vtask_tb_mini_tpu__DOT__run_matmul__cycles_11 
                        = ((::IData)(1U) + __Vtask_tb_mini_tpu__DOT__run_matmul__cycles_11);
                    if (VL_UNLIKELY((VL_LTS_III(32, 0x00000064U, __Vtask_tb_mini_tpu__DOT__run_matmul__cycles_11)))) {
                        VL_WRITEF_NX("FATAL: test %0d timed out, state=%0d\n",2
                                     , '~',32,vlSelfRef.tb_mini_tpu__DOT__tests
                                     , '#',2,(::IData)(vlSelfRef.tb_mini_tpu__DOT__dut__DOT__u_ctrl__DOT__state));
                        VL_FINISH_MT("tb/tb_mini_tpu.sv", 81, "");
                        goto __Vlabel1;
                    }
                }
                __Vlabel1: ;
            }
            __Vtask_tb_mini_tpu__DOT__run_matmul__got_14 
                = vlSelfRef.tb_mini_tpu__DOT__dut__DOT__u_mem__DOT__result_matrix__BRA__0__KET____BRA__0__KET__;
            __Vfunc_tb_mini_tpu__DOT__ulp_dist__y_2 
                = vlSelfRef.tb_mini_tpu__DOT__C_exp__BRA__0__KET____BRA__0__KET__;
            __Vfunc_tb_mini_tpu__DOT__ulp_dist__x_1 
                = __Vtask_tb_mini_tpu__DOT__run_matmul__got_14;
            {
                __Vfunc_tb_mini_tpu__DOT__ulp_dist__Vfuncout_0 = 0U;
                if (((1U & ((::IData)(__Vfunc_tb_mini_tpu__DOT__ulp_dist__x_1) 
                            >> 0x0fU)) == (1U & ((::IData)(__Vfunc_tb_mini_tpu__DOT__ulp_dist__y_2) 
                                                 >> 0x0fU)))) {
                    __Vfunc_tb_mini_tpu__DOT__ulp_dist__Vfuncout_0 
                        = (((0x00007fffU & (::IData)(__Vfunc_tb_mini_tpu__DOT__ulp_dist__x_1)) 
                            > (0x00007fffU & (::IData)(__Vfunc_tb_mini_tpu__DOT__ulp_dist__y_2)))
                            ? ((0x00007fffU & (::IData)(__Vfunc_tb_mini_tpu__DOT__ulp_dist__x_1)) 
                               - (0x00007fffU & (::IData)(__Vfunc_tb_mini_tpu__DOT__ulp_dist__y_2)))
                            : ((0x00007fffU & (::IData)(__Vfunc_tb_mini_tpu__DOT__ulp_dist__y_2)) 
                               - (0x00007fffU & (::IData)(__Vfunc_tb_mini_tpu__DOT__ulp_dist__x_1))));
                    goto __Vlabel2;
                }
                __Vfunc_tb_mini_tpu__DOT__ulp_dist__Vfuncout_0 
                    = ((0x00007fffU & (::IData)(__Vfunc_tb_mini_tpu__DOT__ulp_dist__x_1)) 
                       + (0x00007fffU & (::IData)(__Vfunc_tb_mini_tpu__DOT__ulp_dist__y_2)));
                __Vlabel2: ;
            }
            __Vtask_tb_mini_tpu__DOT__run_matmul__d_13 
                = __Vfunc_tb_mini_tpu__DOT__ulp_dist__Vfuncout_0;
            if (VL_GTS_III(32, __Vtask_tb_mini_tpu__DOT__run_matmul__d_13, vlSelfRef.tb_mini_tpu__DOT__TOL)) {
                __Vtask_tb_mini_tpu__DOT__run_matmul__errs_12 
                    = ((::IData)(1U) + __Vtask_tb_mini_tpu__DOT__run_matmul__errs_12);
                if (VL_UNLIKELY((VL_LTES_III(32, (vlSelfRef.tb_mini_tpu__DOT__bad_cells 
                                                  + __Vtask_tb_mini_tpu__DOT__run_matmul__errs_12), vlSelfRef.tb_mini_tpu__DOT__MAXERR)))) {
                    VL_WRITEF_NX("  FAIL  test %0d C[0][0] = %h, expected %h (%0d ulp)\n",4
                                 , '~',32,vlSelfRef.tb_mini_tpu__DOT__tests
                                 , '#',16,(::IData)(__Vtask_tb_mini_tpu__DOT__run_matmul__got_14)
                                 , '#',16,vlSelfRef.tb_mini_tpu__DOT__C_exp__BRA__0__KET____BRA__0__KET__
                                 , '~',32,__Vtask_tb_mini_tpu__DOT__run_matmul__d_13);
                }
            }
            __Vtask_tb_mini_tpu__DOT__run_matmul__got_14 
                = vlSelfRef.tb_mini_tpu__DOT__dut__DOT__u_mem__DOT__result_matrix__BRA__0__KET____BRA__1__KET__;
            __Vfunc_tb_mini_tpu__DOT__ulp_dist__y_2 
                = vlSelfRef.tb_mini_tpu__DOT__C_exp__BRA__0__KET____BRA__1__KET__;
            __Vfunc_tb_mini_tpu__DOT__ulp_dist__x_1 
                = __Vtask_tb_mini_tpu__DOT__run_matmul__got_14;
            if (VL_GTS_III(32, __Vtask_tb_mini_tpu__DOT__run_matmul__d_13, vlSelfRef.tb_mini_tpu__DOT__max_ulp)) {
                vlSelfRef.tb_mini_tpu__DOT__max_ulp 
                    = __Vtask_tb_mini_tpu__DOT__run_matmul__d_13;
            }
            {
                __Vfunc_tb_mini_tpu__DOT__ulp_dist__Vfuncout_0 = 0U;
                if (((1U & ((::IData)(__Vfunc_tb_mini_tpu__DOT__ulp_dist__x_1) 
                            >> 0x0fU)) == (1U & ((::IData)(__Vfunc_tb_mini_tpu__DOT__ulp_dist__y_2) 
                                                 >> 0x0fU)))) {
                    __Vfunc_tb_mini_tpu__DOT__ulp_dist__Vfuncout_0 
                        = (((0x00007fffU & (::IData)(__Vfunc_tb_mini_tpu__DOT__ulp_dist__x_1)) 
                            > (0x00007fffU & (::IData)(__Vfunc_tb_mini_tpu__DOT__ulp_dist__y_2)))
                            ? ((0x00007fffU & (::IData)(__Vfunc_tb_mini_tpu__DOT__ulp_dist__x_1)) 
                               - (0x00007fffU & (::IData)(__Vfunc_tb_mini_tpu__DOT__ulp_dist__y_2)))
                            : ((0x00007fffU & (::IData)(__Vfunc_tb_mini_tpu__DOT__ulp_dist__y_2)) 
                               - (0x00007fffU & (::IData)(__Vfunc_tb_mini_tpu__DOT__ulp_dist__x_1))));
                    goto __Vlabel3;
                }
                __Vfunc_tb_mini_tpu__DOT__ulp_dist__Vfuncout_0 
                    = ((0x00007fffU & (::IData)(__Vfunc_tb_mini_tpu__DOT__ulp_dist__x_1)) 
                       + (0x00007fffU & (::IData)(__Vfunc_tb_mini_tpu__DOT__ulp_dist__y_2)));
                __Vlabel3: ;
            }
            __Vtask_tb_mini_tpu__DOT__run_matmul__d_13 
                = __Vfunc_tb_mini_tpu__DOT__ulp_dist__Vfuncout_0;
            if (VL_GTS_III(32, __Vtask_tb_mini_tpu__DOT__run_matmul__d_13, vlSelfRef.tb_mini_tpu__DOT__TOL)) {
                __Vtask_tb_mini_tpu__DOT__run_matmul__errs_12 
                    = ((::IData)(1U) + __Vtask_tb_mini_tpu__DOT__run_matmul__errs_12);
                if (VL_UNLIKELY((VL_LTES_III(32, (vlSelfRef.tb_mini_tpu__DOT__bad_cells 
                                                  + __Vtask_tb_mini_tpu__DOT__run_matmul__errs_12), vlSelfRef.tb_mini_tpu__DOT__MAXERR)))) {
                    VL_WRITEF_NX("  FAIL  test %0d C[0][1] = %h, expected %h (%0d ulp)\n",4
                                 , '~',32,vlSelfRef.tb_mini_tpu__DOT__tests
                                 , '#',16,(::IData)(__Vtask_tb_mini_tpu__DOT__run_matmul__got_14)
                                 , '#',16,vlSelfRef.tb_mini_tpu__DOT__C_exp__BRA__0__KET____BRA__1__KET__
                                 , '~',32,__Vtask_tb_mini_tpu__DOT__run_matmul__d_13);
                }
            }
            __Vtask_tb_mini_tpu__DOT__run_matmul__got_14 
                = vlSelfRef.tb_mini_tpu__DOT__dut__DOT__u_mem__DOT__result_matrix__BRA__0__KET____BRA__2__KET__;
            __Vfunc_tb_mini_tpu__DOT__ulp_dist__y_2 
                = vlSelfRef.tb_mini_tpu__DOT__C_exp__BRA__0__KET____BRA__2__KET__;
            __Vfunc_tb_mini_tpu__DOT__ulp_dist__x_1 
                = __Vtask_tb_mini_tpu__DOT__run_matmul__got_14;
            if (VL_GTS_III(32, __Vtask_tb_mini_tpu__DOT__run_matmul__d_13, vlSelfRef.tb_mini_tpu__DOT__max_ulp)) {
                vlSelfRef.tb_mini_tpu__DOT__max_ulp 
                    = __Vtask_tb_mini_tpu__DOT__run_matmul__d_13;
            }
            {
                __Vfunc_tb_mini_tpu__DOT__ulp_dist__Vfuncout_0 = 0U;
                if (((1U & ((::IData)(__Vfunc_tb_mini_tpu__DOT__ulp_dist__x_1) 
                            >> 0x0fU)) == (1U & ((::IData)(__Vfunc_tb_mini_tpu__DOT__ulp_dist__y_2) 
                                                 >> 0x0fU)))) {
                    __Vfunc_tb_mini_tpu__DOT__ulp_dist__Vfuncout_0 
                        = (((0x00007fffU & (::IData)(__Vfunc_tb_mini_tpu__DOT__ulp_dist__x_1)) 
                            > (0x00007fffU & (::IData)(__Vfunc_tb_mini_tpu__DOT__ulp_dist__y_2)))
                            ? ((0x00007fffU & (::IData)(__Vfunc_tb_mini_tpu__DOT__ulp_dist__x_1)) 
                               - (0x00007fffU & (::IData)(__Vfunc_tb_mini_tpu__DOT__ulp_dist__y_2)))
                            : ((0x00007fffU & (::IData)(__Vfunc_tb_mini_tpu__DOT__ulp_dist__y_2)) 
                               - (0x00007fffU & (::IData)(__Vfunc_tb_mini_tpu__DOT__ulp_dist__x_1))));
                    goto __Vlabel4;
                }
                __Vfunc_tb_mini_tpu__DOT__ulp_dist__Vfuncout_0 
                    = ((0x00007fffU & (::IData)(__Vfunc_tb_mini_tpu__DOT__ulp_dist__x_1)) 
                       + (0x00007fffU & (::IData)(__Vfunc_tb_mini_tpu__DOT__ulp_dist__y_2)));
                __Vlabel4: ;
            }
            __Vtask_tb_mini_tpu__DOT__run_matmul__d_13 
                = __Vfunc_tb_mini_tpu__DOT__ulp_dist__Vfuncout_0;
            if (VL_GTS_III(32, __Vtask_tb_mini_tpu__DOT__run_matmul__d_13, vlSelfRef.tb_mini_tpu__DOT__TOL)) {
                __Vtask_tb_mini_tpu__DOT__run_matmul__errs_12 
                    = ((::IData)(1U) + __Vtask_tb_mini_tpu__DOT__run_matmul__errs_12);
                if (VL_UNLIKELY((VL_LTES_III(32, (vlSelfRef.tb_mini_tpu__DOT__bad_cells 
                                                  + __Vtask_tb_mini_tpu__DOT__run_matmul__errs_12), vlSelfRef.tb_mini_tpu__DOT__MAXERR)))) {
                    VL_WRITEF_NX("  FAIL  test %0d C[0][2] = %h, expected %h (%0d ulp)\n",4
                                 , '~',32,vlSelfRef.tb_mini_tpu__DOT__tests
                                 , '#',16,(::IData)(__Vtask_tb_mini_tpu__DOT__run_matmul__got_14)
                                 , '#',16,vlSelfRef.tb_mini_tpu__DOT__C_exp__BRA__0__KET____BRA__2__KET__
                                 , '~',32,__Vtask_tb_mini_tpu__DOT__run_matmul__d_13);
                }
            }
            __Vtask_tb_mini_tpu__DOT__run_matmul__got_14 
                = vlSelfRef.tb_mini_tpu__DOT__dut__DOT__u_mem__DOT__result_matrix__BRA__0__KET____BRA__3__KET__;
            __Vfunc_tb_mini_tpu__DOT__ulp_dist__y_2 
                = vlSelfRef.tb_mini_tpu__DOT__C_exp__BRA__0__KET____BRA__3__KET__;
            __Vfunc_tb_mini_tpu__DOT__ulp_dist__x_1 
                = __Vtask_tb_mini_tpu__DOT__run_matmul__got_14;
            if (VL_GTS_III(32, __Vtask_tb_mini_tpu__DOT__run_matmul__d_13, vlSelfRef.tb_mini_tpu__DOT__max_ulp)) {
                vlSelfRef.tb_mini_tpu__DOT__max_ulp 
                    = __Vtask_tb_mini_tpu__DOT__run_matmul__d_13;
            }
            {
                __Vfunc_tb_mini_tpu__DOT__ulp_dist__Vfuncout_0 = 0U;
                if (((1U & ((::IData)(__Vfunc_tb_mini_tpu__DOT__ulp_dist__x_1) 
                            >> 0x0fU)) == (1U & ((::IData)(__Vfunc_tb_mini_tpu__DOT__ulp_dist__y_2) 
                                                 >> 0x0fU)))) {
                    __Vfunc_tb_mini_tpu__DOT__ulp_dist__Vfuncout_0 
                        = (((0x00007fffU & (::IData)(__Vfunc_tb_mini_tpu__DOT__ulp_dist__x_1)) 
                            > (0x00007fffU & (::IData)(__Vfunc_tb_mini_tpu__DOT__ulp_dist__y_2)))
                            ? ((0x00007fffU & (::IData)(__Vfunc_tb_mini_tpu__DOT__ulp_dist__x_1)) 
                               - (0x00007fffU & (::IData)(__Vfunc_tb_mini_tpu__DOT__ulp_dist__y_2)))
                            : ((0x00007fffU & (::IData)(__Vfunc_tb_mini_tpu__DOT__ulp_dist__y_2)) 
                               - (0x00007fffU & (::IData)(__Vfunc_tb_mini_tpu__DOT__ulp_dist__x_1))));
                    goto __Vlabel5;
                }
                __Vfunc_tb_mini_tpu__DOT__ulp_dist__Vfuncout_0 
                    = ((0x00007fffU & (::IData)(__Vfunc_tb_mini_tpu__DOT__ulp_dist__x_1)) 
                       + (0x00007fffU & (::IData)(__Vfunc_tb_mini_tpu__DOT__ulp_dist__y_2)));
                __Vlabel5: ;
            }
            __Vtask_tb_mini_tpu__DOT__run_matmul__d_13 
                = __Vfunc_tb_mini_tpu__DOT__ulp_dist__Vfuncout_0;
            if (VL_GTS_III(32, __Vtask_tb_mini_tpu__DOT__run_matmul__d_13, vlSelfRef.tb_mini_tpu__DOT__TOL)) {
                __Vtask_tb_mini_tpu__DOT__run_matmul__errs_12 
                    = ((::IData)(1U) + __Vtask_tb_mini_tpu__DOT__run_matmul__errs_12);
                if (VL_UNLIKELY((VL_LTES_III(32, (vlSelfRef.tb_mini_tpu__DOT__bad_cells 
                                                  + __Vtask_tb_mini_tpu__DOT__run_matmul__errs_12), vlSelfRef.tb_mini_tpu__DOT__MAXERR)))) {
                    VL_WRITEF_NX("  FAIL  test %0d C[0][3] = %h, expected %h (%0d ulp)\n",4
                                 , '~',32,vlSelfRef.tb_mini_tpu__DOT__tests
                                 , '#',16,(::IData)(__Vtask_tb_mini_tpu__DOT__run_matmul__got_14)
                                 , '#',16,vlSelfRef.tb_mini_tpu__DOT__C_exp__BRA__0__KET____BRA__3__KET__
                                 , '~',32,__Vtask_tb_mini_tpu__DOT__run_matmul__d_13);
                }
            }
            __Vtask_tb_mini_tpu__DOT__run_matmul__got_14 
                = vlSelfRef.tb_mini_tpu__DOT__dut__DOT__u_mem__DOT__result_matrix__BRA__1__KET____BRA__0__KET__;
            __Vfunc_tb_mini_tpu__DOT__ulp_dist__y_2 
                = vlSelfRef.tb_mini_tpu__DOT__C_exp__BRA__1__KET____BRA__0__KET__;
            __Vfunc_tb_mini_tpu__DOT__ulp_dist__x_1 
                = __Vtask_tb_mini_tpu__DOT__run_matmul__got_14;
            if (VL_GTS_III(32, __Vtask_tb_mini_tpu__DOT__run_matmul__d_13, vlSelfRef.tb_mini_tpu__DOT__max_ulp)) {
                vlSelfRef.tb_mini_tpu__DOT__max_ulp 
                    = __Vtask_tb_mini_tpu__DOT__run_matmul__d_13;
            }
            {
                __Vfunc_tb_mini_tpu__DOT__ulp_dist__Vfuncout_0 = 0U;
                if (((1U & ((::IData)(__Vfunc_tb_mini_tpu__DOT__ulp_dist__x_1) 
                            >> 0x0fU)) == (1U & ((::IData)(__Vfunc_tb_mini_tpu__DOT__ulp_dist__y_2) 
                                                 >> 0x0fU)))) {
                    __Vfunc_tb_mini_tpu__DOT__ulp_dist__Vfuncout_0 
                        = (((0x00007fffU & (::IData)(__Vfunc_tb_mini_tpu__DOT__ulp_dist__x_1)) 
                            > (0x00007fffU & (::IData)(__Vfunc_tb_mini_tpu__DOT__ulp_dist__y_2)))
                            ? ((0x00007fffU & (::IData)(__Vfunc_tb_mini_tpu__DOT__ulp_dist__x_1)) 
                               - (0x00007fffU & (::IData)(__Vfunc_tb_mini_tpu__DOT__ulp_dist__y_2)))
                            : ((0x00007fffU & (::IData)(__Vfunc_tb_mini_tpu__DOT__ulp_dist__y_2)) 
                               - (0x00007fffU & (::IData)(__Vfunc_tb_mini_tpu__DOT__ulp_dist__x_1))));
                    goto __Vlabel6;
                }
                __Vfunc_tb_mini_tpu__DOT__ulp_dist__Vfuncout_0 
                    = ((0x00007fffU & (::IData)(__Vfunc_tb_mini_tpu__DOT__ulp_dist__x_1)) 
                       + (0x00007fffU & (::IData)(__Vfunc_tb_mini_tpu__DOT__ulp_dist__y_2)));
                __Vlabel6: ;
            }
            __Vtask_tb_mini_tpu__DOT__run_matmul__d_13 
                = __Vfunc_tb_mini_tpu__DOT__ulp_dist__Vfuncout_0;
            if (VL_GTS_III(32, __Vtask_tb_mini_tpu__DOT__run_matmul__d_13, vlSelfRef.tb_mini_tpu__DOT__TOL)) {
                __Vtask_tb_mini_tpu__DOT__run_matmul__errs_12 
                    = ((::IData)(1U) + __Vtask_tb_mini_tpu__DOT__run_matmul__errs_12);
                if (VL_UNLIKELY((VL_LTES_III(32, (vlSelfRef.tb_mini_tpu__DOT__bad_cells 
                                                  + __Vtask_tb_mini_tpu__DOT__run_matmul__errs_12), vlSelfRef.tb_mini_tpu__DOT__MAXERR)))) {
                    VL_WRITEF_NX("  FAIL  test %0d C[1][0] = %h, expected %h (%0d ulp)\n",4
                                 , '~',32,vlSelfRef.tb_mini_tpu__DOT__tests
                                 , '#',16,(::IData)(__Vtask_tb_mini_tpu__DOT__run_matmul__got_14)
                                 , '#',16,vlSelfRef.tb_mini_tpu__DOT__C_exp__BRA__1__KET____BRA__0__KET__
                                 , '~',32,__Vtask_tb_mini_tpu__DOT__run_matmul__d_13);
                }
            }
            __Vtask_tb_mini_tpu__DOT__run_matmul__got_14 
                = vlSelfRef.tb_mini_tpu__DOT__dut__DOT__u_mem__DOT__result_matrix__BRA__1__KET____BRA__1__KET__;
            __Vfunc_tb_mini_tpu__DOT__ulp_dist__y_2 
                = vlSelfRef.tb_mini_tpu__DOT__C_exp__BRA__1__KET____BRA__1__KET__;
            __Vfunc_tb_mini_tpu__DOT__ulp_dist__x_1 
                = __Vtask_tb_mini_tpu__DOT__run_matmul__got_14;
            if (VL_GTS_III(32, __Vtask_tb_mini_tpu__DOT__run_matmul__d_13, vlSelfRef.tb_mini_tpu__DOT__max_ulp)) {
                vlSelfRef.tb_mini_tpu__DOT__max_ulp 
                    = __Vtask_tb_mini_tpu__DOT__run_matmul__d_13;
            }
            {
                __Vfunc_tb_mini_tpu__DOT__ulp_dist__Vfuncout_0 = 0U;
                if (((1U & ((::IData)(__Vfunc_tb_mini_tpu__DOT__ulp_dist__x_1) 
                            >> 0x0fU)) == (1U & ((::IData)(__Vfunc_tb_mini_tpu__DOT__ulp_dist__y_2) 
                                                 >> 0x0fU)))) {
                    __Vfunc_tb_mini_tpu__DOT__ulp_dist__Vfuncout_0 
                        = (((0x00007fffU & (::IData)(__Vfunc_tb_mini_tpu__DOT__ulp_dist__x_1)) 
                            > (0x00007fffU & (::IData)(__Vfunc_tb_mini_tpu__DOT__ulp_dist__y_2)))
                            ? ((0x00007fffU & (::IData)(__Vfunc_tb_mini_tpu__DOT__ulp_dist__x_1)) 
                               - (0x00007fffU & (::IData)(__Vfunc_tb_mini_tpu__DOT__ulp_dist__y_2)))
                            : ((0x00007fffU & (::IData)(__Vfunc_tb_mini_tpu__DOT__ulp_dist__y_2)) 
                               - (0x00007fffU & (::IData)(__Vfunc_tb_mini_tpu__DOT__ulp_dist__x_1))));
                    goto __Vlabel7;
                }
                __Vfunc_tb_mini_tpu__DOT__ulp_dist__Vfuncout_0 
                    = ((0x00007fffU & (::IData)(__Vfunc_tb_mini_tpu__DOT__ulp_dist__x_1)) 
                       + (0x00007fffU & (::IData)(__Vfunc_tb_mini_tpu__DOT__ulp_dist__y_2)));
                __Vlabel7: ;
            }
            __Vtask_tb_mini_tpu__DOT__run_matmul__d_13 
                = __Vfunc_tb_mini_tpu__DOT__ulp_dist__Vfuncout_0;
            if (VL_GTS_III(32, __Vtask_tb_mini_tpu__DOT__run_matmul__d_13, vlSelfRef.tb_mini_tpu__DOT__TOL)) {
                __Vtask_tb_mini_tpu__DOT__run_matmul__errs_12 
                    = ((::IData)(1U) + __Vtask_tb_mini_tpu__DOT__run_matmul__errs_12);
                if (VL_UNLIKELY((VL_LTES_III(32, (vlSelfRef.tb_mini_tpu__DOT__bad_cells 
                                                  + __Vtask_tb_mini_tpu__DOT__run_matmul__errs_12), vlSelfRef.tb_mini_tpu__DOT__MAXERR)))) {
                    VL_WRITEF_NX("  FAIL  test %0d C[1][1] = %h, expected %h (%0d ulp)\n",4
                                 , '~',32,vlSelfRef.tb_mini_tpu__DOT__tests
                                 , '#',16,(::IData)(__Vtask_tb_mini_tpu__DOT__run_matmul__got_14)
                                 , '#',16,vlSelfRef.tb_mini_tpu__DOT__C_exp__BRA__1__KET____BRA__1__KET__
                                 , '~',32,__Vtask_tb_mini_tpu__DOT__run_matmul__d_13);
                }
            }
            __Vtask_tb_mini_tpu__DOT__run_matmul__got_14 
                = vlSelfRef.tb_mini_tpu__DOT__dut__DOT__u_mem__DOT__result_matrix__BRA__1__KET____BRA__2__KET__;
            __Vfunc_tb_mini_tpu__DOT__ulp_dist__y_2 
                = vlSelfRef.tb_mini_tpu__DOT__C_exp__BRA__1__KET____BRA__2__KET__;
            __Vfunc_tb_mini_tpu__DOT__ulp_dist__x_1 
                = __Vtask_tb_mini_tpu__DOT__run_matmul__got_14;
            if (VL_GTS_III(32, __Vtask_tb_mini_tpu__DOT__run_matmul__d_13, vlSelfRef.tb_mini_tpu__DOT__max_ulp)) {
                vlSelfRef.tb_mini_tpu__DOT__max_ulp 
                    = __Vtask_tb_mini_tpu__DOT__run_matmul__d_13;
            }
            {
                __Vfunc_tb_mini_tpu__DOT__ulp_dist__Vfuncout_0 = 0U;
                if (((1U & ((::IData)(__Vfunc_tb_mini_tpu__DOT__ulp_dist__x_1) 
                            >> 0x0fU)) == (1U & ((::IData)(__Vfunc_tb_mini_tpu__DOT__ulp_dist__y_2) 
                                                 >> 0x0fU)))) {
                    __Vfunc_tb_mini_tpu__DOT__ulp_dist__Vfuncout_0 
                        = (((0x00007fffU & (::IData)(__Vfunc_tb_mini_tpu__DOT__ulp_dist__x_1)) 
                            > (0x00007fffU & (::IData)(__Vfunc_tb_mini_tpu__DOT__ulp_dist__y_2)))
                            ? ((0x00007fffU & (::IData)(__Vfunc_tb_mini_tpu__DOT__ulp_dist__x_1)) 
                               - (0x00007fffU & (::IData)(__Vfunc_tb_mini_tpu__DOT__ulp_dist__y_2)))
                            : ((0x00007fffU & (::IData)(__Vfunc_tb_mini_tpu__DOT__ulp_dist__y_2)) 
                               - (0x00007fffU & (::IData)(__Vfunc_tb_mini_tpu__DOT__ulp_dist__x_1))));
                    goto __Vlabel8;
                }
                __Vfunc_tb_mini_tpu__DOT__ulp_dist__Vfuncout_0 
                    = ((0x00007fffU & (::IData)(__Vfunc_tb_mini_tpu__DOT__ulp_dist__x_1)) 
                       + (0x00007fffU & (::IData)(__Vfunc_tb_mini_tpu__DOT__ulp_dist__y_2)));
                __Vlabel8: ;
            }
            __Vtask_tb_mini_tpu__DOT__run_matmul__d_13 
                = __Vfunc_tb_mini_tpu__DOT__ulp_dist__Vfuncout_0;
            if (VL_GTS_III(32, __Vtask_tb_mini_tpu__DOT__run_matmul__d_13, vlSelfRef.tb_mini_tpu__DOT__TOL)) {
                __Vtask_tb_mini_tpu__DOT__run_matmul__errs_12 
                    = ((::IData)(1U) + __Vtask_tb_mini_tpu__DOT__run_matmul__errs_12);
                if (VL_UNLIKELY((VL_LTES_III(32, (vlSelfRef.tb_mini_tpu__DOT__bad_cells 
                                                  + __Vtask_tb_mini_tpu__DOT__run_matmul__errs_12), vlSelfRef.tb_mini_tpu__DOT__MAXERR)))) {
                    VL_WRITEF_NX("  FAIL  test %0d C[1][2] = %h, expected %h (%0d ulp)\n",4
                                 , '~',32,vlSelfRef.tb_mini_tpu__DOT__tests
                                 , '#',16,(::IData)(__Vtask_tb_mini_tpu__DOT__run_matmul__got_14)
                                 , '#',16,vlSelfRef.tb_mini_tpu__DOT__C_exp__BRA__1__KET____BRA__2__KET__
                                 , '~',32,__Vtask_tb_mini_tpu__DOT__run_matmul__d_13);
                }
            }
            __Vtask_tb_mini_tpu__DOT__run_matmul__got_14 
                = vlSelfRef.tb_mini_tpu__DOT__dut__DOT__u_mem__DOT__result_matrix__BRA__1__KET____BRA__3__KET__;
            __Vfunc_tb_mini_tpu__DOT__ulp_dist__y_2 
                = vlSelfRef.tb_mini_tpu__DOT__C_exp__BRA__1__KET____BRA__3__KET__;
            __Vfunc_tb_mini_tpu__DOT__ulp_dist__x_1 
                = __Vtask_tb_mini_tpu__DOT__run_matmul__got_14;
            if (VL_GTS_III(32, __Vtask_tb_mini_tpu__DOT__run_matmul__d_13, vlSelfRef.tb_mini_tpu__DOT__max_ulp)) {
                vlSelfRef.tb_mini_tpu__DOT__max_ulp 
                    = __Vtask_tb_mini_tpu__DOT__run_matmul__d_13;
            }
            {
                __Vfunc_tb_mini_tpu__DOT__ulp_dist__Vfuncout_0 = 0U;
                if (((1U & ((::IData)(__Vfunc_tb_mini_tpu__DOT__ulp_dist__x_1) 
                            >> 0x0fU)) == (1U & ((::IData)(__Vfunc_tb_mini_tpu__DOT__ulp_dist__y_2) 
                                                 >> 0x0fU)))) {
                    __Vfunc_tb_mini_tpu__DOT__ulp_dist__Vfuncout_0 
                        = (((0x00007fffU & (::IData)(__Vfunc_tb_mini_tpu__DOT__ulp_dist__x_1)) 
                            > (0x00007fffU & (::IData)(__Vfunc_tb_mini_tpu__DOT__ulp_dist__y_2)))
                            ? ((0x00007fffU & (::IData)(__Vfunc_tb_mini_tpu__DOT__ulp_dist__x_1)) 
                               - (0x00007fffU & (::IData)(__Vfunc_tb_mini_tpu__DOT__ulp_dist__y_2)))
                            : ((0x00007fffU & (::IData)(__Vfunc_tb_mini_tpu__DOT__ulp_dist__y_2)) 
                               - (0x00007fffU & (::IData)(__Vfunc_tb_mini_tpu__DOT__ulp_dist__x_1))));
                    goto __Vlabel9;
                }
                __Vfunc_tb_mini_tpu__DOT__ulp_dist__Vfuncout_0 
                    = ((0x00007fffU & (::IData)(__Vfunc_tb_mini_tpu__DOT__ulp_dist__x_1)) 
                       + (0x00007fffU & (::IData)(__Vfunc_tb_mini_tpu__DOT__ulp_dist__y_2)));
                __Vlabel9: ;
            }
            __Vtask_tb_mini_tpu__DOT__run_matmul__d_13 
                = __Vfunc_tb_mini_tpu__DOT__ulp_dist__Vfuncout_0;
            if (VL_GTS_III(32, __Vtask_tb_mini_tpu__DOT__run_matmul__d_13, vlSelfRef.tb_mini_tpu__DOT__TOL)) {
                __Vtask_tb_mini_tpu__DOT__run_matmul__errs_12 
                    = ((::IData)(1U) + __Vtask_tb_mini_tpu__DOT__run_matmul__errs_12);
                if (VL_UNLIKELY((VL_LTES_III(32, (vlSelfRef.tb_mini_tpu__DOT__bad_cells 
                                                  + __Vtask_tb_mini_tpu__DOT__run_matmul__errs_12), vlSelfRef.tb_mini_tpu__DOT__MAXERR)))) {
                    VL_WRITEF_NX("  FAIL  test %0d C[1][3] = %h, expected %h (%0d ulp)\n",4
                                 , '~',32,vlSelfRef.tb_mini_tpu__DOT__tests
                                 , '#',16,(::IData)(__Vtask_tb_mini_tpu__DOT__run_matmul__got_14)
                                 , '#',16,vlSelfRef.tb_mini_tpu__DOT__C_exp__BRA__1__KET____BRA__3__KET__
                                 , '~',32,__Vtask_tb_mini_tpu__DOT__run_matmul__d_13);
                }
            }
            __Vtask_tb_mini_tpu__DOT__run_matmul__got_14 
                = vlSelfRef.tb_mini_tpu__DOT__dut__DOT__u_mem__DOT__result_matrix__BRA__2__KET____BRA__0__KET__;
            __Vfunc_tb_mini_tpu__DOT__ulp_dist__y_2 
                = vlSelfRef.tb_mini_tpu__DOT__C_exp__BRA__2__KET____BRA__0__KET__;
            __Vfunc_tb_mini_tpu__DOT__ulp_dist__x_1 
                = __Vtask_tb_mini_tpu__DOT__run_matmul__got_14;
            if (VL_GTS_III(32, __Vtask_tb_mini_tpu__DOT__run_matmul__d_13, vlSelfRef.tb_mini_tpu__DOT__max_ulp)) {
                vlSelfRef.tb_mini_tpu__DOT__max_ulp 
                    = __Vtask_tb_mini_tpu__DOT__run_matmul__d_13;
            }
            {
                __Vfunc_tb_mini_tpu__DOT__ulp_dist__Vfuncout_0 = 0U;
                if (((1U & ((::IData)(__Vfunc_tb_mini_tpu__DOT__ulp_dist__x_1) 
                            >> 0x0fU)) == (1U & ((::IData)(__Vfunc_tb_mini_tpu__DOT__ulp_dist__y_2) 
                                                 >> 0x0fU)))) {
                    __Vfunc_tb_mini_tpu__DOT__ulp_dist__Vfuncout_0 
                        = (((0x00007fffU & (::IData)(__Vfunc_tb_mini_tpu__DOT__ulp_dist__x_1)) 
                            > (0x00007fffU & (::IData)(__Vfunc_tb_mini_tpu__DOT__ulp_dist__y_2)))
                            ? ((0x00007fffU & (::IData)(__Vfunc_tb_mini_tpu__DOT__ulp_dist__x_1)) 
                               - (0x00007fffU & (::IData)(__Vfunc_tb_mini_tpu__DOT__ulp_dist__y_2)))
                            : ((0x00007fffU & (::IData)(__Vfunc_tb_mini_tpu__DOT__ulp_dist__y_2)) 
                               - (0x00007fffU & (::IData)(__Vfunc_tb_mini_tpu__DOT__ulp_dist__x_1))));
                    goto __Vlabel10;
                }
                __Vfunc_tb_mini_tpu__DOT__ulp_dist__Vfuncout_0 
                    = ((0x00007fffU & (::IData)(__Vfunc_tb_mini_tpu__DOT__ulp_dist__x_1)) 
                       + (0x00007fffU & (::IData)(__Vfunc_tb_mini_tpu__DOT__ulp_dist__y_2)));
                __Vlabel10: ;
            }
            __Vtask_tb_mini_tpu__DOT__run_matmul__d_13 
                = __Vfunc_tb_mini_tpu__DOT__ulp_dist__Vfuncout_0;
            if (VL_GTS_III(32, __Vtask_tb_mini_tpu__DOT__run_matmul__d_13, vlSelfRef.tb_mini_tpu__DOT__TOL)) {
                __Vtask_tb_mini_tpu__DOT__run_matmul__errs_12 
                    = ((::IData)(1U) + __Vtask_tb_mini_tpu__DOT__run_matmul__errs_12);
                if (VL_UNLIKELY((VL_LTES_III(32, (vlSelfRef.tb_mini_tpu__DOT__bad_cells 
                                                  + __Vtask_tb_mini_tpu__DOT__run_matmul__errs_12), vlSelfRef.tb_mini_tpu__DOT__MAXERR)))) {
                    VL_WRITEF_NX("  FAIL  test %0d C[2][0] = %h, expected %h (%0d ulp)\n",4
                                 , '~',32,vlSelfRef.tb_mini_tpu__DOT__tests
                                 , '#',16,(::IData)(__Vtask_tb_mini_tpu__DOT__run_matmul__got_14)
                                 , '#',16,vlSelfRef.tb_mini_tpu__DOT__C_exp__BRA__2__KET____BRA__0__KET__
                                 , '~',32,__Vtask_tb_mini_tpu__DOT__run_matmul__d_13);
                }
            }
            __Vtask_tb_mini_tpu__DOT__run_matmul__got_14 
                = vlSelfRef.tb_mini_tpu__DOT__dut__DOT__u_mem__DOT__result_matrix__BRA__2__KET____BRA__1__KET__;
            __Vfunc_tb_mini_tpu__DOT__ulp_dist__y_2 
                = vlSelfRef.tb_mini_tpu__DOT__C_exp__BRA__2__KET____BRA__1__KET__;
            __Vfunc_tb_mini_tpu__DOT__ulp_dist__x_1 
                = __Vtask_tb_mini_tpu__DOT__run_matmul__got_14;
            if (VL_GTS_III(32, __Vtask_tb_mini_tpu__DOT__run_matmul__d_13, vlSelfRef.tb_mini_tpu__DOT__max_ulp)) {
                vlSelfRef.tb_mini_tpu__DOT__max_ulp 
                    = __Vtask_tb_mini_tpu__DOT__run_matmul__d_13;
            }
            {
                __Vfunc_tb_mini_tpu__DOT__ulp_dist__Vfuncout_0 = 0U;
                if (((1U & ((::IData)(__Vfunc_tb_mini_tpu__DOT__ulp_dist__x_1) 
                            >> 0x0fU)) == (1U & ((::IData)(__Vfunc_tb_mini_tpu__DOT__ulp_dist__y_2) 
                                                 >> 0x0fU)))) {
                    __Vfunc_tb_mini_tpu__DOT__ulp_dist__Vfuncout_0 
                        = (((0x00007fffU & (::IData)(__Vfunc_tb_mini_tpu__DOT__ulp_dist__x_1)) 
                            > (0x00007fffU & (::IData)(__Vfunc_tb_mini_tpu__DOT__ulp_dist__y_2)))
                            ? ((0x00007fffU & (::IData)(__Vfunc_tb_mini_tpu__DOT__ulp_dist__x_1)) 
                               - (0x00007fffU & (::IData)(__Vfunc_tb_mini_tpu__DOT__ulp_dist__y_2)))
                            : ((0x00007fffU & (::IData)(__Vfunc_tb_mini_tpu__DOT__ulp_dist__y_2)) 
                               - (0x00007fffU & (::IData)(__Vfunc_tb_mini_tpu__DOT__ulp_dist__x_1))));
                    goto __Vlabel11;
                }
                __Vfunc_tb_mini_tpu__DOT__ulp_dist__Vfuncout_0 
                    = ((0x00007fffU & (::IData)(__Vfunc_tb_mini_tpu__DOT__ulp_dist__x_1)) 
                       + (0x00007fffU & (::IData)(__Vfunc_tb_mini_tpu__DOT__ulp_dist__y_2)));
                __Vlabel11: ;
            }
            __Vtask_tb_mini_tpu__DOT__run_matmul__d_13 
                = __Vfunc_tb_mini_tpu__DOT__ulp_dist__Vfuncout_0;
            if (VL_GTS_III(32, __Vtask_tb_mini_tpu__DOT__run_matmul__d_13, vlSelfRef.tb_mini_tpu__DOT__TOL)) {
                __Vtask_tb_mini_tpu__DOT__run_matmul__errs_12 
                    = ((::IData)(1U) + __Vtask_tb_mini_tpu__DOT__run_matmul__errs_12);
                if (VL_UNLIKELY((VL_LTES_III(32, (vlSelfRef.tb_mini_tpu__DOT__bad_cells 
                                                  + __Vtask_tb_mini_tpu__DOT__run_matmul__errs_12), vlSelfRef.tb_mini_tpu__DOT__MAXERR)))) {
                    VL_WRITEF_NX("  FAIL  test %0d C[2][1] = %h, expected %h (%0d ulp)\n",4
                                 , '~',32,vlSelfRef.tb_mini_tpu__DOT__tests
                                 , '#',16,(::IData)(__Vtask_tb_mini_tpu__DOT__run_matmul__got_14)
                                 , '#',16,vlSelfRef.tb_mini_tpu__DOT__C_exp__BRA__2__KET____BRA__1__KET__
                                 , '~',32,__Vtask_tb_mini_tpu__DOT__run_matmul__d_13);
                }
            }
            __Vtask_tb_mini_tpu__DOT__run_matmul__got_14 
                = vlSelfRef.tb_mini_tpu__DOT__dut__DOT__u_mem__DOT__result_matrix__BRA__2__KET____BRA__2__KET__;
            __Vfunc_tb_mini_tpu__DOT__ulp_dist__y_2 
                = vlSelfRef.tb_mini_tpu__DOT__C_exp__BRA__2__KET____BRA__2__KET__;
            __Vfunc_tb_mini_tpu__DOT__ulp_dist__x_1 
                = __Vtask_tb_mini_tpu__DOT__run_matmul__got_14;
            if (VL_GTS_III(32, __Vtask_tb_mini_tpu__DOT__run_matmul__d_13, vlSelfRef.tb_mini_tpu__DOT__max_ulp)) {
                vlSelfRef.tb_mini_tpu__DOT__max_ulp 
                    = __Vtask_tb_mini_tpu__DOT__run_matmul__d_13;
            }
            {
                __Vfunc_tb_mini_tpu__DOT__ulp_dist__Vfuncout_0 = 0U;
                if (((1U & ((::IData)(__Vfunc_tb_mini_tpu__DOT__ulp_dist__x_1) 
                            >> 0x0fU)) == (1U & ((::IData)(__Vfunc_tb_mini_tpu__DOT__ulp_dist__y_2) 
                                                 >> 0x0fU)))) {
                    __Vfunc_tb_mini_tpu__DOT__ulp_dist__Vfuncout_0 
                        = (((0x00007fffU & (::IData)(__Vfunc_tb_mini_tpu__DOT__ulp_dist__x_1)) 
                            > (0x00007fffU & (::IData)(__Vfunc_tb_mini_tpu__DOT__ulp_dist__y_2)))
                            ? ((0x00007fffU & (::IData)(__Vfunc_tb_mini_tpu__DOT__ulp_dist__x_1)) 
                               - (0x00007fffU & (::IData)(__Vfunc_tb_mini_tpu__DOT__ulp_dist__y_2)))
                            : ((0x00007fffU & (::IData)(__Vfunc_tb_mini_tpu__DOT__ulp_dist__y_2)) 
                               - (0x00007fffU & (::IData)(__Vfunc_tb_mini_tpu__DOT__ulp_dist__x_1))));
                    goto __Vlabel12;
                }
                __Vfunc_tb_mini_tpu__DOT__ulp_dist__Vfuncout_0 
                    = ((0x00007fffU & (::IData)(__Vfunc_tb_mini_tpu__DOT__ulp_dist__x_1)) 
                       + (0x00007fffU & (::IData)(__Vfunc_tb_mini_tpu__DOT__ulp_dist__y_2)));
                __Vlabel12: ;
            }
            __Vtask_tb_mini_tpu__DOT__run_matmul__d_13 
                = __Vfunc_tb_mini_tpu__DOT__ulp_dist__Vfuncout_0;
            if (VL_GTS_III(32, __Vtask_tb_mini_tpu__DOT__run_matmul__d_13, vlSelfRef.tb_mini_tpu__DOT__TOL)) {
                __Vtask_tb_mini_tpu__DOT__run_matmul__errs_12 
                    = ((::IData)(1U) + __Vtask_tb_mini_tpu__DOT__run_matmul__errs_12);
                if (VL_UNLIKELY((VL_LTES_III(32, (vlSelfRef.tb_mini_tpu__DOT__bad_cells 
                                                  + __Vtask_tb_mini_tpu__DOT__run_matmul__errs_12), vlSelfRef.tb_mini_tpu__DOT__MAXERR)))) {
                    VL_WRITEF_NX("  FAIL  test %0d C[2][2] = %h, expected %h (%0d ulp)\n",4
                                 , '~',32,vlSelfRef.tb_mini_tpu__DOT__tests
                                 , '#',16,(::IData)(__Vtask_tb_mini_tpu__DOT__run_matmul__got_14)
                                 , '#',16,vlSelfRef.tb_mini_tpu__DOT__C_exp__BRA__2__KET____BRA__2__KET__
                                 , '~',32,__Vtask_tb_mini_tpu__DOT__run_matmul__d_13);
                }
            }
            __Vtask_tb_mini_tpu__DOT__run_matmul__got_14 
                = vlSelfRef.tb_mini_tpu__DOT__dut__DOT__u_mem__DOT__result_matrix__BRA__2__KET____BRA__3__KET__;
            __Vfunc_tb_mini_tpu__DOT__ulp_dist__y_2 
                = vlSelfRef.tb_mini_tpu__DOT__C_exp__BRA__2__KET____BRA__3__KET__;
            __Vfunc_tb_mini_tpu__DOT__ulp_dist__x_1 
                = __Vtask_tb_mini_tpu__DOT__run_matmul__got_14;
            if (VL_GTS_III(32, __Vtask_tb_mini_tpu__DOT__run_matmul__d_13, vlSelfRef.tb_mini_tpu__DOT__max_ulp)) {
                vlSelfRef.tb_mini_tpu__DOT__max_ulp 
                    = __Vtask_tb_mini_tpu__DOT__run_matmul__d_13;
            }
            {
                __Vfunc_tb_mini_tpu__DOT__ulp_dist__Vfuncout_0 = 0U;
                if (((1U & ((::IData)(__Vfunc_tb_mini_tpu__DOT__ulp_dist__x_1) 
                            >> 0x0fU)) == (1U & ((::IData)(__Vfunc_tb_mini_tpu__DOT__ulp_dist__y_2) 
                                                 >> 0x0fU)))) {
                    __Vfunc_tb_mini_tpu__DOT__ulp_dist__Vfuncout_0 
                        = (((0x00007fffU & (::IData)(__Vfunc_tb_mini_tpu__DOT__ulp_dist__x_1)) 
                            > (0x00007fffU & (::IData)(__Vfunc_tb_mini_tpu__DOT__ulp_dist__y_2)))
                            ? ((0x00007fffU & (::IData)(__Vfunc_tb_mini_tpu__DOT__ulp_dist__x_1)) 
                               - (0x00007fffU & (::IData)(__Vfunc_tb_mini_tpu__DOT__ulp_dist__y_2)))
                            : ((0x00007fffU & (::IData)(__Vfunc_tb_mini_tpu__DOT__ulp_dist__y_2)) 
                               - (0x00007fffU & (::IData)(__Vfunc_tb_mini_tpu__DOT__ulp_dist__x_1))));
                    goto __Vlabel13;
                }
                __Vfunc_tb_mini_tpu__DOT__ulp_dist__Vfuncout_0 
                    = ((0x00007fffU & (::IData)(__Vfunc_tb_mini_tpu__DOT__ulp_dist__x_1)) 
                       + (0x00007fffU & (::IData)(__Vfunc_tb_mini_tpu__DOT__ulp_dist__y_2)));
                __Vlabel13: ;
            }
            __Vtask_tb_mini_tpu__DOT__run_matmul__d_13 
                = __Vfunc_tb_mini_tpu__DOT__ulp_dist__Vfuncout_0;
            if (VL_GTS_III(32, __Vtask_tb_mini_tpu__DOT__run_matmul__d_13, vlSelfRef.tb_mini_tpu__DOT__TOL)) {
                __Vtask_tb_mini_tpu__DOT__run_matmul__errs_12 
                    = ((::IData)(1U) + __Vtask_tb_mini_tpu__DOT__run_matmul__errs_12);
                if (VL_UNLIKELY((VL_LTES_III(32, (vlSelfRef.tb_mini_tpu__DOT__bad_cells 
                                                  + __Vtask_tb_mini_tpu__DOT__run_matmul__errs_12), vlSelfRef.tb_mini_tpu__DOT__MAXERR)))) {
                    VL_WRITEF_NX("  FAIL  test %0d C[2][3] = %h, expected %h (%0d ulp)\n",4
                                 , '~',32,vlSelfRef.tb_mini_tpu__DOT__tests
                                 , '#',16,(::IData)(__Vtask_tb_mini_tpu__DOT__run_matmul__got_14)
                                 , '#',16,vlSelfRef.tb_mini_tpu__DOT__C_exp__BRA__2__KET____BRA__3__KET__
                                 , '~',32,__Vtask_tb_mini_tpu__DOT__run_matmul__d_13);
                }
            }
            __Vtask_tb_mini_tpu__DOT__run_matmul__got_14 
                = vlSelfRef.tb_mini_tpu__DOT__dut__DOT__u_mem__DOT__result_matrix__BRA__3__KET____BRA__0__KET__;
            __Vfunc_tb_mini_tpu__DOT__ulp_dist__y_2 
                = vlSelfRef.tb_mini_tpu__DOT__C_exp__BRA__3__KET____BRA__0__KET__;
            __Vfunc_tb_mini_tpu__DOT__ulp_dist__x_1 
                = __Vtask_tb_mini_tpu__DOT__run_matmul__got_14;
            if (VL_GTS_III(32, __Vtask_tb_mini_tpu__DOT__run_matmul__d_13, vlSelfRef.tb_mini_tpu__DOT__max_ulp)) {
                vlSelfRef.tb_mini_tpu__DOT__max_ulp 
                    = __Vtask_tb_mini_tpu__DOT__run_matmul__d_13;
            }
            {
                __Vfunc_tb_mini_tpu__DOT__ulp_dist__Vfuncout_0 = 0U;
                if (((1U & ((::IData)(__Vfunc_tb_mini_tpu__DOT__ulp_dist__x_1) 
                            >> 0x0fU)) == (1U & ((::IData)(__Vfunc_tb_mini_tpu__DOT__ulp_dist__y_2) 
                                                 >> 0x0fU)))) {
                    __Vfunc_tb_mini_tpu__DOT__ulp_dist__Vfuncout_0 
                        = (((0x00007fffU & (::IData)(__Vfunc_tb_mini_tpu__DOT__ulp_dist__x_1)) 
                            > (0x00007fffU & (::IData)(__Vfunc_tb_mini_tpu__DOT__ulp_dist__y_2)))
                            ? ((0x00007fffU & (::IData)(__Vfunc_tb_mini_tpu__DOT__ulp_dist__x_1)) 
                               - (0x00007fffU & (::IData)(__Vfunc_tb_mini_tpu__DOT__ulp_dist__y_2)))
                            : ((0x00007fffU & (::IData)(__Vfunc_tb_mini_tpu__DOT__ulp_dist__y_2)) 
                               - (0x00007fffU & (::IData)(__Vfunc_tb_mini_tpu__DOT__ulp_dist__x_1))));
                    goto __Vlabel14;
                }
                __Vfunc_tb_mini_tpu__DOT__ulp_dist__Vfuncout_0 
                    = ((0x00007fffU & (::IData)(__Vfunc_tb_mini_tpu__DOT__ulp_dist__x_1)) 
                       + (0x00007fffU & (::IData)(__Vfunc_tb_mini_tpu__DOT__ulp_dist__y_2)));
                __Vlabel14: ;
            }
            __Vtask_tb_mini_tpu__DOT__run_matmul__d_13 
                = __Vfunc_tb_mini_tpu__DOT__ulp_dist__Vfuncout_0;
            if (VL_GTS_III(32, __Vtask_tb_mini_tpu__DOT__run_matmul__d_13, vlSelfRef.tb_mini_tpu__DOT__TOL)) {
                __Vtask_tb_mini_tpu__DOT__run_matmul__errs_12 
                    = ((::IData)(1U) + __Vtask_tb_mini_tpu__DOT__run_matmul__errs_12);
                if (VL_UNLIKELY((VL_LTES_III(32, (vlSelfRef.tb_mini_tpu__DOT__bad_cells 
                                                  + __Vtask_tb_mini_tpu__DOT__run_matmul__errs_12), vlSelfRef.tb_mini_tpu__DOT__MAXERR)))) {
                    VL_WRITEF_NX("  FAIL  test %0d C[3][0] = %h, expected %h (%0d ulp)\n",4
                                 , '~',32,vlSelfRef.tb_mini_tpu__DOT__tests
                                 , '#',16,(::IData)(__Vtask_tb_mini_tpu__DOT__run_matmul__got_14)
                                 , '#',16,vlSelfRef.tb_mini_tpu__DOT__C_exp__BRA__3__KET____BRA__0__KET__
                                 , '~',32,__Vtask_tb_mini_tpu__DOT__run_matmul__d_13);
                }
            }
            __Vtask_tb_mini_tpu__DOT__run_matmul__got_14 
                = vlSelfRef.tb_mini_tpu__DOT__dut__DOT__u_mem__DOT__result_matrix__BRA__3__KET____BRA__1__KET__;
            __Vfunc_tb_mini_tpu__DOT__ulp_dist__y_2 
                = vlSelfRef.tb_mini_tpu__DOT__C_exp__BRA__3__KET____BRA__1__KET__;
            __Vfunc_tb_mini_tpu__DOT__ulp_dist__x_1 
                = __Vtask_tb_mini_tpu__DOT__run_matmul__got_14;
            if (VL_GTS_III(32, __Vtask_tb_mini_tpu__DOT__run_matmul__d_13, vlSelfRef.tb_mini_tpu__DOT__max_ulp)) {
                vlSelfRef.tb_mini_tpu__DOT__max_ulp 
                    = __Vtask_tb_mini_tpu__DOT__run_matmul__d_13;
            }
            {
                __Vfunc_tb_mini_tpu__DOT__ulp_dist__Vfuncout_0 = 0U;
                if (((1U & ((::IData)(__Vfunc_tb_mini_tpu__DOT__ulp_dist__x_1) 
                            >> 0x0fU)) == (1U & ((::IData)(__Vfunc_tb_mini_tpu__DOT__ulp_dist__y_2) 
                                                 >> 0x0fU)))) {
                    __Vfunc_tb_mini_tpu__DOT__ulp_dist__Vfuncout_0 
                        = (((0x00007fffU & (::IData)(__Vfunc_tb_mini_tpu__DOT__ulp_dist__x_1)) 
                            > (0x00007fffU & (::IData)(__Vfunc_tb_mini_tpu__DOT__ulp_dist__y_2)))
                            ? ((0x00007fffU & (::IData)(__Vfunc_tb_mini_tpu__DOT__ulp_dist__x_1)) 
                               - (0x00007fffU & (::IData)(__Vfunc_tb_mini_tpu__DOT__ulp_dist__y_2)))
                            : ((0x00007fffU & (::IData)(__Vfunc_tb_mini_tpu__DOT__ulp_dist__y_2)) 
                               - (0x00007fffU & (::IData)(__Vfunc_tb_mini_tpu__DOT__ulp_dist__x_1))));
                    goto __Vlabel15;
                }
                __Vfunc_tb_mini_tpu__DOT__ulp_dist__Vfuncout_0 
                    = ((0x00007fffU & (::IData)(__Vfunc_tb_mini_tpu__DOT__ulp_dist__x_1)) 
                       + (0x00007fffU & (::IData)(__Vfunc_tb_mini_tpu__DOT__ulp_dist__y_2)));
                __Vlabel15: ;
            }
            __Vtask_tb_mini_tpu__DOT__run_matmul__d_13 
                = __Vfunc_tb_mini_tpu__DOT__ulp_dist__Vfuncout_0;
            if (VL_GTS_III(32, __Vtask_tb_mini_tpu__DOT__run_matmul__d_13, vlSelfRef.tb_mini_tpu__DOT__TOL)) {
                __Vtask_tb_mini_tpu__DOT__run_matmul__errs_12 
                    = ((::IData)(1U) + __Vtask_tb_mini_tpu__DOT__run_matmul__errs_12);
                if (VL_UNLIKELY((VL_LTES_III(32, (vlSelfRef.tb_mini_tpu__DOT__bad_cells 
                                                  + __Vtask_tb_mini_tpu__DOT__run_matmul__errs_12), vlSelfRef.tb_mini_tpu__DOT__MAXERR)))) {
                    VL_WRITEF_NX("  FAIL  test %0d C[3][1] = %h, expected %h (%0d ulp)\n",4
                                 , '~',32,vlSelfRef.tb_mini_tpu__DOT__tests
                                 , '#',16,(::IData)(__Vtask_tb_mini_tpu__DOT__run_matmul__got_14)
                                 , '#',16,vlSelfRef.tb_mini_tpu__DOT__C_exp__BRA__3__KET____BRA__1__KET__
                                 , '~',32,__Vtask_tb_mini_tpu__DOT__run_matmul__d_13);
                }
            }
            __Vtask_tb_mini_tpu__DOT__run_matmul__got_14 
                = vlSelfRef.tb_mini_tpu__DOT__dut__DOT__u_mem__DOT__result_matrix__BRA__3__KET____BRA__2__KET__;
            __Vfunc_tb_mini_tpu__DOT__ulp_dist__y_2 
                = vlSelfRef.tb_mini_tpu__DOT__C_exp__BRA__3__KET____BRA__2__KET__;
            __Vfunc_tb_mini_tpu__DOT__ulp_dist__x_1 
                = __Vtask_tb_mini_tpu__DOT__run_matmul__got_14;
            if (VL_GTS_III(32, __Vtask_tb_mini_tpu__DOT__run_matmul__d_13, vlSelfRef.tb_mini_tpu__DOT__max_ulp)) {
                vlSelfRef.tb_mini_tpu__DOT__max_ulp 
                    = __Vtask_tb_mini_tpu__DOT__run_matmul__d_13;
            }
            {
                __Vfunc_tb_mini_tpu__DOT__ulp_dist__Vfuncout_0 = 0U;
                if (((1U & ((::IData)(__Vfunc_tb_mini_tpu__DOT__ulp_dist__x_1) 
                            >> 0x0fU)) == (1U & ((::IData)(__Vfunc_tb_mini_tpu__DOT__ulp_dist__y_2) 
                                                 >> 0x0fU)))) {
                    __Vfunc_tb_mini_tpu__DOT__ulp_dist__Vfuncout_0 
                        = (((0x00007fffU & (::IData)(__Vfunc_tb_mini_tpu__DOT__ulp_dist__x_1)) 
                            > (0x00007fffU & (::IData)(__Vfunc_tb_mini_tpu__DOT__ulp_dist__y_2)))
                            ? ((0x00007fffU & (::IData)(__Vfunc_tb_mini_tpu__DOT__ulp_dist__x_1)) 
                               - (0x00007fffU & (::IData)(__Vfunc_tb_mini_tpu__DOT__ulp_dist__y_2)))
                            : ((0x00007fffU & (::IData)(__Vfunc_tb_mini_tpu__DOT__ulp_dist__y_2)) 
                               - (0x00007fffU & (::IData)(__Vfunc_tb_mini_tpu__DOT__ulp_dist__x_1))));
                    goto __Vlabel16;
                }
                __Vfunc_tb_mini_tpu__DOT__ulp_dist__Vfuncout_0 
                    = ((0x00007fffU & (::IData)(__Vfunc_tb_mini_tpu__DOT__ulp_dist__x_1)) 
                       + (0x00007fffU & (::IData)(__Vfunc_tb_mini_tpu__DOT__ulp_dist__y_2)));
                __Vlabel16: ;
            }
            __Vtask_tb_mini_tpu__DOT__run_matmul__d_13 
                = __Vfunc_tb_mini_tpu__DOT__ulp_dist__Vfuncout_0;
            if (VL_GTS_III(32, __Vtask_tb_mini_tpu__DOT__run_matmul__d_13, vlSelfRef.tb_mini_tpu__DOT__TOL)) {
                __Vtask_tb_mini_tpu__DOT__run_matmul__errs_12 
                    = ((::IData)(1U) + __Vtask_tb_mini_tpu__DOT__run_matmul__errs_12);
                if (VL_UNLIKELY((VL_LTES_III(32, (vlSelfRef.tb_mini_tpu__DOT__bad_cells 
                                                  + __Vtask_tb_mini_tpu__DOT__run_matmul__errs_12), vlSelfRef.tb_mini_tpu__DOT__MAXERR)))) {
                    VL_WRITEF_NX("  FAIL  test %0d C[3][2] = %h, expected %h (%0d ulp)\n",4
                                 , '~',32,vlSelfRef.tb_mini_tpu__DOT__tests
                                 , '#',16,(::IData)(__Vtask_tb_mini_tpu__DOT__run_matmul__got_14)
                                 , '#',16,vlSelfRef.tb_mini_tpu__DOT__C_exp__BRA__3__KET____BRA__2__KET__
                                 , '~',32,__Vtask_tb_mini_tpu__DOT__run_matmul__d_13);
                }
            }
            __Vtask_tb_mini_tpu__DOT__run_matmul__got_14 
                = vlSelfRef.tb_mini_tpu__DOT__dut__DOT__u_mem__DOT__result_matrix__BRA__3__KET____BRA__3__KET__;
            __Vfunc_tb_mini_tpu__DOT__ulp_dist__y_2 
                = vlSelfRef.tb_mini_tpu__DOT__C_exp__BRA__3__KET____BRA__3__KET__;
            __Vfunc_tb_mini_tpu__DOT__ulp_dist__x_1 
                = __Vtask_tb_mini_tpu__DOT__run_matmul__got_14;
            if (VL_GTS_III(32, __Vtask_tb_mini_tpu__DOT__run_matmul__d_13, vlSelfRef.tb_mini_tpu__DOT__max_ulp)) {
                vlSelfRef.tb_mini_tpu__DOT__max_ulp 
                    = __Vtask_tb_mini_tpu__DOT__run_matmul__d_13;
            }
            {
                __Vfunc_tb_mini_tpu__DOT__ulp_dist__Vfuncout_0 = 0U;
                if (((1U & ((::IData)(__Vfunc_tb_mini_tpu__DOT__ulp_dist__x_1) 
                            >> 0x0fU)) == (1U & ((::IData)(__Vfunc_tb_mini_tpu__DOT__ulp_dist__y_2) 
                                                 >> 0x0fU)))) {
                    __Vfunc_tb_mini_tpu__DOT__ulp_dist__Vfuncout_0 
                        = (((0x00007fffU & (::IData)(__Vfunc_tb_mini_tpu__DOT__ulp_dist__x_1)) 
                            > (0x00007fffU & (::IData)(__Vfunc_tb_mini_tpu__DOT__ulp_dist__y_2)))
                            ? ((0x00007fffU & (::IData)(__Vfunc_tb_mini_tpu__DOT__ulp_dist__x_1)) 
                               - (0x00007fffU & (::IData)(__Vfunc_tb_mini_tpu__DOT__ulp_dist__y_2)))
                            : ((0x00007fffU & (::IData)(__Vfunc_tb_mini_tpu__DOT__ulp_dist__y_2)) 
                               - (0x00007fffU & (::IData)(__Vfunc_tb_mini_tpu__DOT__ulp_dist__x_1))));
                    goto __Vlabel17;
                }
                __Vfunc_tb_mini_tpu__DOT__ulp_dist__Vfuncout_0 
                    = ((0x00007fffU & (::IData)(__Vfunc_tb_mini_tpu__DOT__ulp_dist__x_1)) 
                       + (0x00007fffU & (::IData)(__Vfunc_tb_mini_tpu__DOT__ulp_dist__y_2)));
                __Vlabel17: ;
            }
            __Vtask_tb_mini_tpu__DOT__run_matmul__d_13 
                = __Vfunc_tb_mini_tpu__DOT__ulp_dist__Vfuncout_0;
            if (VL_GTS_III(32, __Vtask_tb_mini_tpu__DOT__run_matmul__d_13, vlSelfRef.tb_mini_tpu__DOT__TOL)) {
                __Vtask_tb_mini_tpu__DOT__run_matmul__errs_12 
                    = ((::IData)(1U) + __Vtask_tb_mini_tpu__DOT__run_matmul__errs_12);
                if (VL_UNLIKELY((VL_LTES_III(32, (vlSelfRef.tb_mini_tpu__DOT__bad_cells 
                                                  + __Vtask_tb_mini_tpu__DOT__run_matmul__errs_12), vlSelfRef.tb_mini_tpu__DOT__MAXERR)))) {
                    VL_WRITEF_NX("  FAIL  test %0d C[3][3] = %h, expected %h (%0d ulp)\n",4
                                 , '~',32,vlSelfRef.tb_mini_tpu__DOT__tests
                                 , '#',16,(::IData)(__Vtask_tb_mini_tpu__DOT__run_matmul__got_14)
                                 , '#',16,vlSelfRef.tb_mini_tpu__DOT__C_exp__BRA__3__KET____BRA__3__KET__
                                 , '~',32,__Vtask_tb_mini_tpu__DOT__run_matmul__d_13);
                }
            }
            if (VL_GTS_III(32, __Vtask_tb_mini_tpu__DOT__run_matmul__d_13, vlSelfRef.tb_mini_tpu__DOT__max_ulp)) {
                vlSelfRef.tb_mini_tpu__DOT__max_ulp 
                    = __Vtask_tb_mini_tpu__DOT__run_matmul__d_13;
            }
            if ((0U != __Vtask_tb_mini_tpu__DOT__run_matmul__errs_12)) {
                vlSelfRef.tb_mini_tpu__DOT__bad_tests 
                    = ((::IData)(1U) + vlSelfRef.tb_mini_tpu__DOT__bad_tests);
                vlSelfRef.tb_mini_tpu__DOT__bad_cells 
                    = (vlSelfRef.tb_mini_tpu__DOT__bad_cells 
                       + __Vtask_tb_mini_tpu__DOT__run_matmul__errs_12);
            }
            while ((1U & (~ (::IData)(vlSelfRef.tb_mini_tpu__DOT__dut__DOT__u_ctrl__DOT__done)))) {
                Vtb_mini_tpu___024root____VbeforeTrig_hafb832d4__0(vlSelf, 
                                                                   "@( tb_mini_tpu.dut.u_ctrl.done)");
                co_await vlSelfRef.__Vnontrivs.__VtrigSched_hafb832d4__0.trigger(1U, 
                                                                                nullptr, 
                                                                                "@( tb_mini_tpu.dut.u_ctrl.done)", 
                                                                                "tb/tb_mini_tpu.sv", 
                                                                                107);
            }
            vlSelfRef.tb_mini_tpu__DOT__tests = ((::IData)(1U) 
                                                 + vlSelfRef.tb_mini_tpu__DOT__tests);
        }
        __Vlabel0: ;
    }
    VL_FCLOSE_I(tb_mini_tpu__DOT__fh); if ((0U == vlSelfRef.tb_mini_tpu__DOT__tests)) {
        VL_WRITEF_NX("FAIL: no vectors read from %s\n",1
                     , 'S',&(vlSelfRef.__Vnontrivs.tb_mini_tpu__DOT__fname));
    } else {
        VL_WRITEF_NX("%s: %s  tests=%0d  failing=%0d  bad_cells=%0d  x_cells=0  max_ulp=%0d  tol=%0d\n",7
                     , '#',32,((0U == vlSelfRef.tb_mini_tpu__DOT__bad_cells)
                                ? 0x50415353U : 0x4641494cU)
                     , 'S',&(vlSelfRef.__Vnontrivs.tb_mini_tpu__DOT__fname)
                     , '~',32,vlSelfRef.tb_mini_tpu__DOT__tests
                     , '~',32,vlSelfRef.tb_mini_tpu__DOT__bad_tests
                     , '~',32,vlSelfRef.tb_mini_tpu__DOT__bad_cells
                     , '~',32,vlSelfRef.tb_mini_tpu__DOT__max_ulp
                     , '~',32,vlSelfRef.tb_mini_tpu__DOT__TOL);
    }
    VL_FINISH_MT("tb/tb_mini_tpu.sv", 141, "");
    co_return;
}

VlCoroutine Vtb_mini_tpu___024root___eval_initial__TOP__Vtiming__1(Vtb_mini_tpu___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_mini_tpu___024root___eval_initial__TOP__Vtiming__1\n"); );
    Vtb_mini_tpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (VL_LIKELY(!vlSymsp->_vm_contextp__->gotFinish())) {
        co_await vlSelfRef.__Vnontrivs.__VdlySched.delay(0x0000000000001388ULL, 
                                                         nullptr, 
                                                         "tb/tb_mini_tpu.sv", 
                                                         27);
        vlSelfRef.tb_mini_tpu__DOT__clk = (1U & (~ (::IData)(vlSelfRef.tb_mini_tpu__DOT__clk)));
    }
    co_return;
}

bool Vtb_mini_tpu___024root___trigger_anySet__ico(const ::VlUnpacked<::QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_mini_tpu___024root___trigger_anySet__ico\n"); );
    // Locals
    ::IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        if (in[n]) {
            return (1U);
        }
        n = ((::IData)(1U) + n);
    } while ((1U > n));
    return (0U);
}

bool Vtb_mini_tpu___024root___trigger_anySet__act(const ::VlUnpacked<::QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_mini_tpu___024root___trigger_anySet__act\n"); );
    // Locals
    ::IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        if (in[n]) {
            return (1U);
        }
        n = ((::IData)(1U) + n);
    } while ((1U > n));
    return (0U);
}

extern const ::VlUnpacked<::CData/*1:0*/, 128> Vtb_mini_tpu__ConstPool__CONSARRAY_1;

void Vtb_mini_tpu___024root___nba_sequent__TOP__0(Vtb_mini_tpu___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_mini_tpu___024root___nba_sequent__TOP__0\n"); );
    Vtb_mini_tpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    ::CData/*3:0*/ __Vdly__tb_mini_tpu__DOT__dut__DOT__u_ctrl__DOT__cycle_cnt_49;
    __Vdly__tb_mini_tpu__DOT__dut__DOT__u_ctrl__DOT__cycle_cnt_49 = 0;
    // Body
    vlSelfRef.__Vdly__tb_mini_tpu__DOT__dut__DOT__u_ctrl__DOT__state_48 
        = vlSelfRef.tb_mini_tpu__DOT__dut__DOT__u_ctrl__DOT__state;
    __Vdly__tb_mini_tpu__DOT__dut__DOT__u_ctrl__DOT__cycle_cnt_49 
        = vlSelfRef.tb_mini_tpu__DOT__dut__DOT__u_ctrl__DOT__cycle_cnt;
    if (vlSelfRef.tb_mini_tpu__DOT__dut__DOT__u_rst_core__DOT__q) {
        vlSelfRef.__Vdly__tb_mini_tpu__DOT__dut__DOT__u_ctrl__DOT__state_48 
            = Vtb_mini_tpu__ConstPool__CONSARRAY_1[
            (((::IData)(vlSelfRef.tb_mini_tpu__DOT__start) 
              << 6U) | (((::IData)(vlSelfRef.tb_mini_tpu__DOT__dut__DOT__u_ctrl__DOT__cycle_cnt) 
                         << 2U) | (::IData)(vlSelfRef.tb_mini_tpu__DOT__dut__DOT__u_ctrl__DOT__state)))];
        __Vdly__tb_mini_tpu__DOT__dut__DOT__u_ctrl__DOT__cycle_cnt_49 
            = (((::IData)(vlSelfRef.tb_mini_tpu__DOT__dut__DOT__u_ctrl__DOT__state) 
                != Vtb_mini_tpu__ConstPool__CONSARRAY_1
                [(((::IData)(vlSelfRef.tb_mini_tpu__DOT__start) 
                   << 6U) | (((::IData)(vlSelfRef.tb_mini_tpu__DOT__dut__DOT__u_ctrl__DOT__cycle_cnt) 
                              << 2U) | (::IData)(vlSelfRef.tb_mini_tpu__DOT__dut__DOT__u_ctrl__DOT__state)))])
                ? 0U : (0x0000000fU & ((::IData)(1U) 
                                       + (::IData)(vlSelfRef.tb_mini_tpu__DOT__dut__DOT__u_ctrl__DOT__cycle_cnt))));
        if (vlSelfRef.tb_mini_tpu__DOT__start) {
            vlSelfRef.tb_mini_tpu__DOT__dut__DOT__u_ctrl__DOT__done = 0U;
        } else if (((3U == (::IData)(vlSelfRef.tb_mini_tpu__DOT__dut__DOT__u_ctrl__DOT__state)) 
                    & (0U == Vtb_mini_tpu__ConstPool__CONSARRAY_1
                       [(((::IData)(vlSelfRef.tb_mini_tpu__DOT__start) 
                          << 6U) | (((::IData)(vlSelfRef.tb_mini_tpu__DOT__dut__DOT__u_ctrl__DOT__cycle_cnt) 
                                     << 2U) | (::IData)(vlSelfRef.tb_mini_tpu__DOT__dut__DOT__u_ctrl__DOT__state)))]))) {
            vlSelfRef.tb_mini_tpu__DOT__dut__DOT__u_ctrl__DOT__done = 1U;
        }
        if ((1U & (0x1cc2U >> ((::IData)(vlSelfRef.tb_mini_tpu__DOT__dut__DOT__u_ctrl__DOT__state) 
                               << 2U)))) {
            vlSelfRef.tb_mini_tpu__DOT__dut__DOT__u_mem__DOT__result_matrix__BRA__3__KET____BRA__0__KET__ 
                = vlSelfRef.tb_mini_tpu__DOT__dut__DOT__u_mem__DOT__result_matrix__BRA__2__KET____BRA__0__KET__;
            vlSelfRef.tb_mini_tpu__DOT__dut__DOT__u_mem__DOT__result_matrix__BRA__3__KET____BRA__1__KET__ 
                = vlSelfRef.tb_mini_tpu__DOT__dut__DOT__u_mem__DOT__result_matrix__BRA__2__KET____BRA__1__KET__;
            vlSelfRef.tb_mini_tpu__DOT__dut__DOT__u_mem__DOT__result_matrix__BRA__3__KET____BRA__2__KET__ 
                = vlSelfRef.tb_mini_tpu__DOT__dut__DOT__u_mem__DOT__result_matrix__BRA__2__KET____BRA__2__KET__;
            vlSelfRef.tb_mini_tpu__DOT__dut__DOT__u_mem__DOT__result_matrix__BRA__3__KET____BRA__3__KET__ 
                = vlSelfRef.tb_mini_tpu__DOT__dut__DOT__u_mem__DOT__result_matrix__BRA__2__KET____BRA__3__KET__;
            vlSelfRef.tb_mini_tpu__DOT__dut__DOT__u_mem__DOT__result_matrix__BRA__2__KET____BRA__0__KET__ 
                = vlSelfRef.tb_mini_tpu__DOT__dut__DOT__u_mem__DOT__result_matrix__BRA__1__KET____BRA__0__KET__;
            vlSelfRef.tb_mini_tpu__DOT__dut__DOT__u_mem__DOT__result_matrix__BRA__2__KET____BRA__1__KET__ 
                = vlSelfRef.tb_mini_tpu__DOT__dut__DOT__u_mem__DOT__result_matrix__BRA__1__KET____BRA__1__KET__;
            vlSelfRef.tb_mini_tpu__DOT__dut__DOT__u_mem__DOT__result_matrix__BRA__2__KET____BRA__2__KET__ 
                = vlSelfRef.tb_mini_tpu__DOT__dut__DOT__u_mem__DOT__result_matrix__BRA__1__KET____BRA__2__KET__;
            vlSelfRef.tb_mini_tpu__DOT__dut__DOT__u_mem__DOT__result_matrix__BRA__2__KET____BRA__3__KET__ 
                = vlSelfRef.tb_mini_tpu__DOT__dut__DOT__u_mem__DOT__result_matrix__BRA__1__KET____BRA__3__KET__;
            vlSelfRef.tb_mini_tpu__DOT__dut__DOT__u_mem__DOT__result_matrix__BRA__1__KET____BRA__0__KET__ 
                = vlSelfRef.tb_mini_tpu__DOT__dut__DOT__u_mem__DOT__result_matrix__BRA__0__KET____BRA__0__KET__;
            vlSelfRef.tb_mini_tpu__DOT__dut__DOT__u_mem__DOT__result_matrix__BRA__1__KET____BRA__1__KET__ 
                = vlSelfRef.tb_mini_tpu__DOT__dut__DOT__u_mem__DOT__result_matrix__BRA__0__KET____BRA__1__KET__;
            vlSelfRef.tb_mini_tpu__DOT__dut__DOT__u_mem__DOT__result_matrix__BRA__1__KET____BRA__2__KET__ 
                = vlSelfRef.tb_mini_tpu__DOT__dut__DOT__u_mem__DOT__result_matrix__BRA__0__KET____BRA__2__KET__;
            vlSelfRef.tb_mini_tpu__DOT__dut__DOT__u_mem__DOT__result_matrix__BRA__1__KET____BRA__3__KET__ 
                = vlSelfRef.tb_mini_tpu__DOT__dut__DOT__u_mem__DOT__result_matrix__BRA__0__KET____BRA__3__KET__;
            vlSelfRef.tb_mini_tpu__DOT__dut__DOT__u_mem__DOT__result_matrix__BRA__0__KET____BRA__0__KET__ 
                = (0x0000ffffU & (::IData)(vlSelfRef.tb_mini_tpu__DOT__dut__DOT__u_array__DOT__result_out));
            vlSelfRef.tb_mini_tpu__DOT__dut__DOT__u_mem__DOT__result_matrix__BRA__0__KET____BRA__1__KET__ 
                = (0x0000ffffU & (::IData)((vlSelfRef.tb_mini_tpu__DOT__dut__DOT__u_array__DOT__result_out 
                                            >> 0x10U)));
            vlSelfRef.tb_mini_tpu__DOT__dut__DOT__u_mem__DOT__result_matrix__BRA__0__KET____BRA__2__KET__ 
                = (0x0000ffffU & (::IData)((vlSelfRef.tb_mini_tpu__DOT__dut__DOT__u_array__DOT__result_out 
                                            >> 0x20U)));
            vlSelfRef.tb_mini_tpu__DOT__dut__DOT__u_mem__DOT__result_matrix__BRA__0__KET____BRA__3__KET__ 
                = (0x0000ffffU & (::IData)((vlSelfRef.tb_mini_tpu__DOT__dut__DOT__u_array__DOT__result_out 
                                            >> 0x30U)));
        }
    } else {
        vlSelfRef.__Vdly__tb_mini_tpu__DOT__dut__DOT__u_ctrl__DOT__state_48 = 0U;
        __Vdly__tb_mini_tpu__DOT__dut__DOT__u_ctrl__DOT__cycle_cnt_49 = 0U;
        vlSelfRef.tb_mini_tpu__DOT__dut__DOT__u_ctrl__DOT__done = 0U;
        vlSelfRef.tb_mini_tpu__DOT__dut__DOT__u_mem__DOT__result_matrix__BRA__3__KET____BRA__0__KET__ = 0U;
        vlSelfRef.tb_mini_tpu__DOT__dut__DOT__u_mem__DOT__result_matrix__BRA__3__KET____BRA__1__KET__ = 0U;
        vlSelfRef.tb_mini_tpu__DOT__dut__DOT__u_mem__DOT__result_matrix__BRA__3__KET____BRA__2__KET__ = 0U;
        vlSelfRef.tb_mini_tpu__DOT__dut__DOT__u_mem__DOT__result_matrix__BRA__3__KET____BRA__3__KET__ = 0U;
        vlSelfRef.tb_mini_tpu__DOT__dut__DOT__u_mem__DOT__result_matrix__BRA__2__KET____BRA__0__KET__ = 0U;
        vlSelfRef.tb_mini_tpu__DOT__dut__DOT__u_mem__DOT__result_matrix__BRA__2__KET____BRA__1__KET__ = 0U;
        vlSelfRef.tb_mini_tpu__DOT__dut__DOT__u_mem__DOT__result_matrix__BRA__2__KET____BRA__2__KET__ = 0U;
        vlSelfRef.tb_mini_tpu__DOT__dut__DOT__u_mem__DOT__result_matrix__BRA__2__KET____BRA__3__KET__ = 0U;
        vlSelfRef.tb_mini_tpu__DOT__dut__DOT__u_mem__DOT__result_matrix__BRA__1__KET____BRA__0__KET__ = 0U;
        vlSelfRef.tb_mini_tpu__DOT__dut__DOT__u_mem__DOT__result_matrix__BRA__1__KET____BRA__1__KET__ = 0U;
        vlSelfRef.tb_mini_tpu__DOT__dut__DOT__u_mem__DOT__result_matrix__BRA__1__KET____BRA__2__KET__ = 0U;
        vlSelfRef.tb_mini_tpu__DOT__dut__DOT__u_mem__DOT__result_matrix__BRA__1__KET____BRA__3__KET__ = 0U;
        vlSelfRef.tb_mini_tpu__DOT__dut__DOT__u_mem__DOT__result_matrix__BRA__0__KET____BRA__0__KET__ = 0U;
        vlSelfRef.tb_mini_tpu__DOT__dut__DOT__u_mem__DOT__result_matrix__BRA__0__KET____BRA__1__KET__ = 0U;
        vlSelfRef.tb_mini_tpu__DOT__dut__DOT__u_mem__DOT__result_matrix__BRA__0__KET____BRA__2__KET__ = 0U;
        vlSelfRef.tb_mini_tpu__DOT__dut__DOT__u_mem__DOT__result_matrix__BRA__0__KET____BRA__3__KET__ = 0U;
    }
    vlSelfRef.tb_mini_tpu__DOT__dut__DOT__u_mem__DOT__result_valid 
        = ((::IData)(vlSelfRef.tb_mini_tpu__DOT__dut__DOT__u_rst_core__DOT__q) 
           && ((::IData)(vlSelfRef.tb_mini_tpu__DOT__dut__DOT__u_mem__DOT__drain_q) 
               & (~ (0x1cc2U >> ((::IData)(vlSelfRef.tb_mini_tpu__DOT__dut__DOT__u_ctrl__DOT__state) 
                                 << 2U)))));
    vlSelfRef.tb_mini_tpu__DOT__dut__DOT__u_ctrl__DOT__cycle_cnt 
        = __Vdly__tb_mini_tpu__DOT__dut__DOT__u_ctrl__DOT__cycle_cnt_49;
    vlSelfRef.tb_mini_tpu__DOT__dut__DOT__u_mem__DOT__drain_q 
        = ((::IData)(vlSelfRef.tb_mini_tpu__DOT__dut__DOT__u_rst_core__DOT__q) 
           && (1U & (0x1cc2U >> ((::IData)(vlSelfRef.tb_mini_tpu__DOT__dut__DOT__u_ctrl__DOT__state) 
                                 << 2U))));
}

void Vtb_mini_tpu_processing_element___nba_sequent__TOP__tb_mini_tpu__DOT__dut__DOT__u_array__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__pe__0(Vtb_mini_tpu_processing_element* vlSelf);
void Vtb_mini_tpu_processing_element___nba_sequent__TOP__tb_mini_tpu__DOT__dut__DOT__u_array__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__pe__0(Vtb_mini_tpu_processing_element* vlSelf);
void Vtb_mini_tpu_processing_element___nba_sequent__TOP__tb_mini_tpu__DOT__dut__DOT__u_array__DOT__row__BRA__0__KET____DOT__col__BRA__2__KET____DOT__pe__0(Vtb_mini_tpu_processing_element* vlSelf);
void Vtb_mini_tpu_processing_element___nba_sequent__TOP__tb_mini_tpu__DOT__dut__DOT__u_array__DOT__row__BRA__0__KET____DOT__col__BRA__3__KET____DOT__pe__0(Vtb_mini_tpu_processing_element* vlSelf);
void Vtb_mini_tpu_processing_element___nba_sequent__TOP__tb_mini_tpu__DOT__dut__DOT__u_array__DOT__row__BRA__0__KET____DOT__col__BRA__2__KET____DOT__pe__1(Vtb_mini_tpu_processing_element* vlSelf);
void Vtb_mini_tpu_processing_element___nba_sequent__TOP__tb_mini_tpu__DOT__dut__DOT__u_array__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__pe__1(Vtb_mini_tpu_processing_element* vlSelf);
void Vtb_mini_tpu_processing_element___nba_comb__TOP__tb_mini_tpu__DOT__dut__DOT__u_array__DOT__row__BRA__0__KET____DOT__col__BRA__3__KET____DOT__pe__0(Vtb_mini_tpu_processing_element* vlSelf);
void Vtb_mini_tpu_processing_element___nba_sequent__TOP__tb_mini_tpu__DOT__dut__DOT__u_array__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__pe__1(Vtb_mini_tpu_processing_element* vlSelf);
void Vtb_mini_tpu_processing_element___nba_comb__TOP__tb_mini_tpu__DOT__dut__DOT__u_array__DOT__row__BRA__0__KET____DOT__col__BRA__2__KET____DOT__pe__0(Vtb_mini_tpu_processing_element* vlSelf);
void Vtb_mini_tpu_processing_element___nba_comb__TOP__tb_mini_tpu__DOT__dut__DOT__u_array__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__pe__0(Vtb_mini_tpu_processing_element* vlSelf);
void Vtb_mini_tpu_processing_element___nba_sequent__TOP__tb_mini_tpu__DOT__dut__DOT__u_array__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__pe__0(Vtb_mini_tpu_processing_element* vlSelf);
void Vtb_mini_tpu_processing_element___nba_sequent__TOP__tb_mini_tpu__DOT__dut__DOT__u_array__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__pe__0(Vtb_mini_tpu_processing_element* vlSelf);
void Vtb_mini_tpu_processing_element___nba_sequent__TOP__tb_mini_tpu__DOT__dut__DOT__u_array__DOT__row__BRA__1__KET____DOT__col__BRA__2__KET____DOT__pe__0(Vtb_mini_tpu_processing_element* vlSelf);
void Vtb_mini_tpu_processing_element___nba_sequent__TOP__tb_mini_tpu__DOT__dut__DOT__u_array__DOT__row__BRA__1__KET____DOT__col__BRA__3__KET____DOT__pe__0(Vtb_mini_tpu_processing_element* vlSelf);
void Vtb_mini_tpu_processing_element___nba_sequent__TOP__tb_mini_tpu__DOT__dut__DOT__u_array__DOT__row__BRA__1__KET____DOT__col__BRA__2__KET____DOT__pe__1(Vtb_mini_tpu_processing_element* vlSelf);
void Vtb_mini_tpu_processing_element___nba_sequent__TOP__tb_mini_tpu__DOT__dut__DOT__u_array__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__pe__1(Vtb_mini_tpu_processing_element* vlSelf);
void Vtb_mini_tpu_processing_element___nba_comb__TOP__tb_mini_tpu__DOT__dut__DOT__u_array__DOT__row__BRA__1__KET____DOT__col__BRA__3__KET____DOT__pe__0(Vtb_mini_tpu_processing_element* vlSelf);
void Vtb_mini_tpu_processing_element___nba_sequent__TOP__tb_mini_tpu__DOT__dut__DOT__u_array__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__pe__1(Vtb_mini_tpu_processing_element* vlSelf);
void Vtb_mini_tpu_processing_element___nba_comb__TOP__tb_mini_tpu__DOT__dut__DOT__u_array__DOT__row__BRA__1__KET____DOT__col__BRA__2__KET____DOT__pe__0(Vtb_mini_tpu_processing_element* vlSelf);
void Vtb_mini_tpu_processing_element___nba_comb__TOP__tb_mini_tpu__DOT__dut__DOT__u_array__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__pe__0(Vtb_mini_tpu_processing_element* vlSelf);
void Vtb_mini_tpu_processing_element___nba_sequent__TOP__tb_mini_tpu__DOT__dut__DOT__u_array__DOT__row__BRA__2__KET____DOT__col__BRA__0__KET____DOT__pe__0(Vtb_mini_tpu_processing_element* vlSelf);
void Vtb_mini_tpu_processing_element___nba_sequent__TOP__tb_mini_tpu__DOT__dut__DOT__u_array__DOT__row__BRA__2__KET____DOT__col__BRA__1__KET____DOT__pe__0(Vtb_mini_tpu_processing_element* vlSelf);
void Vtb_mini_tpu_processing_element___nba_sequent__TOP__tb_mini_tpu__DOT__dut__DOT__u_array__DOT__row__BRA__2__KET____DOT__col__BRA__2__KET____DOT__pe__0(Vtb_mini_tpu_processing_element* vlSelf);
void Vtb_mini_tpu_processing_element___nba_sequent__TOP__tb_mini_tpu__DOT__dut__DOT__u_array__DOT__row__BRA__2__KET____DOT__col__BRA__3__KET____DOT__pe__0(Vtb_mini_tpu_processing_element* vlSelf);
void Vtb_mini_tpu_processing_element___nba_sequent__TOP__tb_mini_tpu__DOT__dut__DOT__u_array__DOT__row__BRA__2__KET____DOT__col__BRA__2__KET____DOT__pe__1(Vtb_mini_tpu_processing_element* vlSelf);
void Vtb_mini_tpu_processing_element___nba_sequent__TOP__tb_mini_tpu__DOT__dut__DOT__u_array__DOT__row__BRA__2__KET____DOT__col__BRA__1__KET____DOT__pe__1(Vtb_mini_tpu_processing_element* vlSelf);
void Vtb_mini_tpu_processing_element___nba_comb__TOP__tb_mini_tpu__DOT__dut__DOT__u_array__DOT__row__BRA__2__KET____DOT__col__BRA__3__KET____DOT__pe__0(Vtb_mini_tpu_processing_element* vlSelf);
void Vtb_mini_tpu_processing_element___nba_sequent__TOP__tb_mini_tpu__DOT__dut__DOT__u_array__DOT__row__BRA__2__KET____DOT__col__BRA__0__KET____DOT__pe__1(Vtb_mini_tpu_processing_element* vlSelf);
void Vtb_mini_tpu_processing_element___nba_comb__TOP__tb_mini_tpu__DOT__dut__DOT__u_array__DOT__row__BRA__2__KET____DOT__col__BRA__2__KET____DOT__pe__0(Vtb_mini_tpu_processing_element* vlSelf);
void Vtb_mini_tpu_processing_element___nba_comb__TOP__tb_mini_tpu__DOT__dut__DOT__u_array__DOT__row__BRA__2__KET____DOT__col__BRA__1__KET____DOT__pe__0(Vtb_mini_tpu_processing_element* vlSelf);
void Vtb_mini_tpu_processing_element___nba_sequent__TOP__tb_mini_tpu__DOT__dut__DOT__u_array__DOT__row__BRA__3__KET____DOT__col__BRA__0__KET____DOT__pe__0(Vtb_mini_tpu_processing_element* vlSelf);
void Vtb_mini_tpu_processing_element___nba_sequent__TOP__tb_mini_tpu__DOT__dut__DOT__u_array__DOT__row__BRA__3__KET____DOT__col__BRA__1__KET____DOT__pe__0(Vtb_mini_tpu_processing_element* vlSelf);
void Vtb_mini_tpu_processing_element___nba_sequent__TOP__tb_mini_tpu__DOT__dut__DOT__u_array__DOT__row__BRA__3__KET____DOT__col__BRA__2__KET____DOT__pe__0(Vtb_mini_tpu_processing_element* vlSelf);
void Vtb_mini_tpu_processing_element___nba_sequent__TOP__tb_mini_tpu__DOT__dut__DOT__u_array__DOT__row__BRA__3__KET____DOT__col__BRA__3__KET____DOT__pe__0(Vtb_mini_tpu_processing_element* vlSelf);
void Vtb_mini_tpu_processing_element___nba_sequent__TOP__tb_mini_tpu__DOT__dut__DOT__u_array__DOT__row__BRA__3__KET____DOT__col__BRA__2__KET____DOT__pe__1(Vtb_mini_tpu_processing_element* vlSelf);
void Vtb_mini_tpu_processing_element___nba_sequent__TOP__tb_mini_tpu__DOT__dut__DOT__u_array__DOT__row__BRA__3__KET____DOT__col__BRA__1__KET____DOT__pe__1(Vtb_mini_tpu_processing_element* vlSelf);
void Vtb_mini_tpu_processing_element___nba_comb__TOP__tb_mini_tpu__DOT__dut__DOT__u_array__DOT__row__BRA__3__KET____DOT__col__BRA__3__KET____DOT__pe__0(Vtb_mini_tpu_processing_element* vlSelf);
void Vtb_mini_tpu_processing_element___nba_sequent__TOP__tb_mini_tpu__DOT__dut__DOT__u_array__DOT__row__BRA__3__KET____DOT__col__BRA__0__KET____DOT__pe__1(Vtb_mini_tpu_processing_element* vlSelf);
void Vtb_mini_tpu_processing_element___nba_comb__TOP__tb_mini_tpu__DOT__dut__DOT__u_array__DOT__row__BRA__3__KET____DOT__col__BRA__2__KET____DOT__pe__0(Vtb_mini_tpu_processing_element* vlSelf);
void Vtb_mini_tpu_processing_element___nba_comb__TOP__tb_mini_tpu__DOT__dut__DOT__u_array__DOT__row__BRA__3__KET____DOT__col__BRA__1__KET____DOT__pe__0(Vtb_mini_tpu_processing_element* vlSelf);
void Vtb_mini_tpu_processing_element___nba_comb__TOP__tb_mini_tpu__DOT__dut__DOT__u_array__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__pe__0(Vtb_mini_tpu_processing_element* vlSelf);
void Vtb_mini_tpu_processing_element___nba_comb__TOP__tb_mini_tpu__DOT__dut__DOT__u_array__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__pe__0(Vtb_mini_tpu_processing_element* vlSelf);
void Vtb_mini_tpu_processing_element___nba_comb__TOP__tb_mini_tpu__DOT__dut__DOT__u_array__DOT__row__BRA__2__KET____DOT__col__BRA__0__KET____DOT__pe__0(Vtb_mini_tpu_processing_element* vlSelf);
void Vtb_mini_tpu_processing_element___nba_comb__TOP__tb_mini_tpu__DOT__dut__DOT__u_array__DOT__row__BRA__3__KET____DOT__col__BRA__0__KET____DOT__pe__0(Vtb_mini_tpu_processing_element* vlSelf);
void Vtb_mini_tpu_processing_element___nba_sequent__TOP__tb_mini_tpu__DOT__dut__DOT__u_array__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__pe__2(Vtb_mini_tpu_processing_element* vlSelf);
void Vtb_mini_tpu_processing_element___nba_sequent__TOP__tb_mini_tpu__DOT__dut__DOT__u_array__DOT__row__BRA__2__KET____DOT__col__BRA__0__KET____DOT__pe__2(Vtb_mini_tpu_processing_element* vlSelf);
void Vtb_mini_tpu_processing_element___nba_sequent__TOP__tb_mini_tpu__DOT__dut__DOT__u_array__DOT__row__BRA__2__KET____DOT__col__BRA__1__KET____DOT__pe__2(Vtb_mini_tpu_processing_element* vlSelf);
void Vtb_mini_tpu_processing_element___nba_sequent__TOP__tb_mini_tpu__DOT__dut__DOT__u_array__DOT__row__BRA__2__KET____DOT__col__BRA__2__KET____DOT__pe__2(Vtb_mini_tpu_processing_element* vlSelf);
void Vtb_mini_tpu_processing_element___nba_sequent__TOP__tb_mini_tpu__DOT__dut__DOT__u_array__DOT__row__BRA__2__KET____DOT__col__BRA__3__KET____DOT__pe__1(Vtb_mini_tpu_processing_element* vlSelf);
void Vtb_mini_tpu_processing_element___nba_comb__TOP__tb_mini_tpu__DOT__dut__DOT__u_array__DOT__row__BRA__3__KET____DOT__col__BRA__0__KET____DOT__pe__1(Vtb_mini_tpu_processing_element* vlSelf);
void Vtb_mini_tpu_processing_element___nba_comb__TOP__tb_mini_tpu__DOT__dut__DOT__u_array__DOT__row__BRA__3__KET____DOT__col__BRA__1__KET____DOT__pe__1(Vtb_mini_tpu_processing_element* vlSelf);
void Vtb_mini_tpu_processing_element___nba_comb__TOP__tb_mini_tpu__DOT__dut__DOT__u_array__DOT__row__BRA__3__KET____DOT__col__BRA__2__KET____DOT__pe__1(Vtb_mini_tpu_processing_element* vlSelf);
void Vtb_mini_tpu_processing_element___nba_comb__TOP__tb_mini_tpu__DOT__dut__DOT__u_array__DOT__row__BRA__3__KET____DOT__col__BRA__3__KET____DOT__pe__1(Vtb_mini_tpu_processing_element* vlSelf);
void Vtb_mini_tpu_processing_element___nba_sequent__TOP__tb_mini_tpu__DOT__dut__DOT__u_array__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__pe__3(Vtb_mini_tpu_processing_element* vlSelf);
void Vtb_mini_tpu_processing_element___nba_sequent__TOP__tb_mini_tpu__DOT__dut__DOT__u_array__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__pe__3(Vtb_mini_tpu_processing_element* vlSelf);
void Vtb_mini_tpu_processing_element___nba_sequent__TOP__tb_mini_tpu__DOT__dut__DOT__u_array__DOT__row__BRA__1__KET____DOT__col__BRA__2__KET____DOT__pe__3(Vtb_mini_tpu_processing_element* vlSelf);
void Vtb_mini_tpu_processing_element___nba_sequent__TOP__tb_mini_tpu__DOT__dut__DOT__u_array__DOT__row__BRA__1__KET____DOT__col__BRA__3__KET____DOT__pe__2(Vtb_mini_tpu_processing_element* vlSelf);
void Vtb_mini_tpu_processing_element___nba_comb__TOP__tb_mini_tpu__DOT__dut__DOT__u_array__DOT__row__BRA__2__KET____DOT__col__BRA__0__KET____DOT__pe__1(Vtb_mini_tpu_processing_element* vlSelf);
void Vtb_mini_tpu_processing_element___nba_comb__TOP__tb_mini_tpu__DOT__dut__DOT__u_array__DOT__row__BRA__2__KET____DOT__col__BRA__1__KET____DOT__pe__1(Vtb_mini_tpu_processing_element* vlSelf);
void Vtb_mini_tpu_processing_element___nba_comb__TOP__tb_mini_tpu__DOT__dut__DOT__u_array__DOT__row__BRA__2__KET____DOT__col__BRA__2__KET____DOT__pe__1(Vtb_mini_tpu_processing_element* vlSelf);
void Vtb_mini_tpu_processing_element___nba_comb__TOP__tb_mini_tpu__DOT__dut__DOT__u_array__DOT__row__BRA__2__KET____DOT__col__BRA__3__KET____DOT__pe__1(Vtb_mini_tpu_processing_element* vlSelf);
void Vtb_mini_tpu_processing_element___nba_comb__TOP__tb_mini_tpu__DOT__dut__DOT__u_array__DOT__row__BRA__3__KET____DOT__col__BRA__0__KET____DOT__pe__2(Vtb_mini_tpu_processing_element* vlSelf);
void Vtb_mini_tpu_processing_element___nba_comb__TOP__tb_mini_tpu__DOT__dut__DOT__u_array__DOT__row__BRA__2__KET____DOT__col__BRA__0__KET____DOT__pe__2(Vtb_mini_tpu_processing_element* vlSelf);
void Vtb_mini_tpu_processing_element___nba_comb__TOP__tb_mini_tpu__DOT__dut__DOT__u_array__DOT__row__BRA__3__KET____DOT__col__BRA__1__KET____DOT__pe__2(Vtb_mini_tpu_processing_element* vlSelf);
void Vtb_mini_tpu_processing_element___nba_comb__TOP__tb_mini_tpu__DOT__dut__DOT__u_array__DOT__row__BRA__3__KET____DOT__col__BRA__2__KET____DOT__pe__2(Vtb_mini_tpu_processing_element* vlSelf);
void Vtb_mini_tpu_processing_element___nba_comb__TOP__tb_mini_tpu__DOT__dut__DOT__u_array__DOT__row__BRA__3__KET____DOT__col__BRA__3__KET____DOT__pe__2(Vtb_mini_tpu_processing_element* vlSelf);
void Vtb_mini_tpu_processing_element___nba_comb__TOP__tb_mini_tpu__DOT__dut__DOT__u_array__DOT__row__BRA__2__KET____DOT__col__BRA__1__KET____DOT__pe__2(Vtb_mini_tpu_processing_element* vlSelf);
void Vtb_mini_tpu_processing_element___nba_comb__TOP__tb_mini_tpu__DOT__dut__DOT__u_array__DOT__row__BRA__2__KET____DOT__col__BRA__2__KET____DOT__pe__2(Vtb_mini_tpu_processing_element* vlSelf);
void Vtb_mini_tpu_processing_element___nba_comb__TOP__tb_mini_tpu__DOT__dut__DOT__u_array__DOT__row__BRA__2__KET____DOT__col__BRA__3__KET____DOT__pe__2(Vtb_mini_tpu_processing_element* vlSelf);
void Vtb_mini_tpu_processing_element___nba_sequent__TOP__tb_mini_tpu__DOT__dut__DOT__u_array__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__pe__3(Vtb_mini_tpu_processing_element* vlSelf);
void Vtb_mini_tpu_processing_element___nba_sequent__TOP__tb_mini_tpu__DOT__dut__DOT__u_array__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__pe__3(Vtb_mini_tpu_processing_element* vlSelf);
void Vtb_mini_tpu_processing_element___nba_sequent__TOP__tb_mini_tpu__DOT__dut__DOT__u_array__DOT__row__BRA__0__KET____DOT__col__BRA__2__KET____DOT__pe__3(Vtb_mini_tpu_processing_element* vlSelf);
void Vtb_mini_tpu_processing_element___nba_sequent__TOP__tb_mini_tpu__DOT__dut__DOT__u_array__DOT__row__BRA__0__KET____DOT__col__BRA__3__KET____DOT__pe__2(Vtb_mini_tpu_processing_element* vlSelf);
void Vtb_mini_tpu_processing_element___nba_comb__TOP__tb_mini_tpu__DOT__dut__DOT__u_array__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__pe__1(Vtb_mini_tpu_processing_element* vlSelf);
void Vtb_mini_tpu_processing_element___nba_comb__TOP__tb_mini_tpu__DOT__dut__DOT__u_array__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__pe__1(Vtb_mini_tpu_processing_element* vlSelf);
void Vtb_mini_tpu_processing_element___nba_comb__TOP__tb_mini_tpu__DOT__dut__DOT__u_array__DOT__row__BRA__1__KET____DOT__col__BRA__2__KET____DOT__pe__1(Vtb_mini_tpu_processing_element* vlSelf);
void Vtb_mini_tpu_processing_element___nba_comb__TOP__tb_mini_tpu__DOT__dut__DOT__u_array__DOT__row__BRA__1__KET____DOT__col__BRA__3__KET____DOT__pe__1(Vtb_mini_tpu_processing_element* vlSelf);
void Vtb_mini_tpu_processing_element___nba_comb__TOP__tb_mini_tpu__DOT__dut__DOT__u_array__DOT__row__BRA__2__KET____DOT__col__BRA__0__KET____DOT__pe__3(Vtb_mini_tpu_processing_element* vlSelf);
void Vtb_mini_tpu_processing_element___nba_comb__TOP__tb_mini_tpu__DOT__dut__DOT__u_array__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__pe__2(Vtb_mini_tpu_processing_element* vlSelf);
void Vtb_mini_tpu_processing_element___nba_comb__TOP__tb_mini_tpu__DOT__dut__DOT__u_array__DOT__row__BRA__2__KET____DOT__col__BRA__1__KET____DOT__pe__3(Vtb_mini_tpu_processing_element* vlSelf);
void Vtb_mini_tpu_processing_element___nba_comb__TOP__tb_mini_tpu__DOT__dut__DOT__u_array__DOT__row__BRA__2__KET____DOT__col__BRA__2__KET____DOT__pe__3(Vtb_mini_tpu_processing_element* vlSelf);
void Vtb_mini_tpu_processing_element___nba_comb__TOP__tb_mini_tpu__DOT__dut__DOT__u_array__DOT__row__BRA__2__KET____DOT__col__BRA__3__KET____DOT__pe__3(Vtb_mini_tpu_processing_element* vlSelf);
void Vtb_mini_tpu_processing_element___nba_comb__TOP__tb_mini_tpu__DOT__dut__DOT__u_array__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__pe__2(Vtb_mini_tpu_processing_element* vlSelf);
void Vtb_mini_tpu_processing_element___nba_comb__TOP__tb_mini_tpu__DOT__dut__DOT__u_array__DOT__row__BRA__1__KET____DOT__col__BRA__2__KET____DOT__pe__2(Vtb_mini_tpu_processing_element* vlSelf);
void Vtb_mini_tpu_processing_element___nba_comb__TOP__tb_mini_tpu__DOT__dut__DOT__u_array__DOT__row__BRA__1__KET____DOT__col__BRA__3__KET____DOT__pe__2(Vtb_mini_tpu_processing_element* vlSelf);
void Vtb_mini_tpu_processing_element___nba_comb__TOP__tb_mini_tpu__DOT__dut__DOT__u_array__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__pe__1(Vtb_mini_tpu_processing_element* vlSelf);
void Vtb_mini_tpu_processing_element___nba_comb__TOP__tb_mini_tpu__DOT__dut__DOT__u_array__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__pe__1(Vtb_mini_tpu_processing_element* vlSelf);
void Vtb_mini_tpu_processing_element___nba_comb__TOP__tb_mini_tpu__DOT__dut__DOT__u_array__DOT__row__BRA__0__KET____DOT__col__BRA__2__KET____DOT__pe__1(Vtb_mini_tpu_processing_element* vlSelf);
void Vtb_mini_tpu_processing_element___nba_comb__TOP__tb_mini_tpu__DOT__dut__DOT__u_array__DOT__row__BRA__0__KET____DOT__col__BRA__3__KET____DOT__pe__1(Vtb_mini_tpu_processing_element* vlSelf);
void Vtb_mini_tpu_processing_element___nba_comb__TOP__tb_mini_tpu__DOT__dut__DOT__u_array__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__pe__3(Vtb_mini_tpu_processing_element* vlSelf);
void Vtb_mini_tpu_processing_element___nba_comb__TOP__tb_mini_tpu__DOT__dut__DOT__u_array__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__pe__2(Vtb_mini_tpu_processing_element* vlSelf);
void Vtb_mini_tpu_processing_element___nba_comb__TOP__tb_mini_tpu__DOT__dut__DOT__u_array__DOT__row__BRA__0__KET____DOT__col__BRA__2__KET____DOT__pe__2(Vtb_mini_tpu_processing_element* vlSelf);
void Vtb_mini_tpu_processing_element___nba_comb__TOP__tb_mini_tpu__DOT__dut__DOT__u_array__DOT__row__BRA__0__KET____DOT__col__BRA__3__KET____DOT__pe__2(Vtb_mini_tpu_processing_element* vlSelf);
void Vtb_mini_tpu_processing_element___nba_comb__TOP__tb_mini_tpu__DOT__dut__DOT__u_array__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__pe__2(Vtb_mini_tpu_processing_element* vlSelf);
void Vtb_mini_tpu_processing_element___nba_comb__TOP__tb_mini_tpu__DOT__dut__DOT__u_array__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__pe__3(Vtb_mini_tpu_processing_element* vlSelf);
void Vtb_mini_tpu_processing_element___nba_comb__TOP__tb_mini_tpu__DOT__dut__DOT__u_array__DOT__row__BRA__0__KET____DOT__col__BRA__2__KET____DOT__pe__3(Vtb_mini_tpu_processing_element* vlSelf);
void Vtb_mini_tpu_processing_element___nba_comb__TOP__tb_mini_tpu__DOT__dut__DOT__u_array__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__pe__3(Vtb_mini_tpu_processing_element* vlSelf);
void Vtb_mini_tpu_processing_element___nba_comb__TOP__tb_mini_tpu__DOT__dut__DOT__u_array__DOT__row__BRA__1__KET____DOT__col__BRA__2__KET____DOT__pe__3(Vtb_mini_tpu_processing_element* vlSelf);
void Vtb_mini_tpu_processing_element___nba_comb__TOP__tb_mini_tpu__DOT__dut__DOT__u_array__DOT__row__BRA__1__KET____DOT__col__BRA__3__KET____DOT__pe__3(Vtb_mini_tpu_processing_element* vlSelf);
void Vtb_mini_tpu_processing_element___nba_comb__TOP__tb_mini_tpu__DOT__dut__DOT__u_array__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__pe__4(Vtb_mini_tpu_processing_element* vlSelf);
void Vtb_mini_tpu_processing_element___nba_comb__TOP__tb_mini_tpu__DOT__dut__DOT__u_array__DOT__row__BRA__0__KET____DOT__col__BRA__2__KET____DOT__pe__4(Vtb_mini_tpu_processing_element* vlSelf);
void Vtb_mini_tpu_processing_element___nba_comb__TOP__tb_mini_tpu__DOT__dut__DOT__u_array__DOT__row__BRA__0__KET____DOT__col__BRA__3__KET____DOT__pe__3(Vtb_mini_tpu_processing_element* vlSelf);

void Vtb_mini_tpu___024root___eval_body__nba(Vtb_mini_tpu___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_mini_tpu___024root___eval_body__nba\n"); );
    Vtb_mini_tpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((((5ULL & vlSelfRef.__VnbaTriggered[0U])) != 0ULL)) {
        Vtb_mini_tpu___024root___nba_sequent__TOP__0(vlSelf);
    }
    if ((((9ULL & vlSelfRef.__VnbaTriggered[0U])) != 0ULL)) {
        Vtb_mini_tpu_processing_element___nba_sequent__TOP__tb_mini_tpu__DOT__dut__DOT__u_array__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__pe__0((&vlSymsp->vlInst.TOP__tb_mini_tpu__DOT__dut__DOT__u_array__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__pe));
        Vtb_mini_tpu_processing_element___nba_sequent__TOP__tb_mini_tpu__DOT__dut__DOT__u_array__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__pe__0((&vlSymsp->vlInst.TOP__tb_mini_tpu__DOT__dut__DOT__u_array__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__pe));
        Vtb_mini_tpu_processing_element___nba_sequent__TOP__tb_mini_tpu__DOT__dut__DOT__u_array__DOT__row__BRA__0__KET____DOT__col__BRA__2__KET____DOT__pe__0((&vlSymsp->vlInst.TOP__tb_mini_tpu__DOT__dut__DOT__u_array__DOT__row__BRA__0__KET____DOT__col__BRA__2__KET____DOT__pe));
        Vtb_mini_tpu_processing_element___nba_sequent__TOP__tb_mini_tpu__DOT__dut__DOT__u_array__DOT__row__BRA__0__KET____DOT__col__BRA__3__KET____DOT__pe__0((&vlSymsp->vlInst.TOP__tb_mini_tpu__DOT__dut__DOT__u_array__DOT__row__BRA__0__KET____DOT__col__BRA__3__KET____DOT__pe));
        Vtb_mini_tpu_processing_element___nba_sequent__TOP__tb_mini_tpu__DOT__dut__DOT__u_array__DOT__row__BRA__0__KET____DOT__col__BRA__2__KET____DOT__pe__1((&vlSymsp->vlInst.TOP__tb_mini_tpu__DOT__dut__DOT__u_array__DOT__row__BRA__0__KET____DOT__col__BRA__2__KET____DOT__pe));
        Vtb_mini_tpu_processing_element___nba_sequent__TOP__tb_mini_tpu__DOT__dut__DOT__u_array__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__pe__1((&vlSymsp->vlInst.TOP__tb_mini_tpu__DOT__dut__DOT__u_array__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__pe));
        Vtb_mini_tpu_processing_element___nba_comb__TOP__tb_mini_tpu__DOT__dut__DOT__u_array__DOT__row__BRA__0__KET____DOT__col__BRA__3__KET____DOT__pe__0((&vlSymsp->vlInst.TOP__tb_mini_tpu__DOT__dut__DOT__u_array__DOT__row__BRA__0__KET____DOT__col__BRA__3__KET____DOT__pe));
        Vtb_mini_tpu_processing_element___nba_sequent__TOP__tb_mini_tpu__DOT__dut__DOT__u_array__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__pe__1((&vlSymsp->vlInst.TOP__tb_mini_tpu__DOT__dut__DOT__u_array__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__pe));
        Vtb_mini_tpu_processing_element___nba_comb__TOP__tb_mini_tpu__DOT__dut__DOT__u_array__DOT__row__BRA__0__KET____DOT__col__BRA__2__KET____DOT__pe__0((&vlSymsp->vlInst.TOP__tb_mini_tpu__DOT__dut__DOT__u_array__DOT__row__BRA__0__KET____DOT__col__BRA__2__KET____DOT__pe));
        Vtb_mini_tpu_processing_element___nba_comb__TOP__tb_mini_tpu__DOT__dut__DOT__u_array__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__pe__0((&vlSymsp->vlInst.TOP__tb_mini_tpu__DOT__dut__DOT__u_array__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__pe));
    }
    if ((((0x0000000000000011ULL & vlSelfRef.__VnbaTriggered[0U])) != 0ULL)) {
        Vtb_mini_tpu_processing_element___nba_sequent__TOP__tb_mini_tpu__DOT__dut__DOT__u_array__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__pe__0((&vlSymsp->vlInst.TOP__tb_mini_tpu__DOT__dut__DOT__u_array__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__pe));
        Vtb_mini_tpu_processing_element___nba_sequent__TOP__tb_mini_tpu__DOT__dut__DOT__u_array__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__pe__0((&vlSymsp->vlInst.TOP__tb_mini_tpu__DOT__dut__DOT__u_array__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__pe));
        Vtb_mini_tpu_processing_element___nba_sequent__TOP__tb_mini_tpu__DOT__dut__DOT__u_array__DOT__row__BRA__1__KET____DOT__col__BRA__2__KET____DOT__pe__0((&vlSymsp->vlInst.TOP__tb_mini_tpu__DOT__dut__DOT__u_array__DOT__row__BRA__1__KET____DOT__col__BRA__2__KET____DOT__pe));
        Vtb_mini_tpu_processing_element___nba_sequent__TOP__tb_mini_tpu__DOT__dut__DOT__u_array__DOT__row__BRA__1__KET____DOT__col__BRA__3__KET____DOT__pe__0((&vlSymsp->vlInst.TOP__tb_mini_tpu__DOT__dut__DOT__u_array__DOT__row__BRA__1__KET____DOT__col__BRA__3__KET____DOT__pe));
        Vtb_mini_tpu_processing_element___nba_sequent__TOP__tb_mini_tpu__DOT__dut__DOT__u_array__DOT__row__BRA__1__KET____DOT__col__BRA__2__KET____DOT__pe__1((&vlSymsp->vlInst.TOP__tb_mini_tpu__DOT__dut__DOT__u_array__DOT__row__BRA__1__KET____DOT__col__BRA__2__KET____DOT__pe));
        Vtb_mini_tpu_processing_element___nba_sequent__TOP__tb_mini_tpu__DOT__dut__DOT__u_array__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__pe__1((&vlSymsp->vlInst.TOP__tb_mini_tpu__DOT__dut__DOT__u_array__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__pe));
        Vtb_mini_tpu_processing_element___nba_comb__TOP__tb_mini_tpu__DOT__dut__DOT__u_array__DOT__row__BRA__1__KET____DOT__col__BRA__3__KET____DOT__pe__0((&vlSymsp->vlInst.TOP__tb_mini_tpu__DOT__dut__DOT__u_array__DOT__row__BRA__1__KET____DOT__col__BRA__3__KET____DOT__pe));
        Vtb_mini_tpu_processing_element___nba_sequent__TOP__tb_mini_tpu__DOT__dut__DOT__u_array__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__pe__1((&vlSymsp->vlInst.TOP__tb_mini_tpu__DOT__dut__DOT__u_array__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__pe));
        Vtb_mini_tpu_processing_element___nba_comb__TOP__tb_mini_tpu__DOT__dut__DOT__u_array__DOT__row__BRA__1__KET____DOT__col__BRA__2__KET____DOT__pe__0((&vlSymsp->vlInst.TOP__tb_mini_tpu__DOT__dut__DOT__u_array__DOT__row__BRA__1__KET____DOT__col__BRA__2__KET____DOT__pe));
        Vtb_mini_tpu_processing_element___nba_comb__TOP__tb_mini_tpu__DOT__dut__DOT__u_array__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__pe__0((&vlSymsp->vlInst.TOP__tb_mini_tpu__DOT__dut__DOT__u_array__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__pe));
    }
    if ((((0x0000000000000021ULL & vlSelfRef.__VnbaTriggered[0U])) != 0ULL)) {
        Vtb_mini_tpu_processing_element___nba_sequent__TOP__tb_mini_tpu__DOT__dut__DOT__u_array__DOT__row__BRA__2__KET____DOT__col__BRA__0__KET____DOT__pe__0((&vlSymsp->vlInst.TOP__tb_mini_tpu__DOT__dut__DOT__u_array__DOT__row__BRA__2__KET____DOT__col__BRA__0__KET____DOT__pe));
        Vtb_mini_tpu_processing_element___nba_sequent__TOP__tb_mini_tpu__DOT__dut__DOT__u_array__DOT__row__BRA__2__KET____DOT__col__BRA__1__KET____DOT__pe__0((&vlSymsp->vlInst.TOP__tb_mini_tpu__DOT__dut__DOT__u_array__DOT__row__BRA__2__KET____DOT__col__BRA__1__KET____DOT__pe));
        Vtb_mini_tpu_processing_element___nba_sequent__TOP__tb_mini_tpu__DOT__dut__DOT__u_array__DOT__row__BRA__2__KET____DOT__col__BRA__2__KET____DOT__pe__0((&vlSymsp->vlInst.TOP__tb_mini_tpu__DOT__dut__DOT__u_array__DOT__row__BRA__2__KET____DOT__col__BRA__2__KET____DOT__pe));
        Vtb_mini_tpu_processing_element___nba_sequent__TOP__tb_mini_tpu__DOT__dut__DOT__u_array__DOT__row__BRA__2__KET____DOT__col__BRA__3__KET____DOT__pe__0((&vlSymsp->vlInst.TOP__tb_mini_tpu__DOT__dut__DOT__u_array__DOT__row__BRA__2__KET____DOT__col__BRA__3__KET____DOT__pe));
        Vtb_mini_tpu_processing_element___nba_sequent__TOP__tb_mini_tpu__DOT__dut__DOT__u_array__DOT__row__BRA__2__KET____DOT__col__BRA__2__KET____DOT__pe__1((&vlSymsp->vlInst.TOP__tb_mini_tpu__DOT__dut__DOT__u_array__DOT__row__BRA__2__KET____DOT__col__BRA__2__KET____DOT__pe));
        Vtb_mini_tpu_processing_element___nba_sequent__TOP__tb_mini_tpu__DOT__dut__DOT__u_array__DOT__row__BRA__2__KET____DOT__col__BRA__1__KET____DOT__pe__1((&vlSymsp->vlInst.TOP__tb_mini_tpu__DOT__dut__DOT__u_array__DOT__row__BRA__2__KET____DOT__col__BRA__1__KET____DOT__pe));
        Vtb_mini_tpu_processing_element___nba_comb__TOP__tb_mini_tpu__DOT__dut__DOT__u_array__DOT__row__BRA__2__KET____DOT__col__BRA__3__KET____DOT__pe__0((&vlSymsp->vlInst.TOP__tb_mini_tpu__DOT__dut__DOT__u_array__DOT__row__BRA__2__KET____DOT__col__BRA__3__KET____DOT__pe));
        Vtb_mini_tpu_processing_element___nba_sequent__TOP__tb_mini_tpu__DOT__dut__DOT__u_array__DOT__row__BRA__2__KET____DOT__col__BRA__0__KET____DOT__pe__1((&vlSymsp->vlInst.TOP__tb_mini_tpu__DOT__dut__DOT__u_array__DOT__row__BRA__2__KET____DOT__col__BRA__0__KET____DOT__pe));
        Vtb_mini_tpu_processing_element___nba_comb__TOP__tb_mini_tpu__DOT__dut__DOT__u_array__DOT__row__BRA__2__KET____DOT__col__BRA__2__KET____DOT__pe__0((&vlSymsp->vlInst.TOP__tb_mini_tpu__DOT__dut__DOT__u_array__DOT__row__BRA__2__KET____DOT__col__BRA__2__KET____DOT__pe));
        Vtb_mini_tpu_processing_element___nba_comb__TOP__tb_mini_tpu__DOT__dut__DOT__u_array__DOT__row__BRA__2__KET____DOT__col__BRA__1__KET____DOT__pe__0((&vlSymsp->vlInst.TOP__tb_mini_tpu__DOT__dut__DOT__u_array__DOT__row__BRA__2__KET____DOT__col__BRA__1__KET____DOT__pe));
    }
    if ((((0x0000000000000041ULL & vlSelfRef.__VnbaTriggered[0U])) != 0ULL)) {
        Vtb_mini_tpu_processing_element___nba_sequent__TOP__tb_mini_tpu__DOT__dut__DOT__u_array__DOT__row__BRA__3__KET____DOT__col__BRA__0__KET____DOT__pe__0((&vlSymsp->vlInst.TOP__tb_mini_tpu__DOT__dut__DOT__u_array__DOT__row__BRA__3__KET____DOT__col__BRA__0__KET____DOT__pe));
        Vtb_mini_tpu_processing_element___nba_sequent__TOP__tb_mini_tpu__DOT__dut__DOT__u_array__DOT__row__BRA__3__KET____DOT__col__BRA__1__KET____DOT__pe__0((&vlSymsp->vlInst.TOP__tb_mini_tpu__DOT__dut__DOT__u_array__DOT__row__BRA__3__KET____DOT__col__BRA__1__KET____DOT__pe));
        Vtb_mini_tpu_processing_element___nba_sequent__TOP__tb_mini_tpu__DOT__dut__DOT__u_array__DOT__row__BRA__3__KET____DOT__col__BRA__2__KET____DOT__pe__0((&vlSymsp->vlInst.TOP__tb_mini_tpu__DOT__dut__DOT__u_array__DOT__row__BRA__3__KET____DOT__col__BRA__2__KET____DOT__pe));
        Vtb_mini_tpu_processing_element___nba_sequent__TOP__tb_mini_tpu__DOT__dut__DOT__u_array__DOT__row__BRA__3__KET____DOT__col__BRA__3__KET____DOT__pe__0((&vlSymsp->vlInst.TOP__tb_mini_tpu__DOT__dut__DOT__u_array__DOT__row__BRA__3__KET____DOT__col__BRA__3__KET____DOT__pe));
        {
            // Inlined CFunc: _nba_comb__TOP__0
            vlSelfRef.tb_mini_tpu__DOT__dut__DOT__u_array__DOT__result_out 
                = (((::QData)((::IData)(((0xffff0000U 
                                          & vlSymsp->vlInst.TOP__tb_mini_tpu__DOT__dut__DOT__u_array__DOT__row__BRA__3__KET____DOT__col__BRA__3__KET____DOT__pe.__PVT__accumulator) 
                                         | (vlSymsp->vlInst.TOP__tb_mini_tpu__DOT__dut__DOT__u_array__DOT__row__BRA__3__KET____DOT__col__BRA__2__KET____DOT__pe.__PVT__accumulator 
                                            >> 0x00000010U)))) 
                    << 0x00000020U) | (::QData)((::IData)(
                                                          ((0xffff0000U 
                                                            & vlSymsp->vlInst.TOP__tb_mini_tpu__DOT__dut__DOT__u_array__DOT__row__BRA__3__KET____DOT__col__BRA__1__KET____DOT__pe.__PVT__accumulator) 
                                                           | (vlSymsp->vlInst.TOP__tb_mini_tpu__DOT__dut__DOT__u_array__DOT__row__BRA__3__KET____DOT__col__BRA__0__KET____DOT__pe.__PVT__accumulator 
                                                              >> 0x00000010U)))));
        }
        Vtb_mini_tpu_processing_element___nba_sequent__TOP__tb_mini_tpu__DOT__dut__DOT__u_array__DOT__row__BRA__3__KET____DOT__col__BRA__2__KET____DOT__pe__1((&vlSymsp->vlInst.TOP__tb_mini_tpu__DOT__dut__DOT__u_array__DOT__row__BRA__3__KET____DOT__col__BRA__2__KET____DOT__pe));
        Vtb_mini_tpu_processing_element___nba_sequent__TOP__tb_mini_tpu__DOT__dut__DOT__u_array__DOT__row__BRA__3__KET____DOT__col__BRA__1__KET____DOT__pe__1((&vlSymsp->vlInst.TOP__tb_mini_tpu__DOT__dut__DOT__u_array__DOT__row__BRA__3__KET____DOT__col__BRA__1__KET____DOT__pe));
        Vtb_mini_tpu_processing_element___nba_comb__TOP__tb_mini_tpu__DOT__dut__DOT__u_array__DOT__row__BRA__3__KET____DOT__col__BRA__3__KET____DOT__pe__0((&vlSymsp->vlInst.TOP__tb_mini_tpu__DOT__dut__DOT__u_array__DOT__row__BRA__3__KET____DOT__col__BRA__3__KET____DOT__pe));
        Vtb_mini_tpu_processing_element___nba_sequent__TOP__tb_mini_tpu__DOT__dut__DOT__u_array__DOT__row__BRA__3__KET____DOT__col__BRA__0__KET____DOT__pe__1((&vlSymsp->vlInst.TOP__tb_mini_tpu__DOT__dut__DOT__u_array__DOT__row__BRA__3__KET____DOT__col__BRA__0__KET____DOT__pe));
        Vtb_mini_tpu_processing_element___nba_comb__TOP__tb_mini_tpu__DOT__dut__DOT__u_array__DOT__row__BRA__3__KET____DOT__col__BRA__2__KET____DOT__pe__0((&vlSymsp->vlInst.TOP__tb_mini_tpu__DOT__dut__DOT__u_array__DOT__row__BRA__3__KET____DOT__col__BRA__2__KET____DOT__pe));
        Vtb_mini_tpu_processing_element___nba_comb__TOP__tb_mini_tpu__DOT__dut__DOT__u_array__DOT__row__BRA__3__KET____DOT__col__BRA__1__KET____DOT__pe__0((&vlSymsp->vlInst.TOP__tb_mini_tpu__DOT__dut__DOT__u_array__DOT__row__BRA__3__KET____DOT__col__BRA__1__KET____DOT__pe));
    }
    if ((((5ULL & vlSelfRef.__VnbaTriggered[0U])) != 0ULL)) {
        {
            // Inlined CFunc: _nba_sequent__TOP__1
            if (vlSelfRef.tb_mini_tpu__DOT__dut__DOT__u_rst_core__DOT__q) {
                if ((1U & (0x1cc2U >> ((::IData)(3U) 
                                       + ((::IData)(vlSelfRef.tb_mini_tpu__DOT__dut__DOT__u_ctrl__DOT__state) 
                                          << 2U))))) {
                    vlSelfRef.tb_mini_tpu__DOT__dut__DOT__u_mem__DOT__skew__BRA__0__KET____DOT__sr_a__BRA__0__KET__ 
                        = (0x0000ffffU & (::IData)(vlSelfRef.tb_mini_tpu__DOT__a_flat));
                    vlSelfRef.tb_mini_tpu__DOT__dut__DOT__u_mem__DOT__skew__BRA__1__KET____DOT__sr_a__BRA__1__KET__ 
                        = vlSelfRef.tb_mini_tpu__DOT__dut__DOT__u_mem__DOT__skew__BRA__1__KET____DOT__sr_a__BRA__0__KET__;
                    vlSelfRef.tb_mini_tpu__DOT__dut__DOT__u_mem__DOT__skew__BRA__2__KET____DOT__sr_a__BRA__2__KET__ 
                        = vlSelfRef.tb_mini_tpu__DOT__dut__DOT__u_mem__DOT__skew__BRA__2__KET____DOT__sr_a__BRA__1__KET__;
                    vlSelfRef.tb_mini_tpu__DOT__dut__DOT__u_mem__DOT__skew__BRA__3__KET____DOT__sr_a__BRA__3__KET__ 
                        = vlSelfRef.tb_mini_tpu__DOT__dut__DOT__u_mem__DOT__skew__BRA__3__KET____DOT__sr_a__BRA__2__KET__;
                    vlSelfRef.tb_mini_tpu__DOT__dut__DOT__u_mem__DOT__skew__BRA__1__KET____DOT__sr_a__BRA__0__KET__ 
                        = (0x0000ffffU & (::IData)(
                                                   (vlSelfRef.tb_mini_tpu__DOT__a_flat 
                                                    >> 0x10U)));
                    vlSelfRef.tb_mini_tpu__DOT__dut__DOT__u_mem__DOT__skew__BRA__2__KET____DOT__sr_a__BRA__1__KET__ 
                        = vlSelfRef.tb_mini_tpu__DOT__dut__DOT__u_mem__DOT__skew__BRA__2__KET____DOT__sr_a__BRA__0__KET__;
                    vlSelfRef.tb_mini_tpu__DOT__dut__DOT__u_mem__DOT__skew__BRA__3__KET____DOT__sr_a__BRA__2__KET__ 
                        = vlSelfRef.tb_mini_tpu__DOT__dut__DOT__u_mem__DOT__skew__BRA__3__KET____DOT__sr_a__BRA__1__KET__;
                    vlSelfRef.tb_mini_tpu__DOT__dut__DOT__u_mem__DOT__skew__BRA__2__KET____DOT__sr_a__BRA__0__KET__ 
                        = (0x0000ffffU & (::IData)(
                                                   (vlSelfRef.tb_mini_tpu__DOT__a_flat 
                                                    >> 0x20U)));
                    vlSelfRef.tb_mini_tpu__DOT__dut__DOT__u_mem__DOT__skew__BRA__3__KET____DOT__sr_a__BRA__1__KET__ 
                        = vlSelfRef.tb_mini_tpu__DOT__dut__DOT__u_mem__DOT__skew__BRA__3__KET____DOT__sr_a__BRA__0__KET__;
                    vlSelfRef.tb_mini_tpu__DOT__dut__DOT__u_mem__DOT__skew__BRA__3__KET____DOT__sr_a__BRA__0__KET__ 
                        = (0x0000ffffU & (::IData)(
                                                   (vlSelfRef.tb_mini_tpu__DOT__a_flat 
                                                    >> 0x30U)));
                }
            } else {
                vlSelfRef.tb_mini_tpu__DOT__dut__DOT__u_mem__DOT__skew__BRA__0__KET____DOT__sr_a__BRA__0__KET__ = 0U;
                vlSelfRef.tb_mini_tpu__DOT__dut__DOT__u_mem__DOT__skew__BRA__1__KET____DOT__sr_a__BRA__1__KET__ = 0U;
                vlSelfRef.tb_mini_tpu__DOT__dut__DOT__u_mem__DOT__skew__BRA__2__KET____DOT__sr_a__BRA__2__KET__ = 0U;
                vlSelfRef.tb_mini_tpu__DOT__dut__DOT__u_mem__DOT__skew__BRA__3__KET____DOT__sr_a__BRA__3__KET__ = 0U;
                vlSelfRef.tb_mini_tpu__DOT__dut__DOT__u_mem__DOT__skew__BRA__1__KET____DOT__sr_a__BRA__0__KET__ = 0U;
                vlSelfRef.tb_mini_tpu__DOT__dut__DOT__u_mem__DOT__skew__BRA__2__KET____DOT__sr_a__BRA__1__KET__ = 0U;
                vlSelfRef.tb_mini_tpu__DOT__dut__DOT__u_mem__DOT__skew__BRA__3__KET____DOT__sr_a__BRA__2__KET__ = 0U;
                vlSelfRef.tb_mini_tpu__DOT__dut__DOT__u_mem__DOT__skew__BRA__2__KET____DOT__sr_a__BRA__0__KET__ = 0U;
                vlSelfRef.tb_mini_tpu__DOT__dut__DOT__u_mem__DOT__skew__BRA__3__KET____DOT__sr_a__BRA__1__KET__ = 0U;
                vlSelfRef.tb_mini_tpu__DOT__dut__DOT__u_mem__DOT__skew__BRA__3__KET____DOT__sr_a__BRA__0__KET__ = 0U;
            }
        }
        Vtb_mini_tpu_processing_element___nba_comb__TOP__tb_mini_tpu__DOT__dut__DOT__u_array__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__pe__0((&vlSymsp->vlInst.TOP__tb_mini_tpu__DOT__dut__DOT__u_array__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__pe));
        Vtb_mini_tpu_processing_element___nba_comb__TOP__tb_mini_tpu__DOT__dut__DOT__u_array__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__pe__0((&vlSymsp->vlInst.TOP__tb_mini_tpu__DOT__dut__DOT__u_array__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__pe));
        Vtb_mini_tpu_processing_element___nba_comb__TOP__tb_mini_tpu__DOT__dut__DOT__u_array__DOT__row__BRA__2__KET____DOT__col__BRA__0__KET____DOT__pe__0((&vlSymsp->vlInst.TOP__tb_mini_tpu__DOT__dut__DOT__u_array__DOT__row__BRA__2__KET____DOT__col__BRA__0__KET____DOT__pe));
        Vtb_mini_tpu_processing_element___nba_comb__TOP__tb_mini_tpu__DOT__dut__DOT__u_array__DOT__row__BRA__3__KET____DOT__col__BRA__0__KET____DOT__pe__0((&vlSymsp->vlInst.TOP__tb_mini_tpu__DOT__dut__DOT__u_array__DOT__row__BRA__3__KET____DOT__col__BRA__0__KET____DOT__pe));
    }
    if ((((9ULL & vlSelfRef.__VnbaTriggered[0U])) != 0ULL)) {
        Vtb_mini_tpu_processing_element___nba_sequent__TOP__tb_mini_tpu__DOT__dut__DOT__u_array__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__pe__2((&vlSymsp->vlInst.TOP__tb_mini_tpu__DOT__dut__DOT__u_array__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__pe));
        Vtb_mini_tpu_processing_element___nba_sequent__TOP__tb_mini_tpu__DOT__dut__DOT__u_array__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__pe__2((&vlSymsp->vlInst.TOP__tb_mini_tpu__DOT__dut__DOT__u_array__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__pe));
        Vtb_mini_tpu_processing_element___nba_sequent__TOP__tb_mini_tpu__DOT__dut__DOT__u_array__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__pe__2((&vlSymsp->vlInst.TOP__tb_mini_tpu__DOT__dut__DOT__u_array__DOT__row__BRA__0__KET____DOT__col__BRA__2__KET____DOT__pe));
        Vtb_mini_tpu_processing_element___nba_sequent__TOP__tb_mini_tpu__DOT__dut__DOT__u_array__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__pe__2((&vlSymsp->vlInst.TOP__tb_mini_tpu__DOT__dut__DOT__u_array__DOT__row__BRA__0__KET____DOT__col__BRA__3__KET____DOT__pe));
    }
    if ((((0x0000000000000011ULL & vlSelfRef.__VnbaTriggered[0U])) != 0ULL)) {
        Vtb_mini_tpu_processing_element___nba_sequent__TOP__tb_mini_tpu__DOT__dut__DOT__u_array__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__pe__2((&vlSymsp->vlInst.TOP__tb_mini_tpu__DOT__dut__DOT__u_array__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__pe));
        Vtb_mini_tpu_processing_element___nba_sequent__TOP__tb_mini_tpu__DOT__dut__DOT__u_array__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__pe__2((&vlSymsp->vlInst.TOP__tb_mini_tpu__DOT__dut__DOT__u_array__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__pe));
        Vtb_mini_tpu_processing_element___nba_sequent__TOP__tb_mini_tpu__DOT__dut__DOT__u_array__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__pe__2((&vlSymsp->vlInst.TOP__tb_mini_tpu__DOT__dut__DOT__u_array__DOT__row__BRA__1__KET____DOT__col__BRA__2__KET____DOT__pe));
        Vtb_mini_tpu_processing_element___nba_sequent__TOP__tb_mini_tpu__DOT__dut__DOT__u_array__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__pe__2((&vlSymsp->vlInst.TOP__tb_mini_tpu__DOT__dut__DOT__u_array__DOT__row__BRA__1__KET____DOT__col__BRA__3__KET____DOT__pe));
    }
    if ((((0x0000000000000021ULL & vlSelfRef.__VnbaTriggered[0U])) != 0ULL)) {
        Vtb_mini_tpu_processing_element___nba_sequent__TOP__tb_mini_tpu__DOT__dut__DOT__u_array__DOT__row__BRA__2__KET____DOT__col__BRA__0__KET____DOT__pe__2((&vlSymsp->vlInst.TOP__tb_mini_tpu__DOT__dut__DOT__u_array__DOT__row__BRA__2__KET____DOT__col__BRA__0__KET____DOT__pe));
        Vtb_mini_tpu_processing_element___nba_sequent__TOP__tb_mini_tpu__DOT__dut__DOT__u_array__DOT__row__BRA__2__KET____DOT__col__BRA__1__KET____DOT__pe__2((&vlSymsp->vlInst.TOP__tb_mini_tpu__DOT__dut__DOT__u_array__DOT__row__BRA__2__KET____DOT__col__BRA__1__KET____DOT__pe));
        Vtb_mini_tpu_processing_element___nba_sequent__TOP__tb_mini_tpu__DOT__dut__DOT__u_array__DOT__row__BRA__2__KET____DOT__col__BRA__2__KET____DOT__pe__2((&vlSymsp->vlInst.TOP__tb_mini_tpu__DOT__dut__DOT__u_array__DOT__row__BRA__2__KET____DOT__col__BRA__2__KET____DOT__pe));
        Vtb_mini_tpu_processing_element___nba_sequent__TOP__tb_mini_tpu__DOT__dut__DOT__u_array__DOT__row__BRA__2__KET____DOT__col__BRA__3__KET____DOT__pe__1((&vlSymsp->vlInst.TOP__tb_mini_tpu__DOT__dut__DOT__u_array__DOT__row__BRA__2__KET____DOT__col__BRA__3__KET____DOT__pe));
        Vtb_mini_tpu_processing_element___nba_comb__TOP__tb_mini_tpu__DOT__dut__DOT__u_array__DOT__row__BRA__3__KET____DOT__col__BRA__0__KET____DOT__pe__1((&vlSymsp->vlInst.TOP__tb_mini_tpu__DOT__dut__DOT__u_array__DOT__row__BRA__3__KET____DOT__col__BRA__0__KET____DOT__pe));
        Vtb_mini_tpu_processing_element___nba_comb__TOP__tb_mini_tpu__DOT__dut__DOT__u_array__DOT__row__BRA__3__KET____DOT__col__BRA__1__KET____DOT__pe__1((&vlSymsp->vlInst.TOP__tb_mini_tpu__DOT__dut__DOT__u_array__DOT__row__BRA__3__KET____DOT__col__BRA__1__KET____DOT__pe));
        Vtb_mini_tpu_processing_element___nba_comb__TOP__tb_mini_tpu__DOT__dut__DOT__u_array__DOT__row__BRA__3__KET____DOT__col__BRA__2__KET____DOT__pe__1((&vlSymsp->vlInst.TOP__tb_mini_tpu__DOT__dut__DOT__u_array__DOT__row__BRA__3__KET____DOT__col__BRA__2__KET____DOT__pe));
        Vtb_mini_tpu_processing_element___nba_comb__TOP__tb_mini_tpu__DOT__dut__DOT__u_array__DOT__row__BRA__3__KET____DOT__col__BRA__3__KET____DOT__pe__1((&vlSymsp->vlInst.TOP__tb_mini_tpu__DOT__dut__DOT__u_array__DOT__row__BRA__3__KET____DOT__col__BRA__3__KET____DOT__pe));
    }
    if ((((3ULL & vlSelfRef.__VnbaTriggered[0U])) != 0ULL)) {
        {
            // Inlined CFunc: _nba_sequent__TOP__2
            vlSelfRef.tb_mini_tpu__DOT__dut__DOT__genblk1__BRA__3__KET____DOT__u_rst__DOT__q 
                = ((::IData)(vlSelfRef.tb_mini_tpu__DOT__rst) 
                   && (::IData)(vlSelfRef.tb_mini_tpu__DOT__dut__DOT__genblk1__BRA__3__KET____DOT__u_rst__DOT__s1));
            vlSelfRef.tb_mini_tpu__DOT__dut__DOT__genblk1__BRA__2__KET____DOT__u_rst__DOT__q 
                = ((::IData)(vlSelfRef.tb_mini_tpu__DOT__rst) 
                   && (::IData)(vlSelfRef.tb_mini_tpu__DOT__dut__DOT__genblk1__BRA__2__KET____DOT__u_rst__DOT__s1));
            vlSelfRef.tb_mini_tpu__DOT__dut__DOT__genblk1__BRA__3__KET____DOT__u_rst__DOT__s1 
                = vlSelfRef.tb_mini_tpu__DOT__rst;
            vlSelfRef.tb_mini_tpu__DOT__dut__DOT__genblk1__BRA__2__KET____DOT__u_rst__DOT__s1 
                = vlSelfRef.tb_mini_tpu__DOT__rst;
        }
    }
    if ((((0x0000000000000011ULL & vlSelfRef.__VnbaTriggered[0U])) != 0ULL)) {
        Vtb_mini_tpu_processing_element___nba_sequent__TOP__tb_mini_tpu__DOT__dut__DOT__u_array__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__pe__3((&vlSymsp->vlInst.TOP__tb_mini_tpu__DOT__dut__DOT__u_array__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__pe));
        Vtb_mini_tpu_processing_element___nba_sequent__TOP__tb_mini_tpu__DOT__dut__DOT__u_array__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__pe__3((&vlSymsp->vlInst.TOP__tb_mini_tpu__DOT__dut__DOT__u_array__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__pe));
        Vtb_mini_tpu_processing_element___nba_sequent__TOP__tb_mini_tpu__DOT__dut__DOT__u_array__DOT__row__BRA__1__KET____DOT__col__BRA__2__KET____DOT__pe__3((&vlSymsp->vlInst.TOP__tb_mini_tpu__DOT__dut__DOT__u_array__DOT__row__BRA__1__KET____DOT__col__BRA__2__KET____DOT__pe));
        Vtb_mini_tpu_processing_element___nba_sequent__TOP__tb_mini_tpu__DOT__dut__DOT__u_array__DOT__row__BRA__1__KET____DOT__col__BRA__3__KET____DOT__pe__2((&vlSymsp->vlInst.TOP__tb_mini_tpu__DOT__dut__DOT__u_array__DOT__row__BRA__1__KET____DOT__col__BRA__3__KET____DOT__pe));
        Vtb_mini_tpu_processing_element___nba_comb__TOP__tb_mini_tpu__DOT__dut__DOT__u_array__DOT__row__BRA__2__KET____DOT__col__BRA__0__KET____DOT__pe__1((&vlSymsp->vlInst.TOP__tb_mini_tpu__DOT__dut__DOT__u_array__DOT__row__BRA__2__KET____DOT__col__BRA__0__KET____DOT__pe));
        Vtb_mini_tpu_processing_element___nba_comb__TOP__tb_mini_tpu__DOT__dut__DOT__u_array__DOT__row__BRA__2__KET____DOT__col__BRA__1__KET____DOT__pe__1((&vlSymsp->vlInst.TOP__tb_mini_tpu__DOT__dut__DOT__u_array__DOT__row__BRA__2__KET____DOT__col__BRA__1__KET____DOT__pe));
        Vtb_mini_tpu_processing_element___nba_comb__TOP__tb_mini_tpu__DOT__dut__DOT__u_array__DOT__row__BRA__2__KET____DOT__col__BRA__2__KET____DOT__pe__1((&vlSymsp->vlInst.TOP__tb_mini_tpu__DOT__dut__DOT__u_array__DOT__row__BRA__2__KET____DOT__col__BRA__2__KET____DOT__pe));
        Vtb_mini_tpu_processing_element___nba_comb__TOP__tb_mini_tpu__DOT__dut__DOT__u_array__DOT__row__BRA__2__KET____DOT__col__BRA__3__KET____DOT__pe__1((&vlSymsp->vlInst.TOP__tb_mini_tpu__DOT__dut__DOT__u_array__DOT__row__BRA__2__KET____DOT__col__BRA__3__KET____DOT__pe));
    }
    if ((((0x0000000000000025ULL & vlSelfRef.__VnbaTriggered[0U])) != 0ULL)) {
        Vtb_mini_tpu_processing_element___nba_comb__TOP__tb_mini_tpu__DOT__dut__DOT__u_array__DOT__row__BRA__3__KET____DOT__col__BRA__0__KET____DOT__pe__2((&vlSymsp->vlInst.TOP__tb_mini_tpu__DOT__dut__DOT__u_array__DOT__row__BRA__3__KET____DOT__col__BRA__0__KET____DOT__pe));
        Vtb_mini_tpu_processing_element___nba_comb__TOP__tb_mini_tpu__DOT__dut__DOT__u_array__DOT__row__BRA__2__KET____DOT__col__BRA__0__KET____DOT__pe__2((&vlSymsp->vlInst.TOP__tb_mini_tpu__DOT__dut__DOT__u_array__DOT__row__BRA__2__KET____DOT__col__BRA__0__KET____DOT__pe));
    }
    if ((((0x0000000000000061ULL & vlSelfRef.__VnbaTriggered[0U])) != 0ULL)) {
        Vtb_mini_tpu_processing_element___nba_comb__TOP__tb_mini_tpu__DOT__dut__DOT__u_array__DOT__row__BRA__3__KET____DOT__col__BRA__1__KET____DOT__pe__2((&vlSymsp->vlInst.TOP__tb_mini_tpu__DOT__dut__DOT__u_array__DOT__row__BRA__3__KET____DOT__col__BRA__1__KET____DOT__pe));
        Vtb_mini_tpu_processing_element___nba_comb__TOP__tb_mini_tpu__DOT__dut__DOT__u_array__DOT__row__BRA__3__KET____DOT__col__BRA__2__KET____DOT__pe__2((&vlSymsp->vlInst.TOP__tb_mini_tpu__DOT__dut__DOT__u_array__DOT__row__BRA__3__KET____DOT__col__BRA__2__KET____DOT__pe));
        Vtb_mini_tpu_processing_element___nba_comb__TOP__tb_mini_tpu__DOT__dut__DOT__u_array__DOT__row__BRA__3__KET____DOT__col__BRA__3__KET____DOT__pe__2((&vlSymsp->vlInst.TOP__tb_mini_tpu__DOT__dut__DOT__u_array__DOT__row__BRA__3__KET____DOT__col__BRA__3__KET____DOT__pe));
        Vtb_mini_tpu_processing_element___nba_comb__TOP__tb_mini_tpu__DOT__dut__DOT__u_array__DOT__row__BRA__2__KET____DOT__col__BRA__1__KET____DOT__pe__2((&vlSymsp->vlInst.TOP__tb_mini_tpu__DOT__dut__DOT__u_array__DOT__row__BRA__2__KET____DOT__col__BRA__1__KET____DOT__pe));
        Vtb_mini_tpu_processing_element___nba_comb__TOP__tb_mini_tpu__DOT__dut__DOT__u_array__DOT__row__BRA__2__KET____DOT__col__BRA__2__KET____DOT__pe__2((&vlSymsp->vlInst.TOP__tb_mini_tpu__DOT__dut__DOT__u_array__DOT__row__BRA__2__KET____DOT__col__BRA__2__KET____DOT__pe));
        Vtb_mini_tpu_processing_element___nba_comb__TOP__tb_mini_tpu__DOT__dut__DOT__u_array__DOT__row__BRA__2__KET____DOT__col__BRA__3__KET____DOT__pe__2((&vlSymsp->vlInst.TOP__tb_mini_tpu__DOT__dut__DOT__u_array__DOT__row__BRA__2__KET____DOT__col__BRA__3__KET____DOT__pe));
    }
    if ((((9ULL & vlSelfRef.__VnbaTriggered[0U])) != 0ULL)) {
        Vtb_mini_tpu_processing_element___nba_sequent__TOP__tb_mini_tpu__DOT__dut__DOT__u_array__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__pe__3((&vlSymsp->vlInst.TOP__tb_mini_tpu__DOT__dut__DOT__u_array__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__pe));
        Vtb_mini_tpu_processing_element___nba_sequent__TOP__tb_mini_tpu__DOT__dut__DOT__u_array__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__pe__3((&vlSymsp->vlInst.TOP__tb_mini_tpu__DOT__dut__DOT__u_array__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__pe));
        Vtb_mini_tpu_processing_element___nba_sequent__TOP__tb_mini_tpu__DOT__dut__DOT__u_array__DOT__row__BRA__0__KET____DOT__col__BRA__2__KET____DOT__pe__3((&vlSymsp->vlInst.TOP__tb_mini_tpu__DOT__dut__DOT__u_array__DOT__row__BRA__0__KET____DOT__col__BRA__2__KET____DOT__pe));
        Vtb_mini_tpu_processing_element___nba_sequent__TOP__tb_mini_tpu__DOT__dut__DOT__u_array__DOT__row__BRA__0__KET____DOT__col__BRA__3__KET____DOT__pe__2((&vlSymsp->vlInst.TOP__tb_mini_tpu__DOT__dut__DOT__u_array__DOT__row__BRA__0__KET____DOT__col__BRA__3__KET____DOT__pe));
        Vtb_mini_tpu_processing_element___nba_comb__TOP__tb_mini_tpu__DOT__dut__DOT__u_array__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__pe__1((&vlSymsp->vlInst.TOP__tb_mini_tpu__DOT__dut__DOT__u_array__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__pe));
        Vtb_mini_tpu_processing_element___nba_comb__TOP__tb_mini_tpu__DOT__dut__DOT__u_array__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__pe__1((&vlSymsp->vlInst.TOP__tb_mini_tpu__DOT__dut__DOT__u_array__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__pe));
        Vtb_mini_tpu_processing_element___nba_comb__TOP__tb_mini_tpu__DOT__dut__DOT__u_array__DOT__row__BRA__1__KET____DOT__col__BRA__2__KET____DOT__pe__1((&vlSymsp->vlInst.TOP__tb_mini_tpu__DOT__dut__DOT__u_array__DOT__row__BRA__1__KET____DOT__col__BRA__2__KET____DOT__pe));
        Vtb_mini_tpu_processing_element___nba_comb__TOP__tb_mini_tpu__DOT__dut__DOT__u_array__DOT__row__BRA__1__KET____DOT__col__BRA__3__KET____DOT__pe__1((&vlSymsp->vlInst.TOP__tb_mini_tpu__DOT__dut__DOT__u_array__DOT__row__BRA__1__KET____DOT__col__BRA__3__KET____DOT__pe));
    }
    if ((((0x0000000000000015ULL & vlSelfRef.__VnbaTriggered[0U])) != 0ULL)) {
        Vtb_mini_tpu_processing_element___nba_comb__TOP__tb_mini_tpu__DOT__dut__DOT__u_array__DOT__row__BRA__2__KET____DOT__col__BRA__0__KET____DOT__pe__3((&vlSymsp->vlInst.TOP__tb_mini_tpu__DOT__dut__DOT__u_array__DOT__row__BRA__2__KET____DOT__col__BRA__0__KET____DOT__pe));
        Vtb_mini_tpu_processing_element___nba_comb__TOP__tb_mini_tpu__DOT__dut__DOT__u_array__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__pe__2((&vlSymsp->vlInst.TOP__tb_mini_tpu__DOT__dut__DOT__u_array__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__pe));
    }
    if ((((0x0000000000000031ULL & vlSelfRef.__VnbaTriggered[0U])) != 0ULL)) {
        Vtb_mini_tpu_processing_element___nba_comb__TOP__tb_mini_tpu__DOT__dut__DOT__u_array__DOT__row__BRA__2__KET____DOT__col__BRA__1__KET____DOT__pe__3((&vlSymsp->vlInst.TOP__tb_mini_tpu__DOT__dut__DOT__u_array__DOT__row__BRA__2__KET____DOT__col__BRA__1__KET____DOT__pe));
        Vtb_mini_tpu_processing_element___nba_comb__TOP__tb_mini_tpu__DOT__dut__DOT__u_array__DOT__row__BRA__2__KET____DOT__col__BRA__2__KET____DOT__pe__3((&vlSymsp->vlInst.TOP__tb_mini_tpu__DOT__dut__DOT__u_array__DOT__row__BRA__2__KET____DOT__col__BRA__2__KET____DOT__pe));
        Vtb_mini_tpu_processing_element___nba_comb__TOP__tb_mini_tpu__DOT__dut__DOT__u_array__DOT__row__BRA__2__KET____DOT__col__BRA__3__KET____DOT__pe__3((&vlSymsp->vlInst.TOP__tb_mini_tpu__DOT__dut__DOT__u_array__DOT__row__BRA__2__KET____DOT__col__BRA__3__KET____DOT__pe));
        Vtb_mini_tpu_processing_element___nba_comb__TOP__tb_mini_tpu__DOT__dut__DOT__u_array__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__pe__2((&vlSymsp->vlInst.TOP__tb_mini_tpu__DOT__dut__DOT__u_array__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__pe));
        Vtb_mini_tpu_processing_element___nba_comb__TOP__tb_mini_tpu__DOT__dut__DOT__u_array__DOT__row__BRA__1__KET____DOT__col__BRA__2__KET____DOT__pe__2((&vlSymsp->vlInst.TOP__tb_mini_tpu__DOT__dut__DOT__u_array__DOT__row__BRA__1__KET____DOT__col__BRA__2__KET____DOT__pe));
        Vtb_mini_tpu_processing_element___nba_comb__TOP__tb_mini_tpu__DOT__dut__DOT__u_array__DOT__row__BRA__1__KET____DOT__col__BRA__3__KET____DOT__pe__2((&vlSymsp->vlInst.TOP__tb_mini_tpu__DOT__dut__DOT__u_array__DOT__row__BRA__1__KET____DOT__col__BRA__3__KET____DOT__pe));
    }
    if ((((3ULL & vlSelfRef.__VnbaTriggered[0U])) != 0ULL)) {
        {
            // Inlined CFunc: _nba_sequent__TOP__3
            vlSelfRef.tb_mini_tpu__DOT__dut__DOT__genblk1__BRA__1__KET____DOT__u_rst__DOT__q 
                = ((::IData)(vlSelfRef.tb_mini_tpu__DOT__rst) 
                   && (::IData)(vlSelfRef.tb_mini_tpu__DOT__dut__DOT__genblk1__BRA__1__KET____DOT__u_rst__DOT__s1));
            vlSelfRef.tb_mini_tpu__DOT__dut__DOT__genblk1__BRA__0__KET____DOT__u_rst__DOT__q 
                = ((::IData)(vlSelfRef.tb_mini_tpu__DOT__rst) 
                   && (::IData)(vlSelfRef.tb_mini_tpu__DOT__dut__DOT__genblk1__BRA__0__KET____DOT__u_rst__DOT__s1));
            vlSelfRef.tb_mini_tpu__DOT__dut__DOT__genblk1__BRA__1__KET____DOT__u_rst__DOT__s1 
                = vlSelfRef.tb_mini_tpu__DOT__rst;
            vlSelfRef.tb_mini_tpu__DOT__dut__DOT__genblk1__BRA__0__KET____DOT__u_rst__DOT__s1 
                = vlSelfRef.tb_mini_tpu__DOT__rst;
        }
    }
    if ((((5ULL & vlSelfRef.__VnbaTriggered[0U])) != 0ULL)) {
        {
            // Inlined CFunc: _nba_sequent__TOP__4
            if (vlSelfRef.tb_mini_tpu__DOT__dut__DOT__u_rst_core__DOT__q) {
                if ((1U & (0x1cc2U >> ((::IData)(3U) 
                                       + ((::IData)(vlSelfRef.tb_mini_tpu__DOT__dut__DOT__u_ctrl__DOT__state) 
                                          << 2U))))) {
                    vlSelfRef.tb_mini_tpu__DOT__dut__DOT__u_mem__DOT__skew__BRA__0__KET____DOT__sr_b__BRA__0__KET__ 
                        = (0x0000ffffU & (::IData)(vlSelfRef.tb_mini_tpu__DOT__b_flat));
                    vlSelfRef.tb_mini_tpu__DOT__dut__DOT__u_mem__DOT__skew__BRA__1__KET____DOT__sr_b__BRA__1__KET__ 
                        = vlSelfRef.tb_mini_tpu__DOT__dut__DOT__u_mem__DOT__skew__BRA__1__KET____DOT__sr_b__BRA__0__KET__;
                    vlSelfRef.tb_mini_tpu__DOT__dut__DOT__u_mem__DOT__skew__BRA__2__KET____DOT__sr_b__BRA__2__KET__ 
                        = vlSelfRef.tb_mini_tpu__DOT__dut__DOT__u_mem__DOT__skew__BRA__2__KET____DOT__sr_b__BRA__1__KET__;
                    vlSelfRef.tb_mini_tpu__DOT__dut__DOT__u_mem__DOT__skew__BRA__3__KET____DOT__sr_b__BRA__3__KET__ 
                        = vlSelfRef.tb_mini_tpu__DOT__dut__DOT__u_mem__DOT__skew__BRA__3__KET____DOT__sr_b__BRA__2__KET__;
                    vlSelfRef.tb_mini_tpu__DOT__dut__DOT__u_mem__DOT__skew__BRA__1__KET____DOT__sr_b__BRA__0__KET__ 
                        = (0x0000ffffU & (::IData)(
                                                   (vlSelfRef.tb_mini_tpu__DOT__b_flat 
                                                    >> 0x10U)));
                    vlSelfRef.tb_mini_tpu__DOT__dut__DOT__u_mem__DOT__skew__BRA__2__KET____DOT__sr_b__BRA__1__KET__ 
                        = vlSelfRef.tb_mini_tpu__DOT__dut__DOT__u_mem__DOT__skew__BRA__2__KET____DOT__sr_b__BRA__0__KET__;
                    vlSelfRef.tb_mini_tpu__DOT__dut__DOT__u_mem__DOT__skew__BRA__3__KET____DOT__sr_b__BRA__2__KET__ 
                        = vlSelfRef.tb_mini_tpu__DOT__dut__DOT__u_mem__DOT__skew__BRA__3__KET____DOT__sr_b__BRA__1__KET__;
                    vlSelfRef.tb_mini_tpu__DOT__dut__DOT__u_mem__DOT__skew__BRA__2__KET____DOT__sr_b__BRA__0__KET__ 
                        = (0x0000ffffU & (::IData)(
                                                   (vlSelfRef.tb_mini_tpu__DOT__b_flat 
                                                    >> 0x20U)));
                    vlSelfRef.tb_mini_tpu__DOT__dut__DOT__u_mem__DOT__skew__BRA__3__KET____DOT__sr_b__BRA__1__KET__ 
                        = vlSelfRef.tb_mini_tpu__DOT__dut__DOT__u_mem__DOT__skew__BRA__3__KET____DOT__sr_b__BRA__0__KET__;
                    vlSelfRef.tb_mini_tpu__DOT__dut__DOT__u_mem__DOT__skew__BRA__3__KET____DOT__sr_b__BRA__0__KET__ 
                        = (0x0000ffffU & (::IData)(
                                                   (vlSelfRef.tb_mini_tpu__DOT__b_flat 
                                                    >> 0x30U)));
                }
            } else {
                vlSelfRef.tb_mini_tpu__DOT__dut__DOT__u_mem__DOT__skew__BRA__0__KET____DOT__sr_b__BRA__0__KET__ = 0U;
                vlSelfRef.tb_mini_tpu__DOT__dut__DOT__u_mem__DOT__skew__BRA__1__KET____DOT__sr_b__BRA__1__KET__ = 0U;
                vlSelfRef.tb_mini_tpu__DOT__dut__DOT__u_mem__DOT__skew__BRA__2__KET____DOT__sr_b__BRA__2__KET__ = 0U;
                vlSelfRef.tb_mini_tpu__DOT__dut__DOT__u_mem__DOT__skew__BRA__3__KET____DOT__sr_b__BRA__3__KET__ = 0U;
                vlSelfRef.tb_mini_tpu__DOT__dut__DOT__u_mem__DOT__skew__BRA__1__KET____DOT__sr_b__BRA__0__KET__ = 0U;
                vlSelfRef.tb_mini_tpu__DOT__dut__DOT__u_mem__DOT__skew__BRA__2__KET____DOT__sr_b__BRA__1__KET__ = 0U;
                vlSelfRef.tb_mini_tpu__DOT__dut__DOT__u_mem__DOT__skew__BRA__3__KET____DOT__sr_b__BRA__2__KET__ = 0U;
                vlSelfRef.tb_mini_tpu__DOT__dut__DOT__u_mem__DOT__skew__BRA__2__KET____DOT__sr_b__BRA__0__KET__ = 0U;
                vlSelfRef.tb_mini_tpu__DOT__dut__DOT__u_mem__DOT__skew__BRA__3__KET____DOT__sr_b__BRA__1__KET__ = 0U;
                vlSelfRef.tb_mini_tpu__DOT__dut__DOT__u_mem__DOT__skew__BRA__3__KET____DOT__sr_b__BRA__0__KET__ = 0U;
            }
            vlSelfRef.tb_mini_tpu__DOT__dut__DOT__u_ctrl__DOT__state 
                = vlSelfRef.__Vdly__tb_mini_tpu__DOT__dut__DOT__u_ctrl__DOT__state_48;
        }
        Vtb_mini_tpu_processing_element___nba_comb__TOP__tb_mini_tpu__DOT__dut__DOT__u_array__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__pe__1((&vlSymsp->vlInst.TOP__tb_mini_tpu__DOT__dut__DOT__u_array__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__pe));
        Vtb_mini_tpu_processing_element___nba_comb__TOP__tb_mini_tpu__DOT__dut__DOT__u_array__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__pe__1((&vlSymsp->vlInst.TOP__tb_mini_tpu__DOT__dut__DOT__u_array__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__pe));
        Vtb_mini_tpu_processing_element___nba_comb__TOP__tb_mini_tpu__DOT__dut__DOT__u_array__DOT__row__BRA__0__KET____DOT__col__BRA__2__KET____DOT__pe__1((&vlSymsp->vlInst.TOP__tb_mini_tpu__DOT__dut__DOT__u_array__DOT__row__BRA__0__KET____DOT__col__BRA__2__KET____DOT__pe));
        Vtb_mini_tpu_processing_element___nba_comb__TOP__tb_mini_tpu__DOT__dut__DOT__u_array__DOT__row__BRA__0__KET____DOT__col__BRA__3__KET____DOT__pe__1((&vlSymsp->vlInst.TOP__tb_mini_tpu__DOT__dut__DOT__u_array__DOT__row__BRA__0__KET____DOT__col__BRA__3__KET____DOT__pe));
    }
    if ((((0x000000000000000dULL & vlSelfRef.__VnbaTriggered[0U])) != 0ULL)) {
        Vtb_mini_tpu_processing_element___nba_comb__TOP__tb_mini_tpu__DOT__dut__DOT__u_array__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__pe__3((&vlSymsp->vlInst.TOP__tb_mini_tpu__DOT__dut__DOT__u_array__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__pe));
        Vtb_mini_tpu_processing_element___nba_comb__TOP__tb_mini_tpu__DOT__dut__DOT__u_array__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__pe__2((&vlSymsp->vlInst.TOP__tb_mini_tpu__DOT__dut__DOT__u_array__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__pe));
        Vtb_mini_tpu_processing_element___nba_comb__TOP__tb_mini_tpu__DOT__dut__DOT__u_array__DOT__row__BRA__0__KET____DOT__col__BRA__2__KET____DOT__pe__2((&vlSymsp->vlInst.TOP__tb_mini_tpu__DOT__dut__DOT__u_array__DOT__row__BRA__0__KET____DOT__col__BRA__2__KET____DOT__pe));
        Vtb_mini_tpu_processing_element___nba_comb__TOP__tb_mini_tpu__DOT__dut__DOT__u_array__DOT__row__BRA__0__KET____DOT__col__BRA__3__KET____DOT__pe__2((&vlSymsp->vlInst.TOP__tb_mini_tpu__DOT__dut__DOT__u_array__DOT__row__BRA__0__KET____DOT__col__BRA__3__KET____DOT__pe));
        Vtb_mini_tpu_processing_element___nba_comb__TOP__tb_mini_tpu__DOT__dut__DOT__u_array__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__pe__2((&vlSymsp->vlInst.TOP__tb_mini_tpu__DOT__dut__DOT__u_array__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__pe));
        Vtb_mini_tpu_processing_element___nba_comb__TOP__tb_mini_tpu__DOT__dut__DOT__u_array__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__pe__3((&vlSymsp->vlInst.TOP__tb_mini_tpu__DOT__dut__DOT__u_array__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__pe));
        Vtb_mini_tpu_processing_element___nba_comb__TOP__tb_mini_tpu__DOT__dut__DOT__u_array__DOT__row__BRA__0__KET____DOT__col__BRA__2__KET____DOT__pe__3((&vlSymsp->vlInst.TOP__tb_mini_tpu__DOT__dut__DOT__u_array__DOT__row__BRA__0__KET____DOT__col__BRA__2__KET____DOT__pe));
    }
    if ((((0x0000000000000019ULL & vlSelfRef.__VnbaTriggered[0U])) != 0ULL)) {
        Vtb_mini_tpu_processing_element___nba_comb__TOP__tb_mini_tpu__DOT__dut__DOT__u_array__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__pe__3((&vlSymsp->vlInst.TOP__tb_mini_tpu__DOT__dut__DOT__u_array__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__pe));
        Vtb_mini_tpu_processing_element___nba_comb__TOP__tb_mini_tpu__DOT__dut__DOT__u_array__DOT__row__BRA__1__KET____DOT__col__BRA__2__KET____DOT__pe__3((&vlSymsp->vlInst.TOP__tb_mini_tpu__DOT__dut__DOT__u_array__DOT__row__BRA__1__KET____DOT__col__BRA__2__KET____DOT__pe));
        Vtb_mini_tpu_processing_element___nba_comb__TOP__tb_mini_tpu__DOT__dut__DOT__u_array__DOT__row__BRA__1__KET____DOT__col__BRA__3__KET____DOT__pe__3((&vlSymsp->vlInst.TOP__tb_mini_tpu__DOT__dut__DOT__u_array__DOT__row__BRA__1__KET____DOT__col__BRA__3__KET____DOT__pe));
        Vtb_mini_tpu_processing_element___nba_comb__TOP__tb_mini_tpu__DOT__dut__DOT__u_array__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__pe__4((&vlSymsp->vlInst.TOP__tb_mini_tpu__DOT__dut__DOT__u_array__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__pe));
        Vtb_mini_tpu_processing_element___nba_comb__TOP__tb_mini_tpu__DOT__dut__DOT__u_array__DOT__row__BRA__0__KET____DOT__col__BRA__2__KET____DOT__pe__4((&vlSymsp->vlInst.TOP__tb_mini_tpu__DOT__dut__DOT__u_array__DOT__row__BRA__0__KET____DOT__col__BRA__2__KET____DOT__pe));
        Vtb_mini_tpu_processing_element___nba_comb__TOP__tb_mini_tpu__DOT__dut__DOT__u_array__DOT__row__BRA__0__KET____DOT__col__BRA__3__KET____DOT__pe__3((&vlSymsp->vlInst.TOP__tb_mini_tpu__DOT__dut__DOT__u_array__DOT__row__BRA__0__KET____DOT__col__BRA__3__KET____DOT__pe));
    }
    if ((((3ULL & vlSelfRef.__VnbaTriggered[0U])) != 0ULL)) {
        {
            // Inlined CFunc: _nba_sequent__TOP__5
            vlSelfRef.tb_mini_tpu__DOT__dut__DOT__u_rst_core__DOT__q 
                = ((::IData)(vlSelfRef.tb_mini_tpu__DOT__rst) 
                   && (::IData)(vlSelfRef.tb_mini_tpu__DOT__dut__DOT__u_rst_core__DOT__s1));
            vlSelfRef.tb_mini_tpu__DOT__dut__DOT__u_rst_core__DOT__s1 
                = vlSelfRef.tb_mini_tpu__DOT__rst;
        }
    }
}

void Vtb_mini_tpu___024root___timing_ready(Vtb_mini_tpu___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_mini_tpu___024root___timing_ready\n"); );
    Vtb_mini_tpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((((0x0000000000000080ULL & vlSelfRef.__VactTriggered[0U])) != 0ULL)) {
        vlSelfRef.__Vnontrivs.__VtrigSched_h57d84607__0.ready(
                                                              "@(negedge tb_mini_tpu.clk)");
    }
    if ((((1ULL & vlSelfRef.__VactTriggered[0U])) != 0ULL)) {
        vlSelfRef.__Vnontrivs.__VtrigSched_h57d84742__0.ready(
                                                              "@(posedge tb_mini_tpu.clk)");
    }
    if ((((0x0000000000000100ULL & vlSelfRef.__VactTriggered[0U])) != 0ULL)) {
        vlSelfRef.__Vnontrivs.__VtrigSched_hafb832d4__0.ready(
                                                              "@( tb_mini_tpu.dut.u_ctrl.done)");
    }
}

void Vtb_mini_tpu___024root___timing_resume(Vtb_mini_tpu___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_mini_tpu___024root___timing_resume\n"); );
    Vtb_mini_tpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vnontrivs.__VtrigSched_h57d84607__0.moveToResumeQueue(
                                                                      "@(negedge tb_mini_tpu.clk)");
    vlSelfRef.__Vnontrivs.__VtrigSched_h57d84742__0.moveToResumeQueue(
                                                                      "@(posedge tb_mini_tpu.clk)");
    vlSelfRef.__Vnontrivs.__VtrigSched_hafb832d4__0.moveToResumeQueue(
                                                                      "@( tb_mini_tpu.dut.u_ctrl.done)");
    vlSelfRef.__Vnontrivs.__VtrigSched_h57d84607__0.resume(
                                                           "@(negedge tb_mini_tpu.clk)");
    vlSelfRef.__Vnontrivs.__VtrigSched_h57d84742__0.resume(
                                                           "@(posedge tb_mini_tpu.clk)");
    vlSelfRef.__Vnontrivs.__VtrigSched_hafb832d4__0.resume(
                                                           "@( tb_mini_tpu.dut.u_ctrl.done)");
    if ((((0x0000000000000200ULL & vlSelfRef.__VactTriggered[0U])) != 0ULL)) {
        vlSelfRef.__Vnontrivs.__VdlySched.resume();
    }
}

void Vtb_mini_tpu___024root___trigger_orInto__act_vec_vec(::VlUnpacked<::QData/*63:0*/, 1> &out, const ::VlUnpacked<::QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_mini_tpu___024root___trigger_orInto__act_vec_vec\n"); );
    // Locals
    ::IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = (out[n] | in[n]);
        n = ((::IData)(1U) + n);
    } while ((0U >= n));
}

void Vtb_mini_tpu___024root___trigger_clear__act(::VlUnpacked<::QData/*63:0*/, 1> &out) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_mini_tpu___024root___trigger_clear__act\n"); );
    // Locals
    ::IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = 0ULL;
        n = ((::IData)(1U) + n);
    } while ((1U > n));
}

void Vtb_mini_tpu___024root____VbeforeTrig_h57d84607__0(Vtb_mini_tpu___024root* vlSelf, const char* __VeventDescription) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_mini_tpu___024root____VbeforeTrig_h57d84607__0\n"); );
    Vtb_mini_tpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    ::VlUnpacked<::QData/*63:0*/, 1> __VTmp;
    // Body
    __VTmp[0U] = (::QData)((::IData)(((((~ (::IData)(vlSelfRef.tb_mini_tpu__DOT__clk)) 
                                        & (::IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_mini_tpu__DOT__clk__0)) 
                                       << 7U) | ((::IData)(vlSelfRef.tb_mini_tpu__DOT__clk) 
                                                 & (~ (::IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_mini_tpu__DOT__clk__0))))));
    vlSelfRef.__Vtrigprevexpr___TOP__tb_mini_tpu__DOT__clk__0 
        = vlSelfRef.tb_mini_tpu__DOT__clk;
    if ((1ULL & __VTmp[0U])) {
        vlSelfRef.__Vnontrivs.__VtrigSched_h57d84742__0.ready(__VeventDescription);
    }
    if ((0x0000000000000080ULL & __VTmp[0U])) {
        vlSelfRef.__Vnontrivs.__VtrigSched_h57d84607__0.ready(__VeventDescription);
    }
    vlSelfRef.__VactTriggeredAcc[0U] = (vlSelfRef.__VactTriggeredAcc[0U] 
                                        | __VTmp[0U]);
}

void Vtb_mini_tpu___024root____VbeforeTrig_h57d84742__0(Vtb_mini_tpu___024root* vlSelf, const char* __VeventDescription) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_mini_tpu___024root____VbeforeTrig_h57d84742__0\n"); );
    Vtb_mini_tpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    ::VlUnpacked<::QData/*63:0*/, 1> __VTmp;
    // Body
    __VTmp[0U] = (::QData)((::IData)(((((~ (::IData)(vlSelfRef.tb_mini_tpu__DOT__clk)) 
                                        & (::IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_mini_tpu__DOT__clk__0)) 
                                       << 7U) | ((::IData)(vlSelfRef.tb_mini_tpu__DOT__clk) 
                                                 & (~ (::IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_mini_tpu__DOT__clk__0))))));
    vlSelfRef.__Vtrigprevexpr___TOP__tb_mini_tpu__DOT__clk__0 
        = vlSelfRef.tb_mini_tpu__DOT__clk;
    if ((1ULL & __VTmp[0U])) {
        vlSelfRef.__Vnontrivs.__VtrigSched_h57d84742__0.ready(__VeventDescription);
    }
    if ((0x0000000000000080ULL & __VTmp[0U])) {
        vlSelfRef.__Vnontrivs.__VtrigSched_h57d84607__0.ready(__VeventDescription);
    }
    vlSelfRef.__VactTriggeredAcc[0U] = (vlSelfRef.__VactTriggeredAcc[0U] 
                                        | __VTmp[0U]);
}

void Vtb_mini_tpu___024root____VbeforeTrig_hafb832d4__0(Vtb_mini_tpu___024root* vlSelf, const char* __VeventDescription) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_mini_tpu___024root____VbeforeTrig_hafb832d4__0\n"); );
    Vtb_mini_tpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    ::VlUnpacked<::QData/*63:0*/, 1> __VTmp;
    // Body
    __VTmp[0U] = (::QData)((::IData)((((::IData)(vlSelfRef.tb_mini_tpu__DOT__dut__DOT__u_ctrl__DOT__done) 
                                       != (::IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_mini_tpu__DOT__dut__DOT__u_ctrl__DOT__done__0)) 
                                      << 8U)));
    vlSelfRef.__Vtrigprevexpr___TOP__tb_mini_tpu__DOT__dut__DOT__u_ctrl__DOT__done__0 
        = vlSelfRef.tb_mini_tpu__DOT__dut__DOT__u_ctrl__DOT__done;
    if ((0x0000000000000100ULL & __VTmp[0U])) {
        vlSelfRef.__Vnontrivs.__VtrigSched_hafb832d4__0.ready(__VeventDescription);
    }
    vlSelfRef.__VactTriggeredAcc[0U] = (vlSelfRef.__VactTriggeredAcc[0U] 
                                        | __VTmp[0U]);
}

#ifdef VL_DEBUG
void Vtb_mini_tpu___024root___eval_debug_assertions(Vtb_mini_tpu___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_mini_tpu___024root___eval_debug_assertions\n"); );
    Vtb_mini_tpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}
#endif  // VL_DEBUG
