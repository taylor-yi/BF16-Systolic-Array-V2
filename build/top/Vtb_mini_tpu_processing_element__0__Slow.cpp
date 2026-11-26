// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_mini_tpu.h for the primary calling header

#include "Vtb_mini_tpu__pch.h"

VL_ATTR_COLD void Vtb_mini_tpu_processing_element___stl_comb__TOP__tb_mini_tpu__DOT__dut__DOT__u_array__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__pe__0(Vtb_mini_tpu_processing_element* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_mini_tpu_processing_element___stl_comb__TOP__tb_mini_tpu__DOT__dut__DOT__u_array__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__pe__0\n"); );
    Vtb_mini_tpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    ::IData/*27:0*/ __Vdfg_Regularize_468;
    __Vdfg_Regularize_468 = 0;
    ::CData/*0:0*/ __Vdfg_Regularize_469;
    __Vdfg_Regularize_469 = 0;
    ::CData/*7:0*/ __Vdfg_Regularize_471;
    __Vdfg_Regularize_471 = 0;
    ::CData/*7:0*/ __Vdfg_Regularize_475;
    __Vdfg_Regularize_475 = 0;
    ::CData/*4:0*/ __Vdfg_Regularize_479;
    __Vdfg_Regularize_479 = 0;
    ::IData/*27:0*/ __Vdfg_Regularize_480;
    __Vdfg_Regularize_480 = 0;
    ::IData/*26:0*/ __Vdfg_Regularize_481;
    __Vdfg_Regularize_481 = 0;
    ::IData/*27:0*/ __Vdfg_Regularize_482;
    __Vdfg_Regularize_482 = 0;
    // Body
    vlSelfRef.__PVT__u_mul__DOT__a_inf = (::IData)(
                                                   (0x7f80U 
                                                    == 
                                                    (0x7fffU 
                                                     & (::IData)(vlSymsp->vlInst.TOP.tb_mini_tpu__DOT__dut__DOT__u_mem__DOT__skew__BRA__0__KET____DOT__sr_a__BRA__0__KET__))));
    vlSelfRef.__PVT__u_mul__DOT__b_inf = (::IData)(
                                                   (0x7f80U 
                                                    == 
                                                    (0x7fffU 
                                                     & (::IData)(vlSymsp->vlInst.TOP.tb_mini_tpu__DOT__dut__DOT__u_mem__DOT__skew__BRA__0__KET____DOT__sr_b__BRA__0__KET__))));
    vlSelfRef.__PVT__u_add__DOT__a_inf = (::IData)(
                                                   (0x7f800000U 
                                                    == 
                                                    (0x7fffffffU 
                                                     & vlSelfRef.__PVT__pipeline_register__DOT__out)));
    vlSelfRef.__PVT__u_add__DOT__b_inf = (::IData)(
                                                   (0x7f800000U 
                                                    == 
                                                    (0x7fffffffU 
                                                     & vlSelfRef.__PVT__accumulator)));
    vlSelfRef.__PVT__u_mul__DOT__prod = (0x0000ffffU 
                                         & ((0x00000080U 
                                             | (0x0000007fU 
                                                & (::IData)(vlSymsp->vlInst.TOP.tb_mini_tpu__DOT__dut__DOT__u_mem__DOT__skew__BRA__0__KET____DOT__sr_b__BRA__0__KET__))) 
                                            * (0x00000080U 
                                               | (0x0000007fU 
                                                  & (::IData)(vlSymsp->vlInst.TOP.tb_mini_tpu__DOT__dut__DOT__u_mem__DOT__skew__BRA__0__KET____DOT__sr_a__BRA__0__KET__)))));
    __Vdfg_Regularize_469 = ((0x7fffffffU & vlSelfRef.__PVT__pipeline_register__DOT__out) 
                             >= (0x7fffffffU & vlSelfRef.__PVT__accumulator));
    vlSelfRef.__Vdfg_Regularize_472 = (0x000007ffU 
                                       & ((((0x000000ffU 
                                             & ((::IData)(vlSymsp->vlInst.TOP.tb_mini_tpu__DOT__dut__DOT__u_mem__DOT__skew__BRA__0__KET____DOT__sr_b__BRA__0__KET__) 
                                                >> 7U)) 
                                            + (0x000000ffU 
                                               & ((::IData)(vlSymsp->vlInst.TOP.tb_mini_tpu__DOT__dut__DOT__u_mem__DOT__skew__BRA__0__KET____DOT__sr_a__BRA__0__KET__) 
                                                  >> 7U))) 
                                           - (::IData)(0x007fU)) 
                                          + (1U & (- (::IData)(
                                                               (1U 
                                                                & ((::IData)(vlSelfRef.__PVT__u_mul__DOT__prod) 
                                                                   >> 0x0000000fU)))))));
    if (__Vdfg_Regularize_469) {
        vlSelfRef.__Vdfg_Regularize_474 = (1U & (vlSelfRef.__PVT__pipeline_register__DOT__out 
                                                 >> 0x0000001fU));
        __Vdfg_Regularize_475 = (0x000000ffU & (vlSelfRef.__PVT__pipeline_register__DOT__out 
                                                >> 0x00000017U));
    } else {
        vlSelfRef.__Vdfg_Regularize_474 = (1U & (vlSelfRef.__PVT__accumulator 
                                                 >> 0x0000001fU));
        __Vdfg_Regularize_475 = (0x000000ffU & (vlSelfRef.__PVT__accumulator 
                                                >> 0x00000017U));
    }
    __Vdfg_Regularize_482 = (0x04000000U | (0x03fffff8U 
                                            & (((::IData)(__Vdfg_Regularize_469)
                                                 ? vlSelfRef.__PVT__pipeline_register__DOT__out
                                                 : vlSelfRef.__PVT__accumulator) 
                                               << 3U)));
    __Vdfg_Regularize_481 = (0x04000000U | (0x03fffff8U 
                                            & (((::IData)(__Vdfg_Regularize_469)
                                                 ? vlSelfRef.__PVT__accumulator
                                                 : vlSelfRef.__PVT__pipeline_register__DOT__out) 
                                               << 3U)));
    __Vdfg_Regularize_471 = (0x000000ffU & ((::IData)(__Vdfg_Regularize_475) 
                                            - ((::IData)(__Vdfg_Regularize_469)
                                                ? (vlSelfRef.__PVT__accumulator 
                                                   >> 0x00000017U)
                                                : (vlSelfRef.__PVT__pipeline_register__DOT__out 
                                                   >> 0x00000017U))));
    __Vdfg_Regularize_480 = ((0x1bU <= (::IData)(__Vdfg_Regularize_471))
                              ? 1U : (VL_SHIFTR_III(27,27,8, __Vdfg_Regularize_481, (::IData)(__Vdfg_Regularize_471)) 
                                      | (0U != ((VL_SHIFTL_III(27,27,8, (::IData)(1U), (::IData)(__Vdfg_Regularize_471)) 
                                                 - (::IData)(1U)) 
                                                & __Vdfg_Regularize_481))));
    __Vdfg_Regularize_468 = (0x0fffffffU & (((::IData)(vlSelfRef.__Vdfg_Regularize_474) 
                                             == (1U 
                                                 & ((::IData)(__Vdfg_Regularize_469)
                                                     ? 
                                                    (vlSelfRef.__PVT__accumulator 
                                                     >> 0x0000001fU)
                                                     : 
                                                    (vlSelfRef.__PVT__pipeline_register__DOT__out 
                                                     >> 0x0000001fU))))
                                             ? (__Vdfg_Regularize_480 
                                                + __Vdfg_Regularize_482)
                                             : (__Vdfg_Regularize_482 
                                                - __Vdfg_Regularize_480)));
    __Vdfg_Regularize_479 = (((0x02000000U & __Vdfg_Regularize_468)
                               ? 1U : ((0x01000000U 
                                        & __Vdfg_Regularize_468)
                                        ? 2U : ((0x00800000U 
                                                 & __Vdfg_Regularize_468)
                                                 ? 3U
                                                 : 
                                                ((0x00400000U 
                                                  & __Vdfg_Regularize_468)
                                                  ? 4U
                                                  : 
                                                 ((0x00200000U 
                                                   & __Vdfg_Regularize_468)
                                                   ? 5U
                                                   : 
                                                  ((0x00100000U 
                                                    & __Vdfg_Regularize_468)
                                                    ? 6U
                                                    : 
                                                   ((0x00080000U 
                                                     & __Vdfg_Regularize_468)
                                                     ? 7U
                                                     : 
                                                    ((0x00040000U 
                                                      & __Vdfg_Regularize_468)
                                                      ? 8U
                                                      : 
                                                     ((0x00020000U 
                                                       & __Vdfg_Regularize_468)
                                                       ? 9U
                                                       : 
                                                      ((0x00010000U 
                                                        & __Vdfg_Regularize_468)
                                                        ? 0x0aU
                                                        : 
                                                       ((0x00008000U 
                                                         & __Vdfg_Regularize_468)
                                                         ? 0x0bU
                                                         : 
                                                        ((0x00004000U 
                                                          & __Vdfg_Regularize_468)
                                                          ? 0x0cU
                                                          : 
                                                         ((0x00002000U 
                                                           & __Vdfg_Regularize_468)
                                                           ? 0x0dU
                                                           : 
                                                          ((0x00001000U 
                                                            & __Vdfg_Regularize_468)
                                                            ? 0x0eU
                                                            : 
                                                           ((0x00000800U 
                                                             & __Vdfg_Regularize_468)
                                                             ? 0x0fU
                                                             : 
                                                            ((0x00000400U 
                                                              & __Vdfg_Regularize_468)
                                                              ? 0x10U
                                                              : 
                                                             ((0x00000200U 
                                                               & __Vdfg_Regularize_468)
                                                               ? 0x11U
                                                               : 
                                                              ((0x00000100U 
                                                                & __Vdfg_Regularize_468)
                                                                ? 0x12U
                                                                : 
                                                               ((0x00000080U 
                                                                 & __Vdfg_Regularize_468)
                                                                 ? 0x13U
                                                                 : 
                                                                ((0x00000040U 
                                                                  & __Vdfg_Regularize_468)
                                                                  ? 0x14U
                                                                  : 
                                                                 ((0x00000020U 
                                                                   & __Vdfg_Regularize_468)
                                                                   ? 0x15U
                                                                   : 
                                                                  ((0x00000010U 
                                                                    & __Vdfg_Regularize_468)
                                                                    ? 0x16U
                                                                    : 
                                                                   ((8U 
                                                                     & __Vdfg_Regularize_468)
                                                                     ? 0x17U
                                                                     : 
                                                                    ((4U 
                                                                      & __Vdfg_Regularize_468)
                                                                      ? 0x18U
                                                                      : 
                                                                     ((2U 
                                                                       & __Vdfg_Regularize_468)
                                                                       ? 0x19U
                                                                       : 
                                                                      ((1U 
                                                                        & __Vdfg_Regularize_468)
                                                                        ? 0x1aU
                                                                        : 0x1bU)))))))))))))))))))))))))) 
                             & (- (::IData)((1U & (~ 
                                                   (__Vdfg_Regularize_468 
                                                    >> 0x0000001aU))))));
    if ((0x08000000U & __Vdfg_Regularize_468)) {
        vlSelfRef.__Vdfg_Regularize_476 = (0x07ffffffU 
                                           & ((__Vdfg_Regularize_468 
                                               >> 1U) 
                                              | (1U 
                                                 & __Vdfg_Regularize_468)));
        vlSelfRef.__Vdfg_Regularize_477 = (0x000003ffU 
                                           & ((::IData)(1U) 
                                              + (::IData)(__Vdfg_Regularize_475)));
    } else {
        vlSelfRef.__Vdfg_Regularize_476 = (0x07ffffffU 
                                           & (__Vdfg_Regularize_468 
                                              << (::IData)(__Vdfg_Regularize_479)));
        vlSelfRef.__Vdfg_Regularize_477 = (0x000003ffU 
                                           & ((::IData)(__Vdfg_Regularize_475) 
                                              - (::IData)(__Vdfg_Regularize_479)));
    }
}

VL_ATTR_COLD void Vtb_mini_tpu_processing_element___stl_comb__TOP__tb_mini_tpu__DOT__dut__DOT__u_array__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__pe__0(Vtb_mini_tpu_processing_element* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_mini_tpu_processing_element___stl_comb__TOP__tb_mini_tpu__DOT__dut__DOT__u_array__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__pe__0\n"); );
    Vtb_mini_tpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    ::IData/*27:0*/ __Vdfg_Regularize_468;
    __Vdfg_Regularize_468 = 0;
    ::CData/*0:0*/ __Vdfg_Regularize_469;
    __Vdfg_Regularize_469 = 0;
    ::CData/*7:0*/ __Vdfg_Regularize_471;
    __Vdfg_Regularize_471 = 0;
    ::CData/*7:0*/ __Vdfg_Regularize_475;
    __Vdfg_Regularize_475 = 0;
    ::CData/*4:0*/ __Vdfg_Regularize_479;
    __Vdfg_Regularize_479 = 0;
    ::IData/*27:0*/ __Vdfg_Regularize_480;
    __Vdfg_Regularize_480 = 0;
    ::IData/*26:0*/ __Vdfg_Regularize_481;
    __Vdfg_Regularize_481 = 0;
    ::IData/*27:0*/ __Vdfg_Regularize_482;
    __Vdfg_Regularize_482 = 0;
    // Body
    vlSelfRef.__PVT__u_mul__DOT__a_inf = (::IData)(
                                                   (0x7f80U 
                                                    == 
                                                    (0x7fffU 
                                                     & (::IData)(vlSymsp->vlInst.TOP.tb_mini_tpu__DOT__dut__DOT__u_array__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__a_q))));
    vlSelfRef.__PVT__u_mul__DOT__b_inf = (::IData)(
                                                   (0x7f80U 
                                                    == 
                                                    (0x7fffU 
                                                     & (::IData)(vlSymsp->vlInst.TOP.tb_mini_tpu__DOT__dut__DOT__u_mem__DOT__skew__BRA__1__KET____DOT__sr_b__BRA__1__KET__))));
    vlSelfRef.__PVT__u_add__DOT__a_inf = (::IData)(
                                                   (0x7f800000U 
                                                    == 
                                                    (0x7fffffffU 
                                                     & vlSelfRef.__PVT__pipeline_register__DOT__out)));
    vlSelfRef.__PVT__u_add__DOT__b_inf = (::IData)(
                                                   (0x7f800000U 
                                                    == 
                                                    (0x7fffffffU 
                                                     & vlSelfRef.__PVT__accumulator)));
    vlSelfRef.__PVT__u_mul__DOT__prod = (0x0000ffffU 
                                         & ((0x00000080U 
                                             | (0x0000007fU 
                                                & (::IData)(vlSymsp->vlInst.TOP.tb_mini_tpu__DOT__dut__DOT__u_mem__DOT__skew__BRA__1__KET____DOT__sr_b__BRA__1__KET__))) 
                                            * (0x00000080U 
                                               | (0x0000007fU 
                                                  & (::IData)(vlSymsp->vlInst.TOP.tb_mini_tpu__DOT__dut__DOT__u_array__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__a_q)))));
    __Vdfg_Regularize_469 = ((0x7fffffffU & vlSelfRef.__PVT__pipeline_register__DOT__out) 
                             >= (0x7fffffffU & vlSelfRef.__PVT__accumulator));
    vlSelfRef.__Vdfg_Regularize_472 = (0x000007ffU 
                                       & ((((0x000000ffU 
                                             & ((::IData)(vlSymsp->vlInst.TOP.tb_mini_tpu__DOT__dut__DOT__u_mem__DOT__skew__BRA__1__KET____DOT__sr_b__BRA__1__KET__) 
                                                >> 7U)) 
                                            + (0x000000ffU 
                                               & ((::IData)(vlSymsp->vlInst.TOP.tb_mini_tpu__DOT__dut__DOT__u_array__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__a_q) 
                                                  >> 7U))) 
                                           - (::IData)(0x007fU)) 
                                          + (1U & (- (::IData)(
                                                               (1U 
                                                                & ((::IData)(vlSelfRef.__PVT__u_mul__DOT__prod) 
                                                                   >> 0x0000000fU)))))));
    if (__Vdfg_Regularize_469) {
        vlSelfRef.__Vdfg_Regularize_474 = (1U & (vlSelfRef.__PVT__pipeline_register__DOT__out 
                                                 >> 0x0000001fU));
        __Vdfg_Regularize_475 = (0x000000ffU & (vlSelfRef.__PVT__pipeline_register__DOT__out 
                                                >> 0x00000017U));
    } else {
        vlSelfRef.__Vdfg_Regularize_474 = (1U & (vlSelfRef.__PVT__accumulator 
                                                 >> 0x0000001fU));
        __Vdfg_Regularize_475 = (0x000000ffU & (vlSelfRef.__PVT__accumulator 
                                                >> 0x00000017U));
    }
    __Vdfg_Regularize_482 = (0x04000000U | (0x03fffff8U 
                                            & (((::IData)(__Vdfg_Regularize_469)
                                                 ? vlSelfRef.__PVT__pipeline_register__DOT__out
                                                 : vlSelfRef.__PVT__accumulator) 
                                               << 3U)));
    __Vdfg_Regularize_481 = (0x04000000U | (0x03fffff8U 
                                            & (((::IData)(__Vdfg_Regularize_469)
                                                 ? vlSelfRef.__PVT__accumulator
                                                 : vlSelfRef.__PVT__pipeline_register__DOT__out) 
                                               << 3U)));
    __Vdfg_Regularize_471 = (0x000000ffU & ((::IData)(__Vdfg_Regularize_475) 
                                            - ((::IData)(__Vdfg_Regularize_469)
                                                ? (vlSelfRef.__PVT__accumulator 
                                                   >> 0x00000017U)
                                                : (vlSelfRef.__PVT__pipeline_register__DOT__out 
                                                   >> 0x00000017U))));
    __Vdfg_Regularize_480 = ((0x1bU <= (::IData)(__Vdfg_Regularize_471))
                              ? 1U : (VL_SHIFTR_III(27,27,8, __Vdfg_Regularize_481, (::IData)(__Vdfg_Regularize_471)) 
                                      | (0U != ((VL_SHIFTL_III(27,27,8, (::IData)(1U), (::IData)(__Vdfg_Regularize_471)) 
                                                 - (::IData)(1U)) 
                                                & __Vdfg_Regularize_481))));
    __Vdfg_Regularize_468 = (0x0fffffffU & (((::IData)(vlSelfRef.__Vdfg_Regularize_474) 
                                             == (1U 
                                                 & ((::IData)(__Vdfg_Regularize_469)
                                                     ? 
                                                    (vlSelfRef.__PVT__accumulator 
                                                     >> 0x0000001fU)
                                                     : 
                                                    (vlSelfRef.__PVT__pipeline_register__DOT__out 
                                                     >> 0x0000001fU))))
                                             ? (__Vdfg_Regularize_480 
                                                + __Vdfg_Regularize_482)
                                             : (__Vdfg_Regularize_482 
                                                - __Vdfg_Regularize_480)));
    __Vdfg_Regularize_479 = (((0x02000000U & __Vdfg_Regularize_468)
                               ? 1U : ((0x01000000U 
                                        & __Vdfg_Regularize_468)
                                        ? 2U : ((0x00800000U 
                                                 & __Vdfg_Regularize_468)
                                                 ? 3U
                                                 : 
                                                ((0x00400000U 
                                                  & __Vdfg_Regularize_468)
                                                  ? 4U
                                                  : 
                                                 ((0x00200000U 
                                                   & __Vdfg_Regularize_468)
                                                   ? 5U
                                                   : 
                                                  ((0x00100000U 
                                                    & __Vdfg_Regularize_468)
                                                    ? 6U
                                                    : 
                                                   ((0x00080000U 
                                                     & __Vdfg_Regularize_468)
                                                     ? 7U
                                                     : 
                                                    ((0x00040000U 
                                                      & __Vdfg_Regularize_468)
                                                      ? 8U
                                                      : 
                                                     ((0x00020000U 
                                                       & __Vdfg_Regularize_468)
                                                       ? 9U
                                                       : 
                                                      ((0x00010000U 
                                                        & __Vdfg_Regularize_468)
                                                        ? 0x0aU
                                                        : 
                                                       ((0x00008000U 
                                                         & __Vdfg_Regularize_468)
                                                         ? 0x0bU
                                                         : 
                                                        ((0x00004000U 
                                                          & __Vdfg_Regularize_468)
                                                          ? 0x0cU
                                                          : 
                                                         ((0x00002000U 
                                                           & __Vdfg_Regularize_468)
                                                           ? 0x0dU
                                                           : 
                                                          ((0x00001000U 
                                                            & __Vdfg_Regularize_468)
                                                            ? 0x0eU
                                                            : 
                                                           ((0x00000800U 
                                                             & __Vdfg_Regularize_468)
                                                             ? 0x0fU
                                                             : 
                                                            ((0x00000400U 
                                                              & __Vdfg_Regularize_468)
                                                              ? 0x10U
                                                              : 
                                                             ((0x00000200U 
                                                               & __Vdfg_Regularize_468)
                                                               ? 0x11U
                                                               : 
                                                              ((0x00000100U 
                                                                & __Vdfg_Regularize_468)
                                                                ? 0x12U
                                                                : 
                                                               ((0x00000080U 
                                                                 & __Vdfg_Regularize_468)
                                                                 ? 0x13U
                                                                 : 
                                                                ((0x00000040U 
                                                                  & __Vdfg_Regularize_468)
                                                                  ? 0x14U
                                                                  : 
                                                                 ((0x00000020U 
                                                                   & __Vdfg_Regularize_468)
                                                                   ? 0x15U
                                                                   : 
                                                                  ((0x00000010U 
                                                                    & __Vdfg_Regularize_468)
                                                                    ? 0x16U
                                                                    : 
                                                                   ((8U 
                                                                     & __Vdfg_Regularize_468)
                                                                     ? 0x17U
                                                                     : 
                                                                    ((4U 
                                                                      & __Vdfg_Regularize_468)
                                                                      ? 0x18U
                                                                      : 
                                                                     ((2U 
                                                                       & __Vdfg_Regularize_468)
                                                                       ? 0x19U
                                                                       : 
                                                                      ((1U 
                                                                        & __Vdfg_Regularize_468)
                                                                        ? 0x1aU
                                                                        : 0x1bU)))))))))))))))))))))))))) 
                             & (- (::IData)((1U & (~ 
                                                   (__Vdfg_Regularize_468 
                                                    >> 0x0000001aU))))));
    if ((0x08000000U & __Vdfg_Regularize_468)) {
        vlSelfRef.__Vdfg_Regularize_476 = (0x07ffffffU 
                                           & ((__Vdfg_Regularize_468 
                                               >> 1U) 
                                              | (1U 
                                                 & __Vdfg_Regularize_468)));
        vlSelfRef.__Vdfg_Regularize_477 = (0x000003ffU 
                                           & ((::IData)(1U) 
                                              + (::IData)(__Vdfg_Regularize_475)));
    } else {
        vlSelfRef.__Vdfg_Regularize_476 = (0x07ffffffU 
                                           & (__Vdfg_Regularize_468 
                                              << (::IData)(__Vdfg_Regularize_479)));
        vlSelfRef.__Vdfg_Regularize_477 = (0x000003ffU 
                                           & ((::IData)(__Vdfg_Regularize_475) 
                                              - (::IData)(__Vdfg_Regularize_479)));
    }
}

