// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vtb_units__pch.h"

//============================================================
// Constructors

Vtb_units::Vtb_units(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vtb_units__Syms(contextp(), _vcname__, this)}
    , m_evalLoop{*this, /*convergeLimit:*/ 10000}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vtb_units::Vtb_units(const char* _vcname__)
    : Vtb_units(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vtb_units::~Vtb_units() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vtb_units___024root___eval_debug_assertions(Vtb_units___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD void Vtb_units___024root___eval_static(Vtb_units___024root* vlSelf);
void Vtb_units___024root___eval_initial(Vtb_units___024root* vlSelf);
VL_ATTR_COLD bool Vtb_units___024root___eval_stl(Vtb_units___024root* vlSelf, CData/*0:0*/ firstIteration);
void Vtb_units___024root___eval_sample(Vtb_units___024root* vlSelf);
bool Vtb_units___024root___eval_ico(Vtb_units___024root* vlSelf, CData/*0:0*/ firstIteration);
bool Vtb_units___024root___eval_act(Vtb_units___024root* vlSelf);
bool Vtb_units___024root___eval_inact(Vtb_units___024root* vlSelf);
bool Vtb_units___024root___eval_nba(Vtb_units___024root* vlSelf);
bool Vtb_units___024root___eval_obs(Vtb_units___024root* vlSelf);
bool Vtb_units___024root___eval_react(Vtb_units___024root* vlSelf);
void Vtb_units___024root___eval_postponed(Vtb_units___024root* vlSelf);
VL_ATTR_COLD void Vtb_units___024root___eval_final(Vtb_units___024root* vlSelf);
VL_ATTR_COLD void Vtb_units___024root___eval_dump_triggers__stl(Vtb_units___024root* vlSelf);
VL_ATTR_COLD void Vtb_units___024root___eval_dump_triggers__ico(Vtb_units___024root* vlSelf);
VL_ATTR_COLD void Vtb_units___024root___eval_dump_triggers__act(Vtb_units___024root* vlSelf);
VL_ATTR_COLD void Vtb_units___024root___eval_dump_triggers__nba(Vtb_units___024root* vlSelf);
VL_ATTR_COLD void Vtb_units___024root___eval_dump_triggers__obs(Vtb_units___024root* vlSelf);
VL_ATTR_COLD void Vtb_units___024root___eval_dump_triggers__react(Vtb_units___024root* vlSelf);

void Vtb_units::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vtb_units::eval_step\n"); );
    m_evalLoop.eval();
}

void Vtb_units::evalBegin() {
#ifdef VL_DEBUG
    // Debug assertions
    Vtb_units___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_deleter.deleteAll();
}

void Vtb_units::evalEnd() {
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
    vlSymsp->TOP.__VdlySched.cleanupForevered();
}

void Vtb_units::evalStatic() {
    Vtb_units___024root___eval_static(&(vlSymsp->TOP));
}

void Vtb_units::evalInitial() {
    Vtb_units___024root___eval_initial(&(vlSymsp->TOP));
}

bool Vtb_units::evalStl(bool firstIteration) {
    return Vtb_units___024root___eval_stl(&(vlSymsp->TOP), firstIteration);
}

void Vtb_units::evalSample() {
    Vtb_units___024root___eval_sample(&(vlSymsp->TOP));
}

bool Vtb_units::evalIco(bool firstIteration) {
    return Vtb_units___024root___eval_ico(&(vlSymsp->TOP), firstIteration);
}

bool Vtb_units::evalAct() {
    return Vtb_units___024root___eval_act(&(vlSymsp->TOP));
}

bool Vtb_units::evalInact() {
    return Vtb_units___024root___eval_inact(&(vlSymsp->TOP));
}

bool Vtb_units::evalNba() {
    return Vtb_units___024root___eval_nba(&(vlSymsp->TOP));
}

bool Vtb_units::evalObs() {
    return Vtb_units___024root___eval_obs(&(vlSymsp->TOP));
}

bool Vtb_units::evalReact() {
    return Vtb_units___024root___eval_react(&(vlSymsp->TOP));
}

void Vtb_units::evalPostponed() {
    Vtb_units___024root___eval_postponed(&(vlSymsp->TOP));
}

void Vtb_units::evalFinal() {
    Vtb_units___024root___eval_final(&(vlSymsp->TOP));
}

VL_ATTR_COLD void Vtb_units::dumpTriggersStl() {
    Vtb_units___024root___eval_dump_triggers__stl(&(vlSymsp->TOP));
}

VL_ATTR_COLD void Vtb_units::dumpTriggersIco() {
    Vtb_units___024root___eval_dump_triggers__ico(&(vlSymsp->TOP));
}

VL_ATTR_COLD void Vtb_units::dumpTriggersAct() {
    Vtb_units___024root___eval_dump_triggers__act(&(vlSymsp->TOP));
}

VL_ATTR_COLD void Vtb_units::dumpTriggersNba() {
    Vtb_units___024root___eval_dump_triggers__nba(&(vlSymsp->TOP));
}

VL_ATTR_COLD void Vtb_units::dumpTriggersObs() {
    Vtb_units___024root___eval_dump_triggers__obs(&(vlSymsp->TOP));
}

VL_ATTR_COLD void Vtb_units::dumpTriggersReact() {
    Vtb_units___024root___eval_dump_triggers__react(&(vlSymsp->TOP));
}

//============================================================
// Events and timing
bool Vtb_units::eventsPending() { return !vlSymsp->TOP.__VdlySched.empty() && !contextp()->gotFinish(); }

uint64_t Vtb_units::nextTimeSlot() { return vlSymsp->TOP.__VdlySched.nextTimeSlot(); }

//============================================================
// Utilities

const char* Vtb_units::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

VL_ATTR_COLD void Vtb_units::final() {
    contextp()->executingFinal(true);
    evalFinal();
    contextp()->executingFinal(false);
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vtb_units::hierName() const { return vlSymsp->name(); }
const char* Vtb_units::modelName() const { return "Vtb_units"; }
unsigned Vtb_units::threads() const { return 1; }
void Vtb_units::prepareClone() const { contextp()->prepareClone(); }
void Vtb_units::atClone() const {
    contextp()->threadPoolpOnClone();
}
