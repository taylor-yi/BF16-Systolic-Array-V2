// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vtb_mini_tpu__pch.h"


void Vtb_mini_tpu__Syms__ctor(Vtb_mini_tpu__Syms* vlSymsp, const char* namep) {
    // Setup top module instance
    VL_INPLACE_CONSTRUCT(vlSymsp->vlInst.TOP, vlSymsp, namep);
    // Check resources
    Verilated::stackCheck(54);
    // Setup names of the model and of its top module instances
    vlSymsp->__Vm_topNames[0] = vlSymsp->name();
    vlSymsp->__Vm_topNames[1] = vlSymsp->__Vm_isRoot ? Verilated::catName(vlSymsp->name(), "tb_mini_tpu") : vlSymsp->name();
    // Setup sub module instances
    VL_INPLACE_CONSTRUCT(vlSymsp->vlInst.TOP__tb_mini_tpu__DOT__dut__DOT__u_array__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__pe, vlSymsp, Verilated::catName(vlSymsp->__Vm_topNames[1].c_str(), "dut.u_array.row[0].col[0].pe"));
    VL_INPLACE_CONSTRUCT(vlSymsp->vlInst.TOP__tb_mini_tpu__DOT__dut__DOT__u_array__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__pe, vlSymsp, Verilated::catName(vlSymsp->__Vm_topNames[1].c_str(), "dut.u_array.row[0].col[1].pe"));
    VL_INPLACE_CONSTRUCT(vlSymsp->vlInst.TOP__tb_mini_tpu__DOT__dut__DOT__u_array__DOT__row__BRA__0__KET____DOT__col__BRA__2__KET____DOT__pe, vlSymsp, Verilated::catName(vlSymsp->__Vm_topNames[1].c_str(), "dut.u_array.row[0].col[2].pe"));
    VL_INPLACE_CONSTRUCT(vlSymsp->vlInst.TOP__tb_mini_tpu__DOT__dut__DOT__u_array__DOT__row__BRA__0__KET____DOT__col__BRA__3__KET____DOT__pe, vlSymsp, Verilated::catName(vlSymsp->__Vm_topNames[1].c_str(), "dut.u_array.row[0].col[3].pe"));
    VL_INPLACE_CONSTRUCT(vlSymsp->vlInst.TOP__tb_mini_tpu__DOT__dut__DOT__u_array__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__pe, vlSymsp, Verilated::catName(vlSymsp->__Vm_topNames[1].c_str(), "dut.u_array.row[1].col[0].pe"));
    VL_INPLACE_CONSTRUCT(vlSymsp->vlInst.TOP__tb_mini_tpu__DOT__dut__DOT__u_array__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__pe, vlSymsp, Verilated::catName(vlSymsp->__Vm_topNames[1].c_str(), "dut.u_array.row[1].col[1].pe"));
    VL_INPLACE_CONSTRUCT(vlSymsp->vlInst.TOP__tb_mini_tpu__DOT__dut__DOT__u_array__DOT__row__BRA__1__KET____DOT__col__BRA__2__KET____DOT__pe, vlSymsp, Verilated::catName(vlSymsp->__Vm_topNames[1].c_str(), "dut.u_array.row[1].col[2].pe"));
    VL_INPLACE_CONSTRUCT(vlSymsp->vlInst.TOP__tb_mini_tpu__DOT__dut__DOT__u_array__DOT__row__BRA__1__KET____DOT__col__BRA__3__KET____DOT__pe, vlSymsp, Verilated::catName(vlSymsp->__Vm_topNames[1].c_str(), "dut.u_array.row[1].col[3].pe"));
    VL_INPLACE_CONSTRUCT(vlSymsp->vlInst.TOP__tb_mini_tpu__DOT__dut__DOT__u_array__DOT__row__BRA__2__KET____DOT__col__BRA__0__KET____DOT__pe, vlSymsp, Verilated::catName(vlSymsp->__Vm_topNames[1].c_str(), "dut.u_array.row[2].col[0].pe"));
    VL_INPLACE_CONSTRUCT(vlSymsp->vlInst.TOP__tb_mini_tpu__DOT__dut__DOT__u_array__DOT__row__BRA__2__KET____DOT__col__BRA__1__KET____DOT__pe, vlSymsp, Verilated::catName(vlSymsp->__Vm_topNames[1].c_str(), "dut.u_array.row[2].col[1].pe"));
    VL_INPLACE_CONSTRUCT(vlSymsp->vlInst.TOP__tb_mini_tpu__DOT__dut__DOT__u_array__DOT__row__BRA__2__KET____DOT__col__BRA__2__KET____DOT__pe, vlSymsp, Verilated::catName(vlSymsp->__Vm_topNames[1].c_str(), "dut.u_array.row[2].col[2].pe"));
    VL_INPLACE_CONSTRUCT(vlSymsp->vlInst.TOP__tb_mini_tpu__DOT__dut__DOT__u_array__DOT__row__BRA__2__KET____DOT__col__BRA__3__KET____DOT__pe, vlSymsp, Verilated::catName(vlSymsp->__Vm_topNames[1].c_str(), "dut.u_array.row[2].col[3].pe"));
    VL_INPLACE_CONSTRUCT(vlSymsp->vlInst.TOP__tb_mini_tpu__DOT__dut__DOT__u_array__DOT__row__BRA__3__KET____DOT__col__BRA__0__KET____DOT__pe, vlSymsp, Verilated::catName(vlSymsp->__Vm_topNames[1].c_str(), "dut.u_array.row[3].col[0].pe"));
    VL_INPLACE_CONSTRUCT(vlSymsp->vlInst.TOP__tb_mini_tpu__DOT__dut__DOT__u_array__DOT__row__BRA__3__KET____DOT__col__BRA__1__KET____DOT__pe, vlSymsp, Verilated::catName(vlSymsp->__Vm_topNames[1].c_str(), "dut.u_array.row[3].col[1].pe"));
    VL_INPLACE_CONSTRUCT(vlSymsp->vlInst.TOP__tb_mini_tpu__DOT__dut__DOT__u_array__DOT__row__BRA__3__KET____DOT__col__BRA__2__KET____DOT__pe, vlSymsp, Verilated::catName(vlSymsp->__Vm_topNames[1].c_str(), "dut.u_array.row[3].col[2].pe"));
    VL_INPLACE_CONSTRUCT(vlSymsp->vlInst.TOP__tb_mini_tpu__DOT__dut__DOT__u_array__DOT__row__BRA__3__KET____DOT__col__BRA__3__KET____DOT__pe, vlSymsp, Verilated::catName(vlSymsp->__Vm_topNames[1].c_str(), "dut.u_array.row[3].col[3].pe"));
    VL_INPLACE_CONSTRUCT(vlSymsp->vlInst.TOP__std, vlSymsp, Verilated::catName(vlSymsp->__Vm_topNames[0].c_str(), "std"));
    VL_INPLACE_CONSTRUCT(vlSymsp->vlInst.TOP__std__03a__03aprocess__Vclpkg, vlSymsp, Verilated::catName(vlSymsp->__Vm_topNames[0].c_str(), "std::process__Vclpkg"));
    VL_INPLACE_CONSTRUCT(vlSymsp->vlInst.TOP__std__03a__03asemaphore__Vclpkg, vlSymsp, Verilated::catName(vlSymsp->__Vm_topNames[0].c_str(), "std::semaphore__Vclpkg"));
    // Configure time unit / time precision
    vlSymsp->_vm_contextp__->timeunit(-9);
    vlSymsp->_vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    vlSymsp->vlInst.TOP.__PVT__tb_mini_tpu__DOT__dut__DOT__u_array__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__pe = &vlSymsp->vlInst.TOP__tb_mini_tpu__DOT__dut__DOT__u_array__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__pe;
    vlSymsp->vlInst.TOP.__PVT__tb_mini_tpu__DOT__dut__DOT__u_array__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__pe = &vlSymsp->vlInst.TOP__tb_mini_tpu__DOT__dut__DOT__u_array__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__pe;
    vlSymsp->vlInst.TOP.__PVT__tb_mini_tpu__DOT__dut__DOT__u_array__DOT__row__BRA__0__KET____DOT__col__BRA__2__KET____DOT__pe = &vlSymsp->vlInst.TOP__tb_mini_tpu__DOT__dut__DOT__u_array__DOT__row__BRA__0__KET____DOT__col__BRA__2__KET____DOT__pe;
    vlSymsp->vlInst.TOP.__PVT__tb_mini_tpu__DOT__dut__DOT__u_array__DOT__row__BRA__0__KET____DOT__col__BRA__3__KET____DOT__pe = &vlSymsp->vlInst.TOP__tb_mini_tpu__DOT__dut__DOT__u_array__DOT__row__BRA__0__KET____DOT__col__BRA__3__KET____DOT__pe;
    vlSymsp->vlInst.TOP.__PVT__tb_mini_tpu__DOT__dut__DOT__u_array__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__pe = &vlSymsp->vlInst.TOP__tb_mini_tpu__DOT__dut__DOT__u_array__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__pe;
    vlSymsp->vlInst.TOP.__PVT__tb_mini_tpu__DOT__dut__DOT__u_array__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__pe = &vlSymsp->vlInst.TOP__tb_mini_tpu__DOT__dut__DOT__u_array__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__pe;
    vlSymsp->vlInst.TOP.__PVT__tb_mini_tpu__DOT__dut__DOT__u_array__DOT__row__BRA__1__KET____DOT__col__BRA__2__KET____DOT__pe = &vlSymsp->vlInst.TOP__tb_mini_tpu__DOT__dut__DOT__u_array__DOT__row__BRA__1__KET____DOT__col__BRA__2__KET____DOT__pe;
    vlSymsp->vlInst.TOP.__PVT__tb_mini_tpu__DOT__dut__DOT__u_array__DOT__row__BRA__1__KET____DOT__col__BRA__3__KET____DOT__pe = &vlSymsp->vlInst.TOP__tb_mini_tpu__DOT__dut__DOT__u_array__DOT__row__BRA__1__KET____DOT__col__BRA__3__KET____DOT__pe;
    vlSymsp->vlInst.TOP.__PVT__tb_mini_tpu__DOT__dut__DOT__u_array__DOT__row__BRA__2__KET____DOT__col__BRA__0__KET____DOT__pe = &vlSymsp->vlInst.TOP__tb_mini_tpu__DOT__dut__DOT__u_array__DOT__row__BRA__2__KET____DOT__col__BRA__0__KET____DOT__pe;
    vlSymsp->vlInst.TOP.__PVT__tb_mini_tpu__DOT__dut__DOT__u_array__DOT__row__BRA__2__KET____DOT__col__BRA__1__KET____DOT__pe = &vlSymsp->vlInst.TOP__tb_mini_tpu__DOT__dut__DOT__u_array__DOT__row__BRA__2__KET____DOT__col__BRA__1__KET____DOT__pe;
    vlSymsp->vlInst.TOP.__PVT__tb_mini_tpu__DOT__dut__DOT__u_array__DOT__row__BRA__2__KET____DOT__col__BRA__2__KET____DOT__pe = &vlSymsp->vlInst.TOP__tb_mini_tpu__DOT__dut__DOT__u_array__DOT__row__BRA__2__KET____DOT__col__BRA__2__KET____DOT__pe;
    vlSymsp->vlInst.TOP.__PVT__tb_mini_tpu__DOT__dut__DOT__u_array__DOT__row__BRA__2__KET____DOT__col__BRA__3__KET____DOT__pe = &vlSymsp->vlInst.TOP__tb_mini_tpu__DOT__dut__DOT__u_array__DOT__row__BRA__2__KET____DOT__col__BRA__3__KET____DOT__pe;
    vlSymsp->vlInst.TOP.__PVT__tb_mini_tpu__DOT__dut__DOT__u_array__DOT__row__BRA__3__KET____DOT__col__BRA__0__KET____DOT__pe = &vlSymsp->vlInst.TOP__tb_mini_tpu__DOT__dut__DOT__u_array__DOT__row__BRA__3__KET____DOT__col__BRA__0__KET____DOT__pe;
    vlSymsp->vlInst.TOP.__PVT__tb_mini_tpu__DOT__dut__DOT__u_array__DOT__row__BRA__3__KET____DOT__col__BRA__1__KET____DOT__pe = &vlSymsp->vlInst.TOP__tb_mini_tpu__DOT__dut__DOT__u_array__DOT__row__BRA__3__KET____DOT__col__BRA__1__KET____DOT__pe;
    vlSymsp->vlInst.TOP.__PVT__tb_mini_tpu__DOT__dut__DOT__u_array__DOT__row__BRA__3__KET____DOT__col__BRA__2__KET____DOT__pe = &vlSymsp->vlInst.TOP__tb_mini_tpu__DOT__dut__DOT__u_array__DOT__row__BRA__3__KET____DOT__col__BRA__2__KET____DOT__pe;
    vlSymsp->vlInst.TOP.__PVT__tb_mini_tpu__DOT__dut__DOT__u_array__DOT__row__BRA__3__KET____DOT__col__BRA__3__KET____DOT__pe = &vlSymsp->vlInst.TOP__tb_mini_tpu__DOT__dut__DOT__u_array__DOT__row__BRA__3__KET____DOT__col__BRA__3__KET____DOT__pe;
    vlSymsp->vlInst.TOP.std = &vlSymsp->vlInst.TOP__std;
    vlSymsp->vlInst.TOP.std__03a__03aprocess__Vclpkg = &vlSymsp->vlInst.TOP__std__03a__03aprocess__Vclpkg;
    vlSymsp->vlInst.TOP.std__03a__03asemaphore__Vclpkg = &vlSymsp->vlInst.TOP__std__03a__03asemaphore__Vclpkg;
}