VL_ATTR_COLD void Vtb_mini_tpu_processing_element___stl_comb__TOP__tb_mini_tpu__DOT__dut__DOT__u_array__DOT__row__BRA__0__KET____DOT__col__BRA__2__KET____DOT__pe__0(Vtb_mini_tpu_processing_element* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_mini_tpu_processing_element___stl_comb__TOP__tb_mini_tpu__DOT__dut__DOT__u_array__DOT__row__BRA__0__KET____DOT__col__BRA__2__KET____DOT__pe__0\n"); );
    Vtb_mini_tpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    ::IData/*27:0*/ __Vdfg_Regularize_468;
    __Vdfg_Regularize_468 = 0;
    ::CData/*0:0*/ __Vdfg_Regularize_469;
    __Vdfg_Regularize_469 = 0;
    ::CData/*7:0*/ __Vdfg_Regularize_471;
    __Vdfg_Regularize_471 = 0;
    ::CData/*7:0*/ __Vdfg_Regularize_475;
    __Vdfg_Regularize_475 = 0;
    ::CData/*4:0*/ __Vdfg_Regularize_479;
    __Vdfg_Regularize_479 = 0;
    ::IData/*27:0*/ __Vdfg_Regularize_480;
    __Vdfg_Regularize_480 = 0;
    ::IData/*26:0*/ __Vdfg_Regularize_481;
    __Vdfg_Regularize_481 = 0;
    ::IData/*27:0*/ __Vdfg_Regularize_482;
    __Vdfg_Regularize_482 = 0;
    // Body
    vlSelfRef.__PVT__u_mul__DOT__a_inf = (::IData)(
                                                   (0x7f80U 
                                                    == 
                                                    (0x7fffU 
                                                     & (::IData)(vlSymsp->vlInst.TOP.tb_mini_tpu__DOT__dut__DOT__u_array__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__a_q))));
    vlSelfRef.__PVT__u_mul__DOT__b_inf = (::IData)(
                                                   (0x7f80U 
                                                    == 
                                                    (0x7fffU 
                                                     & (::IData)(vlSymsp->vlInst.TOP.tb_mini_tpu__DOT__dut__DOT__u_mem__DOT__skew__BRA__2__KET____DOT__sr_b__BRA__2__KET__))));
    vlSelfRef.__PVT__u_add__DOT__a_inf = (::IData)(
                                                   (0x7f800000U 
                                                    == 
                                                    (0x7fffffffU 
                                                     & vlSelfRef.__PVT__pipeline_register__DOT__out)));
    vlSelfRef.__PVT__u_add__DOT__b_inf = (::IData)(
                                                   (0x7f800000U 
                                                    == 
                                                    (0x7fffffffU 
                                                     & vlSelfRef.__PVT__accumulator)));
    vlSelfRef.__PVT__u_mul__DOT__prod = (0x0000ffffU 
                                         & ((0x00000080U 
                                             | (0x0000007fU 
                                                & (::IData)(vlSymsp->vlInst.TOP.tb_mini_tpu__DOT__dut__DOT__u_mem__DOT__skew__BRA__2__KET____DOT__sr_b__BRA__2__KET__))) 
                                            * (0x00000080U 
                                               | (0x0000007fU 
                                                  & (::IData)(vlSymsp->vlInst.TOP.tb_mini_tpu__DOT__dut__DOT__u_array__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__a_q)))));
    __Vdfg_Regularize_469 = ((0x7fffffffU & vlSelfRef.__PVT__pipeline_register__DOT__out) 
                             >= (0x7fffffffU & vlSelfRef.__PVT__accumulator));
    vlSelfRef.__Vdfg_Regularize_472 = (0x000007ffU 
                                       & ((((0x000000ffU 
                                             & ((::IData)(vlSymsp->vlInst.TOP.tb_mini_tpu__DOT__dut__DOT__u_mem__DOT__skew__BRA__2__KET____DOT__sr_b__BRA__2__KET__) 
                                                >> 7U)) 
                                            + (0x000000ffU 
                                               & ((::IData)(vlSymsp->vlInst.TOP.tb_mini_tpu__DOT__dut__DOT__u_array__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__a_q) 
                                                  >> 7U))) 
                                           - (::IData)(0x007fU)) 
                                          + (1U & (- (::IData)(
                                                               (1U 
                                                                & ((::IData)(vlSelfRef.__PVT__u_mul__DOT__prod) 
                                                                   >> 0x0000000fU)))))));
    if (__Vdfg_Regularize_469) {
        vlSelfRef.__Vdfg_Regularize_474 = (1U & (vlSelfRef.__PVT__pipeline_register__DOT__out 
                                                 >> 0x0000001fU));
        __Vdfg_Regularize_475 = (0x000000ffU & (vlSelfRef.__PVT__pipeline_register__DOT__out 
                                                >> 0x00000017U));
    } else {
        vlSelfRef.__Vdfg_Regularize_474 = (1U & (vlSelfRef.__PVT__accumulator 
                                                 >> 0x0000001fU));
        __Vdfg_Regularize_475 = (0x000000ffU & (vlSelfRef.__PVT__accumulator 
                                                >> 0x00000017U));
    }
    __Vdfg_Regularize_482 = (0x04000000U | (0x03fffff8U 
                                            & (((::IData)(__Vdfg_Regularize_469)
                                                 ? vlSelfRef.__PVT__pipeline_register__DOT__out
                                                 : vlSelfRef.__PVT__accumulator) 
                                               << 3U)));
    __Vdfg_Regularize_481 = (0x04000000U | (0x03fffff8U 
                                            & (((::IData)(__Vdfg_Regularize_469)
                                                 ? vlSelfRef.__PVT__accumulator
                                                 : vlSelfRef.__PVT__pipeline_register__DOT__out) 
                                               << 3U)));
    __Vdfg_Regularize_471 = (0x000000ffU & ((::IData)(__Vdfg_Regularize_475) 
                                            - ((::IData)(__Vdfg_Regularize_469)
                                                ? (vlSelfRef.__PVT__accumulator 
                                                   >> 0x00000017U)
                                                : (vlSelfRef.__PVT__pipeline_register__DOT__out 
                                                   >> 0x00000017U))));
    __Vdfg_Regularize_480 = ((0x1bU <= (::IData)(__Vdfg_Regularize_471))
                              ? 1U : (VL_SHIFTR_III(27,27,8, __Vdfg_Regularize_481, (::IData)(__Vdfg_Regularize_471)) 
                                      | (0U != ((VL_SHIFTL_III(27,27,8, (::IData)(1U), (::IData)(__Vdfg_Regularize_471)) 
                                                 - (::IData)(1U)) 
                                                & __Vdfg_Regularize_481))));
    __Vdfg_Regularize_468 = (0x0fffffffU & (((::IData)(vlSelfRef.__Vdfg_Regularize_474) 
                                             == (1U 
                                                 & ((::IData)(__Vdfg_Regularize_469)
                                                     ? 
                                                    (vlSelfRef.__PVT__accumulator 
                                                     >> 0x0000001fU)
                                                     : 
                                                    (vlSelfRef.__PVT__pipeline_register__DOT__out 
                                                     >> 0x0000001fU))))
                                             ? (__Vdfg_Regularize_480 
                                                + __Vdfg_Regularize_482)
                                             : (__Vdfg_Regularize_482 
                                                - __Vdfg_Regularize_480)));
    __Vdfg_Regularize_479 = (((0x02000000U & __Vdfg_Regularize_468)
                               ? 1U : ((0x01000000U 
                                        & __Vdfg_Regularize_468)
                                        ? 2U : ((0x00800000U 
                                                 & __Vdfg_Regularize_468)
                                                 ? 3U
                                                 : 
                                                ((0x00400000U 
                                                  & __Vdfg_Regularize_468)
                                                  ? 4U
                                                  : 
                                                 ((0x00200000U 
                                                   & __Vdfg_Regularize_468)
                                                   ? 5U
                                                   : 
                                                  ((0x00100000U 
                                                    & __Vdfg_Regularize_468)
                                                    ? 6U
                                                    : 
                                                   ((0x00080000U 
                                                     & __Vdfg_Regularize_468)
                                                     ? 7U
                                                     : 
                                                    ((0x00040000U 
                                                      & __Vdfg_Regularize_468)
                                                      ? 8U
                                                      : 
                                                     ((0x00020000U 
                                                       & __Vdfg_Regularize_468)
                                                       ? 9U
                                                       : 
                                                      ((0x00010000U 
                                                        & __Vdfg_Regularize_468)
                                                        ? 0x0aU
                                                        : 
                                                       ((0x00008000U 
                                                         & __Vdfg_Regularize_468)
                                                         ? 0x0bU
                                                         : 
                                                        ((0x00004000U 
                                                          & __Vdfg_Regularize_468)
                                                          ? 0x0cU
                                                          : 
                                                         ((0x00002000U 
                                                           & __Vdfg_Regularize_468)
                                                           ? 0x0dU
                                                           : 
                                                          ((0x00001000U 
                                                            & __Vdfg_Regularize_468)
                                                            ? 0x0eU
                                                            : 
                                                           ((0x00000800U 
                                                             & __Vdfg_Regularize_468)
                                                             ? 0x0fU
                                                             : 
                                                            ((0x00000400U 
                                                              & __Vdfg_Regularize_468)
                                                              ? 0x10U
                                                              : 
                                                             ((0x00000200U 
                                                               & __Vdfg_Regularize_468)
                                                               ? 0x11U
                                                               : 
                                                              ((0x00000100U 
                                                                & __Vdfg_Regularize_468)
                                                                ? 0x12U
                                                                : 
                                                               ((0x00000080U 
                                                                 & __Vdfg_Regularize_468)
                                                                 ? 0x13U
                                                                 : 
                                                                ((0x00000040U 
                                                                  & __Vdfg_Regularize_468)
                                                                  ? 0x14U
                                                                  : 
                                                                 ((0x00000020U 
                                                                   & __Vdfg_Regularize_468)
                                                                   ? 0x15U
                                                                   : 
                                                                  ((0x00000010U 
                                                                    & __Vdfg_Regularize_468)
                                                                    ? 0x16U
                                                                    : 
                                                                   ((8U 
                                                                     & __Vdfg_Regularize_468)
                                                                     ? 0x17U
                                                                     : 
                                                                    ((4U 
                                                                      & __Vdfg_Regularize_468)
                                                                      ? 0x18U
                                                                      : 
                                                                     ((2U 
                                                                       & __Vdfg_Regularize_468)
                                                                       ? 0x19U
                                                                       : 
                                                                      ((1U 
                                                                        & __Vdfg_Regularize_468)
                                                                        ? 0x1aU
                                                                        : 0x1bU)))))))))))))))))))))))))) 
                             & (- (::IData)((1U & (~ 
                                                   (__Vdfg_Regularize_468 
                                                    >> 0x0000001aU))))));
    if ((0x08000000U & __Vdfg_Regularize_468)) {
        vlSelfRef.__Vdfg_Regularize_476 = (0x07ffffffU 
                                           & ((__Vdfg_Regularize_468 
                                               >> 1U) 
                                              | (1U 
                                                 & __Vdfg_Regularize_468)));
        vlSelfRef.__Vdfg_Regularize_477 = (0x000003ffU 
                                           & ((::IData)(1U) 
                                              + (::IData)(__Vdfg_Regularize_475)));
    } else {
        vlSelfRef.__Vdfg_Regularize_476 = (0x07ffffffU 
                                           & (__Vdfg_Regularize_468 
                                              << (::IData)(__Vdfg_Regularize_479)));
        vlSelfRef.__Vdfg_Regularize_477 = (0x000003ffU 
                                           & ((::IData)(__Vdfg_Regularize_475) 
                                              - (::IData)(__Vdfg_Regularize_479)));
    }
}

VL_ATTR_COLD void Vtb_mini_tpu_processing_element___stl_comb__TOP__tb_mini_tpu__DOT__dut__DOT__u_array__DOT__row__BRA__0__KET____DOT__col__BRA__3__KET____DOT__pe__0(Vtb_mini_tpu_processing_element* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_mini_tpu_processing_element___stl_comb__TOP__tb_mini_tpu__DOT__dut__DOT__u_array__DOT__row__BRA__0__KET____DOT__col__BRA__3__KET____DOT__pe__0\n"); );
    Vtb_mini_tpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    ::IData/*27:0*/ __Vdfg_Regularize_468;
    __Vdfg_Regularize_468 = 0;
    ::CData/*0:0*/ __Vdfg_Regularize_469;
    __Vdfg_Regularize_469 = 0;
    ::CData/*7:0*/ __Vdfg_Regularize_471;
    __Vdfg_Regularize_471 = 0;
    ::CData/*7:0*/ __Vdfg_Regularize_475;
    __Vdfg_Regularize_475 = 0;
    ::CData/*4:0*/ __Vdfg_Regularize_479;
    __Vdfg_Regularize_479 = 0;
    ::IData/*27:0*/ __Vdfg_Regularize_480;
    __Vdfg_Regularize_480 = 0;
    ::IData/*26:0*/ __Vdfg_Regularize_481;
    __Vdfg_Regularize_481 = 0;
    ::IData/*27:0*/ __Vdfg_Regularize_482;
    __Vdfg_Regularize_482 = 0;
    // Body
    vlSelfRef.__PVT__u_mul__DOT__a_inf = (::IData)(
                                                   (0x7f80U 
                                                    == 
                                                    (0x7fffU 
                                                     & (::IData)(vlSymsp->vlInst.TOP.tb_mini_tpu__DOT__dut__DOT__u_array__DOT__row__BRA__0__KET____DOT__col__BRA__2__KET____DOT__a_q))));
    vlSelfRef.__PVT__u_mul__DOT__b_inf = (::IData)(
                                                   (0x7f80U 
                                                    == 
                                                    (0x7fffU 
                                                     & (::IData)(vlSymsp->vlInst.TOP.tb_mini_tpu__DOT__dut__DOT__u_mem__DOT__skew__BRA__3__KET____DOT__sr_b__BRA__3__KET__))));
    vlSelfRef.__PVT__u_add__DOT__a_inf = (::IData)(
                                                   (0x7f800000U 
                                                    == 
                                                    (0x7fffffffU 
                                                     & vlSelfRef.__PVT__pipeline_register__DOT__out)));
    vlSelfRef.__PVT__u_add__DOT__b_inf = (::IData)(
                                                   (0x7f800000U 
                                                    == 
                                                    (0x7fffffffU 
                                                     & vlSelfRef.__PVT__accumulator)));
    vlSelfRef.__PVT__u_mul__DOT__prod = (0x0000ffffU 
                                         & ((0x00000080U 
                                             | (0x0000007fU 
                                                & (::IData)(vlSymsp->vlInst.TOP.tb_mini_tpu__DOT__dut__DOT__u_mem__DOT__skew__BRA__3__KET____DOT__sr_b__BRA__3__KET__))) 
                                            * (0x00000080U 
                                               | (0x0000007fU 
                                                  & (::IData)(vlSymsp->vlInst.TOP.tb_mini_tpu__DOT__dut__DOT__u_array__DOT__row__BRA__0__KET____DOT__col__BRA__2__KET____DOT__a_q)))));
    __Vdfg_Regularize_469 = ((0x7fffffffU & vlSelfRef.__PVT__pipeline_register__DOT__out) 
                             >= (0x7fffffffU & vlSelfRef.__PVT__accumulator));
    vlSelfRef.__Vdfg_Regularize_472 = (0x000007ffU 
                                       & ((((0x000000ffU 
                                             & ((::IData)(vlSymsp->vlInst.TOP.tb_mini_tpu__DOT__dut__DOT__u_mem__DOT__skew__BRA__3__KET____DOT__sr_b__BRA__3__KET__) 
                                                >> 7U)) 
                                            + (0x000000ffU 
                                               & ((::IData)(vlSymsp->vlInst.TOP.tb_mini_tpu__DOT__dut__DOT__u_array__DOT__row__BRA__0__KET____DOT__col__BRA__2__KET____DOT__a_q) 
                                                  >> 7U))) 
                                           - (::IData)(0x007fU)) 
                                          + (1U & (- (::IData)(
                                                               (1U 
                                                                & ((::IData)(vlSelfRef.__PVT__u_mul__DOT__prod) 
                                                                   >> 0x0000000fU)))))));
    if (__Vdfg_Regularize_469) {
        vlSelfRef.__Vdfg_Regularize_474 = (1U & (vlSelfRef.__PVT__pipeline_register__DOT__out 
                                                 >> 0x0000001fU));
        __Vdfg_Regularize_475 = (0x000000ffU & (vlSelfRef.__PVT__pipeline_register__DOT__out 
                                                >> 0x00000017U));
    } else {
        vlSelfRef.__Vdfg_Regularize_474 = (1U & (vlSelfRef.__PVT__accumulator 
                                                 >> 0x0000001fU));
        __Vdfg_Regularize_475 = (0x000000ffU & (vlSelfRef.__PVT__accumulator 
                                                >> 0x00000017U));
    }
    __Vdfg_Regularize_482 = (0x04000000U | (0x03fffff8U 
                                            & (((::IData)(__Vdfg_Regularize_469)
                                                 ? vlSelfRef.__PVT__pipeline_register__DOT__out
                                                 : vlSelfRef.__PVT__accumulator) 
                                               << 3U)));
    __Vdfg_Regularize_481 = (0x04000000U | (0x03fffff8U 
                                            & (((::IData)(__Vdfg_Regularize_469)
                                                 ? vlSelfRef.__PVT__accumulator
                                                 : vlSelfRef.__PVT__pipeline_register__DOT__out) 
                                               << 3U)));
    __Vdfg_Regularize_471 = (0x000000ffU & ((::IData)(__Vdfg_Regularize_475) 
                                            - ((::IData)(__Vdfg_Regularize_469)
                                                ? (vlSelfRef.__PVT__accumulator 
                                                   >> 0x00000017U)
                                                : (vlSelfRef.__PVT__pipeline_register__DOT__out 
                                                   >> 0x00000017U))));
    __Vdfg_Regularize_480 = ((0x1bU <= (::IData)(__Vdfg_Regularize_471))
                              ? 1U : (VL_SHIFTR_III(27,27,8, __Vdfg_Regularize_481, (::IData)(__Vdfg_Regularize_471)) 
                                      | (0U != ((VL_SHIFTL_III(27,27,8, (::IData)(1U), (::IData)(__Vdfg_Regularize_471)) 
                                                 - (::IData)(1U)) 
                                                & __Vdfg_Regularize_481))));
    __Vdfg_Regularize_468 = (0x0fffffffU & (((::IData)(vlSelfRef.__Vdfg_Regularize_474) 
                                             == (1U 
                                                 & ((::IData)(__Vdfg_Regularize_469)
                                                     ? 
                                                    (vlSelfRef.__PVT__accumulator 
                                                     >> 0x0000001fU)
                                                     : 
                                                    (vlSelfRef.__PVT__pipeline_register__DOT__out 
                                                     >> 0x0000001fU))))
                                             ? (__Vdfg_Regularize_480 
                                                + __Vdfg_Regularize_482)
                                             : (__Vdfg_Regularize_482 
                                                - __Vdfg_Regularize_480)));
    __Vdfg_Regularize_479 = (((0x02000000U & __Vdfg_Regularize_468)
                               ? 1U : ((0x01000000U 
                                        & __Vdfg_Regularize_468)
                                        ? 2U : ((0x00800000U 
                                                 & __Vdfg_Regularize_468)
                                                 ? 3U
                                                 : 
                                                ((0x00400000U 
                                                  & __Vdfg_Regularize_468)
                                                  ? 4U
                                                  : 
                                                 ((0x00200000U 
                                                   & __Vdfg_Regularize_468)
                                                   ? 5U
                                                   : 
                                                  ((0x00100000U 
                                                    & __Vdfg_Regularize_468)
                                                    ? 6U
                                                    : 
                                                   ((0x00080000U 
                                                     & __Vdfg_Regularize_468)
                                                     ? 7U
                                                     : 
                                                    ((0x00040000U 
                                                      & __Vdfg_Regularize_468)
                                                      ? 8U
                                                      : 
                                                     ((0x00020000U 
                                                       & __Vdfg_Regularize_468)
                                                       ? 9U
                                                       : 
                                                      ((0x00010000U 
                                                        & __Vdfg_Regularize_468)
                                                        ? 0x0aU
                                                        : 
                                                       ((0x00008000U 
                                                         & __Vdfg_Regularize_468)
                                                         ? 0x0bU
                                                         : 
                                                        ((0x00004000U 
                                                          & __Vdfg_Regularize_468)
                                                          ? 0x0cU
                                                          : 
                                                         ((0x00002000U 
                                                           & __Vdfg_Regularize_468)
                                                           ? 0x0dU
                                                           : 
                                                          ((0x00001000U 
                                                            & __Vdfg_Regularize_468)
                                                            ? 0x0eU
                                                            : 
                                                           ((0x00000800U 
                                                             & __Vdfg_Regularize_468)
                                                             ? 0x0fU
                                                             : 
                                                            ((0x00000400U 
                                                              & __Vdfg_Regularize_468)
                                                              ? 0x10U
                                                              : 
                                                             ((0x00000200U 
                                                               & __Vdfg_Regularize_468)
                                                               ? 0x11U
                                                               : 
                                                              ((0x00000100U 
                                                                & __Vdfg_Regularize_468)
                                                                ? 0x12U
                                                                : 
                                                               ((0x00000080U 
                                                                 & __Vdfg_Regularize_468)
                                                                 ? 0x13U
                                                                 : 
                                                                ((0x00000040U 
                                                                  & __Vdfg_Regularize_468)
                                                                  ? 0x14U
                                                                  : 
                                                                 ((0x00000020U 
                                                                   & __Vdfg_Regularize_468)
                                                                   ? 0x15U
                                                                   : 
                                                                  ((0x00000010U 
                                                                    & __Vdfg_Regularize_468)
                                                                    ? 0x16U
                                                                    : 
                                                                   ((8U 
                                                                     & __Vdfg_Regularize_468)
                                                                     ? 0x17U
                                                                     : 
                                                                    ((4U 
                                                                      & __Vdfg_Regularize_468)
                                                                      ? 0x18U
                                                                      : 
                                                                     ((2U 
                                                                       & __Vdfg_Regularize_468)
                                                                       ? 0x19U
                                                                       : 
                                                                      ((1U 
                                                                        & __Vdfg_Regularize_468)
                                                                        ? 0x1aU
                                                                        : 0x1bU)))))))))))))))))))))))))) 
                             & (- (::IData)((1U & (~ 
                                                   (__Vdfg_Regularize_468 
                                                    >> 0x0000001aU))))));
    if ((0x08000000U & __Vdfg_Regularize_468)) {
        vlSelfRef.__Vdfg_Regularize_476 = (0x07ffffffU 
                                           & ((__Vdfg_Regularize_468 
                                               >> 1U) 
                                              | (1U 
                                                 & __Vdfg_Regularize_468)));
        vlSelfRef.__Vdfg_Regularize_477 = (0x000003ffU 
                                           & ((::IData)(1U) 
                                              + (::IData)(__Vdfg_Regularize_475)));
    } else {
        vlSelfRef.__Vdfg_Regularize_476 = (0x07ffffffU 
                                           & (__Vdfg_Regularize_468 
                                              << (::IData)(__Vdfg_Regularize_479)));
        vlSelfRef.__Vdfg_Regularize_477 = (0x000003ffU 
                                           & ((::IData)(__Vdfg_Regularize_475) 
                                              - (::IData)(__Vdfg_Regularize_479)));
    }
}

