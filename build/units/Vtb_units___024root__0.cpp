// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_units.h for the primary calling header

#include "Vtb_units__pch.h"

VlCoroutine Vtb_units___024root___eval_initial__TOP__Vtiming__0(Vtb_units___024root* vlSelf);

void Vtb_units___024root___eval_initial(Vtb_units___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_units___024root___eval_initial\n"); );
    Vtb_units__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtb_units___024root___eval_initial__TOP__Vtiming__0(vlSelf);
}

void Vtb_units___024root___eval_sample(Vtb_units___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_units___024root___eval_sample\n"); );
    Vtb_units__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_units___024root___dump_triggers__ico(const ::VlUnpacked<::QData/*63:0*/, 1> &triggers, const ::std::string &tag);
#endif  // VL_DEBUG

bool Vtb_units___024root___eval_ico(Vtb_units___024root* vlSelf, ::CData/*0:0*/ firstIteration) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_units___024root___eval_ico\n"); );
    Vtb_units__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VicoTriggered[0U] = ((0xfffffffffffffffeULL 
                                      & vlSelfRef.__VicoTriggered[0U]) 
                                     | (::IData)((::IData)(firstIteration)));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtb_units___024root___dump_triggers__ico(vlSelfRef.__VicoTriggered, "ico"s);
    }
#endif
    return (0U);
}

void Vtb_units___024root___trigger_orInto__act_vec_vec(::VlUnpacked<::QData/*63:0*/, 1> &out, const ::VlUnpacked<::QData/*63:0*/, 1> &in);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_units___024root___dump_triggers__act(const ::VlUnpacked<::QData/*63:0*/, 1> &triggers, const ::std::string &tag);
#endif  // VL_DEBUG
bool Vtb_units___024root___trigger_anySet__act(const ::VlUnpacked<::QData/*63:0*/, 1> &in);
void Vtb_units___024root___act_comb__TOP__0(Vtb_units___024root* vlSelf);

bool Vtb_units___024root___eval_act(Vtb_units___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_units___024root___eval_act\n"); );
    Vtb_units__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    ::CData/*0:0*/ __VactExecute;
    // Body
    {
        // Inlined CFunc: _eval_triggers_vec__act
        vlSelfRef.__VactTriggered[0U] = (::QData)((::IData)(vlSelfRef.__Vnontrivs.__VdlySched.awaitingCurrentTime()));
    }
    Vtb_units___024root___trigger_orInto__act_vec_vec(vlSelfRef.__VactTriggered, vlSelfRef.__VactTriggeredAcc);
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtb_units___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
    }
#endif
    Vtb_units___024root___trigger_orInto__act_vec_vec(vlSelfRef.__VnbaTriggered, vlSelfRef.__VactTriggered);
    __VactExecute = Vtb_units___024root___trigger_anySet__act(vlSelfRef.__VactTriggered);
    if (__VactExecute) {
        vlSelfRef.__VactTriggeredAcc.fill(0ULL);
        {
            // Inlined CFunc: _timing_resume
            if ((((1ULL & vlSelfRef.__VactTriggered[0U])) != 0ULL)) {
                vlSelfRef.__Vnontrivs.__VdlySched.resume();
            }
        }
        {
            // Inlined CFunc: _eval_body__act
            if ((((1ULL & vlSelfRef.__VactTriggered[0U])) != 0ULL)) {
                Vtb_units___024root___act_comb__TOP__0(vlSelf);
            }
        }
    }
    return (__VactExecute);
}

bool Vtb_units___024root___eval_inact(Vtb_units___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_units___024root___eval_inact\n"); );
    Vtb_units__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    ::CData/*0:0*/ __VinactExecute;
    // Body
    __VinactExecute = vlSelfRef.__Vnontrivs.__VdlySched.awaitingZeroDelay();
    if (__VinactExecute) {
        VL_FATAL_MT("tb/tb_units.sv", 3, "", "ZERODLY: Design Verilated with '--no-sched-zero-delay', but #0 delay executed at runtime");
    }
    return (__VinactExecute);
}

void Vtb_units___024root___trigger_clear__act(::VlUnpacked<::QData/*63:0*/, 1> &out);

