// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VTB_UNITS__SYMS_H_
#define VERILATED_VTB_UNITS__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Vtb_units.h"

// INCLUDE MODULE CLASSES
#include "Vtb_units___024root.h"

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES) Vtb_units__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vtb_units* const __Vm_modelp;
    const bool __Vm_isRoot;
    std::string __Vm_topNames[2];
    VlDeleter __Vm_deleter;
    bool& __Vm_didInit;

    // MODULE INSTANCE STATE
    union {
        struct {
            Vtb_units___024root            TOP;
        } vlInst;
    };

    // CONSTRUCTORS
    Vtb_units__Syms(VerilatedContext* contextp, Vtb_units* modelp, const char* namep, bool isRoot);
    ~Vtb_units__Syms();

    // METHODS
    const char* name() const { return vlInst.TOP.vlNamep; }
};

#endif  // guard