VL_ATTR_COLD void Vtb_mini_tpu_processing_element___stl_comb__TOP__tb_mini_tpu__DOT__dut__DOT__u_array__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__pe__0(Vtb_mini_tpu_processing_element* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_mini_tpu_processing_element___stl_comb__TOP__tb_mini_tpu__DOT__dut__DOT__u_array__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__pe__0\n"); );
    Vtb_mini_tpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    ::IData/*27:0*/ __Vdfg_Regularize_468;
    __Vdfg_Regularize_468 = 0;
    ::CData/*0:0*/ __Vdfg_Regularize_469;
    __Vdfg_Regularize_469 = 0;
    ::CData/*7:0*/ __Vdfg_Regularize_471;
    __Vdfg_Regularize_471 = 0;
    ::CData/*7:0*/ __Vdfg_Regularize_475;
    __Vdfg_Regularize_475 = 0;
    ::CData/*4:0*/ __Vdfg_Regularize_479;
    __Vdfg_Regularize_479 = 0;
    ::IData/*27:0*/ __Vdfg_Regularize_480;
    __Vdfg_Regularize_480 = 0;
    ::IData/*26:0*/ __Vdfg_Regularize_481;
    __Vdfg_Regularize_481 = 0;
    ::IData/*27:0*/ __Vdfg_Regularize_482;
    __Vdfg_Regularize_482 = 0;
    // Body
    vlSelfRef.__PVT__u_mul__DOT__a_inf = (::IData)(
                                                   (0x7f80U 
                                                    == 
                                                    (0x7fffU 
                                                     & (::IData)(vlSymsp->vlInst.TOP.tb_mini_tpu__DOT__dut__DOT__u_mem__DOT__skew__BRA__1__KET____DOT__sr_a__BRA__1__KET__))));
    vlSelfRef.__PVT__u_mul__DOT__b_inf = (::IData)(
                                                   (0x7f80U 
                                                    == 
                                                    (0x7fffU 
                                                     & (::IData)(vlSymsp->vlInst.TOP.tb_mini_tpu__DOT__dut__DOT__u_array__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__b_q))));
    vlSelfRef.__PVT__u_add__DOT__a_inf = (::IData)(
                                                   (0x7f800000U 
                                                    == 
                                                    (0x7fffffffU 
                                                     & vlSelfRef.__PVT__pipeline_register__DOT__out)));
    vlSelfRef.__PVT__u_add__DOT__b_inf = (::IData)(
                                                   (0x7f800000U 
                                                    == 
                                                    (0x7fffffffU 
                                                     & vlSelfRef.__PVT__accumulator)));
    vlSelfRef.__PVT__u_mul__DOT__prod = (0x0000ffffU 
                                         & ((0x00000080U 
                                             | (0x0000007fU 
                                                & (::IData)(vlSymsp->vlInst.TOP.tb_mini_tpu__DOT__dut__DOT__u_array__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__b_q))) 
                                            * (0x00000080U 
                                               | (0x0000007fU 
                                                  & (::IData)(vlSymsp->vlInst.TOP.tb_mini_tpu__DOT__dut__DOT__u_mem__DOT__skew__BRA__1__KET____DOT__sr_a__BRA__1__KET__)))));
    __Vdfg_Regularize_469 = ((0x7fffffffU & vlSelfRef.__PVT__pipeline_register__DOT__out) 
                             >= (0x7fffffffU & vlSelfRef.__PVT__accumulator));
    vlSelfRef.__Vdfg_Regularize_472 = (0x000007ffU 
                                       & ((((0x000000ffU 
                                             & ((::IData)(vlSymsp->vlInst.TOP.tb_mini_tpu__DOT__dut__DOT__u_array__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__b_q) 
                                                >> 7U)) 
                                            + (0x000000ffU 
                                               & ((::IData)(vlSymsp->vlInst.TOP.tb_mini_tpu__DOT__dut__DOT__u_mem__DOT__skew__BRA__1__KET____DOT__sr_a__BRA__1__KET__) 
                                                  >> 7U))) 
                                           - (::IData)(0x007fU)) 
                                          + (1U & (- (::IData)(
                                                               (1U 
                                                                & ((::IData)(vlSelfRef.__PVT__u_mul__DOT__prod) 
                                                                   >> 0x0000000fU)))))));
    if (__Vdfg_Regularize_469) {
        vlSelfRef.__Vdfg_Regularize_474 = (1U & (vlSelfRef.__PVT__pipeline_register__DOT__out 
                                                 >> 0x0000001fU));
        __Vdfg_Regularize_475 = (0x000000ffU & (vlSelfRef.__PVT__pipeline_register__DOT__out 
                                                >> 0x00000017U));
    } else {
        vlSelfRef.__Vdfg_Regularize_474 = (1U & (vlSelfRef.__PVT__accumulator 
                                                 >> 0x0000001fU));
        __Vdfg_Regularize_475 = (0x000000ffU & (vlSelfRef.__PVT__accumulator 
                                                >> 0x00000017U));
    }
    __Vdfg_Regularize_482 = (0x04000000U | (0x03fffff8U 
                                            & (((::IData)(__Vdfg_Regularize_469)
                                                 ? vlSelfRef.__PVT__pipeline_register__DOT__out
                                                 : vlSelfRef.__PVT__accumulator) 
                                               << 3U)));
    __Vdfg_Regularize_481 = (0x04000000U | (0x03fffff8U 
                                            & (((::IData)(__Vdfg_Regularize_469)
                                                 ? vlSelfRef.__PVT__accumulator
                                                 : vlSelfRef.__PVT__pipeline_register__DOT__out) 
                                               << 3U)));
    __Vdfg_Regularize_471 = (0x000000ffU & ((::IData)(__Vdfg_Regularize_475) 
                                            - ((::IData)(__Vdfg_Regularize_469)
                                                ? (vlSelfRef.__PVT__accumulator 
                                                   >> 0x00000017U)
                                                : (vlSelfRef.__PVT__pipeline_register__DOT__out 
                                                   >> 0x00000017U))));
    __Vdfg_Regularize_480 = ((0x1bU <= (::IData)(__Vdfg_Regularize_471))
                              ? 1U : (VL_SHIFTR_III(27,27,8, __Vdfg_Regularize_481, (::IData)(__Vdfg_Regularize_471)) 
                                      | (0U != ((VL_SHIFTL_III(27,27,8, (::IData)(1U), (::IData)(__Vdfg_Regularize_471)) 
                                                 - (::IData)(1U)) 
                                                & __Vdfg_Regularize_481))));
    __Vdfg_Regularize_468 = (0x0fffffffU & (((::IData)(vlSelfRef.__Vdfg_Regularize_474) 
                                             == (1U 
                                                 & ((::IData)(__Vdfg_Regularize_469)
                                                     ? 
                                                    (vlSelfRef.__PVT__accumulator 
                                                     >> 0x0000001fU)
                                                     : 
                                                    (vlSelfRef.__PVT__pipeline_register__DOT__out 
                                                     >> 0x0000001fU))))
                                             ? (__Vdfg_Regularize_480 
                                                + __Vdfg_Regularize_482)
                                             : (__Vdfg_Regularize_482 
                                                - __Vdfg_Regularize_480)));
    __Vdfg_Regularize_479 = (((0x02000000U & __Vdfg_Regularize_468)
                               ? 1U : ((0x01000000U 
                                        & __Vdfg_Regularize_468)
                                        ? 2U : ((0x00800000U 
                                                 & __Vdfg_Regularize_468)
                                                 ? 3U
                                                 : 
                                                ((0x00400000U 
                                                  & __Vdfg_Regularize_468)
                                                  ? 4U
                                                  : 
                                                 ((0x00200000U 
                                                   & __Vdfg_Regularize_468)
                                                   ? 5U
                                                   : 
                                                  ((0x00100000U 
                                                    & __Vdfg_Regularize_468)
                                                    ? 6U
                                                    : 
                                                   ((0x00080000U 
                                                     & __Vdfg_Regularize_468)
                                                     ? 7U
                                                     : 
                                                    ((0x00040000U 
                                                      & __Vdfg_Regularize_468)
                                                      ? 8U
                                                      : 
                                                     ((0x00020000U 
                                                       & __Vdfg_Regularize_468)
                                                       ? 9U
                                                       : 
                                                      ((0x00010000U 
                                                        & __Vdfg_Regularize_468)
                                                        ? 0x0aU
                                                        : 
                                                       ((0x00008000U 
                                                         & __Vdfg_Regularize_468)
                                                         ? 0x0bU
                                                         : 
                                                        ((0x00004000U 
                                                          & __Vdfg_Regularize_468)
                                                          ? 0x0cU
                                                          : 
                                                         ((0x00002000U 
                                                           & __Vdfg_Regularize_468)
                                                           ? 0x0dU
                                                           : 
                                                          ((0x00001000U 
                                                            & __Vdfg_Regularize_468)
                                                            ? 0x0eU
                                                            : 
                                                           ((0x00000800U 
                                                             & __Vdfg_Regularize_468)
                                                             ? 0x0fU
                                                             : 
                                                            ((0x00000400U 
                                                              & __Vdfg_Regularize_468)
                                                              ? 0x10U
                                                              : 
                                                             ((0x00000200U 
                                                               & __Vdfg_Regularize_468)
                                                               ? 0x11U
                                                               : 
                                                              ((0x00000100U 
                                                                & __Vdfg_Regularize_468)
                                                                ? 0x12U
                                                                : 
                                                               ((0x00000080U 
                                                                 & __Vdfg_Regularize_468)
                                                                 ? 0x13U
                                                                 : 
                                                                ((0x00000040U 
                                                                  & __Vdfg_Regularize_468)
                                                                  ? 0x14U
                                                                  : 
                                                                 ((0x00000020U 
                                                                   & __Vdfg_Regularize_468)
                                                                   ? 0x15U
                                                                   : 
                                                                  ((0x00000010U 
                                                                    & __Vdfg_Regularize_468)
                                                                    ? 0x16U
                                                                    : 
                                                                   ((8U 
                                                                     & __Vdfg_Regularize_468)
                                                                     ? 0x17U
                                                                     : 
                                                                    ((4U 
                                                                      & __Vdfg_Regularize_468)
                                                                      ? 0x18U
                                                                      : 
                                                                     ((2U 
                                                                       & __Vdfg_Regularize_468)
                                                                       ? 0x19U
                                                                       : 
                                                                      ((1U 
                                                                        & __Vdfg_Regularize_468)
                                                                        ? 0x1aU
                                                                        : 0x1bU)))))))))))))))))))))))))) 
                             & (- (::IData)((1U & (~ 
                                                   (__Vdfg_Regularize_468 
                                                    >> 0x0000001aU))))));
    if ((0x08000000U & __Vdfg_Regularize_468)) {
        vlSelfRef.__Vdfg_Regularize_476 = (0x07ffffffU 
                                           & ((__Vdfg_Regularize_468 
                                               >> 1U) 
                                              | (1U 
                                                 & __Vdfg_Regularize_468)));
        vlSelfRef.__Vdfg_Regularize_477 = (0x000003ffU 
                                           & ((::IData)(1U) 
                                              + (::IData)(__Vdfg_Regularize_475)));
    } else {
        vlSelfRef.__Vdfg_Regularize_476 = (0x07ffffffU 
                                           & (__Vdfg_Regularize_468 
                                              << (::IData)(__Vdfg_Regularize_479)));
        vlSelfRef.__Vdfg_Regularize_477 = (0x000003ffU 
                                           & ((::IData)(__Vdfg_Regularize_475) 
                                              - (::IData)(__Vdfg_Regularize_479)));
    }
}

VL_ATTR_COLD void Vtb_mini_tpu_processing_element___stl_comb__TOP__tb_mini_tpu__DOT__dut__DOT__u_array__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__pe__0(Vtb_mini_tpu_processing_element* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_mini_tpu_processing_element___stl_comb__TOP__tb_mini_tpu__DOT__dut__DOT__u_array__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__pe__0\n"); );
    Vtb_mini_tpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    ::IData/*27:0*/ __Vdfg_Regularize_468;
    __Vdfg_Regularize_468 = 0;
    ::CData/*0:0*/ __Vdfg_Regularize_469;
    __Vdfg_Regularize_469 = 0;
    ::CData/*7:0*/ __Vdfg_Regularize_471;
    __Vdfg_Regularize_471 = 0;
    ::CData/*7:0*/ __Vdfg_Regularize_475;
    __Vdfg_Regularize_475 = 0;
    ::CData/*4:0*/ __Vdfg_Regularize_479;
    __Vdfg_Regularize_479 = 0;
    ::IData/*27:0*/ __Vdfg_Regularize_480;
    __Vdfg_Regularize_480 = 0;
    ::IData/*26:0*/ __Vdfg_Regularize_481;
    __Vdfg_Regularize_481 = 0;
    ::IData/*27:0*/ __Vdfg_Regularize_482;
    __Vdfg_Regularize_482 = 0;
    // Body
    vlSelfRef.__PVT__u_mul__DOT__a_inf = (::IData)(
                                                   (0x7f80U 
                                                    == 
                                                    (0x7fffU 
                                                     & (::IData)(vlSymsp->vlInst.TOP.tb_mini_tpu__DOT__dut__DOT__u_array__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__a_q))));
    vlSelfRef.__PVT__u_mul__DOT__b_inf = (::IData)(
                                                   (0x7f80U 
                                                    == 
                                                    (0x7fffU 
                                                     & (::IData)(vlSymsp->vlInst.TOP.tb_mini_tpu__DOT__dut__DOT__u_array__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__b_q))));
    vlSelfRef.__PVT__u_add__DOT__a_inf = (::IData)(
                                                   (0x7f800000U 
                                                    == 
                                                    (0x7fffffffU 
                                                     & vlSelfRef.__PVT__pipeline_register__DOT__out)));
    vlSelfRef.__PVT__u_add__DOT__b_inf = (::IData)(
                                                   (0x7f800000U 
                                                    == 
                                                    (0x7fffffffU 
                                                     & vlSelfRef.__PVT__accumulator)));
    vlSelfRef.__PVT__u_mul__DOT__prod = (0x0000ffffU 
                                         & ((0x00000080U 
                                             | (0x0000007fU 
                                                & (::IData)(vlSymsp->vlInst.TOP.tb_mini_tpu__DOT__dut__DOT__u_array__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__b_q))) 
                                            * (0x00000080U 
                                               | (0x0000007fU 
                                                  & (::IData)(vlSymsp->vlInst.TOP.tb_mini_tpu__DOT__dut__DOT__u_array__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__a_q)))));
    __Vdfg_Regularize_469 = ((0x7fffffffU & vlSelfRef.__PVT__pipeline_register__DOT__out) 
                             >= (0x7fffffffU & vlSelfRef.__PVT__accumulator));
    vlSelfRef.__Vdfg_Regularize_472 = (0x000007ffU 
                                       & ((((0x000000ffU 
                                             & ((::IData)(vlSymsp->vlInst.TOP.tb_mini_tpu__DOT__dut__DOT__u_array__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__b_q) 
                                                >> 7U)) 
                                            + (0x000000ffU 
                                               & ((::IData)(vlSymsp->vlInst.TOP.tb_mini_tpu__DOT__dut__DOT__u_array__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__a_q) 
                                                  >> 7U))) 
                                           - (::IData)(0x007fU)) 
                                          + (1U & (- (::IData)(
                                                               (1U 
                                                                & ((::IData)(vlSelfRef.__PVT__u_mul__DOT__prod) 
                                                                   >> 0x0000000fU)))))));
    if (__Vdfg_Regularize_469) {
        vlSelfRef.__Vdfg_Regularize_474 = (1U & (vlSelfRef.__PVT__pipeline_register__DOT__out 
                                                 >> 0x0000001fU));
        __Vdfg_Regularize_475 = (0x000000ffU & (vlSelfRef.__PVT__pipeline_register__DOT__out 
                                                >> 0x00000017U));
    } else {
        vlSelfRef.__Vdfg_Regularize_474 = (1U & (vlSelfRef.__PVT__accumulator 
                                                 >> 0x0000001fU));
        __Vdfg_Regularize_475 = (0x000000ffU & (vlSelfRef.__PVT__accumulator 
                                                >> 0x00000017U));
    }
    __Vdfg_Regularize_482 = (0x04000000U | (0x03fffff8U 
                                            & (((::IData)(__Vdfg_Regularize_469)
                                                 ? vlSelfRef.__PVT__pipeline_register__DOT__out
                                                 : vlSelfRef.__PVT__accumulator) 
                                               << 3U)));
    __Vdfg_Regularize_481 = (0x04000000U | (0x03fffff8U 
                                            & (((::IData)(__Vdfg_Regularize_469)
                                                 ? vlSelfRef.__PVT__accumulator
                                                 : vlSelfRef.__PVT__pipeline_register__DOT__out) 
                                               << 3U)));
    __Vdfg_Regularize_471 = (0x000000ffU & ((::IData)(__Vdfg_Regularize_475) 
                                            - ((::IData)(__Vdfg_Regularize_469)
                                                ? (vlSelfRef.__PVT__accumulator 
                                                   >> 0x00000017U)
                                                : (vlSelfRef.__PVT__pipeline_register__DOT__out 
                                                   >> 0x00000017U))));
    __Vdfg_Regularize_480 = ((0x1bU <= (::IData)(__Vdfg_Regularize_471))
                              ? 1U : (VL_SHIFTR_III(27,27,8, __Vdfg_Regularize_481, (::IData)(__Vdfg_Regularize_471)) 
                                      | (0U != ((VL_SHIFTL_III(27,27,8, (::IData)(1U), (::IData)(__Vdfg_Regularize_471)) 
                                                 - (::IData)(1U)) 
                                                & __Vdfg_Regularize_481))));
    __Vdfg_Regularize_468 = (0x0fffffffU & (((::IData)(vlSelfRef.__Vdfg_Regularize_474) 
                                             == (1U 
                                                 & ((::IData)(__Vdfg_Regularize_469)
                                                     ? 
                                                    (vlSelfRef.__PVT__accumulator 
                                                     >> 0x0000001fU)
                                                     : 
                                                    (vlSelfRef.__PVT__pipeline_register__DOT__out 
                                                     >> 0x0000001fU))))
                                             ? (__Vdfg_Regularize_480 
                                                + __Vdfg_Regularize_482)
                                             : (__Vdfg_Regularize_482 
                                                - __Vdfg_Regularize_480)));
    __Vdfg_Regularize_479 = (((0x02000000U & __Vdfg_Regularize_468)
                               ? 1U : ((0x01000000U 
                                        & __Vdfg_Regularize_468)
                                        ? 2U : ((0x00800000U 
                                                 & __Vdfg_Regularize_468)
                                                 ? 3U
                                                 : 
                                                ((0x00400000U 
                                                  & __Vdfg_Regularize_468)
                                                  ? 4U
                                                  : 
                                                 ((0x00200000U 
                                                   & __Vdfg_Regularize_468)
                                                   ? 5U
                                                   : 
                                                  ((0x00100000U 
                                                    & __Vdfg_Regularize_468)
                                                    ? 6U
                                                    : 
                                                   ((0x00080000U 
                                                     & __Vdfg_Regularize_468)
                                                     ? 7U
                                                     : 
                                                    ((0x00040000U 
                                                      & __Vdfg_Regularize_468)
                                                      ? 8U
                                                      : 
                                                     ((0x00020000U 
                                                       & __Vdfg_Regularize_468)
                                                       ? 9U
                                                       : 
                                                      ((0x00010000U 
                                                        & __Vdfg_Regularize_468)
                                                        ? 0x0aU
                                                        : 
                                                       ((0x00008000U 
                                                         & __Vdfg_Regularize_468)
                                                         ? 0x0bU
                                                         : 
                                                        ((0x00004000U 
                                                          & __Vdfg_Regularize_468)
                                                          ? 0x0cU
                                                          : 
                                                         ((0x00002000U 
                                                           & __Vdfg_Regularize_468)
                                                           ? 0x0dU
                                                           : 
                                                          ((0x00001000U 
                                                            & __Vdfg_Regularize_468)
                                                            ? 0x0eU
                                                            : 
                                                           ((0x00000800U 
                                                             & __Vdfg_Regularize_468)
                                                             ? 0x0fU
                                                             : 
                                                            ((0x00000400U 
                                                              & __Vdfg_Regularize_468)
                                                              ? 0x10U
                                                              : 
                                                             ((0x00000200U 
                                                               & __Vdfg_Regularize_468)
                                                               ? 0x11U
                                                               : 
                                                              ((0x00000100U 
                                                                & __Vdfg_Regularize_468)
                                                                ? 0x12U
                                                                : 
                                                               ((0x00000080U 
                                                                 & __Vdfg_Regularize_468)
                                                                 ? 0x13U
                                                                 : 
                                                                ((0x00000040U 
                                                                  & __Vdfg_Regularize_468)
                                                                  ? 0x14U
                                                                  : 
                                                                 ((0x00000020U 
                                                                   & __Vdfg_Regularize_468)
                                                                   ? 0x15U
                                                                   : 
                                                                  ((0x00000010U 
                                                                    & __Vdfg_Regularize_468)
                                                                    ? 0x16U
                                                                    : 
                                                                   ((8U 
                                                                     & __Vdfg_Regularize_468)
                                                                     ? 0x17U
                                                                     : 
                                                                    ((4U 
                                                                      & __Vdfg_Regularize_468)
                                                                      ? 0x18U
                                                                      : 
                                                                     ((2U 
                                                                       & __Vdfg_Regularize_468)
                                                                       ? 0x19U
                                                                       : 
                                                                      ((1U 
                                                                        & __Vdfg_Regularize_468)
                                                                        ? 0x1aU
                                                                        : 0x1bU)))))))))))))))))))))))))) 
                             & (- (::IData)((1U & (~ 
                                                   (__Vdfg_Regularize_468 
                                                    >> 0x0000001aU))))));
    if ((0x08000000U & __Vdfg_Regularize_468)) {
        vlSelfRef.__Vdfg_Regularize_476 = (0x07ffffffU 
                                           & ((__Vdfg_Regularize_468 
                                               >> 1U) 
                                              | (1U 
                                                 & __Vdfg_Regularize_468)));
        vlSelfRef.__Vdfg_Regularize_477 = (0x000003ffU 
                                           & ((::IData)(1U) 
                                              + (::IData)(__Vdfg_Regularize_475)));
    } else {
        vlSelfRef.__Vdfg_Regularize_476 = (0x07ffffffU 
                                           & (__Vdfg_Regularize_468 
                                              << (::IData)(__Vdfg_Regularize_479)));
        vlSelfRef.__Vdfg_Regularize_477 = (0x000003ffU 
                                           & ((::IData)(__Vdfg_Regularize_475) 
                                              - (::IData)(__Vdfg_Regularize_479)));
    }
}