bool Vtb_units___024root___eval_nba(Vtb_units___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_units___024root___eval_nba\n"); );
    Vtb_units__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    ::CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = Vtb_units___024root___trigger_anySet__act(vlSelfRef.__VnbaTriggered);
    if (__VnbaExecute) {
        {
            // Inlined CFunc: _eval_body__nba
            if ((((1ULL & vlSelfRef.__VnbaTriggered[0U])) != 0ULL)) {
                Vtb_units___024root___act_comb__TOP__0(vlSelf);
            }
        }
        Vtb_units___024root___trigger_clear__act(vlSelfRef.__VnbaTriggered);
    }
    return (__VnbaExecute);
}

bool Vtb_units___024root___eval_obs(Vtb_units___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_units___024root___eval_obs\n"); );
    Vtb_units__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    return (0U);
}

bool Vtb_units___024root___eval_react(Vtb_units___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_units___024root___eval_react\n"); );
    Vtb_units__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    return (0U);
}

void Vtb_units___024root___eval_postponed(Vtb_units___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_units___024root___eval_postponed\n"); );
    Vtb_units__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VlCoroutine Vtb_units___024root___eval_initial__TOP__Vtiming__0(Vtb_units___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_units___024root___eval_initial__TOP__Vtiming__0\n"); );
    Vtb_units__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    ::IData/*31:0*/ tb_units__DOT__fh;
    tb_units__DOT__fh = 0;
    ::IData/*31:0*/ tb_units__DOT__n;
    tb_units__DOT__n = 0;
    ::IData/*31:0*/ tb_units__DOT__bad;
    tb_units__DOT__bad = 0;
    ::IData/*31:0*/ __Vfunc_tb_units__DOT__same__x_0;
    __Vfunc_tb_units__DOT__same__x_0 = 0;
    ::IData/*31:0*/ __Vfunc_tb_units__DOT__same__y_1;
    __Vfunc_tb_units__DOT__same__y_1 = 0;
    ::IData/*31:0*/ __Vfunc_tb_units__DOT__same__x_2;
    __Vfunc_tb_units__DOT__same__x_2 = 0;
    ::IData/*31:0*/ __Vfunc_tb_units__DOT__same__y_3;
    __Vfunc_tb_units__DOT__same__y_3 = 0;
    // Body
    tb_units__DOT__fh = VL_FOPEN_NN("vectors/unit_mul.txt"s
                                    , "r"s);
    ;
    tb_units__DOT__n = 0U;
    tb_units__DOT__bad = 0U;
    while (true) {
        vlSelfRef.tb_units__DOT____VlemExpr_0 = VL_FSCANF_INX(tb_units__DOT__fh,"%h %h %h\n",3
                                                              , '#',16,&(vlSelfRef.tb_units__DOT__t1)
                                                              , '#',16,&(vlSelfRef.tb_units__DOT__t2)
                                                              , '#',32,&(vlSelfRef.tb_units__DOT__t3)) ;
        if (!((3U == vlSelfRef.tb_units__DOT____VlemExpr_0))) break;
        vlSelfRef.tb_units__DOT__ma = vlSelfRef.tb_units__DOT__t1;
        vlSelfRef.tb_units__DOT__mb = vlSelfRef.tb_units__DOT__t2;
        vlSelfRef.tb_units__DOT__expected = vlSelfRef.tb_units__DOT__t3;
        co_await vlSelfRef.__Vnontrivs.__VdlySched.delay(0x00000000000003e8ULL, 
                                                         nullptr, 
                                                         "tb/tb_units.sv", 
                                                         23);
        co_await vlSelfRef.__Vnontrivs.__VdlySched.delay(0x00000000000003e8ULL, 
                                                         nullptr, 
                                                         "tb/tb_units.sv", 
                                                         23);
        tb_units__DOT__n = ((::IData)(1U) + tb_units__DOT__n);
        __Vfunc_tb_units__DOT__same__y_1 = vlSelfRef.tb_units__DOT__expected;
        __Vfunc_tb_units__DOT__same__x_0 = vlSelfRef.tb_units__DOT__u_mul__DOT__result;
        vlSelfRef.tb_units__DOT____VlemCall_1__same = 0U;
        vlSelfRef.tb_units__DOT____VlemCall_1__same 
            = ((__Vfunc_tb_units__DOT__same__x_0 == __Vfunc_tb_units__DOT__same__y_1) 
               | ((0U == (0x7fffffffU & __Vfunc_tb_units__DOT__same__x_0)) 
                  & (0U == (0x7fffffffU & __Vfunc_tb_units__DOT__same__y_1))));
        if ((1U & (~ (::IData)(vlSelfRef.tb_units__DOT____VlemCall_1__same)))) {
            tb_units__DOT__bad = ((::IData)(1U) + tb_units__DOT__bad);
            if (VL_UNLIKELY((VL_GTES_III(32, 0x0000000aU, tb_units__DOT__bad)))) {
                VL_WRITEF_NX("  mul a=%h b=%h expected %h got %h\n",4
                             , '#',16,vlSelfRef.tb_units__DOT__ma
                             , '#',16,(::IData)(vlSelfRef.tb_units__DOT__mb)
                             , '#',32,vlSelfRef.tb_units__DOT__expected
                             , '#',32,vlSelfRef.tb_units__DOT__u_mul__DOT__result);
            }
        }
    }
    VL_FCLOSE_I(tb_units__DOT__fh); VL_WRITEF_NX("%s: bf16_mul  %0d vectors, %0d failures\n",3
                                                 , '#',32,
                                                 ((0U 
                                                   != tb_units__DOT__bad)
                                                   ? 0x4641494cU
                                                   : 0x50415353U)
                                                 , '~',32,tb_units__DOT__n
                                                 , '~',32,tb_units__DOT__bad);
    tb_units__DOT__fh = VL_FOPEN_NN("vectors/unit_add.txt"s
                                    , "r"s);
    ;
    tb_units__DOT__n = 0U;
    tb_units__DOT__bad = 0U;
    while (true) {
        vlSelfRef.tb_units__DOT____VlemExpr_2 = VL_FSCANF_INX(tb_units__DOT__fh,"%h %h %h\n",3
                                                              , '#',32,&(vlSelfRef.tb_units__DOT__u1)
                                                              , '#',32,&(vlSelfRef.tb_units__DOT__u2)
                                                              , '#',32,&(vlSelfRef.tb_units__DOT__u3)) ;
        if (!((3U == vlSelfRef.tb_units__DOT____VlemExpr_2))) break;
        vlSelfRef.tb_units__DOT__aa = vlSelfRef.tb_units__DOT__u1;
        vlSelfRef.tb_units__DOT__ab = vlSelfRef.tb_units__DOT__u2;
        vlSelfRef.tb_units__DOT__expected = vlSelfRef.tb_units__DOT__u3;
        co_await vlSelfRef.__Vnontrivs.__VdlySched.delay(0x00000000000003e8ULL, 
                                                         nullptr, 
                                                         "tb/tb_units.sv", 
                                                         37);
        co_await vlSelfRef.__Vnontrivs.__VdlySched.delay(0x00000000000003e8ULL, 
                                                         nullptr, 
                                                         "tb/tb_units.sv", 
                                                         37);
        tb_units__DOT__n = ((::IData)(1U) + tb_units__DOT__n);
        __Vfunc_tb_units__DOT__same__y_3 = vlSelfRef.tb_units__DOT__expected;
        __Vfunc_tb_units__DOT__same__x_2 = vlSelfRef.tb_units__DOT__u_add__DOT__result;
        vlSelfRef.tb_units__DOT____VlemCall_3__same = 0U;
        vlSelfRef.tb_units__DOT____VlemCall_3__same 
            = ((__Vfunc_tb_units__DOT__same__x_2 == __Vfunc_tb_units__DOT__same__y_3) 
               | ((0U == (0x7fffffffU & __Vfunc_tb_units__DOT__same__x_2)) 
                  & (0U == (0x7fffffffU & __Vfunc_tb_units__DOT__same__y_3))));
        if ((1U & (~ (::IData)(vlSelfRef.tb_units__DOT____VlemCall_3__same)))) {
            tb_units__DOT__bad = ((::IData)(1U) + tb_units__DOT__bad);
            if (VL_UNLIKELY((VL_GTES_III(32, 0x0000000aU, tb_units__DOT__bad)))) {
                VL_WRITEF_NX("  add a=%h b=%h expected %h got %h\n",4
                             , '#',32,vlSelfRef.tb_units__DOT__aa
                             , '#',32,vlSelfRef.tb_units__DOT__ab
                             , '#',32,vlSelfRef.tb_units__DOT__expected
                             , '#',32,vlSelfRef.tb_units__DOT__u_add__DOT__result);
            }
        }
    }
    VL_FCLOSE_I(tb_units__DOT__fh); VL_WRITEF_NX("%s: fp32_add  %0d vectors, %0d failures\n",3
                                                 , '#',32,
                                                 ((0U 
                                                   != tb_units__DOT__bad)
                                                   ? 0x4641494cU
                                                   : 0x50415353U)
                                                 , '~',32,tb_units__DOT__n
                                                 , '~',32,tb_units__DOT__bad);
    VL_FINISH_MT("tb/tb_units.sv", 46, "");
    co_return;
}

bool Vtb_units___024root___trigger_anySet__ico(const ::VlUnpacked<::QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_units___024root___trigger_anySet__ico\n"); );
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

bool Vtb_units___024root___trigger_anySet__act(const ::VlUnpacked<::QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_units___024root___trigger_anySet__act\n"); );
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

void Vtb_units___024root___act_comb__TOP__0(Vtb_units___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_units___024root___act_comb__TOP__0\n"); );
    Vtb_units__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    ::CData/*0:0*/ tb_units__DOT__u_add__DOT__a_inf;
    tb_units__DOT__u_add__DOT__a_inf = 0;
    ::CData/*0:0*/ tb_units__DOT__u_add__DOT__b_inf;
    tb_units__DOT__u_add__DOT__b_inf = 0;
    ::SData/*15:0*/ tb_units__DOT__u_mul__DOT__prod;
    tb_units__DOT__u_mul__DOT__prod = 0;
    ::CData/*0:0*/ tb_units__DOT__u_mul__DOT__a_inf;
    tb_units__DOT__u_mul__DOT__a_inf = 0;
    ::CData/*0:0*/ tb_units__DOT__u_mul__DOT__b_inf;
    tb_units__DOT__u_mul__DOT__b_inf = 0;
    ::IData/*27:0*/ __Vdfg_Regularize_307;
    __Vdfg_Regularize_307 = 0;
    ::CData/*0:0*/ __Vdfg_Regularize_308;
    __Vdfg_Regularize_308 = 0;
    ::CData/*7:0*/ __Vdfg_Regularize_309;
    __Vdfg_Regularize_309 = 0;
    ::SData/*10:0*/ __Vdfg_Regularize_310;
    __Vdfg_Regularize_310 = 0;
    ::CData/*0:0*/ __Vdfg_Regularize_312;
    __Vdfg_Regularize_312 = 0;
    ::CData/*7:0*/ __Vdfg_Regularize_313;
    __Vdfg_Regularize_313 = 0;
    ::IData/*26:0*/ __Vdfg_Regularize_314;
    __Vdfg_Regularize_314 = 0;
    ::SData/*9:0*/ __Vdfg_Regularize_315;
    __Vdfg_Regularize_315 = 0;
    ::CData/*4:0*/ __Vdfg_Regularize_317;
    __Vdfg_Regularize_317 = 0;
    ::IData/*27:0*/ __Vdfg_Regularize_318;
    __Vdfg_Regularize_318 = 0;
    ::IData/*26:0*/ __Vdfg_Regularize_319;
    __Vdfg_Regularize_319 = 0;
    ::IData/*27:0*/ __Vdfg_Regularize_320;
    __Vdfg_Regularize_320 = 0;
    // Body
    tb_units__DOT__u_mul__DOT__a_inf = (::IData)((0x7f80U 
                                                  == 
                                                  (0x7fffU 
                                                   & (::IData)(vlSelfRef.tb_units__DOT__ma))));
    tb_units__DOT__u_mul__DOT__b_inf = (::IData)((0x7f80U 
                                                  == 
                                                  (0x7fffU 
                                                   & (::IData)(vlSelfRef.tb_units__DOT__mb))));
    tb_units__DOT__u_add__DOT__a_inf = (::IData)((0x7f800000U 
                                                  == 
                                                  (0x7fffffffU 
                                                   & vlSelfRef.tb_units__DOT__aa)));
    tb_units__DOT__u_add__DOT__b_inf = (::IData)((0x7f800000U 
                                                  == 
                                                  (0x7fffffffU 
                                                   & vlSelfRef.tb_units__DOT__ab)));
    tb_units__DOT__u_mul__DOT__prod = (0x0000ffffU 
                                       & ((0x00000080U 
                                           | (0x0000007fU 
                                              & (::IData)(vlSelfRef.tb_units__DOT__mb))) 
                                          * (0x00000080U 
                                             | (0x0000007fU 
                                                & (::IData)(vlSelfRef.tb_units__DOT__ma)))));
    __Vdfg_Regularize_308 = ((0x7fffffffU & vlSelfRef.tb_units__DOT__aa) 
                             >= (0x7fffffffU & vlSelfRef.tb_units__DOT__ab));
    __Vdfg_Regularize_310 = (0x000007ffU & ((((0x000000ffU 
                                               & ((::IData)(vlSelfRef.tb_units__DOT__mb) 
                                                  >> 7U)) 
                                              + (0x000000ffU 
                                                 & ((::IData)(vlSelfRef.tb_units__DOT__ma) 
                                                    >> 7U))) 
                                             - (::IData)(0x007fU)) 
                                            + (1U & 
                                               (- (::IData)(
                                                            (1U 
                                                             & ((::IData)(tb_units__DOT__u_mul__DOT__prod) 
                                                                >> 0x0000000fU)))))));
    __Vdfg_Regularize_320 = (0x04000000U | (0x03fffff8U 
                                            & (((::IData)(__Vdfg_Regularize_308)
                                                 ? vlSelfRef.tb_units__DOT__aa
                                                 : vlSelfRef.tb_units__DOT__ab) 
                                               << 3U)));
    __Vdfg_Regularize_319 = (0x04000000U | (0x03fffff8U 
                                            & (((::IData)(__Vdfg_Regularize_308)
                                                 ? vlSelfRef.tb_units__DOT__ab
                                                 : vlSelfRef.tb_units__DOT__aa) 
                                               << 3U)));
    if (__Vdfg_Regularize_308) {
        __Vdfg_Regularize_312 = (1U & (vlSelfRef.tb_units__DOT__aa 
                                       >> 0x0000001fU));
        __Vdfg_Regularize_313 = (0x000000ffU & (vlSelfRef.tb_units__DOT__aa 
                                                >> 0x00000017U));
    } else {
        __Vdfg_Regularize_312 = (1U & (vlSelfRef.tb_units__DOT__ab 
                                       >> 0x0000001fU));
        __Vdfg_Regularize_313 = (0x000000ffU & (vlSelfRef.tb_units__DOT__ab 
                                                >> 0x00000017U));
    }
    vlSelfRef.tb_units__DOT__u_mul__DOT__result = (
                                                   ((::IData)(
                                                              ((0x7f80U 
                                                                == 
                                                                (0x7f80U 
                                                                 & (::IData)(vlSelfRef.tb_units__DOT__ma))) 
                                                               & (0U 
                                                                  != 
                                                                  (0x0000007fU 
                                                                   & (::IData)(vlSelfRef.tb_units__DOT__ma))))) 
                                                    | ((::IData)(
                                                                 ((0x7f80U 
                                                                   == 
                                                                   (0x7f80U 
                                                                    & (::IData)(vlSelfRef.tb_units__DOT__mb))) 
                                                                  & (0U 
                                                                     != 
                                                                     (0x0000007fU 
                                                                      & (::IData)(vlSelfRef.tb_units__DOT__mb))))) 
                                                       | ((::IData)(
                                                                    ((0U 
                                                                      == 
                                                                      (0x7f80U 
                                                                       & (::IData)(vlSelfRef.tb_units__DOT__ma))) 
                                                                     & (::IData)(tb_units__DOT__u_mul__DOT__b_inf))) 
                                                          | (::IData)(
                                                                      ((0U 
                                                                        == 
                                                                        (0x7f80U 
                                                                         & (::IData)(vlSelfRef.tb_units__DOT__mb))) 
                                                                       & (::IData)(tb_units__DOT__u_mul__DOT__a_inf))))))
                                                    ? 0x7fc00000U
                                                    : 
                                                   ((0x80000000U 
                                                     & (((::IData)(vlSelfRef.tb_units__DOT__ma) 
                                                         ^ (::IData)(vlSelfRef.tb_units__DOT__mb)) 
                                                        << 0x00000010U)) 
                                                    | (((::IData)(tb_units__DOT__u_mul__DOT__a_inf) 
                                                        | (::IData)(tb_units__DOT__u_mul__DOT__b_inf))
                                                        ? 0x7f800000U
                                                        : 
                                                       (((VL_LTES_III(32, 0x000000ffU, 
                                                                      VL_EXTENDS_II(32,11, (::IData)(__Vdfg_Regularize_310)))
                                                           ? 0x007f8000U
                                                           : 
                                                          ((0x007f8000U 
                                                            & ((::IData)(__Vdfg_Regularize_310) 
                                                               << 0x0000000fU)) 
                                                           | (0x00007fffU 
                                                              & ((0x00008000U 
                                                                  & (::IData)(tb_units__DOT__u_mul__DOT__prod))
                                                                  ? (::IData)(tb_units__DOT__u_mul__DOT__prod)
                                                                  : 
                                                                 (0x00007ffeU 
                                                                  & ((::IData)(tb_units__DOT__u_mul__DOT__prod) 
                                                                     << 1U)))))) 
                                                         & (- (::IData)(
                                                                        (1U 
                                                                         & (~ 
                                                                            ((0U 
                                                                              == 
                                                                              (0x000000ffU 
                                                                               & ((::IData)(vlSelfRef.tb_units__DOT__ma) 
                                                                                >> 7U))) 
                                                                             | ((0U 
                                                                                == 
                                                                                (0x000000ffU 
                                                                                & ((::IData)(vlSelfRef.tb_units__DOT__mb) 
                                                                                >> 7U))) 
                                                                                | VL_GTES_III(32, 0U, 
                                                                                VL_EXTENDS_II(32,11, (::IData)(__Vdfg_Regularize_310)))))))))) 
                                                        << 8U))));
    __Vdfg_Regularize_309 = (0x000000ffU & ((::IData)(__Vdfg_Regularize_313) 
                                            - ((::IData)(__Vdfg_Regularize_308)
                                                ? (vlSelfRef.tb_units__DOT__ab 
                                                   >> 0x00000017U)
                                                : (vlSelfRef.tb_units__DOT__aa 
                                                   >> 0x00000017U))));
    __Vdfg_Regularize_318 = ((0x1bU <= (::IData)(__Vdfg_Regularize_309))
                              ? 1U : (VL_SHIFTR_III(27,27,8, __Vdfg_Regularize_319, (::IData)(__Vdfg_Regularize_309)) 
                                      | (0U != ((VL_SHIFTL_III(27,27,8, (::IData)(1U), (::IData)(__Vdfg_Regularize_309)) 
                                                 - (::IData)(1U)) 
                                                & __Vdfg_Regularize_319))));
    __Vdfg_Regularize_307 = (0x0fffffffU & (((::IData)(__Vdfg_Regularize_312) 
                                             == (1U 
                                                 & ((::IData)(__Vdfg_Regularize_308)
                                                     ? 
                                                    (vlSelfRef.tb_units__DOT__ab 
                                                     >> 0x0000001fU)
                                                     : 
                                                    (vlSelfRef.tb_units__DOT__aa 
                                                     >> 0x0000001fU))))
                                             ? (__Vdfg_Regularize_318 
                                                + __Vdfg_Regularize_320)
                                             : (__Vdfg_Regularize_320 
                                                - __Vdfg_Regularize_318)));
    __Vdfg_Regularize_317 = (((0x02000000U & __Vdfg_Regularize_307)
                               ? 1U : ((0x01000000U 
                                        & __Vdfg_Regularize_307)
                                        ? 2U : ((0x00800000U 
                                                 & __Vdfg_Regularize_307)
                                                 ? 3U
                                                 : 
                                                ((0x00400000U 
                                                  & __Vdfg_Regularize_307)
                                                  ? 4U
                                                  : 
                                                 ((0x00200000U 
                                                   & __Vdfg_Regularize_307)
                                                   ? 5U
                                                   : 
                                                  ((0x00100000U 
                                                    & __Vdfg_Regularize_307)
                                                    ? 6U
                                                    : 
                                                   ((0x00080000U 
                                                     & __Vdfg_Regularize_307)
                                                     ? 7U
                                                     : 
                                                    ((0x00040000U 
                                                      & __Vdfg_Regularize_307)
                                                      ? 8U
                                                      : 
                                                     ((0x00020000U 
                                                       & __Vdfg_Regularize_307)
                                                       ? 9U
                                                       : 
                                                      ((0x00010000U 
                                                        & __Vdfg_Regularize_307)
                                                        ? 0x0aU
                                                        : 
                                                       ((0x00008000U 
                                                         & __Vdfg_Regularize_307)
                                                         ? 0x0bU
                                                         : 
                                                        ((0x00004000U 
                                                          & __Vdfg_Regularize_307)
                                                          ? 0x0cU
                                                          : 
                                                         ((0x00002000U 
                                                           & __Vdfg_Regularize_307)
                                                           ? 0x0dU
                                                           : 
                                                          ((0x00001000U 
                                                            & __Vdfg_Regularize_307)
                                                            ? 0x0eU
                                                            : 
                                                           ((0x00000800U 
                                                             & __Vdfg_Regularize_307)
                                                             ? 0x0fU
                                                             : 
                                                            ((0x00000400U 
                                                              & __Vdfg_Regularize_307)
                                                              ? 0x10U
                                                              : 
                                                             ((0x00000200U 
                                                               & __Vdfg_Regularize_307)
                                                               ? 0x11U
                                                               : 
                                                              ((0x00000100U 
                                                                & __Vdfg_Regularize_307)
                                                                ? 0x12U
                                                                : 
                                                               ((0x00000080U 
                                                                 & __Vdfg_Regularize_307)
                                                                 ? 0x13U
                                                                 : 
                                                                ((0x00000040U 
                                                                  & __Vdfg_Regularize_307)
                                                                  ? 0x14U
                                                                  : 
                                                                 ((0x00000020U 
                                                                   & __Vdfg_Regularize_307)
                                                                   ? 0x15U
                                                                   : 
                                                                  ((0x00000010U 
                                                                    & __Vdfg_Regularize_307)
                                                                    ? 0x16U
                                                                    : 
                                                                   ((8U 
                                                                     & __Vdfg_Regularize_307)
                                                                     ? 0x17U
                                                                     : 
                                                                    ((4U 
                                                                      & __Vdfg_Regularize_307)
                                                                      ? 0x18U
                                                                      : 
                                                                     ((2U 
                                                                       & __Vdfg_Regularize_307)
                                                                       ? 0x19U
                                                                       : 
                                                                      ((1U 
                                                                        & __Vdfg_Regularize_307)
                                                                        ? 0x1aU
                                                                        : 0x1bU)))))))))))))))))))))))))) 
                             & (- (::IData)((1U & (~ 
                                                   (__Vdfg_Regularize_307 
                                                    >> 0x0000001aU))))));
    if ((0x08000000U & __Vdfg_Regularize_307)) {
        __Vdfg_Regularize_314 = (0x07ffffffU & ((__Vdfg_Regularize_307 
                                                 >> 1U) 
                                                | (1U 
                                                   & __Vdfg_Regularize_307)));
        __Vdfg_Regularize_315 = (0x000003ffU & ((::IData)(1U) 
                                                + (::IData)(__Vdfg_Regularize_313)));
    } else {
        __Vdfg_Regularize_314 = (0x07ffffffU & (__Vdfg_Regularize_307 
                                                << (::IData)(__Vdfg_Regularize_317)));
        __Vdfg_Regularize_315 = (0x000003ffU & ((::IData)(__Vdfg_Regularize_313) 
                                                - (::IData)(__Vdfg_Regularize_317)));
    }
    vlSelfRef.tb_units__DOT__u_add__DOT__result = (
                                                   ((::IData)(
                                                              ((0x7f800000U 
                                                                == 
                                                                (0x7f800000U 
                                                                 & vlSelfRef.tb_units__DOT__aa)) 
                                                               & (0U 
                                                                  != 
                                                                  (0x007fffffU 
                                                                   & vlSelfRef.tb_units__DOT__aa)))) 
                                                    | ((::IData)(
                                                                 ((0x7f800000U 
                                                                   == 
                                                                   (0x7f800000U 
                                                                    & vlSelfRef.tb_units__DOT__ab)) 
                                                                  & (0U 
                                                                     != 
                                                                     (0x007fffffU 
                                                                      & vlSelfRef.tb_units__DOT__ab)))) 
                                                       | ((::IData)(tb_units__DOT__u_add__DOT__a_inf) 
                                                          & (((vlSelfRef.tb_units__DOT__aa 
                                                               >> 0x0000001fU) 
                                                              != 
                                                              (vlSelfRef.tb_units__DOT__ab 
                                                               >> 0x0000001fU)) 
                                                             & (::IData)(tb_units__DOT__u_add__DOT__b_inf)))))
                                                    ? 0x7fc00000U
                                                    : 
                                                   ((::IData)(tb_units__DOT__u_add__DOT__a_inf)
                                                     ? vlSelfRef.tb_units__DOT__aa
                                                     : 
                                                    ((::IData)(tb_units__DOT__u_add__DOT__b_inf)
                                                      ? vlSelfRef.tb_units__DOT__ab
                                                      : 
                                                     ((::IData)(
                                                                ((0U 
                                                                  == 
                                                                  (0x7f800000U 
                                                                   & vlSelfRef.tb_units__DOT__aa)) 
                                                                 & (0U 
                                                                    == 
                                                                    (0x7f800000U 
                                                                     & vlSelfRef.tb_units__DOT__ab))))
                                                       ? 
                                                      (0x80000000U 
                                                       & (vlSelfRef.tb_units__DOT__aa 
                                                          & vlSelfRef.tb_units__DOT__ab))
                                                       : 
                                                      ((0U 
                                                        == 
                                                        (0x000000ffU 
                                                         & (vlSelfRef.tb_units__DOT__aa 
                                                            >> 0x00000017U)))
                                                        ? vlSelfRef.tb_units__DOT__ab
                                                        : 
                                                       ((0U 
                                                         == 
                                                         (0x000000ffU 
                                                          & (vlSelfRef.tb_units__DOT__ab 
                                                             >> 0x00000017U)))
                                                         ? vlSelfRef.tb_units__DOT__aa
                                                         : 
                                                        ((- (::IData)(
                                                                      (1U 
                                                                       & (~ 
                                                                          ((0U 
                                                                            == __Vdfg_Regularize_314) 
                                                                           | VL_GTES_III(32, 0U, 
                                                                                VL_EXTENDS_II(32,10, (::IData)(__Vdfg_Regularize_315)))))))) 
                                                         & (((::IData)(__Vdfg_Regularize_312) 
                                                             << 0x0000001fU) 
                                                            | (VL_LTES_III(32, 0x000000ffU, 
                                                                           VL_EXTENDS_II(32,10, (::IData)(__Vdfg_Regularize_315)))
                                                                ? 0x7f800000U
                                                                : 
                                                               ((0x7f800000U 
                                                                 & ((::IData)(__Vdfg_Regularize_315) 
                                                                    << 0x00000017U)) 
                                                                | (0x007fffffU 
                                                                   & (__Vdfg_Regularize_314 
                                                                      >> 3U))))))))))));
}

void Vtb_units___024root___trigger_orInto__act_vec_vec(::VlUnpacked<::QData/*63:0*/, 1> &out, const ::VlUnpacked<::QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_units___024root___trigger_orInto__act_vec_vec\n"); );
    // Locals
    ::IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = (out[n] | in[n]);
        n = ((::IData)(1U) + n);
    } while ((0U >= n));
}

void Vtb_units___024root___trigger_clear__act(::VlUnpacked<::QData/*63:0*/, 1> &out) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_units___024root___trigger_clear__act\n"); );
    // Locals
    ::IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = 0ULL;
        n = ((::IData)(1U) + n);
    } while ((1U > n));
}

#ifdef VL_DEBUG
void Vtb_units___024root___eval_debug_assertions(Vtb_units___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_units___024root___eval_debug_assertions\n"); );
    Vtb_units__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}
#endif  // VL_DEBUG
