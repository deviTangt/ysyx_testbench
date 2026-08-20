// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"

VL_ATTR_COLD void Vtop___024root___eval_static(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_static\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vtrigprevexpr___TOP__clk__0 = vlSelfRef.clk;
    vlSelfRef.__Vtrigprevexpr___TOP__rst__0 = vlSelfRef.rst;
    vlSelfRef.__Vtrigprevexpr___TOP__btn__0 = vlSelfRef.btn;
    vlSelfRef.__Vtrigprevexpr___TOP__sw__0 = vlSelfRef.sw;
    vlSelfRef.__Vtrigprevexpr___TOP__ps2_clk__0 = vlSelfRef.ps2_clk;
    vlSelfRef.__Vtrigprevexpr___TOP__ps2_data__0 = vlSelfRef.ps2_data;
    vlSelfRef.__Vtrigprevexpr___TOP__uart_rx__0 = vlSelfRef.uart_rx;
    vlSelfRef.__Vtrigprevexpr___TOP__clk__1 = vlSelfRef.clk;
    vlSelfRef.__Vtrigprevexpr___TOP__top__DOT__R_PC__DOT__rst__0 
        = vlSelfRef.top__DOT__R_PC__DOT__rst;
}

VL_ATTR_COLD void Vtop___024root___eval_initial__TOP(Vtop___024root* vlSelf);

VL_ATTR_COLD void Vtop___024root___eval_initial(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_initial\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtop___024root___eval_initial__TOP(vlSelf);
    {
        // Inlined CFunc: __Vm_traceActivitySetAll
        vlSelfRef.__Vm_traceActivity[0U] = 1U;
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
    }
}

