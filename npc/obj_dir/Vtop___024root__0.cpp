// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"

bool Vtop___024root___trigger_anySet__ico(const VlUnpacked<QData/*63:0*/, 2> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___trigger_anySet__ico\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        if (in[n]) {
            return (1U);
        }
        n = ((IData)(1U) + n);
    } while ((2U > n));
    return (0U);
}

void Vtop___024root___ico_sequent__TOP__1(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ico_sequent__TOP__1\n"); );
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

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__ico(const VlUnpacked<QData/*63:0*/, 2> &triggers, const std::string &tag);
#endif  // VL_DEBUG

bool Vtop___024root___eval_phase__ico(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_phase__ico\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VicoExecute;
    // Body
    {
        // Inlined CFunc: _eval_triggers_vec__ico
        vlSelfRef.__VicoTriggered[0U] = (QData)((IData)(
                                                        (((((IData)(vlSelfRef.uart_rx) 
                                                            != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__uart_rx__0)) 
                                                           << 6U) 
                                                          | ((((IData)(vlSelfRef.ps2_data) 
                                                               != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__ps2_data__0)) 
                                                              << 5U) 
                                                             | (((IData)(vlSelfRef.ps2_clk) 
                                                                 != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__ps2_clk__0)) 
                                                                << 4U))) 
                                                         | (((((IData)(vlSelfRef.sw) 
                                                               != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__sw__0)) 
                                                              << 3U) 
                                                             | (((IData)(vlSelfRef.btn) 
                                                                 != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__btn__0)) 
                                                                << 2U)) 
                                                            | ((((IData)(vlSelfRef.rst) 
                                                                 != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__rst__0)) 
                                                                << 1U) 
                                                               | ((IData)(vlSelfRef.clk) 
                                                                  != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__clk__0)))))));
        vlSelfRef.__Vtrigprevexpr___TOP__clk__0 = vlSelfRef.clk;
        vlSelfRef.__Vtrigprevexpr___TOP__rst__0 = vlSelfRef.rst;
        vlSelfRef.__Vtrigprevexpr___TOP__btn__0 = vlSelfRef.btn;
        vlSelfRef.__Vtrigprevexpr___TOP__sw__0 = vlSelfRef.sw;
        vlSelfRef.__Vtrigprevexpr___TOP__ps2_clk__0 
            = vlSelfRef.ps2_clk;
        vlSelfRef.__Vtrigprevexpr___TOP__ps2_data__0 
            = vlSelfRef.ps2_data;
        vlSelfRef.__Vtrigprevexpr___TOP__uart_rx__0 
            = vlSelfRef.uart_rx;
        if (VL_UNLIKELY(((1U & (~ (IData)(vlSelfRef.__VicoDidInit)))))) {
            vlSelfRef.__VicoDidInit = 1U;
            vlSelfRef.__VicoTriggered[0U] = (1ULL | vlSelfRef.__VicoTriggered[0U]);
            vlSelfRef.__VicoTriggered[0U] = (2ULL | vlSelfRef.__VicoTriggered[0U]);
            vlSelfRef.__VicoTriggered[0U] = (4ULL | vlSelfRef.__VicoTriggered[0U]);
            vlSelfRef.__VicoTriggered[0U] = (8ULL | vlSelfRef.__VicoTriggered[0U]);
            vlSelfRef.__VicoTriggered[0U] = (0x0000000000000010ULL 
                                             | vlSelfRef.__VicoTriggered[0U]);
            vlSelfRef.__VicoTriggered[0U] = (0x0000000000000020ULL 
                                             | vlSelfRef.__VicoTriggered[0U]);
            vlSelfRef.__VicoTriggered[0U] = (0x0000000000000040ULL 
                                             | vlSelfRef.__VicoTriggered[0U]);
        }
    }
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtop___024root___dump_triggers__ico(vlSelfRef.__VicoTriggered, "ico"s);
    }
#endif
    __VicoExecute = Vtop___024root___trigger_anySet__ico(vlSelfRef.__VicoTriggered);
    if (__VicoExecute) {
        {
            // Inlined CFunc: _eval_ico
            if ((4ULL & vlSelfRef.__VicoTriggered[0U])) {
                {
                    // Inlined CFunc: _ico_sequent__TOP__0
                    vlSelfRef.top__DOT__btn_pos = (
                                                   (~ (IData)(vlSelfRef.top__DOT__btn_p)) 
                                                   & (IData)(vlSelfRef.btn));
                }
            }
            if ((8ULL & vlSelfRef.__VicoTriggered[0U])) {
                Vtop___024root___ico_sequent__TOP__1(vlSelf);
            }
        }
    }
    return (__VicoExecute);
}

bool Vtop___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___trigger_anySet__act\n"); );
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