VL_ATTR_COLD void Vtb_mini_tpu_processing_element___stl_comb__TOP__tb_mini_tpu__DOT__dut__DOT__u_array__DOT__row__BRA__1__KET____DOT__col__BRA__2__KET____DOT__pe__0(Vtb_mini_tpu_processing_element* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_mini_tpu_processing_element___stl_comb__TOP__tb_mini_tpu__DOT__dut__DOT__u_array__DOT__row__BRA__1__KET____DOT__col__BRA__2__KET____DOT__pe__0\n"); );
    Vtb_mini_tpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    ::IData/*27:0*/ __Vdfg_Regularize_468;
    __Vdfg_Regularize_468 = 0;
    ::CData/*0:0*/ __Vdfg_Regularize_469;
    __Vdfg_Regularize_469 = 0;
    ::CData/*7:0*/ __Vdfg_Regularize_471;
    __Vdfg_Regularize_471 = 0;
    ::CData/*7:0*/ __Vdfg_Regularize_475;
    __Vdfg_Regularize_475 = 0;
    ::CData/*4:0*/ __Vdfg_Regularize_479;
    __Vdfg_Regularize_479 = 0;
    ::IData/*27:0*/ __Vdfg_Regularize_480;
    __Vdfg_Regularize_480 = 0;
    ::IData/*26:0*/ __Vdfg_Regularize_481;
    __Vdfg_Regularize_481 = 0;
    ::IData/*27:0*/ __Vdfg_Regularize_482;
    __Vdfg_Regularize_482 = 0;
    // Body
    vlSelfRef.__PVT__u_mul__DOT__a_inf = (::IData)(
                                                   (0x7f80U 
                                                    == 
                                                    (0x7fffU 
                                                     & (::IData)(vlSymsp->vlInst.TOP.tb_mini_tpu__DOT__dut__DOT__u_array__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__a_q))));
    vlSelfRef.__PVT__u_mul__DOT__b_inf = (::IData)(
                                                   (0x7f80U 
                                                    == 
                                                    (0x7fffU 
                                                     & (::IData)(vlSymsp->vlInst.TOP.tb_mini_tpu__DOT__dut__DOT__u_array__DOT__row__BRA__0__KET____DOT__col__BRA__2__KET____DOT__b_q))));
    vlSelfRef.__PVT__u_add__DOT__a_inf = (::IData)(
                                                   (0x7f800000U 
                                                    == 
                                                    (0x7fffffffU 
                                                     & vlSelfRef.__PVT__pipeline_register__DOT__out)));
    vlSelfRef.__PVT__u_add__DOT__b_inf = (::IData)(
                                                   (0x7f800000U 
                                                    == 
                                                    (0x7fffffffU 
                                                     & vlSelfRef.__PVT__accumulator)));
    vlSelfRef.__PVT__u_mul__DOT__prod = (0x0000ffffU 
                                         & ((0x00000080U 
                                             | (0x0000007fU 
                                                & (::IData)(vlSymsp->vlInst.TOP.tb_mini_tpu__DOT__dut__DOT__u_array__DOT__row__BRA__0__KET____DOT__col__BRA__2__KET____DOT__b_q))) 
                                            * (0x00000080U 
                                               | (0x0000007fU 
                                                  & (::IData)(vlSymsp->vlInst.TOP.tb_mini_tpu__DOT__dut__DOT__u_array__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__a_q)))));
    __Vdfg_Regularize_469 = ((0x7fffffffU & vlSelfRef.__PVT__pipeline_register__DOT__out) 
                             >= (0x7fffffffU & vlSelfRef.__PVT__accumulator));
    vlSelfRef.__Vdfg_Regularize_472 = (0x000007ffU 
                                       & ((((0x000000ffU 
                                             & ((::IData)(vlSymsp->vlInst.TOP.tb_mini_tpu__DOT__dut__DOT__u_array__DOT__row__BRA__0__KET____DOT__col__BRA__2__KET____DOT__b_q) 
                                                >> 7U)) 
                                            + (0x000000ffU 
                                               & ((::IData)(vlSymsp->vlInst.TOP.tb_mini_tpu__DOT__dut__DOT__u_array__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__a_q) 
                                                  >> 7U))) 
                                           - (::IData)(0x007fU)) 
                                          + (1U & (- (::IData)(
                                                               (1U 
                                                                & ((::IData)(vlSelfRef.__PVT__u_mul__DOT__prod) 
                                                                   >> 0x0000000fU)))))));
    if (__Vdfg_Regularize_469) {
        vlSelfRef.__Vdfg_Regularize_474 = (1U & (vlSelfRef.__PVT__pipeline_register__DOT__out 
                                                 >> 0x0000001fU));
        __Vdfg_Regularize_475 = (0x000000ffU & (vlSelfRef.__PVT__pipeline_register__DOT__out 
                                                >> 0x00000017U));
    } else {
        vlSelfRef.__Vdfg_Regularize_474 = (1U & (vlSelfRef.__PVT__accumulator 
                                                 >> 0x0000001fU));
        __Vdfg_Regularize_475 = (0x000000ffU & (vlSelfRef.__PVT__accumulator 
                                                >> 0x00000017U));
    }
    __Vdfg_Regularize_482 = (0x04000000U | (0x03fffff8U 
                                            & (((::IData)(__Vdfg_Regularize_469)
                                                 ? vlSelfRef.__PVT__pipeline_register__DOT__out
                                                 : vlSelfRef.__PVT__accumulator) 
                                               << 3U)));
    __Vdfg_Regularize_481 = (0x04000000U | (0x03fffff8U 
                                            & (((::IData)(__Vdfg_Regularize_469)
                                                 ? vlSelfRef.__PVT__accumulator
                                                 : vlSelfRef.__PVT__pipeline_register__DOT__out) 
                                               << 3U)));
    __Vdfg_Regularize_471 = (0x000000ffU & ((::IData)(__Vdfg_Regularize_475) 
                                            - ((::IData)(__Vdfg_Regularize_469)
                                                ? (vlSelfRef.__PVT__accumulator 
                                                   >> 0x00000017U)
                                                : (vlSelfRef.__PVT__pipeline_register__DOT__out 
                                                   >> 0x00000017U))));
    __Vdfg_Regularize_480 = ((0x1bU <= (::IData)(__Vdfg_Regularize_471))
                              ? 1U : (VL_SHIFTR_III(27,27,8, __Vdfg_Regularize_481, (::IData)(__Vdfg_Regularize_471)) 
                                      | (0U != ((VL_SHIFTL_III(27,27,8, (::IData)(1U), (::IData)(__Vdfg_Regularize_471)) 
                                                 - (::IData)(1U)) 
                                                & __Vdfg_Regularize_481))));
    __Vdfg_Regularize_468 = (0x0fffffffU & (((::IData)(vlSelfRef.__Vdfg_Regularize_474) 
                                             == (1U 
                                                 & ((::IData)(__Vdfg_Regularize_469)
                                                     ? 
                                                    (vlSelfRef.__PVT__accumulator 
                                                     >> 0x0000001fU)
                                                     : 
                                                    (vlSelfRef.__PVT__pipeline_register__DOT__out 
                                                     >> 0x0000001fU))))
                                             ? (__Vdfg_Regularize_480 
                                                + __Vdfg_Regularize_482)
                                             : (__Vdfg_Regularize_482 
                                                - __Vdfg_Regularize_480)));
    __Vdfg_Regularize_479 = (((0x02000000U & __Vdfg_Regularize_468)
                               ? 1U : ((0x01000000U 
                                        & __Vdfg_Regularize_468)
                                        ? 2U : ((0x00800000U 
                                                 & __Vdfg_Regularize_468)
                                                 ? 3U
                                                 : 
                                                ((0x00400000U 
                                                  & __Vdfg_Regularize_468)
                                                  ? 4U
                                                  : 
                                                 ((0x00200000U 
                                                   & __Vdfg_Regularize_468)
                                                   ? 5U
                                                   : 
                                                  ((0x00100000U 
                                                    & __Vdfg_Regularize_468)
                                                    ? 6U
                                                    : 
                                                   ((0x00080000U 
                                                     & __Vdfg_Regularize_468)
                                                     ? 7U
                                                     : 
                                                    ((0x00040000U 
                                                      & __Vdfg_Regularize_468)
                                                      ? 8U
                                                      : 
                                                     ((0x00020000U 
                                                       & __Vdfg_Regularize_468)
                                                       ? 9U
                                                       : 
                                                      ((0x00010000U 
                                                        & __Vdfg_Regularize_468)
                                                        ? 0x0aU
                                                        : 
                                                       ((0x00008000U 
                                                         & __Vdfg_Regularize_468)
                                                         ? 0x0bU
                                                         : 
                                                        ((0x00004000U 
                                                          & __Vdfg_Regularize_468)
                                                          ? 0x0cU
                                                          : 
                                                         ((0x00002000U 
                                                           & __Vdfg_Regularize_468)
                                                           ? 0x0dU
                                                           : 
                                                          ((0x00001000U 
                                                            & __Vdfg_Regularize_468)
                                                            ? 0x0eU
                                                            : 
                                                           ((0x00000800U 
                                                             & __Vdfg_Regularize_468)
                                                             ? 0x0fU
                                                             : 
                                                            ((0x00000400U 
                                                              & __Vdfg_Regularize_468)
                                                              ? 0x10U
                                                              : 
                                                             ((0x00000200U 
                                                               & __Vdfg_Regularize_468)
                                                               ? 0x11U
                                                               : 
                                                              ((0x00000100U 
                                                                & __Vdfg_Regularize_468)
                                                                ? 0x12U
                                                                : 
                                                               ((0x00000080U 
                                                                 & __Vdfg_Regularize_468)
                                                                 ? 0x13U
                                                                 : 
                                                                ((0x00000040U 
                                                                  & __Vdfg_Regularize_468)
                                                                  ? 0x14U
                                                                  : 
                                                                 ((0x00000020U 
                                                                   & __Vdfg_Regularize_468)
                                                                   ? 0x15U
                                                                   : 
                                                                  ((0x00000010U 
                                                                    & __Vdfg_Regularize_468)
                                                                    ? 0x16U
                                                                    : 
                                                                   ((8U 
                                                                     & __Vdfg_Regularize_468)
                                                                     ? 0x17U
                                                                     : 
                                                                    ((4U 
                                                                      & __Vdfg_Regularize_468)
                                                                      ? 0x18U
                                                                      : 
                                                                     ((2U 
                                                                       & __Vdfg_Regularize_468)
                                                                       ? 0x19U
                                                                       : 
                                                                      ((1U 
                                                                        & __Vdfg_Regularize_468)
                                                                        ? 0x1aU
                                                                        : 0x1bU)))))))))))))))))))))))))) 
                             & (- (::IData)((1U & (~ 
                                                   (__Vdfg_Regularize_468 
                                                    >> 0x0000001aU))))));
    if ((0x08000000U & __Vdfg_Regularize_468)) {
        vlSelfRef.__Vdfg_Regularize_476 = (0x07ffffffU 
                                           & ((__Vdfg_Regularize_468 
                                               >> 1U) 
                                              | (1U 
                                                 & __Vdfg_Regularize_468)));
        vlSelfRef.__Vdfg_Regularize_477 = (0x000003ffU 
                                           & ((::IData)(1U) 
                                              + (::IData)(__Vdfg_Regularize_475)));
    } else {
        vlSelfRef.__Vdfg_Regularize_476 = (0x07ffffffU 
                                           & (__Vdfg_Regularize_468 
                                              << (::IData)(__Vdfg_Regularize_479)));
        vlSelfRef.__Vdfg_Regularize_477 = (0x000003ffU 
                                           & ((::IData)(__Vdfg_Regularize_475) 
                                              - (::IData)(__Vdfg_Regularize_479)));
    }
}

VL_ATTR_COLD void Vtb_mini_tpu_processing_element___stl_comb__TOP__tb_mini_tpu__DOT__dut__DOT__u_array__DOT__row__BRA__1__KET____DOT__col__BRA__3__KET____DOT__pe__0(Vtb_mini_tpu_processing_element* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_mini_tpu_processing_element___stl_comb__TOP__tb_mini_tpu__DOT__dut__DOT__u_array__DOT__row__BRA__1__KET____DOT__col__BRA__3__KET____DOT__pe__0\n"); );
    Vtb_mini_tpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    ::IData/*27:0*/ __Vdfg_Regularize_468;
    __Vdfg_Regularize_468 = 0;
    ::CData/*0:0*/ __Vdfg_Regularize_469;
    __Vdfg_Regularize_469 = 0;
    ::CData/*7:0*/ __Vdfg_Regularize_471;
    __Vdfg_Regularize_471 = 0;
    ::CData/*7:0*/ __Vdfg_Regularize_475;
    __Vdfg_Regularize_475 = 0;
    ::CData/*4:0*/ __Vdfg_Regularize_479;
    __Vdfg_Regularize_479 = 0;
    ::IData/*27:0*/ __Vdfg_Regularize_480;
    __Vdfg_Regularize_480 = 0;
    ::IData/*26:0*/ __Vdfg_Regularize_481;
    __Vdfg_Regularize_481 = 0;
    ::IData/*27:0*/ __Vdfg_Regularize_482;
    __Vdfg_Regularize_482 = 0;
    // Body
    vlSelfRef.__PVT__u_mul__DOT__a_inf = (::IData)(
                                                   (0x7f80U 
                                                    == 
                                                    (0x7fffU 
                                                     & (::IData)(vlSymsp->vlInst.TOP.tb_mini_tpu__DOT__dut__DOT__u_array__DOT__row__BRA__1__KET____DOT__col__BRA__2__KET____DOT__a_q))));
    vlSelfRef.__PVT__u_mul__DOT__b_inf = (::IData)(
                                                   (0x7f80U 
                                                    == 
                                                    (0x7fffU 
                                                     & (::IData)(vlSymsp->vlInst.TOP.tb_mini_tpu__DOT__dut__DOT__u_array__DOT__row__BRA__0__KET____DOT__col__BRA__3__KET____DOT__b_q))));
    vlSelfRef.__PVT__u_add__DOT__a_inf = (::IData)(
                                                   (0x7f800000U 
                                                    == 
                                                    (0x7fffffffU 
                                                     & vlSelfRef.__PVT__pipeline_register__DOT__out)));
    vlSelfRef.__PVT__u_add__DOT__b_inf = (::IData)(
                                                   (0x7f800000U 
                                                    == 
                                                    (0x7fffffffU 
                                                     & vlSelfRef.__PVT__accumulator)));
    vlSelfRef.__PVT__u_mul__DOT__prod = (0x0000ffffU 
                                         & ((0x00000080U 
                                             | (0x0000007fU 
                                                & (::IData)(vlSymsp->vlInst.TOP.tb_mini_tpu__DOT__dut__DOT__u_array__DOT__row__BRA__0__KET____DOT__col__BRA__3__KET____DOT__b_q))) 
                                            * (0x00000080U 
                                               | (0x0000007fU 
                                                  & (::IData)(vlSymsp->vlInst.TOP.tb_mini_tpu__DOT__dut__DOT__u_array__DOT__row__BRA__1__KET____DOT__col__BRA__2__KET____DOT__a_q)))));
    __Vdfg_Regularize_469 = ((0x7fffffffU & vlSelfRef.__PVT__pipeline_register__DOT__out) 
                             >= (0x7fffffffU & vlSelfRef.__PVT__accumulator));
    vlSelfRef.__Vdfg_Regularize_472 = (0x000007ffU 
                                       & ((((0x000000ffU 
                                             & ((::IData)(vlSymsp->vlInst.TOP.tb_mini_tpu__DOT__dut__DOT__u_array__DOT__row__BRA__0__KET____DOT__col__BRA__3__KET____DOT__b_q) 
                                                >> 7U)) 
                                            + (0x000000ffU 
                                               & ((::IData)(vlSymsp->vlInst.TOP.tb_mini_tpu__DOT__dut__DOT__u_array__DOT__row__BRA__1__KET____DOT__col__BRA__2__KET____DOT__a_q) 
                                                  >> 7U))) 
                                           - (::IData)(0x007fU)) 
                                          + (1U & (- (::IData)(
                                                               (1U 
                                                                & ((::IData)(vlSelfRef.__PVT__u_mul__DOT__prod) 
                                                                   >> 0x0000000fU)))))));
    if (__Vdfg_Regularize_469) {
        vlSelfRef.__Vdfg_Regularize_474 = (1U & (vlSelfRef.__PVT__pipeline_register__DOT__out 
                                                 >> 0x0000001fU));
        __Vdfg_Regularize_475 = (0x000000ffU & (vlSelfRef.__PVT__pipeline_register__DOT__out 
                                                >> 0x00000017U));
    } else {
        vlSelfRef.__Vdfg_Regularize_474 = (1U & (vlSelfRef.__PVT__accumulator 
                                                 >> 0x0000001fU));
        __Vdfg_Regularize_475 = (0x000000ffU & (vlSelfRef.__PVT__accumulator 
                                                >> 0x00000017U));
    }
    __Vdfg_Regularize_482 = (0x04000000U | (0x03fffff8U 
                                            & (((::IData)(__Vdfg_Regularize_469)
                                                 ? vlSelfRef.__PVT__pipeline_register__DOT__out
                                                 : vlSelfRef.__PVT__accumulator) 
                                               << 3U)));
    __Vdfg_Regularize_481 = (0x04000000U | (0x03fffff8U 
                                            & (((::IData)(__Vdfg_Regularize_469)
                                                 ? vlSelfRef.__PVT__accumulator
                                                 : vlSelfRef.__PVT__pipeline_register__DOT__out) 
                                               << 3U)));
    __Vdfg_Regularize_471 = (0x000000ffU & ((::IData)(__Vdfg_Regularize_475) 
                                            - ((::IData)(__Vdfg_Regularize_469)
                                                ? (vlSelfRef.__PVT__accumulator 
                                                   >> 0x00000017U)
                                                : (vlSelfRef.__PVT__pipeline_register__DOT__out 
                                                   >> 0x00000017U))));
    __Vdfg_Regularize_480 = ((0x1bU <= (::IData)(__Vdfg_Regularize_471))
                              ? 1U : (VL_SHIFTR_III(27,27,8, __Vdfg_Regularize_481, (::IData)(__Vdfg_Regularize_471)) 
                                      | (0U != ((VL_SHIFTL_III(27,27,8, (::IData)(1U), (::IData)(__Vdfg_Regularize_471)) 
                                                 - (::IData)(1U)) 
                                                & __Vdfg_Regularize_481))));
    __Vdfg_Regularize_468 = (0x0fffffffU & (((::IData)(vlSelfRef.__Vdfg_Regularize_474) 
                                             == (1U 
                                                 & ((::IData)(__Vdfg_Regularize_469)
                                                     ? 
                                                    (vlSelfRef.__PVT__accumulator 
                                                     >> 0x0000001fU)
                                                     : 
                                                    (vlSelfRef.__PVT__pipeline_register__DOT__out 
                                                     >> 0x0000001fU))))
                                             ? (__Vdfg_Regularize_480 
                                                + __Vdfg_Regularize_482)
                                             : (__Vdfg_Regularize_482 
                                                - __Vdfg_Regularize_480)));
    __Vdfg_Regularize_479 = (((0x02000000U & __Vdfg_Regularize_468)
                               ? 1U : ((0x01000000U 
                                        & __Vdfg_Regularize_468)
                                        ? 2U : ((0x00800000U 
                                                 & __Vdfg_Regularize_468)
                                                 ? 3U
                                                 : 
                                                ((0x00400000U 
                                                  & __Vdfg_Regularize_468)
                                                  ? 4U
                                                  : 
                                                 ((0x00200000U 
                                                   & __Vdfg_Regularize_468)
                                                   ? 5U
                                                   : 
                                                  ((0x00100000U 
                                                    & __Vdfg_Regularize_468)
                                                    ? 6U
                                                    : 
                                                   ((0x00080000U 
                                                     & __Vdfg_Regularize_468)
                                                     ? 7U
                                                     : 
                                                    ((0x00040000U 
                                                      & __Vdfg_Regularize_468)
                                                      ? 8U
                                                      : 
                                                     ((0x00020000U 
                                                       & __Vdfg_Regularize_468)
                                                       ? 9U
                                                       : 
                                                      ((0x00010000U 
                                                        & __Vdfg_Regularize_468)
                                                        ? 0x0aU
                                                        : 
                                                       ((0x00008000U 
                                                         & __Vdfg_Regularize_468)
                                                         ? 0x0bU
                                                         : 
                                                        ((0x00004000U 
                                                          & __Vdfg_Regularize_468)
                                                          ? 0x0cU
                                                          : 
                                                         ((0x00002000U 
                                                           & __Vdfg_Regularize_468)
                                                           ? 0x0dU
                                                           : 
                                                          ((0x00001000U 
                                                            & __Vdfg_Regularize_468)
                                                            ? 0x0eU
                                                            : 
                                                           ((0x00000800U 
                                                             & __Vdfg_Regularize_468)
                                                             ? 0x0fU
                                                             : 
                                                            ((0x00000400U 
                                                              & __Vdfg_Regularize_468)
                                                              ? 0x10U
                                                              : 
                                                             ((0x00000200U 
                                                               & __Vdfg_Regularize_468)
                                                               ? 0x11U
                                                               : 
                                                              ((0x00000100U 
                                                                & __Vdfg_Regularize_468)
                                                                ? 0x12U
                                                                : 
                                                               ((0x00000080U 
                                                                 & __Vdfg_Regularize_468)
                                                                 ? 0x13U
                                                                 : 
                                                                ((0x00000040U 
                                                                  & __Vdfg_Regularize_468)
                                                                  ? 0x14U
                                                                  : 
                                                                 ((0x00000020U 
                                                                   & __Vdfg_Regularize_468)
                                                                   ? 0x15U
                                                                   : 
                                                                  ((0x00000010U 
                                                                    & __Vdfg_Regularize_468)
                                                                    ? 0x16U
                                                                    : 
                                                                   ((8U 
                                                                     & __Vdfg_Regularize_468)
                                                                     ? 0x17U
                                                                     : 
                                                                    ((4U 
                                                                      & __Vdfg_Regularize_468)
                                                                      ? 0x18U
                                                                      : 
                                                                     ((2U 
                                                                       & __Vdfg_Regularize_468)
                                                                       ? 0x19U
                                                                       : 
                                                                      ((1U 
                                                                        & __Vdfg_Regularize_468)
                                                                        ? 0x1aU
                                                                        : 0x1bU)))))))))))))))))))))))))) 
                             & (- (::IData)((1U & (~ 
                                                   (__Vdfg_Regularize_468 
                                                    >> 0x0000001aU))))));
    if ((0x08000000U & __Vdfg_Regularize_468)) {
        vlSelfRef.__Vdfg_Regularize_476 = (0x07ffffffU 
                                           & ((__Vdfg_Regularize_468 
                                               >> 1U) 
                                              | (1U 
                                                 & __Vdfg_Regularize_468)));
        vlSelfRef.__Vdfg_Regularize_477 = (0x000003ffU 
                                           & ((::IData)(1U) 
                                              + (::IData)(__Vdfg_Regularize_475)));
    } else {
        vlSelfRef.__Vdfg_Regularize_476 = (0x07ffffffU 
                                           & (__Vdfg_Regularize_468 
                                              << (::IData)(__Vdfg_Regularize_479)));
        vlSelfRef.__Vdfg_Regularize_477 = (0x000003ffU 
                                           & ((::IData)(__Vdfg_Regularize_475) 
                                              - (::IData)(__Vdfg_Regularize_479)));
    }
}

