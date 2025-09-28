// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vdec256sinc24b.h for the primary calling header

#include "Vdec256sinc24b__pch.h"
#include "Vdec256sinc24b___024root.h"

void Vdec256sinc24b___024root___eval_act(Vdec256sinc24b___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdec256sinc24b__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdec256sinc24b___024root___eval_act\n"); );
}

VL_INLINE_OPT void Vdec256sinc24b___024root___nba_sequent__TOP__0(Vdec256sinc24b___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdec256sinc24b__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdec256sinc24b___024root___nba_sequent__TOP__0\n"); );
    // Init
    SData/*15:0*/ __Vdly__dec256sinc24b__DOT__word_count;
    __Vdly__dec256sinc24b__DOT__word_count = 0;
    CData/*0:0*/ __Vdly__dec256sinc24b__DOT__enable;
    __Vdly__dec256sinc24b__DOT__enable = 0;
    // Body
    __Vdly__dec256sinc24b__DOT__word_count = vlSelf->dec256sinc24b__DOT__word_count;
    __Vdly__dec256sinc24b__DOT__enable = vlSelf->dec256sinc24b__DOT__enable;
    if (vlSelf->reset) {
        __Vdly__dec256sinc24b__DOT__word_count = 0U;
        vlSelf->dec256sinc24b__DOT__word_clk = 0U;
        vlSelf->data_en = 0U;
        __Vdly__dec256sinc24b__DOT__enable = 1U;
    } else {
        __Vdly__dec256sinc24b__DOT__word_count = (((IData)(vlSelf->dec256sinc24b__DOT__word_count) 
                                                   == 
                                                   ((IData)(vlSelf->dec_rate) 
                                                    - (IData)(1U)))
                                                   ? 0U
                                                   : 
                                                  (0xffffU 
                                                   & ((IData)(1U) 
                                                      + (IData)(vlSelf->dec256sinc24b__DOT__word_count))));
        if (((IData)(vlSelf->dec256sinc24b__DOT__word_count) 
             == (VL_SHIFTR_III(32,32,32, (IData)(vlSelf->dec_rate), 1U) 
                 - (IData)(1U)))) {
            vlSelf->dec256sinc24b__DOT__word_clk = 1U;
        } else if (((IData)(vlSelf->dec256sinc24b__DOT__word_count) 
                    == ((IData)(vlSelf->dec_rate) - (IData)(1U)))) {
            vlSelf->dec256sinc24b__DOT__word_clk = 0U;
        }
        if ((((IData)(vlSelf->dec256sinc24b__DOT__word_count) 
              == (VL_SHIFTR_III(32,32,32, (IData)(vlSelf->dec_rate), 1U) 
                  - (IData)(1U))) & (IData)(vlSelf->dec256sinc24b__DOT__enable))) {
            vlSelf->data_en = 1U;
            __Vdly__dec256sinc24b__DOT__enable = 0U;
        } else if ((((IData)(vlSelf->dec256sinc24b__DOT__word_count) 
                     == ((IData)(vlSelf->dec_rate) 
                         - (IData)(1U))) & (~ (IData)(vlSelf->dec256sinc24b__DOT__enable)))) {
            vlSelf->data_en = 0U;
            __Vdly__dec256sinc24b__DOT__enable = 1U;
        } else {
            vlSelf->data_en = 0U;
        }
    }
    vlSelf->dec256sinc24b__DOT__enable = __Vdly__dec256sinc24b__DOT__enable;
    vlSelf->dec256sinc24b__DOT__word_count = __Vdly__dec256sinc24b__DOT__word_count;
}

