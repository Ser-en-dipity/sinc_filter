// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vdec256sinc24b__Syms.h"


void Vdec256sinc24b___024root__trace_chg_0_sub_0(Vdec256sinc24b___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vdec256sinc24b___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdec256sinc24b___024root__trace_chg_0\n"); );
    // Init
    Vdec256sinc24b___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vdec256sinc24b___024root*>(voidSelf);
    Vdec256sinc24b__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vdec256sinc24b___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vdec256sinc24b___024root__trace_chg_0_sub_0(Vdec256sinc24b___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vdec256sinc24b__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdec256sinc24b___024root__trace_chg_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        bufp->chgSData(oldp+0,(vlSelf->dec256sinc24b__DOT__word_count),16);
        bufp->chgBit(oldp+1,(vlSelf->dec256sinc24b__DOT__word_clk));
        bufp->chgBit(oldp+2,(vlSelf->dec256sinc24b__DOT__enable));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
        bufp->chgQData(oldp+3,(vlSelf->dec256sinc24b__DOT__acc3_d2),37);
        bufp->chgQData(oldp+5,(vlSelf->dec256sinc24b__DOT__diff1),37);
        bufp->chgQData(oldp+7,(vlSelf->dec256sinc24b__DOT__diff2),37);
        bufp->chgQData(oldp+9,(vlSelf->dec256sinc24b__DOT__diff3),37);
        bufp->chgQData(oldp+11,(vlSelf->dec256sinc24b__DOT__diff1_d),37);
        bufp->chgQData(oldp+13,(vlSelf->dec256sinc24b__DOT__diff2_d),37);
    }
    bufp->chgBit(oldp+15,(vlSelf->mclk1));
    bufp->chgBit(oldp+16,(vlSelf->reset));
    bufp->chgBit(oldp+17,(vlSelf->mdata1));
    bufp->chgSData(oldp+18,(vlSelf->DATA),16);
    bufp->chgBit(oldp+19,(vlSelf->data_en));
    bufp->chgSData(oldp+20,(vlSelf->dec_rate),16);
    bufp->chgQData(oldp+21,(vlSelf->dec256sinc24b__DOT__ip_data1),37);
    bufp->chgQData(oldp+23,(vlSelf->dec256sinc24b__DOT__acc1),37);
    bufp->chgQData(oldp+25,(vlSelf->dec256sinc24b__DOT__acc2),37);
    bufp->chgQData(oldp+27,(vlSelf->dec256sinc24b__DOT__acc3),37);
}

void Vdec256sinc24b___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdec256sinc24b___024root__trace_cleanup\n"); );
    // Init
    Vdec256sinc24b___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vdec256sinc24b___024root*>(voidSelf);
    Vdec256sinc24b__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
}
