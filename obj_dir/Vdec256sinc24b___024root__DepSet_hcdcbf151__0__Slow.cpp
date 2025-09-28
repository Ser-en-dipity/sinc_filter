// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vdec256sinc24b.h for the primary calling header

#include "Vdec256sinc24b__pch.h"
#include "Vdec256sinc24b___024root.h"

VL_ATTR_COLD void Vdec256sinc24b___024root___eval_static(Vdec256sinc24b___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdec256sinc24b__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdec256sinc24b___024root___eval_static\n"); );
}

VL_ATTR_COLD void Vdec256sinc24b___024root___eval_initial(Vdec256sinc24b___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdec256sinc24b__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdec256sinc24b___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vtrigprevexpr___TOP__mdata1__0 = vlSelf->mdata1;
    vlSelf->__Vtrigprevexpr___TOP__mclk1__0 = vlSelf->mclk1;
    vlSelf->__Vtrigprevexpr___TOP__reset__0 = vlSelf->reset;
    vlSelf->__Vtrigprevexpr___TOP__dec256sinc24b__DOT__word_clk__0 
        = vlSelf->dec256sinc24b__DOT__word_clk;
}

VL_ATTR_COLD void Vdec256sinc24b___024root___eval_final(Vdec256sinc24b___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdec256sinc24b__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdec256sinc24b___024root___eval_final\n"); );
}

VL_ATTR_COLD void Vdec256sinc24b___024root___eval_settle(Vdec256sinc24b___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdec256sinc24b__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdec256sinc24b___024root___eval_settle\n"); );
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vdec256sinc24b___024root___dump_triggers__act(Vdec256sinc24b___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdec256sinc24b__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdec256sinc24b___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @([changed] mdata1)\n");
    }
    if ((2ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @(negedge mclk1 or posedge reset)\n");
    }
    if ((4ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 2 is active: @(posedge mclk1 or posedge reset)\n");
    }
    if ((8ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 3 is active: @(posedge dec256sinc24b.word_clk or posedge reset)\n");
    }
    if ((0x10ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 4 is active: @(posedge dec256sinc24b.word_clk)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vdec256sinc24b___024root___dump_triggers__nba(Vdec256sinc24b___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdec256sinc24b__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdec256sinc24b___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VnbaTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @([changed] mdata1)\n");
    }
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @(negedge mclk1 or posedge reset)\n");
    }
    if ((4ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 2 is active: @(posedge mclk1 or posedge reset)\n");
    }
    if ((8ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 3 is active: @(posedge dec256sinc24b.word_clk or posedge reset)\n");
    }
    if ((0x10ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 4 is active: @(posedge dec256sinc24b.word_clk)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vdec256sinc24b___024root___ctor_var_reset(Vdec256sinc24b___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdec256sinc24b__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdec256sinc24b___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->mclk1 = VL_RAND_RESET_I(1);
    vlSelf->reset = VL_RAND_RESET_I(1);
    vlSelf->mdata1 = VL_RAND_RESET_I(1);
    vlSelf->DATA = VL_RAND_RESET_I(16);
    vlSelf->data_en = VL_RAND_RESET_I(1);
    vlSelf->dec_rate = VL_RAND_RESET_I(16);
    vlSelf->dec256sinc24b__DOT__ip_data1 = VL_RAND_RESET_Q(37);
    vlSelf->dec256sinc24b__DOT__acc1 = VL_RAND_RESET_Q(37);
    vlSelf->dec256sinc24b__DOT__acc2 = VL_RAND_RESET_Q(37);
    vlSelf->dec256sinc24b__DOT__acc3 = VL_RAND_RESET_Q(37);
    vlSelf->dec256sinc24b__DOT__acc3_d2 = VL_RAND_RESET_Q(37);
    vlSelf->dec256sinc24b__DOT__diff1 = VL_RAND_RESET_Q(37);
    vlSelf->dec256sinc24b__DOT__diff2 = VL_RAND_RESET_Q(37);
    vlSelf->dec256sinc24b__DOT__diff3 = VL_RAND_RESET_Q(37);
    vlSelf->dec256sinc24b__DOT__diff1_d = VL_RAND_RESET_Q(37);
    vlSelf->dec256sinc24b__DOT__diff2_d = VL_RAND_RESET_Q(37);
    vlSelf->dec256sinc24b__DOT__word_count = VL_RAND_RESET_I(16);
    vlSelf->dec256sinc24b__DOT__word_clk = VL_RAND_RESET_I(1);
    vlSelf->dec256sinc24b__DOT__enable = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__dec256sinc24b__DOT__acc3 = VL_RAND_RESET_Q(37);
    vlSelf->__Vdly__dec256sinc24b__DOT__diff1_d = VL_RAND_RESET_Q(37);
    vlSelf->__Vdly__dec256sinc24b__DOT__diff2_d = VL_RAND_RESET_Q(37);
    vlSelf->__Vtrigprevexpr___TOP__mdata1__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__mclk1__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__reset__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__dec256sinc24b__DOT__word_clk__0 = VL_RAND_RESET_I(1);
    vlSelf->__VactDidInit = 0;
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
