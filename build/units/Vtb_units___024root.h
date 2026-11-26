// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_units.h for the primary calling header

#ifndef VERILATED_VTB_UNITS___024ROOT_H_
#define VERILATED_VTB_UNITS___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vtb_units__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_units___024root final {
  public:

    // TRIVIALLY CONSTRUCTIBLE STATE
    ::CData/*0:0*/ tb_units__DOT____VlemCall_3__same;
    ::CData/*0:0*/ tb_units__DOT____VlemCall_1__same;
    ::SData/*15:0*/ tb_units__DOT__ma;
    ::SData/*15:0*/ tb_units__DOT__mb;
    ::SData/*15:0*/ tb_units__DOT__t1;
    ::SData/*15:0*/ tb_units__DOT__t2;
    ::IData/*31:0*/ tb_units__DOT____VlemExpr_2;
    ::IData/*31:0*/ tb_units__DOT____VlemExpr_0;
    ::IData/*31:0*/ tb_units__DOT__aa;
    ::IData/*31:0*/ tb_units__DOT__ab;
    ::IData/*31:0*/ tb_units__DOT__expected;
    ::IData/*31:0*/ tb_units__DOT__t3;
    ::IData/*31:0*/ tb_units__DOT__u1;
    ::IData/*31:0*/ tb_units__DOT__u2;
    ::IData/*31:0*/ tb_units__DOT__u3;
    ::IData/*31:0*/ tb_units__DOT__u_add__DOT__result;
    ::IData/*31:0*/ tb_units__DOT__u_mul__DOT__result;
    ::IData/*31:0*/ __Vi;
    ::VlUnpacked<::QData/*63:0*/, 1> __VstlTriggered;
    ::VlUnpacked<::QData/*63:0*/, 1> __VicoTriggered;
    ::VlUnpacked<::QData/*63:0*/, 1> __VactTriggered;
    ::VlUnpacked<::QData/*63:0*/, 1> __VactTriggeredAcc;
    ::VlUnpacked<::QData/*63:0*/, 1> __VnbaTriggered;

    // NOT TRIVIALLY CONSTRUCTIBLE STATE
    union {
        struct {
            ::VlDelayScheduler __VdlySched;
        } __Vnontrivs;
    };

    // INTERNAL VARIABLES
    Vtb_units__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vtb_units___024root(Vtb_units__Syms* symsp, const char* namep);
    ~Vtb_units___024root();
    VL_UNCOPYABLE(Vtb_units___024root);
    VL_UNMOVABLE(Vtb_units___024root);

    // INTERNAL METHODS
};


#endif  // guard