VL_INLINE_OPT void Vdec256sinc24b___024root___nba_sequent__TOP__1(Vdec256sinc24b___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdec256sinc24b__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdec256sinc24b___024root___nba_sequent__TOP__1\n"); );
    // Init
    QData/*36:0*/ __Vdly__dec256sinc24b__DOT__acc1;
    __Vdly__dec256sinc24b__DOT__acc1 = 0;
    QData/*36:0*/ __Vdly__dec256sinc24b__DOT__acc2;
    __Vdly__dec256sinc24b__DOT__acc2 = 0;
    // Body
    vlSelf->__Vdly__dec256sinc24b__DOT__acc3 = vlSelf->dec256sinc24b__DOT__acc3;
    __Vdly__dec256sinc24b__DOT__acc2 = vlSelf->dec256sinc24b__DOT__acc2;
    __Vdly__dec256sinc24b__DOT__acc1 = vlSelf->dec256sinc24b__DOT__acc1;
    if (vlSelf->reset) {
        __Vdly__dec256sinc24b__DOT__acc1 = 0ULL;
        __Vdly__dec256sinc24b__DOT__acc2 = 0ULL;
        vlSelf->__Vdly__dec256sinc24b__DOT__acc3 = 0ULL;
    } else {
        __Vdly__dec256sinc24b__DOT__acc1 = (0x1fffffffffULL 
                                            & (vlSelf->dec256sinc24b__DOT__acc1 
                                               + vlSelf->dec256sinc24b__DOT__ip_data1));
        __Vdly__dec256sinc24b__DOT__acc2 = (0x1fffffffffULL 
                                            & (vlSelf->dec256sinc24b__DOT__acc2 
                                               + vlSelf->dec256sinc24b__DOT__acc1));
        vlSelf->__Vdly__dec256sinc24b__DOT__acc3 = 
            (0x1fffffffffULL & (vlSelf->dec256sinc24b__DOT__acc3 
                                + vlSelf->dec256sinc24b__DOT__acc2));
    }
    vlSelf->dec256sinc24b__DOT__acc1 = __Vdly__dec256sinc24b__DOT__acc1;
    vlSelf->dec256sinc24b__DOT__acc2 = __Vdly__dec256sinc24b__DOT__acc2;
}

VL_INLINE_OPT void Vdec256sinc24b___024root___nba_sequent__TOP__2(Vdec256sinc24b___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdec256sinc24b__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdec256sinc24b___024root___nba_sequent__TOP__2\n"); );
    // Body
    vlSelf->__Vdly__dec256sinc24b__DOT__diff1_d = vlSelf->dec256sinc24b__DOT__diff1_d;
    vlSelf->__Vdly__dec256sinc24b__DOT__diff2_d = vlSelf->dec256sinc24b__DOT__diff2_d;
}

