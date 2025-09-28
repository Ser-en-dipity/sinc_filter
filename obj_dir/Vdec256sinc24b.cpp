// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vdec256sinc24b__pch.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

Vdec256sinc24b::Vdec256sinc24b(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vdec256sinc24b__Syms(contextp(), _vcname__, this)}
    , mclk1{vlSymsp->TOP.mclk1}
    , reset{vlSymsp->TOP.reset}
    , mdata1{vlSymsp->TOP.mdata1}
    , data_en{vlSymsp->TOP.data_en}
    , DATA{vlSymsp->TOP.DATA}
    , dec_rate{vlSymsp->TOP.dec_rate}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vdec256sinc24b::Vdec256sinc24b(const char* _vcname__)
    : Vdec256sinc24b(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vdec256sinc24b::~Vdec256sinc24b() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vdec256sinc24b___024root___eval_debug_assertions(Vdec256sinc24b___024root* vlSelf);
#endif  // VL_DEBUG
void Vdec256sinc24b___024root___eval_static(Vdec256sinc24b___024root* vlSelf);
void Vdec256sinc24b___024root___eval_initial(Vdec256sinc24b___024root* vlSelf);
void Vdec256sinc24b___024root___eval_settle(Vdec256sinc24b___024root* vlSelf);
void Vdec256sinc24b___024root___eval(Vdec256sinc24b___024root* vlSelf);

void Vdec256sinc24b::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vdec256sinc24b::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vdec256sinc24b___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vdec256sinc24b___024root___eval_static(&(vlSymsp->TOP));
        Vdec256sinc24b___024root___eval_initial(&(vlSymsp->TOP));
        Vdec256sinc24b___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vdec256sinc24b___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vdec256sinc24b::eventsPending() { return false; }

uint64_t Vdec256sinc24b::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "%Error: No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* Vdec256sinc24b::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vdec256sinc24b___024root___eval_final(Vdec256sinc24b___024root* vlSelf);

VL_ATTR_COLD void Vdec256sinc24b::final() {
    Vdec256sinc24b___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vdec256sinc24b::hierName() const { return vlSymsp->name(); }
const char* Vdec256sinc24b::modelName() const { return "Vdec256sinc24b"; }
unsigned Vdec256sinc24b::threads() const { return 1; }
void Vdec256sinc24b::prepareClone() const { contextp()->prepareClone(); }
void Vdec256sinc24b::atClone() const {
    contextp()->threadPoolpOnClone();
}
std::unique_ptr<VerilatedTraceConfig> Vdec256sinc24b::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void Vdec256sinc24b___024root__trace_decl_types(VerilatedVcd* tracep);

void Vdec256sinc24b___024root__trace_init_top(Vdec256sinc24b___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vdec256sinc24b___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vdec256sinc24b___024root*>(voidSelf);
    Vdec256sinc24b__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->pushPrefix(std::string{vlSymsp->name()}, VerilatedTracePrefixType::SCOPE_MODULE);
    Vdec256sinc24b___024root__trace_decl_types(tracep);
    Vdec256sinc24b___024root__trace_init_top(vlSelf, tracep);
    tracep->popPrefix();
}

VL_ATTR_COLD void Vdec256sinc24b___024root__trace_register(Vdec256sinc24b___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vdec256sinc24b::trace(VerilatedVcdC* tfp, int levels, int options) {
    if (tfp->isOpen()) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'Vdec256sinc24b::trace()' shall not be called after 'VerilatedVcdC::open()'.");
    }
    if (false && levels && options) {}  // Prevent unused
    tfp->spTrace()->addModel(this);
    tfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    Vdec256sinc24b___024root__trace_register(&(vlSymsp->TOP), tfp->spTrace());
}
