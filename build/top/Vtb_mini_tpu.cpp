// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vtb_mini_tpu__pch.h"

//============================================================
// Constructors

Vtb_mini_tpu::Vtb_mini_tpu(VerilatedContext* _vcontextp__, const char* _vcname__)
    : Vtb_mini_tpu{_vcontextp__, _vcname__, true} {}

Vtb_mini_tpu::Vtb_mini_tpu(VerilatedContext* _vcontextp__, const char* _vcname__, bool _vcisRoot__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vtb_mini_tpu__Syms(contextp(), this, _vcname__, _vcisRoot__)}
    , m_evalLoop{*this, /*convergeLimit:*/ 10000}
    , std{vlSymsp->vlInst.TOP.std}
    , __PVT__tb_mini_tpu__DOT__dut__DOT__u_array__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__pe{vlSymsp->vlInst.TOP.__PVT__tb_mini_tpu__DOT__dut__DOT__u_array__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__pe}
    , __PVT__tb_mini_tpu__DOT__dut__DOT__u_array__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__pe{vlSymsp->vlInst.TOP.__PVT__tb_mini_tpu__DOT__dut__DOT__u_array__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__pe}
    , __PVT__tb_mini_tpu__DOT__dut__DOT__u_array__DOT__row__BRA__0__KET____DOT__col__BRA__2__KET____DOT__pe{vlSymsp->vlInst.TOP.__PVT__tb_mini_tpu__DOT__dut__DOT__u_array__DOT__row__BRA__0__KET____DOT__col__BRA__2__KET____DOT__pe}
    , __PVT__tb_mini_tpu__DOT__dut__DOT__u_array__DOT__row__BRA__0__KET____DOT__col__BRA__3__KET____DOT__pe{vlSymsp->vlInst.TOP.__PVT__tb_mini_tpu__DOT__dut__DOT__u_array__DOT__row__BRA__0__KET____DOT__col__BRA__3__KET____DOT__pe}
    , __PVT__tb_mini_tpu__DOT__dut__DOT__u_array__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__pe{vlSymsp->vlInst.TOP.__PVT__tb_mini_tpu__DOT__dut__DOT__u_array__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__pe}
    , __PVT__tb_mini_tpu__DOT__dut__DOT__u_array__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__pe{vlSymsp->vlInst.TOP.__PVT__tb_mini_tpu__DOT__dut__DOT__u_array__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__pe}
    , __PVT__tb_mini_tpu__DOT__dut__DOT__u_array__DOT__row__BRA__1__KET____DOT__col__BRA__2__KET____DOT__pe{vlSymsp->vlInst.TOP.__PVT__tb_mini_tpu__DOT__dut__DOT__u_array__DOT__row__BRA__1__KET____DOT__col__BRA__2__KET____DOT__pe}
    , __PVT__tb_mini_tpu__DOT__dut__DOT__u_array__DOT__row__BRA__1__KET____DOT__col__BRA__3__KET____DOT__pe{vlSymsp->vlInst.TOP.__PVT__tb_mini_tpu__DOT__dut__DOT__u_array__DOT__row__BRA__1__KET____DOT__col__BRA__3__KET____DOT__pe}
    , __PVT__tb_mini_tpu__DOT__dut__DOT__u_array__DOT__row__BRA__2__KET____DOT__col__BRA__0__KET____DOT__pe{vlSymsp->vlInst.TOP.__PVT__tb_mini_tpu__DOT__dut__DOT__u_array__DOT__row__BRA__2__KET____DOT__col__BRA__0__KET____DOT__pe}
    , __PVT__tb_mini_tpu__DOT__dut__DOT__u_array__DOT__row__BRA__2__KET____DOT__col__BRA__1__KET____DOT__pe{vlSymsp->vlInst.TOP.__PVT__tb_mini_tpu__DOT__dut__DOT__u_array__DOT__row__BRA__2__KET____DOT__col__BRA__1__KET____DOT__pe}
    , __PVT__tb_mini_tpu__DOT__dut__DOT__u_array__DOT__row__BRA__2__KET____DOT__col__BRA__2__KET____DOT__pe{vlSymsp->vlInst.TOP.__PVT__tb_mini_tpu__DOT__dut__DOT__u_array__DOT__row__BRA__2__KET____DOT__col__BRA__2__KET____DOT__pe}
    , __PVT__tb_mini_tpu__DOT__dut__DOT__u_array__DOT__row__BRA__2__KET____DOT__col__BRA__3__KET____DOT__pe{vlSymsp->vlInst.TOP.__PVT__tb_mini_tpu__DOT__dut__DOT__u_array__DOT__row__BRA__2__KET____DOT__col__BRA__3__KET____DOT__pe}
    , __PVT__tb_mini_tpu__DOT__dut__DOT__u_array__DOT__row__BRA__3__KET____DOT__col__BRA__0__KET____DOT__pe{vlSymsp->vlInst.TOP.__PVT__tb_mini_tpu__DOT__dut__DOT__u_array__DOT__row__BRA__3__KET____DOT__col__BRA__0__KET____DOT__pe}
    , __PVT__tb_mini_tpu__DOT__dut__DOT__u_array__DOT__row__BRA__3__KET____DOT__col__BRA__1__KET____DOT__pe{vlSymsp->vlInst.TOP.__PVT__tb_mini_tpu__DOT__dut__DOT__u_array__DOT__row__BRA__3__KET____DOT__col__BRA__1__KET____DOT__pe}
    , __PVT__tb_mini_tpu__DOT__dut__DOT__u_array__DOT__row__BRA__3__KET____DOT__col__BRA__2__KET____DOT__pe{vlSymsp->vlInst.TOP.__PVT__tb_mini_tpu__DOT__dut__DOT__u_array__DOT__row__BRA__3__KET____DOT__col__BRA__2__KET____DOT__pe}
    , __PVT__tb_mini_tpu__DOT__dut__DOT__u_array__DOT__row__BRA__3__KET____DOT__col__BRA__3__KET____DOT__pe{vlSymsp->vlInst.TOP.__PVT__tb_mini_tpu__DOT__dut__DOT__u_array__DOT__row__BRA__3__KET____DOT__col__BRA__3__KET____DOT__pe}
    , std__03a__03aprocess__Vclpkg{vlSymsp->vlInst.TOP.std__03a__03aprocess__Vclpkg}
    , std__03a__03asemaphore__Vclpkg{vlSymsp->vlInst.TOP.std__03a__03asemaphore__Vclpkg}
    , rootp{&(vlSymsp->vlInst.TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vtb_mini_tpu::Vtb_mini_tpu(const char* _vcname__)
    : Vtb_mini_tpu(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vtb_mini_tpu::~Vtb_mini_tpu() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vtb_mini_tpu___024root___eval_debug_assertions(Vtb_mini_tpu___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD void Vtb_mini_tpu___024root___eval_static(Vtb_mini_tpu___024root* vlSelf);
void Vtb_mini_tpu___024root___eval_initial(Vtb_mini_tpu___024root* vlSelf);
VL_ATTR_COLD bool Vtb_mini_tpu___024root___eval_stl(Vtb_mini_tpu___024root* vlSelf, ::CData/*0:0*/ firstIteration);
void Vtb_mini_tpu___024root___eval_sample(Vtb_mini_tpu___024root* vlSelf);
bool Vtb_mini_tpu___024root___eval_ico(Vtb_mini_tpu___024root* vlSelf, ::CData/*0:0*/ firstIteration);
bool Vtb_mini_tpu___024root___eval_act(Vtb_mini_tpu___024root* vlSelf);
bool Vtb_mini_tpu___024root___eval_inact(Vtb_mini_tpu___024root* vlSelf);
bool Vtb_mini_tpu___024root___eval_nba(Vtb_mini_tpu___024root* vlSelf);
bool Vtb_mini_tpu___024root___eval_obs(Vtb_mini_tpu___024root* vlSelf);
bool Vtb_mini_tpu___024root___eval_react(Vtb_mini_tpu___024root* vlSelf);
void Vtb_mini_tpu___024root___eval_postponed(Vtb_mini_tpu___024root* vlSelf);
VL_ATTR_COLD void Vtb_mini_tpu___024root___eval_final(Vtb_mini_tpu___024root* vlSelf);
VL_ATTR_COLD void Vtb_mini_tpu___024root___eval_dump_triggers__stl(Vtb_mini_tpu___024root* vlSelf);
VL_ATTR_COLD void Vtb_mini_tpu___024root___eval_dump_triggers__ico(Vtb_mini_tpu___024root* vlSelf);
VL_ATTR_COLD void Vtb_mini_tpu___024root___eval_dump_triggers__act(Vtb_mini_tpu___024root* vlSelf);
VL_ATTR_COLD void Vtb_mini_tpu___024root___eval_dump_triggers__nba(Vtb_mini_tpu___024root* vlSelf);
VL_ATTR_COLD void Vtb_mini_tpu___024root___eval_dump_triggers__obs(Vtb_mini_tpu___024root* vlSelf);
VL_ATTR_COLD void Vtb_mini_tpu___024root___eval_dump_triggers__react(Vtb_mini_tpu___024root* vlSelf);

void Vtb_mini_tpu::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vtb_mini_tpu::eval_step\n"); );
    m_evalLoop.eval();
}

void Vtb_mini_tpu::evalBegin() {
#ifdef VL_DEBUG
    // Debug assertions
    Vtb_mini_tpu___024root___eval_debug_assertions(&(vlSymsp->vlInst.TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_deleter.deleteAll();
}

void Vtb_mini_tpu::evalEnd() {
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
    vlSymsp->vlInst.TOP.__Vnontrivs.__VdlySched.cleanupForevered();
}

void Vtb_mini_tpu::evalStatic() {
    Vtb_mini_tpu___024root___eval_static(&(vlSymsp->vlInst.TOP));
}

void Vtb_mini_tpu::evalInitial() {
    Vtb_mini_tpu___024root___eval_initial(&(vlSymsp->vlInst.TOP));
}

bool Vtb_mini_tpu::evalStl(bool firstIteration) {
    return Vtb_mini_tpu___024root___eval_stl(&(vlSymsp->vlInst.TOP), firstIteration);
}

void Vtb_mini_tpu::evalSample() {
    Vtb_mini_tpu___024root___eval_sample(&(vlSymsp->vlInst.TOP));
}

bool Vtb_mini_tpu::evalIco(bool firstIteration) {
    return Vtb_mini_tpu___024root___eval_ico(&(vlSymsp->vlInst.TOP), firstIteration);
}

bool Vtb_mini_tpu::evalAct() {
    return Vtb_mini_tpu___024root___eval_act(&(vlSymsp->vlInst.TOP));
}

bool Vtb_mini_tpu::evalInact() {
    return Vtb_mini_tpu___024root___eval_inact(&(vlSymsp->vlInst.TOP));
}

bool Vtb_mini_tpu::evalNba() {
    return Vtb_mini_tpu___024root___eval_nba(&(vlSymsp->vlInst.TOP));
}

bool Vtb_mini_tpu::evalObs() {
    return Vtb_mini_tpu___024root___eval_obs(&(vlSymsp->vlInst.TOP));
}

bool Vtb_mini_tpu::evalReact() {
    return Vtb_mini_tpu___024root___eval_react(&(vlSymsp->vlInst.TOP));
}

void Vtb_mini_tpu::evalPostponed() {
    Vtb_mini_tpu___024root___eval_postponed(&(vlSymsp->vlInst.TOP));
}

void Vtb_mini_tpu::evalFinal() {
    Vtb_mini_tpu___024root___eval_final(&(vlSymsp->vlInst.TOP));
}

VL_ATTR_COLD void Vtb_mini_tpu::dumpTriggersStl() {
    Vtb_mini_tpu___024root___eval_dump_triggers__stl(&(vlSymsp->vlInst.TOP));
}

VL_ATTR_COLD void Vtb_mini_tpu::dumpTriggersIco() {
    Vtb_mini_tpu___024root___eval_dump_triggers__ico(&(vlSymsp->vlInst.TOP));
}

VL_ATTR_COLD void Vtb_mini_tpu::dumpTriggersAct() {
    Vtb_mini_tpu___024root___eval_dump_triggers__act(&(vlSymsp->vlInst.TOP));
}

VL_ATTR_COLD void Vtb_mini_tpu::dumpTriggersNba() {
    Vtb_mini_tpu___024root___eval_dump_triggers__nba(&(vlSymsp->vlInst.TOP));
}

VL_ATTR_COLD void Vtb_mini_tpu::dumpTriggersObs() {
    Vtb_mini_tpu___024root___eval_dump_triggers__obs(&(vlSymsp->vlInst.TOP));
}

VL_ATTR_COLD void Vtb_mini_tpu::dumpTriggersReact() {
    Vtb_mini_tpu___024root___eval_dump_triggers__react(&(vlSymsp->vlInst.TOP));
}

//============================================================
// Events and timing
bool Vtb_mini_tpu::eventsPending() { return !vlSymsp->vlInst.TOP.__Vnontrivs.__VdlySched.empty() && !contextp()->gotFinish(); }

uint64_t Vtb_mini_tpu::nextTimeSlot() { return vlSymsp->vlInst.TOP.__Vnontrivs.__VdlySched.nextTimeSlot(); }

//============================================================
// Utilities

const char* Vtb_mini_tpu::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

VL_ATTR_COLD void Vtb_mini_tpu::final() {
    contextp()->executingFinal(true);
    evalFinal();
    contextp()->executingFinal(false);
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vtb_mini_tpu::hierName() const { return vlSymsp->name(); }
const char* Vtb_mini_tpu::modelName() const { return "Vtb_mini_tpu"; }
unsigned Vtb_mini_tpu::threads() const { return 1; }
void Vtb_mini_tpu::prepareClone() const { contextp()->prepareClone(); }
void Vtb_mini_tpu::atClone() const {
    contextp()->threadPoolpOnClone();
}