VL_INLINE_OPT void Vdec256sinc24b___024root___nba_sequent__TOP__3(Vdec256sinc24b___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdec256sinc24b__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdec256sinc24b___024root___nba_sequent__TOP__3\n"); );
    // Body
    vlSelf->DATA = (0xffffU & (((((((((0x20U == (IData)(vlSelf->dec_rate)) 
                                      | (0x40U == (IData)(vlSelf->dec_rate))) 
                                     | (0x80U == (IData)(vlSelf->dec_rate))) 
                                    | (0x100U == (IData)(vlSelf->dec_rate))) 
                                   | (0x200U == (IData)(vlSelf->dec_rate))) 
                                  | (0x400U == (IData)(vlSelf->dec_rate))) 
                                 | (0x800U == (IData)(vlSelf->dec_rate))) 
                                | (0x1000U == (IData)(vlSelf->dec_rate)))
                                ? ((0x20U == (IData)(vlSelf->dec_rate))
                                    ? ((0x8000U == 
                                        (0xffffU & (IData)(vlSelf->dec256sinc24b__DOT__diff3)))
                                        ? 0xffffU : 
                                       (0xfffeU & ((IData)(vlSelf->dec256sinc24b__DOT__diff3) 
                                                   << 1U)))
                                    : ((0x40U == (IData)(vlSelf->dec_rate))
                                        ? ((0x10000U 
                                            == (0x1ffffU 
                                                & (IData)(
                                                          (vlSelf->dec256sinc24b__DOT__diff3 
                                                           >> 2U))))
                                            ? 0xffffU
                                            : (IData)(
                                                      (vlSelf->dec256sinc24b__DOT__diff3 
                                                       >> 2U)))
                                        : ((0x80U == (IData)(vlSelf->dec_rate))
                                            ? ((0x10000U 
                                                == 
                                                (0x1ffffU 
                                                 & (IData)(
                                                           (vlSelf->dec256sinc24b__DOT__diff3 
                                                            >> 5U))))
                                                ? 0xffffU
                                                : (IData)(
                                                          (vlSelf->dec256sinc24b__DOT__diff3 
                                                           >> 5U)))
                                            : ((0x100U 
                                                == (IData)(vlSelf->dec_rate))
                                                ? (
                                                   (0x10000U 
                                                    == 
                                                    (0x1ffffU 
                                                     & (IData)(
                                                               (vlSelf->dec256sinc24b__DOT__diff3 
                                                                >> 8U))))
                                                    ? 0xffffU
                                                    : (IData)(
                                                              (vlSelf->dec256sinc24b__DOT__diff3 
                                                               >> 8U)))
                                                : (
                                                   (0x200U 
                                                    == (IData)(vlSelf->dec_rate))
                                                    ? 
                                                   ((0x10000U 
                                                     == 
                                                     (0x1ffffU 
                                                      & (IData)(
                                                                (vlSelf->dec256sinc24b__DOT__diff3 
                                                                 >> 0xbU))))
                                                     ? 0xffffU
                                                     : (IData)(
                                                               (vlSelf->dec256sinc24b__DOT__diff3 
                                                                >> 0xbU)))
                                                    : 
                                                   ((0x400U 
                                                     == (IData)(vlSelf->dec_rate))
                                                     ? 
                                                    ((0x10000U 
                                                      == 
                                                      (0x1ffffU 
                                                       & (IData)(
                                                                 (vlSelf->dec256sinc24b__DOT__diff3 
                                                                  >> 0xeU))))
                                                      ? 0xffffU
                                                      : (IData)(
                                                                (vlSelf->dec256sinc24b__DOT__diff3 
                                                                 >> 0xeU)))
                                                     : 
                                                    ((0x800U 
                                                      == (IData)(vlSelf->dec_rate))
                                                      ? 
                                                     ((0x10000U 
                                                       == 
                                                       (0x1ffffU 
                                                        & (IData)(
                                                                  (vlSelf->dec256sinc24b__DOT__diff3 
                                                                   >> 0x11U))))
                                                       ? 0xffffU
                                                       : (IData)(
                                                                 (vlSelf->dec256sinc24b__DOT__diff3 
                                                                  >> 0x11U)))
                                                      : 
                                                     ((0x10000U 
                                                       == 
                                                       (0x1ffffU 
                                                        & (IData)(
                                                                  (vlSelf->dec256sinc24b__DOT__diff3 
                                                                   >> 0x14U))))
                                                       ? 0xffffU
                                                       : (IData)(
                                                                 (vlSelf->dec256sinc24b__DOT__diff3 
                                                                  >> 0x14U))))))))))
                                : ((0x10000U == (0x1ffffU 
                                                 & (IData)(
                                                           (vlSelf->dec256sinc24b__DOT__diff3 
                                                            >> 8U))))
                                    ? 0xffffU : (IData)(
                                                        (vlSelf->dec256sinc24b__DOT__diff3 
                                                         >> 8U)))));
}

VL_INLINE_OPT void Vdec256sinc24b___024root___nba_sequent__TOP__4(Vdec256sinc24b___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdec256sinc24b__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdec256sinc24b___024root___nba_sequent__TOP__4\n"); );
    // Body
    vlSelf->dec256sinc24b__DOT__ip_data1 = ((IData)(vlSelf->mdata1)
                                             ? 1ULL
                                             : 0ULL);
}

VL_INLINE_OPT void Vdec256sinc24b___024root___nba_sequent__TOP__5(Vdec256sinc24b___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdec256sinc24b__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdec256sinc24b___024root___nba_sequent__TOP__5\n"); );
    // Body
    if (vlSelf->reset) {
        vlSelf->__Vdly__dec256sinc24b__DOT__diff2_d = 0ULL;
        vlSelf->dec256sinc24b__DOT__diff3 = 0ULL;
        vlSelf->__Vdly__dec256sinc24b__DOT__diff1_d = 0ULL;
        vlSelf->dec256sinc24b__DOT__diff2 = 0ULL;
        vlSelf->dec256sinc24b__DOT__diff1 = 0ULL;
        vlSelf->dec256sinc24b__DOT__acc3_d2 = 0ULL;
    } else {
        vlSelf->dec256sinc24b__DOT__diff3 = (0x1fffffffffULL 
                                             & (vlSelf->dec256sinc24b__DOT__diff2 
                                                - vlSelf->dec256sinc24b__DOT__diff2_d));
        vlSelf->__Vdly__dec256sinc24b__DOT__diff2_d 
            = vlSelf->dec256sinc24b__DOT__diff2;
        vlSelf->dec256sinc24b__DOT__diff2 = (0x1fffffffffULL 
                                             & (vlSelf->dec256sinc24b__DOT__diff1 
                                                - vlSelf->dec256sinc24b__DOT__diff1_d));
        vlSelf->__Vdly__dec256sinc24b__DOT__diff1_d 
            = vlSelf->dec256sinc24b__DOT__diff1;
        vlSelf->dec256sinc24b__DOT__diff1 = (0x1fffffffffULL 
                                             & (vlSelf->dec256sinc24b__DOT__acc3 
                                                - vlSelf->dec256sinc24b__DOT__acc3_d2));
        vlSelf->dec256sinc24b__DOT__acc3_d2 = vlSelf->dec256sinc24b__DOT__acc3;
    }
    vlSelf->dec256sinc24b__DOT__diff2_d = vlSelf->__Vdly__dec256sinc24b__DOT__diff2_d;
    vlSelf->dec256sinc24b__DOT__diff1_d = vlSelf->__Vdly__dec256sinc24b__DOT__diff1_d;
}

