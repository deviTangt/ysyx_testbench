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
    vlSelfRef.top__DOT__i_GPR__DOT__sel_b__DOT__i0__DOT__key_list[0U] = 3U;
    vlSelfRef.top__DOT__i_GPR__DOT__sel_b__DOT__i0__DOT__key_list[1U] = 2U;
    vlSelfRef.top__DOT__i_GPR__DOT__sel_b__DOT__i0__DOT__key_list[2U] = 1U;
    vlSelfRef.top__DOT__i_GPR__DOT__sel_b__DOT__i0__DOT__key_list[3U] = 0U;
    vlSelfRef.top__DOT__i_GPR__DOT__sel_a__DOT__i0__DOT__key_list[0U] = 3U;
    vlSelfRef.top__DOT__i_GPR__DOT__sel_a__DOT__i0__DOT__key_list[1U] = 2U;
    vlSelfRef.top__DOT__i_GPR__DOT__sel_a__DOT__i0__DOT__key_list[2U] = 1U;
    vlSelfRef.top__DOT__i_GPR__DOT__sel_a__DOT__i0__DOT__key_list[3U] = 0U;
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
    VL_WRITEF_NX("INFO: Trying load rom_PC.hex\n",0);
    VL_READMEM_N(true, 8, 256, 0, "resource/rom_PC.hex"s
                 ,  &(vlSelfRef.top__DOT__rom_PC), 0
                 , ~0ULL);
    VL_WRITEF_NX("rom[0]=%h rom[1]=%h\n",2, '#',8,vlSelfRef.top__DOT__rom_PC[0U]
                 , '#',8,vlSelfRef.top__DOT__rom_PC[1U]);
    vlSelfRef.seg2 = 0xffU;
    vlSelfRef.seg3 = 0xffU;
    vlSelfRef.seg4 = 0xffU;
    vlSelfRef.seg5 = 0xffU;
    vlSelfRef.seg6 = 0xffU;
    vlSelfRef.seg7 = 0xffU;
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
            VL_FATAL_MT("/home/devi/ysyx/ysyx-workbench/npc/vsrc/top_sCPU.v", 1, "", "DIDNOTCONVERGE: Settle region did not converge after '--converge-limit' of 10000 tries");
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
    // Body
    vlSelfRef.top__DOT__ins_seg6__DOT__i0__DOT__i0__DOT__lut_out 
        = ((0x8eU & (- (IData)((0x0fU == (0x0000000fU 
                                          & VL_MODDIV_III(32, (IData)(vlSelfRef.top__DOT__PC), (IData)(0x0000000aU))))))) 
           | ((0xdeU & (- (IData)((0x0eU == (0x0000000fU 
                                             & VL_MODDIV_III(32, (IData)(vlSelfRef.top__DOT__PC), (IData)(0x0000000aU))))))) 
              | ((0x7aU & (- (IData)((0x0dU == (0x0000000fU 
                                                & VL_MODDIV_III(32, (IData)(vlSelfRef.top__DOT__PC), (IData)(0x0000000aU))))))) 
                 | ((0x1aU & (- (IData)((0x0cU == (0x0000000fU 
                                                   & VL_MODDIV_III(32, (IData)(vlSelfRef.top__DOT__PC), (IData)(0x0000000aU))))))) 
                    | ((0x3eU & (- (IData)((0x0bU == 
                                            (0x0000000fU 
                                             & VL_MODDIV_III(32, (IData)(vlSelfRef.top__DOT__PC), (IData)(0x0000000aU))))))) 
                       | ((0xeeU & (- (IData)((0x0aU 
                                               == (0x0000000fU 
                                                   & VL_MODDIV_III(32, (IData)(vlSelfRef.top__DOT__PC), (IData)(0x0000000aU))))))) 
                          | ((0xf6U & (- (IData)((9U 
                                                  == 
                                                  (0x0000000fU 
                                                   & VL_MODDIV_III(32, (IData)(vlSelfRef.top__DOT__PC), (IData)(0x0000000aU))))))) 
                             | ((0xfeU & (- (IData)(
                                                    (8U 
                                                     == 
                                                     (0x0000000fU 
                                                      & VL_MODDIV_III(32, (IData)(vlSelfRef.top__DOT__PC), (IData)(0x0000000aU))))))) 
                                | ((0xe0U & (- (IData)(
                                                       (7U 
                                                        == 
                                                        (0x0000000fU 
                                                         & VL_MODDIV_III(32, (IData)(vlSelfRef.top__DOT__PC), (IData)(0x0000000aU))))))) 
                                   | ((0xbeU & (- (IData)(
                                                          (6U 
                                                           == 
                                                           (0x0000000fU 
                                                            & VL_MODDIV_III(32, (IData)(vlSelfRef.top__DOT__PC), (IData)(0x0000000aU))))))) 
                                      | ((0xb6U & (- (IData)(
                                                             (5U 
                                                              == 
                                                              (0x0000000fU 
                                                               & VL_MODDIV_III(32, (IData)(vlSelfRef.top__DOT__PC), (IData)(0x0000000aU))))))) 
                                         | ((0x66U 
                                             & (- (IData)(
                                                          (4U 
                                                           == 
                                                           (0x0000000fU 
                                                            & VL_MODDIV_III(32, (IData)(vlSelfRef.top__DOT__PC), (IData)(0x0000000aU))))))) 
                                            | ((0xf2U 
                                                & (- (IData)(
                                                             (3U 
                                                              == 
                                                              (0x0000000fU 
                                                               & VL_MODDIV_III(32, (IData)(vlSelfRef.top__DOT__PC), (IData)(0x0000000aU))))))) 
                                               | ((0xdaU 
                                                   & (- (IData)(
                                                                (2U 
                                                                 == 
                                                                 (0x0000000fU 
                                                                  & VL_MODDIV_III(32, (IData)(vlSelfRef.top__DOT__PC), (IData)(0x0000000aU))))))) 
                                                  | ((0xfcU 
                                                      & (- (IData)(
                                                                   (0U 
                                                                    == 
                                                                    (0x0000000fU 
                                                                     & VL_MODDIV_III(32, (IData)(vlSelfRef.top__DOT__PC), (IData)(0x0000000aU))))))) 
                                                     | (0x60U 
                                                        & (- (IData)(
                                                                     (1U 
                                                                      == 
                                                                      (0x0000000fU 
                                                                       & VL_MODDIV_III(32, (IData)(vlSelfRef.top__DOT__PC), (IData)(0x0000000aU))))))))))))))))))))));
    vlSelfRef.top__DOT__ins_seg6__DOT__i0__DOT__i0__DOT__hit 
        = ((0x0fU == (0x0000000fU & VL_MODDIV_III(32, (IData)(vlSelfRef.top__DOT__PC), (IData)(0x0000000aU)))) 
           | ((0x0eU == (0x0000000fU & VL_MODDIV_III(32, (IData)(vlSelfRef.top__DOT__PC), (IData)(0x0000000aU)))) 
              | ((0x0dU == (0x0000000fU & VL_MODDIV_III(32, (IData)(vlSelfRef.top__DOT__PC), (IData)(0x0000000aU)))) 
                 | ((0x0cU == (0x0000000fU & VL_MODDIV_III(32, (IData)(vlSelfRef.top__DOT__PC), (IData)(0x0000000aU)))) 
                    | ((0x0bU == (0x0000000fU & VL_MODDIV_III(32, (IData)(vlSelfRef.top__DOT__PC), (IData)(0x0000000aU)))) 
                       | ((0x0aU == (0x0000000fU & 
                                     VL_MODDIV_III(32, (IData)(vlSelfRef.top__DOT__PC), (IData)(0x0000000aU)))) 
                          | ((9U == (0x0000000fU & 
                                     VL_MODDIV_III(32, (IData)(vlSelfRef.top__DOT__PC), (IData)(0x0000000aU)))) 
                             | ((8U == (0x0000000fU 
                                        & VL_MODDIV_III(32, (IData)(vlSelfRef.top__DOT__PC), (IData)(0x0000000aU)))) 
                                | ((7U == (0x0000000fU 
                                           & VL_MODDIV_III(32, (IData)(vlSelfRef.top__DOT__PC), (IData)(0x0000000aU)))) 
                                   | ((6U == (0x0000000fU 
                                              & VL_MODDIV_III(32, (IData)(vlSelfRef.top__DOT__PC), (IData)(0x0000000aU)))) 
                                      | ((5U == (0x0000000fU 
                                                 & VL_MODDIV_III(32, (IData)(vlSelfRef.top__DOT__PC), (IData)(0x0000000aU)))) 
                                         | ((4U == 
                                             (0x0000000fU 
                                              & VL_MODDIV_III(32, (IData)(vlSelfRef.top__DOT__PC), (IData)(0x0000000aU)))) 
                                            | ((3U 
                                                == 
                                                (0x0000000fU 
                                                 & VL_MODDIV_III(32, (IData)(vlSelfRef.top__DOT__PC), (IData)(0x0000000aU)))) 
                                               | ((2U 
                                                   == 
                                                   (0x0000000fU 
                                                    & VL_MODDIV_III(32, (IData)(vlSelfRef.top__DOT__PC), (IData)(0x0000000aU)))) 
                                                  | ((0U 
                                                      == 
                                                      (0x0000000fU 
                                                       & VL_MODDIV_III(32, (IData)(vlSelfRef.top__DOT__PC), (IData)(0x0000000aU)))) 
                                                     | (1U 
                                                        == 
                                                        (0x0000000fU 
                                                         & VL_MODDIV_III(32, (IData)(vlSelfRef.top__DOT__PC), (IData)(0x0000000aU)))))))))))))))))));
    vlSelfRef.top__DOT__ins_seg7__DOT__i0__DOT__i0__DOT__lut_out 
        = ((0x8eU & (- (IData)((0x0fU == (0x0000000fU 
                                          & VL_MODDIV_III(32, 
                                                          VL_DIV_III(32, (IData)(vlSelfRef.top__DOT__PC), (IData)(0x0000000aU)), (IData)(0x0000000aU))))))) 
           | ((0xdeU & (- (IData)((0x0eU == (0x0000000fU 
                                             & VL_MODDIV_III(32, 
                                                             VL_DIV_III(32, (IData)(vlSelfRef.top__DOT__PC), (IData)(0x0000000aU)), (IData)(0x0000000aU))))))) 
              | ((0x7aU & (- (IData)((0x0dU == (0x0000000fU 
                                                & VL_MODDIV_III(32, 
                                                                VL_DIV_III(32, (IData)(vlSelfRef.top__DOT__PC), (IData)(0x0000000aU)), (IData)(0x0000000aU))))))) 
                 | ((0x1aU & (- (IData)((0x0cU == (0x0000000fU 
                                                   & VL_MODDIV_III(32, 
                                                                   VL_DIV_III(32, (IData)(vlSelfRef.top__DOT__PC), (IData)(0x0000000aU)), (IData)(0x0000000aU))))))) 
                    | ((0x3eU & (- (IData)((0x0bU == 
                                            (0x0000000fU 
                                             & VL_MODDIV_III(32, 
                                                             VL_DIV_III(32, (IData)(vlSelfRef.top__DOT__PC), (IData)(0x0000000aU)), (IData)(0x0000000aU))))))) 
                       | ((0xeeU & (- (IData)((0x0aU 
                                               == (0x0000000fU 
                                                   & VL_MODDIV_III(32, 
                                                                   VL_DIV_III(32, (IData)(vlSelfRef.top__DOT__PC), (IData)(0x0000000aU)), (IData)(0x0000000aU))))))) 
                          | ((0xf6U & (- (IData)((9U 
                                                  == 
                                                  (0x0000000fU 
                                                   & VL_MODDIV_III(32, 
                                                                   VL_DIV_III(32, (IData)(vlSelfRef.top__DOT__PC), (IData)(0x0000000aU)), (IData)(0x0000000aU))))))) 
                             | ((0xfeU & (- (IData)(
                                                    (8U 
                                                     == 
                                                     (0x0000000fU 
                                                      & VL_MODDIV_III(32, 
                                                                      VL_DIV_III(32, (IData)(vlSelfRef.top__DOT__PC), (IData)(0x0000000aU)), (IData)(0x0000000aU))))))) 
                                | ((0xe0U & (- (IData)(
                                                       (7U 
                                                        == 
                                                        (0x0000000fU 
                                                         & VL_MODDIV_III(32, 
                                                                         VL_DIV_III(32, (IData)(vlSelfRef.top__DOT__PC), (IData)(0x0000000aU)), (IData)(0x0000000aU))))))) 
                                   | ((0xbeU & (- (IData)(
                                                          (6U 
                                                           == 
                                                           (0x0000000fU 
                                                            & VL_MODDIV_III(32, 
                                                                            VL_DIV_III(32, (IData)(vlSelfRef.top__DOT__PC), (IData)(0x0000000aU)), (IData)(0x0000000aU))))))) 
                                      | ((0xb6U & (- (IData)(
                                                             (5U 
                                                              == 
                                                              (0x0000000fU 
                                                               & VL_MODDIV_III(32, 
                                                                               VL_DIV_III(32, (IData)(vlSelfRef.top__DOT__PC), (IData)(0x0000000aU)), (IData)(0x0000000aU))))))) 
                                         | ((0x66U 
                                             & (- (IData)(
                                                          (4U 
                                                           == 
                                                           (0x0000000fU 
                                                            & VL_MODDIV_III(32, 
                                                                            VL_DIV_III(32, (IData)(vlSelfRef.top__DOT__PC), (IData)(0x0000000aU)), (IData)(0x0000000aU))))))) 
                                            | ((0xf2U 
                                                & (- (IData)(
                                                             (3U 
                                                              == 
                                                              (0x0000000fU 
                                                               & VL_MODDIV_III(32, 
                                                                               VL_DIV_III(32, (IData)(vlSelfRef.top__DOT__PC), (IData)(0x0000000aU)), (IData)(0x0000000aU))))))) 
                                               | ((0xdaU 
                                                   & (- (IData)(
                                                                (2U 
                                                                 == 
                                                                 (0x0000000fU 
                                                                  & VL_MODDIV_III(32, 
                                                                                VL_DIV_III(32, (IData)(vlSelfRef.top__DOT__PC), (IData)(0x0000000aU)), (IData)(0x0000000aU))))))) 
                                                  | ((0xfcU 
                                                      & (- (IData)(
                                                                   (0U 
                                                                    == 
                                                                    (0x0000000fU 
                                                                     & VL_MODDIV_III(32, 
                                                                                VL_DIV_III(32, (IData)(vlSelfRef.top__DOT__PC), (IData)(0x0000000aU)), (IData)(0x0000000aU))))))) 
                                                     | (0x60U 
                                                        & (- (IData)(
                                                                     (1U 
                                                                      == 
                                                                      (0x0000000fU 
                                                                       & VL_MODDIV_III(32, 
                                                                                VL_DIV_III(32, (IData)(vlSelfRef.top__DOT__PC), (IData)(0x0000000aU)), (IData)(0x0000000aU))))))))))))))))))))));
    vlSelfRef.top__DOT__ins_seg7__DOT__i0__DOT__i0__DOT__hit 
        = ((0x0fU == (0x0000000fU & VL_MODDIV_III(32, 
                                                  VL_DIV_III(32, (IData)(vlSelfRef.top__DOT__PC), (IData)(0x0000000aU)), (IData)(0x0000000aU)))) 
           | ((0x0eU == (0x0000000fU & VL_MODDIV_III(32, 
                                                     VL_DIV_III(32, (IData)(vlSelfRef.top__DOT__PC), (IData)(0x0000000aU)), (IData)(0x0000000aU)))) 
              | ((0x0dU == (0x0000000fU & VL_MODDIV_III(32, 
                                                        VL_DIV_III(32, (IData)(vlSelfRef.top__DOT__PC), (IData)(0x0000000aU)), (IData)(0x0000000aU)))) 
                 | ((0x0cU == (0x0000000fU & VL_MODDIV_III(32, 
                                                           VL_DIV_III(32, (IData)(vlSelfRef.top__DOT__PC), (IData)(0x0000000aU)), (IData)(0x0000000aU)))) 
                    | ((0x0bU == (0x0000000fU & VL_MODDIV_III(32, 
                                                              VL_DIV_III(32, (IData)(vlSelfRef.top__DOT__PC), (IData)(0x0000000aU)), (IData)(0x0000000aU)))) 
                       | ((0x0aU == (0x0000000fU & 
                                     VL_MODDIV_III(32, 
                                                   VL_DIV_III(32, (IData)(vlSelfRef.top__DOT__PC), (IData)(0x0000000aU)), (IData)(0x0000000aU)))) 
                          | ((9U == (0x0000000fU & 
                                     VL_MODDIV_III(32, 
                                                   VL_DIV_III(32, (IData)(vlSelfRef.top__DOT__PC), (IData)(0x0000000aU)), (IData)(0x0000000aU)))) 
                             | ((8U == (0x0000000fU 
                                        & VL_MODDIV_III(32, 
                                                        VL_DIV_III(32, (IData)(vlSelfRef.top__DOT__PC), (IData)(0x0000000aU)), (IData)(0x0000000aU)))) 
                                | ((7U == (0x0000000fU 
                                           & VL_MODDIV_III(32, 
                                                           VL_DIV_III(32, (IData)(vlSelfRef.top__DOT__PC), (IData)(0x0000000aU)), (IData)(0x0000000aU)))) 
                                   | ((6U == (0x0000000fU 
                                              & VL_MODDIV_III(32, 
                                                              VL_DIV_III(32, (IData)(vlSelfRef.top__DOT__PC), (IData)(0x0000000aU)), (IData)(0x0000000aU)))) 
                                      | ((5U == (0x0000000fU 
                                                 & VL_MODDIV_III(32, 
                                                                 VL_DIV_III(32, (IData)(vlSelfRef.top__DOT__PC), (IData)(0x0000000aU)), (IData)(0x0000000aU)))) 
                                         | ((4U == 
                                             (0x0000000fU 
                                              & VL_MODDIV_III(32, 
                                                              VL_DIV_III(32, (IData)(vlSelfRef.top__DOT__PC), (IData)(0x0000000aU)), (IData)(0x0000000aU)))) 
                                            | ((3U 
                                                == 
                                                (0x0000000fU 
                                                 & VL_MODDIV_III(32, 
                                                                 VL_DIV_III(32, (IData)(vlSelfRef.top__DOT__PC), (IData)(0x0000000aU)), (IData)(0x0000000aU)))) 
                                               | ((2U 
                                                   == 
                                                   (0x0000000fU 
                                                    & VL_MODDIV_III(32, 
                                                                    VL_DIV_III(32, (IData)(vlSelfRef.top__DOT__PC), (IData)(0x0000000aU)), (IData)(0x0000000aU)))) 
                                                  | ((0U 
                                                      == 
                                                      (0x0000000fU 
                                                       & VL_MODDIV_III(32, 
                                                                       VL_DIV_III(32, (IData)(vlSelfRef.top__DOT__PC), (IData)(0x0000000aU)), (IData)(0x0000000aU)))) 
                                                     | (1U 
                                                        == 
                                                        (0x0000000fU 
                                                         & VL_MODDIV_III(32, 
                                                                         VL_DIV_III(32, (IData)(vlSelfRef.top__DOT__PC), (IData)(0x0000000aU)), (IData)(0x0000000aU)))))))))))))))))));
    vlSelfRef.ledr = ((0xff00U & (IData)(vlSelfRef.ledr)) 
                      | (IData)(vlSelfRef.top__DOT__io_led_r));
    vlSelfRef.top__DOT__i_GPR__DOT__GPR[0U] = vlSelfRef.top__DOT__i_GPR__DOT____Vcellout__R0____pinNumber4;
    vlSelfRef.top__DOT__i_GPR__DOT__GPR[1U] = vlSelfRef.top__DOT__i_GPR__DOT____Vcellout__R1____pinNumber4;
    vlSelfRef.top__DOT__i_GPR__DOT__GPR[2U] = vlSelfRef.top__DOT__i_GPR__DOT____Vcellout__R2____pinNumber4;
    vlSelfRef.top__DOT__i_GPR__DOT__GPR[3U] = vlSelfRef.top__DOT__i_GPR__DOT____Vcellout__R3____pinNumber4;
    vlSelfRef.top__DOT__i_GPR__DOT__sel_b__DOT__i0__DOT__pair_list[0U] 
        = (0x00000300U | (IData)(vlSelfRef.top__DOT__i_GPR__DOT____Vcellout__R3____pinNumber4));
    vlSelfRef.top__DOT__i_GPR__DOT__sel_b__DOT__i0__DOT__pair_list[3U] 
        = vlSelfRef.top__DOT__i_GPR__DOT____Vcellout__R0____pinNumber4;
    vlSelfRef.top__DOT__i_GPR__DOT__sel_b__DOT__i0__DOT__data_list[0U] 
        = vlSelfRef.top__DOT__i_GPR__DOT____Vcellout__R3____pinNumber4;
    vlSelfRef.top__DOT__i_GPR__DOT__sel_b__DOT__i0__DOT__data_list[1U] 
        = vlSelfRef.top__DOT__i_GPR__DOT____Vcellout__R2____pinNumber4;
    vlSelfRef.top__DOT__i_GPR__DOT__sel_b__DOT__i0__DOT__data_list[2U] 
        = vlSelfRef.top__DOT__i_GPR__DOT____Vcellout__R1____pinNumber4;
    vlSelfRef.top__DOT__i_GPR__DOT__sel_b__DOT__i0__DOT__data_list[3U] 
        = vlSelfRef.top__DOT__i_GPR__DOT____Vcellout__R0____pinNumber4;
    vlSelfRef.top__DOT__i_GPR__DOT__sel_a__DOT__i0__DOT__pair_list[0U] 
        = (0x00000300U | (IData)(vlSelfRef.top__DOT__i_GPR__DOT____Vcellout__R3____pinNumber4));
    vlSelfRef.top__DOT__i_GPR__DOT__sel_a__DOT__i0__DOT__pair_list[3U] 
        = vlSelfRef.top__DOT__i_GPR__DOT____Vcellout__R0____pinNumber4;
    vlSelfRef.top__DOT__i_GPR__DOT__sel_a__DOT__i0__DOT__data_list[0U] 
        = vlSelfRef.top__DOT__i_GPR__DOT____Vcellout__R3____pinNumber4;
    vlSelfRef.top__DOT__i_GPR__DOT__sel_a__DOT__i0__DOT__data_list[1U] 
        = vlSelfRef.top__DOT__i_GPR__DOT____Vcellout__R2____pinNumber4;
    vlSelfRef.top__DOT__i_GPR__DOT__sel_a__DOT__i0__DOT__data_list[2U] 
        = vlSelfRef.top__DOT__i_GPR__DOT____Vcellout__R1____pinNumber4;
    vlSelfRef.top__DOT__i_GPR__DOT__sel_a__DOT__i0__DOT__data_list[3U] 
        = vlSelfRef.top__DOT__i_GPR__DOT____Vcellout__R0____pinNumber4;
    vlSelfRef.top__DOT__ins_seg4__DOT__b = (0x0000000fU 
                                            & vlSelfRef.top__DOT__rom_PC
                                            [vlSelfRef.top__DOT__PC]);
    vlSelfRef.top__DOT__ins_seg5__DOT__b = (0x0000000fU 
                                            & (vlSelfRef.top__DOT__rom_PC
                                               [vlSelfRef.top__DOT__PC] 
                                               >> 4U));
    vlSelfRef.top__DOT__btn_p[0U] = vlSelfRef.top__DOT____Vcellout__r_btn0____pinNumber4;
    vlSelfRef.top__DOT__btn_p[1U] = vlSelfRef.top__DOT____Vcellout__r_btn1____pinNumber4;
    vlSelfRef.top__DOT__btn_p[2U] = vlSelfRef.top__DOT____Vcellout__r_btn2____pinNumber4;
    vlSelfRef.top__DOT__btn_p[3U] = vlSelfRef.top__DOT____Vcellout__r_btn3____pinNumber4;
    vlSelfRef.top__DOT__btn_p[4U] = vlSelfRef.top__DOT____Vcellout__r_btn4____pinNumber4;
    vlSelfRef.top__DOT__ins_seg0__DOT__i0__DOT__i0__DOT__lut_out 
        = ((0x8eU & (- (IData)((0x0fU == (0x0000000fU 
                                          & VL_MODDIV_III(32, (IData)(vlSelfRef.top__DOT__io_seg_r), (IData)(0x0000000aU))))))) 
           | ((0xdeU & (- (IData)((0x0eU == (0x0000000fU 
                                             & VL_MODDIV_III(32, (IData)(vlSelfRef.top__DOT__io_seg_r), (IData)(0x0000000aU))))))) 
              | ((0x7aU & (- (IData)((0x0dU == (0x0000000fU 
                                                & VL_MODDIV_III(32, (IData)(vlSelfRef.top__DOT__io_seg_r), (IData)(0x0000000aU))))))) 
                 | ((0x1aU & (- (IData)((0x0cU == (0x0000000fU 
                                                   & VL_MODDIV_III(32, (IData)(vlSelfRef.top__DOT__io_seg_r), (IData)(0x0000000aU))))))) 
                    | ((0x3eU & (- (IData)((0x0bU == 
                                            (0x0000000fU 
                                             & VL_MODDIV_III(32, (IData)(vlSelfRef.top__DOT__io_seg_r), (IData)(0x0000000aU))))))) 
                       | ((0xeeU & (- (IData)((0x0aU 
                                               == (0x0000000fU 
                                                   & VL_MODDIV_III(32, (IData)(vlSelfRef.top__DOT__io_seg_r), (IData)(0x0000000aU))))))) 
                          | ((0xf6U & (- (IData)((9U 
                                                  == 
                                                  (0x0000000fU 
                                                   & VL_MODDIV_III(32, (IData)(vlSelfRef.top__DOT__io_seg_r), (IData)(0x0000000aU))))))) 
                             | ((0xfeU & (- (IData)(
                                                    (8U 
                                                     == 
                                                     (0x0000000fU 
                                                      & VL_MODDIV_III(32, (IData)(vlSelfRef.top__DOT__io_seg_r), (IData)(0x0000000aU))))))) 
                                | ((0xe0U & (- (IData)(
                                                       (7U 
                                                        == 
                                                        (0x0000000fU 
                                                         & VL_MODDIV_III(32, (IData)(vlSelfRef.top__DOT__io_seg_r), (IData)(0x0000000aU))))))) 
                                   | ((0xbeU & (- (IData)(
                                                          (6U 
                                                           == 
                                                           (0x0000000fU 
                                                            & VL_MODDIV_III(32, (IData)(vlSelfRef.top__DOT__io_seg_r), (IData)(0x0000000aU))))))) 
                                      | ((0xb6U & (- (IData)(
                                                             (5U 
                                                              == 
                                                              (0x0000000fU 
                                                               & VL_MODDIV_III(32, (IData)(vlSelfRef.top__DOT__io_seg_r), (IData)(0x0000000aU))))))) 
                                         | ((0x66U 
                                             & (- (IData)(
                                                          (4U 
                                                           == 
                                                           (0x0000000fU 
                                                            & VL_MODDIV_III(32, (IData)(vlSelfRef.top__DOT__io_seg_r), (IData)(0x0000000aU))))))) 
                                            | ((0xf2U 
                                                & (- (IData)(
                                                             (3U 
                                                              == 
                                                              (0x0000000fU 
                                                               & VL_MODDIV_III(32, (IData)(vlSelfRef.top__DOT__io_seg_r), (IData)(0x0000000aU))))))) 
                                               | ((0xdaU 
                                                   & (- (IData)(
                                                                (2U 
                                                                 == 
                                                                 (0x0000000fU 
                                                                  & VL_MODDIV_III(32, (IData)(vlSelfRef.top__DOT__io_seg_r), (IData)(0x0000000aU))))))) 
                                                  | ((0xfcU 
                                                      & (- (IData)(
                                                                   (0U 
                                                                    == 
                                                                    (0x0000000fU 
                                                                     & VL_MODDIV_III(32, (IData)(vlSelfRef.top__DOT__io_seg_r), (IData)(0x0000000aU))))))) 
                                                     | (0x60U 
                                                        & (- (IData)(
                                                                     (1U 
                                                                      == 
                                                                      (0x0000000fU 
                                                                       & VL_MODDIV_III(32, (IData)(vlSelfRef.top__DOT__io_seg_r), (IData)(0x0000000aU))))))))))))))))))))));
    vlSelfRef.top__DOT__ins_seg0__DOT__i0__DOT__i0__DOT__hit 
        = ((0x0fU == (0x0000000fU & VL_MODDIV_III(32, (IData)(vlSelfRef.top__DOT__io_seg_r), (IData)(0x0000000aU)))) 
           | ((0x0eU == (0x0000000fU & VL_MODDIV_III(32, (IData)(vlSelfRef.top__DOT__io_seg_r), (IData)(0x0000000aU)))) 
              | ((0x0dU == (0x0000000fU & VL_MODDIV_III(32, (IData)(vlSelfRef.top__DOT__io_seg_r), (IData)(0x0000000aU)))) 
                 | ((0x0cU == (0x0000000fU & VL_MODDIV_III(32, (IData)(vlSelfRef.top__DOT__io_seg_r), (IData)(0x0000000aU)))) 
                    | ((0x0bU == (0x0000000fU & VL_MODDIV_III(32, (IData)(vlSelfRef.top__DOT__io_seg_r), (IData)(0x0000000aU)))) 
                       | ((0x0aU == (0x0000000fU & 
                                     VL_MODDIV_III(32, (IData)(vlSelfRef.top__DOT__io_seg_r), (IData)(0x0000000aU)))) 
                          | ((9U == (0x0000000fU & 
                                     VL_MODDIV_III(32, (IData)(vlSelfRef.top__DOT__io_seg_r), (IData)(0x0000000aU)))) 
                             | ((8U == (0x0000000fU 
                                        & VL_MODDIV_III(32, (IData)(vlSelfRef.top__DOT__io_seg_r), (IData)(0x0000000aU)))) 
                                | ((7U == (0x0000000fU 
                                           & VL_MODDIV_III(32, (IData)(vlSelfRef.top__DOT__io_seg_r), (IData)(0x0000000aU)))) 
                                   | ((6U == (0x0000000fU 
                                              & VL_MODDIV_III(32, (IData)(vlSelfRef.top__DOT__io_seg_r), (IData)(0x0000000aU)))) 
                                      | ((5U == (0x0000000fU 
                                                 & VL_MODDIV_III(32, (IData)(vlSelfRef.top__DOT__io_seg_r), (IData)(0x0000000aU)))) 
                                         | ((4U == 
                                             (0x0000000fU 
                                              & VL_MODDIV_III(32, (IData)(vlSelfRef.top__DOT__io_seg_r), (IData)(0x0000000aU)))) 
                                            | ((3U 
                                                == 
                                                (0x0000000fU 
                                                 & VL_MODDIV_III(32, (IData)(vlSelfRef.top__DOT__io_seg_r), (IData)(0x0000000aU)))) 
                                               | ((2U 
                                                   == 
                                                   (0x0000000fU 
                                                    & VL_MODDIV_III(32, (IData)(vlSelfRef.top__DOT__io_seg_r), (IData)(0x0000000aU)))) 
                                                  | ((0U 
                                                      == 
                                                      (0x0000000fU 
                                                       & VL_MODDIV_III(32, (IData)(vlSelfRef.top__DOT__io_seg_r), (IData)(0x0000000aU)))) 
                                                     | (1U 
                                                        == 
                                                        (0x0000000fU 
                                                         & VL_MODDIV_III(32, (IData)(vlSelfRef.top__DOT__io_seg_r), (IData)(0x0000000aU)))))))))))))))))));
    vlSelfRef.top__DOT__ins_seg1__DOT__i0__DOT__i0__DOT__lut_out 
        = ((0x8eU & (- (IData)((0x0fU == (0x0000000fU 
                                          & VL_MODDIV_III(32, 
                                                          VL_DIV_III(32, (IData)(vlSelfRef.top__DOT__io_seg_r), (IData)(0x0000000aU)), (IData)(0x0000000aU))))))) 
           | ((0xdeU & (- (IData)((0x0eU == (0x0000000fU 
                                             & VL_MODDIV_III(32, 
                                                             VL_DIV_III(32, (IData)(vlSelfRef.top__DOT__io_seg_r), (IData)(0x0000000aU)), (IData)(0x0000000aU))))))) 
              | ((0x7aU & (- (IData)((0x0dU == (0x0000000fU 
                                                & VL_MODDIV_III(32, 
                                                                VL_DIV_III(32, (IData)(vlSelfRef.top__DOT__io_seg_r), (IData)(0x0000000aU)), (IData)(0x0000000aU))))))) 
                 | ((0x1aU & (- (IData)((0x0cU == (0x0000000fU 
                                                   & VL_MODDIV_III(32, 
                                                                   VL_DIV_III(32, (IData)(vlSelfRef.top__DOT__io_seg_r), (IData)(0x0000000aU)), (IData)(0x0000000aU))))))) 
                    | ((0x3eU & (- (IData)((0x0bU == 
                                            (0x0000000fU 
                                             & VL_MODDIV_III(32, 
                                                             VL_DIV_III(32, (IData)(vlSelfRef.top__DOT__io_seg_r), (IData)(0x0000000aU)), (IData)(0x0000000aU))))))) 
                       | ((0xeeU & (- (IData)((0x0aU 
                                               == (0x0000000fU 
                                                   & VL_MODDIV_III(32, 
                                                                   VL_DIV_III(32, (IData)(vlSelfRef.top__DOT__io_seg_r), (IData)(0x0000000aU)), (IData)(0x0000000aU))))))) 
                          | ((0xf6U & (- (IData)((9U 
                                                  == 
                                                  (0x0000000fU 
                                                   & VL_MODDIV_III(32, 
                                                                   VL_DIV_III(32, (IData)(vlSelfRef.top__DOT__io_seg_r), (IData)(0x0000000aU)), (IData)(0x0000000aU))))))) 
                             | ((0xfeU & (- (IData)(
                                                    (8U 
                                                     == 
                                                     (0x0000000fU 
                                                      & VL_MODDIV_III(32, 
                                                                      VL_DIV_III(32, (IData)(vlSelfRef.top__DOT__io_seg_r), (IData)(0x0000000aU)), (IData)(0x0000000aU))))))) 
                                | ((0xe0U & (- (IData)(
                                                       (7U 
                                                        == 
                                                        (0x0000000fU 
                                                         & VL_MODDIV_III(32, 
                                                                         VL_DIV_III(32, (IData)(vlSelfRef.top__DOT__io_seg_r), (IData)(0x0000000aU)), (IData)(0x0000000aU))))))) 
                                   | ((0xbeU & (- (IData)(
                                                          (6U 
                                                           == 
                                                           (0x0000000fU 
                                                            & VL_MODDIV_III(32, 
                                                                            VL_DIV_III(32, (IData)(vlSelfRef.top__DOT__io_seg_r), (IData)(0x0000000aU)), (IData)(0x0000000aU))))))) 
                                      | ((0xb6U & (- (IData)(
                                                             (5U 
                                                              == 
                                                              (0x0000000fU 
                                                               & VL_MODDIV_III(32, 
                                                                               VL_DIV_III(32, (IData)(vlSelfRef.top__DOT__io_seg_r), (IData)(0x0000000aU)), (IData)(0x0000000aU))))))) 
                                         | ((0x66U 
                                             & (- (IData)(
                                                          (4U 
                                                           == 
                                                           (0x0000000fU 
                                                            & VL_MODDIV_III(32, 
                                                                            VL_DIV_III(32, (IData)(vlSelfRef.top__DOT__io_seg_r), (IData)(0x0000000aU)), (IData)(0x0000000aU))))))) 
                                            | ((0xf2U 
                                                & (- (IData)(
                                                             (3U 
                                                              == 
                                                              (0x0000000fU 
                                                               & VL_MODDIV_III(32, 
                                                                               VL_DIV_III(32, (IData)(vlSelfRef.top__DOT__io_seg_r), (IData)(0x0000000aU)), (IData)(0x0000000aU))))))) 
                                               | ((0xdaU 
                                                   & (- (IData)(
                                                                (2U 
                                                                 == 
                                                                 (0x0000000fU 
                                                                  & VL_MODDIV_III(32, 
                                                                                VL_DIV_III(32, (IData)(vlSelfRef.top__DOT__io_seg_r), (IData)(0x0000000aU)), (IData)(0x0000000aU))))))) 
                                                  | ((0xfcU 
                                                      & (- (IData)(
                                                                   (0U 
                                                                    == 
                                                                    (0x0000000fU 
                                                                     & VL_MODDIV_III(32, 
                                                                                VL_DIV_III(32, (IData)(vlSelfRef.top__DOT__io_seg_r), (IData)(0x0000000aU)), (IData)(0x0000000aU))))))) 
                                                     | (0x60U 
                                                        & (- (IData)(
                                                                     (1U 
                                                                      == 
                                                                      (0x0000000fU 
                                                                       & VL_MODDIV_III(32, 
                                                                                VL_DIV_III(32, (IData)(vlSelfRef.top__DOT__io_seg_r), (IData)(0x0000000aU)), (IData)(0x0000000aU))))))))))))))))))))));
    vlSelfRef.top__DOT__ins_seg1__DOT__i0__DOT__i0__DOT__hit 
        = ((0x0fU == (0x0000000fU & VL_MODDIV_III(32, 
                                                  VL_DIV_III(32, (IData)(vlSelfRef.top__DOT__io_seg_r), (IData)(0x0000000aU)), (IData)(0x0000000aU)))) 
           | ((0x0eU == (0x0000000fU & VL_MODDIV_III(32, 
                                                     VL_DIV_III(32, (IData)(vlSelfRef.top__DOT__io_seg_r), (IData)(0x0000000aU)), (IData)(0x0000000aU)))) 
              | ((0x0dU == (0x0000000fU & VL_MODDIV_III(32, 
                                                        VL_DIV_III(32, (IData)(vlSelfRef.top__DOT__io_seg_r), (IData)(0x0000000aU)), (IData)(0x0000000aU)))) 
                 | ((0x0cU == (0x0000000fU & VL_MODDIV_III(32, 
                                                           VL_DIV_III(32, (IData)(vlSelfRef.top__DOT__io_seg_r), (IData)(0x0000000aU)), (IData)(0x0000000aU)))) 
                    | ((0x0bU == (0x0000000fU & VL_MODDIV_III(32, 
                                                              VL_DIV_III(32, (IData)(vlSelfRef.top__DOT__io_seg_r), (IData)(0x0000000aU)), (IData)(0x0000000aU)))) 
                       | ((0x0aU == (0x0000000fU & 
                                     VL_MODDIV_III(32, 
                                                   VL_DIV_III(32, (IData)(vlSelfRef.top__DOT__io_seg_r), (IData)(0x0000000aU)), (IData)(0x0000000aU)))) 
                          | ((9U == (0x0000000fU & 
                                     VL_MODDIV_III(32, 
                                                   VL_DIV_III(32, (IData)(vlSelfRef.top__DOT__io_seg_r), (IData)(0x0000000aU)), (IData)(0x0000000aU)))) 
                             | ((8U == (0x0000000fU 
                                        & VL_MODDIV_III(32, 
                                                        VL_DIV_III(32, (IData)(vlSelfRef.top__DOT__io_seg_r), (IData)(0x0000000aU)), (IData)(0x0000000aU)))) 
                                | ((7U == (0x0000000fU 
                                           & VL_MODDIV_III(32, 
                                                           VL_DIV_III(32, (IData)(vlSelfRef.top__DOT__io_seg_r), (IData)(0x0000000aU)), (IData)(0x0000000aU)))) 
                                   | ((6U == (0x0000000fU 
                                              & VL_MODDIV_III(32, 
                                                              VL_DIV_III(32, (IData)(vlSelfRef.top__DOT__io_seg_r), (IData)(0x0000000aU)), (IData)(0x0000000aU)))) 
                                      | ((5U == (0x0000000fU 
                                                 & VL_MODDIV_III(32, 
                                                                 VL_DIV_III(32, (IData)(vlSelfRef.top__DOT__io_seg_r), (IData)(0x0000000aU)), (IData)(0x0000000aU)))) 
                                         | ((4U == 
                                             (0x0000000fU 
                                              & VL_MODDIV_III(32, 
                                                              VL_DIV_III(32, (IData)(vlSelfRef.top__DOT__io_seg_r), (IData)(0x0000000aU)), (IData)(0x0000000aU)))) 
                                            | ((3U 
                                                == 
                                                (0x0000000fU 
                                                 & VL_MODDIV_III(32, 
                                                                 VL_DIV_III(32, (IData)(vlSelfRef.top__DOT__io_seg_r), (IData)(0x0000000aU)), (IData)(0x0000000aU)))) 
                                               | ((2U 
                                                   == 
                                                   (0x0000000fU 
                                                    & VL_MODDIV_III(32, 
                                                                    VL_DIV_III(32, (IData)(vlSelfRef.top__DOT__io_seg_r), (IData)(0x0000000aU)), (IData)(0x0000000aU)))) 
                                                  | ((0U 
                                                      == 
                                                      (0x0000000fU 
                                                       & VL_MODDIV_III(32, 
                                                                       VL_DIV_III(32, (IData)(vlSelfRef.top__DOT__io_seg_r), (IData)(0x0000000aU)), (IData)(0x0000000aU)))) 
                                                     | (1U 
                                                        == 
                                                        (0x0000000fU 
                                                         & VL_MODDIV_III(32, 
                                                                         VL_DIV_III(32, (IData)(vlSelfRef.top__DOT__io_seg_r), (IData)(0x0000000aU)), (IData)(0x0000000aU)))))))))))))))))));
    vlSelfRef.top__DOT__R_PC__DOT__rst = ((IData)(vlSelfRef.rst) 
                                          | ((IData)(vlSelfRef.sw) 
                                             >> 0x0000000fU));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_6 = (0x0000000fU 
                                                & (vlSelfRef.top__DOT__rom_PC
                                                   [vlSelfRef.top__DOT__PC] 
                                                   >> 2U));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1 = (7U 
                                                & vlSelfRef.top__DOT__rom_PC
                                                [vlSelfRef.top__DOT__PC]);
    vlSelfRef.top__DOT__i_GPR__DOT__sel_a__DOT__i0__DOT__lut 
        = (((QData)((IData)((0x00000100U | (((IData)(vlSelfRef.top__DOT__i_GPR__DOT____Vcellout__R0____pinNumber4) 
                                             << 0x0000000aU) 
                                            | (IData)(vlSelfRef.top__DOT__i_GPR__DOT____Vcellout__R1____pinNumber4))))) 
            << 0x00000014U) | (QData)((IData)((0x00080300U 
                                               | (((IData)(vlSelfRef.top__DOT__i_GPR__DOT____Vcellout__R2____pinNumber4) 
                                                   << 0x0000000aU) 
                                                  | (IData)(vlSelfRef.top__DOT__i_GPR__DOT____Vcellout__R3____pinNumber4))))));
    vlSelfRef.top__DOT__i_GPR__DOT__waddr = (3U & (vlSelfRef.top__DOT__rom_PC
                                                   [vlSelfRef.top__DOT__PC] 
                                                   >> 4U));
    vlSelfRef.top__DOT__rs1 = (3U & (vlSelfRef.top__DOT__rom_PC
                                     [vlSelfRef.top__DOT__PC] 
                                     >> 2U));
    vlSelfRef.top__DOT__rs2 = (3U & vlSelfRef.top__DOT__rom_PC
                               [vlSelfRef.top__DOT__PC]);
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_7 = (1U 
                                                & (vlSelfRef.top__DOT__rom_PC
                                                   [vlSelfRef.top__DOT__PC] 
                                                   >> 3U));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0 = (3U 
                                                & (vlSelfRef.top__DOT__rom_PC
                                                   [vlSelfRef.top__DOT__PC] 
                                                   >> 6U));
    vlSelfRef.top__DOT__ins_seg4__DOT__i0__DOT__i0__DOT__lut_out 
        = ((0x8eU & (- (IData)((0x0fU == (IData)(vlSelfRef.top__DOT__ins_seg4__DOT__b))))) 
           | ((0xdeU & (- (IData)((0x0eU == (IData)(vlSelfRef.top__DOT__ins_seg4__DOT__b))))) 
              | ((0x7aU & (- (IData)((0x0dU == (IData)(vlSelfRef.top__DOT__ins_seg4__DOT__b))))) 
                 | ((0x1aU & (- (IData)((0x0cU == (IData)(vlSelfRef.top__DOT__ins_seg4__DOT__b))))) 
                    | ((0x3eU & (- (IData)((0x0bU == (IData)(vlSelfRef.top__DOT__ins_seg4__DOT__b))))) 
                       | ((0xeeU & (- (IData)((0x0aU 
                                               == (IData)(vlSelfRef.top__DOT__ins_seg4__DOT__b))))) 
                          | ((0xf6U & (- (IData)((9U 
                                                  == (IData)(vlSelfRef.top__DOT__ins_seg4__DOT__b))))) 
                             | ((0xfeU & (- (IData)(
                                                    (8U 
                                                     == (IData)(vlSelfRef.top__DOT__ins_seg4__DOT__b))))) 
                                | ((0xe0U & (- (IData)(
                                                       (7U 
                                                        == (IData)(vlSelfRef.top__DOT__ins_seg4__DOT__b))))) 
                                   | ((0xbeU & (- (IData)(
                                                          (6U 
                                                           == (IData)(vlSelfRef.top__DOT__ins_seg4__DOT__b))))) 
                                      | ((0xb6U & (- (IData)(
                                                             (5U 
                                                              == (IData)(vlSelfRef.top__DOT__ins_seg4__DOT__b))))) 
                                         | ((0x66U 
                                             & (- (IData)(
                                                          (4U 
                                                           == (IData)(vlSelfRef.top__DOT__ins_seg4__DOT__b))))) 
                                            | ((0xf2U 
                                                & (- (IData)(
                                                             (3U 
                                                              == (IData)(vlSelfRef.top__DOT__ins_seg4__DOT__b))))) 
                                               | ((0xdaU 
                                                   & (- (IData)(
                                                                (2U 
                                                                 == (IData)(vlSelfRef.top__DOT__ins_seg4__DOT__b))))) 
                                                  | ((0xfcU 
                                                      & (- (IData)(
                                                                   (0U 
                                                                    == (IData)(vlSelfRef.top__DOT__ins_seg4__DOT__b))))) 
                                                     | (0x60U 
                                                        & (- (IData)(
                                                                     (1U 
                                                                      == (IData)(vlSelfRef.top__DOT__ins_seg4__DOT__b))))))))))))))))))));
    vlSelfRef.top__DOT__ins_seg5__DOT__i0__DOT__i0__DOT__lut_out 
        = ((0x8eU & (- (IData)((0x0fU == (IData)(vlSelfRef.top__DOT__ins_seg5__DOT__b))))) 
           | ((0xdeU & (- (IData)((0x0eU == (IData)(vlSelfRef.top__DOT__ins_seg5__DOT__b))))) 
              | ((0x7aU & (- (IData)((0x0dU == (IData)(vlSelfRef.top__DOT__ins_seg5__DOT__b))))) 
                 | ((0x1aU & (- (IData)((0x0cU == (IData)(vlSelfRef.top__DOT__ins_seg5__DOT__b))))) 
                    | ((0x3eU & (- (IData)((0x0bU == (IData)(vlSelfRef.top__DOT__ins_seg5__DOT__b))))) 
                       | ((0xeeU & (- (IData)((0x0aU 
                                               == (IData)(vlSelfRef.top__DOT__ins_seg5__DOT__b))))) 
                          | ((0xf6U & (- (IData)((9U 
                                                  == (IData)(vlSelfRef.top__DOT__ins_seg5__DOT__b))))) 
                             | ((0xfeU & (- (IData)(
                                                    (8U 
                                                     == (IData)(vlSelfRef.top__DOT__ins_seg5__DOT__b))))) 
                                | ((0xe0U & (- (IData)(
                                                       (7U 
                                                        == (IData)(vlSelfRef.top__DOT__ins_seg5__DOT__b))))) 
                                   | ((0xbeU & (- (IData)(
                                                          (6U 
                                                           == (IData)(vlSelfRef.top__DOT__ins_seg5__DOT__b))))) 
                                      | ((0xb6U & (- (IData)(
                                                             (5U 
                                                              == (IData)(vlSelfRef.top__DOT__ins_seg5__DOT__b))))) 
                                         | ((0x66U 
                                             & (- (IData)(
                                                          (4U 
                                                           == (IData)(vlSelfRef.top__DOT__ins_seg5__DOT__b))))) 
                                            | ((0xf2U 
                                                & (- (IData)(
                                                             (3U 
                                                              == (IData)(vlSelfRef.top__DOT__ins_seg5__DOT__b))))) 
                                               | ((0xdaU 
                                                   & (- (IData)(
                                                                (2U 
                                                                 == (IData)(vlSelfRef.top__DOT__ins_seg5__DOT__b))))) 
                                                  | ((0xfcU 
                                                      & (- (IData)(
                                                                   (0U 
                                                                    == (IData)(vlSelfRef.top__DOT__ins_seg5__DOT__b))))) 
                                                     | (0x60U 
                                                        & (- (IData)(
                                                                     (1U 
                                                                      == (IData)(vlSelfRef.top__DOT__ins_seg5__DOT__b))))))))))))))))))));
    vlSelfRef.seg0 = (0x000000ffU & (~ ((- (IData)((IData)(vlSelfRef.top__DOT__ins_seg0__DOT__i0__DOT__i0__DOT__hit))) 
                                        & (IData)(vlSelfRef.top__DOT__ins_seg0__DOT__i0__DOT__i0__DOT__lut_out))));
    vlSelfRef.seg1 = (0x000000ffU & (~ ((- (IData)((IData)(vlSelfRef.top__DOT__ins_seg1__DOT__i0__DOT__i0__DOT__hit))) 
                                        & (IData)(vlSelfRef.top__DOT__ins_seg1__DOT__i0__DOT__i0__DOT__lut_out))));
    vlSelfRef.ledr = ((0x3fffU & (IData)(vlSelfRef.ledr)) 
                      | (((IData)(vlSelfRef.clk) << 0x0000000fU) 
                         | ((IData)(vlSelfRef.top__DOT__R_PC__DOT__rst) 
                            << 0x0000000eU)));
    vlSelfRef.top__DOT__i_GPR__DOT__sel_b__DOT__i0__DOT__pair_list[1U] 
        = (0x000003ffU & (IData)((vlSelfRef.top__DOT__i_GPR__DOT__sel_a__DOT__i0__DOT__lut 
                                  >> 0x0000000aU)));
    vlSelfRef.top__DOT__i_GPR__DOT__sel_b__DOT__i0__DOT__pair_list[2U] 
        = (0x000003ffU & (IData)((vlSelfRef.top__DOT__i_GPR__DOT__sel_a__DOT__i0__DOT__lut 
                                  >> 0x00000014U)));
    vlSelfRef.top__DOT__i_GPR__DOT__sel_a__DOT__i0__DOT__pair_list[1U] 
        = (0x000003ffU & (IData)((vlSelfRef.top__DOT__i_GPR__DOT__sel_a__DOT__i0__DOT__lut 
                                  >> 0x0000000aU)));
    vlSelfRef.top__DOT__i_GPR__DOT__sel_a__DOT__i0__DOT__pair_list[2U] 
        = (0x000003ffU & (IData)((vlSelfRef.top__DOT__i_GPR__DOT__sel_a__DOT__i0__DOT__lut 
                                  >> 0x00000014U)));
    vlSelfRef.top__DOT__io_in = ((~ (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_7)) 
                                 & (1U == (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0)));
    vlSelfRef.top__DOT__i_GPR__DOT__raddra = ((IData)(vlSelfRef.top__DOT__rs1) 
                                              & (- (IData)(
                                                           (3U 
                                                            != (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0)))));
    vlSelfRef.top__DOT__io_out = ((1U == (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0)) 
                                  & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_7));
    vlSelfRef.top__DOT__i_GPR__DOT__wen = ((0U == (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0)) 
                                           | ((2U == (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0)) 
                                              | (IData)(vlSelfRef.top__DOT__io_in)));
    vlSelfRef.top__DOT__i_GPR__DOT__douta = ((- (IData)(
                                                        ((3U 
                                                          == (IData)(vlSelfRef.top__DOT__i_GPR__DOT__raddra)) 
                                                         | ((2U 
                                                             == (IData)(vlSelfRef.top__DOT__i_GPR__DOT__raddra)) 
                                                            | ((1U 
                                                                == (IData)(vlSelfRef.top__DOT__i_GPR__DOT__raddra)) 
                                                               | (0U 
                                                                  == (IData)(vlSelfRef.top__DOT__i_GPR__DOT__raddra))))))) 
                                             & (((IData)(vlSelfRef.top__DOT__i_GPR__DOT____Vcellout__R3____pinNumber4) 
                                                 & (- (IData)(
                                                              (3U 
                                                               == (IData)(vlSelfRef.top__DOT__i_GPR__DOT__raddra))))) 
                                                | (((IData)(vlSelfRef.top__DOT__i_GPR__DOT____Vcellout__R2____pinNumber4) 
                                                    & (- (IData)(
                                                                 (2U 
                                                                  == (IData)(vlSelfRef.top__DOT__i_GPR__DOT__raddra))))) 
                                                   | (((IData)(vlSelfRef.top__DOT__i_GPR__DOT____Vcellout__R1____pinNumber4) 
                                                       & (- (IData)(
                                                                    (1U 
                                                                     == (IData)(vlSelfRef.top__DOT__i_GPR__DOT__raddra))))) 
                                                      | ((IData)(vlSelfRef.top__DOT__i_GPR__DOT____Vcellout__R0____pinNumber4) 
                                                         & (- (IData)(
                                                                      (0U 
                                                                       == (IData)(vlSelfRef.top__DOT__i_GPR__DOT__raddra)))))))));
    vlSelfRef.top__DOT__i_GPR__DOT__raddrb = ((IData)(vlSelfRef.top__DOT__io_out)
                                               ? (IData)(vlSelfRef.top__DOT__i_GPR__DOT__waddr)
                                               : (IData)(vlSelfRef.top__DOT__rs2));
    vlSelfRef.top__DOT__R_led__DOT__din = ((- (IData)(
                                                      ((3U 
                                                        == (IData)(vlSelfRef.top__DOT__i_GPR__DOT__raddrb)) 
                                                       | ((2U 
                                                           == (IData)(vlSelfRef.top__DOT__i_GPR__DOT__raddrb)) 
                                                          | ((1U 
                                                              == (IData)(vlSelfRef.top__DOT__i_GPR__DOT__raddrb)) 
                                                             | (0U 
                                                                == (IData)(vlSelfRef.top__DOT__i_GPR__DOT__raddrb))))))) 
                                           & (((IData)(vlSelfRef.top__DOT__i_GPR__DOT____Vcellout__R3____pinNumber4) 
                                               & (- (IData)(
                                                            (3U 
                                                             == (IData)(vlSelfRef.top__DOT__i_GPR__DOT__raddrb))))) 
                                              | (((IData)(vlSelfRef.top__DOT__i_GPR__DOT____Vcellout__R2____pinNumber4) 
                                                  & (- (IData)(
                                                               (2U 
                                                                == (IData)(vlSelfRef.top__DOT__i_GPR__DOT__raddrb))))) 
                                                 | (((IData)(vlSelfRef.top__DOT__i_GPR__DOT____Vcellout__R1____pinNumber4) 
                                                     & (- (IData)(
                                                                  (1U 
                                                                   == (IData)(vlSelfRef.top__DOT__i_GPR__DOT__raddrb))))) 
                                                    | ((IData)(vlSelfRef.top__DOT__i_GPR__DOT____Vcellout__R0____pinNumber4) 
                                                       & (- (IData)(
                                                                    (0U 
                                                                     == (IData)(vlSelfRef.top__DOT__i_GPR__DOT__raddrb)))))))));
    vlSelfRef.top__DOT__R_PC__DOT__din = (0x000000ffU 
                                          & (((3U == (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0)) 
                                              & ((IData)(vlSelfRef.top__DOT__i_GPR__DOT__douta) 
                                                 != (IData)(vlSelfRef.top__DOT__R_led__DOT__din)))
                                              ? ((IData)(vlSelfRef.top__DOT__PC) 
                                                 + 
                                                 ((0x000000f0U 
                                                   & ((- (IData)(
                                                                 (1U 
                                                                  & (vlSelfRef.top__DOT__rom_PC
                                                                     [vlSelfRef.top__DOT__PC] 
                                                                     >> 5U)))) 
                                                      << 4U)) 
                                                  | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_6)))
                                              : ((IData)(1U) 
                                                 + (IData)(vlSelfRef.top__DOT__PC))));
    vlSelfRef.top__DOT__add_result = (0x000000ffU & 
                                      ((IData)(vlSelfRef.top__DOT__i_GPR__DOT__douta) 
                                       + (IData)(vlSelfRef.top__DOT__R_led__DOT__din)));
    vlSelfRef.top__DOT__i_GPR__DOT__R0__DOT__din = 
        (0x000000ffU & (((1U == (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1)) 
                         & (IData)(vlSelfRef.top__DOT__io_in))
                         ? (0x0000000fU & (IData)(vlSelfRef.btn))
                         : (((0U == (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1)) 
                             & (IData)(vlSelfRef.top__DOT__io_in))
                             ? (0x0000000fU & (IData)(vlSelfRef.sw))
                             : ((2U == (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0))
                                 ? ((IData)(vlSelfRef.top__DOT__rs2) 
                                    << (IData)(vlSelfRef.top__DOT__rs1))
                                 : (IData)(vlSelfRef.top__DOT__add_result)))));
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
    vlSelf->seg0 = 0;
    vlSelf->seg1 = 0;
    vlSelf->seg2 = 255U;
    ;
    vlSelf->seg3 = 255U;
    ;
    vlSelf->seg4 = 255U;
    ;
    vlSelf->seg5 = 255U;
    ;
    vlSelf->seg6 = 255U;
    ;
    vlSelf->seg7 = 255U;
    ;
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        vlSelf->top__DOT__btn_p[__Vi0] = 0;
    }
    vlSelf->top__DOT____Vcellout__r_btn0____pinNumber4 = 0;
    vlSelf->top__DOT____Vcellout__r_btn1____pinNumber4 = 0;
    vlSelf->top__DOT____Vcellout__r_btn2____pinNumber4 = 0;
    vlSelf->top__DOT____Vcellout__r_btn3____pinNumber4 = 0;
    vlSelf->top__DOT____Vcellout__r_btn4____pinNumber4 = 0;
    for (int __Vi0 = 0; __Vi0 < 256; ++__Vi0) {
        vlSelf->top__DOT__rom_PC[__Vi0] = 0;
    }
    vlSelf->top__DOT__PC = 0;
    vlSelf->top__DOT__rs1 = 0;
    vlSelf->top__DOT__rs2 = 0;
    vlSelf->top__DOT__io_out = 0;
    vlSelf->top__DOT__io_in = 0;
    vlSelf->top__DOT__add_result = 0;
    vlSelf->top__DOT__io_led_r = 0;
    vlSelf->top__DOT__io_seg_r = 0;
    vlSelf->top__DOT__i_GPR__DOT__raddra = 0;
    vlSelf->top__DOT__i_GPR__DOT__raddrb = 0;
    vlSelf->top__DOT__i_GPR__DOT__waddr = 0;
    vlSelf->top__DOT__i_GPR__DOT__wen = 0;
    vlSelf->top__DOT__i_GPR__DOT__douta = 0;
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->top__DOT__i_GPR__DOT__GPR[__Vi0] = 0;
    }
    vlSelf->top__DOT__i_GPR__DOT____Vcellout__R3____pinNumber4 = 0;
    vlSelf->top__DOT__i_GPR__DOT____Vcellout__R2____pinNumber4 = 0;
    vlSelf->top__DOT__i_GPR__DOT____Vcellout__R1____pinNumber4 = 0;
    vlSelf->top__DOT__i_GPR__DOT____Vcellout__R0____pinNumber4 = 0;
    vlSelf->top__DOT__i_GPR__DOT__R0__DOT__din = 0;
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->top__DOT__i_GPR__DOT__sel_b__DOT__i0__DOT__pair_list[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->top__DOT__i_GPR__DOT__sel_b__DOT__i0__DOT__key_list[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->top__DOT__i_GPR__DOT__sel_b__DOT__i0__DOT__data_list[__Vi0] = 0;
    }
    vlSelf->top__DOT__i_GPR__DOT__sel_a__DOT__i0__DOT__lut = 0;
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->top__DOT__i_GPR__DOT__sel_a__DOT__i0__DOT__pair_list[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->top__DOT__i_GPR__DOT__sel_a__DOT__i0__DOT__key_list[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->top__DOT__i_GPR__DOT__sel_a__DOT__i0__DOT__data_list[__Vi0] = 0;
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
    vlSelf->top__DOT__ins_seg4__DOT__b = 0;
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->top__DOT__ins_seg4__DOT__i0__DOT__i0__DOT__pair_list[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->top__DOT__ins_seg4__DOT__i0__DOT__i0__DOT__key_list[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->top__DOT__ins_seg4__DOT__i0__DOT__i0__DOT__data_list[__Vi0] = 0;
    }
    vlSelf->top__DOT__ins_seg4__DOT__i0__DOT__i0__DOT__lut_out = 0;
    vlSelf->top__DOT__ins_seg5__DOT__b = 0;
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->top__DOT__ins_seg5__DOT__i0__DOT__i0__DOT__pair_list[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->top__DOT__ins_seg5__DOT__i0__DOT__i0__DOT__key_list[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->top__DOT__ins_seg5__DOT__i0__DOT__i0__DOT__data_list[__Vi0] = 0;
    }
    vlSelf->top__DOT__ins_seg5__DOT__i0__DOT__i0__DOT__lut_out = 0;
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
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->top__DOT__ins_seg0__DOT__i0__DOT__i0__DOT__pair_list[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->top__DOT__ins_seg0__DOT__i0__DOT__i0__DOT__key_list[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->top__DOT__ins_seg0__DOT__i0__DOT__i0__DOT__data_list[__Vi0] = 0;
    }
    vlSelf->top__DOT__ins_seg0__DOT__i0__DOT__i0__DOT__lut_out = 0;
    vlSelf->top__DOT__ins_seg0__DOT__i0__DOT__i0__DOT__hit = 0;
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->top__DOT__ins_seg1__DOT__i0__DOT__i0__DOT__pair_list[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->top__DOT__ins_seg1__DOT__i0__DOT__i0__DOT__key_list[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->top__DOT__ins_seg1__DOT__i0__DOT__i0__DOT__data_list[__Vi0] = 0;
    }
    vlSelf->top__DOT__ins_seg1__DOT__i0__DOT__i0__DOT__lut_out = 0;
    vlSelf->top__DOT__ins_seg1__DOT__i0__DOT__i0__DOT__hit = 0;
    vlSelf->top__DOT__R_led__DOT__din = 0;
    vlSelf->top__DOT__R_PC__DOT__rst = 0;
    vlSelf->top__DOT__R_PC__DOT__din = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_0 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_1 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_6 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_7 = 0;
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
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VnbaTriggered[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
