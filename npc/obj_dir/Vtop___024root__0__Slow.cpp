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

VL_ATTR_COLD void Vtop___024root___eval_initial(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_initial\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
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
            VL_FATAL_MT("/home/devi/ysyx/ysyx-workbench/npc/vsrc/top_t3.v", 1, "", "DIDNOTCONVERGE: Settle region did not converge after '--converge-limit' of 10000 tries");
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
    CData/*0:0*/ top__DOT__f_carry;
    top__DOT__f_carry = 0;
    CData/*3:0*/ top__DOT__result;
    top__DOT__result = 0;
    CData/*3:0*/ top__DOT__res_op_add_sub;
    top__DOT__res_op_add_sub = 0;
    CData/*3:0*/ top__DOT__n2_no_cin;
    top__DOT__n2_no_cin = 0;
    CData/*3:0*/ top__DOT__num1_w1;
    top__DOT__num1_w1 = 0;
    CData/*3:0*/ top__DOT__num1_w0;
    top__DOT__num1_w0 = 0;
    CData/*3:0*/ top__DOT__num2_w1;
    top__DOT__num2_w1 = 0;
    CData/*3:0*/ top__DOT__num2_w0;
    top__DOT__num2_w0 = 0;
    CData/*3:0*/ top__DOT__res_w1;
    top__DOT__res_w1 = 0;
    CData/*3:0*/ top__DOT__res_w0;
    top__DOT__res_w0 = 0;
    CData/*1:0*/ __VdfgRegularize_h6e95ff9d_0_0;
    __VdfgRegularize_h6e95ff9d_0_0 = 0;
    // Body
    vlSelfRef.ledr = ((0x0fffU & (IData)(vlSelfRef.ledr)) 
                      | (0x0000f000U & (((IData)(1U) 
                                         << (IData)(vlSelfRef.top__DOT__op)) 
                                        << 0x0000000cU)));
    vlSelfRef.top__DOT__btn_pos = ((~ (IData)(vlSelfRef.top__DOT__btn_p)) 
                                   & (IData)(vlSelfRef.btn));
    top__DOT__n2_no_cin = (0x0000000fU & ((IData)(vlSelfRef.sw) 
                                          ^ (- (IData)(
                                                       (0U 
                                                        != (IData)(vlSelfRef.top__DOT__op))))));
    top__DOT__num2_w0 = (0x0000000fU & ((2U < (IData)(vlSelfRef.top__DOT__op))
                                         ? ((9U < (0x0000000fU 
                                                   & (IData)(vlSelfRef.sw)))
                                             ? ((IData)(vlSelfRef.sw) 
                                                - (IData)(0x0aU))
                                             : (IData)(vlSelfRef.sw))
                                         : ((8U & (IData)(vlSelfRef.sw))
                                             ? ((IData)(1U) 
                                                + (~ (IData)(vlSelfRef.sw)))
                                             : (IData)(vlSelfRef.sw))));
    vlSelfRef.seg4 = (0x000000ffU & (~ ((- (IData)(
                                                   ((0x0fU 
                                                     == (IData)(top__DOT__num2_w0)) 
                                                    | ((9U 
                                                        == (IData)(top__DOT__num2_w0)) 
                                                       | ((8U 
                                                           == (IData)(top__DOT__num2_w0)) 
                                                          | ((7U 
                                                              == (IData)(top__DOT__num2_w0)) 
                                                             | ((6U 
                                                                 == (IData)(top__DOT__num2_w0)) 
                                                                | ((5U 
                                                                    == (IData)(top__DOT__num2_w0)) 
                                                                   | ((4U 
                                                                       == (IData)(top__DOT__num2_w0)) 
                                                                      | ((3U 
                                                                          == (IData)(top__DOT__num2_w0)) 
                                                                         | ((2U 
                                                                             == (IData)(top__DOT__num2_w0)) 
                                                                            | ((0U 
                                                                                == (IData)(top__DOT__num2_w0)) 
                                                                               | (1U 
                                                                                == (IData)(top__DOT__num2_w0)))))))))))))) 
                                        & ((2U & (- (IData)(
                                                            (0x0fU 
                                                             == (IData)(top__DOT__num2_w0))))) 
                                           | ((0xf6U 
                                               & (- (IData)(
                                                            (9U 
                                                             == (IData)(top__DOT__num2_w0))))) 
                                              | ((0xfeU 
                                                  & (- (IData)(
                                                               (8U 
                                                                == (IData)(top__DOT__num2_w0))))) 
                                                 | ((0xe0U 
                                                     & (- (IData)(
                                                                  (7U 
                                                                   == (IData)(top__DOT__num2_w0))))) 
                                                    | ((0xbeU 
                                                        & (- (IData)(
                                                                     (6U 
                                                                      == (IData)(top__DOT__num2_w0))))) 
                                                       | ((0xb6U 
                                                           & (- (IData)(
                                                                        (5U 
                                                                         == (IData)(top__DOT__num2_w0))))) 
                                                          | ((0x66U 
                                                              & (- (IData)(
                                                                           (4U 
                                                                            == (IData)(top__DOT__num2_w0))))) 
                                                             | ((0xf2U 
                                                                 & (- (IData)(
                                                                              (3U 
                                                                               == (IData)(top__DOT__num2_w0))))) 
                                                                | ((0xdaU 
                                                                    & (- (IData)(
                                                                                (2U 
                                                                                == (IData)(top__DOT__num2_w0))))) 
                                                                   | ((0xfcU 
                                                                       & (- (IData)(
                                                                                (0U 
                                                                                == (IData)(top__DOT__num2_w0))))) 
                                                                      | (0x60U 
                                                                         & (- (IData)(
                                                                                (1U 
                                                                                == (IData)(top__DOT__num2_w0))))))))))))))))));
    top__DOT__num2_w1 = (0x0000000fU & ((2U < (IData)(vlSelfRef.top__DOT__op))
                                         ? (9U < (0x0000000fU 
                                                  & (IData)(vlSelfRef.sw)))
                                         : (0x0eU | 
                                            (- (IData)(
                                                       (1U 
                                                        & ((IData)(vlSelfRef.sw) 
                                                           >> 3U)))))));
    vlSelfRef.seg5 = (0x000000ffU & (~ ((- (IData)(
                                                   ((0x0fU 
                                                     == (IData)(top__DOT__num2_w1)) 
                                                    | ((9U 
                                                        == (IData)(top__DOT__num2_w1)) 
                                                       | ((8U 
                                                           == (IData)(top__DOT__num2_w1)) 
                                                          | ((7U 
                                                              == (IData)(top__DOT__num2_w1)) 
                                                             | ((6U 
                                                                 == (IData)(top__DOT__num2_w1)) 
                                                                | ((5U 
                                                                    == (IData)(top__DOT__num2_w1)) 
                                                                   | ((4U 
                                                                       == (IData)(top__DOT__num2_w1)) 
                                                                      | ((3U 
                                                                          == (IData)(top__DOT__num2_w1)) 
                                                                         | ((2U 
                                                                             == (IData)(top__DOT__num2_w1)) 
                                                                            | ((0U 
                                                                                == (IData)(top__DOT__num2_w1)) 
                                                                               | (1U 
                                                                                == (IData)(top__DOT__num2_w1)))))))))))))) 
                                        & ((2U & (- (IData)(
                                                            (0x0fU 
                                                             == (IData)(top__DOT__num2_w1))))) 
                                           | ((0xf6U 
                                               & (- (IData)(
                                                            (9U 
                                                             == (IData)(top__DOT__num2_w1))))) 
                                              | ((0xfeU 
                                                  & (- (IData)(
                                                               (8U 
                                                                == (IData)(top__DOT__num2_w1))))) 
                                                 | ((0xe0U 
                                                     & (- (IData)(
                                                                  (7U 
                                                                   == (IData)(top__DOT__num2_w1))))) 
                                                    | ((0xbeU 
                                                        & (- (IData)(
                                                                     (6U 
                                                                      == (IData)(top__DOT__num2_w1))))) 
                                                       | ((0xb6U 
                                                           & (- (IData)(
                                                                        (5U 
                                                                         == (IData)(top__DOT__num2_w1))))) 
                                                          | ((0x66U 
                                                              & (- (IData)(
                                                                           (4U 
                                                                            == (IData)(top__DOT__num2_w1))))) 
                                                             | ((0xf2U 
                                                                 & (- (IData)(
                                                                              (3U 
                                                                               == (IData)(top__DOT__num2_w1))))) 
                                                                | ((0xdaU 
                                                                    & (- (IData)(
                                                                                (2U 
                                                                                == (IData)(top__DOT__num2_w1))))) 
                                                                   | ((0xfcU 
                                                                       & (- (IData)(
                                                                                (0U 
                                                                                == (IData)(top__DOT__num2_w1))))) 
                                                                      | (0x60U 
                                                                         & (- (IData)(
                                                                                (1U 
                                                                                == (IData)(top__DOT__num2_w1))))))))))))))))));
    top__DOT__num1_w0 = (0x0000000fU & ((2U < (IData)(vlSelfRef.top__DOT__op))
                                         ? ((9U < (0x0000000fU 
                                                   & ((IData)(vlSelfRef.sw) 
                                                      >> 4U)))
                                             ? (((IData)(vlSelfRef.sw) 
                                                 >> 4U) 
                                                - (IData)(0x0aU))
                                             : ((IData)(vlSelfRef.sw) 
                                                >> 4U))
                                         : ((0x00000080U 
                                             & (IData)(vlSelfRef.sw))
                                             ? ((IData)(1U) 
                                                + (~ 
                                                   ((IData)(vlSelfRef.sw) 
                                                    >> 4U)))
                                             : ((IData)(vlSelfRef.sw) 
                                                >> 4U))));
    vlSelfRef.seg6 = (0x000000ffU & (~ ((- (IData)(
                                                   ((0x0fU 
                                                     == (IData)(top__DOT__num1_w0)) 
                                                    | ((9U 
                                                        == (IData)(top__DOT__num1_w0)) 
                                                       | ((8U 
                                                           == (IData)(top__DOT__num1_w0)) 
                                                          | ((7U 
                                                              == (IData)(top__DOT__num1_w0)) 
                                                             | ((6U 
                                                                 == (IData)(top__DOT__num1_w0)) 
                                                                | ((5U 
                                                                    == (IData)(top__DOT__num1_w0)) 
                                                                   | ((4U 
                                                                       == (IData)(top__DOT__num1_w0)) 
                                                                      | ((3U 
                                                                          == (IData)(top__DOT__num1_w0)) 
                                                                         | ((2U 
                                                                             == (IData)(top__DOT__num1_w0)) 
                                                                            | ((0U 
                                                                                == (IData)(top__DOT__num1_w0)) 
                                                                               | (1U 
                                                                                == (IData)(top__DOT__num1_w0)))))))))))))) 
                                        & ((2U & (- (IData)(
                                                            (0x0fU 
                                                             == (IData)(top__DOT__num1_w0))))) 
                                           | ((0xf6U 
                                               & (- (IData)(
                                                            (9U 
                                                             == (IData)(top__DOT__num1_w0))))) 
                                              | ((0xfeU 
                                                  & (- (IData)(
                                                               (8U 
                                                                == (IData)(top__DOT__num1_w0))))) 
                                                 | ((0xe0U 
                                                     & (- (IData)(
                                                                  (7U 
                                                                   == (IData)(top__DOT__num1_w0))))) 
                                                    | ((0xbeU 
                                                        & (- (IData)(
                                                                     (6U 
                                                                      == (IData)(top__DOT__num1_w0))))) 
                                                       | ((0xb6U 
                                                           & (- (IData)(
                                                                        (5U 
                                                                         == (IData)(top__DOT__num1_w0))))) 
                                                          | ((0x66U 
                                                              & (- (IData)(
                                                                           (4U 
                                                                            == (IData)(top__DOT__num1_w0))))) 
                                                             | ((0xf2U 
                                                                 & (- (IData)(
                                                                              (3U 
                                                                               == (IData)(top__DOT__num1_w0))))) 
                                                                | ((0xdaU 
                                                                    & (- (IData)(
                                                                                (2U 
                                                                                == (IData)(top__DOT__num1_w0))))) 
                                                                   | ((0xfcU 
                                                                       & (- (IData)(
                                                                                (0U 
                                                                                == (IData)(top__DOT__num1_w0))))) 
                                                                      | (0x60U 
                                                                         & (- (IData)(
                                                                                (1U 
                                                                                == (IData)(top__DOT__num1_w0))))))))))))))))));
    top__DOT__num1_w1 = (0x0000000fU & ((2U < (IData)(vlSelfRef.top__DOT__op))
                                         ? (9U < (0x0000000fU 
                                                  & ((IData)(vlSelfRef.sw) 
                                                     >> 4U)))
                                         : (0x0eU | 
                                            (- (IData)(
                                                       (1U 
                                                        & ((IData)(vlSelfRef.sw) 
                                                           >> 7U)))))));
    vlSelfRef.seg7 = (0x000000ffU & (~ ((- (IData)(
                                                   ((0x0fU 
                                                     == (IData)(top__DOT__num1_w1)) 
                                                    | ((9U 
                                                        == (IData)(top__DOT__num1_w1)) 
                                                       | ((8U 
                                                           == (IData)(top__DOT__num1_w1)) 
                                                          | ((7U 
                                                              == (IData)(top__DOT__num1_w1)) 
                                                             | ((6U 
                                                                 == (IData)(top__DOT__num1_w1)) 
                                                                | ((5U 
                                                                    == (IData)(top__DOT__num1_w1)) 
                                                                   | ((4U 
                                                                       == (IData)(top__DOT__num1_w1)) 
                                                                      | ((3U 
                                                                          == (IData)(top__DOT__num1_w1)) 
                                                                         | ((2U 
                                                                             == (IData)(top__DOT__num1_w1)) 
                                                                            | ((0U 
                                                                                == (IData)(top__DOT__num1_w1)) 
                                                                               | (1U 
                                                                                == (IData)(top__DOT__num1_w1)))))))))))))) 
                                        & ((2U & (- (IData)(
                                                            (0x0fU 
                                                             == (IData)(top__DOT__num1_w1))))) 
                                           | ((0xf6U 
                                               & (- (IData)(
                                                            (9U 
                                                             == (IData)(top__DOT__num1_w1))))) 
                                              | ((0xfeU 
                                                  & (- (IData)(
                                                               (8U 
                                                                == (IData)(top__DOT__num1_w1))))) 
                                                 | ((0xe0U 
                                                     & (- (IData)(
                                                                  (7U 
                                                                   == (IData)(top__DOT__num1_w1))))) 
                                                    | ((0xbeU 
                                                        & (- (IData)(
                                                                     (6U 
                                                                      == (IData)(top__DOT__num1_w1))))) 
                                                       | ((0xb6U 
                                                           & (- (IData)(
                                                                        (5U 
                                                                         == (IData)(top__DOT__num1_w1))))) 
                                                          | ((0x66U 
                                                              & (- (IData)(
                                                                           (4U 
                                                                            == (IData)(top__DOT__num1_w1))))) 
                                                             | ((0xf2U 
                                                                 & (- (IData)(
                                                                              (3U 
                                                                               == (IData)(top__DOT__num1_w1))))) 
                                                                | ((0xdaU 
                                                                    & (- (IData)(
                                                                                (2U 
                                                                                == (IData)(top__DOT__num1_w1))))) 
                                                                   | ((0xfcU 
                                                                       & (- (IData)(
                                                                                (0U 
                                                                                == (IData)(top__DOT__num1_w1))))) 
                                                                      | (0x60U 
                                                                         & (- (IData)(
                                                                                (1U 
                                                                                == (IData)(top__DOT__num1_w1))))))))))))))))));
    top__DOT__f_carry = (1U & (((0x0000000fU & ((IData)(vlSelfRef.sw) 
                                                >> 4U)) 
                                + ((0U != (IData)(vlSelfRef.top__DOT__op)) 
                                   + (IData)(top__DOT__n2_no_cin))) 
                               >> 4U));
    top__DOT__res_op_add_sub = (0x0000000fU & (((IData)(vlSelfRef.sw) 
                                                >> 4U) 
                                               + ((0U 
                                                   != (IData)(vlSelfRef.top__DOT__op)) 
                                                  + (IData)(top__DOT__n2_no_cin))));
    vlSelfRef.seg2 = (0x000000ffU & (~ ((0xfcU & (- (IData)(
                                                            (1U 
                                                             & (~ (IData)(top__DOT__f_carry)))))) 
                                        | (0x60U & 
                                           (- (IData)((IData)(top__DOT__f_carry)))))));
    top__DOT__result = (0x0000000fU & ((- (IData)((
                                                   (7U 
                                                    == (IData)(vlSelfRef.top__DOT__op)) 
                                                   | ((6U 
                                                       == (IData)(vlSelfRef.top__DOT__op)) 
                                                      | ((5U 
                                                          == (IData)(vlSelfRef.top__DOT__op)) 
                                                         | ((4U 
                                                             == (IData)(vlSelfRef.top__DOT__op)) 
                                                            | ((3U 
                                                                == (IData)(vlSelfRef.top__DOT__op)) 
                                                               | ((2U 
                                                                   == (IData)(vlSelfRef.top__DOT__op)) 
                                                                  | ((1U 
                                                                      == (IData)(vlSelfRef.top__DOT__op)) 
                                                                     | (0U 
                                                                        == (IData)(vlSelfRef.top__DOT__op))))))))))) 
                                       & (((- (IData)(
                                                      (7U 
                                                       == (IData)(vlSelfRef.top__DOT__op)))) 
                                           & ((0x0000000fU 
                                               & ((IData)(vlSelfRef.sw) 
                                                  >> 4U)) 
                                              == (0x0000000fU 
                                                  & (IData)(vlSelfRef.sw)))) 
                                          | (((- (IData)(
                                                         (6U 
                                                          == (IData)(vlSelfRef.top__DOT__op)))) 
                                              & ((0x0000000fU 
                                                  & ((IData)(vlSelfRef.sw) 
                                                     >> 4U)) 
                                                 < 
                                                 (0x0000000fU 
                                                  & (IData)(vlSelfRef.sw)))) 
                                             | (((((IData)(vlSelfRef.sw) 
                                                   >> 4U) 
                                                  ^ (IData)(vlSelfRef.sw)) 
                                                 & (- (IData)(
                                                              (5U 
                                                               == (IData)(vlSelfRef.top__DOT__op))))) 
                                                | (((((IData)(vlSelfRef.sw) 
                                                      >> 4U) 
                                                     | (IData)(vlSelfRef.sw)) 
                                                    & (- (IData)(
                                                                 (4U 
                                                                  == (IData)(vlSelfRef.top__DOT__op))))) 
                                                   | ((((IData)(vlSelfRef.sw) 
                                                        >> 4U) 
                                                       & ((IData)(vlSelfRef.sw) 
                                                          & (- (IData)(
                                                                       (3U 
                                                                        == (IData)(vlSelfRef.top__DOT__op)))))) 
                                                      | (((~ 
                                                           ((IData)(vlSelfRef.sw) 
                                                            >> 4U)) 
                                                          & (- (IData)(
                                                                       (2U 
                                                                        == (IData)(vlSelfRef.top__DOT__op))))) 
                                                         | (((- (IData)(
                                                                        (1U 
                                                                         == (IData)(vlSelfRef.top__DOT__op)))) 
                                                             | (- (IData)(
                                                                          (0U 
                                                                           == (IData)(vlSelfRef.top__DOT__op))))) 
                                                            & (IData)(top__DOT__res_op_add_sub))))))))));
    if ((2U < (IData)(vlSelfRef.top__DOT__op))) {
        top__DOT__res_w0 = (0x0000000fU & ((9U < (IData)(top__DOT__result))
                                            ? ((IData)(top__DOT__result) 
                                               - (IData)(0x0aU))
                                            : (IData)(top__DOT__result)));
        top__DOT__res_w1 = (0x0000000fU & (9U < (IData)(top__DOT__result)));
    } else {
        top__DOT__res_w0 = (0x0000000fU & ((8U & (IData)(top__DOT__result))
                                            ? ((IData)(1U) 
                                               + (~ (IData)(top__DOT__result)))
                                            : (IData)(top__DOT__result)));
        top__DOT__res_w1 = (0x0000000fU & (0x0eU | 
                                           (- (IData)(
                                                      (1U 
                                                       & ((IData)(top__DOT__result) 
                                                          >> 3U))))));
    }
    __VdfgRegularize_h6e95ff9d_0_0 = ((2U & ((~ (0U 
                                                 != (IData)(top__DOT__result))) 
                                             << 1U)) 
                                      | (((1U & ((IData)(top__DOT__res_op_add_sub) 
                                                 >> 3U)) 
                                          != (1U & 
                                              ((IData)(vlSelfRef.sw) 
                                               >> 7U))) 
                                         & ((1U & ((IData)(top__DOT__n2_no_cin) 
                                                   >> 3U)) 
                                            == (1U 
                                                & ((IData)(vlSelfRef.sw) 
                                                   >> 7U)))));
    vlSelfRef.seg0 = (0x000000ffU & (~ ((- (IData)(
                                                   ((0x0fU 
                                                     == (IData)(top__DOT__res_w0)) 
                                                    | ((9U 
                                                        == (IData)(top__DOT__res_w0)) 
                                                       | ((8U 
                                                           == (IData)(top__DOT__res_w0)) 
                                                          | ((7U 
                                                              == (IData)(top__DOT__res_w0)) 
                                                             | ((6U 
                                                                 == (IData)(top__DOT__res_w0)) 
                                                                | ((5U 
                                                                    == (IData)(top__DOT__res_w0)) 
                                                                   | ((4U 
                                                                       == (IData)(top__DOT__res_w0)) 
                                                                      | ((3U 
                                                                          == (IData)(top__DOT__res_w0)) 
                                                                         | ((2U 
                                                                             == (IData)(top__DOT__res_w0)) 
                                                                            | ((0U 
                                                                                == (IData)(top__DOT__res_w0)) 
                                                                               | (1U 
                                                                                == (IData)(top__DOT__res_w0)))))))))))))) 
                                        & ((2U & (- (IData)(
                                                            (0x0fU 
                                                             == (IData)(top__DOT__res_w0))))) 
                                           | ((0xf6U 
                                               & (- (IData)(
                                                            (9U 
                                                             == (IData)(top__DOT__res_w0))))) 
                                              | ((0xfeU 
                                                  & (- (IData)(
                                                               (8U 
                                                                == (IData)(top__DOT__res_w0))))) 
                                                 | ((0xe0U 
                                                     & (- (IData)(
                                                                  (7U 
                                                                   == (IData)(top__DOT__res_w0))))) 
                                                    | ((0xbeU 
                                                        & (- (IData)(
                                                                     (6U 
                                                                      == (IData)(top__DOT__res_w0))))) 
                                                       | ((0xb6U 
                                                           & (- (IData)(
                                                                        (5U 
                                                                         == (IData)(top__DOT__res_w0))))) 
                                                          | ((0x66U 
                                                              & (- (IData)(
                                                                           (4U 
                                                                            == (IData)(top__DOT__res_w0))))) 
                                                             | ((0xf2U 
                                                                 & (- (IData)(
                                                                              (3U 
                                                                               == (IData)(top__DOT__res_w0))))) 
                                                                | ((0xdaU 
                                                                    & (- (IData)(
                                                                                (2U 
                                                                                == (IData)(top__DOT__res_w0))))) 
                                                                   | ((0xfcU 
                                                                       & (- (IData)(
                                                                                (0U 
                                                                                == (IData)(top__DOT__res_w0))))) 
                                                                      | (0x60U 
                                                                         & (- (IData)(
                                                                                (1U 
                                                                                == (IData)(top__DOT__res_w0))))))))))))))))));
    vlSelfRef.seg1 = (0x000000ffU & (~ ((- (IData)(
                                                   ((0x0fU 
                                                     == (IData)(top__DOT__res_w1)) 
                                                    | ((9U 
                                                        == (IData)(top__DOT__res_w1)) 
                                                       | ((8U 
                                                           == (IData)(top__DOT__res_w1)) 
                                                          | ((7U 
                                                              == (IData)(top__DOT__res_w1)) 
                                                             | ((6U 
                                                                 == (IData)(top__DOT__res_w1)) 
                                                                | ((5U 
                                                                    == (IData)(top__DOT__res_w1)) 
                                                                   | ((4U 
                                                                       == (IData)(top__DOT__res_w1)) 
                                                                      | ((3U 
                                                                          == (IData)(top__DOT__res_w1)) 
                                                                         | ((2U 
                                                                             == (IData)(top__DOT__res_w1)) 
                                                                            | ((0U 
                                                                                == (IData)(top__DOT__res_w1)) 
                                                                               | (1U 
                                                                                == (IData)(top__DOT__res_w1)))))))))))))) 
                                        & ((2U & (- (IData)(
                                                            (0x0fU 
                                                             == (IData)(top__DOT__res_w1))))) 
                                           | ((0xf6U 
                                               & (- (IData)(
                                                            (9U 
                                                             == (IData)(top__DOT__res_w1))))) 
                                              | ((0xfeU 
                                                  & (- (IData)(
                                                               (8U 
                                                                == (IData)(top__DOT__res_w1))))) 
                                                 | ((0xe0U 
                                                     & (- (IData)(
                                                                  (7U 
                                                                   == (IData)(top__DOT__res_w1))))) 
                                                    | ((0xbeU 
                                                        & (- (IData)(
                                                                     (6U 
                                                                      == (IData)(top__DOT__res_w1))))) 
                                                       | ((0xb6U 
                                                           & (- (IData)(
                                                                        (5U 
                                                                         == (IData)(top__DOT__res_w1))))) 
                                                          | ((0x66U 
                                                              & (- (IData)(
                                                                           (4U 
                                                                            == (IData)(top__DOT__res_w1))))) 
                                                             | ((0xf2U 
                                                                 & (- (IData)(
                                                                              (3U 
                                                                               == (IData)(top__DOT__res_w1))))) 
                                                                | ((0xdaU 
                                                                    & (- (IData)(
                                                                                (2U 
                                                                                == (IData)(top__DOT__res_w1))))) 
                                                                   | ((0xfcU 
                                                                       & (- (IData)(
                                                                                (0U 
                                                                                == (IData)(top__DOT__res_w1))))) 
                                                                      | (0x60U 
                                                                         & (- (IData)(
                                                                                (1U 
                                                                                == (IData)(top__DOT__res_w1))))))))))))))))));
    vlSelfRef.seg3 = (0x000000ffU & (~ ((- (IData)(
                                                   ((3U 
                                                     == (IData)(__VdfgRegularize_h6e95ff9d_0_0)) 
                                                    | ((2U 
                                                        == (IData)(__VdfgRegularize_h6e95ff9d_0_0)) 
                                                       | ((1U 
                                                           == (IData)(__VdfgRegularize_h6e95ff9d_0_0)) 
                                                          | (0U 
                                                             == (IData)(__VdfgRegularize_h6e95ff9d_0_0))))))) 
                                        & ((0xf2U & 
                                            (- (IData)(
                                                       (3U 
                                                        == (IData)(__VdfgRegularize_h6e95ff9d_0_0))))) 
                                           | ((0xdaU 
                                               & (- (IData)(
                                                            (2U 
                                                             == (IData)(__VdfgRegularize_h6e95ff9d_0_0))))) 
                                              | ((0xfcU 
                                                  & (- (IData)(
                                                               (0U 
                                                                == (IData)(__VdfgRegularize_h6e95ff9d_0_0))))) 
                                                 | (0x60U 
                                                    & (- (IData)(
                                                                 (1U 
                                                                  == (IData)(__VdfgRegularize_h6e95ff9d_0_0)))))))))));
    vlSelfRef.ledr = ((0xff80U & (IData)(vlSelfRef.ledr)) 
                      | (((IData)(__VdfgRegularize_h6e95ff9d_0_0) 
                          << 5U) | (((IData)(top__DOT__f_carry) 
                                     << 4U) | (IData)(top__DOT__result))));
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
    vlSelf->seg2 = 0;
    vlSelf->seg3 = 0;
    vlSelf->seg4 = 0;
    vlSelf->seg5 = 0;
    vlSelf->seg6 = 0;
    vlSelf->seg7 = 0;
    vlSelf->top__DOT__btn_p = 0;
    vlSelf->top__DOT__btn_pos = 0;
    vlSelf->top__DOT__op = 0;
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
}
