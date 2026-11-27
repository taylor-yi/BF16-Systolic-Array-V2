// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_mini_tpu.h for the primary calling header

#include "Vtb_mini_tpu__pch.h"

void Vtb_mini_tpu___024root___timing_ready(Vtb_mini_tpu___024root* vlSelf);

VL_ATTR_COLD void Vtb_mini_tpu___024root___eval_static(Vtb_mini_tpu___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_mini_tpu___024root___eval_static\n"); );
    Vtb_mini_tpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    {
        // Inlined CFunc: _eval_static__TOP
        vlSelfRef.tb_mini_tpu__DOT__clk = 0U;
        vlSelfRef.tb_mini_tpu__DOT__rst = 0U;
        vlSelfRef.tb_mini_tpu__DOT__start = 0U;
        vlSelfRef.tb_mini_tpu__DOT__a_flat = 0ULL;
        vlSelfRef.tb_mini_tpu__DOT__b_flat = 0ULL;
        vlSelfRef.tb_mini_tpu__DOT__TOL = 0U;
        vlSelfRef.tb_mini_tpu__DOT__MAXERR = 0x00000014U;
        vlSelfRef.tb_mini_tpu__DOT__tests = 0U;
        vlSelfRef.tb_mini_tpu__DOT__bad_tests = 0U;
        vlSelfRef.tb_mini_tpu__DOT__bad_cells = 0U;
        vlSelfRef.tb_mini_tpu__DOT__max_ulp = 0U;
        vlSelfRef.tb_mini_tpu__DOT__unnamedblk9__DOT__ok = 0U;
    }
    vlSelfRef.__Vtrigprevexpr___TOP__tb_mini_tpu__DOT__clk__0 = 0U;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_mini_tpu__DOT__rst__0 = 0U;
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
    Vtb_mini_tpu___024root___timing_ready(vlSelf);
    do {
        vlSelfRef.__VactTriggeredAcc[vlSelfRef.__Vi] 
            = vlSelfRef.__VactTriggered[vlSelfRef.__Vi];
        vlSelfRef.__Vi = ((::IData)(1U) + vlSelfRef.__Vi);
    } while ((0U >= vlSelfRef.__Vi));
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_mini_tpu___024root___dump_triggers__stl(const ::VlUnpacked<::QData/*63:0*/, 1> &triggers, const ::std::string &tag);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vtb_mini_tpu___024root___trigger_anySet__stl(const ::VlUnpacked<::QData/*63:0*/, 1> &in);
VL_ATTR_COLD void Vtb_mini_tpu_processing_element___stl_comb__TOP__tb_mini_tpu__DOT__dut__DOT__u_array__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__pe__0(Vtb_mini_tpu_processing_element* vlSelf);
VL_ATTR_COLD void Vtb_mini_tpu_processing_element___stl_comb__TOP__tb_mini_tpu__DOT__dut__DOT__u_array__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__pe__0(Vtb_mini_tpu_processing_element* vlSelf);
VL_ATTR_COLD void Vtb_mini_tpu_processing_element___stl_comb__TOP__tb_mini_tpu__DOT__dut__DOT__u_array__DOT__row__BRA__0__KET____DOT__col__BRA__2__KET____DOT__pe__0(Vtb_mini_tpu_processing_element* vlSelf);
VL_ATTR_COLD void Vtb_mini_tpu_processing_element___stl_comb__TOP__tb_mini_tpu__DOT__dut__DOT__u_array__DOT__row__BRA__0__KET____DOT__col__BRA__3__KET____DOT__pe__0(Vtb_mini_tpu_processing_element* vlSelf);
VL_ATTR_COLD void Vtb_mini_tpu_processing_element___stl_comb__TOP__tb_mini_tpu__DOT__dut__DOT__u_array__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__pe__0(Vtb_mini_tpu_processing_element* vlSelf);
VL_ATTR_COLD void Vtb_mini_tpu_processing_element___stl_comb__TOP__tb_mini_tpu__DOT__dut__DOT__u_array__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__pe__0(Vtb_mini_tpu_processing_element* vlSelf);
VL_ATTR_COLD void Vtb_mini_tpu_processing_element___stl_comb__TOP__tb_mini_tpu__DOT__dut__DOT__u_array__DOT__row__BRA__1__KET____DOT__col__BRA__2__KET____DOT__pe__0(Vtb_mini_tpu_processing_element* vlSelf);
VL_ATTR_COLD void Vtb_mini_tpu_processing_element___stl_comb__TOP__tb_mini_tpu__DOT__dut__DOT__u_array__DOT__row__BRA__1__KET____DOT__col__BRA__3__KET____DOT__pe__0(Vtb_mini_tpu_processing_element* vlSelf);
VL_ATTR_COLD void Vtb_mini_tpu_processing_element___stl_comb__TOP__tb_mini_tpu__DOT__dut__DOT__u_array__DOT__row__BRA__2__KET____DOT__col__BRA__0__KET____DOT__pe__0(Vtb_mini_tpu_processing_element* vlSelf);
VL_ATTR_COLD void Vtb_mini_tpu_processing_element___stl_comb__TOP__tb_mini_tpu__DOT__dut__DOT__u_array__DOT__row__BRA__2__KET____DOT__col__BRA__1__KET____DOT__pe__0(Vtb_mini_tpu_processing_element* vlSelf);
VL_ATTR_COLD void Vtb_mini_tpu_processing_element___stl_comb__TOP__tb_mini_tpu__DOT__dut__DOT__u_array__DOT__row__BRA__2__KET____DOT__col__BRA__2__KET____DOT__pe__0(Vtb_mini_tpu_processing_element* vlSelf);
VL_ATTR_COLD void Vtb_mini_tpu_processing_element___stl_comb__TOP__tb_mini_tpu__DOT__dut__DOT__u_array__DOT__row__BRA__2__KET____DOT__col__BRA__3__KET____DOT__pe__0(Vtb_mini_tpu_processing_element* vlSelf);
VL_ATTR_COLD void Vtb_mini_tpu_processing_element___stl_comb__TOP__tb_mini_tpu__DOT__dut__DOT__u_array__DOT__row__BRA__3__KET____DOT__col__BRA__0__KET____DOT__pe__0(Vtb_mini_tpu_processing_element* vlSelf);
VL_ATTR_COLD void Vtb_mini_tpu_processing_element___stl_comb__TOP__tb_mini_tpu__DOT__dut__DOT__u_array__DOT__row__BRA__3__KET____DOT__col__BRA__1__KET____DOT__pe__0(Vtb_mini_tpu_processing_element* vlSelf);
VL_ATTR_COLD void Vtb_mini_tpu_processing_element___stl_comb__TOP__tb_mini_tpu__DOT__dut__DOT__u_array__DOT__row__BRA__3__KET____DOT__col__BRA__2__KET____DOT__pe__0(Vtb_mini_tpu_processing_element* vlSelf);
VL_ATTR_COLD void Vtb_mini_tpu_processing_element___stl_comb__TOP__tb_mini_tpu__DOT__dut__DOT__u_array__DOT__row__BRA__3__KET____DOT__col__BRA__3__KET____DOT__pe__0(Vtb_mini_tpu_processing_element* vlSelf);
VL_ATTR_COLD void Vtb_mini_tpu_processing_element___stl_comb__TOP__tb_mini_tpu__DOT__dut__DOT__u_array__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__pe__1(Vtb_mini_tpu_processing_element* vlSelf);
VL_ATTR_COLD void Vtb_mini_tpu_processing_element___stl_comb__TOP__tb_mini_tpu__DOT__dut__DOT__u_array__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__pe__1(Vtb_mini_tpu_processing_element* vlSelf);
VL_ATTR_COLD void Vtb_mini_tpu_processing_element___stl_comb__TOP__tb_mini_tpu__DOT__dut__DOT__u_array__DOT__row__BRA__0__KET____DOT__col__BRA__2__KET____DOT__pe__1(Vtb_mini_tpu_processing_element* vlSelf);
void Vtb_mini_tpu_processing_element___nba_comb__TOP__tb_mini_tpu__DOT__dut__DOT__u_array__DOT__row__BRA__0__KET____DOT__col__BRA__3__KET____DOT__pe__3(Vtb_mini_tpu_processing_element* vlSelf);
void Vtb_mini_tpu_processing_element___nba_comb__TOP__tb_mini_tpu__DOT__dut__DOT__u_array__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__pe__2(Vtb_mini_tpu_processing_element* vlSelf);
void Vtb_mini_tpu_processing_element___nba_comb__TOP__tb_mini_tpu__DOT__dut__DOT__u_array__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__pe__2(Vtb_mini_tpu_processing_element* vlSelf);
void Vtb_mini_tpu_processing_element___nba_comb__TOP__tb_mini_tpu__DOT__dut__DOT__u_array__DOT__row__BRA__1__KET____DOT__col__BRA__2__KET____DOT__pe__2(Vtb_mini_tpu_processing_element* vlSelf);
void Vtb_mini_tpu_processing_element___nba_comb__TOP__tb_mini_tpu__DOT__dut__DOT__u_array__DOT__row__BRA__1__KET____DOT__col__BRA__3__KET____DOT__pe__2(Vtb_mini_tpu_processing_element* vlSelf);
void Vtb_mini_tpu_processing_element___nba_comb__TOP__tb_mini_tpu__DOT__dut__DOT__u_array__DOT__row__BRA__2__KET____DOT__col__BRA__0__KET____DOT__pe__2(Vtb_mini_tpu_processing_element* vlSelf);
void Vtb_mini_tpu_processing_element___nba_comb__TOP__tb_mini_tpu__DOT__dut__DOT__u_array__DOT__row__BRA__2__KET____DOT__col__BRA__1__KET____DOT__pe__2(Vtb_mini_tpu_processing_element* vlSelf);
void Vtb_mini_tpu_processing_element___nba_comb__TOP__tb_mini_tpu__DOT__dut__DOT__u_array__DOT__row__BRA__2__KET____DOT__col__BRA__2__KET____DOT__pe__2(Vtb_mini_tpu_processing_element* vlSelf);
void Vtb_mini_tpu_processing_element___nba_comb__TOP__tb_mini_tpu__DOT__dut__DOT__u_array__DOT__row__BRA__2__KET____DOT__col__BRA__3__KET____DOT__pe__2(Vtb_mini_tpu_processing_element* vlSelf);

VL_ATTR_COLD bool Vtb_mini_tpu___024root___eval_stl(Vtb_mini_tpu___024root* vlSelf, ::CData/*0:0*/ firstIteration) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_mini_tpu___024root___eval_stl\n"); );
    Vtb_mini_tpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    ::CData/*0:0*/ __VstlExecute;
    // Body
    vlSelfRef.__VstlTriggered[0U] = ((0xfffffffffffffffeULL 
                                      & vlSelfRef.__VstlTriggered[0U]) 
                                     | (::IData)((::IData)(firstIteration)));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtb_mini_tpu___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
    }
