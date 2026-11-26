// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_mini_tpu.h for the primary calling header

#ifndef VERILATED_VTB_MINI_TPU_STD__03A__03ASEMAPHORE__VCLPKG_H_
#define VERILATED_VTB_MINI_TPU_STD__03A__03ASEMAPHORE__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
#include "Vtb_mini_tpu_std__03a__03asemaphore__Vclpkg.h"
class Vtb_mini_tpu_std__03a__03aprocess;


class Vtb_mini_tpu__Syms;
struct Vtb_mini_tpu_procKeys__struct__0 {
    ::VlClassRef<Vtb_mini_tpu_std__03a__03aprocess> __PVT__proc;
    ::IData/*31:0*/ __PVT__reqKeys;

    bool operator==(const Vtb_mini_tpu_procKeys__struct__0& rhs) const {
        return __PVT__proc == rhs.__PVT__proc
            && __PVT__reqKeys == rhs.__PVT__reqKeys;
    }
    bool operator!=(const Vtb_mini_tpu_procKeys__struct__0& rhs) const {
        return !(*this == rhs);
    }

    bool operator<(const Vtb_mini_tpu_procKeys__struct__0& rhs) const {
        if (__PVT__proc < rhs.__PVT__proc) return true;
        if (rhs.__PVT__proc < __PVT__proc) return false;
        if (__PVT__reqKeys < rhs.__PVT__reqKeys) return true;
        if (rhs.__PVT__reqKeys < __PVT__reqKeys) return false;
        return false;
    }
};
template <>
struct VlIsCustomStruct<Vtb_mini_tpu_procKeys__struct__0> : public std::true_type {};

class alignas(VL_CACHE_LINE_BYTES) Vtb_mini_tpu_std__03a__03asemaphore__Vclpkg final {
  public:

    // INTERNAL VARIABLES
    Vtb_mini_tpu__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vtb_mini_tpu_std__03a__03asemaphore__Vclpkg(Vtb_mini_tpu__Syms* symsp, const char* namep);
    ~Vtb_mini_tpu_std__03a__03asemaphore__Vclpkg();
    VL_UNCOPYABLE(Vtb_mini_tpu_std__03a__03asemaphore__Vclpkg);
    VL_UNMOVABLE(Vtb_mini_tpu_std__03a__03asemaphore__Vclpkg);

    // INTERNAL METHODS
};


class Vtb_mini_tpu__Syms;

class Vtb_mini_tpu_std__03a__03asemaphore : public virtual VlClass {
  public:

    // TRIVIALLY CONSTRUCTIBLE STATE
    ::IData/*31:0*/ __PVT__m_keyCount;

    // NOT TRIVIALLY CONSTRUCTIBLE STATE
    ::VlQueue<Vtb_mini_tpu_procKeys__struct__0> __PVT__m_queue;

    // INTERNAL METHODS
    virtual const char* typeName() const { return "std::semaphore"; }
    VlClass* clone() const { return new Vtb_mini_tpu_std__03a__03asemaphore(*this); }
  private:
    void _ctor_var_reset(Vtb_mini_tpu__Syms* __restrict vlSymsp);
  public:
    Vtb_mini_tpu_std__03a__03asemaphore() = default;
    void init(Vtb_mini_tpu__Syms* __restrict vlSymsp, ::IData/*31:0*/ keyCount);
    ~Vtb_mini_tpu_std__03a__03asemaphore() {}
};


#endif  // guard
