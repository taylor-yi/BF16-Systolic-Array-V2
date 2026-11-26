// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_units.h for the primary calling header

#include "Vtb_units__pch.h"

VL_ATTR_COLD void Vtb_units___024root___eval_static(Vtb_units___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_units___024root___eval_static\n"); );
    Vtb_units__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    do {
        vlSelfRef.__VactTriggeredAcc[vlSelfRef.__Vi] 
            = vlSelfRef.__VactTriggered[vlSelfRef.__Vi];
        vlSelfRef.__Vi = ((::IData)(1U) + vlSelfRef.__Vi);
    } while ((0U >= vlSelfRef.__Vi));
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_units___024root___dump_triggers__stl(const ::VlUnpacked<::QData/*63:0*/, 1> &triggers, const ::std::string &tag);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vtb_units___024root___trigger_anySet__stl(const ::VlUnpacked<::QData/*63:0*/, 1> &in);
void Vtb_units___024root___act_comb__TOP__0(Vtb_units___024root* vlSelf);

VL_ATTR_COLD bool Vtb_units___024root___eval_stl(Vtb_units___024root* vlSelf, ::CData/*0:0*/ firstIteration) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_units___024root___eval_stl\n"); );
    Vtb_units__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    ::CData/*0:0*/ __VstlExecute;
    // Body
    vlSelfRef.__VstlTriggered[0U] = ((0xfffffffffffffffeULL 
                                      & vlSelfRef.__VstlTriggered[0U]) 
                                     | (::IData)((::IData)(firstIteration)));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtb_units___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
    }
#endif
    __VstlExecute = Vtb_units___024root___trigger_anySet__stl(vlSelfRef.__VstlTriggered);
    if (__VstlExecute) {
        {
            // Inlined CFunc: _eval_body__stl
            if ((((1ULL & vlSelfRef.__VstlTriggered[0U])) != 0ULL)) {
                Vtb_units___024root___act_comb__TOP__0(vlSelf);
            }
        }
    }
    return (__VstlExecute);
}

VL_ATTR_COLD void Vtb_units___024root___eval_dump_triggers__stl(Vtb_units___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_units___024root___eval_dump_triggers__stl\n"); );
    Vtb_units__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
#ifdef VL_DEBUG
    Vtb_units___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
#endif
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_units___024root___dump_triggers__ico(const ::VlUnpacked<::QData/*63:0*/, 1> &triggers, const ::std::string &tag);
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtb_units___024root___eval_dump_triggers__ico(Vtb_units___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_units___024root___eval_dump_triggers__ico\n"); );
    Vtb_units__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
#ifdef VL_DEBUG
    Vtb_units___024root___dump_triggers__ico(vlSelfRef.__VicoTriggered, "ico"s);
#endif
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_units___024root___dump_triggers__act(const ::VlUnpacked<::QData/*63:0*/, 1> &triggers, const ::std::string &tag);
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtb_units___024root___eval_dump_triggers__act(Vtb_units___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_units___024root___eval_dump_triggers__act\n"); );
    Vtb_units__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
#ifdef VL_DEBUG
    Vtb_units___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
#endif
}

VL_ATTR_COLD void Vtb_units___024root___eval_dump_triggers__nba(Vtb_units___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_units___024root___eval_dump_triggers__nba\n"); );
    Vtb_units__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
#ifdef VL_DEBUG
    Vtb_units___024root___dump_triggers__act(vlSelfRef.__VnbaTriggered, "nba"s);
#endif
}

VL_ATTR_COLD void Vtb_units___024root___eval_dump_triggers__obs(Vtb_units___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_units___024root___eval_dump_triggers__obs\n"); );
    Vtb_units__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vtb_units___024root___eval_dump_triggers__react(Vtb_units___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_units___024root___eval_dump_triggers__react\n"); );
    Vtb_units__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vtb_units___024root___eval_final(Vtb_units___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_units___024root___eval_final\n"); );
    Vtb_units__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_units___024root___dump_triggers__stl(const ::VlUnpacked<::QData/*63:0*/, 1> &triggers, const ::std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_units___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (::IData)(Vtb_units___024root___trigger_anySet__stl(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (::IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD bool Vtb_units___024root___trigger_anySet__stl(const ::VlUnpacked<::QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_units___024root___trigger_anySet__stl\n"); );
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

bool Vtb_units___024root___trigger_anySet__ico(const ::VlUnpacked<::QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_units___024root___dump_triggers__ico(const ::VlUnpacked<::QData/*63:0*/, 1> &triggers, const ::std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_units___024root___dump_triggers__ico\n"); );
    // Body
    if ((1U & (~ (::IData)(Vtb_units___024root___trigger_anySet__ico(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (::IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: Internal 'ico' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

bool Vtb_units___024root___trigger_anySet__act(const ::VlUnpacked<::QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_units___024root___dump_triggers__act(const ::VlUnpacked<::QData/*63:0*/, 1> &triggers, const ::std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_units___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (::IData)(Vtb_units___024root___trigger_anySet__act(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (::IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtb_units___024root___ctor_var_reset(Vtb_units___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_units___024root___ctor_var_reset\n"); );
    Vtb_units__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->vlNamep);
    vlSelf->tb_units__DOT__ma = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 3684334950326682308ull);
    vlSelf->tb_units__DOT__mb = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 5501423803740741819ull);
    vlSelf->tb_units__DOT__aa = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11320297707202732950ull);
    vlSelf->tb_units__DOT__ab = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9455006559910249316ull);
    vlSelf->tb_units__DOT__expected = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8925691452382602592ull);
    vlSelf->tb_units__DOT__t1 = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 7327159641733885287ull);
    vlSelf->tb_units__DOT__t2 = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 3758891630722576742ull);
    vlSelf->tb_units__DOT__t3 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17317835820364775125ull);
    vlSelf->tb_units__DOT__u1 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 3931160711651841717ull);
    vlSelf->tb_units__DOT__u2 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2619640267376527736ull);
    vlSelf->tb_units__DOT__u3 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6936093577745750809ull);
    vlSelf->tb_units__DOT__u_add__DOT__result = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5753006472886761909ull);
    vlSelf->tb_units__DOT__u_mul__DOT__result = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12453596003778889637ull);
    vlSelf->__VstlTriggered[0] = 0;
    VL_UNPACKED_FILL(vlSelf->__VstlTriggered.data(), sizeof(vlSelf->__VstlTriggered[0]), 1);
    vlSelf->__VicoTriggered[0] = 0;
    VL_UNPACKED_FILL(vlSelf->__VicoTriggered.data(), sizeof(vlSelf->__VicoTriggered[0]), 1);
    vlSelf->__VactTriggered[0] = 0;
    VL_UNPACKED_FILL(vlSelf->__VactTriggered.data(), sizeof(vlSelf->__VactTriggered[0]), 1);
    vlSelf->__VactTriggeredAcc[0] = 0;
    VL_UNPACKED_FILL(vlSelf->__VactTriggeredAcc.data(), sizeof(vlSelf->__VactTriggeredAcc[0]), 1);
    vlSelf->__VnbaTriggered[0] = 0;
    VL_UNPACKED_FILL(vlSelf->__VnbaTriggered.data(), sizeof(vlSelf->__VnbaTriggered[0]), 1);
    vlSelf->__Vi = 0;
}