VL_ATTR_COLD void Vtop___024root___eval_initial__TOP(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_initial__TOP\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.top__DOT__ins_seg6__DOT__i0__DOT__i0__DOT__pair_list[0U] = 0x0f8eU;
    vlSelfRef.top__DOT__ins_seg6__DOT__i0__DOT__i0__DOT__pair_list[1U] = 0x0edeU;
    vlSelfRef.top__DOT__ins_seg6__DOT__i0__DOT__i0__DOT__pair_list[2U] = 0x0d7aU;
    vlSelfRef.top__DOT__ins_seg6__DOT__i0__DOT__i0__DOT__pair_list[3U] = 0x0c1aU;
    vlSelfRef.top__DOT__ins_seg6__DOT__i0__DOT__i0__DOT__pair_list[4U] = 0x0b3eU;
    vlSelfRef.top__DOT__ins_seg6__DOT__i0__DOT__i0__DOT__pair_list[5U] = 0x0aeeU;
    vlSelfRef.top__DOT__ins_seg6__DOT__i0__DOT__i0__DOT__pair_list[6U] = 0x09f6U;
    vlSelfRef.top__DOT__ins_seg6__DOT__i0__DOT__i0__DOT__pair_list[7U] = 0x08feU;
    vlSelfRef.top__DOT__ins_seg6__DOT__i0__DOT__i0__DOT__pair_list[8U] = 0x07e0U;
    vlSelfRef.top__DOT__ins_seg6__DOT__i0__DOT__i0__DOT__pair_list[9U] = 0x06beU;
    vlSelfRef.top__DOT__ins_seg6__DOT__i0__DOT__i0__DOT__pair_list[10U] = 0x05b6U;
    vlSelfRef.top__DOT__ins_seg6__DOT__i0__DOT__i0__DOT__pair_list[11U] = 0x0466U;
    vlSelfRef.top__DOT__ins_seg6__DOT__i0__DOT__i0__DOT__pair_list[12U] = 0x03f2U;
    vlSelfRef.top__DOT__ins_seg6__DOT__i0__DOT__i0__DOT__pair_list[13U] = 0x02daU;
    vlSelfRef.top__DOT__ins_seg6__DOT__i0__DOT__i0__DOT__pair_list[14U] = 0x0160U;
    vlSelfRef.top__DOT__ins_seg6__DOT__i0__DOT__i0__DOT__pair_list[15U] = 0x00fcU;
    vlSelfRef.top__DOT__ins_seg6__DOT__i0__DOT__i0__DOT__data_list[0U] = 0x8eU;
    vlSelfRef.top__DOT__ins_seg6__DOT__i0__DOT__i0__DOT__data_list[1U] = 0xdeU;
    vlSelfRef.top__DOT__ins_seg6__DOT__i0__DOT__i0__DOT__data_list[2U] = 0x7aU;
    vlSelfRef.top__DOT__ins_seg6__DOT__i0__DOT__i0__DOT__data_list[3U] = 0x1aU;
    vlSelfRef.top__DOT__ins_seg6__DOT__i0__DOT__i0__DOT__data_list[4U] = 0x3eU;
    vlSelfRef.top__DOT__ins_seg6__DOT__i0__DOT__i0__DOT__data_list[5U] = 0xeeU;
    vlSelfRef.top__DOT__ins_seg6__DOT__i0__DOT__i0__DOT__data_list[6U] = 0xf6U;
    vlSelfRef.top__DOT__ins_seg6__DOT__i0__DOT__i0__DOT__data_list[7U] = 0xfeU;
    vlSelfRef.top__DOT__ins_seg6__DOT__i0__DOT__i0__DOT__data_list[8U] = 0xe0U;
    vlSelfRef.top__DOT__ins_seg6__DOT__i0__DOT__i0__DOT__data_list[9U] = 0xbeU;
    vlSelfRef.top__DOT__ins_seg6__DOT__i0__DOT__i0__DOT__data_list[10U] = 0xb6U;
    vlSelfRef.top__DOT__ins_seg6__DOT__i0__DOT__i0__DOT__data_list[11U] = 0x66U;
    vlSelfRef.top__DOT__ins_seg6__DOT__i0__DOT__i0__DOT__data_list[12U] = 0xf2U;
    vlSelfRef.top__DOT__ins_seg6__DOT__i0__DOT__i0__DOT__data_list[13U] = 0xdaU;
    vlSelfRef.top__DOT__ins_seg6__DOT__i0__DOT__i0__DOT__data_list[14U] = 0x60U;
    vlSelfRef.top__DOT__ins_seg6__DOT__i0__DOT__i0__DOT__data_list[15U] = 0xfcU;
    vlSelfRef.top__DOT__ins_seg6__DOT__i0__DOT__i0__DOT__key_list[0U] = 0x0fU;
    vlSelfRef.top__DOT__ins_seg6__DOT__i0__DOT__i0__DOT__key_list[1U] = 0x0eU;
    vlSelfRef.top__DOT__ins_seg6__DOT__i0__DOT__i0__DOT__key_list[2U] = 0x0dU;
    vlSelfRef.top__DOT__ins_seg6__DOT__i0__DOT__i0__DOT__key_list[3U] = 0x0cU;
    vlSelfRef.top__DOT__ins_seg6__DOT__i0__DOT__i0__DOT__key_list[4U] = 0x0bU;
    vlSelfRef.top__DOT__ins_seg6__DOT__i0__DOT__i0__DOT__key_list[5U] = 0x0aU;
    vlSelfRef.top__DOT__ins_seg6__DOT__i0__DOT__i0__DOT__key_list[6U] = 9U;
    vlSelfRef.top__DOT__ins_seg6__DOT__i0__DOT__i0__DOT__key_list[7U] = 8U;
    vlSelfRef.top__DOT__ins_seg6__DOT__i0__DOT__i0__DOT__key_list[8U] = 7U;
    vlSelfRef.top__DOT__ins_seg6__DOT__i0__DOT__i0__DOT__key_list[9U] = 6U;
    vlSelfRef.top__DOT__ins_seg6__DOT__i0__DOT__i0__DOT__key_list[10U] = 5U;
    vlSelfRef.top__DOT__ins_seg6__DOT__i0__DOT__i0__DOT__key_list[11U] = 4U;
    vlSelfRef.top__DOT__ins_seg6__DOT__i0__DOT__i0__DOT__key_list[12U] = 3U;
    vlSelfRef.top__DOT__ins_seg6__DOT__i0__DOT__i0__DOT__key_list[13U] = 2U;
    vlSelfRef.top__DOT__ins_seg6__DOT__i0__DOT__i0__DOT__key_list[14U] = 1U;
    vlSelfRef.top__DOT__ins_seg6__DOT__i0__DOT__i0__DOT__key_list[15U] = 0U;
    vlSelfRef.top__DOT__ins_seg7__DOT__i0__DOT__i0__DOT__pair_list[0U] = 0x0f8eU;
    vlSelfRef.top__DOT__ins_seg7__DOT__i0__DOT__i0__DOT__pair_list[1U] = 0x0edeU;
    vlSelfRef.top__DOT__ins_seg7__DOT__i0__DOT__i0__DOT__pair_list[2U] = 0x0d7aU;
    vlSelfRef.top__DOT__ins_seg7__DOT__i0__DOT__i0__DOT__pair_list[3U] = 0x0c1aU;
    vlSelfRef.top__DOT__ins_seg7__DOT__i0__DOT__i0__DOT__pair_list[4U] = 0x0b3eU;
    vlSelfRef.top__DOT__ins_seg7__DOT__i0__DOT__i0__DOT__pair_list[5U] = 0x0aeeU;
    vlSelfRef.top__DOT__ins_seg7__DOT__i0__DOT__i0__DOT__pair_list[6U] = 0x09f6U;
    vlSelfRef.top__DOT__ins_seg7__DOT__i0__DOT__i0__DOT__pair_list[7U] = 0x08feU;
    vlSelfRef.top__DOT__ins_seg7__DOT__i0__DOT__i0__DOT__pair_list[8U] = 0x07e0U;
    vlSelfRef.top__DOT__ins_seg7__DOT__i0__DOT__i0__DOT__pair_list[9U] = 0x06beU;
    vlSelfRef.top__DOT__ins_seg7__DOT__i0__DOT__i0__DOT__pair_list[10U] = 0x05b6U;
    vlSelfRef.top__DOT__ins_seg7__DOT__i0__DOT__i0__DOT__pair_list[11U] = 0x0466U;
    vlSelfRef.top__DOT__ins_seg7__DOT__i0__DOT__i0__DOT__pair_list[12U] = 0x03f2U;
    vlSelfRef.top__DOT__ins_seg7__DOT__i0__DOT__i0__DOT__pair_list[13U] = 0x02daU;
    vlSelfRef.top__DOT__ins_seg7__DOT__i0__DOT__i0__DOT__pair_list[14U] = 0x0160U;
    vlSelfRef.top__DOT__ins_seg7__DOT__i0__DOT__i0__DOT__pair_list[15U] = 0x00fcU;
    vlSelfRef.top__DOT__ins_seg7__DOT__i0__DOT__i0__DOT__data_list[0U] = 0x8eU;
    vlSelfRef.top__DOT__ins_seg7__DOT__i0__DOT__i0__DOT__data_list[1U] = 0xdeU;
    vlSelfRef.top__DOT__ins_seg7__DOT__i0__DOT__i0__DOT__data_list[2U] = 0x7aU;
    vlSelfRef.top__DOT__ins_seg7__DOT__i0__DOT__i0__DOT__data_list[3U] = 0x1aU;
    vlSelfRef.top__DOT__ins_seg7__DOT__i0__DOT__i0__DOT__data_list[4U] = 0x3eU;
    vlSelfRef.top__DOT__ins_seg7__DOT__i0__DOT__i0__DOT__data_list[5U] = 0xeeU;
    vlSelfRef.top__DOT__ins_seg7__DOT__i0__DOT__i0__DOT__data_list[6U] = 0xf6U;
    vlSelfRef.top__DOT__ins_seg7__DOT__i0__DOT__i0__DOT__data_list[7U] = 0xfeU;
    vlSelfRef.top__DOT__ins_seg7__DOT__i0__DOT__i0__DOT__data_list[8U] = 0xe0U;
    vlSelfRef.top__DOT__ins_seg7__DOT__i0__DOT__i0__DOT__data_list[9U] = 0xbeU;
    vlSelfRef.top__DOT__ins_seg7__DOT__i0__DOT__i0__DOT__data_list[10U] = 0xb6U;
    vlSelfRef.top__DOT__ins_seg7__DOT__i0__DOT__i0__DOT__data_list[11U] = 0x66U;
    vlSelfRef.top__DOT__ins_seg7__DOT__i0__DOT__i0__DOT__data_list[12U] = 0xf2U;
    vlSelfRef.top__DOT__ins_seg7__DOT__i0__DOT__i0__DOT__data_list[13U] = 0xdaU;
    vlSelfRef.top__DOT__ins_seg7__DOT__i0__DOT__i0__DOT__data_list[14U] = 0x60U;
    vlSelfRef.top__DOT__ins_seg7__DOT__i0__DOT__i0__DOT__data_list[15U] = 0xfcU;
    vlSelfRef.top__DOT__ins_seg7__DOT__i0__DOT__i0__DOT__key_list[0U] = 0x0fU;
    vlSelfRef.top__DOT__ins_seg7__DOT__i0__DOT__i0__DOT__key_list[1U] = 0x0eU;
    vlSelfRef.top__DOT__ins_seg7__DOT__i0__DOT__i0__DOT__key_list[2U] = 0x0dU;
    vlSelfRef.top__DOT__ins_seg7__DOT__i0__DOT__i0__DOT__key_list[3U] = 0x0cU;
    vlSelfRef.top__DOT__ins_seg7__DOT__i0__DOT__i0__DOT__key_list[4U] = 0x0bU;
    vlSelfRef.top__DOT__ins_seg7__DOT__i0__DOT__i0__DOT__key_list[5U] = 0x0aU;
    vlSelfRef.top__DOT__ins_seg7__DOT__i0__DOT__i0__DOT__key_list[6U] = 9U;
    vlSelfRef.top__DOT__ins_seg7__DOT__i0__DOT__i0__DOT__key_list[7U] = 8U;
    vlSelfRef.top__DOT__ins_seg7__DOT__i0__DOT__i0__DOT__key_list[8U] = 7U;
    vlSelfRef.top__DOT__ins_seg7__DOT__i0__DOT__i0__DOT__key_list[9U] = 6U;
    vlSelfRef.top__DOT__ins_seg7__DOT__i0__DOT__i0__DOT__key_list[10U] = 5U;
    vlSelfRef.top__DOT__ins_seg7__DOT__i0__DOT__i0__DOT__key_list[11U] = 4U;
    vlSelfRef.top__DOT__ins_seg7__DOT__i0__DOT__i0__DOT__key_list[12U] = 3U;
    vlSelfRef.top__DOT__ins_seg7__DOT__i0__DOT__i0__DOT__key_list[13U] = 2U;
    vlSelfRef.top__DOT__ins_seg7__DOT__i0__DOT__i0__DOT__key_list[14U] = 1U;
    vlSelfRef.top__DOT__ins_seg7__DOT__i0__DOT__i0__DOT__key_list[15U] = 0U;
    vlSelfRef.top__DOT__ins_seg0__DOT__i0__DOT__i0__DOT__pair_list[0U] = 0x0f8eU;
    vlSelfRef.top__DOT__ins_seg0__DOT__i0__DOT__i0__DOT__pair_list[1U] = 0x0edeU;
    vlSelfRef.top__DOT__ins_seg0__DOT__i0__DOT__i0__DOT__pair_list[2U] = 0x0d7aU;
    vlSelfRef.top__DOT__ins_seg0__DOT__i0__DOT__i0__DOT__pair_list[3U] = 0x0c1aU;
    vlSelfRef.top__DOT__ins_seg0__DOT__i0__DOT__i0__DOT__pair_list[4U] = 0x0b3eU;
    vlSelfRef.top__DOT__ins_seg0__DOT__i0__DOT__i0__DOT__pair_list[5U] = 0x0aeeU;
    vlSelfRef.top__DOT__ins_seg0__DOT__i0__DOT__i0__DOT__pair_list[6U] = 0x09f6U;
    vlSelfRef.top__DOT__ins_seg0__DOT__i0__DOT__i0__DOT__pair_list[7U] = 0x08feU;
    vlSelfRef.top__DOT__ins_seg0__DOT__i0__DOT__i0__DOT__pair_list[8U] = 0x07e0U;
    vlSelfRef.top__DOT__ins_seg0__DOT__i0__DOT__i0__DOT__pair_list[9U] = 0x06beU;
    vlSelfRef.top__DOT__ins_seg0__DOT__i0__DOT__i0__DOT__pair_list[10U] = 0x05b6U;
    vlSelfRef.top__DOT__ins_seg0__DOT__i0__DOT__i0__DOT__pair_list[11U] = 0x0466U;
    vlSelfRef.top__DOT__ins_seg0__DOT__i0__DOT__i0__DOT__pair_list[12U] = 0x03f2U;
    vlSelfRef.top__DOT__ins_seg0__DOT__i0__DOT__i0__DOT__pair_list[13U] = 0x02daU;
    vlSelfRef.top__DOT__ins_seg0__DOT__i0__DOT__i0__DOT__pair_list[14U] = 0x0160U;
    vlSelfRef.top__DOT__ins_seg0__DOT__i0__DOT__i0__DOT__pair_list[15U] = 0x00fcU;
    vlSelfRef.top__DOT__ins_seg0__DOT__i0__DOT__i0__DOT__data_list[0U] = 0x8eU;
    vlSelfRef.top__DOT__ins_seg0__DOT__i0__DOT__i0__DOT__data_list[1U] = 0xdeU;
    vlSelfRef.top__DOT__ins_seg0__DOT__i0__DOT__i0__DOT__data_list[2U] = 0x7aU;
    vlSelfRef.top__DOT__ins_seg0__DOT__i0__DOT__i0__DOT__data_list[3U] = 0x1aU;
    vlSelfRef.top__DOT__ins_seg0__DOT__i0__DOT__i0__DOT__data_list[4U] = 0x3eU;
    vlSelfRef.top__DOT__ins_seg0__DOT__i0__DOT__i0__DOT__data_list[5U] = 0xeeU;
    vlSelfRef.top__DOT__ins_seg0__DOT__i0__DOT__i0__DOT__data_list[6U] = 0xf6U;
    vlSelfRef.top__DOT__ins_seg0__DOT__i0__DOT__i0__DOT__data_list[7U] = 0xfeU;
    vlSelfRef.top__DOT__ins_seg0__DOT__i0__DOT__i0__DOT__data_list[8U] = 0xe0U;
    vlSelfRef.top__DOT__ins_seg0__DOT__i0__DOT__i0__DOT__data_list[9U] = 0xbeU;
    vlSelfRef.top__DOT__ins_seg0__DOT__i0__DOT__i0__DOT__data_list[10U] = 0xb6U;
    vlSelfRef.top__DOT__ins_seg0__DOT__i0__DOT__i0__DOT__data_list[11U] = 0x66U;
    vlSelfRef.top__DOT__ins_seg0__DOT__i0__DOT__i0__DOT__data_list[12U] = 0xf2U;
    vlSelfRef.top__DOT__ins_seg0__DOT__i0__DOT__i0__DOT__data_list[13U] = 0xdaU;
    vlSelfRef.top__DOT__ins_seg0__DOT__i0__DOT__i0__DOT__data_list[14U] = 0x60U;
    vlSelfRef.top__DOT__ins_seg0__DOT__i0__DOT__i0__DOT__data_list[15U] = 0xfcU;
    vlSelfRef.top__DOT__ins_seg0__DOT__i0__DOT__i0__DOT__key_list[0U] = 0x0fU;
    vlSelfRef.top__DOT__ins_seg0__DOT__i0__DOT__i0__DOT__key_list[1U] = 0x0eU;
    vlSelfRef.top__DOT__ins_seg0__DOT__i0__DOT__i0__DOT__key_list[2U] = 0x0dU;
    vlSelfRef.top__DOT__ins_seg0__DOT__i0__DOT__i0__DOT__key_list[3U] = 0x0cU;
    vlSelfRef.top__DOT__ins_seg0__DOT__i0__DOT__i0__DOT__key_list[4U] = 0x0bU;
    vlSelfRef.top__DOT__ins_seg0__DOT__i0__DOT__i0__DOT__key_list[5U] = 0x0aU;
    vlSelfRef.top__DOT__ins_seg0__DOT__i0__DOT__i0__DOT__key_list[6U] = 9U;
    vlSelfRef.top__DOT__ins_seg0__DOT__i0__DOT__i0__DOT__key_list[7U] = 8U;
    vlSelfRef.top__DOT__ins_seg0__DOT__i0__DOT__i0__DOT__key_list[8U] = 7U;
    vlSelfRef.top__DOT__ins_seg0__DOT__i0__DOT__i0__DOT__key_list[9U] = 6U;
    vlSelfRef.top__DOT__ins_seg0__DOT__i0__DOT__i0__DOT__key_list[10U] = 5U;
    vlSelfRef.top__DOT__ins_seg0__DOT__i0__DOT__i0__DOT__key_list[11U] = 4U;
    vlSelfRef.top__DOT__ins_seg0__DOT__i0__DOT__i0__DOT__key_list[12U] = 3U;
    vlSelfRef.top__DOT__ins_seg0__DOT__i0__DOT__i0__DOT__key_list[13U] = 2U;
    vlSelfRef.top__DOT__ins_seg0__DOT__i0__DOT__i0__DOT__key_list[14U] = 1U;
    vlSelfRef.top__DOT__ins_seg0__DOT__i0__DOT__i0__DOT__key_list[15U] = 0U;
    vlSelfRef.top__DOT__ins_seg1__DOT__i0__DOT__i0__DOT__pair_list[0U] = 0x0f8eU;
    vlSelfRef.top__DOT__ins_seg1__DOT__i0__DOT__i0__DOT__pair_list[1U] = 0x0edeU;
    vlSelfRef.top__DOT__ins_seg1__DOT__i0__DOT__i0__DOT__pair_list[2U] = 0x0d7aU;
    vlSelfRef.top__DOT__ins_seg1__DOT__i0__DOT__i0__DOT__pair_list[3U] = 0x0c1aU;
    vlSelfRef.top__DOT__ins_seg1__DOT__i0__DOT__i0__DOT__pair_list[4U] = 0x0b3eU;
    vlSelfRef.top__DOT__ins_seg1__DOT__i0__DOT__i0__DOT__pair_list[5U] = 0x0aeeU;
    vlSelfRef.top__DOT__ins_seg1__DOT__i0__DOT__i0__DOT__pair_list[6U] = 0x09f6U;
    vlSelfRef.top__DOT__ins_seg1__DOT__i0__DOT__i0__DOT__pair_list[7U] = 0x08feU;
    vlSelfRef.top__DOT__ins_seg1__DOT__i0__DOT__i0__DOT__pair_list[8U] = 0x07e0U;
    vlSelfRef.top__DOT__ins_seg1__DOT__i0__DOT__i0__DOT__pair_list[9U] = 0x06beU;
    vlSelfRef.top__DOT__ins_seg1__DOT__i0__DOT__i0__DOT__pair_list[10U] = 0x05b6U;
    vlSelfRef.top__DOT__ins_seg1__DOT__i0__DOT__i0__DOT__pair_list[11U] = 0x0466U;
    vlSelfRef.top__DOT__ins_seg1__DOT__i0__DOT__i0__DOT__pair_list[12U] = 0x03f2U;
    vlSelfRef.top__DOT__ins_seg1__DOT__i0__DOT__i0__DOT__pair_list[13U] = 0x02daU;
    vlSelfRef.top__DOT__ins_seg1__DOT__i0__DOT__i0__DOT__pair_list[14U] = 0x0160U;
    vlSelfRef.top__DOT__ins_seg1__DOT__i0__DOT__i0__DOT__pair_list[15U] = 0x00fcU;
    vlSelfRef.top__DOT__ins_seg1__DOT__i0__DOT__i0__DOT__data_list[0U] = 0x8eU;
    vlSelfRef.top__DOT__ins_seg1__DOT__i0__DOT__i0__DOT__data_list[1U] = 0xdeU;
    vlSelfRef.top__DOT__ins_seg1__DOT__i0__DOT__i0__DOT__data_list[2U] = 0x7aU;
    vlSelfRef.top__DOT__ins_seg1__DOT__i0__DOT__i0__DOT__data_list[3U] = 0x1aU;
    vlSelfRef.top__DOT__ins_seg1__DOT__i0__DOT__i0__DOT__data_list[4U] = 0x3eU;
    vlSelfRef.top__DOT__ins_seg1__DOT__i0__DOT__i0__DOT__data_list[5U] = 0xeeU;
    vlSelfRef.top__DOT__ins_seg1__DOT__i0__DOT__i0__DOT__data_list[6U] = 0xf6U;
    vlSelfRef.top__DOT__ins_seg1__DOT__i0__DOT__i0__DOT__data_list[7U] = 0xfeU;
    vlSelfRef.top__DOT__ins_seg1__DOT__i0__DOT__i0__DOT__data_list[8U] = 0xe0U;
    vlSelfRef.top__DOT__ins_seg1__DOT__i0__DOT__i0__DOT__data_list[9U] = 0xbeU;
    vlSelfRef.top__DOT__ins_seg1__DOT__i0__DOT__i0__DOT__data_list[10U] = 0xb6U;
    vlSelfRef.top__DOT__ins_seg1__DOT__i0__DOT__i0__DOT__data_list[11U] = 0x66U;
    vlSelfRef.top__DOT__ins_seg1__DOT__i0__DOT__i0__DOT__data_list[12U] = 0xf2U;
    vlSelfRef.top__DOT__ins_seg1__DOT__i0__DOT__i0__DOT__data_list[13U] = 0xdaU;
    vlSelfRef.top__DOT__ins_seg1__DOT__i0__DOT__i0__DOT__data_list[14U] = 0x60U;
    vlSelfRef.top__DOT__ins_seg1__DOT__i0__DOT__i0__DOT__data_list[15U] = 0xfcU;
    vlSelfRef.top__DOT__ins_seg1__DOT__i0__DOT__i0__DOT__key_list[0U] = 0x0fU;
    vlSelfRef.top__DOT__ins_seg1__DOT__i0__DOT__i0__DOT__key_list[1U] = 0x0eU;
    vlSelfRef.top__DOT__ins_seg1__DOT__i0__DOT__i0__DOT__key_list[2U] = 0x0dU;
    vlSelfRef.top__DOT__ins_seg1__DOT__i0__DOT__i0__DOT__key_list[3U] = 0x0cU;
    vlSelfRef.top__DOT__ins_seg1__DOT__i0__DOT__i0__DOT__key_list[4U] = 0x0bU;
    vlSelfRef.top__DOT__ins_seg1__DOT__i0__DOT__i0__DOT__key_list[5U] = 0x0aU;
    vlSelfRef.top__DOT__ins_seg1__DOT__i0__DOT__i0__DOT__key_list[6U] = 9U;
    vlSelfRef.top__DOT__ins_seg1__DOT__i0__DOT__i0__DOT__key_list[7U] = 8U;
    vlSelfRef.top__DOT__ins_seg1__DOT__i0__DOT__i0__DOT__key_list[8U] = 7U;
    vlSelfRef.top__DOT__ins_seg1__DOT__i0__DOT__i0__DOT__key_list[9U] = 6U;
    vlSelfRef.top__DOT__ins_seg1__DOT__i0__DOT__i0__DOT__key_list[10U] = 5U;
    vlSelfRef.top__DOT__ins_seg1__DOT__i0__DOT__i0__DOT__key_list[11U] = 4U;
    vlSelfRef.top__DOT__ins_seg1__DOT__i0__DOT__i0__DOT__key_list[12U] = 3U;
    vlSelfRef.top__DOT__ins_seg1__DOT__i0__DOT__i0__DOT__key_list[13U] = 2U;
    vlSelfRef.top__DOT__ins_seg1__DOT__i0__DOT__i0__DOT__key_list[14U] = 1U;
    vlSelfRef.top__DOT__ins_seg1__DOT__i0__DOT__i0__DOT__key_list[15U] = 0U;
    vlSelfRef.top__DOT__ins_seg2__DOT__i0__DOT__i0__DOT__pair_list[0U] = 0x0f8eU;
    vlSelfRef.top__DOT__ins_seg2__DOT__i0__DOT__i0__DOT__pair_list[1U] = 0x0edeU;
    vlSelfRef.top__DOT__ins_seg2__DOT__i0__DOT__i0__DOT__pair_list[2U] = 0x0d7aU;
    vlSelfRef.top__DOT__ins_seg2__DOT__i0__DOT__i0__DOT__pair_list[3U] = 0x0c1aU;
    vlSelfRef.top__DOT__ins_seg2__DOT__i0__DOT__i0__DOT__pair_list[4U] = 0x0b3eU;
    vlSelfRef.top__DOT__ins_seg2__DOT__i0__DOT__i0__DOT__pair_list[5U] = 0x0aeeU;
    vlSelfRef.top__DOT__ins_seg2__DOT__i0__DOT__i0__DOT__pair_list[6U] = 0x09f6U;
    vlSelfRef.top__DOT__ins_seg2__DOT__i0__DOT__i0__DOT__pair_list[7U] = 0x08feU;
    vlSelfRef.top__DOT__ins_seg2__DOT__i0__DOT__i0__DOT__pair_list[8U] = 0x07e0U;
    vlSelfRef.top__DOT__ins_seg2__DOT__i0__DOT__i0__DOT__pair_list[9U] = 0x06beU;
    vlSelfRef.top__DOT__ins_seg2__DOT__i0__DOT__i0__DOT__pair_list[10U] = 0x05b6U;
    vlSelfRef.top__DOT__ins_seg2__DOT__i0__DOT__i0__DOT__pair_list[11U] = 0x0466U;
    vlSelfRef.top__DOT__ins_seg2__DOT__i0__DOT__i0__DOT__pair_list[12U] = 0x03f2U;
    vlSelfRef.top__DOT__ins_seg2__DOT__i0__DOT__i0__DOT__pair_list[13U] = 0x02daU;
    vlSelfRef.top__DOT__ins_seg2__DOT__i0__DOT__i0__DOT__pair_list[14U] = 0x0160U;
    vlSelfRef.top__DOT__ins_seg2__DOT__i0__DOT__i0__DOT__pair_list[15U] = 0x00fcU;
    vlSelfRef.top__DOT__ins_seg2__DOT__i0__DOT__i0__DOT__data_list[0U] = 0x8eU;
    vlSelfRef.top__DOT__ins_seg2__DOT__i0__DOT__i0__DOT__data_list[1U] = 0xdeU;
    vlSelfRef.top__DOT__ins_seg2__DOT__i0__DOT__i0__DOT__data_list[2U] = 0x7aU;
    vlSelfRef.top__DOT__ins_seg2__DOT__i0__DOT__i0__DOT__data_list[3U] = 0x1aU;
    vlSelfRef.top__DOT__ins_seg2__DOT__i0__DOT__i0__DOT__data_list[4U] = 0x3eU;
    vlSelfRef.top__DOT__ins_seg2__DOT__i0__DOT__i0__DOT__data_list[5U] = 0xeeU;
    vlSelfRef.top__DOT__ins_seg2__DOT__i0__DOT__i0__DOT__data_list[6U] = 0xf6U;
    vlSelfRef.top__DOT__ins_seg2__DOT__i0__DOT__i0__DOT__data_list[7U] = 0xfeU;
    vlSelfRef.top__DOT__ins_seg2__DOT__i0__DOT__i0__DOT__data_list[8U] = 0xe0U;
    vlSelfRef.top__DOT__ins_seg2__DOT__i0__DOT__i0__DOT__data_list[9U] = 0xbeU;
    vlSelfRef.top__DOT__ins_seg2__DOT__i0__DOT__i0__DOT__data_list[10U] = 0xb6U;
    vlSelfRef.top__DOT__ins_seg2__DOT__i0__DOT__i0__DOT__data_list[11U] = 0x66U;
    vlSelfRef.top__DOT__ins_seg2__DOT__i0__DOT__i0__DOT__data_list[12U] = 0xf2U;
    vlSelfRef.top__DOT__ins_seg2__DOT__i0__DOT__i0__DOT__data_list[13U] = 0xdaU;
    vlSelfRef.top__DOT__ins_seg2__DOT__i0__DOT__i0__DOT__data_list[14U] = 0x60U;
    vlSelfRef.top__DOT__ins_seg2__DOT__i0__DOT__i0__DOT__data_list[15U] = 0xfcU;
    vlSelfRef.top__DOT__ins_seg2__DOT__i0__DOT__i0__DOT__key_list[0U] = 0x0fU;
    vlSelfRef.top__DOT__ins_seg2__DOT__i0__DOT__i0__DOT__key_list[1U] = 0x0eU;
    vlSelfRef.top__DOT__ins_seg2__DOT__i0__DOT__i0__DOT__key_list[2U] = 0x0dU;
    vlSelfRef.top__DOT__ins_seg2__DOT__i0__DOT__i0__DOT__key_list[3U] = 0x0cU;
    vlSelfRef.top__DOT__ins_seg2__DOT__i0__DOT__i0__DOT__key_list[4U] = 0x0bU;
    vlSelfRef.top__DOT__ins_seg2__DOT__i0__DOT__i0__DOT__key_list[5U] = 0x0aU;
    vlSelfRef.top__DOT__ins_seg2__DOT__i0__DOT__i0__DOT__key_list[6U] = 9U;
    vlSelfRef.top__DOT__ins_seg2__DOT__i0__DOT__i0__DOT__key_list[7U] = 8U;
    vlSelfRef.top__DOT__ins_seg2__DOT__i0__DOT__i0__DOT__key_list[8U] = 7U;
    vlSelfRef.top__DOT__ins_seg2__DOT__i0__DOT__i0__DOT__key_list[9U] = 6U;
    vlSelfRef.top__DOT__ins_seg2__DOT__i0__DOT__i0__DOT__key_list[10U] = 5U;
    vlSelfRef.top__DOT__ins_seg2__DOT__i0__DOT__i0__DOT__key_list[11U] = 4U;
    vlSelfRef.top__DOT__ins_seg2__DOT__i0__DOT__i0__DOT__key_list[12U] = 3U;
    vlSelfRef.top__DOT__ins_seg2__DOT__i0__DOT__i0__DOT__key_list[13U] = 2U;
    vlSelfRef.top__DOT__ins_seg2__DOT__i0__DOT__i0__DOT__key_list[14U] = 1U;
    vlSelfRef.top__DOT__ins_seg2__DOT__i0__DOT__i0__DOT__key_list[15U] = 0U;
    vlSelfRef.top__DOT__ins_seg3__DOT__i0__DOT__i0__DOT__pair_list[0U] = 0x0f8eU;
    vlSelfRef.top__DOT__ins_seg3__DOT__i0__DOT__i0__DOT__pair_list[1U] = 0x0edeU;
    vlSelfRef.top__DOT__ins_seg3__DOT__i0__DOT__i0__DOT__pair_list[2U] = 0x0d7aU;
    vlSelfRef.top__DOT__ins_seg3__DOT__i0__DOT__i0__DOT__pair_list[3U] = 0x0c1aU;
    vlSelfRef.top__DOT__ins_seg3__DOT__i0__DOT__i0__DOT__pair_list[4U] = 0x0b3eU;
    vlSelfRef.top__DOT__ins_seg3__DOT__i0__DOT__i0__DOT__pair_list[5U] = 0x0aeeU;
    vlSelfRef.top__DOT__ins_seg3__DOT__i0__DOT__i0__DOT__pair_list[6U] = 0x09f6U;
    vlSelfRef.top__DOT__ins_seg3__DOT__i0__DOT__i0__DOT__pair_list[7U] = 0x08feU;
    vlSelfRef.top__DOT__ins_seg3__DOT__i0__DOT__i0__DOT__pair_list[8U] = 0x07e0U;
    vlSelfRef.top__DOT__ins_seg3__DOT__i0__DOT__i0__DOT__pair_list[9U] = 0x06beU;
    vlSelfRef.top__DOT__ins_seg3__DOT__i0__DOT__i0__DOT__pair_list[10U] = 0x05b6U;
    vlSelfRef.top__DOT__ins_seg3__DOT__i0__DOT__i0__DOT__pair_list[11U] = 0x0466U;
    vlSelfRef.top__DOT__ins_seg3__DOT__i0__DOT__i0__DOT__pair_list[12U] = 0x03f2U;
    vlSelfRef.top__DOT__ins_seg3__DOT__i0__DOT__i0__DOT__pair_list[13U] = 0x02daU;
    vlSelfRef.top__DOT__ins_seg3__DOT__i0__DOT__i0__DOT__pair_list[14U] = 0x0160U;
    vlSelfRef.top__DOT__ins_seg3__DOT__i0__DOT__i0__DOT__pair_list[15U] = 0x00fcU;
    vlSelfRef.top__DOT__ins_seg3__DOT__i0__DOT__i0__DOT__data_list[0U] = 0x8eU;
    vlSelfRef.top__DOT__ins_seg3__DOT__i0__DOT__i0__DOT__data_list[1U] = 0xdeU;
    vlSelfRef.top__DOT__ins_seg3__DOT__i0__DOT__i0__DOT__data_list[2U] = 0x7aU;
    vlSelfRef.top__DOT__ins_seg3__DOT__i0__DOT__i0__DOT__data_list[3U] = 0x1aU;
    vlSelfRef.top__DOT__ins_seg3__DOT__i0__DOT__i0__DOT__data_list[4U] = 0x3eU;
    vlSelfRef.top__DOT__ins_seg3__DOT__i0__DOT__i0__DOT__data_list[5U] = 0xeeU;
    vlSelfRef.top__DOT__ins_seg3__DOT__i0__DOT__i0__DOT__data_list[6U] = 0xf6U;
    vlSelfRef.top__DOT__ins_seg3__DOT__i0__DOT__i0__DOT__data_list[7U] = 0xfeU;
    vlSelfRef.top__DOT__ins_seg3__DOT__i0__DOT__i0__DOT__data_list[8U] = 0xe0U;
    vlSelfRef.top__DOT__ins_seg3__DOT__i0__DOT__i0__DOT__data_list[9U] = 0xbeU;
    vlSelfRef.top__DOT__ins_seg3__DOT__i0__DOT__i0__DOT__data_list[10U] = 0xb6U;
    vlSelfRef.top__DOT__ins_seg3__DOT__i0__DOT__i0__DOT__data_list[11U] = 0x66U;
    vlSelfRef.top__DOT__ins_seg3__DOT__i0__DOT__i0__DOT__data_list[12U] = 0xf2U;
    vlSelfRef.top__DOT__ins_seg3__DOT__i0__DOT__i0__DOT__data_list[13U] = 0xdaU;
    vlSelfRef.top__DOT__ins_seg3__DOT__i0__DOT__i0__DOT__data_list[14U] = 0x60U;
    vlSelfRef.top__DOT__ins_seg3__DOT__i0__DOT__i0__DOT__data_list[15U] = 0xfcU;
    vlSelfRef.top__DOT__ins_seg3__DOT__i0__DOT__i0__DOT__key_list[0U] = 0x0fU;
    vlSelfRef.top__DOT__ins_seg3__DOT__i0__DOT__i0__DOT__key_list[1U] = 0x0eU;
    vlSelfRef.top__DOT__ins_seg3__DOT__i0__DOT__i0__DOT__key_list[2U] = 0x0dU;
    vlSelfRef.top__DOT__ins_seg3__DOT__i0__DOT__i0__DOT__key_list[3U] = 0x0cU;
    vlSelfRef.top__DOT__ins_seg3__DOT__i0__DOT__i0__DOT__key_list[4U] = 0x0bU;
    vlSelfRef.top__DOT__ins_seg3__DOT__i0__DOT__i0__DOT__key_list[5U] = 0x0aU;
    vlSelfRef.top__DOT__ins_seg3__DOT__i0__DOT__i0__DOT__key_list[6U] = 9U;
    vlSelfRef.top__DOT__ins_seg3__DOT__i0__DOT__i0__DOT__key_list[7U] = 8U;
    vlSelfRef.top__DOT__ins_seg3__DOT__i0__DOT__i0__DOT__key_list[8U] = 7U;
    vlSelfRef.top__DOT__ins_seg3__DOT__i0__DOT__i0__DOT__key_list[9U] = 6U;
    vlSelfRef.top__DOT__ins_seg3__DOT__i0__DOT__i0__DOT__key_list[10U] = 5U;
    vlSelfRef.top__DOT__ins_seg3__DOT__i0__DOT__i0__DOT__key_list[11U] = 4U;
    vlSelfRef.top__DOT__ins_seg3__DOT__i0__DOT__i0__DOT__key_list[12U] = 3U;
    vlSelfRef.top__DOT__ins_seg3__DOT__i0__DOT__i0__DOT__key_list[13U] = 2U;
    vlSelfRef.top__DOT__ins_seg3__DOT__i0__DOT__i0__DOT__key_list[14U] = 1U;
    vlSelfRef.top__DOT__ins_seg3__DOT__i0__DOT__i0__DOT__key_list[15U] = 0U;
    vlSelfRef.top__DOT__ins_seg4__DOT__i0__DOT__i0__DOT__pair_list[0U] = 0x0f8eU;
    vlSelfRef.top__DOT__ins_seg4__DOT__i0__DOT__i0__DOT__pair_list[1U] = 0x0edeU;
    vlSelfRef.top__DOT__ins_seg4__DOT__i0__DOT__i0__DOT__pair_list[2U] = 0x0d7aU;
    vlSelfRef.top__DOT__ins_seg4__DOT__i0__DOT__i0__DOT__pair_list[3U] = 0x0c1aU;
    vlSelfRef.top__DOT__ins_seg4__DOT__i0__DOT__i0__DOT__pair_list[4U] = 0x0b3eU;
    vlSelfRef.top__DOT__ins_seg4__DOT__i0__DOT__i0__DOT__pair_list[5U] = 0x0aeeU;
    vlSelfRef.top__DOT__ins_seg4__DOT__i0__DOT__i0__DOT__pair_list[6U] = 0x09f6U;
    vlSelfRef.top__DOT__ins_seg4__DOT__i0__DOT__i0__DOT__pair_list[7U] = 0x08feU;
    vlSelfRef.top__DOT__ins_seg4__DOT__i0__DOT__i0__DOT__pair_list[8U] = 0x07e0U;
    vlSelfRef.top__DOT__ins_seg4__DOT__i0__DOT__i0__DOT__pair_list[9U] = 0x06beU;
    vlSelfRef.top__DOT__ins_seg4__DOT__i0__DOT__i0__DOT__pair_list[10U] = 0x05b6U;
    vlSelfRef.top__DOT__ins_seg4__DOT__i0__DOT__i0__DOT__pair_list[11U] = 0x0466U;
    vlSelfRef.top__DOT__ins_seg4__DOT__i0__DOT__i0__DOT__pair_list[12U] = 0x03f2U;
    vlSelfRef.top__DOT__ins_seg4__DOT__i0__DOT__i0__DOT__pair_list[13U] = 0x02daU;
    vlSelfRef.top__DOT__ins_seg4__DOT__i0__DOT__i0__DOT__pair_list[14U] = 0x0160U;
    vlSelfRef.top__DOT__ins_seg4__DOT__i0__DOT__i0__DOT__pair_list[15U] = 0x00fcU;
    vlSelfRef.top__DOT__ins_seg4__DOT__i0__DOT__i0__DOT__data_list[0U] = 0x8eU;
    vlSelfRef.top__DOT__ins_seg4__DOT__i0__DOT__i0__DOT__data_list[1U] = 0xdeU;
    vlSelfRef.top__DOT__ins_seg4__DOT__i0__DOT__i0__DOT__data_list[2U] = 0x7aU;
    vlSelfRef.top__DOT__ins_seg4__DOT__i0__DOT__i0__DOT__data_list[3U] = 0x1aU;
    vlSelfRef.top__DOT__ins_seg4__DOT__i0__DOT__i0__DOT__data_list[4U] = 0x3eU;
    vlSelfRef.top__DOT__ins_seg4__DOT__i0__DOT__i0__DOT__data_list[5U] = 0xeeU;
    vlSelfRef.top__DOT__ins_seg4__DOT__i0__DOT__i0__DOT__data_list[6U] = 0xf6U;
    vlSelfRef.top__DOT__ins_seg4__DOT__i0__DOT__i0__DOT__data_list[7U] = 0xfeU;
    vlSelfRef.top__DOT__ins_seg4__DOT__i0__DOT__i0__DOT__data_list[8U] = 0xe0U;
    vlSelfRef.top__DOT__ins_seg4__DOT__i0__DOT__i0__DOT__data_list[9U] = 0xbeU;
    vlSelfRef.top__DOT__ins_seg4__DOT__i0__DOT__i0__DOT__data_list[10U] = 0xb6U;
    vlSelfRef.top__DOT__ins_seg4__DOT__i0__DOT__i0__DOT__data_list[11U] = 0x66U;
    vlSelfRef.top__DOT__ins_seg4__DOT__i0__DOT__i0__DOT__data_list[12U] = 0xf2U;
    vlSelfRef.top__DOT__ins_seg4__DOT__i0__DOT__i0__DOT__data_list[13U] = 0xdaU;
    vlSelfRef.top__DOT__ins_seg4__DOT__i0__DOT__i0__DOT__data_list[14U] = 0x60U;
    vlSelfRef.top__DOT__ins_seg4__DOT__i0__DOT__i0__DOT__data_list[15U] = 0xfcU;
    vlSelfRef.top__DOT__ins_seg4__DOT__i0__DOT__i0__DOT__key_list[0U] = 0x0fU;
    vlSelfRef.top__DOT__ins_seg4__DOT__i0__DOT__i0__DOT__key_list[1U] = 0x0eU;
    vlSelfRef.top__DOT__ins_seg4__DOT__i0__DOT__i0__DOT__key_list[2U] = 0x0dU;
    vlSelfRef.top__DOT__ins_seg4__DOT__i0__DOT__i0__DOT__key_list[3U] = 0x0cU;
    vlSelfRef.top__DOT__ins_seg4__DOT__i0__DOT__i0__DOT__key_list[4U] = 0x0bU;
    vlSelfRef.top__DOT__ins_seg4__DOT__i0__DOT__i0__DOT__key_list[5U] = 0x0aU;
    vlSelfRef.top__DOT__ins_seg4__DOT__i0__DOT__i0__DOT__key_list[6U] = 9U;
    vlSelfRef.top__DOT__ins_seg4__DOT__i0__DOT__i0__DOT__key_list[7U] = 8U;
    vlSelfRef.top__DOT__ins_seg4__DOT__i0__DOT__i0__DOT__key_list[8U] = 7U;
    vlSelfRef.top__DOT__ins_seg4__DOT__i0__DOT__i0__DOT__key_list[9U] = 6U;
    vlSelfRef.top__DOT__ins_seg4__DOT__i0__DOT__i0__DOT__key_list[10U] = 5U;
    vlSelfRef.top__DOT__ins_seg4__DOT__i0__DOT__i0__DOT__key_list[11U] = 4U;
    vlSelfRef.top__DOT__ins_seg4__DOT__i0__DOT__i0__DOT__key_list[12U] = 3U;
    vlSelfRef.top__DOT__ins_seg4__DOT__i0__DOT__i0__DOT__key_list[13U] = 2U;
    vlSelfRef.top__DOT__ins_seg4__DOT__i0__DOT__i0__DOT__key_list[14U] = 1U;
    vlSelfRef.top__DOT__ins_seg4__DOT__i0__DOT__i0__DOT__key_list[15U] = 0U;
    vlSelfRef.top__DOT__ins_seg5__DOT__i0__DOT__i0__DOT__pair_list[0U] = 0x0f8eU;
    vlSelfRef.top__DOT__ins_seg5__DOT__i0__DOT__i0__DOT__pair_list[1U] = 0x0edeU;
    vlSelfRef.top__DOT__ins_seg5__DOT__i0__DOT__i0__DOT__pair_list[2U] = 0x0d7aU;
    vlSelfRef.top__DOT__ins_seg5__DOT__i0__DOT__i0__DOT__pair_list[3U] = 0x0c1aU;
    vlSelfRef.top__DOT__ins_seg5__DOT__i0__DOT__i0__DOT__pair_list[4U] = 0x0b3eU;
    vlSelfRef.top__DOT__ins_seg5__DOT__i0__DOT__i0__DOT__pair_list[5U] = 0x0aeeU;
    vlSelfRef.top__DOT__ins_seg5__DOT__i0__DOT__i0__DOT__pair_list[6U] = 0x09f6U;
    vlSelfRef.top__DOT__ins_seg5__DOT__i0__DOT__i0__DOT__pair_list[7U] = 0x08feU;
    vlSelfRef.top__DOT__ins_seg5__DOT__i0__DOT__i0__DOT__pair_list[8U] = 0x07e0U;
    vlSelfRef.top__DOT__ins_seg5__DOT__i0__DOT__i0__DOT__pair_list[9U] = 0x06beU;
    vlSelfRef.top__DOT__ins_seg5__DOT__i0__DOT__i0__DOT__pair_list[10U] = 0x05b6U;
    vlSelfRef.top__DOT__ins_seg5__DOT__i0__DOT__i0__DOT__pair_list[11U] = 0x0466U;
    vlSelfRef.top__DOT__ins_seg5__DOT__i0__DOT__i0__DOT__pair_list[12U] = 0x03f2U;
    vlSelfRef.top__DOT__ins_seg5__DOT__i0__DOT__i0__DOT__pair_list[13U] = 0x02daU;
    vlSelfRef.top__DOT__ins_seg5__DOT__i0__DOT__i0__DOT__pair_list[14U] = 0x0160U;
    vlSelfRef.top__DOT__ins_seg5__DOT__i0__DOT__i0__DOT__pair_list[15U] = 0x00fcU;
    vlSelfRef.top__DOT__ins_seg5__DOT__i0__DOT__i0__DOT__data_list[0U] = 0x8eU;
    vlSelfRef.top__DOT__ins_seg5__DOT__i0__DOT__i0__DOT__data_list[1U] = 0xdeU;
    vlSelfRef.top__DOT__ins_seg5__DOT__i0__DOT__i0__DOT__data_list[2U] = 0x7aU;
    vlSelfRef.top__DOT__ins_seg5__DOT__i0__DOT__i0__DOT__data_list[3U] = 0x1aU;
    vlSelfRef.top__DOT__ins_seg5__DOT__i0__DOT__i0__DOT__data_list[4U] = 0x3eU;
    vlSelfRef.top__DOT__ins_seg5__DOT__i0__DOT__i0__DOT__data_list[5U] = 0xeeU;
    vlSelfRef.top__DOT__ins_seg5__DOT__i0__DOT__i0__DOT__data_list[6U] = 0xf6U;
    vlSelfRef.top__DOT__ins_seg5__DOT__i0__DOT__i0__DOT__data_list[7U] = 0xfeU;
    vlSelfRef.top__DOT__ins_seg5__DOT__i0__DOT__i0__DOT__data_list[8U] = 0xe0U;
    vlSelfRef.top__DOT__ins_seg5__DOT__i0__DOT__i0__DOT__data_list[9U] = 0xbeU;
    vlSelfRef.top__DOT__ins_seg5__DOT__i0__DOT__i0__DOT__data_list[10U] = 0xb6U;
    vlSelfRef.top__DOT__ins_seg5__DOT__i0__DOT__i0__DOT__data_list[11U] = 0x66U;
    vlSelfRef.top__DOT__ins_seg5__DOT__i0__DOT__i0__DOT__data_list[12U] = 0xf2U;
    vlSelfRef.top__DOT__ins_seg5__DOT__i0__DOT__i0__DOT__data_list[13U] = 0xdaU;
    vlSelfRef.top__DOT__ins_seg5__DOT__i0__DOT__i0__DOT__data_list[14U] = 0x60U;
    vlSelfRef.top__DOT__ins_seg5__DOT__i0__DOT__i0__DOT__data_list[15U] = 0xfcU;
    vlSelfRef.top__DOT__ins_seg5__DOT__i0__DOT__i0__DOT__key_list[0U] = 0x0fU;
    vlSelfRef.top__DOT__ins_seg5__DOT__i0__DOT__i0__DOT__key_list[1U] = 0x0eU;
    vlSelfRef.top__DOT__ins_seg5__DOT__i0__DOT__i0__DOT__key_list[2U] = 0x0dU;
    vlSelfRef.top__DOT__ins_seg5__DOT__i0__DOT__i0__DOT__key_list[3U] = 0x0cU;
    vlSelfRef.top__DOT__ins_seg5__DOT__i0__DOT__i0__DOT__key_list[4U] = 0x0bU;
    vlSelfRef.top__DOT__ins_seg5__DOT__i0__DOT__i0__DOT__key_list[5U] = 0x0aU;
    vlSelfRef.top__DOT__ins_seg5__DOT__i0__DOT__i0__DOT__key_list[6U] = 9U;
    vlSelfRef.top__DOT__ins_seg5__DOT__i0__DOT__i0__DOT__key_list[7U] = 8U;
    vlSelfRef.top__DOT__ins_seg5__DOT__i0__DOT__i0__DOT__key_list[8U] = 7U;
    vlSelfRef.top__DOT__ins_seg5__DOT__i0__DOT__i0__DOT__key_list[9U] = 6U;
    vlSelfRef.top__DOT__ins_seg5__DOT__i0__DOT__i0__DOT__key_list[10U] = 5U;
    vlSelfRef.top__DOT__ins_seg5__DOT__i0__DOT__i0__DOT__key_list[11U] = 4U;
    vlSelfRef.top__DOT__ins_seg5__DOT__i0__DOT__i0__DOT__key_list[12U] = 3U;
    vlSelfRef.top__DOT__ins_seg5__DOT__i0__DOT__i0__DOT__key_list[13U] = 2U;
    vlSelfRef.top__DOT__ins_seg5__DOT__i0__DOT__i0__DOT__key_list[14U] = 1U;
    vlSelfRef.top__DOT__ins_seg5__DOT__i0__DOT__i0__DOT__key_list[15U] = 0U;
    VL_WRITEF_NX("INFO: Trying load rom_PC\n",0);
    VL_READMEM_N(true, 32, 65536, 0, "resource/test_diag.hex"s
                 ,  &(vlSelfRef.top__DOT__rom_PC), 0
                 , ~0ULL);
    VL_WRITEF_NX("rom[0]=%h rom[1]=%h\n",2, '#',32,vlSelfRef.top__DOT__rom_PC[0U]
                 , '#',32,vlSelfRef.top__DOT__rom_PC[1U]);
    vlSelfRef.seg0 = 0xffU;
    vlSelfRef.seg1 = 0xffU;
    vlSelfRef.seg2 = 0xffU;
    vlSelfRef.seg3 = 0xffU;
    vlSelfRef.seg4 = 0xffU;
    vlSelfRef.seg5 = 0xffU;
    VL_WRITEF_NX("INFO: Trying load rom_MEM\nram[0]=%h ram[1]=%h\n",2
                 , '#',32,vlSelfRef.top__DOT__i_MEM__DOT__R_MEM[0U]
                 , '#',32,vlSelfRef.top__DOT__i_MEM__DOT__R_MEM[1U]);
}

