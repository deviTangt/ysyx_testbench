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
            if ((0x000000000000000aULL & vlSelfRef.__VicoTriggered[0U])) {
                {
                    // Inlined CFunc: _ico_comb__TOP__0
                    vlSelfRef.top__DOT__R_PC__DOT__rst 
                        = ((IData)(vlSelfRef.rst) | 
                           ((IData)(vlSelfRef.sw) >> 0x0000000fU));
                }
            }
            if ((0x000000000000000cULL & vlSelfRef.__VicoTriggered[0U])) {
                {
                    // Inlined CFunc: _ico_comb__TOP__1
                    vlSelfRef.top__DOT__i_GPR__DOT__R0__DOT__din 
                        = (0x000000ffU & (((1U == (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1)) 
                                           & (IData)(vlSelfRef.top__DOT__io_in))
                                           ? (0x0000000fU 
                                              & (IData)(vlSelfRef.btn))
                                           : (((0U 
                                                == (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1)) 
                                               & (IData)(vlSelfRef.top__DOT__io_in))
                                               ? (0x0000000fU 
                                                  & (IData)(vlSelfRef.sw))
                                               : ((2U 
                                                   == (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0))
                                                   ? 
                                                  ((IData)(vlSelfRef.top__DOT__rs2) 
                                                   << (IData)(vlSelfRef.top__DOT__rs1))
                                                   : (IData)(vlSelfRef.top__DOT__add_result)))));
                }
            }
            if ((0x000000000000000bULL & vlSelfRef.__VicoTriggered[0U])) {
                {
                    // Inlined CFunc: _ico_comb__TOP__2
                    vlSelfRef.ledr = ((0x3fffU & (IData)(vlSelfRef.ledr)) 
                                      | (((IData)(vlSelfRef.clk) 
                                          << 0x0000000fU) 
                                         | ((IData)(vlSelfRef.top__DOT__R_PC__DOT__rst) 
                                            << 0x0000000eU)));
                }
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
    // Body
    if (((0x10U > (IData)(vlSelfRef.top__DOT__PC)) 
         & (~ (IData)(vlSelfRef.rst)))) {
        if ((2U & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0))) {
            if ((1U & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0))) {
                VL_WRITEF_NX("%02d: %08b  %02x  bner0 rs2 offset\n               |  bner0 r%1d  %6d (%3d - %3d : PC -> %2d)\n",8
                             , '#',8,vlSelfRef.top__DOT__PC
                             , '#',8,vlSelfRef.top__DOT__rom_PC
                             [vlSelfRef.top__DOT__PC]
                             , '#',8,vlSelfRef.top__DOT__rom_PC
                             [vlSelfRef.top__DOT__PC]
                             , '#',2,vlSelfRef.top__DOT__rs2
                             , '~',4,(IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_6)
                             , '#',8,(IData)(vlSelfRef.top__DOT__i_GPR__DOT__douta)
                             , '#',8,vlSelfRef.top__DOT__R_led__DOT__din
                             , '#',8,(IData)(vlSelfRef.top__DOT__R_PC__DOT__din));
            } else {
                VL_WRITEF_NX("%02d: %08b  %02x  li rd imm << s\n               |  li r%1d %3d << %1d (r%1d -> %3d)\n",8
                             , '#',8,vlSelfRef.top__DOT__PC
                             , '#',8,vlSelfRef.top__DOT__rom_PC
                             [vlSelfRef.top__DOT__PC]
                             , '#',8,vlSelfRef.top__DOT__rom_PC
                             [vlSelfRef.top__DOT__PC]
                             , '#',2,vlSelfRef.top__DOT__i_GPR__DOT__waddr
                             , '#',2,(IData)(vlSelfRef.top__DOT__rs2)
                             , '#',2,vlSelfRef.top__DOT__rs1
                             , '#',2,(IData)(vlSelfRef.top__DOT__i_GPR__DOT__waddr)
                             , '#',2,(3U & ((IData)(vlSelfRef.top__DOT__rs2) 
                                            << (IData)(vlSelfRef.top__DOT__rs1))));
            }
        } else if (VL_LIKELY(((1U & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0))))) {
            if (vlSelfRef.top__DOT__io_out) {
                VL_WRITEF_NX("%02d: %08b  %02x  io out rd -> dev[idx]\n               |  io out r%1d -> dev[%03b] (dev[%03b] = %3d)\n",7
                             , '#',8,vlSelfRef.top__DOT__PC
                             , '#',8,vlSelfRef.top__DOT__rom_PC
                             [vlSelfRef.top__DOT__PC]
                             , '#',8,vlSelfRef.top__DOT__rom_PC
                             [vlSelfRef.top__DOT__PC]
                             , '#',2,vlSelfRef.top__DOT__i_GPR__DOT__waddr
                             , '#',3,(IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1)
                             , '#',3,vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1
                             , '#',8,(IData)(vlSelfRef.top__DOT__R_led__DOT__din));
            } else {
                VL_WRITEF_NX("%02d: %08b  %02x  io in  dev[idx] -> rd\n               |  io in  dev[%03b] -> r%1d (rd = %3d)\n",6
                             , '#',8,vlSelfRef.top__DOT__PC
                             , '#',8,vlSelfRef.top__DOT__rom_PC
                             [vlSelfRef.top__DOT__PC]
                             , '#',8,vlSelfRef.top__DOT__rom_PC
                             [vlSelfRef.top__DOT__PC]
                             , '#',3,vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1
                             , '#',2,(IData)(vlSelfRef.top__DOT__i_GPR__DOT__waddr)
                             , '#',8,vlSelfRef.top__DOT__i_GPR__DOT__R0__DOT__din);
            }
        } else {
            VL_WRITEF_NX("%02d: %08b  %02x  add rd rs1 rs2\n               |  add r%1d r%1d  r%1d (r%1d -> %3d)\n",8
                         , '#',8,vlSelfRef.top__DOT__PC
                         , '#',8,vlSelfRef.top__DOT__rom_PC
                         [vlSelfRef.top__DOT__PC], '#',8,vlSelfRef.top__DOT__rom_PC
                         [vlSelfRef.top__DOT__PC], '#',2,vlSelfRef.top__DOT__i_GPR__DOT__waddr
                         , '#',2,(IData)(vlSelfRef.top__DOT__rs1)
                         , '#',2,vlSelfRef.top__DOT__rs2
                         , '#',2,(IData)(vlSelfRef.top__DOT__i_GPR__DOT__waddr)
                         , '#',8,vlSelfRef.top__DOT__add_result);
        }
    }
    if (vlSelfRef.top__DOT__R_PC__DOT__rst) {
        vlSelfRef.top__DOT__io_led_r = 0U;
        vlSelfRef.top__DOT__io_seg_r = 0U;
        vlSelfRef.top__DOT__i_GPR__DOT____Vcellout__R1____pinNumber4 = 0U;
        vlSelfRef.top__DOT__i_GPR__DOT____Vcellout__R2____pinNumber4 = 0U;
        vlSelfRef.top__DOT__i_GPR__DOT____Vcellout__R0____pinNumber4 = 0U;
        vlSelfRef.top__DOT__i_GPR__DOT____Vcellout__R3____pinNumber4 = 0U;
        vlSelfRef.top__DOT__PC = 0U;
    } else {
        if (((0U == (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1)) 
             & (IData)(vlSelfRef.top__DOT__io_out))) {
            vlSelfRef.top__DOT__io_led_r = vlSelfRef.top__DOT__R_led__DOT__din;
        }
        if (((1U == (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1)) 
             & (IData)(vlSelfRef.top__DOT__io_out))) {
            vlSelfRef.top__DOT__io_seg_r = vlSelfRef.top__DOT__R_led__DOT__din;
        }
        if (((1U == (IData)(vlSelfRef.top__DOT__i_GPR__DOT__waddr)) 
             & (IData)(vlSelfRef.top__DOT__i_GPR__DOT__wen))) {
            vlSelfRef.top__DOT__i_GPR__DOT____Vcellout__R1____pinNumber4 
                = vlSelfRef.top__DOT__i_GPR__DOT__R0__DOT__din;
        }
        if (((2U == (IData)(vlSelfRef.top__DOT__i_GPR__DOT__waddr)) 
             & (IData)(vlSelfRef.top__DOT__i_GPR__DOT__wen))) {
            vlSelfRef.top__DOT__i_GPR__DOT____Vcellout__R2____pinNumber4 
                = vlSelfRef.top__DOT__i_GPR__DOT__R0__DOT__din;
        }
        if (((0U == (IData)(vlSelfRef.top__DOT__i_GPR__DOT__waddr)) 
             & (IData)(vlSelfRef.top__DOT__i_GPR__DOT__wen))) {
            vlSelfRef.top__DOT__i_GPR__DOT____Vcellout__R0____pinNumber4 
                = vlSelfRef.top__DOT__i_GPR__DOT__R0__DOT__din;
        }
        if (((3U == (IData)(vlSelfRef.top__DOT__i_GPR__DOT__waddr)) 
             & (IData)(vlSelfRef.top__DOT__i_GPR__DOT__wen))) {
            vlSelfRef.top__DOT__i_GPR__DOT____Vcellout__R3____pinNumber4 
                = vlSelfRef.top__DOT__i_GPR__DOT__R0__DOT__din;
        }
        vlSelfRef.top__DOT__PC = vlSelfRef.top__DOT__R_PC__DOT__din;
    }
    if (vlSelfRef.rst) {
        vlSelfRef.top__DOT____Vcellout__r_btn4____pinNumber4 = 0U;
        vlSelfRef.top__DOT____Vcellout__r_btn3____pinNumber4 = 0U;
        vlSelfRef.top__DOT____Vcellout__r_btn2____pinNumber4 = 0U;
        vlSelfRef.top__DOT____Vcellout__r_btn1____pinNumber4 = 0U;
        vlSelfRef.top__DOT____Vcellout__r_btn0____pinNumber4 = 0U;
    } else {
        vlSelfRef.top__DOT____Vcellout__r_btn4____pinNumber4 
            = vlSelfRef.top__DOT____Vcellout__r_btn3____pinNumber4;
        vlSelfRef.top__DOT____Vcellout__r_btn3____pinNumber4 
            = vlSelfRef.top__DOT____Vcellout__r_btn2____pinNumber4;
        vlSelfRef.top__DOT____Vcellout__r_btn2____pinNumber4 
            = vlSelfRef.top__DOT____Vcellout__r_btn1____pinNumber4;
        vlSelfRef.top__DOT____Vcellout__r_btn1____pinNumber4 
            = vlSelfRef.top__DOT____Vcellout__r_btn0____pinNumber4;
        vlSelfRef.top__DOT____Vcellout__r_btn0____pinNumber4 
            = vlSelfRef.btn;
    }
    vlSelfRef.ledr = ((0xff00U & (IData)(vlSelfRef.ledr)) 
                      | (IData)(vlSelfRef.top__DOT__io_led_r));
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
    vlSelfRef.top__DOT__btn_p[4U] = vlSelfRef.top__DOT____Vcellout__r_btn4____pinNumber4;
    vlSelfRef.top__DOT__i_GPR__DOT__GPR[1U] = vlSelfRef.top__DOT__i_GPR__DOT____Vcellout__R1____pinNumber4;
    vlSelfRef.top__DOT__i_GPR__DOT__sel_b__DOT__i0__DOT__data_list[2U] 
        = vlSelfRef.top__DOT__i_GPR__DOT____Vcellout__R1____pinNumber4;
    vlSelfRef.top__DOT__i_GPR__DOT__sel_a__DOT__i0__DOT__data_list[2U] 
        = vlSelfRef.top__DOT__i_GPR__DOT____Vcellout__R1____pinNumber4;
    vlSelfRef.top__DOT__i_GPR__DOT__GPR[2U] = vlSelfRef.top__DOT__i_GPR__DOT____Vcellout__R2____pinNumber4;
    vlSelfRef.top__DOT__i_GPR__DOT__sel_b__DOT__i0__DOT__data_list[1U] 
        = vlSelfRef.top__DOT__i_GPR__DOT____Vcellout__R2____pinNumber4;
    vlSelfRef.top__DOT__i_GPR__DOT__sel_a__DOT__i0__DOT__data_list[1U] 
        = vlSelfRef.top__DOT__i_GPR__DOT____Vcellout__R2____pinNumber4;
    vlSelfRef.top__DOT__i_GPR__DOT__GPR[0U] = vlSelfRef.top__DOT__i_GPR__DOT____Vcellout__R0____pinNumber4;
    vlSelfRef.top__DOT__i_GPR__DOT__sel_b__DOT__i0__DOT__pair_list[3U] 
        = vlSelfRef.top__DOT__i_GPR__DOT____Vcellout__R0____pinNumber4;
    vlSelfRef.top__DOT__i_GPR__DOT__sel_b__DOT__i0__DOT__data_list[3U] 
        = vlSelfRef.top__DOT__i_GPR__DOT____Vcellout__R0____pinNumber4;
    vlSelfRef.top__DOT__i_GPR__DOT__sel_a__DOT__i0__DOT__pair_list[3U] 
        = vlSelfRef.top__DOT__i_GPR__DOT____Vcellout__R0____pinNumber4;
    vlSelfRef.top__DOT__i_GPR__DOT__sel_a__DOT__i0__DOT__data_list[3U] 
        = vlSelfRef.top__DOT__i_GPR__DOT____Vcellout__R0____pinNumber4;
    vlSelfRef.top__DOT__i_GPR__DOT__GPR[3U] = vlSelfRef.top__DOT__i_GPR__DOT____Vcellout__R3____pinNumber4;
    vlSelfRef.top__DOT__i_GPR__DOT__sel_b__DOT__i0__DOT__pair_list[0U] 
        = (0x00000300U | (IData)(vlSelfRef.top__DOT__i_GPR__DOT____Vcellout__R3____pinNumber4));
    vlSelfRef.top__DOT__i_GPR__DOT__sel_b__DOT__i0__DOT__data_list[0U] 
        = vlSelfRef.top__DOT__i_GPR__DOT____Vcellout__R3____pinNumber4;
    vlSelfRef.top__DOT__i_GPR__DOT__sel_a__DOT__i0__DOT__pair_list[0U] 
        = (0x00000300U | (IData)(vlSelfRef.top__DOT__i_GPR__DOT____Vcellout__R3____pinNumber4));
    vlSelfRef.top__DOT__i_GPR__DOT__sel_a__DOT__i0__DOT__data_list[0U] 
        = vlSelfRef.top__DOT__i_GPR__DOT____Vcellout__R3____pinNumber4;
    vlSelfRef.top__DOT__i_GPR__DOT__sel_a__DOT__i0__DOT__lut 
        = (((QData)((IData)((0x00000100U | (((IData)(vlSelfRef.top__DOT__i_GPR__DOT____Vcellout__R0____pinNumber4) 
                                             << 0x0000000aU) 
                                            | (IData)(vlSelfRef.top__DOT__i_GPR__DOT____Vcellout__R1____pinNumber4))))) 
            << 0x00000014U) | (QData)((IData)((0x00080300U 
                                               | (((IData)(vlSelfRef.top__DOT__i_GPR__DOT____Vcellout__R2____pinNumber4) 
                                                   << 0x0000000aU) 
                                                  | (IData)(vlSelfRef.top__DOT__i_GPR__DOT____Vcellout__R3____pinNumber4))))));
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
    vlSelfRef.top__DOT__ins_seg4__DOT__b = (0x0000000fU 
                                            & vlSelfRef.top__DOT__rom_PC
                                            [vlSelfRef.top__DOT__PC]);
    vlSelfRef.top__DOT__ins_seg5__DOT__b = (0x0000000fU 
                                            & (vlSelfRef.top__DOT__rom_PC
                                               [vlSelfRef.top__DOT__PC] 
                                               >> 4U));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_6 = (0x0000000fU 
                                                & (vlSelfRef.top__DOT__rom_PC
                                                   [vlSelfRef.top__DOT__PC] 
                                                   >> 2U));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1 = (7U 
                                                & vlSelfRef.top__DOT__rom_PC
                                                [vlSelfRef.top__DOT__PC]);
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
    vlSelfRef.seg0 = (0x000000ffU & (~ ((- (IData)((IData)(vlSelfRef.top__DOT__ins_seg0__DOT__i0__DOT__i0__DOT__hit))) 
                                        & (IData)(vlSelfRef.top__DOT__ins_seg0__DOT__i0__DOT__i0__DOT__lut_out))));
    vlSelfRef.seg1 = (0x000000ffU & (~ ((- (IData)((IData)(vlSelfRef.top__DOT__ins_seg1__DOT__i0__DOT__i0__DOT__hit))) 
                                        & (IData)(vlSelfRef.top__DOT__ins_seg1__DOT__i0__DOT__i0__DOT__lut_out))));
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
    vlSelfRef.top__DOT__io_in = ((~ (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_7)) 
                                 & (1U == (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0)));
    vlSelfRef.top__DOT__i_GPR__DOT__raddra = ((IData)(vlSelfRef.top__DOT__rs1) 
                                              & (- (IData)(
                                                           (3U 
                                                            != (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0)))));
    vlSelfRef.top__DOT__io_out = ((1U == (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0)) 
                                  & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_7));
    vlSelfRef.top__DOT__btn_p[3U] = vlSelfRef.top__DOT____Vcellout__r_btn3____pinNumber4;
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
    vlSelfRef.top__DOT__btn_p[2U] = vlSelfRef.top__DOT____Vcellout__r_btn2____pinNumber4;
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
    vlSelfRef.top__DOT__btn_p[1U] = vlSelfRef.top__DOT____Vcellout__r_btn1____pinNumber4;
    vlSelfRef.top__DOT__btn_p[0U] = vlSelfRef.top__DOT____Vcellout__r_btn0____pinNumber4;
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
                vlSelfRef.__Vm_traceActivity[1U] = 1U;
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
            VL_FATAL_MT("/home/devi/ysyx/ysyx-workbench/npc/vsrc/top_sCPU.v", 1, "", "DIDNOTCONVERGE: Input combinational region did not converge after '--converge-limit' of 10000 tries");
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
            VL_FATAL_MT("/home/devi/ysyx/ysyx-workbench/npc/vsrc/top_sCPU.v", 1, "", "DIDNOTCONVERGE: NBA region did not converge after '--converge-limit' of 10000 tries");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        vlSelfRef.__VactIterCount = 0U;
        do {
            if (VL_UNLIKELY(((0x00002710U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                Vtop___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
#endif
                VL_FATAL_MT("/home/devi/ysyx/ysyx-workbench/npc/vsrc/top_sCPU.v", 1, "", "DIDNOTCONVERGE: Active region did not converge after '--converge-limit' of 10000 tries");
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
