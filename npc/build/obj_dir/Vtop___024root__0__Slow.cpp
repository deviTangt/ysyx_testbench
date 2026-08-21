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
    vlSelfRef.__Vtrigprevexpr___TOP__instruct_i__0 
        = vlSelfRef.instruct_i;
    vlSelfRef.__Vtrigprevexpr___TOP__clk__1 = vlSelfRef.clk;
    vlSelfRef.__Vtrigprevexpr___TOP__top__DOT__i_L2_DU__DOT__rst__0 
        = vlSelfRef.top__DOT__i_L2_DU__DOT__rst;
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
            VL_FATAL_MT("/home/devi/ysyx/ysyx-workbench/npc/vsrc/top_miniRV_module.v", 1, "", "DIDNOTCONVERGE: Settle region did not converge after '--converge-limit' of 10000 tries");
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

void Vtop___024root____Vdpiimwrap_top__DOT__i_L4_SU__DOT__pmem_read_TOP(IData/*31:0*/ raddr, IData/*31:0*/ &pmem_read__Vfuncrtn);
void Vtop___024root____Vdpiimwrap_top__DOT__i_L4_SU__DOT__pmem_write_TOP(IData/*31:0*/ waddr, IData/*31:0*/ wdata, CData/*7:0*/ mem_wmask);