VL_INLINE_OPT void Vdec256sinc24b___024root___nba_sequent__TOP__6(Vdec256sinc24b___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdec256sinc24b__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdec256sinc24b___024root___nba_sequent__TOP__6\n"); );
    // Body
    vlSelf->dec256sinc24b__DOT__acc3 = vlSelf->__Vdly__dec256sinc24b__DOT__acc3;
}

void Vdec256sinc24b___024root___eval_nba(Vdec256sinc24b___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdec256sinc24b__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdec256sinc24b___024root___eval_nba\n"); );
    // Body
    if ((4ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vdec256sinc24b___024root___nba_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vdec256sinc24b___024root___nba_sequent__TOP__1(vlSelf);
    }
    if ((8ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vdec256sinc24b___024root___nba_sequent__TOP__2(vlSelf);
    }
    if ((0x10ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vdec256sinc24b___024root___nba_sequent__TOP__3(vlSelf);
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vdec256sinc24b___024root___nba_sequent__TOP__4(vlSelf);
    }
    if ((8ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vdec256sinc24b___024root___nba_sequent__TOP__5(vlSelf);
        vlSelf->__Vm_traceActivity[2U] = 1U;
    }
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vdec256sinc24b___024root___nba_sequent__TOP__6(vlSelf);
    }
}

void Vdec256sinc24b___024root___eval_triggers__act(Vdec256sinc24b___024root* vlSelf);

bool Vdec256sinc24b___024root___eval_phase__act(Vdec256sinc24b___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdec256sinc24b__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdec256sinc24b___024root___eval_phase__act\n"); );
    // Init
    VlTriggerVec<5> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vdec256sinc24b___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelf->__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
        vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
        Vdec256sinc24b___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vdec256sinc24b___024root___eval_phase__nba(Vdec256sinc24b___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdec256sinc24b__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdec256sinc24b___024root___eval_phase__nba\n"); );
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelf->__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vdec256sinc24b___024root___eval_nba(vlSelf);
        vlSelf->__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vdec256sinc24b___024root___dump_triggers__nba(Vdec256sinc24b___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vdec256sinc24b___024root___dump_triggers__act(Vdec256sinc24b___024root* vlSelf);
#endif  // VL_DEBUG

void Vdec256sinc24b___024root___eval(Vdec256sinc24b___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdec256sinc24b__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdec256sinc24b___024root___eval\n"); );
    // Init
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            Vdec256sinc24b___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("dec256sinc24b.v", 1, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                Vdec256sinc24b___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("dec256sinc24b.v", 1, "", "Active region did not converge.");
            }
            vlSelf->__VactIterCount = ((IData)(1U) 
                                       + vlSelf->__VactIterCount);
            vlSelf->__VactContinue = 0U;
            if (Vdec256sinc24b___024root___eval_phase__act(vlSelf)) {
                vlSelf->__VactContinue = 1U;
            }
        }
        if (Vdec256sinc24b___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vdec256sinc24b___024root___eval_debug_assertions(Vdec256sinc24b___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdec256sinc24b__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdec256sinc24b___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->mclk1 & 0xfeU))) {
        Verilated::overWidthError("mclk1");}
    if (VL_UNLIKELY((vlSelf->reset & 0xfeU))) {
        Verilated::overWidthError("reset");}
    if (VL_UNLIKELY((vlSelf->mdata1 & 0xfeU))) {
        Verilated::overWidthError("mdata1");}
}
#endif  // VL_DEBUG