VL_ATTR_COLD void Vtb_mini_tpu_processing_element___stl_comb__TOP__tb_mini_tpu__DOT__dut__DOT__u_array__DOT__row__BRA__2__KET____DOT__col__BRA__0__KET____DOT__pe__0(Vtb_mini_tpu_processing_element* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_mini_tpu_processing_element___stl_comb__TOP__tb_mini_tpu__DOT__dut__DOT__u_array__DOT__row__BRA__2__KET____DOT__col__BRA__0__KET____DOT__pe__0\n"); );
    Vtb_mini_tpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    ::IData/*27:0*/ __Vdfg_Regularize_468;
    __Vdfg_Regularize_468 = 0;
    ::CData/*0:0*/ __Vdfg_Regularize_469;
    __Vdfg_Regularize_469 = 0;
    ::CData/*7:0*/ __Vdfg_Regularize_471;
    __Vdfg_Regularize_471 = 0;
    ::CData/*7:0*/ __Vdfg_Regularize_475;
    __Vdfg_Regularize_475 = 0;
    ::CData/*4:0*/ __Vdfg_Regularize_479;
    __Vdfg_Regularize_479 = 0;
    ::IData/*27:0*/ __Vdfg_Regularize_480;
    __Vdfg_Regularize_480 = 0;
    ::IData/*26:0*/ __Vdfg_Regularize_481;
    __Vdfg_Regularize_481 = 0;
    ::IData/*27:0*/ __Vdfg_Regularize_482;
    __Vdfg_Regularize_482 = 0;
    // Body
    vlSelfRef.__PVT__u_mul__DOT__a_inf = (::IData)(
                                                   (0x7f80U 
                                                    == 
                                                    (0x7fffU 
                                                     & (::IData)(vlSymsp->vlInst.TOP.tb_mini_tpu__DOT__dut__DOT__u_mem__DOT__skew__BRA__2__KET____DOT__sr_a__BRA__2__KET__))));
    vlSelfRef.__PVT__u_mul__DOT__b_inf = (::IData)(
                                                   (0x7f80U 
                                                    == 
                                                    (0x7fffU 
                                                     & (::IData)(vlSymsp->vlInst.TOP.tb_mini_tpu__DOT__dut__DOT__u_array__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__b_q))));
    vlSelfRef.__PVT__u_add__DOT__a_inf = (::IData)(
                                                   (0x7f800000U 
                                                    == 
                                                    (0x7fffffffU 
                                                     & vlSelfRef.__PVT__pipeline_register__DOT__out)));
    vlSelfRef.__PVT__u_add__DOT__b_inf = (::IData)(
                                                   (0x7f800000U 
                                                    == 
                                                    (0x7fffffffU 
                                                     & vlSelfRef.__PVT__accumulator)));
    vlSelfRef.__PVT__u_mul__DOT__prod = (0x0000ffffU 
                                         & ((0x00000080U 
                                             | (0x0000007fU 
                                                & (::IData)(vlSymsp->vlInst.TOP.tb_mini_tpu__DOT__dut__DOT__u_array__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__b_q))) 
                                            * (0x00000080U 
                                               | (0x0000007fU 
                                                  & (::IData)(vlSymsp->vlInst.TOP.tb_mini_tpu__DOT__dut__DOT__u_mem__DOT__skew__BRA__2__KET____DOT__sr_a__BRA__2__KET__)))));
    __Vdfg_Regularize_469 = ((0x7fffffffU & vlSelfRef.__PVT__pipeline_register__DOT__out) 
                             >= (0x7fffffffU & vlSelfRef.__PVT__accumulator));
    vlSelfRef.__Vdfg_Regularize_472 = (0x000007ffU 
                                       & ((((0x000000ffU 
                                             & ((::IData)(vlSymsp->vlInst.TOP.tb_mini_tpu__DOT__dut__DOT__u_array__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__b_q) 
                                                >> 7U)) 
                                            + (0x000000ffU 
                                               & ((::IData)(vlSymsp->vlInst.TOP.tb_mini_tpu__DOT__dut__DOT__u_mem__DOT__skew__BRA__2__KET____DOT__sr_a__BRA__2__KET__) 
                                                  >> 7U))) 
                                           - (::IData)(0x007fU)) 
                                          + (1U & (- (::IData)(
                                                               (1U 
                                                                & ((::IData)(vlSelfRef.__PVT__u_mul__DOT__prod) 
                                                                   >> 0x0000000fU)))))));
    if (__Vdfg_Regularize_469) {
        vlSelfRef.__Vdfg_Regularize_474 = (1U & (vlSelfRef.__PVT__pipeline_register__DOT__out 
                                                 >> 0x0000001fU));
        __Vdfg_Regularize_475 = (0x000000ffU & (vlSelfRef.__PVT__pipeline_register__DOT__out 
                                                >> 0x00000017U));
    } else {
        vlSelfRef.__Vdfg_Regularize_474 = (1U & (vlSelfRef.__PVT__accumulator 
                                                 >> 0x0000001fU));
        __Vdfg_Regularize_475 = (0x000000ffU & (vlSelfRef.__PVT__accumulator 
                                                >> 0x00000017U));
    }
    __Vdfg_Regularize_482 = (0x04000000U | (0x03fffff8U 
                                            & (((::IData)(__Vdfg_Regularize_469)
                                                 ? vlSelfRef.__PVT__pipeline_register__DOT__out
                                                 : vlSelfRef.__PVT__accumulator) 
                                               << 3U)));
    __Vdfg_Regularize_481 = (0x04000000U | (0x03fffff8U 
                                            & (((::IData)(__Vdfg_Regularize_469)
                                                 ? vlSelfRef.__PVT__accumulator
                                                 : vlSelfRef.__PVT__pipeline_register__DOT__out) 
                                               << 3U)));
    __Vdfg_Regularize_471 = (0x000000ffU & ((::IData)(__Vdfg_Regularize_475) 
                                            - ((::IData)(__Vdfg_Regularize_469)
                                                ? (vlSelfRef.__PVT__accumulator 
                                                   >> 0x00000017U)
                                                : (vlSelfRef.__PVT__pipeline_register__DOT__out 
                                                   >> 0x00000017U))));
    __Vdfg_Regularize_480 = ((0x1bU <= (::IData)(__Vdfg_Regularize_471))
                              ? 1U : (VL_SHIFTR_III(27,27,8, __Vdfg_Regularize_481, (::IData)(__Vdfg_Regularize_471)) 
                                      | (0U != ((VL_SHIFTL_III(27,27,8, (::IData)(1U), (::IData)(__Vdfg_Regularize_471)) 
                                                 - (::IData)(1U)) 
                                                & __Vdfg_Regularize_481))));
    __Vdfg_Regularize_468 = (0x0fffffffU & (((::IData)(vlSelfRef.__Vdfg_Regularize_474) 
                                             == (1U 
                                                 & ((::IData)(__Vdfg_Regularize_469)
                                                     ? 
                                                    (vlSelfRef.__PVT__accumulator 
                                                     >> 0x0000001fU)
                                                     : 
                                                    (vlSelfRef.__PVT__pipeline_register__DOT__out 
                                                     >> 0x0000001fU))))
                                             ? (__Vdfg_Regularize_480 
                                                + __Vdfg_Regularize_482)
                                             : (__Vdfg_Regularize_482 
                                                - __Vdfg_Regularize_480)));
    __Vdfg_Regularize_479 = (((0x02000000U & __Vdfg_Regularize_468)
                               ? 1U : ((0x01000000U 
                                        & __Vdfg_Regularize_468)
                                        ? 2U : ((0x00800000U 
                                                 & __Vdfg_Regularize_468)
                                                 ? 3U
                                                 : 
                                                ((0x00400000U 
                                                  & __Vdfg_Regularize_468)
                                                  ? 4U
                                                  : 
                                                 ((0x00200000U 
                                                   & __Vdfg_Regularize_468)
                                                   ? 5U
                                                   : 
                                                  ((0x00100000U 
                                                    & __Vdfg_Regularize_468)
                                                    ? 6U
                                                    : 
                                                   ((0x00080000U 
                                                     & __Vdfg_Regularize_468)
                                                     ? 7U
                                                     : 
                                                    ((0x00040000U 
                                                      & __Vdfg_Regularize_468)
                                                      ? 8U
                                                      : 
                                                     ((0x00020000U 
                                                       & __Vdfg_Regularize_468)
                                                       ? 9U
                                                       : 
                                                      ((0x00010000U 
                                                        & __Vdfg_Regularize_468)
                                                        ? 0x0aU
                                                        : 
                                                       ((0x00008000U 
                                                         & __Vdfg_Regularize_468)
                                                         ? 0x0bU
                                                         : 
                                                        ((0x00004000U 
                                                          & __Vdfg_Regularize_468)
                                                          ? 0x0cU
                                                          : 
                                                         ((0x00002000U 
                                                           & __Vdfg_Regularize_468)
                                                           ? 0x0dU
                                                           : 
                                                          ((0x00001000U 
                                                            & __Vdfg_Regularize_468)
                                                            ? 0x0eU
                                                            : 
                                                           ((0x00000800U 
                                                             & __Vdfg_Regularize_468)
                                                             ? 0x0fU
                                                             : 
                                                            ((0x00000400U 
                                                              & __Vdfg_Regularize_468)
                                                              ? 0x10U
                                                              : 
                                                             ((0x00000200U 
                                                               & __Vdfg_Regularize_468)
                                                               ? 0x11U
                                                               : 
                                                              ((0x00000100U 
                                                                & __Vdfg_Regularize_468)
                                                                ? 0x12U
                                                                : 
                                                               ((0x00000080U 
                                                                 & __Vdfg_Regularize_468)
                                                                 ? 0x13U
                                                                 : 
                                                                ((0x00000040U 
                                                                  & __Vdfg_Regularize_468)
                                                                  ? 0x14U
                                                                  : 
                                                                 ((0x00000020U 
                                                                   & __Vdfg_Regularize_468)
                                                                   ? 0x15U
                                                                   : 
                                                                  ((0x00000010U 
                                                                    & __Vdfg_Regularize_468)
                                                                    ? 0x16U
                                                                    : 
                                                                   ((8U 
                                                                     & __Vdfg_Regularize_468)
                                                                     ? 0x17U
                                                                     : 
                                                                    ((4U 
                                                                      & __Vdfg_Regularize_468)
                                                                      ? 0x18U
                                                                      : 
                                                                     ((2U 
                                                                       & __Vdfg_Regularize_468)
                                                                       ? 0x19U
                                                                       : 
                                                                      ((1U 
                                                                        & __Vdfg_Regularize_468)
                                                                        ? 0x1aU
                                                                        : 0x1bU)))))))))))))))))))))))))) 
                             & (- (::IData)((1U & (~ 
                                                   (__Vdfg_Regularize_468 
                                                    >> 0x0000001aU))))));
    if ((0x08000000U & __Vdfg_Regularize_468)) {
        vlSelfRef.__Vdfg_Regularize_476 = (0x07ffffffU 
                                           & ((__Vdfg_Regularize_468 
                                               >> 1U) 
                                              | (1U 
                                                 & __Vdfg_Regularize_468)));
        vlSelfRef.__Vdfg_Regularize_477 = (0x000003ffU 
                                           & ((::IData)(1U) 
                                              + (::IData)(__Vdfg_Regularize_475)));
    } else {
        vlSelfRef.__Vdfg_Regularize_476 = (0x07ffffffU 
                                           & (__Vdfg_Regularize_468 
                                              << (::IData)(__Vdfg_Regularize_479)));
        vlSelfRef.__Vdfg_Regularize_477 = (0x000003ffU 
                                           & ((::IData)(__Vdfg_Regularize_475) 
                                              - (::IData)(__Vdfg_Regularize_479)));
    }
}

VL_ATTR_COLD void Vtb_mini_tpu_processing_element___stl_comb__TOP__tb_mini_tpu__DOT__dut__DOT__u_array__DOT__row__BRA__2__KET____DOT__col__BRA__1__KET____DOT__pe__0(Vtb_mini_tpu_processing_element* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_mini_tpu_processing_element___stl_comb__TOP__tb_mini_tpu__DOT__dut__DOT__u_array__DOT__row__BRA__2__KET____DOT__col__BRA__1__KET____DOT__pe__0\n"); );
    Vtb_mini_tpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    ::IData/*27:0*/ __Vdfg_Regularize_468;
    __Vdfg_Regularize_468 = 0;
    ::CData/*0:0*/ __Vdfg_Regularize_469;
    __Vdfg_Regularize_469 = 0;
    ::CData/*7:0*/ __Vdfg_Regularize_471;
    __Vdfg_Regularize_471 = 0;
    ::CData/*7:0*/ __Vdfg_Regularize_475;
    __Vdfg_Regularize_475 = 0;
    ::CData/*4:0*/ __Vdfg_Regularize_479;
    __Vdfg_Regularize_479 = 0;
    ::IData/*27:0*/ __Vdfg_Regularize_480;
    __Vdfg_Regularize_480 = 0;
    ::IData/*26:0*/ __Vdfg_Regularize_481;
    __Vdfg_Regularize_481 = 0;
    ::IData/*27:0*/ __Vdfg_Regularize_482;
    __Vdfg_Regularize_482 = 0;
    // Body
    vlSelfRef.__PVT__u_mul__DOT__a_inf = (::IData)(
                                                   (0x7f80U 
                                                    == 
                                                    (0x7fffU 
                                                     & (::IData)(vlSymsp->vlInst.TOP.tb_mini_tpu__DOT__dut__DOT__u_array__DOT__row__BRA__2__KET____DOT__col__BRA__0__KET____DOT__a_q))));
    vlSelfRef.__PVT__u_mul__DOT__b_inf = (::IData)(
                                                   (0x7f80U 
                                                    == 
                                                    (0x7fffU 
                                                     & (::IData)(vlSymsp->vlInst.TOP.tb_mini_tpu__DOT__dut__DOT__u_array__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__b_q))));
    vlSelfRef.__PVT__u_add__DOT__a_inf = (::IData)(
                                                   (0x7f800000U 
                                                    == 
                                                    (0x7fffffffU 
                                                     & vlSelfRef.__PVT__pipeline_register__DOT__out)));
    vlSelfRef.__PVT__u_add__DOT__b_inf = (::IData)(
                                                   (0x7f800000U 
                                                    == 
                                                    (0x7fffffffU 
                                                     & vlSelfRef.__PVT__accumulator)));
    vlSelfRef.__PVT__u_mul__DOT__prod = (0x0000ffffU 
                                         & ((0x00000080U 
                                             | (0x0000007fU 
                                                & (::IData)(vlSymsp->vlInst.TOP.tb_mini_tpu__DOT__dut__DOT__u_array__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__b_q))) 
                                            * (0x00000080U 
                                               | (0x0000007fU 
                                                  & (::IData)(vlSymsp->vlInst.TOP.tb_mini_tpu__DOT__dut__DOT__u_array__DOT__row__BRA__2__KET____DOT__col__BRA__0__KET____DOT__a_q)))));
    __Vdfg_Regularize_469 = ((0x7fffffffU & vlSelfRef.__PVT__pipeline_register__DOT__out) 
                             >= (0x7fffffffU & vlSelfRef.__PVT__accumulator));
    vlSelfRef.__Vdfg_Regularize_472 = (0x000007ffU 
                                       & ((((0x000000ffU 
                                             & ((::IData)(vlSymsp->vlInst.TOP.tb_mini_tpu__DOT__dut__DOT__u_array__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__b_q) 
                                                >> 7U)) 
                                            + (0x000000ffU 
                                               & ((::IData)(vlSymsp->vlInst.TOP.tb_mini_tpu__DOT__dut__DOT__u_array__DOT__row__BRA__2__KET____DOT__col__BRA__0__KET____DOT__a_q) 
                                                  >> 7U))) 
                                           - (::IData)(0x007fU)) 
                                          + (1U & (- (::IData)(
                                                               (1U 
                                                                & ((::IData)(vlSelfRef.__PVT__u_mul__DOT__prod) 
                                                                   >> 0x0000000fU)))))));
    if (__Vdfg_Regularize_469) {
        vlSelfRef.__Vdfg_Regularize_474 = (1U & (vlSelfRef.__PVT__pipeline_register__DOT__out 
                                                 >> 0x0000001fU));
        __Vdfg_Regularize_475 = (0x000000ffU & (vlSelfRef.__PVT__pipeline_register__DOT__out 
                                                >> 0x00000017U));
    } else {
        vlSelfRef.__Vdfg_Regularize_474 = (1U & (vlSelfRef.__PVT__accumulator 
                                                 >> 0x0000001fU));
        __Vdfg_Regularize_475 = (0x000000ffU & (vlSelfRef.__PVT__accumulator 
                                                >> 0x00000017U));
    }
    __Vdfg_Regularize_482 = (0x04000000U | (0x03fffff8U 
                                            & (((::IData)(__Vdfg_Regularize_469)
                                                 ? vlSelfRef.__PVT__pipeline_register__DOT__out
                                                 : vlSelfRef.__PVT__accumulator) 
                                               << 3U)));
    __Vdfg_Regularize_481 = (0x04000000U | (0x03fffff8U 
                                            & (((::IData)(__Vdfg_Regularize_469)
                                                 ? vlSelfRef.__PVT__accumulator
                                                 : vlSelfRef.__PVT__pipeline_register__DOT__out) 
                                               << 3U)));
    __Vdfg_Regularize_471 = (0x000000ffU & ((::IData)(__Vdfg_Regularize_475) 
                                            - ((::IData)(__Vdfg_Regularize_469)
                                                ? (vlSelfRef.__PVT__accumulator 
                                                   >> 0x00000017U)
                                                : (vlSelfRef.__PVT__pipeline_register__DOT__out 
                                                   >> 0x00000017U))));
    __Vdfg_Regularize_480 = ((0x1bU <= (::IData)(__Vdfg_Regularize_471))
                              ? 1U : (VL_SHIFTR_III(27,27,8, __Vdfg_Regularize_481, (::IData)(__Vdfg_Regularize_471)) 
                                      | (0U != ((VL_SHIFTL_III(27,27,8, (::IData)(1U), (::IData)(__Vdfg_Regularize_471)) 
                                                 - (::IData)(1U)) 
                                                & __Vdfg_Regularize_481))));
    __Vdfg_Regularize_468 = (0x0fffffffU & (((::IData)(vlSelfRef.__Vdfg_Regularize_474) 
                                             == (1U 
                                                 & ((::IData)(__Vdfg_Regularize_469)
                                                     ? 
                                                    (vlSelfRef.__PVT__accumulator 
                                                     >> 0x0000001fU)
                                                     : 
                                                    (vlSelfRef.__PVT__pipeline_register__DOT__out 
                                                     >> 0x0000001fU))))
                                             ? (__Vdfg_Regularize_480 
                                                + __Vdfg_Regularize_482)
                                             : (__Vdfg_Regularize_482 
                                                - __Vdfg_Regularize_480)));
    __Vdfg_Regularize_479 = (((0x02000000U & __Vdfg_Regularize_468)
                               ? 1U : ((0x01000000U 
                                        & __Vdfg_Regularize_468)
                                        ? 2U : ((0x00800000U 
                                                 & __Vdfg_Regularize_468)
                                                 ? 3U
                                                 : 
                                                ((0x00400000U 
                                                  & __Vdfg_Regularize_468)
                                                  ? 4U
                                                  : 
                                                 ((0x00200000U 
                                                   & __Vdfg_Regularize_468)
                                                   ? 5U
                                                   : 
                                                  ((0x00100000U 
                                                    & __Vdfg_Regularize_468)
                                                    ? 6U
                                                    : 
                                                   ((0x00080000U 
                                                     & __Vdfg_Regularize_468)
                                                     ? 7U
                                                     : 
                                                    ((0x00040000U 
                                                      & __Vdfg_Regularize_468)
                                                      ? 8U
                                                      : 
                                                     ((0x00020000U 
                                                       & __Vdfg_Regularize_468)
                                                       ? 9U
                                                       : 
                                                      ((0x00010000U 
                                                        & __Vdfg_Regularize_468)
                                                        ? 0x0aU
                                                        : 
                                                       ((0x00008000U 
                                                         & __Vdfg_Regularize_468)
                                                         ? 0x0bU
                                                         : 
                                                        ((0x00004000U 
                                                          & __Vdfg_Regularize_468)
                                                          ? 0x0cU
                                                          : 
                                                         ((0x00002000U 
                                                           & __Vdfg_Regularize_468)
                                                           ? 0x0dU
                                                           : 
                                                          ((0x00001000U 
                                                            & __Vdfg_Regularize_468)
                                                            ? 0x0eU
                                                            : 
                                                           ((0x00000800U 
                                                             & __Vdfg_Regularize_468)
                                                             ? 0x0fU
                                                             : 
                                                            ((0x00000400U 
                                                              & __Vdfg_Regularize_468)
                                                              ? 0x10U
                                                              : 
                                                             ((0x00000200U 
                                                               & __Vdfg_Regularize_468)
                                                               ? 0x11U
                                                               : 
                                                              ((0x00000100U 
                                                                & __Vdfg_Regularize_468)
                                                                ? 0x12U
                                                                : 
                                                               ((0x00000080U 
                                                                 & __Vdfg_Regularize_468)
                                                                 ? 0x13U
                                                                 : 
                                                                ((0x00000040U 
                                                                  & __Vdfg_Regularize_468)
                                                                  ? 0x14U
                                                                  : 
                                                                 ((0x00000020U 
                                                                   & __Vdfg_Regularize_468)
                                                                   ? 0x15U
                                                                   : 
                                                                  ((0x00000010U 
                                                                    & __Vdfg_Regularize_468)
                                                                    ? 0x16U
                                                                    : 
                                                                   ((8U 
                                                                     & __Vdfg_Regularize_468)
                                                                     ? 0x17U
                                                                     : 
                                                                    ((4U 
                                                                      & __Vdfg_Regularize_468)
                                                                      ? 0x18U
                                                                      : 
                                                                     ((2U 
                                                                       & __Vdfg_Regularize_468)
                                                                       ? 0x19U
                                                                       : 
                                                                      ((1U 
                                                                        & __Vdfg_Regularize_468)
                                                                        ? 0x1aU
                                                                        : 0x1bU)))))))))))))))))))))))))) 
                             & (- (::IData)((1U & (~ 
                                                   (__Vdfg_Regularize_468 
                                                    >> 0x0000001aU))))));
    if ((0x08000000U & __Vdfg_Regularize_468)) {
        vlSelfRef.__Vdfg_Regularize_476 = (0x07ffffffU 
                                           & ((__Vdfg_Regularize_468 
                                               >> 1U) 
                                              | (1U 
                                                 & __Vdfg_Regularize_468)));
        vlSelfRef.__Vdfg_Regularize_477 = (0x000003ffU 
                                           & ((::IData)(1U) 
                                              + (::IData)(__Vdfg_Regularize_475)));
    } else {
        vlSelfRef.__Vdfg_Regularize_476 = (0x07ffffffU 
                                           & (__Vdfg_Regularize_468 
                                              << (::IData)(__Vdfg_Regularize_479)));
        vlSelfRef.__Vdfg_Regularize_477 = (0x000003ffU 
                                           & ((::IData)(__Vdfg_Regularize_475) 
                                              - (::IData)(__Vdfg_Regularize_479)));
    }
}

