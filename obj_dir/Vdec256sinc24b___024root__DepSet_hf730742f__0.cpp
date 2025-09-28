// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vdec256sinc24b.h for the primary calling header

#include "Vdec256sinc24b__pch.h"
#include "Vdec256sinc24b__Syms.h"
#include "Vdec256sinc24b___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vdec256sinc24b___024root___dump_triggers__act(Vdec256sinc24b___024root* vlSelf);
#endif  // VL_DEBUG

void Vdec256sinc24b___024root___eval_triggers__act(Vdec256sinc24b___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdec256sinc24b__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdec256sinc24b___024root___eval_triggers__act\n"); );
    // Body
    vlSelf->__VactTriggered.set(0U, ((IData)(vlSelf->mdata1) 
                                     != (IData)(vlSelf->__Vtrigprevexpr___TOP__mdata1__0)));
    vlSelf->__VactTriggered.set(1U, (((~ (IData)(vlSelf->mclk1)) 
                                      & (IData)(vlSelf->__Vtrigprevexpr___TOP__mclk1__0)) 
                                     | ((IData)(vlSelf->reset) 
                                        & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__reset__0)))));
    vlSelf->__VactTriggered.set(2U, (((IData)(vlSelf->mclk1) 
                                      & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__mclk1__0))) 
                                     | ((IData)(vlSelf->reset) 
                                        & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__reset__0)))));
    vlSelf->__VactTriggered.set(3U, (((IData)(vlSelf->dec256sinc24b__DOT__word_clk) 
                                      & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__dec256sinc24b__DOT__word_clk__0))) 
                                     | ((IData)(vlSelf->reset) 
                                        & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__reset__0)))));
    vlSelf->__VactTriggered.set(4U, ((IData)(vlSelf->dec256sinc24b__DOT__word_clk) 
                                     & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__dec256sinc24b__DOT__word_clk__0))));
    vlSelf->__Vtrigprevexpr___TOP__mdata1__0 = vlSelf->mdata1;
    vlSelf->__Vtrigprevexpr___TOP__mclk1__0 = vlSelf->mclk1;
    vlSelf->__Vtrigprevexpr___TOP__reset__0 = vlSelf->reset;
    vlSelf->__Vtrigprevexpr___TOP__dec256sinc24b__DOT__word_clk__0 
        = vlSelf->dec256sinc24b__DOT__word_clk;
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->__VactDidInit))))) {
        vlSelf->__VactDidInit = 1U;
        vlSelf->__VactTriggered.set(0U, 1U);
    }
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vdec256sinc24b___024root___dump_triggers__act(vlSelf);
    }
#endif
}