VL_ATTR_COLD void Vtop___024root___eval_final(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_final\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vtop___024root___eval_phase__stl(Vtop___024root* vlSelf);

VL_ATTR_COLD void Vtop___024root___eval_settle(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_settle\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VstlIterCount;
    // Body
    __VstlIterCount = 0U;
    vlSelfRef.__VstlFirstIteration = 1U;
    do {
        if (VL_UNLIKELY(((0x00002710U < __VstlIterCount)))) {
#ifdef VL_DEBUG
            Vtop___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
#endif
            VL_FATAL_MT("/home/devi/ysyx/ysyx-workbench/npc/vsrc/top_miniRV.v", 1, "", "DIDNOTCONVERGE: Settle region did not converge after '--converge-limit' of 10000 tries");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        vlSelfRef.__VstlPhaseResult = Vtop___024root___eval_phase__stl(vlSelf);
        vlSelfRef.__VstlFirstIteration = 0U;
    } while (vlSelfRef.__VstlPhaseResult);
}

VL_ATTR_COLD bool Vtop___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(Vtop___024root___trigger_anySet__stl(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD bool Vtop___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___trigger_anySet__stl\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        if (in[n]) {
            return (1U);
        }
        n = ((IData)(1U) + n);
    } while ((1U > n));
    return (0U);
}

VL_ATTR_COLD void Vtop___024root___stl_sequent__TOP__0(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___stl_sequent__TOP__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_5;
    __VdfgRegularize_h6e95ff9d_0_5 = 0;
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_6;
    __VdfgRegularize_h6e95ff9d_0_6 = 0;
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_7;
    __VdfgRegularize_h6e95ff9d_0_7 = 0;
    // Body
    vlSelfRef.top__DOT__R_PC__DOT__rst = ((IData)(vlSelfRef.rst) 
                                          | ((IData)(vlSelfRef.sw) 
                                             >> 0x0000000fU));
    vlSelfRef.uart_tx = ((0x00c8U < (0x0000ffffU & 
                                     (vlSelfRef.top__DOT__PC 
                                      >> 2U))) | (0U 
                                                  == vlSelfRef.top__DOT__rom_PC
                                                  [
                                                  (0x0000ffffU 
                                                   & (vlSelfRef.top__DOT__PC 
                                                      >> 2U))]));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_8 = (vlSelfRef.top__DOT__rom_PC
                                                [(0x0000ffffU 
                                                  & (vlSelfRef.top__DOT__PC 
                                                     >> 2U))] 
                                                >> 0x00000014U);
    vlSelfRef.top__DOT__btn_p[0U] = vlSelfRef.top__DOT____Vcellout__r_btn0____pinNumber4;
    vlSelfRef.top__DOT__btn_p[1U] = vlSelfRef.top__DOT____Vcellout__r_btn1____pinNumber4;
    vlSelfRef.top__DOT__btn_p[2U] = vlSelfRef.top__DOT____Vcellout__r_btn2____pinNumber4;
    vlSelfRef.top__DOT__btn_p[3U] = vlSelfRef.top__DOT____Vcellout__r_btn3____pinNumber4;
    vlSelfRef.top__DOT__btn_p[4U] = vlSelfRef.top__DOT____Vcellout__r_btn4____pinNumber4;
    vlSelfRef.top__DOT__ins_seg6__DOT__i0__DOT__i0__DOT__lut_out 
        = ((0x8eU & (- (IData)((0x0fU == (0x0000000fU 
                                          & VL_MODDIV_III(32, 
                                                          (0x0000ffffU 
                                                           & (vlSelfRef.top__DOT__PC 
                                                              >> 2U)), (IData)(0x0000000aU))))))) 
           | ((0xdeU & (- (IData)((0x0eU == (0x0000000fU 
                                             & VL_MODDIV_III(32, 
                                                             (0x0000ffffU 
                                                              & (vlSelfRef.top__DOT__PC 
                                                                 >> 2U)), (IData)(0x0000000aU))))))) 
              | ((0x7aU & (- (IData)((0x0dU == (0x0000000fU 
                                                & VL_MODDIV_III(32, 
                                                                (0x0000ffffU 
                                                                 & (vlSelfRef.top__DOT__PC 
                                                                    >> 2U)), (IData)(0x0000000aU))))))) 
                 | ((0x1aU & (- (IData)((0x0cU == (0x0000000fU 
                                                   & VL_MODDIV_III(32, 
                                                                   (0x0000ffffU 
                                                                    & (vlSelfRef.top__DOT__PC 
                                                                       >> 2U)), (IData)(0x0000000aU))))))) 
                    | ((0x3eU & (- (IData)((0x0bU == 
                                            (0x0000000fU 
                                             & VL_MODDIV_III(32, 
                                                             (0x0000ffffU 
                                                              & (vlSelfRef.top__DOT__PC 
                                                                 >> 2U)), (IData)(0x0000000aU))))))) 
                       | ((0xeeU & (- (IData)((0x0aU 
                                               == (0x0000000fU 
                                                   & VL_MODDIV_III(32, 
                                                                   (0x0000ffffU 
                                                                    & (vlSelfRef.top__DOT__PC 
                                                                       >> 2U)), (IData)(0x0000000aU))))))) 
                          | ((0xf6U & (- (IData)((9U 
                                                  == 
                                                  (0x0000000fU 
                                                   & VL_MODDIV_III(32, 
                                                                   (0x0000ffffU 
                                                                    & (vlSelfRef.top__DOT__PC 
                                                                       >> 2U)), (IData)(0x0000000aU))))))) 
                             | ((0xfeU & (- (IData)(
                                                    (8U 
                                                     == 
                                                     (0x0000000fU 
                                                      & VL_MODDIV_III(32, 
                                                                      (0x0000ffffU 
                                                                       & (vlSelfRef.top__DOT__PC 
                                                                          >> 2U)), (IData)(0x0000000aU))))))) 
                                | ((0xe0U & (- (IData)(
                                                       (7U 
                                                        == 
                                                        (0x0000000fU 
                                                         & VL_MODDIV_III(32, 
                                                                         (0x0000ffffU 
                                                                          & (vlSelfRef.top__DOT__PC 
                                                                             >> 2U)), (IData)(0x0000000aU))))))) 
                                   | ((0xbeU & (- (IData)(
                                                          (6U 
                                                           == 
                                                           (0x0000000fU 
                                                            & VL_MODDIV_III(32, 
                                                                            (0x0000ffffU 
                                                                             & (vlSelfRef.top__DOT__PC 
                                                                                >> 2U)), (IData)(0x0000000aU))))))) 
                                      | ((0xb6U & (- (IData)(
                                                             (5U 
                                                              == 
                                                              (0x0000000fU 
                                                               & VL_MODDIV_III(32, 
                                                                               (0x0000ffffU 
                                                                                & (vlSelfRef.top__DOT__PC 
                                                                                >> 2U)), (IData)(0x0000000aU))))))) 
                                         | ((0x66U 
                                             & (- (IData)(
                                                          (4U 
                                                           == 
                                                           (0x0000000fU 
                                                            & VL_MODDIV_III(32, 
                                                                            (0x0000ffffU 
                                                                             & (vlSelfRef.top__DOT__PC 
                                                                                >> 2U)), (IData)(0x0000000aU))))))) 
                                            | ((0xf2U 
                                                & (- (IData)(
                                                             (3U 
                                                              == 
                                                              (0x0000000fU 
                                                               & VL_MODDIV_III(32, 
                                                                               (0x0000ffffU 
                                                                                & (vlSelfRef.top__DOT__PC 
                                                                                >> 2U)), (IData)(0x0000000aU))))))) 
                                               | ((0xdaU 
                                                   & (- (IData)(
                                                                (2U 
                                                                 == 
                                                                 (0x0000000fU 
                                                                  & VL_MODDIV_III(32, 
                                                                                (0x0000ffffU 
                                                                                & (vlSelfRef.top__DOT__PC 
                                                                                >> 2U)), (IData)(0x0000000aU))))))) 
                                                  | ((0xfcU 
                                                      & (- (IData)(
                                                                   (0U 
                                                                    == 
                                                                    (0x0000000fU 
                                                                     & VL_MODDIV_III(32, 
                                                                                (0x0000ffffU 
                                                                                & (vlSelfRef.top__DOT__PC 
                                                                                >> 2U)), (IData)(0x0000000aU))))))) 
                                                     | (0x60U 
                                                        & (- (IData)(
                                                                     (1U 
                                                                      == 
                                                                      (0x0000000fU 
                                                                       & VL_MODDIV_III(32, 
                                                                                (0x0000ffffU 
                                                                                & (vlSelfRef.top__DOT__PC 
                                                                                >> 2U)), (IData)(0x0000000aU))))))))))))))))))))));
    vlSelfRef.top__DOT__ins_seg6__DOT__i0__DOT__i0__DOT__hit 
        = ((0x0fU == (0x0000000fU & VL_MODDIV_III(32, 
                                                  (0x0000ffffU 
                                                   & (vlSelfRef.top__DOT__PC 
                                                      >> 2U)), (IData)(0x0000000aU)))) 
           | ((0x0eU == (0x0000000fU & VL_MODDIV_III(32, 
                                                     (0x0000ffffU 
                                                      & (vlSelfRef.top__DOT__PC 
                                                         >> 2U)), (IData)(0x0000000aU)))) 
              | ((0x0dU == (0x0000000fU & VL_MODDIV_III(32, 
                                                        (0x0000ffffU 
                                                         & (vlSelfRef.top__DOT__PC 
                                                            >> 2U)), (IData)(0x0000000aU)))) 
                 | ((0x0cU == (0x0000000fU & VL_MODDIV_III(32, 
                                                           (0x0000ffffU 
                                                            & (vlSelfRef.top__DOT__PC 
                                                               >> 2U)), (IData)(0x0000000aU)))) 
                    | ((0x0bU == (0x0000000fU & VL_MODDIV_III(32, 
                                                              (0x0000ffffU 
                                                               & (vlSelfRef.top__DOT__PC 
                                                                  >> 2U)), (IData)(0x0000000aU)))) 
                       | ((0x0aU == (0x0000000fU & 
                                     VL_MODDIV_III(32, 
                                                   (0x0000ffffU 
                                                    & (vlSelfRef.top__DOT__PC 
                                                       >> 2U)), (IData)(0x0000000aU)))) 
                          | ((9U == (0x0000000fU & 
                                     VL_MODDIV_III(32, 
                                                   (0x0000ffffU 
                                                    & (vlSelfRef.top__DOT__PC 
                                                       >> 2U)), (IData)(0x0000000aU)))) 
                             | ((8U == (0x0000000fU 
                                        & VL_MODDIV_III(32, 
                                                        (0x0000ffffU 
                                                         & (vlSelfRef.top__DOT__PC 
                                                            >> 2U)), (IData)(0x0000000aU)))) 
                                | ((7U == (0x0000000fU 
                                           & VL_MODDIV_III(32, 
                                                           (0x0000ffffU 
                                                            & (vlSelfRef.top__DOT__PC 
                                                               >> 2U)), (IData)(0x0000000aU)))) 
                                   | ((6U == (0x0000000fU 
                                              & VL_MODDIV_III(32, 
                                                              (0x0000ffffU 
                                                               & (vlSelfRef.top__DOT__PC 
                                                                  >> 2U)), (IData)(0x0000000aU)))) 
                                      | ((5U == (0x0000000fU 
                                                 & VL_MODDIV_III(32, 
                                                                 (0x0000ffffU 
                                                                  & (vlSelfRef.top__DOT__PC 
                                                                     >> 2U)), (IData)(0x0000000aU)))) 
                                         | ((4U == 
                                             (0x0000000fU 
                                              & VL_MODDIV_III(32, 
                                                              (0x0000ffffU 
                                                               & (vlSelfRef.top__DOT__PC 
                                                                  >> 2U)), (IData)(0x0000000aU)))) 
                                            | ((3U 
                                                == 
                                                (0x0000000fU 
                                                 & VL_MODDIV_III(32, 
                                                                 (0x0000ffffU 
                                                                  & (vlSelfRef.top__DOT__PC 
                                                                     >> 2U)), (IData)(0x0000000aU)))) 
                                               | ((2U 
                                                   == 
                                                   (0x0000000fU 
                                                    & VL_MODDIV_III(32, 
                                                                    (0x0000ffffU 
                                                                     & (vlSelfRef.top__DOT__PC 
                                                                        >> 2U)), (IData)(0x0000000aU)))) 
                                                  | ((0U 
                                                      == 
                                                      (0x0000000fU 
                                                       & VL_MODDIV_III(32, 
                                                                       (0x0000ffffU 
                                                                        & (vlSelfRef.top__DOT__PC 
                                                                           >> 2U)), (IData)(0x0000000aU)))) 
                                                     | (1U 
                                                        == 
                                                        (0x0000000fU 
                                                         & VL_MODDIV_III(32, 
                                                                         (0x0000ffffU 
                                                                          & (vlSelfRef.top__DOT__PC 
                                                                             >> 2U)), (IData)(0x0000000aU)))))))))))))))))));
    vlSelfRef.top__DOT__ins_seg7__DOT__i0__DOT__i0__DOT__lut_out 
        = ((0x8eU & (- (IData)((0x0fU == (0x0000000fU 
                                          & VL_MODDIV_III(32, 
                                                          VL_DIV_III(32, 
                                                                     (0x0000ffffU 
                                                                      & (vlSelfRef.top__DOT__PC 
                                                                         >> 2U)), (IData)(0x0000000aU)), (IData)(0x0000000aU))))))) 
           | ((0xdeU & (- (IData)((0x0eU == (0x0000000fU 
                                             & VL_MODDIV_III(32, 
                                                             VL_DIV_III(32, 
                                                                        (0x0000ffffU 
                                                                         & (vlSelfRef.top__DOT__PC 
                                                                            >> 2U)), (IData)(0x0000000aU)), (IData)(0x0000000aU))))))) 
              | ((0x7aU & (- (IData)((0x0dU == (0x0000000fU 
                                                & VL_MODDIV_III(32, 
                                                                VL_DIV_III(32, 
                                                                           (0x0000ffffU 
                                                                            & (vlSelfRef.top__DOT__PC 
                                                                               >> 2U)), (IData)(0x0000000aU)), (IData)(0x0000000aU))))))) 
                 | ((0x1aU & (- (IData)((0x0cU == (0x0000000fU 
                                                   & VL_MODDIV_III(32, 
                                                                   VL_DIV_III(32, 
                                                                              (0x0000ffffU 
                                                                               & (vlSelfRef.top__DOT__PC 
                                                                                >> 2U)), (IData)(0x0000000aU)), (IData)(0x0000000aU))))))) 
                    | ((0x3eU & (- (IData)((0x0bU == 
                                            (0x0000000fU 
                                             & VL_MODDIV_III(32, 
                                                             VL_DIV_III(32, 
                                                                        (0x0000ffffU 
                                                                         & (vlSelfRef.top__DOT__PC 
                                                                            >> 2U)), (IData)(0x0000000aU)), (IData)(0x0000000aU))))))) 
                       | ((0xeeU & (- (IData)((0x0aU 
                                               == (0x0000000fU 
                                                   & VL_MODDIV_III(32, 
                                                                   VL_DIV_III(32, 
                                                                              (0x0000ffffU 
                                                                               & (vlSelfRef.top__DOT__PC 
                                                                                >> 2U)), (IData)(0x0000000aU)), (IData)(0x0000000aU))))))) 
                          | ((0xf6U & (- (IData)((9U 
                                                  == 
                                                  (0x0000000fU 
                                                   & VL_MODDIV_III(32, 
                                                                   VL_DIV_III(32, 
                                                                              (0x0000ffffU 
                                                                               & (vlSelfRef.top__DOT__PC 
                                                                                >> 2U)), (IData)(0x0000000aU)), (IData)(0x0000000aU))))))) 
                             | ((0xfeU & (- (IData)(
                                                    (8U 
                                                     == 
                                                     (0x0000000fU 
                                                      & VL_MODDIV_III(32, 
                                                                      VL_DIV_III(32, 
                                                                                (0x0000ffffU 
                                                                                & (vlSelfRef.top__DOT__PC 
                                                                                >> 2U)), (IData)(0x0000000aU)), (IData)(0x0000000aU))))))) 
                                | ((0xe0U & (- (IData)(
                                                       (7U 
                                                        == 
                                                        (0x0000000fU 
                                                         & VL_MODDIV_III(32, 
                                                                         VL_DIV_III(32, 
                                                                                (0x0000ffffU 
                                                                                & (vlSelfRef.top__DOT__PC 
                                                                                >> 2U)), (IData)(0x0000000aU)), (IData)(0x0000000aU))))))) 
                                   | ((0xbeU & (- (IData)(
                                                          (6U 
                                                           == 
                                                           (0x0000000fU 
                                                            & VL_MODDIV_III(32, 
                                                                            VL_DIV_III(32, 
                                                                                (0x0000ffffU 
                                                                                & (vlSelfRef.top__DOT__PC 
                                                                                >> 2U)), (IData)(0x0000000aU)), (IData)(0x0000000aU))))))) 
                                      | ((0xb6U & (- (IData)(
                                                             (5U 
                                                              == 
                                                              (0x0000000fU 
                                                               & VL_MODDIV_III(32, 
                                                                               VL_DIV_III(32, 
                                                                                (0x0000ffffU 
                                                                                & (vlSelfRef.top__DOT__PC 
                                                                                >> 2U)), (IData)(0x0000000aU)), (IData)(0x0000000aU))))))) 
                                         | ((0x66U 
                                             & (- (IData)(
                                                          (4U 
                                                           == 
                                                           (0x0000000fU 
                                                            & VL_MODDIV_III(32, 
                                                                            VL_DIV_III(32, 
                                                                                (0x0000ffffU 
                                                                                & (vlSelfRef.top__DOT__PC 
                                                                                >> 2U)), (IData)(0x0000000aU)), (IData)(0x0000000aU))))))) 
                                            | ((0xf2U 
                                                & (- (IData)(
                                                             (3U 
                                                              == 
                                                              (0x0000000fU 
                                                               & VL_MODDIV_III(32, 
                                                                               VL_DIV_III(32, 
                                                                                (0x0000ffffU 
                                                                                & (vlSelfRef.top__DOT__PC 
                                                                                >> 2U)), (IData)(0x0000000aU)), (IData)(0x0000000aU))))))) 
                                               | ((0xdaU 
                                                   & (- (IData)(
                                                                (2U 
                                                                 == 
                                                                 (0x0000000fU 
                                                                  & VL_MODDIV_III(32, 
                                                                                VL_DIV_III(32, 
                                                                                (0x0000ffffU 
                                                                                & (vlSelfRef.top__DOT__PC 
                                                                                >> 2U)), (IData)(0x0000000aU)), (IData)(0x0000000aU))))))) 
                                                  | ((0xfcU 
                                                      & (- (IData)(
                                                                   (0U 
                                                                    == 
                                                                    (0x0000000fU 
                                                                     & VL_MODDIV_III(32, 
                                                                                VL_DIV_III(32, 
                                                                                (0x0000ffffU 
                                                                                & (vlSelfRef.top__DOT__PC 
                                                                                >> 2U)), (IData)(0x0000000aU)), (IData)(0x0000000aU))))))) 
                                                     | (0x60U 
                                                        & (- (IData)(
                                                                     (1U 
                                                                      == 
                                                                      (0x0000000fU 
                                                                       & VL_MODDIV_III(32, 
                                                                                VL_DIV_III(32, 
                                                                                (0x0000ffffU 
                                                                                & (vlSelfRef.top__DOT__PC 
                                                                                >> 2U)), (IData)(0x0000000aU)), (IData)(0x0000000aU))))))))))))))))))))));
    vlSelfRef.top__DOT__ins_seg7__DOT__i0__DOT__i0__DOT__hit 
        = ((0x0fU == (0x0000000fU & VL_MODDIV_III(32, 
                                                  VL_DIV_III(32, 
                                                             (0x0000ffffU 
                                                              & (vlSelfRef.top__DOT__PC 
                                                                 >> 2U)), (IData)(0x0000000aU)), (IData)(0x0000000aU)))) 
           | ((0x0eU == (0x0000000fU & VL_MODDIV_III(32, 
                                                     VL_DIV_III(32, 
                                                                (0x0000ffffU 
                                                                 & (vlSelfRef.top__DOT__PC 
                                                                    >> 2U)), (IData)(0x0000000aU)), (IData)(0x0000000aU)))) 
              | ((0x0dU == (0x0000000fU & VL_MODDIV_III(32, 
                                                        VL_DIV_III(32, 
                                                                   (0x0000ffffU 
                                                                    & (vlSelfRef.top__DOT__PC 
                                                                       >> 2U)), (IData)(0x0000000aU)), (IData)(0x0000000aU)))) 
                 | ((0x0cU == (0x0000000fU & VL_MODDIV_III(32, 
                                                           VL_DIV_III(32, 
                                                                      (0x0000ffffU 
                                                                       & (vlSelfRef.top__DOT__PC 
                                                                          >> 2U)), (IData)(0x0000000aU)), (IData)(0x0000000aU)))) 
                    | ((0x0bU == (0x0000000fU & VL_MODDIV_III(32, 
                                                              VL_DIV_III(32, 
                                                                         (0x0000ffffU 
                                                                          & (vlSelfRef.top__DOT__PC 
                                                                             >> 2U)), (IData)(0x0000000aU)), (IData)(0x0000000aU)))) 
                       | ((0x0aU == (0x0000000fU & 
                                     VL_MODDIV_III(32, 
                                                   VL_DIV_III(32, 
                                                              (0x0000ffffU 
                                                               & (vlSelfRef.top__DOT__PC 
                                                                  >> 2U)), (IData)(0x0000000aU)), (IData)(0x0000000aU)))) 
                          | ((9U == (0x0000000fU & 
                                     VL_MODDIV_III(32, 
                                                   VL_DIV_III(32, 
                                                              (0x0000ffffU 
                                                               & (vlSelfRef.top__DOT__PC 
                                                                  >> 2U)), (IData)(0x0000000aU)), (IData)(0x0000000aU)))) 
                             | ((8U == (0x0000000fU 
                                        & VL_MODDIV_III(32, 
                                                        VL_DIV_III(32, 
                                                                   (0x0000ffffU 
                                                                    & (vlSelfRef.top__DOT__PC 
                                                                       >> 2U)), (IData)(0x0000000aU)), (IData)(0x0000000aU)))) 
                                | ((7U == (0x0000000fU 
                                           & VL_MODDIV_III(32, 
                                                           VL_DIV_III(32, 
                                                                      (0x0000ffffU 
                                                                       & (vlSelfRef.top__DOT__PC 
                                                                          >> 2U)), (IData)(0x0000000aU)), (IData)(0x0000000aU)))) 
                                   | ((6U == (0x0000000fU 
                                              & VL_MODDIV_III(32, 
                                                              VL_DIV_III(32, 
                                                                         (0x0000ffffU 
                                                                          & (vlSelfRef.top__DOT__PC 
                                                                             >> 2U)), (IData)(0x0000000aU)), (IData)(0x0000000aU)))) 
                                      | ((5U == (0x0000000fU 
                                                 & VL_MODDIV_III(32, 
                                                                 VL_DIV_III(32, 
                                                                            (0x0000ffffU 
                                                                             & (vlSelfRef.top__DOT__PC 
                                                                                >> 2U)), (IData)(0x0000000aU)), (IData)(0x0000000aU)))) 
                                         | ((4U == 
                                             (0x0000000fU 
                                              & VL_MODDIV_III(32, 
                                                              VL_DIV_III(32, 
                                                                         (0x0000ffffU 
                                                                          & (vlSelfRef.top__DOT__PC 
                                                                             >> 2U)), (IData)(0x0000000aU)), (IData)(0x0000000aU)))) 
                                            | ((3U 
                                                == 
                                                (0x0000000fU 
                                                 & VL_MODDIV_III(32, 
                                                                 VL_DIV_III(32, 
                                                                            (0x0000ffffU 
                                                                             & (vlSelfRef.top__DOT__PC 
                                                                                >> 2U)), (IData)(0x0000000aU)), (IData)(0x0000000aU)))) 
                                               | ((2U 
                                                   == 
                                                   (0x0000000fU 
                                                    & VL_MODDIV_III(32, 
                                                                    VL_DIV_III(32, 
                                                                               (0x0000ffffU 
                                                                                & (vlSelfRef.top__DOT__PC 
                                                                                >> 2U)), (IData)(0x0000000aU)), (IData)(0x0000000aU)))) 
                                                  | ((0U 
                                                      == 
                                                      (0x0000000fU 
                                                       & VL_MODDIV_III(32, 
                                                                       VL_DIV_III(32, 
                                                                                (0x0000ffffU 
                                                                                & (vlSelfRef.top__DOT__PC 
                                                                                >> 2U)), (IData)(0x0000000aU)), (IData)(0x0000000aU)))) 
                                                     | (1U 
                                                        == 
                                                        (0x0000000fU 
                                                         & VL_MODDIV_III(32, 
                                                                         VL_DIV_III(32, 
                                                                                (0x0000ffffU 
                                                                                & (vlSelfRef.top__DOT__PC 
                                                                                >> 2U)), (IData)(0x0000000aU)), (IData)(0x0000000aU)))))))))))))))))));
    vlSelfRef.top__DOT__imm_20b = (vlSelfRef.top__DOT__rom_PC
                                   [(0x0000ffffU & 
                                     (vlSelfRef.top__DOT__PC 
                                      >> 2U))] >> 0x0000000cU);
    vlSelfRef.top__DOT__i_GPR__DOT__raddra = (0x0000001fU 
                                              & (vlSelfRef.top__DOT__rom_PC
                                                 [(0x0000ffffU 
                                                   & (vlSelfRef.top__DOT__PC 
                                                      >> 2U))] 
                                                 >> 0x0000000fU));
    vlSelfRef.top__DOT__i_GPR__DOT__waddr = (0x0000001fU 
                                             & (vlSelfRef.top__DOT__rom_PC
                                                [(0x0000ffffU 
                                                  & (vlSelfRef.top__DOT__PC 
                                                     >> 2U))] 
                                                >> 7U));
    vlSelfRef.top__DOT__i_GPR__DOT__raddrb = (0x0000001fU 
                                              & (vlSelfRef.top__DOT__rom_PC
                                                 [(0x0000ffffU 
                                                   & (vlSelfRef.top__DOT__PC 
                                                      >> 2U))] 
                                                 >> 0x00000014U));
    vlSelfRef.top__DOT__i_GPR__DOT__GPR[0U] = vlSelfRef.top__DOT__i_GPR__DOT____Vcellout__foor_loop_i__BRA__0__KET____DOT__R____pinNumber4;
    vlSelfRef.top__DOT__i_GPR__DOT__GPR[1U] = vlSelfRef.top__DOT__i_GPR__DOT____Vcellout__foor_loop_i__BRA__1__KET____DOT__R____pinNumber4;
    vlSelfRef.top__DOT__i_GPR__DOT__GPR[2U] = vlSelfRef.top__DOT__i_GPR__DOT____Vcellout__foor_loop_i__BRA__2__KET____DOT__R____pinNumber4;
    vlSelfRef.top__DOT__i_GPR__DOT__GPR[3U] = vlSelfRef.top__DOT__i_GPR__DOT____Vcellout__foor_loop_i__BRA__3__KET____DOT__R____pinNumber4;
    vlSelfRef.top__DOT__i_GPR__DOT__GPR[4U] = vlSelfRef.top__DOT__i_GPR__DOT____Vcellout__foor_loop_i__BRA__4__KET____DOT__R____pinNumber4;
    vlSelfRef.top__DOT__i_GPR__DOT__GPR[5U] = vlSelfRef.top__DOT__i_GPR__DOT____Vcellout__foor_loop_i__BRA__5__KET____DOT__R____pinNumber4;
    vlSelfRef.top__DOT__i_GPR__DOT__GPR[6U] = vlSelfRef.top__DOT__i_GPR__DOT____Vcellout__foor_loop_i__BRA__6__KET____DOT__R____pinNumber4;
    vlSelfRef.top__DOT__i_GPR__DOT__GPR[7U] = vlSelfRef.top__DOT__i_GPR__DOT____Vcellout__foor_loop_i__BRA__7__KET____DOT__R____pinNumber4;
    vlSelfRef.top__DOT__i_GPR__DOT__GPR[8U] = vlSelfRef.top__DOT__i_GPR__DOT____Vcellout__foor_loop_i__BRA__8__KET____DOT__R____pinNumber4;
    vlSelfRef.top__DOT__i_GPR__DOT__GPR[9U] = vlSelfRef.top__DOT__i_GPR__DOT____Vcellout__foor_loop_i__BRA__9__KET____DOT__R____pinNumber4;
    vlSelfRef.top__DOT__i_GPR__DOT__GPR[10U] = vlSelfRef.top__DOT__i_GPR__DOT____Vcellout__foor_loop_i__BRA__10__KET____DOT__R____pinNumber4;
    vlSelfRef.top__DOT__i_GPR__DOT__GPR[11U] = vlSelfRef.top__DOT__i_GPR__DOT____Vcellout__foor_loop_i__BRA__11__KET____DOT__R____pinNumber4;
    vlSelfRef.top__DOT__i_GPR__DOT__GPR[12U] = vlSelfRef.top__DOT__i_GPR__DOT____Vcellout__foor_loop_i__BRA__12__KET____DOT__R____pinNumber4;
    vlSelfRef.top__DOT__i_GPR__DOT__GPR[13U] = vlSelfRef.top__DOT__i_GPR__DOT____Vcellout__foor_loop_i__BRA__13__KET____DOT__R____pinNumber4;
    vlSelfRef.top__DOT__i_GPR__DOT__GPR[14U] = vlSelfRef.top__DOT__i_GPR__DOT____Vcellout__foor_loop_i__BRA__14__KET____DOT__R____pinNumber4;
    vlSelfRef.top__DOT__i_GPR__DOT__GPR[15U] = vlSelfRef.top__DOT__i_GPR__DOT____Vcellout__foor_loop_i__BRA__15__KET____DOT__R____pinNumber4;
    vlSelfRef.top__DOT__i_GPR__DOT__GPR[16U] = vlSelfRef.top__DOT__i_GPR__DOT____Vcellout__foor_loop_i__BRA__16__KET____DOT__R____pinNumber4;
    vlSelfRef.top__DOT__i_GPR__DOT__GPR[17U] = vlSelfRef.top__DOT__i_GPR__DOT____Vcellout__foor_loop_i__BRA__17__KET____DOT__R____pinNumber4;
    vlSelfRef.top__DOT__i_GPR__DOT__GPR[18U] = vlSelfRef.top__DOT__i_GPR__DOT____Vcellout__foor_loop_i__BRA__18__KET____DOT__R____pinNumber4;
    vlSelfRef.top__DOT__i_GPR__DOT__GPR[19U] = vlSelfRef.top__DOT__i_GPR__DOT____Vcellout__foor_loop_i__BRA__19__KET____DOT__R____pinNumber4;
    vlSelfRef.top__DOT__i_GPR__DOT__GPR[20U] = vlSelfRef.top__DOT__i_GPR__DOT____Vcellout__foor_loop_i__BRA__20__KET____DOT__R____pinNumber4;
    vlSelfRef.top__DOT__i_GPR__DOT__GPR[21U] = vlSelfRef.top__DOT__i_GPR__DOT____Vcellout__foor_loop_i__BRA__21__KET____DOT__R____pinNumber4;
    vlSelfRef.top__DOT__i_GPR__DOT__GPR[22U] = vlSelfRef.top__DOT__i_GPR__DOT____Vcellout__foor_loop_i__BRA__22__KET____DOT__R____pinNumber4;
    vlSelfRef.top__DOT__i_GPR__DOT__GPR[23U] = vlSelfRef.top__DOT__i_GPR__DOT____Vcellout__foor_loop_i__BRA__23__KET____DOT__R____pinNumber4;
    vlSelfRef.top__DOT__i_GPR__DOT__GPR[24U] = vlSelfRef.top__DOT__i_GPR__DOT____Vcellout__foor_loop_i__BRA__24__KET____DOT__R____pinNumber4;
    vlSelfRef.top__DOT__i_GPR__DOT__GPR[25U] = vlSelfRef.top__DOT__i_GPR__DOT____Vcellout__foor_loop_i__BRA__25__KET____DOT__R____pinNumber4;
    vlSelfRef.top__DOT__i_GPR__DOT__GPR[26U] = vlSelfRef.top__DOT__i_GPR__DOT____Vcellout__foor_loop_i__BRA__26__KET____DOT__R____pinNumber4;
    vlSelfRef.top__DOT__i_GPR__DOT__GPR[27U] = vlSelfRef.top__DOT__i_GPR__DOT____Vcellout__foor_loop_i__BRA__27__KET____DOT__R____pinNumber4;
    vlSelfRef.top__DOT__i_GPR__DOT__GPR[28U] = vlSelfRef.top__DOT__i_GPR__DOT____Vcellout__foor_loop_i__BRA__28__KET____DOT__R____pinNumber4;
    vlSelfRef.top__DOT__i_GPR__DOT__GPR[29U] = vlSelfRef.top__DOT__i_GPR__DOT____Vcellout__foor_loop_i__BRA__29__KET____DOT__R____pinNumber4;
    vlSelfRef.top__DOT__i_GPR__DOT__GPR[30U] = vlSelfRef.top__DOT__i_GPR__DOT____Vcellout__foor_loop_i__BRA__30__KET____DOT__R____pinNumber4;
    vlSelfRef.top__DOT__i_GPR__DOT__GPR[31U] = vlSelfRef.top__DOT__i_GPR__DOT____Vcellout__foor_loop_i__BRA__31__KET____DOT__R____pinNumber4;
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4 = (7U 
                                                & (vlSelfRef.top__DOT__rom_PC
                                                   [
                                                   (0x0000ffffU 
                                                    & (vlSelfRef.top__DOT__PC 
                                                       >> 2U))] 
                                                   >> 0x0000000cU));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0 = (0x0000007fU 
                                                & vlSelfRef.top__DOT__rom_PC
                                                [(0x0000ffffU 
                                                  & (vlSelfRef.top__DOT__PC 
                                                     >> 2U))]);
    vlSelfRef.seg6 = (0x000000ffU & (~ ((- (IData)((IData)(vlSelfRef.top__DOT__ins_seg6__DOT__i0__DOT__i0__DOT__hit))) 
                                        & (IData)(vlSelfRef.top__DOT__ins_seg6__DOT__i0__DOT__i0__DOT__lut_out))));
    vlSelfRef.seg7 = (0x000000ffU & (~ ((- (IData)((IData)(vlSelfRef.top__DOT__ins_seg7__DOT__i0__DOT__i0__DOT__hit))) 
                                        & (IData)(vlSelfRef.top__DOT__ins_seg7__DOT__i0__DOT__i0__DOT__lut_out))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3 = (0x000000ffU 
                                                & vlSelfRef.top__DOT__i_GPR__DOT__GPR
                                                [vlSelfRef.top__DOT__i_GPR__DOT__raddrb]);
    vlSelfRef.top__DOT__op_lw = ((3U == (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0)) 
                                 & (2U == (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4)));
    vlSelfRef.top__DOT__op_lbu = ((3U == (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0)) 
                                  & (4U == (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4)));
    vlSelfRef.top__DOT__op_sw = ((2U == (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4)) 
                                 & (0x23U == (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0)));
    vlSelfRef.top__DOT__op_sb = ((0x23U == (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0)) 
                                 & (0U == (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4)));
    __VdfgRegularize_h6e95ff9d_0_7 = ((IData)(vlSelfRef.top__DOT__op_lw) 
                                      | (IData)(vlSelfRef.top__DOT__op_lbu));
    __VdfgRegularize_h6e95ff9d_0_6 = ((IData)(vlSelfRef.top__DOT__op_lw) 
                                      | (IData)(vlSelfRef.top__DOT__op_sw));
    __VdfgRegularize_h6e95ff9d_0_5 = ((IData)(vlSelfRef.top__DOT__op_lbu) 
                                      | (IData)(vlSelfRef.top__DOT__op_sb));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_15 = ((IData)(vlSelfRef.top__DOT__op_sb) 
                                                 | (IData)(vlSelfRef.top__DOT__op_sw));
    vlSelfRef.top__DOT__i_GPR__DOT__wen = ((0x33U == (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0)) 
                                           | ((0x13U 
                                               == (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0)) 
                                              | ((0x37U 
                                                  == (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0)) 
                                                 | ((0x67U 
                                                     == (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0)) 
                                                    | (IData)(__VdfgRegularize_h6e95ff9d_0_7)))));
    vlSelfRef.top__DOT__imm_ext_32b_s = (((- (IData)(
                                                     (vlSelfRef.top__DOT__rom_PC
                                                      [
                                                      (0x0000ffffU 
                                                       & (vlSelfRef.top__DOT__PC 
                                                          >> 2U))] 
                                                      >> 0x0000001fU))) 
                                          << 0x0000000cU) 
                                         | ((0x00000fe0U 
                                             & (vlSelfRef.top__DOT__rom_PC
                                                [(0x0000ffffU 
                                                  & (vlSelfRef.top__DOT__PC 
                                                     >> 2U))] 
                                                >> 0x00000014U)) 
                                            | ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_15)
                                                ? (IData)(vlSelfRef.top__DOT__i_GPR__DOT__waddr)
                                                : (IData)(vlSelfRef.top__DOT__i_GPR__DOT__raddrb))));
    vlSelfRef.top__DOT__mem_addr = (vlSelfRef.top__DOT__i_GPR__DOT__GPR
                                    [vlSelfRef.top__DOT__i_GPR__DOT__raddra] 
                                    + vlSelfRef.top__DOT__imm_ext_32b_s);
    vlSelfRef.top__DOT__R_PC__DOT__din = (0x0003ffffU 
                                          & ((0x67U 
                                              == (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0))
                                              ? (0x0003fffeU 
                                                 & vlSelfRef.top__DOT__mem_addr)
                                              : ((IData)(4U) 
                                                 + vlSelfRef.top__DOT__PC)));
    vlSelfRef.top__DOT__i_MEM__DOT__din = ((IData)(vlSelfRef.top__DOT__op_sb)
                                            ? ((3U 
                                                == 
                                                (3U 
                                                 & vlSelfRef.top__DOT__mem_addr))
                                                ? (vlSelfRef.top__DOT__i_GPR__DOT__GPR
                                                   [vlSelfRef.top__DOT__i_GPR__DOT__raddrb] 
                                                   << 0x00000018U)
                                                : (
                                                   (2U 
                                                    == 
                                                    (3U 
                                                     & vlSelfRef.top__DOT__mem_addr))
                                                    ? 
                                                   ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3) 
                                                    << 0x00000010U)
                                                    : 
                                                   ((1U 
                                                     == 
                                                     (3U 
                                                      & vlSelfRef.top__DOT__mem_addr))
                                                     ? 
                                                    ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3) 
                                                     << 8U)
                                                     : (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3))))
                                            : vlSelfRef.top__DOT__i_GPR__DOT__GPR
                                           [vlSelfRef.top__DOT__i_GPR__DOT__raddrb]);
    vlSelfRef.top__DOT__i_MEM__DOT__byte_en3 = (((IData)(__VdfgRegularize_h6e95ff9d_0_5) 
                                                 & (3U 
                                                    == 
                                                    (3U 
                                                     & vlSelfRef.top__DOT__mem_addr))) 
                                                | (IData)(__VdfgRegularize_h6e95ff9d_0_6));
    vlSelfRef.top__DOT__i_MEM__DOT__byte_en2 = (((IData)(__VdfgRegularize_h6e95ff9d_0_5) 
                                                 & (2U 
                                                    == 
                                                    (3U 
                                                     & vlSelfRef.top__DOT__mem_addr))) 
                                                | (IData)(__VdfgRegularize_h6e95ff9d_0_6));
    vlSelfRef.top__DOT__i_MEM__DOT__byte_en1 = (((IData)(__VdfgRegularize_h6e95ff9d_0_5) 
                                                 & (1U 
                                                    == 
                                                    (3U 
                                                     & vlSelfRef.top__DOT__mem_addr))) 
                                                | (IData)(__VdfgRegularize_h6e95ff9d_0_6));
    vlSelfRef.top__DOT__i_MEM__DOT__byte_en0 = (((IData)(__VdfgRegularize_h6e95ff9d_0_5) 
                                                 & (0U 
                                                    == 
                                                    (3U 
                                                     & vlSelfRef.top__DOT__mem_addr))) 
                                                | (IData)(__VdfgRegularize_h6e95ff9d_0_6));
    vlSelfRef.top__DOT__i_MEM__DOT__ren = ((~ (0U != 
                                               (vlSelfRef.top__DOT__mem_addr 
                                                >> 0x0000001dU))) 
                                           & (IData)(__VdfgRegularize_h6e95ff9d_0_7));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_11 = (0x000000ffU 
                                                 & (vlSelfRef.top__DOT__i_MEM__DOT__R_MEM
                                                    [
                                                    (0x00ffffffU 
                                                     & (vlSelfRef.top__DOT__mem_addr 
                                                        >> 2U))] 
                                                    & (- (IData)(
                                                                 ((IData)(vlSelfRef.top__DOT__i_MEM__DOT__byte_en0) 
                                                                  & (IData)(vlSelfRef.top__DOT__i_MEM__DOT__ren))))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_12 = (0x000000ffU 
                                                 & ((vlSelfRef.top__DOT__i_MEM__DOT__R_MEM
                                                     [
                                                     (0x00ffffffU 
                                                      & (vlSelfRef.top__DOT__mem_addr 
                                                         >> 2U))] 
                                                     >> 8U) 
                                                    & (- (IData)(
                                                                 ((IData)(vlSelfRef.top__DOT__i_MEM__DOT__byte_en1) 
                                                                  & (IData)(vlSelfRef.top__DOT__i_MEM__DOT__ren))))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_13 = (0x000000ffU 
                                                 & ((vlSelfRef.top__DOT__i_MEM__DOT__R_MEM
                                                     [
                                                     (0x00ffffffU 
                                                      & (vlSelfRef.top__DOT__mem_addr 
                                                         >> 2U))] 
                                                     >> 0x00000010U) 
                                                    & (- (IData)(
                                                                 ((IData)(vlSelfRef.top__DOT__i_MEM__DOT__byte_en2) 
                                                                  & (IData)(vlSelfRef.top__DOT__i_MEM__DOT__ren))))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_14 = (0x000000ffU 
                                                 & ((vlSelfRef.top__DOT__i_MEM__DOT__R_MEM
                                                     [
                                                     (0x00ffffffU 
                                                      & (vlSelfRef.top__DOT__mem_addr 
                                                         >> 2U))] 
                                                     >> 0x00000018U) 
                                                    & (- (IData)(
                                                                 ((IData)(vlSelfRef.top__DOT__i_MEM__DOT__byte_en3) 
                                                                  & (IData)(vlSelfRef.top__DOT__i_MEM__DOT__ren))))));
    vlSelfRef.top__DOT__mem_dout_byte8 = ((3U == (3U 
                                                  & vlSelfRef.top__DOT__mem_addr))
                                           ? (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_14)
                                           : ((2U == 
                                               (3U 
                                                & vlSelfRef.top__DOT__mem_addr))
                                               ? (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_13)
                                               : ((1U 
                                                   == 
                                                   (3U 
                                                    & vlSelfRef.top__DOT__mem_addr))
                                                   ? (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_12)
                                                   : (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_11))));
    vlSelfRef.top__DOT__mem_out_val = ((IData)(vlSelfRef.top__DOT__op_lbu)
                                        ? (IData)(vlSelfRef.top__DOT__mem_dout_byte8)
                                        : ((((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_14) 
                                             << 0x00000018U) 
                                            | ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_13) 
                                               << 0x00000010U)) 
                                           | (((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_12) 
                                               << 8U) 
                                              | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_11))));
    vlSelfRef.top__DOT__i_GPR__DOT__foor_loop_i__BRA__0__KET____DOT__R__DOT__din 
        = ((IData)(__VdfgRegularize_h6e95ff9d_0_7) ? vlSelfRef.top__DOT__mem_out_val
            : ((0x37U == (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0))
                ? (vlSelfRef.top__DOT__imm_20b << 0x0000000cU)
                : ((0x67U == (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0))
                    ? (((- (IData)((1U & (vlSelfRef.top__DOT__mem_addr 
                                          >> 0x00000011U)))) 
                        << 0x00000012U) | (0x0003fffeU 
                                           & vlSelfRef.top__DOT__mem_addr))
                    : (((0x33U == (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0))
                         ? vlSelfRef.top__DOT__i_GPR__DOT__GPR
                        [vlSelfRef.top__DOT__i_GPR__DOT__raddrb]
                         : vlSelfRef.top__DOT__imm_ext_32b_s) 
                       + vlSelfRef.top__DOT__i_GPR__DOT__GPR
                       [vlSelfRef.top__DOT__i_GPR__DOT__raddra]))));
}

VL_ATTR_COLD bool Vtop___024root___eval_phase__stl(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_phase__stl\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VstlExecute;
    // Body
    {
        // Inlined CFunc: _eval_triggers_vec__stl
        vlSelfRef.__VstlTriggered[0U] = ((0xfffffffffffffffeULL 
                                          & vlSelfRef.__VstlTriggered[0U]) 
                                         | (IData)((IData)(vlSelfRef.__VstlFirstIteration)));
    }
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtop___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
    }
#endif
    __VstlExecute = Vtop___024root___trigger_anySet__stl(vlSelfRef.__VstlTriggered);
    if (__VstlExecute) {
        {
            // Inlined CFunc: _eval_stl
            if ((1ULL & vlSelfRef.__VstlTriggered[0U])) {
                Vtop___024root___stl_sequent__TOP__0(vlSelf);
                {
                    // Inlined CFunc: __Vm_traceActivitySetAll
                    vlSelfRef.__Vm_traceActivity[0U] = 1U;
                    vlSelfRef.__Vm_traceActivity[1U] = 1U;
                }
            }
        }
    }
    return (__VstlExecute);
}

bool Vtop___024root___trigger_anySet__ico(const VlUnpacked<QData/*63:0*/, 2> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__ico(const VlUnpacked<QData/*63:0*/, 2> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___dump_triggers__ico\n"); );
    // Body
    if ((1U & (~ (IData)(Vtop___024root___trigger_anySet__ico(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: @( clk)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 1U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 1 is active: @( rst)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 2U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 2 is active: @( btn)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 3U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 3 is active: @( sw)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 4U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 4 is active: @( ps2_clk)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 5U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 5 is active: @( ps2_data)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 6U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 6 is active: @( uart_rx)\n");
    }
    if ((1U & (IData)(triggers[1U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 64 is active: Internal 'ico' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

bool Vtop___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(Vtop___024root___trigger_anySet__act(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: @(posedge clk)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 1U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 1 is active: @(posedge top.R_PC.rst)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtop___024root___ctor_var_reset(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ctor_var_reset\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->clk = 0;
    vlSelf->rst = 0;
    vlSelf->btn = 0;
    vlSelf->sw = 0;
    vlSelf->ps2_clk = 0;
    vlSelf->ps2_data = 0;
    vlSelf->uart_rx = 0;
    vlSelf->uart_tx = 0;
    vlSelf->ledr = 0;
    vlSelf->VGA_CLK = 0;
    vlSelf->VGA_HSYNC = 0;
    vlSelf->VGA_VSYNC = 0;
    vlSelf->VGA_BLANK_N = 0;
    vlSelf->VGA_R = 0;
    vlSelf->VGA_G = 0;
    vlSelf->VGA_B = 0;
    vlSelf->seg0 = 255U;
    ;
    vlSelf->seg1 = 255U;
    ;
    vlSelf->seg2 = 255U;
    ;
    vlSelf->seg3 = 255U;
    ;
    vlSelf->seg4 = 255U;
    ;
    vlSelf->seg5 = 255U;
    ;
    vlSelf->seg6 = 0;
    vlSelf->seg7 = 0;
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        vlSelf->top__DOT__btn_p[__Vi0] = 0;
    }
    vlSelf->top__DOT____Vcellout__r_btn0____pinNumber4 = 0;
    vlSelf->top__DOT____Vcellout__r_btn1____pinNumber4 = 0;
    vlSelf->top__DOT____Vcellout__r_btn2____pinNumber4 = 0;
    vlSelf->top__DOT____Vcellout__r_btn3____pinNumber4 = 0;
    vlSelf->top__DOT____Vcellout__r_btn4____pinNumber4 = 0;
    for (int __Vi0 = 0; __Vi0 < 65536; ++__Vi0) {
        vlSelf->top__DOT__rom_PC[__Vi0] = 0;
    }
    vlSelf->top__DOT__PC = 0;
    vlSelf->top__DOT__mem_addr = 0;
    vlSelf->top__DOT__mem_dout_byte8 = 0;
    vlSelf->top__DOT__mem_out_val = 0;
    vlSelf->top__DOT__op_lw = 0;
    vlSelf->top__DOT__op_lbu = 0;
    vlSelf->top__DOT__op_sw = 0;
    vlSelf->top__DOT__op_sb = 0;
    vlSelf->top__DOT__imm_20b = 0;
    vlSelf->top__DOT__imm_ext_32b_s = 0;
    vlSelf->top__DOT__cnt_clk = 0;
    vlSelf->top__DOT__i_GPR__DOT__raddra = 0;
    vlSelf->top__DOT__i_GPR__DOT__raddrb = 0;
    vlSelf->top__DOT__i_GPR__DOT__waddr = 0;
    vlSelf->top__DOT__i_GPR__DOT__wen = 0;
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->top__DOT__i_GPR__DOT__GPR[__Vi0] = 0;
    }
    vlSelf->top__DOT__i_GPR__DOT____Vcellout__foor_loop_i__BRA__0__KET____DOT__R____pinNumber4 = 0;
    vlSelf->top__DOT__i_GPR__DOT____Vcellout__foor_loop_i__BRA__1__KET____DOT__R____pinNumber4 = 0;
    vlSelf->top__DOT__i_GPR__DOT____Vcellout__foor_loop_i__BRA__2__KET____DOT__R____pinNumber4 = 0;
    vlSelf->top__DOT__i_GPR__DOT____Vcellout__foor_loop_i__BRA__3__KET____DOT__R____pinNumber4 = 0;
    vlSelf->top__DOT__i_GPR__DOT____Vcellout__foor_loop_i__BRA__4__KET____DOT__R____pinNumber4 = 0;
    vlSelf->top__DOT__i_GPR__DOT____Vcellout__foor_loop_i__BRA__5__KET____DOT__R____pinNumber4 = 0;
    vlSelf->top__DOT__i_GPR__DOT____Vcellout__foor_loop_i__BRA__6__KET____DOT__R____pinNumber4 = 0;
    vlSelf->top__DOT__i_GPR__DOT____Vcellout__foor_loop_i__BRA__7__KET____DOT__R____pinNumber4 = 0;
    vlSelf->top__DOT__i_GPR__DOT____Vcellout__foor_loop_i__BRA__8__KET____DOT__R____pinNumber4 = 0;
    vlSelf->top__DOT__i_GPR__DOT____Vcellout__foor_loop_i__BRA__9__KET____DOT__R____pinNumber4 = 0;
    vlSelf->top__DOT__i_GPR__DOT____Vcellout__foor_loop_i__BRA__10__KET____DOT__R____pinNumber4 = 0;
    vlSelf->top__DOT__i_GPR__DOT____Vcellout__foor_loop_i__BRA__11__KET____DOT__R____pinNumber4 = 0;
    vlSelf->top__DOT__i_GPR__DOT____Vcellout__foor_loop_i__BRA__12__KET____DOT__R____pinNumber4 = 0;
    vlSelf->top__DOT__i_GPR__DOT____Vcellout__foor_loop_i__BRA__13__KET____DOT__R____pinNumber4 = 0;
    vlSelf->top__DOT__i_GPR__DOT____Vcellout__foor_loop_i__BRA__14__KET____DOT__R____pinNumber4 = 0;
    vlSelf->top__DOT__i_GPR__DOT____Vcellout__foor_loop_i__BRA__15__KET____DOT__R____pinNumber4 = 0;
    vlSelf->top__DOT__i_GPR__DOT____Vcellout__foor_loop_i__BRA__16__KET____DOT__R____pinNumber4 = 0;
    vlSelf->top__DOT__i_GPR__DOT____Vcellout__foor_loop_i__BRA__17__KET____DOT__R____pinNumber4 = 0;
    vlSelf->top__DOT__i_GPR__DOT____Vcellout__foor_loop_i__BRA__18__KET____DOT__R____pinNumber4 = 0;
    vlSelf->top__DOT__i_GPR__DOT____Vcellout__foor_loop_i__BRA__19__KET____DOT__R____pinNumber4 = 0;
    vlSelf->top__DOT__i_GPR__DOT____Vcellout__foor_loop_i__BRA__20__KET____DOT__R____pinNumber4 = 0;
    vlSelf->top__DOT__i_GPR__DOT____Vcellout__foor_loop_i__BRA__21__KET____DOT__R____pinNumber4 = 0;
    vlSelf->top__DOT__i_GPR__DOT____Vcellout__foor_loop_i__BRA__22__KET____DOT__R____pinNumber4 = 0;
    vlSelf->top__DOT__i_GPR__DOT____Vcellout__foor_loop_i__BRA__23__KET____DOT__R____pinNumber4 = 0;
    vlSelf->top__DOT__i_GPR__DOT____Vcellout__foor_loop_i__BRA__24__KET____DOT__R____pinNumber4 = 0;
    vlSelf->top__DOT__i_GPR__DOT____Vcellout__foor_loop_i__BRA__25__KET____DOT__R____pinNumber4 = 0;
    vlSelf->top__DOT__i_GPR__DOT____Vcellout__foor_loop_i__BRA__26__KET____DOT__R____pinNumber4 = 0;
    vlSelf->top__DOT__i_GPR__DOT____Vcellout__foor_loop_i__BRA__27__KET____DOT__R____pinNumber4 = 0;
    vlSelf->top__DOT__i_GPR__DOT____Vcellout__foor_loop_i__BRA__28__KET____DOT__R____pinNumber4 = 0;
    vlSelf->top__DOT__i_GPR__DOT____Vcellout__foor_loop_i__BRA__29__KET____DOT__R____pinNumber4 = 0;
    vlSelf->top__DOT__i_GPR__DOT____Vcellout__foor_loop_i__BRA__30__KET____DOT__R____pinNumber4 = 0;
    vlSelf->top__DOT__i_GPR__DOT____Vcellout__foor_loop_i__BRA__31__KET____DOT__R____pinNumber4 = 0;
    vlSelf->top__DOT__i_GPR__DOT__foor_loop_i__BRA__0__KET____DOT__R__DOT__din = 0;
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->top__DOT__ins_seg0__DOT__i0__DOT__i0__DOT__pair_list[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->top__DOT__ins_seg0__DOT__i0__DOT__i0__DOT__key_list[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->top__DOT__ins_seg0__DOT__i0__DOT__i0__DOT__data_list[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->top__DOT__ins_seg1__DOT__i0__DOT__i0__DOT__pair_list[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->top__DOT__ins_seg1__DOT__i0__DOT__i0__DOT__key_list[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->top__DOT__ins_seg1__DOT__i0__DOT__i0__DOT__data_list[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->top__DOT__ins_seg2__DOT__i0__DOT__i0__DOT__pair_list[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->top__DOT__ins_seg2__DOT__i0__DOT__i0__DOT__key_list[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->top__DOT__ins_seg2__DOT__i0__DOT__i0__DOT__data_list[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->top__DOT__ins_seg3__DOT__i0__DOT__i0__DOT__pair_list[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->top__DOT__ins_seg3__DOT__i0__DOT__i0__DOT__key_list[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->top__DOT__ins_seg3__DOT__i0__DOT__i0__DOT__data_list[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->top__DOT__ins_seg4__DOT__i0__DOT__i0__DOT__pair_list[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->top__DOT__ins_seg4__DOT__i0__DOT__i0__DOT__key_list[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->top__DOT__ins_seg4__DOT__i0__DOT__i0__DOT__data_list[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->top__DOT__ins_seg5__DOT__i0__DOT__i0__DOT__pair_list[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->top__DOT__ins_seg5__DOT__i0__DOT__i0__DOT__key_list[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->top__DOT__ins_seg5__DOT__i0__DOT__i0__DOT__data_list[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->top__DOT__ins_seg6__DOT__i0__DOT__i0__DOT__pair_list[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->top__DOT__ins_seg6__DOT__i0__DOT__i0__DOT__key_list[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->top__DOT__ins_seg6__DOT__i0__DOT__i0__DOT__data_list[__Vi0] = 0;
    }
    vlSelf->top__DOT__ins_seg6__DOT__i0__DOT__i0__DOT__lut_out = 0;
    vlSelf->top__DOT__ins_seg6__DOT__i0__DOT__i0__DOT__hit = 0;
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->top__DOT__ins_seg7__DOT__i0__DOT__i0__DOT__pair_list[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->top__DOT__ins_seg7__DOT__i0__DOT__i0__DOT__key_list[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->top__DOT__ins_seg7__DOT__i0__DOT__i0__DOT__data_list[__Vi0] = 0;
    }
    vlSelf->top__DOT__ins_seg7__DOT__i0__DOT__i0__DOT__lut_out = 0;
    vlSelf->top__DOT__ins_seg7__DOT__i0__DOT__i0__DOT__hit = 0;
    vlSelf->top__DOT__i_MEM__DOT__ren = 0;
    vlSelf->top__DOT__i_MEM__DOT__byte_en3 = 0;
    vlSelf->top__DOT__i_MEM__DOT__byte_en2 = 0;
    vlSelf->top__DOT__i_MEM__DOT__byte_en1 = 0;
    vlSelf->top__DOT__i_MEM__DOT__byte_en0 = 0;
    vlSelf->top__DOT__i_MEM__DOT__din = 0;
    for (int __Vi0 = 0; __Vi0 < 16777216; ++__Vi0) {
        vlSelf->top__DOT__i_MEM__DOT__R_MEM[__Vi0] = 0;
    }
    vlSelf->top__DOT__R_PC__DOT__rst = 0;
    vlSelf->top__DOT__R_PC__DOT__din = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_0 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_3 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_4 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_8 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_11 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_12 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_13 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_14 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_15 = 0;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VstlTriggered[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__VicoTriggered[__Vi0] = 0;
    }
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__rst__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__btn__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__sw__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__ps2_clk__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__ps2_data__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__uart_rx__0 = 0;
    vlSelf->__VicoDidInit = 0;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VactTriggered[__Vi0] = 0;
    }
    vlSelf->__Vtrigprevexpr___TOP__clk__1 = 0;
    vlSelf->__Vtrigprevexpr___TOP__top__DOT__R_PC__DOT__rst__0 = 0;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VnbaTriggered[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