VL_ATTR_COLD void Vtb_mini_tpu_processing_element___stl_comb__TOP__tb_mini_tpu__DOT__dut__DOT__u_array__DOT__row__BRA__2__KET____DOT__col__BRA__2__KET____DOT__pe__0(Vtb_mini_tpu_processing_element* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_mini_tpu_processing_element___stl_comb__TOP__tb_mini_tpu__DOT__dut__DOT__u_array__DOT__row__BRA__2__KET____DOT__col__BRA__2__KET____DOT__pe__0\n"); );
    Vtb_mini_tpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    ::IData/*27:0*/ __Vdfg_Regularize_468;
    __Vdfg_Regularize_468 = 0;
    ::CData/*0:0*/ __Vdfg_Regularize_469;
    __Vdfg_Regularize_469 = 0;
    ::CData/*7:0*/ __Vdfg_Regularize_471;
    __Vdfg_Regularize_471 = 0;
    ::CData/*7:0*/ __Vdfg_Regularize_475;
    __Vdfg_Regularize_475 = 0;
    ::CData/*4:0*/ __Vdfg_Regularize_479;
    __Vdfg_Regularize_479 = 0;
    ::IData/*27:0*/ __Vdfg_Regularize_480;
    __Vdfg_Regularize_480 = 0;
    ::IData/*26:0*/ __Vdfg_Regularize_481;
    __Vdfg_Regularize_481 = 0;
    ::IData/*27:0*/ __Vdfg_Regularize_482;
    __Vdfg_Regularize_482 = 0;
    // Body
    vlSelfRef.__PVT__u_mul__DOT__a_inf = (::IData)(
                                                   (0x7f80U 
                                                    == 
                                                    (0x7fffU 
                                                     & (::IData)(vlSymsp->vlInst.TOP.tb_mini_tpu__DOT__dut__DOT__u_array__DOT__row__BRA__2__KET____DOT__col__BRA__1__KET____DOT__a_q))));
    vlSelfRef.__PVT__u_mul__DOT__b_inf = (::IData)(
                                                   (0x7f80U 
                                                    == 
                                                    (0x7fffU 
                                                     & (::IData)(vlSymsp->vlInst.TOP.tb_mini_tpu__DOT__dut__DOT__u_array__DOT__row__BRA__1__KET____DOT__col__BRA__2__KET____DOT__b_q))));
    vlSelfRef.__PVT__u_add__DOT__a_inf = (::IData)(
                                                   (0x7f800000U 
                                                    == 
                                                    (0x7fffffffU 
                                                     & vlSelfRef.__PVT__pipeline_register__DOT__out)));
    vlSelfRef.__PVT__u_add__DOT__b_inf = (::IData)(
                                                   (0x7f800000U 
                                                    == 
                                                    (0x7fffffffU 
                                                     & vlSelfRef.__PVT__accumulator)));
    vlSelfRef.__PVT__u_mul__DOT__prod = (0x0000ffffU 
                                         & ((0x00000080U 
                                             | (0x0000007fU 
                                                & (::IData)(vlSymsp->vlInst.TOP.tb_mini_tpu__DOT__dut__DOT__u_array__DOT__row__BRA__1__KET____DOT__col__BRA__2__KET____DOT__b_q))) 
                                            * (0x00000080U 
                                               | (0x0000007fU 
                                                  & (::IData)(vlSymsp->vlInst.TOP.tb_mini_tpu__DOT__dut__DOT__u_array__DOT__row__BRA__2__KET____DOT__col__BRA__1__KET____DOT__a_q)))));
    __Vdfg_Regularize_469 = ((0x7fffffffU & vlSelfRef.__PVT__pipeline_register__DOT__out) 
                             >= (0x7fffffffU & vlSelfRef.__PVT__accumulator));
    vlSelfRef.__Vdfg_Regularize_472 = (0x000007ffU 
                                       & ((((0x000000ffU 
                                             & ((::IData)(vlSymsp->vlInst.TOP.tb_mini_tpu__DOT__dut__DOT__u_array__DOT__row__BRA__1__KET____DOT__col__BRA__2__KET____DOT__b_q) 
                                                >> 7U)) 
                                            + (0x000000ffU 
                                               & ((::IData)(vlSymsp->vlInst.TOP.tb_mini_tpu__DOT__dut__DOT__u_array__DOT__row__BRA__2__KET____DOT__col__BRA__1__KET____DOT__a_q) 
                                                  >> 7U))) 
                                           - (::IData)(0x007fU)) 
                                          + (1U & (- (::IData)(
                                                               (1U 
                                                                & ((::IData)(vlSelfRef.__PVT__u_mul__DOT__prod) 
                                                                   >> 0x0000000fU)))))));
    if (__Vdfg_Regularize_469) {
        vlSelfRef.__Vdfg_Regularize_474 = (1U & (vlSelfRef.__PVT__pipeline_register__DOT__out 
                                                 >> 0x0000001fU));
        __Vdfg_Regularize_475 = (0x000000ffU & (vlSelfRef.__PVT__pipeline_register__DOT__out 
                                                >> 0x00000017U));
    } else {
        vlSelfRef.__Vdfg_Regularize_474 = (1U & (vlSelfRef.__PVT__accumulator 
                                                 >> 0x0000001fU));
        __Vdfg_Regularize_475 = (0x000000ffU & (vlSelfRef.__PVT__accumulator 
                                                >> 0x00000017U));
    }
    __Vdfg_Regularize_482 = (0x04000000U | (0x03fffff8U 
                                            & (((::IData)(__Vdfg_Regularize_469)
                                                 ? vlSelfRef.__PVT__pipeline_register__DOT__out
                                                 : vlSelfRef.__PVT__accumulator) 
                                               << 3U)));
    __Vdfg_Regularize_481 = (0x04000000U | (0x03fffff8U 
                                            & (((::IData)(__Vdfg_Regularize_469)
                                                 ? vlSelfRef.__PVT__accumulator
                                                 : vlSelfRef.__PVT__pipeline_register__DOT__out) 
                                               << 3U)));
    __Vdfg_Regularize_471 = (0x000000ffU & ((::IData)(__Vdfg_Regularize_475) 
                                            - ((::IData)(__Vdfg_Regularize_469)
                                                ? (vlSelfRef.__PVT__accumulator 
                                                   >> 0x00000017U)
                                                : (vlSelfRef.__PVT__pipeline_register__DOT__out 
                                                   >> 0x00000017U))));
    __Vdfg_Regularize_480 = ((0x1bU <= (::IData)(__Vdfg_Regularize_471))
                              ? 1U : (VL_SHIFTR_III(27,27,8, __Vdfg_Regularize_481, (::IData)(__Vdfg_Regularize_471)) 
                                      | (0U != ((VL_SHIFTL_III(27,27,8, (::IData)(1U), (::IData)(__Vdfg_Regularize_471)) 
                                                 - (::IData)(1U)) 
                                                & __Vdfg_Regularize_481))));
    __Vdfg_Regularize_468 = (0x0fffffffU & (((::IData)(vlSelfRef.__Vdfg_Regularize_474) 
                                             == (1U 
                                                 & ((::IData)(__Vdfg_Regularize_469)
                                                     ? 
                                                    (vlSelfRef.__PVT__accumulator 
                                                     >> 0x0000001fU)
                                                     : 
                                                    (vlSelfRef.__PVT__pipeline_register__DOT__out 
                                                     >> 0x0000001fU))))
                                             ? (__Vdfg_Regularize_480 
                                                + __Vdfg_Regularize_482)
                                             : (__Vdfg_Regularize_482 
                                                - __Vdfg_Regularize_480)));
    __Vdfg_Regularize_479 = (((0x02000000U & __Vdfg_Regularize_468)
                               ? 1U : ((0x01000000U 
                                        & __Vdfg_Regularize_468)
                                        ? 2U : ((0x00800000U 
                                                 & __Vdfg_Regularize_468)
                                                 ? 3U
                                                 : 
                                                ((0x00400000U 
                                                  & __Vdfg_Regularize_468)
                                                  ? 4U
                                                  : 
                                                 ((0x00200000U 
                                                   & __Vdfg_Regularize_468)
                                                   ? 5U
                                                   : 
                                                  ((0x00100000U 
                                                    & __Vdfg_Regularize_468)
                                                    ? 6U
                                                    : 
                                                   ((0x00080000U 
                                                     & __Vdfg_Regularize_468)
                                                     ? 7U
                                                     : 
                                                    ((0x00040000U 
                                                      & __Vdfg_Regularize_468)
                                                      ? 8U
                                                      : 
                                                     ((0x00020000U 
                                                       & __Vdfg_Regularize_468)
                                                       ? 9U
                                                       : 
                                                      ((0x00010000U 
                                                        & __Vdfg_Regularize_468)
                                                        ? 0x0aU
                                                        : 
                                                       ((0x00008000U 
                                                         & __Vdfg_Regularize_468)
                                                         ? 0x0bU
                                                         : 
                                                        ((0x00004000U 
                                                          & __Vdfg_Regularize_468)
                                                          ? 0x0cU
                                                          : 
                                                         ((0x00002000U 
                                                           & __Vdfg_Regularize_468)
                                                           ? 0x0dU
                                                           : 
                                                          ((0x00001000U 
                                                            & __Vdfg_Regularize_468)
                                                            ? 0x0eU
                                                            : 
                                                           ((0x00000800U 
                                                             & __Vdfg_Regularize_468)
                                                             ? 0x0fU
                                                             : 
                                                            ((0x00000400U 
                                                              & __Vdfg_Regularize_468)
                                                              ? 0x10U
                                                              : 
                                                             ((0x00000200U 
                                                               & __Vdfg_Regularize_468)
                                                               ? 0x11U
                                                               : 
                                                              ((0x00000100U 
                                                                & __Vdfg_Regularize_468)
                                                                ? 0x12U
                                                                : 
                                                               ((0x00000080U 
                                                                 & __Vdfg_Regularize_468)
                                                                 ? 0x13U
                                                                 : 
                                                                ((0x00000040U 
                                                                  & __Vdfg_Regularize_468)
                                                                  ? 0x14U
                                                                  : 
                                                                 ((0x00000020U 
                                                                   & __Vdfg_Regularize_468)
                                                                   ? 0x15U
                                                                   : 
                                                                  ((0x00000010U 
                                                                    & __Vdfg_Regularize_468)
                                                                    ? 0x16U
                                                                    : 
                                                                   ((8U 
                                                                     & __Vdfg_Regularize_468)
                                                                     ? 0x17U
                                                                     : 
                                                                    ((4U 
                                                                      & __Vdfg_Regularize_468)
                                                                      ? 0x18U
                                                                      : 
                                                                     ((2U 
                                                                       & __Vdfg_Regularize_468)
                                                                       ? 0x19U
                                                                       : 
                                                                      ((1U 
                                                                        & __Vdfg_Regularize_468)
                                                                        ? 0x1aU
                                                                        : 0x1bU)))))))))))))))))))))))))) 
                             & (- (::IData)((1U & (~ 
                                                   (__Vdfg_Regularize_468 
                                                    >> 0x0000001aU))))));
    if ((0x08000000U & __Vdfg_Regularize_468)) {
        vlSelfRef.__Vdfg_Regularize_476 = (0x07ffffffU 
                                           & ((__Vdfg_Regularize_468 
                                               >> 1U) 
                                              | (1U 
                                                 & __Vdfg_Regularize_468)));
        vlSelfRef.__Vdfg_Regularize_477 = (0x000003ffU 
                                           & ((::IData)(1U) 
                                              + (::IData)(__Vdfg_Regularize_475)));
    } else {
        vlSelfRef.__Vdfg_Regularize_476 = (0x07ffffffU 
                                           & (__Vdfg_Regularize_468 
                                              << (::IData)(__Vdfg_Regularize_479)));
        vlSelfRef.__Vdfg_Regularize_477 = (0x000003ffU 
                                           & ((::IData)(__Vdfg_Regularize_475) 
                                              - (::IData)(__Vdfg_Regularize_479)));
    }
}

VL_ATTR_COLD void Vtb_mini_tpu_processing_element___stl_comb__TOP__tb_mini_tpu__DOT__dut__DOT__u_array__DOT__row__BRA__2__KET____DOT__col__BRA__3__KET____DOT__pe__0(Vtb_mini_tpu_processing_element* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_mini_tpu_processing_element___stl_comb__TOP__tb_mini_tpu__DOT__dut__DOT__u_array__DOT__row__BRA__2__KET____DOT__col__BRA__3__KET____DOT__pe__0\n"); );
    Vtb_mini_tpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    ::IData/*27:0*/ __Vdfg_Regularize_468;
    __Vdfg_Regularize_468 = 0;
    ::CData/*0:0*/ __Vdfg_Regularize_469;
    __Vdfg_Regularize_469 = 0;
    ::CData/*7:0*/ __Vdfg_Regularize_471;
    __Vdfg_Regularize_471 = 0;
    ::CData/*7:0*/ __Vdfg_Regularize_475;
    __Vdfg_Regularize_475 = 0;
    ::CData/*4:0*/ __Vdfg_Regularize_479;
    __Vdfg_Regularize_479 = 0;
    ::IData/*27:0*/ __Vdfg_Regularize_480;
    __Vdfg_Regularize_480 = 0;
    ::IData/*26:0*/ __Vdfg_Regularize_481;
    __Vdfg_Regularize_481 = 0;
    ::IData/*27:0*/ __Vdfg_Regularize_482;
    __Vdfg_Regularize_482 = 0;
    // Body
    vlSelfRef.__PVT__u_mul__DOT__a_inf = (::IData)(
                                                   (0x7f80U 
                                                    == 
                                                    (0x7fffU 
                                                     & (::IData)(vlSymsp->vlInst.TOP.tb_mini_tpu__DOT__dut__DOT__u_array__DOT__row__BRA__2__KET____DOT__col__BRA__2__KET____DOT__a_q))));
    vlSelfRef.__PVT__u_mul__DOT__b_inf = (::IData)(
                                                   (0x7f80U 
                                                    == 
                                                    (0x7fffU 
                                                     & (::IData)(vlSymsp->vlInst.TOP.tb_mini_tpu__DOT__dut__DOT__u_array__DOT__row__BRA__1__KET____DOT__col__BRA__3__KET____DOT__b_q))));
    vlSelfRef.__PVT__u_add__DOT__a_inf = (::IData)(
                                                   (0x7f800000U 
                                                    == 
                                                    (0x7fffffffU 
                                                     & vlSelfRef.__PVT__pipeline_register__DOT__out)));
    vlSelfRef.__PVT__u_add__DOT__b_inf = (::IData)(
                                                   (0x7f800000U 
                                                    == 
                                                    (0x7fffffffU 
                                                     & vlSelfRef.__PVT__accumulator)));
    vlSelfRef.__PVT__u_mul__DOT__prod = (0x0000ffffU 
                                         & ((0x00000080U 
                                             | (0x0000007fU 
                                                & (::IData)(vlSymsp->vlInst.TOP.tb_mini_tpu__DOT__dut__DOT__u_array__DOT__row__BRA__1__KET____DOT__col__BRA__3__KET____DOT__b_q))) 
                                            * (0x00000080U 
                                               | (0x0000007fU 
                                                  & (::IData)(vlSymsp->vlInst.TOP.tb_mini_tpu__DOT__dut__DOT__u_array__DOT__row__BRA__2__KET____DOT__col__BRA__2__KET____DOT__a_q)))));
    __Vdfg_Regularize_469 = ((0x7fffffffU & vlSelfRef.__PVT__pipeline_register__DOT__out) 
                             >= (0x7fffffffU & vlSelfRef.__PVT__accumulator));
    vlSelfRef.__Vdfg_Regularize_472 = (0x000007ffU 
                                       & ((((0x000000ffU 
                                             & ((::IData)(vlSymsp->vlInst.TOP.tb_mini_tpu__DOT__dut__DOT__u_array__DOT__row__BRA__1__KET____DOT__col__BRA__3__KET____DOT__b_q) 
                                                >> 7U)) 
                                            + (0x000000ffU 
                                               & ((::IData)(vlSymsp->vlInst.TOP.tb_mini_tpu__DOT__dut__DOT__u_array__DOT__row__BRA__2__KET____DOT__col__BRA__2__KET____DOT__a_q) 
                                                  >> 7U))) 
                                           - (::IData)(0x007fU)) 
                                          + (1U & (- (::IData)(
                                                               (1U 
                                                                & ((::IData)(vlSelfRef.__PVT__u_mul__DOT__prod) 
                                                                   >> 0x0000000fU)))))));
    if (__Vdfg_Regularize_469) {
        vlSelfRef.__Vdfg_Regularize_474 = (1U & (vlSelfRef.__PVT__pipeline_register__DOT__out 
                                                 >> 0x0000001fU));
        __Vdfg_Regularize_475 = (0x000000ffU & (vlSelfRef.__PVT__pipeline_register__DOT__out 
                                                >> 0x00000017U));
    } else {
        vlSelfRef.__Vdfg_Regularize_474 = (1U & (vlSelfRef.__PVT__accumulator 
                                                 >> 0x0000001fU));
        __Vdfg_Regularize_475 = (0x000000ffU & (vlSelfRef.__PVT__accumulator 
                                                >> 0x00000017U));
    }
    __Vdfg_Regularize_482 = (0x04000000U | (0x03fffff8U 
                                            & (((::IData)(__Vdfg_Regularize_469)
                                                 ? vlSelfRef.__PVT__pipeline_register__DOT__out
                                                 : vlSelfRef.__PVT__accumulator) 
                                               << 3U)));
    __Vdfg_Regularize_481 = (0x04000000U | (0x03fffff8U 
                                            & (((::IData)(__Vdfg_Regularize_469)
                                                 ? vlSelfRef.__PVT__accumulator
                                                 : vlSelfRef.__PVT__pipeline_register__DOT__out) 
                                               << 3U)));
    __Vdfg_Regularize_471 = (0x000000ffU & ((::IData)(__Vdfg_Regularize_475) 
                                            - ((::IData)(__Vdfg_Regularize_469)
                                                ? (vlSelfRef.__PVT__accumulator 
                                                   >> 0x00000017U)
                                                : (vlSelfRef.__PVT__pipeline_register__DOT__out 
                                                   >> 0x00000017U))));
    __Vdfg_Regularize_480 = ((0x1bU <= (::IData)(__Vdfg_Regularize_471))
                              ? 1U : (VL_SHIFTR_III(27,27,8, __Vdfg_Regularize_481, (::IData)(__Vdfg_Regularize_471)) 
                                      | (0U != ((VL_SHIFTL_III(27,27,8, (::IData)(1U), (::IData)(__Vdfg_Regularize_471)) 
                                                 - (::IData)(1U)) 
                                                & __Vdfg_Regularize_481))));
    __Vdfg_Regularize_468 = (0x0fffffffU & (((::IData)(vlSelfRef.__Vdfg_Regularize_474) 
                                             == (1U 
                                                 & ((::IData)(__Vdfg_Regularize_469)
                                                     ? 
                                                    (vlSelfRef.__PVT__accumulator 
                                                     >> 0x0000001fU)
                                                     : 
                                                    (vlSelfRef.__PVT__pipeline_register__DOT__out 
                                                     >> 0x0000001fU))))
                                             ? (__Vdfg_Regularize_480 
                                                + __Vdfg_Regularize_482)
                                             : (__Vdfg_Regularize_482 
                                                - __Vdfg_Regularize_480)));
    __Vdfg_Regularize_479 = (((0x02000000U & __Vdfg_Regularize_468)
                               ? 1U : ((0x01000000U 
                                        & __Vdfg_Regularize_468)
                                        ? 2U : ((0x00800000U 
                                                 & __Vdfg_Regularize_468)
                                                 ? 3U
                                                 : 
                                                ((0x00400000U 
                                                  & __Vdfg_Regularize_468)
                                                  ? 4U
                                                  : 
                                                 ((0x00200000U 
                                                   & __Vdfg_Regularize_468)
                                                   ? 5U
                                                   : 
                                                  ((0x00100000U 
                                                    & __Vdfg_Regularize_468)
                                                    ? 6U
                                                    : 
                                                   ((0x00080000U 
                                                     & __Vdfg_Regularize_468)
                                                     ? 7U
                                                     : 
                                                    ((0x00040000U 
                                                      & __Vdfg_Regularize_468)
                                                      ? 8U
                                                      : 
                                                     ((0x00020000U 
                                                       & __Vdfg_Regularize_468)
                                                       ? 9U
                                                       : 
                                                      ((0x00010000U 
                                                        & __Vdfg_Regularize_468)
                                                        ? 0x0aU
                                                        : 
                                                       ((0x00008000U 
                                                         & __Vdfg_Regularize_468)
                                                         ? 0x0bU
                                                         : 
                                                        ((0x00004000U 
                                                          & __Vdfg_Regularize_468)
                                                          ? 0x0cU
                                                          : 
                                                         ((0x00002000U 
                                                           & __Vdfg_Regularize_468)
                                                           ? 0x0dU
                                                           : 
                                                          ((0x00001000U 
                                                            & __Vdfg_Regularize_468)
                                                            ? 0x0eU
                                                            : 
                                                           ((0x00000800U 
                                                             & __Vdfg_Regularize_468)
                                                             ? 0x0fU
                                                             : 
                                                            ((0x00000400U 
                                                              & __Vdfg_Regularize_468)
                                                              ? 0x10U
                                                              : 
                                                             ((0x00000200U 
                                                               & __Vdfg_Regularize_468)
                                                               ? 0x11U
                                                               : 
                                                              ((0x00000100U 
                                                                & __Vdfg_Regularize_468)
                                                                ? 0x12U
                                                                : 
                                                               ((0x00000080U 
                                                                 & __Vdfg_Regularize_468)
                                                                 ? 0x13U
                                                                 : 
                                                                ((0x00000040U 
                                                                  & __Vdfg_Regularize_468)
                                                                  ? 0x14U
                                                                  : 
                                                                 ((0x00000020U 
                                                                   & __Vdfg_Regularize_468)
                                                                   ? 0x15U
                                                                   : 
                                                                  ((0x00000010U 
                                                                    & __Vdfg_Regularize_468)
                                                                    ? 0x16U
                                                                    : 
                                                                   ((8U 
                                                                     & __Vdfg_Regularize_468)
                                                                     ? 0x17U
                                                                     : 
                                                                    ((4U 
                                                                      & __Vdfg_Regularize_468)
                                                                      ? 0x18U
                                                                      : 
                                                                     ((2U 
                                                                       & __Vdfg_Regularize_468)
                                                                       ? 0x19U
                                                                       : 
                                                                      ((1U 
                                                                        & __Vdfg_Regularize_468)
                                                                        ? 0x1aU
                                                                        : 0x1bU)))))))))))))))))))))))))) 
                             & (- (::IData)((1U & (~ 
                                                   (__Vdfg_Regularize_468 
                                                    >> 0x0000001aU))))));
    if ((0x08000000U & __Vdfg_Regularize_468)) {
        vlSelfRef.__Vdfg_Regularize_476 = (0x07ffffffU 
                                           & ((__Vdfg_Regularize_468 
                                               >> 1U) 
                                              | (1U 
                                                 & __Vdfg_Regularize_468)));
        vlSelfRef.__Vdfg_Regularize_477 = (0x000003ffU 
                                           & ((::IData)(1U) 
                                              + (::IData)(__Vdfg_Regularize_475)));
    } else {
        vlSelfRef.__Vdfg_Regularize_476 = (0x07ffffffU 
                                           & (__Vdfg_Regularize_468 
                                              << (::IData)(__Vdfg_Regularize_479)));
        vlSelfRef.__Vdfg_Regularize_477 = (0x000003ffU 
                                           & ((::IData)(__Vdfg_Regularize_475) 
                                              - (::IData)(__Vdfg_Regularize_479)));
    }
}

