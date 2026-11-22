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
    VlDeleter __Vm_deleter;
    bool& __Vm_didInit;

    // MODULE INSTANCE STATE
    Vtb_units___024root            TOP;

    // CONSTRUCTORS
    Vtb_units__Syms(VerilatedContext* contextp, const char* namep, Vtb_units* modelp);
    ~Vtb_units__Syms();

    // METHODS
    const char* name() const { return TOP.vlNamep; }
};

#endif  // guard
