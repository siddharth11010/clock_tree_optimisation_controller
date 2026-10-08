// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vtop_verilator__pch.h"
#include "verilated_fst_c.h"

//============================================================
// Constructors

Vtop_verilator::Vtop_verilator(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vtop_verilator__Syms(contextp(), _vcname__, this)}
    , clk_i{vlSymsp->TOP.clk_i}
    , rst_ni{vlSymsp->TOP.rst_ni}
    , __PVT__ibex_pkg{vlSymsp->TOP.__PVT__ibex_pkg}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
    contextp()->traceBaseModelCbAdd(
        [this](VerilatedTraceBaseC* tfp, int levels, int options) { traceBaseModel(tfp, levels, options); });
}

Vtop_verilator::Vtop_verilator(const char* _vcname__)
    : Vtop_verilator(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vtop_verilator::~Vtop_verilator() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vtop_verilator___024root___eval_debug_assertions(Vtop_verilator___024root* vlSelf);
#endif  // VL_DEBUG
void Vtop_verilator___024root___eval_static(Vtop_verilator___024root* vlSelf);
void Vtop_verilator___024root___eval_initial(Vtop_verilator___024root* vlSelf);
void Vtop_verilator___024root___eval_settle(Vtop_verilator___024root* vlSelf);
void Vtop_verilator___024root___eval(Vtop_verilator___024root* vlSelf);

void Vtop_verilator::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vtop_verilator::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vtop_verilator___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vtop_verilator___024root___eval_static(&(vlSymsp->TOP));
        Vtop_verilator___024root___eval_initial(&(vlSymsp->TOP));
        Vtop_verilator___024root___eval_settle(&(vlSymsp->TOP));
        vlSymsp->__Vm_didInit = true;
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vtop_verilator___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vtop_verilator::eventsPending() { return false; }

uint64_t Vtop_verilator::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* Vtop_verilator::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vtop_verilator___024root___eval_final(Vtop_verilator___024root* vlSelf);

VL_ATTR_COLD void Vtop_verilator::final() {
    Vtop_verilator___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vtop_verilator::hierName() const { return vlSymsp->name(); }
const char* Vtop_verilator::modelName() const { return "Vtop_verilator"; }
unsigned Vtop_verilator::threads() const { return 1; }
void Vtop_verilator::prepareClone() const { contextp()->prepareClone(); }
void Vtop_verilator::atClone() const {
    contextp()->threadPoolpOnClone();
}
std::unique_ptr<VerilatedTraceConfig> Vtop_verilator::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void Vtop_verilator___024root__trace_decl_types(VerilatedFst* tracep);

void Vtop_verilator___024root__trace_init_top(Vtop_verilator___024root* vlSelf, VerilatedFst* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedFst* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vtop_verilator___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop_verilator___024root*>(voidSelf);
    Vtop_verilator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->pushPrefix(vlSymsp->name(), VerilatedTracePrefixType::SCOPE_MODULE);
    Vtop_verilator___024root__trace_decl_types(tracep);
    Vtop_verilator___024root__trace_init_top(vlSelf, tracep);
    tracep->popPrefix();
}

VL_ATTR_COLD void Vtop_verilator___024root__trace_register(Vtop_verilator___024root* vlSelf, VerilatedFst* tracep);

VL_ATTR_COLD void Vtop_verilator::traceBaseModel(VerilatedTraceBaseC* tfp, int levels, int options) {
    (void)levels; (void)options;
    VerilatedFstC* const stfp = dynamic_cast<VerilatedFstC*>(tfp);
    if (VL_UNLIKELY(!stfp)) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'Vtop_verilator::trace()' called on non-VerilatedFstC object;"
            " use --trace-fst with VerilatedFst object, and --trace-vcd with VerilatedVcd object");
    }
    stfp->spTrace()->addModel(this);
    stfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP), name(), false, 3029);
    Vtop_verilator___024root__trace_register(&(vlSymsp->TOP), stfp->spTrace());
}