VL_ATTR_COLD void Vtb_mini_tpu_processing_element___stl_comb__TOP__tb_mini_tpu__DOT__dut__DOT__u_array__DOT__row__BRA__3__KET____DOT__col__BRA__0__KET____DOT__pe__0(Vtb_mini_tpu_processing_element* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_mini_tpu_processing_element___stl_comb__TOP__tb_mini_tpu__DOT__dut__DOT__u_array__DOT__row__BRA__3__KET____DOT__col__BRA__0__KET____DOT__pe__0\n"); );
    Vtb_mini_tpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    ::IData/*27:0*/ __Vdfg_Regularize_468;
    __Vdfg_Regularize_468 = 0;
    ::CData/*0:0*/ __Vdfg_Regularize_469;
    __Vdfg_Regularize_469 = 0;
    ::CData/*7:0*/ __Vdfg_Regularize_471;
    __Vdfg_Regularize_471 = 0;
    ::CData/*7:0*/ __Vdfg_Regularize_475;
    __Vdfg_Regularize_475 = 0;
    ::CData/*4:0*/ __Vdfg_Regularize_479;
    __Vdfg_Regularize_479 = 0;
    ::IData/*27:0*/ __Vdfg_Regularize_480;
    __Vdfg_Regularize_480 = 0;
    ::IData/*26:0*/ __Vdfg_Regularize_481;
    __Vdfg_Regularize_481 = 0;
    ::IData/*27:0*/ __Vdfg_Regularize_482;
    __Vdfg_Regularize_482 = 0;
    // Body
    vlSelfRef.__PVT__u_mul__DOT__a_inf = (::IData)(
                                                   (0x7f80U 
                                                    == 
                                                    (0x7fffU 
                                                     & (::IData)(vlSymsp->vlInst.TOP.tb_mini_tpu__DOT__dut__DOT__u_mem__DOT__skew__BRA__3__KET____DOT__sr_a__BRA__3__KET__))));
    vlSelfRef.__PVT__u_mul__DOT__b_inf = (::IData)(
                                                   (0x7f80U 
                                                    == 
                                                    (0x7fffU 
                                                     & (::IData)(vlSymsp->vlInst.TOP.tb_mini_tpu__DOT__dut__DOT__u_array__DOT__row__BRA__2__KET____DOT__col__BRA__0__KET____DOT__b_q))));
    vlSelfRef.__PVT__u_add__DOT__a_inf = (::IData)(
                                                   (0x7f800000U 
                                                    == 
                                                    (0x7fffffffU 
                                                     & vlSelfRef.__PVT__pipeline_register__DOT__out)));
    vlSelfRef.__PVT__u_add__DOT__b_inf = (::IData)(
                                                   (0x7f800000U 
                                                    == 
                                                    (0x7fffffffU 
                                                     & vlSelfRef.__PVT__accumulator)));
    vlSelfRef.__PVT__u_mul__DOT__prod = (0x0000ffffU 
                                         & ((0x00000080U 
                                             | (0x0000007fU 
                                                & (::IData)(vlSymsp->vlInst.TOP.tb_mini_tpu__DOT__dut__DOT__u_array__DOT__row__BRA__2__KET____DOT__col__BRA__0__KET____DOT__b_q))) 
                                            * (0x00000080U 
                                               | (0x0000007fU 
                                                  & (::IData)(vlSymsp->vlInst.TOP.tb_mini_tpu__DOT__dut__DOT__u_mem__DOT__skew__BRA__3__KET____DOT__sr_a__BRA__3__KET__)))));
    __Vdfg_Regularize_469 = ((0x7fffffffU & vlSelfRef.__PVT__pipeline_register__DOT__out) 
                             >= (0x7fffffffU & vlSelfRef.__PVT__accumulator));
    vlSelfRef.__Vdfg_Regularize_472 = (0x000007ffU 
                                       & ((((0x000000ffU 
                                             & ((::IData)(vlSymsp->vlInst.TOP.tb_mini_tpu__DOT__dut__DOT__u_array__DOT__row__BRA__2__KET____DOT__col__BRA__0__KET____DOT__b_q) 
                                                >> 7U)) 
                                            + (0x000000ffU 
                                               & ((::IData)(vlSymsp->vlInst.TOP.tb_mini_tpu__DOT__dut__DOT__u_mem__DOT__skew__BRA__3__KET____DOT__sr_a__BRA__3__KET__) 
                                                  >> 7U))) 
                                           - (::IData)(0x007fU)) 
                                          + (1U & (- (::IData)(
                                                               (1U 
                                                                & ((::IData)(vlSelfRef.__PVT__u_mul__DOT__prod) 
                                                                   >> 0x0000000fU)))))));
    if (__Vdfg_Regularize_469) {
        vlSelfRef.__Vdfg_Regularize_474 = (1U & (vlSelfRef.__PVT__pipeline_register__DOT__out 
                                                 >> 0x0000001fU));
        __Vdfg_Regularize_475 = (0x000000ffU & (vlSelfRef.__PVT__pipeline_register__DOT__out 
                                                >> 0x00000017U));
    } else {
        vlSelfRef.__Vdfg_Regularize_474 = (1U & (vlSelfRef.__PVT__accumulator 
                                                 >> 0x0000001fU));
        __Vdfg_Regularize_475 = (0x000000ffU & (vlSelfRef.__PVT__accumulator 
                                                >> 0x00000017U));
    }
    __Vdfg_Regularize_482 = (0x04000000U | (0x03fffff8U 
                                            & (((::IData)(__Vdfg_Regularize_469)
                                                 ? vlSelfRef.__PVT__pipeline_register__DOT__out
                                                 : vlSelfRef.__PVT__accumulator) 
                                               << 3U)));
    __Vdfg_Regularize_481 = (0x04000000U | (0x03fffff8U 
                                            & (((::IData)(__Vdfg_Regularize_469)
                                                 ? vlSelfRef.__PVT__accumulator
                                                 : vlSelfRef.__PVT__pipeline_register__DOT__out) 
                                               << 3U)));
    __Vdfg_Regularize_471 = (0x000000ffU & ((::IData)(__Vdfg_Regularize_475) 
                                            - ((::IData)(__Vdfg_Regularize_469)
                                                ? (vlSelfRef.__PVT__accumulator 
                                                   >> 0x00000017U)
                                                : (vlSelfRef.__PVT__pipeline_register__DOT__out 
                                                   >> 0x00000017U))));
    __Vdfg_Regularize_480 = ((0x1bU <= (::IData)(__Vdfg_Regularize_471))
                              ? 1U : (VL_SHIFTR_III(27,27,8, __Vdfg_Regularize_481, (::IData)(__Vdfg_Regularize_471)) 
                                      | (0U != ((VL_SHIFTL_III(27,27,8, (::IData)(1U), (::IData)(__Vdfg_Regularize_471)) 
                                                 - (::IData)(1U)) 
                                                & __Vdfg_Regularize_481))));
    __Vdfg_Regularize_468 = (0x0fffffffU & (((::IData)(vlSelfRef.__Vdfg_Regularize_474) 
                                             == (1U 
                                                 & ((::IData)(__Vdfg_Regularize_469)
                                                     ? 
                                                    (vlSelfRef.__PVT__accumulator 
                                                     >> 0x0000001fU)
                                                     : 
                                                    (vlSelfRef.__PVT__pipeline_register__DOT__out 
                                                     >> 0x0000001fU))))
                                             ? (__Vdfg_Regularize_480 
                                                + __Vdfg_Regularize_482)
                                             : (__Vdfg_Regularize_482 
                                                - __Vdfg_Regularize_480)));
    __Vdfg_Regularize_479 = (((0x02000000U & __Vdfg_Regularize_468)
                               ? 1U : ((0x01000000U 
                                        & __Vdfg_Regularize_468)
                                        ? 2U : ((0x00800000U 
                                                 & __Vdfg_Regularize_468)
                                                 ? 3U
                                                 : 
                                                ((0x00400000U 
                                                  & __Vdfg_Regularize_468)
                                                  ? 4U
                                                  : 
                                                 ((0x00200000U 
                                                   & __Vdfg_Regularize_468)
                                                   ? 5U
                                                   : 
                                                  ((0x00100000U 
                                                    & __Vdfg_Regularize_468)
                                                    ? 6U
                                                    : 
                                                   ((0x00080000U 
                                                     & __Vdfg_Regularize_468)
                                                     ? 7U
                                                     : 
                                                    ((0x00040000U 
                                                      & __Vdfg_Regularize_468)
                                                      ? 8U
                                                      : 
                                                     ((0x00020000U 
                                                       & __Vdfg_Regularize_468)
                                                       ? 9U
                                                       : 
                                                      ((0x00010000U 
                                                        & __Vdfg_Regularize_468)
                                                        ? 0x0aU
                                                        : 
                                                       ((0x00008000U 
                                                         & __Vdfg_Regularize_468)
                                                         ? 0x0bU
                                                         : 
                                                        ((0x00004000U 
                                                          & __Vdfg_Regularize_468)
                                                          ? 0x0cU
                                                          : 
                                                         ((0x00002000U 
                                                           & __Vdfg_Regularize_468)
                                                           ? 0x0dU
                                                           : 
                                                          ((0x00001000U 
                                                            & __Vdfg_Regularize_468)
                                                            ? 0x0eU
                                                            : 
                                                           ((0x00000800U 
                                                             & __Vdfg_Regularize_468)
                                                             ? 0x0fU
                                                             : 
                                                            ((0x00000400U 
                                                              & __Vdfg_Regularize_468)
                                                              ? 0x10U
                                                              : 
                                                             ((0x00000200U 
                                                               & __Vdfg_Regularize_468)
                                                               ? 0x11U
                                                               : 
                                                              ((0x00000100U 
                                                                & __Vdfg_Regularize_468)
                                                                ? 0x12U
                                                                : 
                                                               ((0x00000080U 
                                                                 & __Vdfg_Regularize_468)
                                                                 ? 0x13U
                                                                 : 
                                                                ((0x00000040U 
                                                                  & __Vdfg_Regularize_468)
                                                                  ? 0x14U
                                                                  : 
                                                                 ((0x00000020U 
                                                                   & __Vdfg_Regularize_468)
                                                                   ? 0x15U
                                                                   : 
                                                                  ((0x00000010U 
                                                                    & __Vdfg_Regularize_468)
                                                                    ? 0x16U
                                                                    : 
                                                                   ((8U 
                                                                     & __Vdfg_Regularize_468)
                                                                     ? 0x17U
                                                                     : 
                                                                    ((4U 
                                                                      & __Vdfg_Regularize_468)
                                                                      ? 0x18U
                                                                      : 
                                                                     ((2U 
                                                                       & __Vdfg_Regularize_468)
                                                                       ? 0x19U
                                                                       : 
                                                                      ((1U 
                                                                        & __Vdfg_Regularize_468)
                                                                        ? 0x1aU
                                                                        : 0x1bU)))))))))))))))))))))))))) 
                             & (- (::IData)((1U & (~ 
                                                   (__Vdfg_Regularize_468 
                                                    >> 0x0000001aU))))));
    if ((0x08000000U & __Vdfg_Regularize_468)) {
        vlSelfRef.__Vdfg_Regularize_476 = (0x07ffffffU 
                                           & ((__Vdfg_Regularize_468 
                                               >> 1U) 
                                              | (1U 
                                                 & __Vdfg_Regularize_468)));
        vlSelfRef.__Vdfg_Regularize_477 = (0x000003ffU 
                                           & ((::IData)(1U) 
                                              + (::IData)(__Vdfg_Regularize_475)));
    } else {
        vlSelfRef.__Vdfg_Regularize_476 = (0x07ffffffU 
                                           & (__Vdfg_Regularize_468 
                                              << (::IData)(__Vdfg_Regularize_479)));
        vlSelfRef.__Vdfg_Regularize_477 = (0x000003ffU 
                                           & ((::IData)(__Vdfg_Regularize_475) 
                                              - (::IData)(__Vdfg_Regularize_479)));
    }
}

VL_ATTR_COLD void Vtb_mini_tpu_processing_element___stl_comb__TOP__tb_mini_tpu__DOT__dut__DOT__u_array__DOT__row__BRA__3__KET____DOT__col__BRA__1__KET____DOT__pe__0(Vtb_mini_tpu_processing_element* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_mini_tpu_processing_element___stl_comb__TOP__tb_mini_tpu__DOT__dut__DOT__u_array__DOT__row__BRA__3__KET____DOT__col__BRA__1__KET____DOT__pe__0\n"); );
    Vtb_mini_tpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    ::IData/*27:0*/ __Vdfg_Regularize_468;
    __Vdfg_Regularize_468 = 0;
    ::CData/*0:0*/ __Vdfg_Regularize_469;
    __Vdfg_Regularize_469 = 0;
    ::CData/*7:0*/ __Vdfg_Regularize_471;
    __Vdfg_Regularize_471 = 0;
    ::CData/*7:0*/ __Vdfg_Regularize_475;
    __Vdfg_Regularize_475 = 0;
    ::CData/*4:0*/ __Vdfg_Regularize_479;
    __Vdfg_Regularize_479 = 0;
    ::IData/*27:0*/ __Vdfg_Regularize_480;
    __Vdfg_Regularize_480 = 0;
    ::IData/*26:0*/ __Vdfg_Regularize_481;
    __Vdfg_Regularize_481 = 0;
    ::IData/*27:0*/ __Vdfg_Regularize_482;
    __Vdfg_Regularize_482 = 0;
    // Body
    vlSelfRef.__PVT__u_add__DOT__a_inf = (::IData)(
                                                   (0x7f800000U 
                                                    == 
                                                    (0x7fffffffU 
                                                     & vlSelfRef.__PVT__pipeline_register__DOT__out)));
    vlSelfRef.__PVT__u_add__DOT__b_inf = (::IData)(
                                                   (0x7f800000U 
                                                    == 
                                                    (0x7fffffffU 
                                                     & vlSelfRef.__PVT__accumulator)));
    vlSelfRef.__PVT__u_mul__DOT__a_inf = (::IData)(
                                                   (0x7f80U 
                                                    == 
                                                    (0x7fffU 
                                                     & (::IData)(vlSymsp->vlInst.TOP.tb_mini_tpu__DOT__dut__DOT__u_array__DOT__row__BRA__3__KET____DOT__col__BRA__0__KET____DOT__a_q))));
    vlSelfRef.__PVT__u_mul__DOT__b_inf = (::IData)(
                                                   (0x7f80U 
                                                    == 
                                                    (0x7fffU 
                                                     & (::IData)(vlSymsp->vlInst.TOP.tb_mini_tpu__DOT__dut__DOT__u_array__DOT__row__BRA__2__KET____DOT__col__BRA__1__KET____DOT__b_q))));
    vlSelfRef.__PVT__u_mul__DOT__prod = (0x0000ffffU 
                                         & ((0x00000080U 
                                             | (0x0000007fU 
                                                & (::IData)(vlSymsp->vlInst.TOP.tb_mini_tpu__DOT__dut__DOT__u_array__DOT__row__BRA__2__KET____DOT__col__BRA__1__KET____DOT__b_q))) 
                                            * (0x00000080U 
                                               | (0x0000007fU 
                                                  & (::IData)(vlSymsp->vlInst.TOP.tb_mini_tpu__DOT__dut__DOT__u_array__DOT__row__BRA__3__KET____DOT__col__BRA__0__KET____DOT__a_q)))));
    __Vdfg_Regularize_469 = ((0x7fffffffU & vlSelfRef.__PVT__pipeline_register__DOT__out) 
                             >= (0x7fffffffU & vlSelfRef.__PVT__accumulator));
    vlSelfRef.__Vdfg_Regularize_472 = (0x000007ffU 
                                       & ((((0x000000ffU 
                                             & ((::IData)(vlSymsp->vlInst.TOP.tb_mini_tpu__DOT__dut__DOT__u_array__DOT__row__BRA__2__KET____DOT__col__BRA__1__KET____DOT__b_q) 
                                                >> 7U)) 
                                            + (0x000000ffU 
                                               & ((::IData)(vlSymsp->vlInst.TOP.tb_mini_tpu__DOT__dut__DOT__u_array__DOT__row__BRA__3__KET____DOT__col__BRA__0__KET____DOT__a_q) 
                                                  >> 7U))) 
                                           - (::IData)(0x007fU)) 
                                          + (1U & (- (::IData)(
                                                               (1U 
                                                                & ((::IData)(vlSelfRef.__PVT__u_mul__DOT__prod) 
                                                                   >> 0x0000000fU)))))));
    if (__Vdfg_Regularize_469) {
        vlSelfRef.__Vdfg_Regularize_474 = (1U & (vlSelfRef.__PVT__pipeline_register__DOT__out 
                                                 >> 0x0000001fU));
        __Vdfg_Regularize_475 = (0x000000ffU & (vlSelfRef.__PVT__pipeline_register__DOT__out 
                                                >> 0x00000017U));
    } else {
        vlSelfRef.__Vdfg_Regularize_474 = (1U & (vlSelfRef.__PVT__accumulator 
                                                 >> 0x0000001fU));
        __Vdfg_Regularize_475 = (0x000000ffU & (vlSelfRef.__PVT__accumulator 
                                                >> 0x00000017U));
    }
    __Vdfg_Regularize_482 = (0x04000000U | (0x03fffff8U 
                                            & (((::IData)(__Vdfg_Regularize_469)
                                                 ? vlSelfRef.__PVT__pipeline_register__DOT__out
                                                 : vlSelfRef.__PVT__accumulator) 
                                               << 3U)));
    __Vdfg_Regularize_481 = (0x04000000U | (0x03fffff8U 
                                            & (((::IData)(__Vdfg_Regularize_469)
                                                 ? vlSelfRef.__PVT__accumulator
                                                 : vlSelfRef.__PVT__pipeline_register__DOT__out) 
                                               << 3U)));
    __Vdfg_Regularize_471 = (0x000000ffU & ((::IData)(__Vdfg_Regularize_475) 
                                            - ((::IData)(__Vdfg_Regularize_469)
                                                ? (vlSelfRef.__PVT__accumulator 
                                                   >> 0x00000017U)
                                                : (vlSelfRef.__PVT__pipeline_register__DOT__out 
                                                   >> 0x00000017U))));
    __Vdfg_Regularize_480 = ((0x1bU <= (::IData)(__Vdfg_Regularize_471))
                              ? 1U : (VL_SHIFTR_III(27,27,8, __Vdfg_Regularize_481, (::IData)(__Vdfg_Regularize_471)) 
                                      | (0U != ((VL_SHIFTL_III(27,27,8, (::IData)(1U), (::IData)(__Vdfg_Regularize_471)) 
                                                 - (::IData)(1U)) 
                                                & __Vdfg_Regularize_481))));
    __Vdfg_Regularize_468 = (0x0fffffffU & (((::IData)(vlSelfRef.__Vdfg_Regularize_474) 
                                             == (1U 
                                                 & ((::IData)(__Vdfg_Regularize_469)
                                                     ? 
                                                    (vlSelfRef.__PVT__accumulator 
                                                     >> 0x0000001fU)
                                                     : 
                                                    (vlSelfRef.__PVT__pipeline_register__DOT__out 
                                                     >> 0x0000001fU))))
                                             ? (__Vdfg_Regularize_480 
                                                + __Vdfg_Regularize_482)
                                             : (__Vdfg_Regularize_482 
                                                - __Vdfg_Regularize_480)));
    __Vdfg_Regularize_479 = (((0x02000000U & __Vdfg_Regularize_468)
                               ? 1U : ((0x01000000U 
                                        & __Vdfg_Regularize_468)
                                        ? 2U : ((0x00800000U 
                                                 & __Vdfg_Regularize_468)
                                                 ? 3U
                                                 : 
                                                ((0x00400000U 
                                                  & __Vdfg_Regularize_468)
                                                  ? 4U
                                                  : 
                                                 ((0x00200000U 
                                                   & __Vdfg_Regularize_468)
                                                   ? 5U
                                                   : 
                                                  ((0x00100000U 
                                                    & __Vdfg_Regularize_468)
                                                    ? 6U
                                                    : 
                                                   ((0x00080000U 
                                                     & __Vdfg_Regularize_468)
                                                     ? 7U
                                                     : 
                                                    ((0x00040000U 
                                                      & __Vdfg_Regularize_468)
                                                      ? 8U
                                                      : 
                                                     ((0x00020000U 
                                                       & __Vdfg_Regularize_468)
                                                       ? 9U
                                                       : 
                                                      ((0x00010000U 
                                                        & __Vdfg_Regularize_468)
                                                        ? 0x0aU
                                                        : 
                                                       ((0x00008000U 
                                                         & __Vdfg_Regularize_468)
                                                         ? 0x0bU
                                                         : 
                                                        ((0x00004000U 
                                                          & __Vdfg_Regularize_468)
                                                          ? 0x0cU
                                                          : 
                                                         ((0x00002000U 
                                                           & __Vdfg_Regularize_468)
                                                           ? 0x0dU
                                                           : 
                                                          ((0x00001000U 
                                                            & __Vdfg_Regularize_468)
                                                            ? 0x0eU
                                                            : 
                                                           ((0x00000800U 
                                                             & __Vdfg_Regularize_468)
                                                             ? 0x0fU
                                                             : 
                                                            ((0x00000400U 
                                                              & __Vdfg_Regularize_468)
                                                              ? 0x10U
                                                              : 
                                                             ((0x00000200U 
                                                               & __Vdfg_Regularize_468)
                                                               ? 0x11U
                                                               : 
                                                              ((0x00000100U 
                                                                & __Vdfg_Regularize_468)
                                                                ? 0x12U
                                                                : 
                                                               ((0x00000080U 
                                                                 & __Vdfg_Regularize_468)
                                                                 ? 0x13U
                                                                 : 
                                                                ((0x00000040U 
                                                                  & __Vdfg_Regularize_468)
                                                                  ? 0x14U
                                                                  : 
                                                                 ((0x00000020U 
                                                                   & __Vdfg_Regularize_468)
                                                                   ? 0x15U
                                                                   : 
                                                                  ((0x00000010U 
                                                                    & __Vdfg_Regularize_468)
                                                                    ? 0x16U
                                                                    : 
                                                                   ((8U 
                                                                     & __Vdfg_Regularize_468)
                                                                     ? 0x17U
                                                                     : 
                                                                    ((4U 
                                                                      & __Vdfg_Regularize_468)
                                                                      ? 0x18U
                                                                      : 
                                                                     ((2U 
                                                                       & __Vdfg_Regularize_468)
                                                                       ? 0x19U
                                                                       : 
                                                                      ((1U 
                                                                        & __Vdfg_Regularize_468)
                                                                        ? 0x1aU
                                                                        : 0x1bU)))))))))))))))))))))))))) 
                             & (- (::IData)((1U & (~ 
                                                   (__Vdfg_Regularize_468 
                                                    >> 0x0000001aU))))));
    if ((0x08000000U & __Vdfg_Regularize_468)) {
        vlSelfRef.__Vdfg_Regularize_476 = (0x07ffffffU 
                                           & ((__Vdfg_Regularize_468 
                                               >> 1U) 
                                              | (1U 
                                                 & __Vdfg_Regularize_468)));
        vlSelfRef.__Vdfg_Regularize_477 = (0x000003ffU 
                                           & ((::IData)(1U) 
                                              + (::IData)(__Vdfg_Regularize_475)));
    } else {
        vlSelfRef.__Vdfg_Regularize_476 = (0x07ffffffU 
                                           & (__Vdfg_Regularize_468 
                                              << (::IData)(__Vdfg_Regularize_479)));
        vlSelfRef.__Vdfg_Regularize_477 = (0x000003ffU 
                                           & ((::IData)(__Vdfg_Regularize_475) 
                                              - (::IData)(__Vdfg_Regularize_479)));
    }
}

