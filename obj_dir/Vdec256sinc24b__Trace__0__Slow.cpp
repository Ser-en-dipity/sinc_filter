// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vdec256sinc24b__Syms.h"


VL_ATTR_COLD void Vdec256sinc24b___024root__trace_init_sub__TOP__0(Vdec256sinc24b___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vdec256sinc24b__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdec256sinc24b___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+16,0,"mclk1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+17,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+18,0,"mdata1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+19,0,"DATA",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+20,0,"data_en",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+21,0,"dec_rate",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->pushPrefix("dec256sinc24b", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+16,0,"mclk1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+17,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+18,0,"mdata1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+19,0,"DATA",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+20,0,"data_en",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+21,0,"dec_rate",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declQuad(c+22,0,"ip_data1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 36,0);
    tracep->declQuad(c+24,0,"acc1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 36,0);
    tracep->declQuad(c+26,0,"acc2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 36,0);
    tracep->declQuad(c+28,0,"acc3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 36,0);
    tracep->declQuad(c+4,0,"acc3_d2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 36,0);
    tracep->declQuad(c+6,0,"diff1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 36,0);
    tracep->declQuad(c+8,0,"diff2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 36,0);
    tracep->declQuad(c+10,0,"diff3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 36,0);
    tracep->declQuad(c+12,0,"diff1_d",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 36,0);
    tracep->declQuad(c+14,0,"diff2_d",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 36,0);
    tracep->declBus(c+1,0,"word_count",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+2,0,"word_clk",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+3,0,"enable",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
}

VL_ATTR_COLD void Vdec256sinc24b___024root__trace_init_top(Vdec256sinc24b___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vdec256sinc24b__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdec256sinc24b___024root__trace_init_top\n"); );
    // Body
    Vdec256sinc24b___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vdec256sinc24b___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void Vdec256sinc24b___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vdec256sinc24b___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vdec256sinc24b___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vdec256sinc24b___024root__trace_register(Vdec256sinc24b___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vdec256sinc24b__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdec256sinc24b___024root__trace_register\n"); );
    // Body
    tracep->addConstCb(&Vdec256sinc24b___024root__trace_const_0, 0U, vlSelf);
    tracep->addFullCb(&Vdec256sinc24b___024root__trace_full_0, 0U, vlSelf);
    tracep->addChgCb(&Vdec256sinc24b___024root__trace_chg_0, 0U, vlSelf);
    tracep->addCleanupCb(&Vdec256sinc24b___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vdec256sinc24b___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdec256sinc24b___024root__trace_const_0\n"); );
    // Init
    Vdec256sinc24b___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vdec256sinc24b___024root*>(voidSelf);
    Vdec256sinc24b__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
}

VL_ATTR_COLD void Vdec256sinc24b___024root__trace_full_0_sub_0(Vdec256sinc24b___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vdec256sinc24b___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdec256sinc24b___024root__trace_full_0\n"); );
    // Init
    Vdec256sinc24b___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vdec256sinc24b___024root*>(voidSelf);
    Vdec256sinc24b__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vdec256sinc24b___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vdec256sinc24b___024root__trace_full_0_sub_0(Vdec256sinc24b___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vdec256sinc24b__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdec256sinc24b___024root__trace_full_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullSData(oldp+1,(vlSelf->dec256sinc24b__DOT__word_count),16);
    bufp->fullBit(oldp+2,(vlSelf->dec256sinc24b__DOT__word_clk));
    bufp->fullBit(oldp+3,(vlSelf->dec256sinc24b__DOT__enable));
    bufp->fullQData(oldp+4,(vlSelf->dec256sinc24b__DOT__acc3_d2),37);
    bufp->fullQData(oldp+6,(vlSelf->dec256sinc24b__DOT__diff1),37);
    bufp->fullQData(oldp+8,(vlSelf->dec256sinc24b__DOT__diff2),37);
    bufp->fullQData(oldp+10,(vlSelf->dec256sinc24b__DOT__diff3),37);
    bufp->fullQData(oldp+12,(vlSelf->dec256sinc24b__DOT__diff1_d),37);
    bufp->fullQData(oldp+14,(vlSelf->dec256sinc24b__DOT__diff2_d),37);
    bufp->fullBit(oldp+16,(vlSelf->mclk1));
    bufp->fullBit(oldp+17,(vlSelf->reset));
    bufp->fullBit(oldp+18,(vlSelf->mdata1));
    bufp->fullSData(oldp+19,(vlSelf->DATA),16);
    bufp->fullBit(oldp+20,(vlSelf->data_en));
    bufp->fullSData(oldp+21,(vlSelf->dec_rate),16);
    bufp->fullQData(oldp+22,(vlSelf->dec256sinc24b__DOT__ip_data1),37);
    bufp->fullQData(oldp+24,(vlSelf->dec256sinc24b__DOT__acc1),37);
    bufp->fullQData(oldp+26,(vlSelf->dec256sinc24b__DOT__acc2),37);
    bufp->fullQData(oldp+28,(vlSelf->dec256sinc24b__DOT__acc3),37);
}