void Vtop___024root___nba_sequent__TOP__0(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__0\n"); );
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
    CData/*2:0*/ __Vdly__top__DOT__op;
    __Vdly__top__DOT__op = 0;
    // Body
    __Vdly__top__DOT__op = vlSelfRef.top__DOT__op;
    if (vlSelfRef.rst) {
        __Vdly__top__DOT__op = 0U;
        vlSelfRef.top__DOT__btn_p = 0U;
    } else {
        if ((IData)((0U != (0x15U & (IData)(vlSelfRef.top__DOT__btn_pos))))) {
            __Vdly__top__DOT__op = (7U & ((0x00000010U 
                                           & (IData)(vlSelfRef.top__DOT__btn_pos))
                                           ? ((IData)(1U) 
                                              + (IData)(vlSelfRef.top__DOT__op))
                                           : ((IData)(vlSelfRef.top__DOT__op) 
                                              - (1U 
                                                 & (IData)(vlSelfRef.top__DOT__btn_pos)))));
        }
        vlSelfRef.top__DOT__btn_p = vlSelfRef.btn;
    }
    vlSelfRef.top__DOT__op = __Vdly__top__DOT__op;
    vlSelfRef.ledr = ((0x0fffU & (IData)(vlSelfRef.ledr)) 
                      | (0x0000f000U & (((IData)(1U) 
                                         << (IData)(vlSelfRef.top__DOT__op)) 
                                        << 0x0000000cU)));
    top__DOT__n2_no_cin = (0x0000000fU & ((IData)(vlSelfRef.sw) 
                                          ^ (- (IData)(
                                                       (0U 
                                                        != (IData)(vlSelfRef.top__DOT__op))))));
    vlSelfRef.top__DOT__btn_pos = ((~ (IData)(vlSelfRef.top__DOT__btn_p)) 
                                   & (IData)(vlSelfRef.btn));
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

void Vtop___024root___trigger_orInto__act_vec_vec(VlUnpacked<QData/*63:0*/, 1> &out, const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___trigger_orInto__act_vec_vec\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = (out[n] | in[n]);
        n = ((IData)(1U) + n);
    } while ((0U >= n));
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG

bool Vtop___024root___eval_phase__act(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_phase__act\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    {
        // Inlined CFunc: _eval_triggers_vec__act
        vlSelfRef.__VactTriggered[0U] = (QData)((IData)(
                                                        ((IData)(vlSelfRef.clk) 
                                                         & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__clk__1)))));
        vlSelfRef.__Vtrigprevexpr___TOP__clk__1 = vlSelfRef.clk;
    }
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtop___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
    }
#endif
    Vtop___024root___trigger_orInto__act_vec_vec(vlSelfRef.__VnbaTriggered, vlSelfRef.__VactTriggered);
    return (0U);
}

void Vtop___024root___trigger_clear__act(VlUnpacked<QData/*63:0*/, 1> &out) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___trigger_clear__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = 0ULL;
        n = ((IData)(1U) + n);
    } while ((1U > n));
}

bool Vtop___024root___eval_phase__nba(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_phase__nba\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = Vtop___024root___trigger_anySet__act(vlSelfRef.__VnbaTriggered);
    if (__VnbaExecute) {
        {
            // Inlined CFunc: _eval_nba
            if ((1ULL & vlSelfRef.__VnbaTriggered[0U])) {
                Vtop___024root___nba_sequent__TOP__0(vlSelf);
            }
        }
        Vtop___024root___trigger_clear__act(vlSelfRef.__VnbaTriggered);
    }
    return (__VnbaExecute);
}

void Vtop___024root___eval(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VicoIterCount;
    IData/*31:0*/ __VnbaIterCount;
    // Body
    __VicoIterCount = 0U;
    do {
        if (VL_UNLIKELY(((0x00002710U < __VicoIterCount)))) {
#ifdef VL_DEBUG
            Vtop___024root___dump_triggers__ico(vlSelfRef.__VicoTriggered, "ico"s);
#endif
            VL_FATAL_MT("/home/devi/ysyx/ysyx-workbench/npc/vsrc/top_t3.v", 1, "", "DIDNOTCONVERGE: Input combinational region did not converge after '--converge-limit' of 10000 tries");
        }
        __VicoIterCount = ((IData)(1U) + __VicoIterCount);
        vlSelfRef.__VicoPhaseResult = Vtop___024root___eval_phase__ico(vlSelf);
    } while (vlSelfRef.__VicoPhaseResult);
    __VnbaIterCount = 0U;
    do {
        if (VL_UNLIKELY(((0x00002710U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            Vtop___024root___dump_triggers__act(vlSelfRef.__VnbaTriggered, "nba"s);
#endif
            VL_FATAL_MT("/home/devi/ysyx/ysyx-workbench/npc/vsrc/top_t3.v", 1, "", "DIDNOTCONVERGE: NBA region did not converge after '--converge-limit' of 10000 tries");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        vlSelfRef.__VactIterCount = 0U;
        do {
            if (VL_UNLIKELY(((0x00002710U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                Vtop___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
#endif
                VL_FATAL_MT("/home/devi/ysyx/ysyx-workbench/npc/vsrc/top_t3.v", 1, "", "DIDNOTCONVERGE: Active region did not converge after '--converge-limit' of 10000 tries");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactPhaseResult = Vtop___024root___eval_phase__act(vlSelf);
        } while (vlSelfRef.__VactPhaseResult);
        vlSelfRef.__VnbaPhaseResult = Vtop___024root___eval_phase__nba(vlSelf);
    } while (vlSelfRef.__VnbaPhaseResult);
}

#ifdef VL_DEBUG
void Vtop___024root___eval_debug_assertions(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_debug_assertions\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (VL_UNLIKELY(((vlSelfRef.clk & 0xfeU)))) {
        Verilated::overWidthError("clk");
    }
    if (VL_UNLIKELY(((vlSelfRef.rst & 0xfeU)))) {
        Verilated::overWidthError("rst");
    }
    if (VL_UNLIKELY(((vlSelfRef.btn & 0xe0U)))) {
        Verilated::overWidthError("btn");
    }
    if (VL_UNLIKELY(((vlSelfRef.ps2_clk & 0xfeU)))) {
        Verilated::overWidthError("ps2_clk");
    }
    if (VL_UNLIKELY(((vlSelfRef.ps2_data & 0xfeU)))) {
        Verilated::overWidthError("ps2_data");
    }
    if (VL_UNLIKELY(((vlSelfRef.uart_rx & 0xfeU)))) {
        Verilated::overWidthError("uart_rx");
    }
}
#endif  // VL_DEBUG