VL_ATTR_COLD void Vtb_mini_tpu_processing_element___stl_comb__TOP__tb_mini_tpu__DOT__dut__DOT__u_array__DOT__row__BRA__3__KET____DOT__col__BRA__2__KET____DOT__pe__0(Vtb_mini_tpu_processing_element* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_mini_tpu_processing_element___stl_comb__TOP__tb_mini_tpu__DOT__dut__DOT__u_array__DOT__row__BRA__3__KET____DOT__col__BRA__2__KET____DOT__pe__0\n"); );
    Vtb_mini_tpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    ::IData/*27:0*/ __Vdfg_Regularize_468;
    __Vdfg_Regularize_468 = 0;
    ::CData/*0:0*/ __Vdfg_Regularize_469;
    __Vdfg_Regularize_469 = 0;
    ::CData/*7:0*/ __Vdfg_Regularize_471;
    __Vdfg_Regularize_471 = 0;
    ::CData/*7:0*/ __Vdfg_Regularize_475;
    __Vdfg_Regularize_475 = 0;
    ::CData/*4:0*/ __Vdfg_Regularize_479;
    __Vdfg_Regularize_479 = 0;
    ::IData/*27:0*/ __Vdfg_Regularize_480;
    __Vdfg_Regularize_480 = 0;
    ::IData/*26:0*/ __Vdfg_Regularize_481;
    __Vdfg_Regularize_481 = 0;
    ::IData/*27:0*/ __Vdfg_Regularize_482;
    __Vdfg_Regularize_482 = 0;
    // Body
    vlSelfRef.__PVT__u_add__DOT__a_inf = (::IData)(
                                                   (0x7f800000U 
                                                    == 
                                                    (0x7fffffffU 
                                                     & vlSelfRef.__PVT__pipeline_register__DOT__out)));
    vlSelfRef.__PVT__u_add__DOT__b_inf = (::IData)(
                                                   (0x7f800000U 
                                                    == 
                                                    (0x7fffffffU 
                                                     & vlSelfRef.__PVT__accumulator)));
    vlSelfRef.__PVT__u_mul__DOT__a_inf = (::IData)(
                                                   (0x7f80U 
                                                    == 
                                                    (0x7fffU 
                                                     & (::IData)(vlSymsp->vlInst.TOP.tb_mini_tpu__DOT__dut__DOT__u_array__DOT__row__BRA__3__KET____DOT__col__BRA__1__KET____DOT__a_q))));
    vlSelfRef.__PVT__u_mul__DOT__b_inf = (::IData)(
                                                   (0x7f80U 
                                                    == 
                                                    (0x7fffU 
                                                     & (::IData)(vlSymsp->vlInst.TOP.tb_mini_tpu__DOT__dut__DOT__u_array__DOT__row__BRA__2__KET____DOT__col__BRA__2__KET____DOT__b_q))));
    vlSelfRef.__PVT__u_mul__DOT__prod = (0x0000ffffU 
                                         & ((0x00000080U 
                                             | (0x0000007fU 
                                                & (::IData)(vlSymsp->vlInst.TOP.tb_mini_tpu__DOT__dut__DOT__u_array__DOT__row__BRA__2__KET____DOT__col__BRA__2__KET____DOT__b_q))) 
                                            * (0x00000080U 
                                               | (0x0000007fU 
                                                  & (::IData)(vlSymsp->vlInst.TOP.tb_mini_tpu__DOT__dut__DOT__u_array__DOT__row__BRA__3__KET____DOT__col__BRA__1__KET____DOT__a_q)))));
    __Vdfg_Regularize_469 = ((0x7fffffffU & vlSelfRef.__PVT__pipeline_register__DOT__out) 
                             >= (0x7fffffffU & vlSelfRef.__PVT__accumulator));
    vlSelfRef.__Vdfg_Regularize_472 = (0x000007ffU 
                                       & ((((0x000000ffU 
                                             & ((::IData)(vlSymsp->vlInst.TOP.tb_mini_tpu__DOT__dut__DOT__u_array__DOT__row__BRA__2__KET____DOT__col__BRA__2__KET____DOT__b_q) 
                                                >> 7U)) 
                                            + (0x000000ffU 
                                               & ((::IData)(vlSymsp->vlInst.TOP.tb_mini_tpu__DOT__dut__DOT__u_array__DOT__row__BRA__3__KET____DOT__col__BRA__1__KET____DOT__a_q) 
                                                  >> 7U))) 
                                           - (::IData)(0x007fU)) 
                                          + (1U & (- (::IData)(
                                                               (1U 
                                                                & ((::IData)(vlSelfRef.__PVT__u_mul__DOT__prod) 
                                                                   >> 0x0000000fU)))))));
    if (__Vdfg_Regularize_469) {
        vlSelfRef.__Vdfg_Regularize_474 = (1U & (vlSelfRef.__PVT__pipeline_register__DOT__out 
                                                 >> 0x0000001fU));
        __Vdfg_Regularize_475 = (0x000000ffU & (vlSelfRef.__PVT__pipeline_register__DOT__out 
                                                >> 0x00000017U));
    } else {
        vlSelfRef.__Vdfg_Regularize_474 = (1U & (vlSelfRef.__PVT__accumulator 
                                                 >> 0x0000001fU));
        __Vdfg_Regularize_475 = (0x000000ffU & (vlSelfRef.__PVT__accumulator 
                                                >> 0x00000017U));
    }
    __Vdfg_Regularize_482 = (0x04000000U | (0x03fffff8U 
                                            & (((::IData)(__Vdfg_Regularize_469)
                                                 ? vlSelfRef.__PVT__pipeline_register__DOT__out
                                                 : vlSelfRef.__PVT__accumulator) 
                                               << 3U)));
    __Vdfg_Regularize_481 = (0x04000000U | (0x03fffff8U 
                                            & (((::IData)(__Vdfg_Regularize_469)
                                                 ? vlSelfRef.__PVT__accumulator
                                                 : vlSelfRef.__PVT__pipeline_register__DOT__out) 
                                               << 3U)));
    __Vdfg_Regularize_471 = (0x000000ffU & ((::IData)(__Vdfg_Regularize_475) 
                                            - ((::IData)(__Vdfg_Regularize_469)
                                                ? (vlSelfRef.__PVT__accumulator 
                                                   >> 0x00000017U)
                                                : (vlSelfRef.__PVT__pipeline_register__DOT__out 
                                                   >> 0x00000017U))));
    __Vdfg_Regularize_480 = ((0x1bU <= (::IData)(__Vdfg_Regularize_471))
                              ? 1U : (VL_SHIFTR_III(27,27,8, __Vdfg_Regularize_481, (::IData)(__Vdfg_Regularize_471)) 
                                      | (0U != ((VL_SHIFTL_III(27,27,8, (::IData)(1U), (::IData)(__Vdfg_Regularize_471)) 
                                                 - (::IData)(1U)) 
                                                & __Vdfg_Regularize_481))));
    __Vdfg_Regularize_468 = (0x0fffffffU & (((::IData)(vlSelfRef.__Vdfg_Regularize_474) 
                                             == (1U 
                                                 & ((::IData)(__Vdfg_Regularize_469)
                                                     ? 
                                                    (vlSelfRef.__PVT__accumulator 
                                                     >> 0x0000001fU)
                                                     : 
                                                    (vlSelfRef.__PVT__pipeline_register__DOT__out 
                                                     >> 0x0000001fU))))
                                             ? (__Vdfg_Regularize_480 
                                                + __Vdfg_Regularize_482)
                                             : (__Vdfg_Regularize_482 
                                                - __Vdfg_Regularize_480)));
    __Vdfg_Regularize_479 = (((0x02000000U & __Vdfg_Regularize_468)
                               ? 1U : ((0x01000000U 
                                        & __Vdfg_Regularize_468)
                                        ? 2U : ((0x00800000U 
                                                 & __Vdfg_Regularize_468)
                                                 ? 3U
                                                 : 
                                                ((0x00400000U 
                                                  & __Vdfg_Regularize_468)
                                                  ? 4U
                                                  : 
                                                 ((0x00200000U 
                                                   & __Vdfg_Regularize_468)
                                                   ? 5U
                                                   : 
                                                  ((0x00100000U 
                                                    & __Vdfg_Regularize_468)
                                                    ? 6U
                                                    : 
                                                   ((0x00080000U 
                                                     & __Vdfg_Regularize_468)
                                                     ? 7U
                                                     : 
                                                    ((0x00040000U 
                                                      & __Vdfg_Regularize_468)
                                                      ? 8U
                                                      : 
                                                     ((0x00020000U 
                                                       & __Vdfg_Regularize_468)
                                                       ? 9U
                                                       : 
                                                      ((0x00010000U 
                                                        & __Vdfg_Regularize_468)
                                                        ? 0x0aU
                                                        : 
                                                       ((0x00008000U 
                                                         & __Vdfg_Regularize_468)
                                                         ? 0x0bU
                                                         : 
                                                        ((0x00004000U 
                                                          & __Vdfg_Regularize_468)
                                                          ? 0x0cU
                                                          : 
                                                         ((0x00002000U 
                                                           & __Vdfg_Regularize_468)
                                                           ? 0x0dU
                                                           : 
                                                          ((0x00001000U 
                                                            & __Vdfg_Regularize_468)
                                                            ? 0x0eU
                                                            : 
                                                           ((0x00000800U 
                                                             & __Vdfg_Regularize_468)
                                                             ? 0x0fU
                                                             : 
                                                            ((0x00000400U 
                                                              & __Vdfg_Regularize_468)
                                                              ? 0x10U
                                                              : 
                                                             ((0x00000200U 
                                                               & __Vdfg_Regularize_468)
                                                               ? 0x11U
                                                               : 
                                                              ((0x00000100U 
                                                                & __Vdfg_Regularize_468)
                                                                ? 0x12U
                                                                : 
                                                               ((0x00000080U 
                                                                 & __Vdfg_Regularize_468)
                                                                 ? 0x13U
                                                                 : 
                                                                ((0x00000040U 
                                                                  & __Vdfg_Regularize_468)
                                                                  ? 0x14U
                                                                  : 
                                                                 ((0x00000020U 
                                                                   & __Vdfg_Regularize_468)
                                                                   ? 0x15U
                                                                   : 
                                                                  ((0x00000010U 
                                                                    & __Vdfg_Regularize_468)
                                                                    ? 0x16U
                                                                    : 
                                                                   ((8U 
                                                                     & __Vdfg_Regularize_468)
                                                                     ? 0x17U
                                                                     : 
                                                                    ((4U 
                                                                      & __Vdfg_Regularize_468)
                                                                      ? 0x18U
                                                                      : 
                                                                     ((2U 
                                                                       & __Vdfg_Regularize_468)
                                                                       ? 0x19U
                                                                       : 
                                                                      ((1U 
                                                                        & __Vdfg_Regularize_468)
                                                                        ? 0x1aU
                                                                        : 0x1bU)))))))))))))))))))))))))) 
                             & (- (::IData)((1U & (~ 
                                                   (__Vdfg_Regularize_468 
                                                    >> 0x0000001aU))))));
    if ((0x08000000U & __Vdfg_Regularize_468)) {
        vlSelfRef.__Vdfg_Regularize_476 = (0x07ffffffU 
                                           & ((__Vdfg_Regularize_468 
                                               >> 1U) 
                                              | (1U 
                                                 & __Vdfg_Regularize_468)));
        vlSelfRef.__Vdfg_Regularize_477 = (0x000003ffU 
                                           & ((::IData)(1U) 
                                              + (::IData)(__Vdfg_Regularize_475)));
    } else {
        vlSelfRef.__Vdfg_Regularize_476 = (0x07ffffffU 
                                           & (__Vdfg_Regularize_468 
                                              << (::IData)(__Vdfg_Regularize_479)));
        vlSelfRef.__Vdfg_Regularize_477 = (0x000003ffU 
                                           & ((::IData)(__Vdfg_Regularize_475) 
                                              - (::IData)(__Vdfg_Regularize_479)));
    }
}

VL_ATTR_COLD void Vtb_mini_tpu_processing_element___stl_comb__TOP__tb_mini_tpu__DOT__dut__DOT__u_array__DOT__row__BRA__3__KET____DOT__col__BRA__3__KET____DOT__pe__0(Vtb_mini_tpu_processing_element* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_mini_tpu_processing_element___stl_comb__TOP__tb_mini_tpu__DOT__dut__DOT__u_array__DOT__row__BRA__3__KET____DOT__col__BRA__3__KET____DOT__pe__0\n"); );
    Vtb_mini_tpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    ::IData/*27:0*/ __Vdfg_Regularize_468;
    __Vdfg_Regularize_468 = 0;
    ::CData/*0:0*/ __Vdfg_Regularize_469;
    __Vdfg_Regularize_469 = 0;
    ::CData/*7:0*/ __Vdfg_Regularize_471;
    __Vdfg_Regularize_471 = 0;
    ::CData/*7:0*/ __Vdfg_Regularize_475;
    __Vdfg_Regularize_475 = 0;
    ::CData/*4:0*/ __Vdfg_Regularize_479;
    __Vdfg_Regularize_479 = 0;
    ::IData/*27:0*/ __Vdfg_Regularize_480;
    __Vdfg_Regularize_480 = 0;
    ::IData/*26:0*/ __Vdfg_Regularize_481;
    __Vdfg_Regularize_481 = 0;
    ::IData/*27:0*/ __Vdfg_Regularize_482;
    __Vdfg_Regularize_482 = 0;
    // Body
    vlSelfRef.__PVT__u_add__DOT__a_inf = (::IData)(
                                                   (0x7f800000U 
                                                    == 
                                                    (0x7fffffffU 
                                                     & vlSelfRef.__PVT__pipeline_register__DOT__out)));
    vlSelfRef.__PVT__u_add__DOT__b_inf = (::IData)(
                                                   (0x7f800000U 
                                                    == 
                                                    (0x7fffffffU 
                                                     & vlSelfRef.__PVT__accumulator)));
    vlSelfRef.__PVT__u_mul__DOT__a_inf = (::IData)(
                                                   (0x7f80U 
                                                    == 
                                                    (0x7fffU 
                                                     & (::IData)(vlSymsp->vlInst.TOP.tb_mini_tpu__DOT__dut__DOT__u_array__DOT__row__BRA__3__KET____DOT__col__BRA__2__KET____DOT__a_q))));
    vlSelfRef.__PVT__u_mul__DOT__b_inf = (::IData)(
                                                   (0x7f80U 
                                                    == 
                                                    (0x7fffU 
                                                     & (::IData)(vlSymsp->vlInst.TOP.tb_mini_tpu__DOT__dut__DOT__u_array__DOT__row__BRA__2__KET____DOT__col__BRA__3__KET____DOT__b_q))));
    vlSelfRef.__PVT__u_mul__DOT__prod = (0x0000ffffU 
                                         & ((0x00000080U 
                                             | (0x0000007fU 
                                                & (::IData)(vlSymsp->vlInst.TOP.tb_mini_tpu__DOT__dut__DOT__u_array__DOT__row__BRA__2__KET____DOT__col__BRA__3__KET____DOT__b_q))) 
                                            * (0x00000080U 
                                               | (0x0000007fU 
                                                  & (::IData)(vlSymsp->vlInst.TOP.tb_mini_tpu__DOT__dut__DOT__u_array__DOT__row__BRA__3__KET____DOT__col__BRA__2__KET____DOT__a_q)))));
    __Vdfg_Regularize_469 = ((0x7fffffffU & vlSelfRef.__PVT__pipeline_register__DOT__out) 
                             >= (0x7fffffffU & vlSelfRef.__PVT__accumulator));
    vlSelfRef.__Vdfg_Regularize_472 = (0x000007ffU 
                                       & ((((0x000000ffU 
                                             & ((::IData)(vlSymsp->vlInst.TOP.tb_mini_tpu__DOT__dut__DOT__u_array__DOT__row__BRA__2__KET____DOT__col__BRA__3__KET____DOT__b_q) 
                                                >> 7U)) 
                                            + (0x000000ffU 
                                               & ((::IData)(vlSymsp->vlInst.TOP.tb_mini_tpu__DOT__dut__DOT__u_array__DOT__row__BRA__3__KET____DOT__col__BRA__2__KET____DOT__a_q) 
                                                  >> 7U))) 
                                           - (::IData)(0x007fU)) 
                                          + (1U & (- (::IData)(
                                                               (1U 
                                                                & ((::IData)(vlSelfRef.__PVT__u_mul__DOT__prod) 
                                                                   >> 0x0000000fU)))))));
    if (__Vdfg_Regularize_469) {
        vlSelfRef.__Vdfg_Regularize_474 = (1U & (vlSelfRef.__PVT__pipeline_register__DOT__out 
                                                 >> 0x0000001fU));
        __Vdfg_Regularize_475 = (0x000000ffU & (vlSelfRef.__PVT__pipeline_register__DOT__out 
                                                >> 0x00000017U));
    } else {
        vlSelfRef.__Vdfg_Regularize_474 = (1U & (vlSelfRef.__PVT__accumulator 
                                                 >> 0x0000001fU));
        __Vdfg_Regularize_475 = (0x000000ffU & (vlSelfRef.__PVT__accumulator 
                                                >> 0x00000017U));
    }
    __Vdfg_Regularize_482 = (0x04000000U | (0x03fffff8U 
                                            & (((::IData)(__Vdfg_Regularize_469)
                                                 ? vlSelfRef.__PVT__pipeline_register__DOT__out
                                                 : vlSelfRef.__PVT__accumulator) 
                                               << 3U)));
    __Vdfg_Regularize_481 = (0x04000000U | (0x03fffff8U 
                                            & (((::IData)(__Vdfg_Regularize_469)
                                                 ? vlSelfRef.__PVT__accumulator
                                                 : vlSelfRef.__PVT__pipeline_register__DOT__out) 
                                               << 3U)));
    __Vdfg_Regularize_471 = (0x000000ffU & ((::IData)(__Vdfg_Regularize_475) 
                                            - ((::IData)(__Vdfg_Regularize_469)
                                                ? (vlSelfRef.__PVT__accumulator 
                                                   >> 0x00000017U)
                                                : (vlSelfRef.__PVT__pipeline_register__DOT__out 
                                                   >> 0x00000017U))));
    __Vdfg_Regularize_480 = ((0x1bU <= (::IData)(__Vdfg_Regularize_471))
                              ? 1U : (VL_SHIFTR_III(27,27,8, __Vdfg_Regularize_481, (::IData)(__Vdfg_Regularize_471)) 
                                      | (0U != ((VL_SHIFTL_III(27,27,8, (::IData)(1U), (::IData)(__Vdfg_Regularize_471)) 
                                                 - (::IData)(1U)) 
                                                & __Vdfg_Regularize_481))));
    __Vdfg_Regularize_468 = (0x0fffffffU & (((::IData)(vlSelfRef.__Vdfg_Regularize_474) 
                                             == (1U 
                                                 & ((::IData)(__Vdfg_Regularize_469)
                                                     ? 
                                                    (vlSelfRef.__PVT__accumulator 
                                                     >> 0x0000001fU)
                                                     : 
                                                    (vlSelfRef.__PVT__pipeline_register__DOT__out 
                                                     >> 0x0000001fU))))
                                             ? (__Vdfg_Regularize_480 
                                                + __Vdfg_Regularize_482)
                                             : (__Vdfg_Regularize_482 
                                                - __Vdfg_Regularize_480)));
    __Vdfg_Regularize_479 = (((0x02000000U & __Vdfg_Regularize_468)
                               ? 1U : ((0x01000000U 
                                        & __Vdfg_Regularize_468)
                                        ? 2U : ((0x00800000U 
                                                 & __Vdfg_Regularize_468)
                                                 ? 3U
                                                 : 
                                                ((0x00400000U 
                                                  & __Vdfg_Regularize_468)
                                                  ? 4U
                                                  : 
                                                 ((0x00200000U 
                                                   & __Vdfg_Regularize_468)
                                                   ? 5U
                                                   : 
                                                  ((0x00100000U 
                                                    & __Vdfg_Regularize_468)
                                                    ? 6U
                                                    : 
                                                   ((0x00080000U 
                                                     & __Vdfg_Regularize_468)
                                                     ? 7U
                                                     : 
                                                    ((0x00040000U 
                                                      & __Vdfg_Regularize_468)
                                                      ? 8U
                                                      : 
                                                     ((0x00020000U 
                                                       & __Vdfg_Regularize_468)
                                                       ? 9U
                                                       : 
                                                      ((0x00010000U 
                                                        & __Vdfg_Regularize_468)
                                                        ? 0x0aU
                                                        : 
                                                       ((0x00008000U 
                                                         & __Vdfg_Regularize_468)
                                                         ? 0x0bU
                                                         : 
                                                        ((0x00004000U 
                                                          & __Vdfg_Regularize_468)
                                                          ? 0x0cU
                                                          : 
                                                         ((0x00002000U 
                                                           & __Vdfg_Regularize_468)
                                                           ? 0x0dU
                                                           : 
                                                          ((0x00001000U 
                                                            & __Vdfg_Regularize_468)
                                                            ? 0x0eU
                                                            : 
                                                           ((0x00000800U 
                                                             & __Vdfg_Regularize_468)
                                                             ? 0x0fU
                                                             : 
                                                            ((0x00000400U 
                                                              & __Vdfg_Regularize_468)
                                                              ? 0x10U
                                                              : 
                                                             ((0x00000200U 
                                                               & __Vdfg_Regularize_468)
                                                               ? 0x11U
                                                               : 
                                                              ((0x00000100U 
                                                                & __Vdfg_Regularize_468)
                                                                ? 0x12U
                                                                : 
                                                               ((0x00000080U 
                                                                 & __Vdfg_Regularize_468)
                                                                 ? 0x13U
                                                                 : 
                                                                ((0x00000040U 
                                                                  & __Vdfg_Regularize_468)
                                                                  ? 0x14U
                                                                  : 
                                                                 ((0x00000020U 
                                                                   & __Vdfg_Regularize_468)
                                                                   ? 0x15U
                                                                   : 
                                                                  ((0x00000010U 
                                                                    & __Vdfg_Regularize_468)
                                                                    ? 0x16U
                                                                    : 
                                                                   ((8U 
                                                                     & __Vdfg_Regularize_468)
                                                                     ? 0x17U
                                                                     : 
                                                                    ((4U 
                                                                      & __Vdfg_Regularize_468)
                                                                      ? 0x18U
                                                                      : 
                                                                     ((2U 
                                                                       & __Vdfg_Regularize_468)
                                                                       ? 0x19U
                                                                       : 
                                                                      ((1U 
                                                                        & __Vdfg_Regularize_468)
                                                                        ? 0x1aU
                                                                        : 0x1bU)))))))))))))))))))))))))) 
                             & (- (::IData)((1U & (~ 
                                                   (__Vdfg_Regularize_468 
                                                    >> 0x0000001aU))))));
    if ((0x08000000U & __Vdfg_Regularize_468)) {
        vlSelfRef.__Vdfg_Regularize_476 = (0x07ffffffU 
                                           & ((__Vdfg_Regularize_468 
                                               >> 1U) 
                                              | (1U 
                                                 & __Vdfg_Regularize_468)));
        vlSelfRef.__Vdfg_Regularize_477 = (0x000003ffU 
                                           & ((::IData)(1U) 
                                              + (::IData)(__Vdfg_Regularize_475)));
    } else {
        vlSelfRef.__Vdfg_Regularize_476 = (0x07ffffffU 
                                           & (__Vdfg_Regularize_468 
                                              << (::IData)(__Vdfg_Regularize_479)));
        vlSelfRef.__Vdfg_Regularize_477 = (0x000003ffU 
                                           & ((::IData)(__Vdfg_Regularize_475) 
                                              - (::IData)(__Vdfg_Regularize_479)));
    }
}

VL_ATTR_COLD void Vtb_mini_tpu_processing_element___ctor_var_reset(Vtb_mini_tpu_processing_element* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_mini_tpu_processing_element___ctor_var_reset\n"); );
    Vtb_mini_tpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->vlNamep);
    vlSelf->__PVT__accumulator = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 635851360026796673ull);
    vlSelf->__PVT__u_add__DOT__a_inf = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14267853493558862493ull);
    vlSelf->__PVT__u_add__DOT__b_inf = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4497507279594141042ull);
    vlSelf->__PVT__pipeline_register__DOT__out = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11207061582989897851ull);
    vlSelf->__PVT__pipeline_register__DOT__en_out = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15282893909266332221ull);
    vlSelf->__PVT__pipeline_register__DOT__skip_out = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2901332924180205122ull);
    vlSelf->__PVT__u_mul__DOT__prod = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 18031738057258923515ull);
    vlSelf->__PVT__u_mul__DOT__a_inf = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12389965173156176217ull);
    vlSelf->__PVT__u_mul__DOT__b_inf = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11691503376595877940ull);
    vlSelf->__Vdfg_Regularize_472 = 0;
    vlSelf->__Vdfg_Regularize_474 = 0;
    vlSelf->__Vdfg_Regularize_476 = 0;
    vlSelf->__Vdfg_Regularize_477 = 0;
    vlSelf->__Vdly__accumulator_75 = 0;
}