#endif
    __VstlExecute = Vtb_mini_tpu___024root___trigger_anySet__stl(vlSelfRef.__VstlTriggered);
    if (__VstlExecute) {
        {
            // Inlined CFunc: _eval_body__stl
            if ((((1ULL & vlSelfRef.__VstlTriggered[0U])) != 0ULL)) {
                Vtb_mini_tpu_processing_element___stl_comb__TOP__tb_mini_tpu__DOT__dut__DOT__u_array__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__pe__0((&vlSymsp->vlInst.TOP__tb_mini_tpu__DOT__dut__DOT__u_array__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__pe));
                Vtb_mini_tpu_processing_element___stl_comb__TOP__tb_mini_tpu__DOT__dut__DOT__u_array__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__pe__0((&vlSymsp->vlInst.TOP__tb_mini_tpu__DOT__dut__DOT__u_array__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__pe));
                Vtb_mini_tpu_processing_element___stl_comb__TOP__tb_mini_tpu__DOT__dut__DOT__u_array__DOT__row__BRA__0__KET____DOT__col__BRA__2__KET____DOT__pe__0((&vlSymsp->vlInst.TOP__tb_mini_tpu__DOT__dut__DOT__u_array__DOT__row__BRA__0__KET____DOT__col__BRA__2__KET____DOT__pe));
                Vtb_mini_tpu_processing_element___stl_comb__TOP__tb_mini_tpu__DOT__dut__DOT__u_array__DOT__row__BRA__0__KET____DOT__col__BRA__3__KET____DOT__pe__0((&vlSymsp->vlInst.TOP__tb_mini_tpu__DOT__dut__DOT__u_array__DOT__row__BRA__0__KET____DOT__col__BRA__3__KET____DOT__pe));
                Vtb_mini_tpu_processing_element___stl_comb__TOP__tb_mini_tpu__DOT__dut__DOT__u_array__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__pe__0((&vlSymsp->vlInst.TOP__tb_mini_tpu__DOT__dut__DOT__u_array__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__pe));
                Vtb_mini_tpu_processing_element___stl_comb__TOP__tb_mini_tpu__DOT__dut__DOT__u_array__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__pe__0((&vlSymsp->vlInst.TOP__tb_mini_tpu__DOT__dut__DOT__u_array__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__pe));
                Vtb_mini_tpu_processing_element___stl_comb__TOP__tb_mini_tpu__DOT__dut__DOT__u_array__DOT__row__BRA__1__KET____DOT__col__BRA__2__KET____DOT__pe__0((&vlSymsp->vlInst.TOP__tb_mini_tpu__DOT__dut__DOT__u_array__DOT__row__BRA__1__KET____DOT__col__BRA__2__KET____DOT__pe));
                Vtb_mini_tpu_processing_element___stl_comb__TOP__tb_mini_tpu__DOT__dut__DOT__u_array__DOT__row__BRA__1__KET____DOT__col__BRA__3__KET____DOT__pe__0((&vlSymsp->vlInst.TOP__tb_mini_tpu__DOT__dut__DOT__u_array__DOT__row__BRA__1__KET____DOT__col__BRA__3__KET____DOT__pe));
                Vtb_mini_tpu_processing_element___stl_comb__TOP__tb_mini_tpu__DOT__dut__DOT__u_array__DOT__row__BRA__2__KET____DOT__col__BRA__0__KET____DOT__pe__0((&vlSymsp->vlInst.TOP__tb_mini_tpu__DOT__dut__DOT__u_array__DOT__row__BRA__2__KET____DOT__col__BRA__0__KET____DOT__pe));
                Vtb_mini_tpu_processing_element___stl_comb__TOP__tb_mini_tpu__DOT__dut__DOT__u_array__DOT__row__BRA__2__KET____DOT__col__BRA__1__KET____DOT__pe__0((&vlSymsp->vlInst.TOP__tb_mini_tpu__DOT__dut__DOT__u_array__DOT__row__BRA__2__KET____DOT__col__BRA__1__KET____DOT__pe));
                Vtb_mini_tpu_processing_element___stl_comb__TOP__tb_mini_tpu__DOT__dut__DOT__u_array__DOT__row__BRA__2__KET____DOT__col__BRA__2__KET____DOT__pe__0((&vlSymsp->vlInst.TOP__tb_mini_tpu__DOT__dut__DOT__u_array__DOT__row__BRA__2__KET____DOT__col__BRA__2__KET____DOT__pe));
                Vtb_mini_tpu_processing_element___stl_comb__TOP__tb_mini_tpu__DOT__dut__DOT__u_array__DOT__row__BRA__2__KET____DOT__col__BRA__3__KET____DOT__pe__0((&vlSymsp->vlInst.TOP__tb_mini_tpu__DOT__dut__DOT__u_array__DOT__row__BRA__2__KET____DOT__col__BRA__3__KET____DOT__pe));
                Vtb_mini_tpu_processing_element___stl_comb__TOP__tb_mini_tpu__DOT__dut__DOT__u_array__DOT__row__BRA__3__KET____DOT__col__BRA__0__KET____DOT__pe__0((&vlSymsp->vlInst.TOP__tb_mini_tpu__DOT__dut__DOT__u_array__DOT__row__BRA__3__KET____DOT__col__BRA__0__KET____DOT__pe));
                Vtb_mini_tpu_processing_element___stl_comb__TOP__tb_mini_tpu__DOT__dut__DOT__u_array__DOT__row__BRA__3__KET____DOT__col__BRA__1__KET____DOT__pe__0((&vlSymsp->vlInst.TOP__tb_mini_tpu__DOT__dut__DOT__u_array__DOT__row__BRA__3__KET____DOT__col__BRA__1__KET____DOT__pe));
                Vtb_mini_tpu_processing_element___stl_comb__TOP__tb_mini_tpu__DOT__dut__DOT__u_array__DOT__row__BRA__3__KET____DOT__col__BRA__2__KET____DOT__pe__0((&vlSymsp->vlInst.TOP__tb_mini_tpu__DOT__dut__DOT__u_array__DOT__row__BRA__3__KET____DOT__col__BRA__2__KET____DOT__pe));
                Vtb_mini_tpu_processing_element___stl_comb__TOP__tb_mini_tpu__DOT__dut__DOT__u_array__DOT__row__BRA__3__KET____DOT__col__BRA__3__KET____DOT__pe__0((&vlSymsp->vlInst.TOP__tb_mini_tpu__DOT__dut__DOT__u_array__DOT__row__BRA__3__KET____DOT__col__BRA__3__KET____DOT__pe));
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
                Vtb_mini_tpu_processing_element___stl_comb__TOP__tb_mini_tpu__DOT__dut__DOT__u_array__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__pe__1((&vlSymsp->vlInst.TOP__tb_mini_tpu__DOT__dut__DOT__u_array__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__pe));
                Vtb_mini_tpu_processing_element___stl_comb__TOP__tb_mini_tpu__DOT__dut__DOT__u_array__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__pe__1((&vlSymsp->vlInst.TOP__tb_mini_tpu__DOT__dut__DOT__u_array__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__pe));
                Vtb_mini_tpu_processing_element___stl_comb__TOP__tb_mini_tpu__DOT__dut__DOT__u_array__DOT__row__BRA__0__KET____DOT__col__BRA__2__KET____DOT__pe__1((&vlSymsp->vlInst.TOP__tb_mini_tpu__DOT__dut__DOT__u_array__DOT__row__BRA__0__KET____DOT__col__BRA__2__KET____DOT__pe));
                Vtb_mini_tpu_processing_element___nba_comb__TOP__tb_mini_tpu__DOT__dut__DOT__u_array__DOT__row__BRA__0__KET____DOT__col__BRA__3__KET____DOT__pe__3((&vlSymsp->vlInst.TOP__tb_mini_tpu__DOT__dut__DOT__u_array__DOT__row__BRA__0__KET____DOT__col__BRA__3__KET____DOT__pe));
                Vtb_mini_tpu_processing_element___nba_comb__TOP__tb_mini_tpu__DOT__dut__DOT__u_array__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__pe__2((&vlSymsp->vlInst.TOP__tb_mini_tpu__DOT__dut__DOT__u_array__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__pe));
                Vtb_mini_tpu_processing_element___nba_comb__TOP__tb_mini_tpu__DOT__dut__DOT__u_array__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__pe__2((&vlSymsp->vlInst.TOP__tb_mini_tpu__DOT__dut__DOT__u_array__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__pe));
                Vtb_mini_tpu_processing_element___nba_comb__TOP__tb_mini_tpu__DOT__dut__DOT__u_array__DOT__row__BRA__1__KET____DOT__col__BRA__2__KET____DOT__pe__2((&vlSymsp->vlInst.TOP__tb_mini_tpu__DOT__dut__DOT__u_array__DOT__row__BRA__1__KET____DOT__col__BRA__2__KET____DOT__pe));
                Vtb_mini_tpu_processing_element___nba_comb__TOP__tb_mini_tpu__DOT__dut__DOT__u_array__DOT__row__BRA__1__KET____DOT__col__BRA__3__KET____DOT__pe__2((&vlSymsp->vlInst.TOP__tb_mini_tpu__DOT__dut__DOT__u_array__DOT__row__BRA__1__KET____DOT__col__BRA__3__KET____DOT__pe));
                Vtb_mini_tpu_processing_element___nba_comb__TOP__tb_mini_tpu__DOT__dut__DOT__u_array__DOT__row__BRA__2__KET____DOT__col__BRA__0__KET____DOT__pe__2((&vlSymsp->vlInst.TOP__tb_mini_tpu__DOT__dut__DOT__u_array__DOT__row__BRA__2__KET____DOT__col__BRA__0__KET____DOT__pe));
                Vtb_mini_tpu_processing_element___nba_comb__TOP__tb_mini_tpu__DOT__dut__DOT__u_array__DOT__row__BRA__2__KET____DOT__col__BRA__1__KET____DOT__pe__2((&vlSymsp->vlInst.TOP__tb_mini_tpu__DOT__dut__DOT__u_array__DOT__row__BRA__2__KET____DOT__col__BRA__1__KET____DOT__pe));
                Vtb_mini_tpu_processing_element___nba_comb__TOP__tb_mini_tpu__DOT__dut__DOT__u_array__DOT__row__BRA__2__KET____DOT__col__BRA__2__KET____DOT__pe__2((&vlSymsp->vlInst.TOP__tb_mini_tpu__DOT__dut__DOT__u_array__DOT__row__BRA__2__KET____DOT__col__BRA__2__KET____DOT__pe));
                Vtb_mini_tpu_processing_element___nba_comb__TOP__tb_mini_tpu__DOT__dut__DOT__u_array__DOT__row__BRA__2__KET____DOT__col__BRA__3__KET____DOT__pe__2((&vlSymsp->vlInst.TOP__tb_mini_tpu__DOT__dut__DOT__u_array__DOT__row__BRA__2__KET____DOT__col__BRA__3__KET____DOT__pe));
            }
        }
    }
    return (__VstlExecute);
}