VL_ATTR_COLD void Vtop___024root___stl_sequent__TOP__0(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___stl_sequent__TOP__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.top__DOT__i_L2_DU__DOT__rst = ((IData)(vlSelfRef.rst) 
                                             | ((IData)(vlSelfRef.sw) 
                                                >> 0x0000000fU));
    vlSelfRef.top__DOT__btn_p[0U] = vlSelfRef.top__DOT____Vcellout__r_btn0____pinNumber4;
    vlSelfRef.top__DOT__btn_p[1U] = vlSelfRef.top__DOT____Vcellout__r_btn1____pinNumber4;
    vlSelfRef.top__DOT__btn_p[2U] = vlSelfRef.top__DOT____Vcellout__r_btn2____pinNumber4;
    vlSelfRef.top__DOT__btn_p[3U] = vlSelfRef.top__DOT____Vcellout__r_btn3____pinNumber4;
    vlSelfRef.top__DOT__btn_p[4U] = vlSelfRef.top__DOT____Vcellout__r_btn4____pinNumber4;
    vlSelfRef.PC_N_o = (0x0000ffffU & (vlSelfRef.top__DOT__PC 
                                       >> 2U));
    vlSelfRef.top__DOT__i_L2_DU__DOT__op_lw = (IData)(
                                                      (0x00002003U 
                                                       == 
                                                       (0x0000707fU 
                                                        & vlSelfRef.instruct_i)));
    vlSelfRef.top__DOT__i_L2_DU__DOT__op_lbu = (IData)(
                                                       (0x00004003U 
                                                        == 
                                                        (0x0000707fU 
                                                         & vlSelfRef.instruct_i)));
    vlSelfRef.top__DOT__i_L2_DU__DOT__op_sw = (IData)(
                                                      (0x00002023U 
                                                       == 
                                                       (0x0000707fU 
                                                        & vlSelfRef.instruct_i)));
    vlSelfRef.top__DOT__i_L2_DU__DOT__i_GPR__DOT__GPR[0U] 
        = vlSelfRef.top__DOT__i_L2_DU__DOT__i_GPR__DOT____Vcellout__foor_loop_i__BRA__0__KET____DOT__R____pinNumber4;
    vlSelfRef.top__DOT__i_L2_DU__DOT__i_GPR__DOT__GPR[1U] 
        = vlSelfRef.top__DOT__i_L2_DU__DOT__i_GPR__DOT____Vcellout__foor_loop_i__BRA__1__KET____DOT__R____pinNumber4;
    vlSelfRef.top__DOT__i_L2_DU__DOT__i_GPR__DOT__GPR[2U] 
        = vlSelfRef.top__DOT__i_L2_DU__DOT__i_GPR__DOT____Vcellout__foor_loop_i__BRA__2__KET____DOT__R____pinNumber4;
    vlSelfRef.top__DOT__i_L2_DU__DOT__i_GPR__DOT__GPR[3U] 
        = vlSelfRef.top__DOT__i_L2_DU__DOT__i_GPR__DOT____Vcellout__foor_loop_i__BRA__3__KET____DOT__R____pinNumber4;
    vlSelfRef.top__DOT__i_L2_DU__DOT__i_GPR__DOT__GPR[4U] 
        = vlSelfRef.top__DOT__i_L2_DU__DOT__i_GPR__DOT____Vcellout__foor_loop_i__BRA__4__KET____DOT__R____pinNumber4;
    vlSelfRef.top__DOT__i_L2_DU__DOT__i_GPR__DOT__GPR[5U] 
        = vlSelfRef.top__DOT__i_L2_DU__DOT__i_GPR__DOT____Vcellout__foor_loop_i__BRA__5__KET____DOT__R____pinNumber4;
    vlSelfRef.top__DOT__i_L2_DU__DOT__i_GPR__DOT__GPR[6U] 
        = vlSelfRef.top__DOT__i_L2_DU__DOT__i_GPR__DOT____Vcellout__foor_loop_i__BRA__6__KET____DOT__R____pinNumber4;
    vlSelfRef.top__DOT__i_L2_DU__DOT__i_GPR__DOT__GPR[7U] 
        = vlSelfRef.top__DOT__i_L2_DU__DOT__i_GPR__DOT____Vcellout__foor_loop_i__BRA__7__KET____DOT__R____pinNumber4;
    vlSelfRef.top__DOT__i_L2_DU__DOT__i_GPR__DOT__GPR[8U] 
        = vlSelfRef.top__DOT__i_L2_DU__DOT__i_GPR__DOT____Vcellout__foor_loop_i__BRA__8__KET____DOT__R____pinNumber4;
    vlSelfRef.top__DOT__i_L2_DU__DOT__i_GPR__DOT__GPR[9U] 
        = vlSelfRef.top__DOT__i_L2_DU__DOT__i_GPR__DOT____Vcellout__foor_loop_i__BRA__9__KET____DOT__R____pinNumber4;
    vlSelfRef.top__DOT__i_L2_DU__DOT__i_GPR__DOT__GPR[10U] 
        = vlSelfRef.top__DOT__i_L2_DU__DOT__i_GPR__DOT____Vcellout__foor_loop_i__BRA__10__KET____DOT__R____pinNumber4;
    vlSelfRef.top__DOT__i_L2_DU__DOT__i_GPR__DOT__GPR[11U] 
        = vlSelfRef.top__DOT__i_L2_DU__DOT__i_GPR__DOT____Vcellout__foor_loop_i__BRA__11__KET____DOT__R____pinNumber4;
    vlSelfRef.top__DOT__i_L2_DU__DOT__i_GPR__DOT__GPR[12U] 
        = vlSelfRef.top__DOT__i_L2_DU__DOT__i_GPR__DOT____Vcellout__foor_loop_i__BRA__12__KET____DOT__R____pinNumber4;
    vlSelfRef.top__DOT__i_L2_DU__DOT__i_GPR__DOT__GPR[13U] 
        = vlSelfRef.top__DOT__i_L2_DU__DOT__i_GPR__DOT____Vcellout__foor_loop_i__BRA__13__KET____DOT__R____pinNumber4;
    vlSelfRef.top__DOT__i_L2_DU__DOT__i_GPR__DOT__GPR[14U] 
        = vlSelfRef.top__DOT__i_L2_DU__DOT__i_GPR__DOT____Vcellout__foor_loop_i__BRA__14__KET____DOT__R____pinNumber4;
    vlSelfRef.top__DOT__i_L2_DU__DOT__i_GPR__DOT__GPR[15U] 
        = vlSelfRef.top__DOT__i_L2_DU__DOT__i_GPR__DOT____Vcellout__foor_loop_i__BRA__15__KET____DOT__R____pinNumber4;
    vlSelfRef.top__DOT__i_L2_DU__DOT__i_GPR__DOT__GPR[16U] 
        = vlSelfRef.top__DOT__i_L2_DU__DOT__i_GPR__DOT____Vcellout__foor_loop_i__BRA__16__KET____DOT__R____pinNumber4;
    vlSelfRef.top__DOT__i_L2_DU__DOT__i_GPR__DOT__GPR[17U] 
        = vlSelfRef.top__DOT__i_L2_DU__DOT__i_GPR__DOT____Vcellout__foor_loop_i__BRA__17__KET____DOT__R____pinNumber4;
    vlSelfRef.top__DOT__i_L2_DU__DOT__i_GPR__DOT__GPR[18U] 
        = vlSelfRef.top__DOT__i_L2_DU__DOT__i_GPR__DOT____Vcellout__foor_loop_i__BRA__18__KET____DOT__R____pinNumber4;
    vlSelfRef.top__DOT__i_L2_DU__DOT__i_GPR__DOT__GPR[19U] 
        = vlSelfRef.top__DOT__i_L2_DU__DOT__i_GPR__DOT____Vcellout__foor_loop_i__BRA__19__KET____DOT__R____pinNumber4;
    vlSelfRef.top__DOT__i_L2_DU__DOT__i_GPR__DOT__GPR[20U] 
        = vlSelfRef.top__DOT__i_L2_DU__DOT__i_GPR__DOT____Vcellout__foor_loop_i__BRA__20__KET____DOT__R____pinNumber4;
    vlSelfRef.top__DOT__i_L2_DU__DOT__i_GPR__DOT__GPR[21U] 
        = vlSelfRef.top__DOT__i_L2_DU__DOT__i_GPR__DOT____Vcellout__foor_loop_i__BRA__21__KET____DOT__R____pinNumber4;
    vlSelfRef.top__DOT__i_L2_DU__DOT__i_GPR__DOT__GPR[22U] 
        = vlSelfRef.top__DOT__i_L2_DU__DOT__i_GPR__DOT____Vcellout__foor_loop_i__BRA__22__KET____DOT__R____pinNumber4;
    vlSelfRef.top__DOT__i_L2_DU__DOT__i_GPR__DOT__GPR[23U] 
        = vlSelfRef.top__DOT__i_L2_DU__DOT__i_GPR__DOT____Vcellout__foor_loop_i__BRA__23__KET____DOT__R____pinNumber4;
    vlSelfRef.top__DOT__i_L2_DU__DOT__i_GPR__DOT__GPR[24U] 
        = vlSelfRef.top__DOT__i_L2_DU__DOT__i_GPR__DOT____Vcellout__foor_loop_i__BRA__24__KET____DOT__R____pinNumber4;
    vlSelfRef.top__DOT__i_L2_DU__DOT__i_GPR__DOT__GPR[25U] 
        = vlSelfRef.top__DOT__i_L2_DU__DOT__i_GPR__DOT____Vcellout__foor_loop_i__BRA__25__KET____DOT__R____pinNumber4;
    vlSelfRef.top__DOT__i_L2_DU__DOT__i_GPR__DOT__GPR[26U] 
        = vlSelfRef.top__DOT__i_L2_DU__DOT__i_GPR__DOT____Vcellout__foor_loop_i__BRA__26__KET____DOT__R____pinNumber4;
    vlSelfRef.top__DOT__i_L2_DU__DOT__i_GPR__DOT__GPR[27U] 
        = vlSelfRef.top__DOT__i_L2_DU__DOT__i_GPR__DOT____Vcellout__foor_loop_i__BRA__27__KET____DOT__R____pinNumber4;
    vlSelfRef.top__DOT__i_L2_DU__DOT__i_GPR__DOT__GPR[28U] 
        = vlSelfRef.top__DOT__i_L2_DU__DOT__i_GPR__DOT____Vcellout__foor_loop_i__BRA__28__KET____DOT__R____pinNumber4;
    vlSelfRef.top__DOT__i_L2_DU__DOT__i_GPR__DOT__GPR[29U] 
        = vlSelfRef.top__DOT__i_L2_DU__DOT__i_GPR__DOT____Vcellout__foor_loop_i__BRA__29__KET____DOT__R____pinNumber4;
    vlSelfRef.top__DOT__i_L2_DU__DOT__i_GPR__DOT__GPR[30U] 
        = vlSelfRef.top__DOT__i_L2_DU__DOT__i_GPR__DOT____Vcellout__foor_loop_i__BRA__30__KET____DOT__R____pinNumber4;
    vlSelfRef.top__DOT__i_L2_DU__DOT__i_GPR__DOT__GPR[31U] 
        = vlSelfRef.top__DOT__i_L2_DU__DOT__i_GPR__DOT____Vcellout__foor_loop_i__BRA__31__KET____DOT__R____pinNumber4;
    vlSelfRef.top__DOT__i_L2_DU__DOT__op_sb = (IData)(
                                                      (0x00000023U 
                                                       == 
                                                       (0x0000707fU 
                                                        & vlSelfRef.instruct_i)));
    vlSelfRef.uart_tx = ((0x00c8U < (IData)(vlSelfRef.PC_N_o)) 
                         | (0U == vlSelfRef.instruct_i));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3 = ((IData)(vlSelfRef.top__DOT__i_L2_DU__DOT__op_lw) 
                                                | (IData)(vlSelfRef.top__DOT__i_L2_DU__DOT__op_lbu));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2 = ((IData)(vlSelfRef.top__DOT__i_L2_DU__DOT__op_lw) 
                                                | (IData)(vlSelfRef.top__DOT__i_L2_DU__DOT__op_sw));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0 = (0x000000ffU 
                                                & vlSelfRef.top__DOT__i_L2_DU__DOT__i_GPR__DOT__GPR
                                                [(0x0000001fU 
                                                  & (vlSelfRef.instruct_i 
                                                     >> 0x00000014U))]);
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1 = ((IData)(vlSelfRef.top__DOT__i_L2_DU__DOT__op_lbu) 
                                                | (IData)(vlSelfRef.top__DOT__i_L2_DU__DOT__op_sb));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5 = ((IData)(vlSelfRef.top__DOT__i_L2_DU__DOT__op_sb) 
                                                | (IData)(vlSelfRef.top__DOT__i_L2_DU__DOT__op_sw));
    vlSelfRef.top__DOT__i_L2_DU__DOT__wen = ((0x33U 
                                              == (0x0000007fU 
                                                  & vlSelfRef.instruct_i)) 
                                             | ((0x13U 
                                                 == 
                                                 (0x0000007fU 
                                                  & vlSelfRef.instruct_i)) 
                                                | ((0x37U 
                                                    == 
                                                    (0x0000007fU 
                                                     & vlSelfRef.instruct_i)) 
                                                   | ((0x67U 
                                                       == 
                                                       (0x0000007fU 
                                                        & vlSelfRef.instruct_i)) 
                                                      | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3)))));
    vlSelfRef.top__DOT__imm_ext_32b_s = (((- (IData)(
                                                     (vlSelfRef.instruct_i 
                                                      >> 0x0000001fU))) 
                                          << 0x0000000cU) 
                                         | ((0x00000fe0U 
                                             & (vlSelfRef.instruct_i 
                                                >> 0x00000014U)) 
                                            | (0x0000001fU 
                                               & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5)
                                                   ? 
                                                  (vlSelfRef.instruct_i 
                                                   >> 7U)
                                                   : 
                                                  (vlSelfRef.instruct_i 
                                                   >> 0x00000014U)))));
    vlSelfRef.top__DOT__mem_addr = (vlSelfRef.top__DOT__i_L2_DU__DOT__i_GPR__DOT__GPR
                                    [(0x0000001fU & 
                                      (vlSelfRef.instruct_i 
                                       >> 0x0000000fU))] 
                                    + vlSelfRef.top__DOT__imm_ext_32b_s);
    vlSelfRef.top__DOT__i_L5_BU__DOT__R_PC__DOT__din 
        = (0x0003ffffU & ((0x67U == (0x0000007fU & vlSelfRef.instruct_i))
                           ? (0x0003fffeU & vlSelfRef.top__DOT__mem_addr)
                           : ((IData)(4U) + vlSelfRef.top__DOT__PC)));
    vlSelfRef.top__DOT__mem_wen = ((~ (0U != (vlSelfRef.top__DOT__mem_addr 
                                              >> 0x0000001dU))) 
                                   & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5));
    vlSelfRef.top__DOT__mem_din = ((IData)(vlSelfRef.top__DOT__i_L2_DU__DOT__op_sb)
                                    ? ((3U == (3U & vlSelfRef.top__DOT__mem_addr))
                                        ? (vlSelfRef.top__DOT__i_L2_DU__DOT__i_GPR__DOT__GPR
                                           [(0x0000001fU 
                                             & (vlSelfRef.instruct_i 
                                                >> 0x00000014U))] 
                                           << 0x00000018U)
                                        : ((2U == (3U 
                                                   & vlSelfRef.top__DOT__mem_addr))
                                            ? ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0) 
                                               << 0x00000010U)
                                            : ((1U 
                                                == 
                                                (3U 
                                                 & vlSelfRef.top__DOT__mem_addr))
                                                ? ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0) 
                                                   << 8U)
                                                : (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0))))
                                    : vlSelfRef.top__DOT__i_L2_DU__DOT__i_GPR__DOT__GPR
                                   [(0x0000001fU & 
                                     (vlSelfRef.instruct_i 
                                      >> 0x00000014U))]);
    if ((((~ (0U != (vlSelfRef.top__DOT__mem_addr >> 0x0000001dU))) 
          & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3)) 
         | (IData)(vlSelfRef.top__DOT__mem_wen))) {
        Vtop___024root____Vdpiimwrap_top__DOT__i_L4_SU__DOT__pmem_read_TOP(vlSelfRef.top__DOT__mem_addr, vlSelfRef.__Vfunc_top__DOT__i_L4_SU__DOT__pmem_read__0__Vfuncout);
        vlSelfRef.top__DOT__i_L4_SU__DOT__mem_dout 
            = vlSelfRef.__Vfunc_top__DOT__i_L4_SU__DOT__pmem_read__0__Vfuncout;
        if (vlSelfRef.top__DOT__mem_wen) {
            Vtop___024root____Vdpiimwrap_top__DOT__i_L4_SU__DOT__pmem_write_TOP(vlSelfRef.top__DOT__mem_addr, vlSelfRef.top__DOT__mem_din, 
                                                                                ((((((3U 
                                                                                == 
                                                                                (3U 
                                                                                & vlSelfRef.top__DOT__mem_addr)) 
                                                                                & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1)) 
                                                                                | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2)) 
                                                                                << 3U) 
                                                                                | ((((2U 
                                                                                == 
                                                                                (3U 
                                                                                & vlSelfRef.top__DOT__mem_addr)) 
                                                                                & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1)) 
                                                                                | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2)) 
                                                                                << 2U)) 
                                                                                | (((((1U 
                                                                                == 
                                                                                (3U 
                                                                                & vlSelfRef.top__DOT__mem_addr)) 
                                                                                & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1)) 
                                                                                | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2)) 
                                                                                << 1U) 
                                                                                | (((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1) 
                                                                                & (0U 
                                                                                == 
                                                                                (3U 
                                                                                & vlSelfRef.top__DOT__mem_addr))) 
                                                                                | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2)))));
        }
    } else {
        vlSelfRef.top__DOT__i_L4_SU__DOT__mem_dout = 0U;
    }
    vlSelfRef.top__DOT__mem_dout_byte8 = (0x000000ffU 
                                          & ((3U == 
                                              (3U & vlSelfRef.top__DOT__mem_addr))
                                              ? (vlSelfRef.top__DOT__i_L4_SU__DOT__mem_dout 
                                                 >> 0x00000018U)
                                              : ((2U 
                                                  == 
                                                  (3U 
                                                   & vlSelfRef.top__DOT__mem_addr))
                                                  ? 
                                                 (vlSelfRef.top__DOT__i_L4_SU__DOT__mem_dout 
                                                  >> 0x00000010U)
                                                  : 
                                                 ((1U 
                                                   == 
                                                   (3U 
                                                    & vlSelfRef.top__DOT__mem_addr))
                                                   ? 
                                                  (vlSelfRef.top__DOT__i_L4_SU__DOT__mem_dout 
                                                   >> 8U)
                                                   : vlSelfRef.top__DOT__i_L4_SU__DOT__mem_dout))));
    vlSelfRef.top__DOT__mem_out_val = ((IData)(vlSelfRef.top__DOT__i_L2_DU__DOT__op_lbu)
                                        ? (IData)(vlSelfRef.top__DOT__mem_dout_byte8)
                                        : vlSelfRef.top__DOT__i_L4_SU__DOT__mem_dout);
    vlSelfRef.top__DOT__i_L2_DU__DOT__wdata = ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3)
                                                ? vlSelfRef.top__DOT__mem_out_val
                                                : (
                                                   (0x37U 
                                                    == 
                                                    (0x0000007fU 
                                                     & vlSelfRef.instruct_i))
                                                    ? 
                                                   (0xfffff000U 
                                                    & vlSelfRef.instruct_i)
                                                    : 
                                                   ((0x67U 
                                                     == 
                                                     (0x0000007fU 
                                                      & vlSelfRef.instruct_i))
                                                     ? 
                                                    (((- (IData)(
                                                                 (1U 
                                                                  & (vlSelfRef.top__DOT__mem_addr 
                                                                     >> 0x00000011U)))) 
                                                      << 0x00000012U) 
                                                     | (0x0003fffeU 
                                                        & vlSelfRef.top__DOT__mem_addr))
                                                     : 
                                                    (vlSelfRef.top__DOT__i_L2_DU__DOT__i_GPR__DOT__GPR
                                                     [
                                                     (0x0000001fU 
                                                      & (vlSelfRef.instruct_i 
                                                         >> 0x0000000fU))] 
                                                     + 
                                                     ((0x33U 
                                                       == 
                                                       (0x0000007fU 
                                                        & vlSelfRef.instruct_i))
                                                       ? vlSelfRef.top__DOT__i_L2_DU__DOT__i_GPR__DOT__GPR
                                                      [
                                                      (0x0000001fU 
                                                       & (vlSelfRef.instruct_i 
                                                          >> 0x00000014U))]
                                                       : vlSelfRef.top__DOT__imm_ext_32b_s)))));
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
                    vlSelfRef.__Vm_traceActivity[2U] = 1U;
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
    if ((1U & (IData)((triggers[0U] >> 7U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 7 is active: @( instruct_i)\n");
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
        VL_DBG_MSGS("         '" + tag + "' region trigger index 1 is active: @(posedge top.i_L2_DU.rst)\n");
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
    vlSelf->instruct_i = 0;
    vlSelf->PC_N_o = 0;
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        vlSelf->top__DOT__btn_p[__Vi0] = 0;
    }
    vlSelf->top__DOT____Vcellout__r_btn0____pinNumber4 = 0;
    vlSelf->top__DOT____Vcellout__r_btn1____pinNumber4 = 0;
    vlSelf->top__DOT____Vcellout__r_btn2____pinNumber4 = 0;
    vlSelf->top__DOT____Vcellout__r_btn3____pinNumber4 = 0;
    vlSelf->top__DOT____Vcellout__r_btn4____pinNumber4 = 0;
    vlSelf->top__DOT__PC = 0;
    vlSelf->top__DOT__mem_addr = 0;
    vlSelf->top__DOT__mem_din = 0;
    vlSelf->top__DOT__mem_wen = 0;
    vlSelf->top__DOT__gpr_din_SU_o = 0;
    vlSelf->top__DOT__mem_out_val = 0;
    vlSelf->top__DOT__gpr_wen_BU_i = 0;
    vlSelf->top__DOT__gpr_wen_BU_o = 0;
    vlSelf->top__DOT__imm_ext_32b_s = 0;
    vlSelf->top__DOT__mem_dout_byte8 = 0;
    vlSelf->top__DOT__cnt_clk = 0;
    vlSelf->top__DOT__i_L2_DU__DOT__rst = 0;
    vlSelf->top__DOT__i_L2_DU__DOT__op_lw = 0;
    vlSelf->top__DOT__i_L2_DU__DOT__op_lbu = 0;
    vlSelf->top__DOT__i_L2_DU__DOT__op_sw = 0;
    vlSelf->top__DOT__i_L2_DU__DOT__op_sb = 0;
    vlSelf->top__DOT__i_L2_DU__DOT__wen = 0;
    vlSelf->top__DOT__i_L2_DU__DOT__wdata = 0;
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->top__DOT__i_L2_DU__DOT__i_GPR__DOT__GPR[__Vi0] = 0;
    }
    vlSelf->top__DOT__i_L2_DU__DOT__i_GPR__DOT____Vcellout__foor_loop_i__BRA__0__KET____DOT__R____pinNumber4 = 0;
    vlSelf->top__DOT__i_L2_DU__DOT__i_GPR__DOT____Vcellout__foor_loop_i__BRA__1__KET____DOT__R____pinNumber4 = 0;
    vlSelf->top__DOT__i_L2_DU__DOT__i_GPR__DOT____Vcellout__foor_loop_i__BRA__2__KET____DOT__R____pinNumber4 = 0;
    vlSelf->top__DOT__i_L2_DU__DOT__i_GPR__DOT____Vcellout__foor_loop_i__BRA__3__KET____DOT__R____pinNumber4 = 0;
    vlSelf->top__DOT__i_L2_DU__DOT__i_GPR__DOT____Vcellout__foor_loop_i__BRA__4__KET____DOT__R____pinNumber4 = 0;
    vlSelf->top__DOT__i_L2_DU__DOT__i_GPR__DOT____Vcellout__foor_loop_i__BRA__5__KET____DOT__R____pinNumber4 = 0;
    vlSelf->top__DOT__i_L2_DU__DOT__i_GPR__DOT____Vcellout__foor_loop_i__BRA__6__KET____DOT__R____pinNumber4 = 0;
    vlSelf->top__DOT__i_L2_DU__DOT__i_GPR__DOT____Vcellout__foor_loop_i__BRA__7__KET____DOT__R____pinNumber4 = 0;
    vlSelf->top__DOT__i_L2_DU__DOT__i_GPR__DOT____Vcellout__foor_loop_i__BRA__8__KET____DOT__R____pinNumber4 = 0;
    vlSelf->top__DOT__i_L2_DU__DOT__i_GPR__DOT____Vcellout__foor_loop_i__BRA__9__KET____DOT__R____pinNumber4 = 0;
    vlSelf->top__DOT__i_L2_DU__DOT__i_GPR__DOT____Vcellout__foor_loop_i__BRA__10__KET____DOT__R____pinNumber4 = 0;
    vlSelf->top__DOT__i_L2_DU__DOT__i_GPR__DOT____Vcellout__foor_loop_i__BRA__11__KET____DOT__R____pinNumber4 = 0;
    vlSelf->top__DOT__i_L2_DU__DOT__i_GPR__DOT____Vcellout__foor_loop_i__BRA__12__KET____DOT__R____pinNumber4 = 0;
    vlSelf->top__DOT__i_L2_DU__DOT__i_GPR__DOT____Vcellout__foor_loop_i__BRA__13__KET____DOT__R____pinNumber4 = 0;
    vlSelf->top__DOT__i_L2_DU__DOT__i_GPR__DOT____Vcellout__foor_loop_i__BRA__14__KET____DOT__R____pinNumber4 = 0;
    vlSelf->top__DOT__i_L2_DU__DOT__i_GPR__DOT____Vcellout__foor_loop_i__BRA__15__KET____DOT__R____pinNumber4 = 0;
    vlSelf->top__DOT__i_L2_DU__DOT__i_GPR__DOT____Vcellout__foor_loop_i__BRA__16__KET____DOT__R____pinNumber4 = 0;
    vlSelf->top__DOT__i_L2_DU__DOT__i_GPR__DOT____Vcellout__foor_loop_i__BRA__17__KET____DOT__R____pinNumber4 = 0;
    vlSelf->top__DOT__i_L2_DU__DOT__i_GPR__DOT____Vcellout__foor_loop_i__BRA__18__KET____DOT__R____pinNumber4 = 0;
    vlSelf->top__DOT__i_L2_DU__DOT__i_GPR__DOT____Vcellout__foor_loop_i__BRA__19__KET____DOT__R____pinNumber4 = 0;
    vlSelf->top__DOT__i_L2_DU__DOT__i_GPR__DOT____Vcellout__foor_loop_i__BRA__20__KET____DOT__R____pinNumber4 = 0;
    vlSelf->top__DOT__i_L2_DU__DOT__i_GPR__DOT____Vcellout__foor_loop_i__BRA__21__KET____DOT__R____pinNumber4 = 0;
    vlSelf->top__DOT__i_L2_DU__DOT__i_GPR__DOT____Vcellout__foor_loop_i__BRA__22__KET____DOT__R____pinNumber4 = 0;
    vlSelf->top__DOT__i_L2_DU__DOT__i_GPR__DOT____Vcellout__foor_loop_i__BRA__23__KET____DOT__R____pinNumber4 = 0;
    vlSelf->top__DOT__i_L2_DU__DOT__i_GPR__DOT____Vcellout__foor_loop_i__BRA__24__KET____DOT__R____pinNumber4 = 0;
    vlSelf->top__DOT__i_L2_DU__DOT__i_GPR__DOT____Vcellout__foor_loop_i__BRA__25__KET____DOT__R____pinNumber4 = 0;
    vlSelf->top__DOT__i_L2_DU__DOT__i_GPR__DOT____Vcellout__foor_loop_i__BRA__26__KET____DOT__R____pinNumber4 = 0;
    vlSelf->top__DOT__i_L2_DU__DOT__i_GPR__DOT____Vcellout__foor_loop_i__BRA__27__KET____DOT__R____pinNumber4 = 0;
    vlSelf->top__DOT__i_L2_DU__DOT__i_GPR__DOT____Vcellout__foor_loop_i__BRA__28__KET____DOT__R____pinNumber4 = 0;
    vlSelf->top__DOT__i_L2_DU__DOT__i_GPR__DOT____Vcellout__foor_loop_i__BRA__29__KET____DOT__R____pinNumber4 = 0;
    vlSelf->top__DOT__i_L2_DU__DOT__i_GPR__DOT____Vcellout__foor_loop_i__BRA__30__KET____DOT__R____pinNumber4 = 0;
    vlSelf->top__DOT__i_L2_DU__DOT__i_GPR__DOT____Vcellout__foor_loop_i__BRA__31__KET____DOT__R____pinNumber4 = 0;
    vlSelf->top__DOT__i_L5_BU__DOT__R_PC__DOT__din = 0;
    vlSelf->top__DOT__i_L4_SU__DOT__mem_dout = 0;
    vlSelf->__Vfunc_top__DOT__i_L4_SU__DOT__pmem_read__0__Vfuncout = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_0 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_1 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_2 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_3 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_5 = 0;
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
    vlSelf->__Vtrigprevexpr___TOP__instruct_i__0 = 0;
    vlSelf->__VicoDidInit = 0;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VactTriggered[__Vi0] = 0;
    }
    vlSelf->__Vtrigprevexpr___TOP__clk__1 = 0;
    vlSelf->__Vtrigprevexpr___TOP__top__DOT__i_L2_DU__DOT__rst__0 = 0;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VnbaTriggered[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
