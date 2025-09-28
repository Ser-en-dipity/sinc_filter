// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vdec256sinc24b.h for the primary calling header

#ifndef VERILATED_VDEC256SINC24B___024ROOT_H_
#define VERILATED_VDEC256SINC24B___024ROOT_H_  // guard

#include "verilated.h"


class Vdec256sinc24b__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vdec256sinc24b___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(mclk1,0,0);
    VL_IN8(reset,0,0);
    VL_IN8(mdata1,0,0);
    CData/*0:0*/ dec256sinc24b__DOT__word_clk;
    VL_OUT8(data_en,0,0);
    CData/*0:0*/ dec256sinc24b__DOT__enable;
    CData/*0:0*/ __Vtrigprevexpr___TOP__mdata1__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__mclk1__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__reset__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__dec256sinc24b__DOT__word_clk__0;
    CData/*0:0*/ __VactDidInit;
    CData/*0:0*/ __VactContinue;
    VL_OUT16(DATA,15,0);
    VL_IN16(dec_rate,15,0);
    SData/*15:0*/ dec256sinc24b__DOT__word_count;
    IData/*31:0*/ __VactIterCount;
    QData/*36:0*/ dec256sinc24b__DOT__ip_data1;
    QData/*36:0*/ dec256sinc24b__DOT__acc1;
    QData/*36:0*/ dec256sinc24b__DOT__acc2;
    QData/*36:0*/ dec256sinc24b__DOT__acc3;
    QData/*36:0*/ dec256sinc24b__DOT__acc3_d2;
    QData/*36:0*/ dec256sinc24b__DOT__diff1;
    QData/*36:0*/ dec256sinc24b__DOT__diff2;
    QData/*36:0*/ dec256sinc24b__DOT__diff3;
    QData/*36:0*/ dec256sinc24b__DOT__diff1_d;
    QData/*36:0*/ dec256sinc24b__DOT__diff2_d;
    QData/*36:0*/ __Vdly__dec256sinc24b__DOT__acc3;
    QData/*36:0*/ __Vdly__dec256sinc24b__DOT__diff1_d;
    QData/*36:0*/ __Vdly__dec256sinc24b__DOT__diff2_d;
    VlUnpacked<CData/*0:0*/, 3> __Vm_traceActivity;
    VlTriggerVec<5> __VactTriggered;
    VlTriggerVec<5> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vdec256sinc24b__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vdec256sinc24b___024root(Vdec256sinc24b__Syms* symsp, const char* v__name);
    ~Vdec256sinc24b___024root();
    VL_UNCOPYABLE(Vdec256sinc24b___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