Vtb_mini_tpu__Syms::Vtb_mini_tpu__Syms(VerilatedContext* contextp, Vtb_mini_tpu* modelp, const char* namep, bool isRoot)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    , __Vm_isRoot{isRoot}
    , __Vm_didInit{modelp->m_didInit}
{
    Vtb_mini_tpu__Syms__ctor(this, namep);
}

void Vtb_mini_tpu__Syms__dtor(Vtb_mini_tpu__Syms* vlSymsp) {
    // Tear down scopes
    // Tear down sub module instances
    VL_INPLACE_DESTRUCT(vlSymsp->vlInst.TOP__std__03a__03asemaphore__Vclpkg);
    VL_INPLACE_DESTRUCT(vlSymsp->vlInst.TOP__std__03a__03aprocess__Vclpkg);
    VL_INPLACE_DESTRUCT(vlSymsp->vlInst.TOP__std);
    VL_INPLACE_DESTRUCT(vlSymsp->vlInst.TOP__tb_mini_tpu__DOT__dut__DOT__u_array__DOT__row__BRA__3__KET____DOT__col__BRA__3__KET____DOT__pe);
    VL_INPLACE_DESTRUCT(vlSymsp->vlInst.TOP__tb_mini_tpu__DOT__dut__DOT__u_array__DOT__row__BRA__3__KET____DOT__col__BRA__2__KET____DOT__pe);
    VL_INPLACE_DESTRUCT(vlSymsp->vlInst.TOP__tb_mini_tpu__DOT__dut__DOT__u_array__DOT__row__BRA__3__KET____DOT__col__BRA__1__KET____DOT__pe);
    VL_INPLACE_DESTRUCT(vlSymsp->vlInst.TOP__tb_mini_tpu__DOT__dut__DOT__u_array__DOT__row__BRA__3__KET____DOT__col__BRA__0__KET____DOT__pe);
    VL_INPLACE_DESTRUCT(vlSymsp->vlInst.TOP__tb_mini_tpu__DOT__dut__DOT__u_array__DOT__row__BRA__2__KET____DOT__col__BRA__3__KET____DOT__pe);
    VL_INPLACE_DESTRUCT(vlSymsp->vlInst.TOP__tb_mini_tpu__DOT__dut__DOT__u_array__DOT__row__BRA__2__KET____DOT__col__BRA__2__KET____DOT__pe);
    VL_INPLACE_DESTRUCT(vlSymsp->vlInst.TOP__tb_mini_tpu__DOT__dut__DOT__u_array__DOT__row__BRA__2__KET____DOT__col__BRA__1__KET____DOT__pe);
    VL_INPLACE_DESTRUCT(vlSymsp->vlInst.TOP__tb_mini_tpu__DOT__dut__DOT__u_array__DOT__row__BRA__2__KET____DOT__col__BRA__0__KET____DOT__pe);
    VL_INPLACE_DESTRUCT(vlSymsp->vlInst.TOP__tb_mini_tpu__DOT__dut__DOT__u_array__DOT__row__BRA__1__KET____DOT__col__BRA__3__KET____DOT__pe);
    VL_INPLACE_DESTRUCT(vlSymsp->vlInst.TOP__tb_mini_tpu__DOT__dut__DOT__u_array__DOT__row__BRA__1__KET____DOT__col__BRA__2__KET____DOT__pe);
    VL_INPLACE_DESTRUCT(vlSymsp->vlInst.TOP__tb_mini_tpu__DOT__dut__DOT__u_array__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__pe);
    VL_INPLACE_DESTRUCT(vlSymsp->vlInst.TOP__tb_mini_tpu__DOT__dut__DOT__u_array__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__pe);
    VL_INPLACE_DESTRUCT(vlSymsp->vlInst.TOP__tb_mini_tpu__DOT__dut__DOT__u_array__DOT__row__BRA__0__KET____DOT__col__BRA__3__KET____DOT__pe);
    VL_INPLACE_DESTRUCT(vlSymsp->vlInst.TOP__tb_mini_tpu__DOT__dut__DOT__u_array__DOT__row__BRA__0__KET____DOT__col__BRA__2__KET____DOT__pe);
    VL_INPLACE_DESTRUCT(vlSymsp->vlInst.TOP__tb_mini_tpu__DOT__dut__DOT__u_array__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__pe);
    VL_INPLACE_DESTRUCT(vlSymsp->vlInst.TOP__tb_mini_tpu__DOT__dut__DOT__u_array__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__pe);
    // Tear down top module instance
    VL_INPLACE_DESTRUCT(vlSymsp->vlInst.TOP);
}

Vtb_mini_tpu__Syms::~Vtb_mini_tpu__Syms() {
    Vtb_mini_tpu__Syms__dtor(this);
}