VL_ATTR_COLD void Vtb_mini_tpu___024root___eval_dump_triggers__stl(Vtb_mini_tpu___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_mini_tpu___024root___eval_dump_triggers__stl\n"); );
    Vtb_mini_tpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
#ifdef VL_DEBUG
    Vtb_mini_tpu___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
#endif
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_mini_tpu___024root___dump_triggers__ico(const ::VlUnpacked<::QData/*63:0*/, 1> &triggers, const ::std::string &tag);
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtb_mini_tpu___024root___eval_dump_triggers__ico(Vtb_mini_tpu___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_mini_tpu___024root___eval_dump_triggers__ico\n"); );
    Vtb_mini_tpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
#ifdef VL_DEBUG
    Vtb_mini_tpu___024root___dump_triggers__ico(vlSelfRef.__VicoTriggered, "ico"s);
#endif
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_mini_tpu___024root___dump_triggers__act(const ::VlUnpacked<::QData/*63:0*/, 1> &triggers, const ::std::string &tag);
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtb_mini_tpu___024root___eval_dump_triggers__act(Vtb_mini_tpu___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_mini_tpu___024root___eval_dump_triggers__act\n"); );
    Vtb_mini_tpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
#ifdef VL_DEBUG
    Vtb_mini_tpu___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
#endif
}

VL_ATTR_COLD void Vtb_mini_tpu___024root___eval_dump_triggers__nba(Vtb_mini_tpu___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_mini_tpu___024root___eval_dump_triggers__nba\n"); );
    Vtb_mini_tpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
#ifdef VL_DEBUG
    Vtb_mini_tpu___024root___dump_triggers__act(vlSelfRef.__VnbaTriggered, "nba"s);
#endif
}

VL_ATTR_COLD void Vtb_mini_tpu___024root___eval_dump_triggers__obs(Vtb_mini_tpu___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_mini_tpu___024root___eval_dump_triggers__obs\n"); );
    Vtb_mini_tpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vtb_mini_tpu___024root___eval_dump_triggers__react(Vtb_mini_tpu___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_mini_tpu___024root___eval_dump_triggers__react\n"); );
    Vtb_mini_tpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vtb_mini_tpu___024root___eval_final(Vtb_mini_tpu___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_mini_tpu___024root___eval_final\n"); );
    Vtb_mini_tpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_mini_tpu___024root___dump_triggers__stl(const ::VlUnpacked<::QData/*63:0*/, 1> &triggers, const ::std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_mini_tpu___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (::IData)(Vtb_mini_tpu___024root___trigger_anySet__stl(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (::IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD bool Vtb_mini_tpu___024root___trigger_anySet__stl(const ::VlUnpacked<::QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_mini_tpu___024root___trigger_anySet__stl\n"); );
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

bool Vtb_mini_tpu___024root___trigger_anySet__ico(const ::VlUnpacked<::QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_mini_tpu___024root___dump_triggers__ico(const ::VlUnpacked<::QData/*63:0*/, 1> &triggers, const ::std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_mini_tpu___024root___dump_triggers__ico\n"); );
    // Body
    if ((1U & (~ (::IData)(Vtb_mini_tpu___024root___trigger_anySet__ico(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (::IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: Internal 'ico' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

bool Vtb_mini_tpu___024root___trigger_anySet__act(const ::VlUnpacked<::QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_mini_tpu___024root___dump_triggers__act(const ::VlUnpacked<::QData/*63:0*/, 1> &triggers, const ::std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_mini_tpu___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (::IData)(Vtb_mini_tpu___024root___trigger_anySet__act(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (::IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: @(posedge tb_mini_tpu.clk)\n");
    }
    if ((1U & (::IData)((triggers[0U] >> 1U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 1 is active: @(negedge tb_mini_tpu.rst)\n");
    }
    if ((1U & (::IData)((triggers[0U] >> 2U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 2 is active: @(negedge tb_mini_tpu.dut.u_rst_core.q)\n");
    }
    if ((1U & (::IData)((triggers[0U] >> 3U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 3 is active: @(negedge tb_mini_tpu.dut.genblk1[0].u_rst.q)\n");
    }
    if ((1U & (::IData)((triggers[0U] >> 4U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 4 is active: @(negedge tb_mini_tpu.dut.genblk1[1].u_rst.q)\n");
    }
    if ((1U & (::IData)((triggers[0U] >> 5U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 5 is active: @(negedge tb_mini_tpu.dut.genblk1[2].u_rst.q)\n");
    }
    if ((1U & (::IData)((triggers[0U] >> 6U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 6 is active: @(negedge tb_mini_tpu.dut.genblk1[3].u_rst.q)\n");
    }
    if ((1U & (::IData)((triggers[0U] >> 7U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 7 is active: @(negedge tb_mini_tpu.clk)\n");
    }
    if ((1U & (::IData)((triggers[0U] >> 8U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 8 is active: @( tb_mini_tpu.dut.u_ctrl.done)\n");
    }
    if ((1U & (::IData)((triggers[0U] >> 9U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 9 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtb_mini_tpu___024root___ctor_var_reset(Vtb_mini_tpu___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_mini_tpu___024root___ctor_var_reset\n"); );
    Vtb_mini_tpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->vlNamep);
    vlSelf->tb_mini_tpu__DOT__A__BRA__0__KET__[0] = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 14123545653027737731ull);
    VL_UNPACKED_FILL(vlSelf->tb_mini_tpu__DOT__A__BRA__0__KET__.data(), sizeof(vlSelf->tb_mini_tpu__DOT__A__BRA__0__KET__[0]), 4);
    vlSelf->tb_mini_tpu__DOT__A__BRA__1__KET__[0] = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 3537159230801874336ull);
    VL_UNPACKED_FILL(vlSelf->tb_mini_tpu__DOT__A__BRA__1__KET__.data(), sizeof(vlSelf->tb_mini_tpu__DOT__A__BRA__1__KET__[0]), 4);
    vlSelf->tb_mini_tpu__DOT__A__BRA__2__KET__[0] = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 12824929092405866562ull);
    VL_UNPACKED_FILL(vlSelf->tb_mini_tpu__DOT__A__BRA__2__KET__.data(), sizeof(vlSelf->tb_mini_tpu__DOT__A__BRA__2__KET__[0]), 4);
    vlSelf->tb_mini_tpu__DOT__A__BRA__3__KET__[0] = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 17941163502232868805ull);
    VL_UNPACKED_FILL(vlSelf->tb_mini_tpu__DOT__A__BRA__3__KET__.data(), sizeof(vlSelf->tb_mini_tpu__DOT__A__BRA__3__KET__[0]), 4);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->tb_mini_tpu__DOT__B[__Vi0][0] = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 498317752105148070ull);
        VL_UNPACKED_FILL(vlSelf->tb_mini_tpu__DOT__B[__Vi0].data(), sizeof(vlSelf->tb_mini_tpu__DOT__B[__Vi0][0]), 4);
    }
    vlSelf->tb_mini_tpu__DOT__C_exp__BRA__0__KET____BRA__0__KET__ = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 7252201246568138902ull);
    vlSelf->tb_mini_tpu__DOT__C_exp__BRA__0__KET____BRA__1__KET__ = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 15880260227215749410ull);
    vlSelf->tb_mini_tpu__DOT__C_exp__BRA__0__KET____BRA__2__KET__ = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 17637609744464274423ull);
    vlSelf->tb_mini_tpu__DOT__C_exp__BRA__0__KET____BRA__3__KET__ = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 5989962203420352613ull);
    vlSelf->tb_mini_tpu__DOT__C_exp__BRA__1__KET____BRA__0__KET__ = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 1204181136859836932ull);
    vlSelf->tb_mini_tpu__DOT__C_exp__BRA__1__KET____BRA__1__KET__ = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 9152766820946877614ull);
    vlSelf->tb_mini_tpu__DOT__C_exp__BRA__1__KET____BRA__2__KET__ = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 13433818800751164635ull);
    vlSelf->tb_mini_tpu__DOT__C_exp__BRA__1__KET____BRA__3__KET__ = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 1856708940714560905ull);
    vlSelf->tb_mini_tpu__DOT__C_exp__BRA__2__KET____BRA__0__KET__ = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 17017587852541289171ull);
    vlSelf->tb_mini_tpu__DOT__C_exp__BRA__2__KET____BRA__1__KET__ = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 157994534406243043ull);
    vlSelf->tb_mini_tpu__DOT__C_exp__BRA__2__KET____BRA__2__KET__ = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 13175050982424976941ull);
    vlSelf->tb_mini_tpu__DOT__C_exp__BRA__2__KET____BRA__3__KET__ = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 8389528871893572260ull);
    vlSelf->tb_mini_tpu__DOT__C_exp__BRA__3__KET____BRA__0__KET__ = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 13654665841268167421ull);
    vlSelf->tb_mini_tpu__DOT__C_exp__BRA__3__KET____BRA__1__KET__ = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 258841856065436229ull);
    vlSelf->tb_mini_tpu__DOT__C_exp__BRA__3__KET____BRA__2__KET__ = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 310846807356493313ull);
    vlSelf->tb_mini_tpu__DOT__C_exp__BRA__3__KET____BRA__3__KET__ = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 18105063077211384460ull);
    vlSelf->tb_mini_tpu__DOT__dut__DOT__u_array__DOT__result_out = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 18437610831016962101ull);
    vlSelf->tb_mini_tpu__DOT__dut__DOT__genblk1__BRA__3__KET____DOT__u_rst__DOT__s1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15885018370324490469ull);
    vlSelf->tb_mini_tpu__DOT__dut__DOT__genblk1__BRA__3__KET____DOT__u_rst__DOT__q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10655502009069948605ull);
    vlSelf->tb_mini_tpu__DOT__dut__DOT__genblk1__BRA__2__KET____DOT__u_rst__DOT__s1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 147528602538704775ull);
    vlSelf->tb_mini_tpu__DOT__dut__DOT__genblk1__BRA__2__KET____DOT__u_rst__DOT__q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6906084093843633622ull);
    vlSelf->tb_mini_tpu__DOT__dut__DOT__genblk1__BRA__1__KET____DOT__u_rst__DOT__s1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17859554711111341568ull);
    vlSelf->tb_mini_tpu__DOT__dut__DOT__genblk1__BRA__1__KET____DOT__u_rst__DOT__q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9242053637606703923ull);
    vlSelf->tb_mini_tpu__DOT__dut__DOT__genblk1__BRA__0__KET____DOT__u_rst__DOT__s1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3005774758263153236ull);
    vlSelf->tb_mini_tpu__DOT__dut__DOT__genblk1__BRA__0__KET____DOT__u_rst__DOT__q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15308968603645949731ull);
    vlSelf->tb_mini_tpu__DOT__dut__DOT__u_rst_core__DOT__s1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16107784193205764126ull);
    vlSelf->tb_mini_tpu__DOT__dut__DOT__u_rst_core__DOT__q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12021183671052584069ull);
    vlSelf->tb_mini_tpu__DOT__dut__DOT__u_mem__DOT__result_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18235699757492031076ull);
    vlSelf->tb_mini_tpu__DOT__dut__DOT__u_mem__DOT__result_matrix__BRA__0__KET____BRA__0__KET__ = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 16576699707166800725ull);
    vlSelf->tb_mini_tpu__DOT__dut__DOT__u_mem__DOT__result_matrix__BRA__0__KET____BRA__1__KET__ = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 14035855570567643182ull);
    vlSelf->tb_mini_tpu__DOT__dut__DOT__u_mem__DOT__result_matrix__BRA__0__KET____BRA__2__KET__ = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 8676684790531586157ull);
    vlSelf->tb_mini_tpu__DOT__dut__DOT__u_mem__DOT__result_matrix__BRA__0__KET____BRA__3__KET__ = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 8126374651625544848ull);
    vlSelf->tb_mini_tpu__DOT__dut__DOT__u_mem__DOT__result_matrix__BRA__1__KET____BRA__0__KET__ = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 7152702032461636183ull);
    vlSelf->tb_mini_tpu__DOT__dut__DOT__u_mem__DOT__result_matrix__BRA__1__KET____BRA__1__KET__ = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 2442979945735497219ull);
    vlSelf->tb_mini_tpu__DOT__dut__DOT__u_mem__DOT__result_matrix__BRA__1__KET____BRA__2__KET__ = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 6673985605907682939ull);
    vlSelf->tb_mini_tpu__DOT__dut__DOT__u_mem__DOT__result_matrix__BRA__1__KET____BRA__3__KET__ = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 16557177268432994133ull);
    vlSelf->tb_mini_tpu__DOT__dut__DOT__u_mem__DOT__result_matrix__BRA__2__KET____BRA__0__KET__ = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 9842693024656466660ull);
    vlSelf->tb_mini_tpu__DOT__dut__DOT__u_mem__DOT__result_matrix__BRA__2__KET____BRA__1__KET__ = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 879811255331986976ull);
    vlSelf->tb_mini_tpu__DOT__dut__DOT__u_mem__DOT__result_matrix__BRA__2__KET____BRA__2__KET__ = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 5063261271001327365ull);
    vlSelf->tb_mini_tpu__DOT__dut__DOT__u_mem__DOT__result_matrix__BRA__2__KET____BRA__3__KET__ = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 9710728535698167265ull);
    vlSelf->tb_mini_tpu__DOT__dut__DOT__u_mem__DOT__result_matrix__BRA__3__KET____BRA__0__KET__ = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 13730405736613052766ull);
    vlSelf->tb_mini_tpu__DOT__dut__DOT__u_mem__DOT__result_matrix__BRA__3__KET____BRA__1__KET__ = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 8223411718037207323ull);
    vlSelf->tb_mini_tpu__DOT__dut__DOT__u_mem__DOT__result_matrix__BRA__3__KET____BRA__2__KET__ = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 12875878878305240084ull);
    vlSelf->tb_mini_tpu__DOT__dut__DOT__u_mem__DOT__result_matrix__BRA__3__KET____BRA__3__KET__ = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 654750748176632189ull);
    vlSelf->tb_mini_tpu__DOT__dut__DOT__u_mem__DOT__drain_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8992481213237600639ull);
    vlSelf->tb_mini_tpu__DOT__dut__DOT__u_mem__DOT__skew__BRA__0__KET____DOT__sr_a__BRA__0__KET__ = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 7359897548250572951ull);
    vlSelf->tb_mini_tpu__DOT__dut__DOT__u_mem__DOT__skew__BRA__0__KET____DOT__sr_b__BRA__0__KET__ = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 8145117579753505929ull);
    vlSelf->tb_mini_tpu__DOT__dut__DOT__u_mem__DOT__skew__BRA__1__KET____DOT__sr_a__BRA__0__KET__ = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 6579331292191676510ull);
    vlSelf->tb_mini_tpu__DOT__dut__DOT__u_mem__DOT__skew__BRA__1__KET____DOT__sr_a__BRA__1__KET__ = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 6003808884585675129ull);
    vlSelf->tb_mini_tpu__DOT__dut__DOT__u_mem__DOT__skew__BRA__1__KET____DOT__sr_b__BRA__0__KET__ = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 4499129494149674791ull);
    vlSelf->tb_mini_tpu__DOT__dut__DOT__u_mem__DOT__skew__BRA__1__KET____DOT__sr_b__BRA__1__KET__ = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 16106170669271200835ull);
    vlSelf->tb_mini_tpu__DOT__dut__DOT__u_mem__DOT__skew__BRA__2__KET____DOT__sr_a__BRA__0__KET__ = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 13919009334120638543ull);
    vlSelf->tb_mini_tpu__DOT__dut__DOT__u_mem__DOT__skew__BRA__2__KET____DOT__sr_a__BRA__1__KET__ = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 14476897321474755518ull);
    vlSelf->tb_mini_tpu__DOT__dut__DOT__u_mem__DOT__skew__BRA__2__KET____DOT__sr_a__BRA__2__KET__ = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 11858748667438295854ull);
    vlSelf->tb_mini_tpu__DOT__dut__DOT__u_mem__DOT__skew__BRA__2__KET____DOT__sr_b__BRA__0__KET__ = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 4530683062441636184ull);
    vlSelf->tb_mini_tpu__DOT__dut__DOT__u_mem__DOT__skew__BRA__2__KET____DOT__sr_b__BRA__1__KET__ = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 6161691450496919638ull);
    vlSelf->tb_mini_tpu__DOT__dut__DOT__u_mem__DOT__skew__BRA__2__KET____DOT__sr_b__BRA__2__KET__ = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 8202919586227947621ull);
    vlSelf->tb_mini_tpu__DOT__dut__DOT__u_mem__DOT__skew__BRA__3__KET____DOT__sr_a__BRA__0__KET__ = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 6957941767595319269ull);
    vlSelf->tb_mini_tpu__DOT__dut__DOT__u_mem__DOT__skew__BRA__3__KET____DOT__sr_a__BRA__1__KET__ = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 10041228456340712609ull);
    vlSelf->tb_mini_tpu__DOT__dut__DOT__u_mem__DOT__skew__BRA__3__KET____DOT__sr_a__BRA__2__KET__ = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 2558064090970238506ull);
    vlSelf->tb_mini_tpu__DOT__dut__DOT__u_mem__DOT__skew__BRA__3__KET____DOT__sr_a__BRA__3__KET__ = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 10977939214263133535ull);
    vlSelf->tb_mini_tpu__DOT__dut__DOT__u_mem__DOT__skew__BRA__3__KET____DOT__sr_b__BRA__0__KET__ = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 17889093690264224116ull);
    vlSelf->tb_mini_tpu__DOT__dut__DOT__u_mem__DOT__skew__BRA__3__KET____DOT__sr_b__BRA__1__KET__ = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 596026942116721538ull);
    vlSelf->tb_mini_tpu__DOT__dut__DOT__u_mem__DOT__skew__BRA__3__KET____DOT__sr_b__BRA__2__KET__ = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 7611014107136510579ull);
    vlSelf->tb_mini_tpu__DOT__dut__DOT__u_mem__DOT__skew__BRA__3__KET____DOT__sr_b__BRA__3__KET__ = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 15976784253980026133ull);
    vlSelf->tb_mini_tpu__DOT__dut__DOT__u_ctrl__DOT__done = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9613515621888992442ull);
    vlSelf->tb_mini_tpu__DOT__dut__DOT__u_ctrl__DOT__state = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 6295600492017487341ull);
    vlSelf->tb_mini_tpu__DOT__dut__DOT__u_ctrl__DOT__cycle_cnt = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 3633214893511818641ull);
    vlSelf->__Vdly__tb_mini_tpu__DOT__dut__DOT__u_ctrl__DOT__state_48 = 0;
    vlSelf->__VstlTriggered[0] = 0;
    VL_UNPACKED_FILL(vlSelf->__VstlTriggered.data(), sizeof(vlSelf->__VstlTriggered[0]), 1);
    vlSelf->__VicoTriggered[0] = 0;
    VL_UNPACKED_FILL(vlSelf->__VicoTriggered.data(), sizeof(vlSelf->__VicoTriggered[0]), 1);
    vlSelf->__VactTriggered[0] = 0;
    VL_UNPACKED_FILL(vlSelf->__VactTriggered.data(), sizeof(vlSelf->__VactTriggered[0]), 1);
    vlSelf->__VactTriggeredAcc[0] = 0;
    VL_UNPACKED_FILL(vlSelf->__VactTriggeredAcc.data(), sizeof(vlSelf->__VactTriggeredAcc[0]), 1);
    vlSelf->__Vtrigprevexpr___TOP__tb_mini_tpu__DOT__clk__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_mini_tpu__DOT__rst__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_mini_tpu__DOT__dut__DOT__u_rst_core__DOT__q__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_mini_tpu__DOT__dut__DOT__genblk1__BRA__0__KET____DOT__u_rst__DOT__q__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_mini_tpu__DOT__dut__DOT__genblk1__BRA__1__KET____DOT__u_rst__DOT__q__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_mini_tpu__DOT__dut__DOT__genblk1__BRA__2__KET____DOT__u_rst__DOT__q__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_mini_tpu__DOT__dut__DOT__genblk1__BRA__3__KET____DOT__u_rst__DOT__q__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_mini_tpu__DOT__dut__DOT__u_ctrl__DOT__done__0 = 0;
    vlSelf->__VnbaTriggered[0] = 0;
    VL_UNPACKED_FILL(vlSelf->__VnbaTriggered.data(), sizeof(vlSelf->__VnbaTriggered[0]), 1);
    vlSelf->__Vi = 0;
}
