// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"

extern "C" int pmem_read(int raddr);

void Vtop___024root____Vdpiimwrap_top__DOT__i_L4_SU__DOT__pmem_read_TOP(IData/*31:0*/ raddr, IData/*31:0*/ &pmem_read__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root____Vdpiimwrap_top__DOT__i_L4_SU__DOT__pmem_read_TOP\n"); );
    // Body
    int raddr__Vcvt;
    raddr__Vcvt = raddr;
    int pmem_read__Vfuncrtn__Vcvt;
    pmem_read__Vfuncrtn__Vcvt = pmem_read(raddr__Vcvt);
    pmem_read__Vfuncrtn = (pmem_read__Vfuncrtn__Vcvt);
}

extern "C" void pmem_write(int waddr, int wdata, char mem_wmask);

void Vtop___024root____Vdpiimwrap_top__DOT__i_L4_SU__DOT__pmem_write_TOP(IData/*31:0*/ waddr, IData/*31:0*/ wdata, CData/*7:0*/ mem_wmask) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root____Vdpiimwrap_top__DOT__i_L4_SU__DOT__pmem_write_TOP\n"); );
    // Body
    int waddr__Vcvt;
    waddr__Vcvt = waddr;
    int wdata__Vcvt;
    wdata__Vcvt = wdata;
    char mem_wmask__Vcvt;
    mem_wmask__Vcvt = mem_wmask;
    pmem_write(waddr__Vcvt, wdata__Vcvt, mem_wmask__Vcvt);
}

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

void Vtop___024root___ico_sequent__TOP__0(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ico_sequent__TOP__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.uart_tx = ((0x0028U < (IData)(vlSelfRef.PC_N_o)) 
                         | (0U == vlSelfRef.instruct_i));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0 = (0x000000ffU 
                                                & vlSelfRef.top__DOT__i_L2_DU__DOT__i_GPR__DOT__GPR
                                                [(0x0000001fU 
                                                  & (vlSelfRef.instruct_i 
                                                     >> 0x00000014U))]);
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
    vlSelfRef.top__DOT__i_L2_DU__DOT__op_sb = (IData)(
                                                      (0x00000023U 
                                                       == 
                                                       (0x0000707fU 
                                                        & vlSelfRef.instruct_i)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3 = ((IData)(vlSelfRef.top__DOT__i_L2_DU__DOT__op_lw) 
                                                | (IData)(vlSelfRef.top__DOT__i_L2_DU__DOT__op_lbu));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2 = ((IData)(vlSelfRef.top__DOT__i_L2_DU__DOT__op_lw) 
                                                | (IData)(vlSelfRef.top__DOT__i_L2_DU__DOT__op_sw));
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
    vlSelfRef.top__DOT__i_L3_XU__DOT__imm_ext_32b_s 
        = (((- (IData)((vlSelfRef.instruct_i >> 0x0000001fU))) 
            << 0x0000000cU) | ((0x00000fe0U & (vlSelfRef.instruct_i 
                                               >> 0x00000014U)) 
                               | (0x0000001fU & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5)
                                                  ? 
                                                 (vlSelfRef.instruct_i 
                                                  >> 7U)
                                                  : 
                                                 (vlSelfRef.instruct_i 
                                                  >> 0x00000014U)))));
    vlSelfRef.top__DOT__i_L4_SU__DOT__mem_addr = (vlSelfRef.top__DOT__i_L2_DU__DOT__i_GPR__DOT__GPR
                                                  [
                                                  (0x0000001fU 
                                                   & (vlSelfRef.instruct_i 
                                                      >> 0x0000000fU))] 
                                                  + vlSelfRef.top__DOT__i_L3_XU__DOT__imm_ext_32b_s);
    vlSelfRef.top__DOT__i_L3_XU__DOT__next_PC = (0x0003ffffU 
                                                 & ((0x67U 
                                                     == 
                                                     (0x0000007fU 
                                                      & vlSelfRef.instruct_i))
                                                     ? 
                                                    (0x0003fffeU 
                                                     & vlSelfRef.top__DOT__i_L4_SU__DOT__mem_addr)
                                                     : 
                                                    ((IData)(4U) 
                                                     + vlSelfRef.top__DOT__PC)));
    vlSelfRef.top__DOT__i_L4_SU__DOT__mem_wen = ((~ 
                                                  (0U 
                                                   != 
                                                   (vlSelfRef.top__DOT__i_L4_SU__DOT__mem_addr 
                                                    >> 0x0000001dU))) 
                                                 & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5));
    vlSelfRef.top__DOT__i_L4_SU__DOT__mem_din = ((IData)(vlSelfRef.top__DOT__i_L2_DU__DOT__op_sb)
                                                  ? 
                                                 ((3U 
                                                   == 
                                                   (3U 
                                                    & vlSelfRef.top__DOT__i_L4_SU__DOT__mem_addr))
                                                   ? 
                                                  (vlSelfRef.top__DOT__i_L2_DU__DOT__i_GPR__DOT__GPR
                                                   [
                                                   (0x0000001fU 
                                                    & (vlSelfRef.instruct_i 
                                                       >> 0x00000014U))] 
                                                   << 0x00000018U)
                                                   : 
                                                  ((2U 
                                                    == 
                                                    (3U 
                                                     & vlSelfRef.top__DOT__i_L4_SU__DOT__mem_addr))
                                                    ? 
                                                   ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0) 
                                                    << 0x00000010U)
                                                    : 
                                                   ((1U 
                                                     == 
                                                     (3U 
                                                      & vlSelfRef.top__DOT__i_L4_SU__DOT__mem_addr))
                                                     ? 
                                                    ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0) 
                                                     << 8U)
                                                     : (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0))))
                                                  : vlSelfRef.top__DOT__i_L2_DU__DOT__i_GPR__DOT__GPR
                                                 [(0x0000001fU 
                                                   & (vlSelfRef.instruct_i 
                                                      >> 0x00000014U))]);
    if ((((~ (0U != (vlSelfRef.top__DOT__i_L4_SU__DOT__mem_addr 
                     >> 0x0000001dU))) & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3)) 
         | (IData)(vlSelfRef.top__DOT__i_L4_SU__DOT__mem_wen))) {
        Vtop___024root____Vdpiimwrap_top__DOT__i_L4_SU__DOT__pmem_read_TOP(vlSelfRef.top__DOT__i_L4_SU__DOT__mem_addr, vlSelfRef.__Vfunc_top__DOT__i_L4_SU__DOT__pmem_read__0__Vfuncout);
        vlSelfRef.top__DOT__i_L4_SU__DOT__mem_dout 
            = vlSelfRef.__Vfunc_top__DOT__i_L4_SU__DOT__pmem_read__0__Vfuncout;
        if (vlSelfRef.top__DOT__i_L4_SU__DOT__mem_wen) {
            Vtop___024root____Vdpiimwrap_top__DOT__i_L4_SU__DOT__pmem_write_TOP(vlSelfRef.top__DOT__i_L4_SU__DOT__mem_addr, vlSelfRef.top__DOT__i_L4_SU__DOT__mem_din, 
                                                                                ((((((3U 
                                                                                == 
                                                                                (3U 
                                                                                & vlSelfRef.top__DOT__i_L4_SU__DOT__mem_addr)) 
                                                                                & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1)) 
                                                                                | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2)) 
                                                                                << 3U) 
                                                                                | ((((2U 
                                                                                == 
                                                                                (3U 
                                                                                & vlSelfRef.top__DOT__i_L4_SU__DOT__mem_addr)) 
                                                                                & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1)) 
                                                                                | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2)) 
                                                                                << 2U)) 
                                                                                | (((((1U 
                                                                                == 
                                                                                (3U 
                                                                                & vlSelfRef.top__DOT__i_L4_SU__DOT__mem_addr)) 
                                                                                & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1)) 
                                                                                | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2)) 
                                                                                << 1U) 
                                                                                | (((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1) 
                                                                                & (0U 
                                                                                == 
                                                                                (3U 
                                                                                & vlSelfRef.top__DOT__i_L4_SU__DOT__mem_addr))) 
                                                                                | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2)))));
        }
    } else {
        vlSelfRef.top__DOT__i_L4_SU__DOT__mem_dout = 0U;
    }
    vlSelfRef.top__DOT__i_L4_SU__DOT__mem_dout_byte8 
        = (0x000000ffU & ((3U == (3U & vlSelfRef.top__DOT__i_L4_SU__DOT__mem_addr))
                           ? (vlSelfRef.top__DOT__i_L4_SU__DOT__mem_dout 
                              >> 0x00000018U) : ((2U 
                                                  == 
                                                  (3U 
                                                   & vlSelfRef.top__DOT__i_L4_SU__DOT__mem_addr))
                                                  ? 
                                                 (vlSelfRef.top__DOT__i_L4_SU__DOT__mem_dout 
                                                  >> 0x00000010U)
                                                  : 
                                                 ((1U 
                                                   == 
                                                   (3U 
                                                    & vlSelfRef.top__DOT__i_L4_SU__DOT__mem_addr))
                                                   ? 
                                                  (vlSelfRef.top__DOT__i_L4_SU__DOT__mem_dout 
                                                   >> 8U)
                                                   : vlSelfRef.top__DOT__i_L4_SU__DOT__mem_dout))));
    vlSelfRef.top__DOT__i_L4_SU__DOT__mem_out_val = 
        ((IData)(vlSelfRef.top__DOT__i_L2_DU__DOT__op_lbu)
          ? (IData)(vlSelfRef.top__DOT__i_L4_SU__DOT__mem_dout_byte8)
          : vlSelfRef.top__DOT__i_L4_SU__DOT__mem_dout);
    vlSelfRef.top__DOT__i_L2_DU__DOT__wdata = ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3)
                                                ? vlSelfRef.top__DOT__i_L4_SU__DOT__mem_out_val
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
                                                                  & (vlSelfRef.top__DOT__i_L4_SU__DOT__mem_addr 
                                                                     >> 0x00000011U)))) 
                                                      << 0x00000012U) 
                                                     | (0x0003fffeU 
                                                        & vlSelfRef.top__DOT__i_L4_SU__DOT__mem_addr))
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
                                                       : vlSelfRef.top__DOT__i_L3_XU__DOT__imm_ext_32b_s)))));
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
                                                        ((((((vlSelfRef.instruct_i 
                                                              != vlSelfRef.__Vtrigprevexpr___TOP__instruct_i__0) 
                                                             << 3U) 
                                                            | (((IData)(vlSelfRef.uart_rx) 
                                                                != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__uart_rx__0)) 
                                                               << 2U)) 
                                                           | ((((IData)(vlSelfRef.ps2_data) 
                                                                != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__ps2_data__0)) 
                                                               << 1U) 
                                                              | ((IData)(vlSelfRef.ps2_clk) 
                                                                 != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__ps2_clk__0)))) 
                                                          << 4U) 
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
        vlSelfRef.__Vtrigprevexpr___TOP__instruct_i__0 
            = vlSelfRef.instruct_i;
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
            vlSelfRef.__VicoTriggered[0U] = (0x0000000000000080ULL 
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
                    vlSelfRef.top__DOT__i_L2_DU__DOT__rst 
                        = ((IData)(vlSelfRef.rst) | 
                           ((IData)(vlSelfRef.sw) >> 0x0000000fU));
                }
            }
            if ((0x0000000000000080ULL & vlSelfRef.__VicoTriggered[0U])) {
                Vtop___024root___ico_sequent__TOP__0(vlSelf);
                vlSelfRef.__Vm_traceActivity[1U] = 1U;
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

void Vtop___024root___nba_sequent__TOP__1(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__1\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSelfRef.btn)) 
                            & (IData)(vlSelfRef.top__DOT____Vcellout__r_btn0____pinNumber4)))))) {
        VL_WRITEF_NX("Cur PC:%03h PC_N:0x%h Ins:0x%h%d\n",4
                     , '#',18,vlSelfRef.top__DOT__PC
                     , '#',16,(IData)(vlSelfRef.PC_N_o)
                     , '#',18,vlSelfRef.top__DOT__PC
                     , '#',32,vlSelfRef.instruct_i);
    }
    if ((1U & ((~ (IData)(vlSelfRef.uart_tx)) & (~ (IData)(vlSelfRef.top__DOT__i_L2_DU__DOT__rst))))) {
        if (VL_UNLIKELY(((0x33U == (0x0000007fU & vlSelfRef.instruct_i))))) {
            VL_WRITEF_NX("%03d-%3x %08h  | add  rd  ,rs1,rs2\n                  - add  r%-2d ,r%-2d,r%-2d     {r%-2d -> 0x%h = r%-2d[0x%h] + r%-2d[0x%h]}\n",12
                         , '#',16,vlSelfRef.PC_N_o, '#',18,vlSelfRef.top__DOT__PC
                         , '#',32,vlSelfRef.instruct_i
                         , '#',5,(0x0000001fU & (vlSelfRef.instruct_i 
                                                 >> 7U))
                         , '#',5,(0x0000001fU & (vlSelfRef.instruct_i 
                                                 >> 0x0000000fU))
                         , '#',5,(0x0000001fU & (vlSelfRef.instruct_i 
                                                 >> 0x00000014U))
                         , '#',5,(0x0000001fU & (vlSelfRef.instruct_i 
                                                 >> 7U))
                         , '#',32,vlSelfRef.top__DOT__i_L2_DU__DOT__wdata
                         , '#',5,(0x0000001fU & (vlSelfRef.instruct_i 
                                                 >> 0x0000000fU))
                         , '#',32,vlSelfRef.top__DOT__i_L2_DU__DOT__i_GPR__DOT__GPR
                         [(0x0000001fU & (vlSelfRef.instruct_i 
                                          >> 0x0000000fU))]
                         , '#',5,(0x0000001fU & (vlSelfRef.instruct_i 
                                                 >> 0x00000014U))
                         , '#',32,vlSelfRef.top__DOT__i_L2_DU__DOT__i_GPR__DOT__GPR
                         [(0x0000001fU & (vlSelfRef.instruct_i 
                                          >> 0x00000014U))]);
        } else if (VL_UNLIKELY(((0x13U == (0x0000007fU 
                                           & vlSelfRef.instruct_i))))) {
            VL_WRITEF_NX("%03d-%3x %08h  | addi rd , rs1,imm\n                  - addi r%-2d, r%-2d,0x%3h   {r%-2d -> 0x%h or %d}\n",9
                         , '#',16,vlSelfRef.PC_N_o, '#',18,vlSelfRef.top__DOT__PC
                         , '#',32,vlSelfRef.instruct_i
                         , '#',5,(0x0000001fU & (vlSelfRef.instruct_i 
                                                 >> 7U))
                         , '#',5,(0x0000001fU & (vlSelfRef.instruct_i 
                                                 >> 0x0000000fU))
                         , '#',12,(vlSelfRef.instruct_i 
                                   >> 0x00000014U), '#',5,
                         (0x0000001fU & (vlSelfRef.instruct_i 
                                         >> 7U)), '#',32,vlSelfRef.top__DOT__i_L2_DU__DOT__wdata
                         , '~',32,vlSelfRef.top__DOT__i_L2_DU__DOT__wdata);
        } else if (VL_UNLIKELY(((0x37U == (0x0000007fU 
                                           & vlSelfRef.instruct_i))))) {
            VL_WRITEF_NX("%03d-%3x %08h  | lui  rd , imm\n                  - lui  r%-2d, %5h       {r%-2d -> 0x%h}\n",7
                         , '#',16,vlSelfRef.PC_N_o, '#',18,vlSelfRef.top__DOT__PC
                         , '#',32,vlSelfRef.instruct_i
                         , '#',5,(0x0000001fU & (vlSelfRef.instruct_i 
                                                 >> 7U))
                         , '#',20,(vlSelfRef.instruct_i 
                                   >> 0x0000000cU), '#',5,
                         (0x0000001fU & (vlSelfRef.instruct_i 
                                         >> 7U)), '#',32,vlSelfRef.top__DOT__i_L2_DU__DOT__wdata);
        } else if (VL_UNLIKELY((vlSelfRef.top__DOT__i_L2_DU__DOT__op_lw))) {
            VL_WRITEF_NX("%03d-%3x %08h  | lw   rd , offset(rs1)\n                  - lw   r%-2d, %6d(r%-2d) {r%-2d -> 0x%h}\n",8
                         , '#',16,vlSelfRef.PC_N_o, '#',18,vlSelfRef.top__DOT__PC
                         , '#',32,vlSelfRef.instruct_i
                         , '#',5,(0x0000001fU & (vlSelfRef.instruct_i 
                                                 >> 7U))
                         , '~',32,vlSelfRef.top__DOT__i_L3_XU__DOT__imm_ext_32b_s
                         , '#',5,(0x0000001fU & (vlSelfRef.instruct_i 
                                                 >> 0x0000000fU))
                         , '#',32,vlSelfRef.top__DOT__i_L2_DU__DOT__i_GPR__DOT__GPR
                         [(0x0000001fU & (vlSelfRef.instruct_i 
                                          >> 0x0000000fU))]
                         , '#',32,vlSelfRef.top__DOT__i_L4_SU__DOT__mem_out_val);
        } else if (VL_UNLIKELY((vlSelfRef.top__DOT__i_L2_DU__DOT__op_lbu))) {
            VL_WRITEF_NX("%03d-%3x %08h  | lbu  rd , offset(rs1)\n                  - lbu  r%-2d, %6d(r%-2d) {r%-2d -> 0x%h}\n",8
                         , '#',16,vlSelfRef.PC_N_o, '#',18,vlSelfRef.top__DOT__PC
                         , '#',32,vlSelfRef.instruct_i
                         , '#',5,(0x0000001fU & (vlSelfRef.instruct_i 
                                                 >> 7U))
                         , '~',32,vlSelfRef.top__DOT__i_L3_XU__DOT__imm_ext_32b_s
                         , '#',5,(0x0000001fU & (vlSelfRef.instruct_i 
                                                 >> 0x0000000fU))
                         , '#',5,(0x0000001fU & (vlSelfRef.instruct_i 
                                                 >> 7U))
                         , '#',8,(IData)(vlSelfRef.top__DOT__i_L4_SU__DOT__mem_dout_byte8));
        } else if (VL_UNLIKELY((vlSelfRef.top__DOT__i_L2_DU__DOT__op_sw))) {
            VL_WRITEF_NX("%03d-%3x %08h  | sw   rs2, offset(rs1)\n                  - sw   r%-2d, %6d(r%-2d) {M[0x%4h] -> 0x%h}\n",8
                         , '#',16,vlSelfRef.PC_N_o, '#',18,vlSelfRef.top__DOT__PC
                         , '#',32,vlSelfRef.instruct_i
                         , '#',5,(0x0000001fU & (vlSelfRef.instruct_i 
                                                 >> 0x00000014U))
                         , '~',32,vlSelfRef.top__DOT__i_L3_XU__DOT__imm_ext_32b_s
                         , '#',5,(0x0000001fU & (vlSelfRef.instruct_i 
                                                 >> 0x0000000fU))
                         , '#',32,vlSelfRef.top__DOT__i_L4_SU__DOT__mem_addr
                         , '#',32,vlSelfRef.top__DOT__i_L4_SU__DOT__mem_din);
        } else if (VL_UNLIKELY((vlSelfRef.top__DOT__i_L2_DU__DOT__op_sb))) {
            VL_WRITEF_NX("%03d-%3x %08h  | sb   rs2, offset(rs1)\n                  - sb   r%-2d, %6d(r%-2d) {M[0x%4h] -> 0x%h}\n",8
                         , '#',16,vlSelfRef.PC_N_o, '#',18,vlSelfRef.top__DOT__PC
                         , '#',32,vlSelfRef.instruct_i
                         , '#',5,(0x0000001fU & (vlSelfRef.instruct_i 
                                                 >> 0x00000014U))
                         , '~',32,vlSelfRef.top__DOT__i_L3_XU__DOT__imm_ext_32b_s
                         , '#',5,(0x0000001fU & (vlSelfRef.instruct_i 
                                                 >> 0x0000000fU))
                         , '#',32,vlSelfRef.top__DOT__i_L4_SU__DOT__mem_addr
                         , '#',8,(IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0));
        } else if ((0x67U == (0x0000007fU & vlSelfRef.instruct_i))) {
            VL_WRITEF_NX("%03d-%3x %08h  | jalr rd , offset(rs1)\n                  - jalr r%-2d, %6d(r%2d) {r%1d -> 0x%h | PC -> %3h}\n",9
                         , '#',16,vlSelfRef.PC_N_o, '#',18,vlSelfRef.top__DOT__PC
                         , '#',32,vlSelfRef.instruct_i
                         , '#',5,(0x0000001fU & (vlSelfRef.instruct_i 
                                                 >> 7U))
                         , '#',12,(vlSelfRef.instruct_i 
                                   >> 0x00000014U), '#',5,
                         (0x0000001fU & (vlSelfRef.instruct_i 
                                         >> 0x0000000fU))
                         , '#',5,(0x0000001fU & (vlSelfRef.instruct_i 
                                                 >> 7U))
                         , '#',32,vlSelfRef.top__DOT__i_L2_DU__DOT__wdata
                         , '#',18,vlSelfRef.top__DOT__i_L3_XU__DOT__next_PC);
        } else {
            VL_WRITEF_NX("%03d-%3x %08h  | Instruction err!!!\n                  - funct3=%1d opcode=%2h\n",5
                         , '#',16,vlSelfRef.PC_N_o, '#',18,vlSelfRef.top__DOT__PC
                         , '#',32,vlSelfRef.instruct_i
                         , '#',3,(7U & (vlSelfRef.instruct_i 
                                        >> 0x0000000cU))
                         , '#',7,(0x0000007fU & vlSelfRef.instruct_i));
        }
    }
    vlSelfRef.top__DOT__PC = ((IData)(vlSelfRef.rst)
                               ? 0U : vlSelfRef.top__DOT__i_L3_XU__DOT__next_PC);
    if (vlSelfRef.top__DOT__i_L2_DU__DOT__rst) {
        vlSelfRef.top__DOT____Vcellout__r_btn4____pinNumber4 = 0U;
        vlSelfRef.top__DOT__btn_p[4U] = vlSelfRef.top__DOT____Vcellout__r_btn4____pinNumber4;
        vlSelfRef.top__DOT__i_L2_DU__DOT__i_GPR__DOT____Vcellout__foor_loop_i__BRA__31__KET____DOT__R____pinNumber4 = 0U;
        vlSelfRef.top__DOT__i_L2_DU__DOT__i_GPR__DOT__GPR[31U] 
            = vlSelfRef.top__DOT__i_L2_DU__DOT__i_GPR__DOT____Vcellout__foor_loop_i__BRA__31__KET____DOT__R____pinNumber4;
        vlSelfRef.top__DOT__i_L2_DU__DOT__i_GPR__DOT____Vcellout__foor_loop_i__BRA__30__KET____DOT__R____pinNumber4 = 0U;
        vlSelfRef.top__DOT__i_L2_DU__DOT__i_GPR__DOT__GPR[30U] 
            = vlSelfRef.top__DOT__i_L2_DU__DOT__i_GPR__DOT____Vcellout__foor_loop_i__BRA__30__KET____DOT__R____pinNumber4;
        vlSelfRef.top__DOT__i_L2_DU__DOT__i_GPR__DOT____Vcellout__foor_loop_i__BRA__29__KET____DOT__R____pinNumber4 = 0U;
        vlSelfRef.top__DOT__i_L2_DU__DOT__i_GPR__DOT__GPR[29U] 
            = vlSelfRef.top__DOT__i_L2_DU__DOT__i_GPR__DOT____Vcellout__foor_loop_i__BRA__29__KET____DOT__R____pinNumber4;
        vlSelfRef.top__DOT__i_L2_DU__DOT__i_GPR__DOT____Vcellout__foor_loop_i__BRA__28__KET____DOT__R____pinNumber4 = 0U;
        vlSelfRef.top__DOT__i_L2_DU__DOT__i_GPR__DOT__GPR[28U] 
            = vlSelfRef.top__DOT__i_L2_DU__DOT__i_GPR__DOT____Vcellout__foor_loop_i__BRA__28__KET____DOT__R____pinNumber4;
        vlSelfRef.top__DOT__i_L2_DU__DOT__i_GPR__DOT____Vcellout__foor_loop_i__BRA__27__KET____DOT__R____pinNumber4 = 0U;
        vlSelfRef.top__DOT__i_L2_DU__DOT__i_GPR__DOT__GPR[27U] 
            = vlSelfRef.top__DOT__i_L2_DU__DOT__i_GPR__DOT____Vcellout__foor_loop_i__BRA__27__KET____DOT__R____pinNumber4;
        vlSelfRef.top__DOT__i_L2_DU__DOT__i_GPR__DOT____Vcellout__foor_loop_i__BRA__26__KET____DOT__R____pinNumber4 = 0U;
        vlSelfRef.top__DOT__i_L2_DU__DOT__i_GPR__DOT__GPR[26U] 
            = vlSelfRef.top__DOT__i_L2_DU__DOT__i_GPR__DOT____Vcellout__foor_loop_i__BRA__26__KET____DOT__R____pinNumber4;
        vlSelfRef.top__DOT__i_L2_DU__DOT__i_GPR__DOT____Vcellout__foor_loop_i__BRA__25__KET____DOT__R____pinNumber4 = 0U;
        vlSelfRef.top__DOT__i_L2_DU__DOT__i_GPR__DOT__GPR[25U] 
            = vlSelfRef.top__DOT__i_L2_DU__DOT__i_GPR__DOT____Vcellout__foor_loop_i__BRA__25__KET____DOT__R____pinNumber4;
        vlSelfRef.top__DOT__i_L2_DU__DOT__i_GPR__DOT____Vcellout__foor_loop_i__BRA__24__KET____DOT__R____pinNumber4 = 0U;
        vlSelfRef.top__DOT__i_L2_DU__DOT__i_GPR__DOT__GPR[24U] 
            = vlSelfRef.top__DOT__i_L2_DU__DOT__i_GPR__DOT____Vcellout__foor_loop_i__BRA__24__KET____DOT__R____pinNumber4;
        vlSelfRef.top__DOT__i_L2_DU__DOT__i_GPR__DOT____Vcellout__foor_loop_i__BRA__23__KET____DOT__R____pinNumber4 = 0U;
        vlSelfRef.top__DOT__i_L2_DU__DOT__i_GPR__DOT__GPR[23U] 
            = vlSelfRef.top__DOT__i_L2_DU__DOT__i_GPR__DOT____Vcellout__foor_loop_i__BRA__23__KET____DOT__R____pinNumber4;
        vlSelfRef.top__DOT__i_L2_DU__DOT__i_GPR__DOT____Vcellout__foor_loop_i__BRA__22__KET____DOT__R____pinNumber4 = 0U;
        vlSelfRef.top__DOT__i_L2_DU__DOT__i_GPR__DOT__GPR[22U] 
            = vlSelfRef.top__DOT__i_L2_DU__DOT__i_GPR__DOT____Vcellout__foor_loop_i__BRA__22__KET____DOT__R____pinNumber4;
        vlSelfRef.top__DOT__i_L2_DU__DOT__i_GPR__DOT____Vcellout__foor_loop_i__BRA__21__KET____DOT__R____pinNumber4 = 0U;
        vlSelfRef.top__DOT__i_L2_DU__DOT__i_GPR__DOT__GPR[21U] 
            = vlSelfRef.top__DOT__i_L2_DU__DOT__i_GPR__DOT____Vcellout__foor_loop_i__BRA__21__KET____DOT__R____pinNumber4;
        vlSelfRef.top__DOT__i_L2_DU__DOT__i_GPR__DOT____Vcellout__foor_loop_i__BRA__20__KET____DOT__R____pinNumber4 = 0U;
        vlSelfRef.top__DOT__i_L2_DU__DOT__i_GPR__DOT__GPR[20U] 
            = vlSelfRef.top__DOT__i_L2_DU__DOT__i_GPR__DOT____Vcellout__foor_loop_i__BRA__20__KET____DOT__R____pinNumber4;
        vlSelfRef.top__DOT__i_L2_DU__DOT__i_GPR__DOT____Vcellout__foor_loop_i__BRA__19__KET____DOT__R____pinNumber4 = 0U;
        vlSelfRef.top__DOT__i_L2_DU__DOT__i_GPR__DOT__GPR[19U] 
            = vlSelfRef.top__DOT__i_L2_DU__DOT__i_GPR__DOT____Vcellout__foor_loop_i__BRA__19__KET____DOT__R____pinNumber4;
        vlSelfRef.top__DOT__i_L2_DU__DOT__i_GPR__DOT____Vcellout__foor_loop_i__BRA__18__KET____DOT__R____pinNumber4 = 0U;
        vlSelfRef.top__DOT__i_L2_DU__DOT__i_GPR__DOT__GPR[18U] 
            = vlSelfRef.top__DOT__i_L2_DU__DOT__i_GPR__DOT____Vcellout__foor_loop_i__BRA__18__KET____DOT__R____pinNumber4;
        vlSelfRef.top__DOT__i_L2_DU__DOT__i_GPR__DOT____Vcellout__foor_loop_i__BRA__17__KET____DOT__R____pinNumber4 = 0U;
        vlSelfRef.top__DOT__i_L2_DU__DOT__i_GPR__DOT__GPR[17U] 
            = vlSelfRef.top__DOT__i_L2_DU__DOT__i_GPR__DOT____Vcellout__foor_loop_i__BRA__17__KET____DOT__R____pinNumber4;
        vlSelfRef.top__DOT__i_L2_DU__DOT__i_GPR__DOT____Vcellout__foor_loop_i__BRA__16__KET____DOT__R____pinNumber4 = 0U;
        vlSelfRef.top__DOT__i_L2_DU__DOT__i_GPR__DOT__GPR[16U] 
            = vlSelfRef.top__DOT__i_L2_DU__DOT__i_GPR__DOT____Vcellout__foor_loop_i__BRA__16__KET____DOT__R____pinNumber4;
        vlSelfRef.top__DOT__i_L2_DU__DOT__i_GPR__DOT____Vcellout__foor_loop_i__BRA__15__KET____DOT__R____pinNumber4 = 0U;
        vlSelfRef.top__DOT__i_L2_DU__DOT__i_GPR__DOT__GPR[15U] 
            = vlSelfRef.top__DOT__i_L2_DU__DOT__i_GPR__DOT____Vcellout__foor_loop_i__BRA__15__KET____DOT__R____pinNumber4;
        vlSelfRef.top__DOT__i_L2_DU__DOT__i_GPR__DOT____Vcellout__foor_loop_i__BRA__14__KET____DOT__R____pinNumber4 = 0U;
        vlSelfRef.top__DOT__i_L2_DU__DOT__i_GPR__DOT__GPR[14U] 
            = vlSelfRef.top__DOT__i_L2_DU__DOT__i_GPR__DOT____Vcellout__foor_loop_i__BRA__14__KET____DOT__R____pinNumber4;
        vlSelfRef.top__DOT__i_L2_DU__DOT__i_GPR__DOT____Vcellout__foor_loop_i__BRA__13__KET____DOT__R____pinNumber4 = 0U;
        vlSelfRef.top__DOT__i_L2_DU__DOT__i_GPR__DOT__GPR[13U] 
            = vlSelfRef.top__DOT__i_L2_DU__DOT__i_GPR__DOT____Vcellout__foor_loop_i__BRA__13__KET____DOT__R____pinNumber4;
        vlSelfRef.top__DOT__i_L2_DU__DOT__i_GPR__DOT____Vcellout__foor_loop_i__BRA__12__KET____DOT__R____pinNumber4 = 0U;
        vlSelfRef.top__DOT__i_L2_DU__DOT__i_GPR__DOT__GPR[12U] 
            = vlSelfRef.top__DOT__i_L2_DU__DOT__i_GPR__DOT____Vcellout__foor_loop_i__BRA__12__KET____DOT__R____pinNumber4;
        vlSelfRef.top__DOT__i_L2_DU__DOT__i_GPR__DOT____Vcellout__foor_loop_i__BRA__11__KET____DOT__R____pinNumber4 = 0U;
        vlSelfRef.top__DOT__i_L2_DU__DOT__i_GPR__DOT__GPR[11U] 
            = vlSelfRef.top__DOT__i_L2_DU__DOT__i_GPR__DOT____Vcellout__foor_loop_i__BRA__11__KET____DOT__R____pinNumber4;
        vlSelfRef.top__DOT__i_L2_DU__DOT__i_GPR__DOT____Vcellout__foor_loop_i__BRA__10__KET____DOT__R____pinNumber4 = 0U;
        vlSelfRef.top__DOT__i_L2_DU__DOT__i_GPR__DOT__GPR[10U] 
            = vlSelfRef.top__DOT__i_L2_DU__DOT__i_GPR__DOT____Vcellout__foor_loop_i__BRA__10__KET____DOT__R____pinNumber4;
        vlSelfRef.top__DOT__i_L2_DU__DOT__i_GPR__DOT____Vcellout__foor_loop_i__BRA__9__KET____DOT__R____pinNumber4 = 0U;
        vlSelfRef.top__DOT__i_L2_DU__DOT__i_GPR__DOT__GPR[9U] 
            = vlSelfRef.top__DOT__i_L2_DU__DOT__i_GPR__DOT____Vcellout__foor_loop_i__BRA__9__KET____DOT__R____pinNumber4;
        vlSelfRef.top__DOT__i_L2_DU__DOT__i_GPR__DOT____Vcellout__foor_loop_i__BRA__8__KET____DOT__R____pinNumber4 = 0U;
        vlSelfRef.top__DOT__i_L2_DU__DOT__i_GPR__DOT__GPR[8U] 
            = vlSelfRef.top__DOT__i_L2_DU__DOT__i_GPR__DOT____Vcellout__foor_loop_i__BRA__8__KET____DOT__R____pinNumber4;
        vlSelfRef.top__DOT__i_L2_DU__DOT__i_GPR__DOT____Vcellout__foor_loop_i__BRA__7__KET____DOT__R____pinNumber4 = 0U;
        vlSelfRef.top__DOT__i_L2_DU__DOT__i_GPR__DOT__GPR[7U] 
            = vlSelfRef.top__DOT__i_L2_DU__DOT__i_GPR__DOT____Vcellout__foor_loop_i__BRA__7__KET____DOT__R____pinNumber4;
        vlSelfRef.top__DOT__i_L2_DU__DOT__i_GPR__DOT____Vcellout__foor_loop_i__BRA__6__KET____DOT__R____pinNumber4 = 0U;
        vlSelfRef.top__DOT__i_L2_DU__DOT__i_GPR__DOT__GPR[6U] 
            = vlSelfRef.top__DOT__i_L2_DU__DOT__i_GPR__DOT____Vcellout__foor_loop_i__BRA__6__KET____DOT__R____pinNumber4;
        vlSelfRef.top__DOT__i_L2_DU__DOT__i_GPR__DOT____Vcellout__foor_loop_i__BRA__5__KET____DOT__R____pinNumber4 = 0U;
        vlSelfRef.top__DOT__i_L2_DU__DOT__i_GPR__DOT__GPR[5U] 
            = vlSelfRef.top__DOT__i_L2_DU__DOT__i_GPR__DOT____Vcellout__foor_loop_i__BRA__5__KET____DOT__R____pinNumber4;
        vlSelfRef.top__DOT__i_L2_DU__DOT__i_GPR__DOT____Vcellout__foor_loop_i__BRA__4__KET____DOT__R____pinNumber4 = 0U;
        vlSelfRef.top__DOT__i_L2_DU__DOT__i_GPR__DOT__GPR[4U] 
            = vlSelfRef.top__DOT__i_L2_DU__DOT__i_GPR__DOT____Vcellout__foor_loop_i__BRA__4__KET____DOT__R____pinNumber4;
        vlSelfRef.top__DOT__i_L2_DU__DOT__i_GPR__DOT____Vcellout__foor_loop_i__BRA__3__KET____DOT__R____pinNumber4 = 0U;
        vlSelfRef.top__DOT__i_L2_DU__DOT__i_GPR__DOT__GPR[3U] 
            = vlSelfRef.top__DOT__i_L2_DU__DOT__i_GPR__DOT____Vcellout__foor_loop_i__BRA__3__KET____DOT__R____pinNumber4;
        vlSelfRef.top__DOT__i_L2_DU__DOT__i_GPR__DOT____Vcellout__foor_loop_i__BRA__2__KET____DOT__R____pinNumber4 = 0U;
        vlSelfRef.top__DOT__i_L2_DU__DOT__i_GPR__DOT__GPR[2U] 
            = vlSelfRef.top__DOT__i_L2_DU__DOT__i_GPR__DOT____Vcellout__foor_loop_i__BRA__2__KET____DOT__R____pinNumber4;
        vlSelfRef.top__DOT__i_L2_DU__DOT__i_GPR__DOT____Vcellout__foor_loop_i__BRA__1__KET____DOT__R____pinNumber4 = 0U;
        vlSelfRef.top__DOT__i_L2_DU__DOT__i_GPR__DOT__GPR[1U] 
            = vlSelfRef.top__DOT__i_L2_DU__DOT__i_GPR__DOT____Vcellout__foor_loop_i__BRA__1__KET____DOT__R____pinNumber4;
        vlSelfRef.top__DOT__i_L2_DU__DOT__i_GPR__DOT____Vcellout__foor_loop_i__BRA__0__KET____DOT__R____pinNumber4 = 0U;
    } else {
        vlSelfRef.top__DOT____Vcellout__r_btn4____pinNumber4 
            = vlSelfRef.top__DOT____Vcellout__r_btn3____pinNumber4;
        vlSelfRef.top__DOT__btn_p[4U] = vlSelfRef.top__DOT____Vcellout__r_btn4____pinNumber4;
        if ((IData)(((0x00000f80U == (0x00000f80U & vlSelfRef.instruct_i)) 
                     & (IData)(vlSelfRef.top__DOT__i_L2_DU__DOT__wen)))) {
            vlSelfRef.top__DOT__i_L2_DU__DOT__i_GPR__DOT____Vcellout__foor_loop_i__BRA__31__KET____DOT__R____pinNumber4 
                = vlSelfRef.top__DOT__i_L2_DU__DOT__wdata;
        }
        vlSelfRef.top__DOT__i_L2_DU__DOT__i_GPR__DOT__GPR[31U] 
            = vlSelfRef.top__DOT__i_L2_DU__DOT__i_GPR__DOT____Vcellout__foor_loop_i__BRA__31__KET____DOT__R____pinNumber4;
        if ((IData)(((0x00000f00U == (0x00000f80U & vlSelfRef.instruct_i)) 
                     & (IData)(vlSelfRef.top__DOT__i_L2_DU__DOT__wen)))) {
            vlSelfRef.top__DOT__i_L2_DU__DOT__i_GPR__DOT____Vcellout__foor_loop_i__BRA__30__KET____DOT__R____pinNumber4 
                = vlSelfRef.top__DOT__i_L2_DU__DOT__wdata;
        }
        vlSelfRef.top__DOT__i_L2_DU__DOT__i_GPR__DOT__GPR[30U] 
            = vlSelfRef.top__DOT__i_L2_DU__DOT__i_GPR__DOT____Vcellout__foor_loop_i__BRA__30__KET____DOT__R____pinNumber4;
        if ((IData)(((0x00000e80U == (0x00000f80U & vlSelfRef.instruct_i)) 
                     & (IData)(vlSelfRef.top__DOT__i_L2_DU__DOT__wen)))) {
            vlSelfRef.top__DOT__i_L2_DU__DOT__i_GPR__DOT____Vcellout__foor_loop_i__BRA__29__KET____DOT__R____pinNumber4 
                = vlSelfRef.top__DOT__i_L2_DU__DOT__wdata;
        }
        vlSelfRef.top__DOT__i_L2_DU__DOT__i_GPR__DOT__GPR[29U] 
            = vlSelfRef.top__DOT__i_L2_DU__DOT__i_GPR__DOT____Vcellout__foor_loop_i__BRA__29__KET____DOT__R____pinNumber4;
        if ((IData)(((0x00000e00U == (0x00000f80U & vlSelfRef.instruct_i)) 
                     & (IData)(vlSelfRef.top__DOT__i_L2_DU__DOT__wen)))) {
            vlSelfRef.top__DOT__i_L2_DU__DOT__i_GPR__DOT____Vcellout__foor_loop_i__BRA__28__KET____DOT__R____pinNumber4 
                = vlSelfRef.top__DOT__i_L2_DU__DOT__wdata;
        }
        vlSelfRef.top__DOT__i_L2_DU__DOT__i_GPR__DOT__GPR[28U] 
            = vlSelfRef.top__DOT__i_L2_DU__DOT__i_GPR__DOT____Vcellout__foor_loop_i__BRA__28__KET____DOT__R____pinNumber4;
        if ((IData)(((0x00000d80U == (0x00000f80U & vlSelfRef.instruct_i)) 
                     & (IData)(vlSelfRef.top__DOT__i_L2_DU__DOT__wen)))) {
            vlSelfRef.top__DOT__i_L2_DU__DOT__i_GPR__DOT____Vcellout__foor_loop_i__BRA__27__KET____DOT__R____pinNumber4 
                = vlSelfRef.top__DOT__i_L2_DU__DOT__wdata;
        }
        vlSelfRef.top__DOT__i_L2_DU__DOT__i_GPR__DOT__GPR[27U] 
            = vlSelfRef.top__DOT__i_L2_DU__DOT__i_GPR__DOT____Vcellout__foor_loop_i__BRA__27__KET____DOT__R____pinNumber4;
        if ((IData)(((0x00000d00U == (0x00000f80U & vlSelfRef.instruct_i)) 
                     & (IData)(vlSelfRef.top__DOT__i_L2_DU__DOT__wen)))) {
            vlSelfRef.top__DOT__i_L2_DU__DOT__i_GPR__DOT____Vcellout__foor_loop_i__BRA__26__KET____DOT__R____pinNumber4 
                = vlSelfRef.top__DOT__i_L2_DU__DOT__wdata;
        }
        vlSelfRef.top__DOT__i_L2_DU__DOT__i_GPR__DOT__GPR[26U] 
            = vlSelfRef.top__DOT__i_L2_DU__DOT__i_GPR__DOT____Vcellout__foor_loop_i__BRA__26__KET____DOT__R____pinNumber4;
        if ((IData)(((0x00000c80U == (0x00000f80U & vlSelfRef.instruct_i)) 
                     & (IData)(vlSelfRef.top__DOT__i_L2_DU__DOT__wen)))) {
            vlSelfRef.top__DOT__i_L2_DU__DOT__i_GPR__DOT____Vcellout__foor_loop_i__BRA__25__KET____DOT__R____pinNumber4 
                = vlSelfRef.top__DOT__i_L2_DU__DOT__wdata;
        }
        vlSelfRef.top__DOT__i_L2_DU__DOT__i_GPR__DOT__GPR[25U] 
            = vlSelfRef.top__DOT__i_L2_DU__DOT__i_GPR__DOT____Vcellout__foor_loop_i__BRA__25__KET____DOT__R____pinNumber4;
        if ((IData)(((0x00000c00U == (0x00000f80U & vlSelfRef.instruct_i)) 
                     & (IData)(vlSelfRef.top__DOT__i_L2_DU__DOT__wen)))) {
            vlSelfRef.top__DOT__i_L2_DU__DOT__i_GPR__DOT____Vcellout__foor_loop_i__BRA__24__KET____DOT__R____pinNumber4 
                = vlSelfRef.top__DOT__i_L2_DU__DOT__wdata;
        }
        vlSelfRef.top__DOT__i_L2_DU__DOT__i_GPR__DOT__GPR[24U] 
            = vlSelfRef.top__DOT__i_L2_DU__DOT__i_GPR__DOT____Vcellout__foor_loop_i__BRA__24__KET____DOT__R____pinNumber4;
        if ((IData)(((0x00000b80U == (0x00000f80U & vlSelfRef.instruct_i)) 
                     & (IData)(vlSelfRef.top__DOT__i_L2_DU__DOT__wen)))) {
            vlSelfRef.top__DOT__i_L2_DU__DOT__i_GPR__DOT____Vcellout__foor_loop_i__BRA__23__KET____DOT__R____pinNumber4 
                = vlSelfRef.top__DOT__i_L2_DU__DOT__wdata;
        }
        vlSelfRef.top__DOT__i_L2_DU__DOT__i_GPR__DOT__GPR[23U] 
            = vlSelfRef.top__DOT__i_L2_DU__DOT__i_GPR__DOT____Vcellout__foor_loop_i__BRA__23__KET____DOT__R____pinNumber4;
        if ((IData)(((0x00000b00U == (0x00000f80U & vlSelfRef.instruct_i)) 
                     & (IData)(vlSelfRef.top__DOT__i_L2_DU__DOT__wen)))) {
            vlSelfRef.top__DOT__i_L2_DU__DOT__i_GPR__DOT____Vcellout__foor_loop_i__BRA__22__KET____DOT__R____pinNumber4 
                = vlSelfRef.top__DOT__i_L2_DU__DOT__wdata;
        }
        vlSelfRef.top__DOT__i_L2_DU__DOT__i_GPR__DOT__GPR[22U] 
            = vlSelfRef.top__DOT__i_L2_DU__DOT__i_GPR__DOT____Vcellout__foor_loop_i__BRA__22__KET____DOT__R____pinNumber4;
        if ((IData)(((0x00000a80U == (0x00000f80U & vlSelfRef.instruct_i)) 
                     & (IData)(vlSelfRef.top__DOT__i_L2_DU__DOT__wen)))) {
            vlSelfRef.top__DOT__i_L2_DU__DOT__i_GPR__DOT____Vcellout__foor_loop_i__BRA__21__KET____DOT__R____pinNumber4 
                = vlSelfRef.top__DOT__i_L2_DU__DOT__wdata;
        }
        vlSelfRef.top__DOT__i_L2_DU__DOT__i_GPR__DOT__GPR[21U] 
            = vlSelfRef.top__DOT__i_L2_DU__DOT__i_GPR__DOT____Vcellout__foor_loop_i__BRA__21__KET____DOT__R____pinNumber4;
        if ((IData)(((0x00000a00U == (0x00000f80U & vlSelfRef.instruct_i)) 
                     & (IData)(vlSelfRef.top__DOT__i_L2_DU__DOT__wen)))) {
            vlSelfRef.top__DOT__i_L2_DU__DOT__i_GPR__DOT____Vcellout__foor_loop_i__BRA__20__KET____DOT__R____pinNumber4 
                = vlSelfRef.top__DOT__i_L2_DU__DOT__wdata;
        }
        vlSelfRef.top__DOT__i_L2_DU__DOT__i_GPR__DOT__GPR[20U] 
            = vlSelfRef.top__DOT__i_L2_DU__DOT__i_GPR__DOT____Vcellout__foor_loop_i__BRA__20__KET____DOT__R____pinNumber4;
        if ((IData)(((0x00000980U == (0x00000f80U & vlSelfRef.instruct_i)) 
                     & (IData)(vlSelfRef.top__DOT__i_L2_DU__DOT__wen)))) {
            vlSelfRef.top__DOT__i_L2_DU__DOT__i_GPR__DOT____Vcellout__foor_loop_i__BRA__19__KET____DOT__R____pinNumber4 
                = vlSelfRef.top__DOT__i_L2_DU__DOT__wdata;
        }
        vlSelfRef.top__DOT__i_L2_DU__DOT__i_GPR__DOT__GPR[19U] 
            = vlSelfRef.top__DOT__i_L2_DU__DOT__i_GPR__DOT____Vcellout__foor_loop_i__BRA__19__KET____DOT__R____pinNumber4;
        if ((IData)(((0x00000900U == (0x00000f80U & vlSelfRef.instruct_i)) 
                     & (IData)(vlSelfRef.top__DOT__i_L2_DU__DOT__wen)))) {
            vlSelfRef.top__DOT__i_L2_DU__DOT__i_GPR__DOT____Vcellout__foor_loop_i__BRA__18__KET____DOT__R____pinNumber4 
                = vlSelfRef.top__DOT__i_L2_DU__DOT__wdata;
        }
        vlSelfRef.top__DOT__i_L2_DU__DOT__i_GPR__DOT__GPR[18U] 
            = vlSelfRef.top__DOT__i_L2_DU__DOT__i_GPR__DOT____Vcellout__foor_loop_i__BRA__18__KET____DOT__R____pinNumber4;
        if ((IData)(((0x00000880U == (0x00000f80U & vlSelfRef.instruct_i)) 
                     & (IData)(vlSelfRef.top__DOT__i_L2_DU__DOT__wen)))) {
            vlSelfRef.top__DOT__i_L2_DU__DOT__i_GPR__DOT____Vcellout__foor_loop_i__BRA__17__KET____DOT__R____pinNumber4 
                = vlSelfRef.top__DOT__i_L2_DU__DOT__wdata;
        }
        vlSelfRef.top__DOT__i_L2_DU__DOT__i_GPR__DOT__GPR[17U] 
            = vlSelfRef.top__DOT__i_L2_DU__DOT__i_GPR__DOT____Vcellout__foor_loop_i__BRA__17__KET____DOT__R____pinNumber4;
        if ((IData)(((0x00000800U == (0x00000f80U & vlSelfRef.instruct_i)) 
                     & (IData)(vlSelfRef.top__DOT__i_L2_DU__DOT__wen)))) {
            vlSelfRef.top__DOT__i_L2_DU__DOT__i_GPR__DOT____Vcellout__foor_loop_i__BRA__16__KET____DOT__R____pinNumber4 
                = vlSelfRef.top__DOT__i_L2_DU__DOT__wdata;
        }
        vlSelfRef.top__DOT__i_L2_DU__DOT__i_GPR__DOT__GPR[16U] 
            = vlSelfRef.top__DOT__i_L2_DU__DOT__i_GPR__DOT____Vcellout__foor_loop_i__BRA__16__KET____DOT__R____pinNumber4;
        if ((IData)(((0x00000780U == (0x00000f80U & vlSelfRef.instruct_i)) 
                     & (IData)(vlSelfRef.top__DOT__i_L2_DU__DOT__wen)))) {
            vlSelfRef.top__DOT__i_L2_DU__DOT__i_GPR__DOT____Vcellout__foor_loop_i__BRA__15__KET____DOT__R____pinNumber4 
                = vlSelfRef.top__DOT__i_L2_DU__DOT__wdata;
        }
        vlSelfRef.top__DOT__i_L2_DU__DOT__i_GPR__DOT__GPR[15U] 
            = vlSelfRef.top__DOT__i_L2_DU__DOT__i_GPR__DOT____Vcellout__foor_loop_i__BRA__15__KET____DOT__R____pinNumber4;
        if ((IData)(((0x00000700U == (0x00000f80U & vlSelfRef.instruct_i)) 
                     & (IData)(vlSelfRef.top__DOT__i_L2_DU__DOT__wen)))) {
            vlSelfRef.top__DOT__i_L2_DU__DOT__i_GPR__DOT____Vcellout__foor_loop_i__BRA__14__KET____DOT__R____pinNumber4 
                = vlSelfRef.top__DOT__i_L2_DU__DOT__wdata;
        }
        vlSelfRef.top__DOT__i_L2_DU__DOT__i_GPR__DOT__GPR[14U] 
            = vlSelfRef.top__DOT__i_L2_DU__DOT__i_GPR__DOT____Vcellout__foor_loop_i__BRA__14__KET____DOT__R____pinNumber4;
        if ((IData)(((0x00000680U == (0x00000f80U & vlSelfRef.instruct_i)) 
                     & (IData)(vlSelfRef.top__DOT__i_L2_DU__DOT__wen)))) {
            vlSelfRef.top__DOT__i_L2_DU__DOT__i_GPR__DOT____Vcellout__foor_loop_i__BRA__13__KET____DOT__R____pinNumber4 
                = vlSelfRef.top__DOT__i_L2_DU__DOT__wdata;
        }
        vlSelfRef.top__DOT__i_L2_DU__DOT__i_GPR__DOT__GPR[13U] 
            = vlSelfRef.top__DOT__i_L2_DU__DOT__i_GPR__DOT____Vcellout__foor_loop_i__BRA__13__KET____DOT__R____pinNumber4;
        if ((IData)(((0x00000600U == (0x00000f80U & vlSelfRef.instruct_i)) 
                     & (IData)(vlSelfRef.top__DOT__i_L2_DU__DOT__wen)))) {
            vlSelfRef.top__DOT__i_L2_DU__DOT__i_GPR__DOT____Vcellout__foor_loop_i__BRA__12__KET____DOT__R____pinNumber4 
                = vlSelfRef.top__DOT__i_L2_DU__DOT__wdata;
        }
        vlSelfRef.top__DOT__i_L2_DU__DOT__i_GPR__DOT__GPR[12U] 
            = vlSelfRef.top__DOT__i_L2_DU__DOT__i_GPR__DOT____Vcellout__foor_loop_i__BRA__12__KET____DOT__R____pinNumber4;
        if ((IData)(((0x00000580U == (0x00000f80U & vlSelfRef.instruct_i)) 
                     & (IData)(vlSelfRef.top__DOT__i_L2_DU__DOT__wen)))) {
            vlSelfRef.top__DOT__i_L2_DU__DOT__i_GPR__DOT____Vcellout__foor_loop_i__BRA__11__KET____DOT__R____pinNumber4 
                = vlSelfRef.top__DOT__i_L2_DU__DOT__wdata;
        }
        vlSelfRef.top__DOT__i_L2_DU__DOT__i_GPR__DOT__GPR[11U] 
            = vlSelfRef.top__DOT__i_L2_DU__DOT__i_GPR__DOT____Vcellout__foor_loop_i__BRA__11__KET____DOT__R____pinNumber4;
        if ((IData)(((0x00000500U == (0x00000f80U & vlSelfRef.instruct_i)) 
                     & (IData)(vlSelfRef.top__DOT__i_L2_DU__DOT__wen)))) {
            vlSelfRef.top__DOT__i_L2_DU__DOT__i_GPR__DOT____Vcellout__foor_loop_i__BRA__10__KET____DOT__R____pinNumber4 
                = vlSelfRef.top__DOT__i_L2_DU__DOT__wdata;
        }
        vlSelfRef.top__DOT__i_L2_DU__DOT__i_GPR__DOT__GPR[10U] 
            = vlSelfRef.top__DOT__i_L2_DU__DOT__i_GPR__DOT____Vcellout__foor_loop_i__BRA__10__KET____DOT__R____pinNumber4;
        if ((IData)(((0x00000480U == (0x00000f80U & vlSelfRef.instruct_i)) 
                     & (IData)(vlSelfRef.top__DOT__i_L2_DU__DOT__wen)))) {
            vlSelfRef.top__DOT__i_L2_DU__DOT__i_GPR__DOT____Vcellout__foor_loop_i__BRA__9__KET____DOT__R____pinNumber4 
                = vlSelfRef.top__DOT__i_L2_DU__DOT__wdata;
        }
        vlSelfRef.top__DOT__i_L2_DU__DOT__i_GPR__DOT__GPR[9U] 
            = vlSelfRef.top__DOT__i_L2_DU__DOT__i_GPR__DOT____Vcellout__foor_loop_i__BRA__9__KET____DOT__R____pinNumber4;
        if ((IData)(((0x00000400U == (0x00000f80U & vlSelfRef.instruct_i)) 
                     & (IData)(vlSelfRef.top__DOT__i_L2_DU__DOT__wen)))) {
            vlSelfRef.top__DOT__i_L2_DU__DOT__i_GPR__DOT____Vcellout__foor_loop_i__BRA__8__KET____DOT__R____pinNumber4 
                = vlSelfRef.top__DOT__i_L2_DU__DOT__wdata;
        }
        vlSelfRef.top__DOT__i_L2_DU__DOT__i_GPR__DOT__GPR[8U] 
            = vlSelfRef.top__DOT__i_L2_DU__DOT__i_GPR__DOT____Vcellout__foor_loop_i__BRA__8__KET____DOT__R____pinNumber4;
        if ((IData)(((0x00000380U == (0x00000f80U & vlSelfRef.instruct_i)) 
                     & (IData)(vlSelfRef.top__DOT__i_L2_DU__DOT__wen)))) {
            vlSelfRef.top__DOT__i_L2_DU__DOT__i_GPR__DOT____Vcellout__foor_loop_i__BRA__7__KET____DOT__R____pinNumber4 
                = vlSelfRef.top__DOT__i_L2_DU__DOT__wdata;
        }
        vlSelfRef.top__DOT__i_L2_DU__DOT__i_GPR__DOT__GPR[7U] 
            = vlSelfRef.top__DOT__i_L2_DU__DOT__i_GPR__DOT____Vcellout__foor_loop_i__BRA__7__KET____DOT__R____pinNumber4;
        if ((IData)(((0x00000300U == (0x00000f80U & vlSelfRef.instruct_i)) 
                     & (IData)(vlSelfRef.top__DOT__i_L2_DU__DOT__wen)))) {
            vlSelfRef.top__DOT__i_L2_DU__DOT__i_GPR__DOT____Vcellout__foor_loop_i__BRA__6__KET____DOT__R____pinNumber4 
                = vlSelfRef.top__DOT__i_L2_DU__DOT__wdata;
        }
        vlSelfRef.top__DOT__i_L2_DU__DOT__i_GPR__DOT__GPR[6U] 
            = vlSelfRef.top__DOT__i_L2_DU__DOT__i_GPR__DOT____Vcellout__foor_loop_i__BRA__6__KET____DOT__R____pinNumber4;
        if ((IData)(((0x00000280U == (0x00000f80U & vlSelfRef.instruct_i)) 
                     & (IData)(vlSelfRef.top__DOT__i_L2_DU__DOT__wen)))) {
            vlSelfRef.top__DOT__i_L2_DU__DOT__i_GPR__DOT____Vcellout__foor_loop_i__BRA__5__KET____DOT__R____pinNumber4 
                = vlSelfRef.top__DOT__i_L2_DU__DOT__wdata;
        }
        vlSelfRef.top__DOT__i_L2_DU__DOT__i_GPR__DOT__GPR[5U] 
            = vlSelfRef.top__DOT__i_L2_DU__DOT__i_GPR__DOT____Vcellout__foor_loop_i__BRA__5__KET____DOT__R____pinNumber4;
        if ((IData)(((0x00000200U == (0x00000f80U & vlSelfRef.instruct_i)) 
                     & (IData)(vlSelfRef.top__DOT__i_L2_DU__DOT__wen)))) {
            vlSelfRef.top__DOT__i_L2_DU__DOT__i_GPR__DOT____Vcellout__foor_loop_i__BRA__4__KET____DOT__R____pinNumber4 
                = vlSelfRef.top__DOT__i_L2_DU__DOT__wdata;
        }
        vlSelfRef.top__DOT__i_L2_DU__DOT__i_GPR__DOT__GPR[4U] 
            = vlSelfRef.top__DOT__i_L2_DU__DOT__i_GPR__DOT____Vcellout__foor_loop_i__BRA__4__KET____DOT__R____pinNumber4;
        if ((IData)(((0x00000180U == (0x00000f80U & vlSelfRef.instruct_i)) 
                     & (IData)(vlSelfRef.top__DOT__i_L2_DU__DOT__wen)))) {
            vlSelfRef.top__DOT__i_L2_DU__DOT__i_GPR__DOT____Vcellout__foor_loop_i__BRA__3__KET____DOT__R____pinNumber4 
                = vlSelfRef.top__DOT__i_L2_DU__DOT__wdata;
        }
        vlSelfRef.top__DOT__i_L2_DU__DOT__i_GPR__DOT__GPR[3U] 
            = vlSelfRef.top__DOT__i_L2_DU__DOT__i_GPR__DOT____Vcellout__foor_loop_i__BRA__3__KET____DOT__R____pinNumber4;
        if ((IData)(((0x00000100U == (0x00000f80U & vlSelfRef.instruct_i)) 
                     & (IData)(vlSelfRef.top__DOT__i_L2_DU__DOT__wen)))) {
            vlSelfRef.top__DOT__i_L2_DU__DOT__i_GPR__DOT____Vcellout__foor_loop_i__BRA__2__KET____DOT__R____pinNumber4 
                = vlSelfRef.top__DOT__i_L2_DU__DOT__wdata;
        }
        vlSelfRef.top__DOT__i_L2_DU__DOT__i_GPR__DOT__GPR[2U] 
            = vlSelfRef.top__DOT__i_L2_DU__DOT__i_GPR__DOT____Vcellout__foor_loop_i__BRA__2__KET____DOT__R____pinNumber4;
        if ((IData)(((0x00000080U == (0x00000f80U & vlSelfRef.instruct_i)) 
                     & (IData)(vlSelfRef.top__DOT__i_L2_DU__DOT__wen)))) {
            vlSelfRef.top__DOT__i_L2_DU__DOT__i_GPR__DOT____Vcellout__foor_loop_i__BRA__1__KET____DOT__R____pinNumber4 
                = vlSelfRef.top__DOT__i_L2_DU__DOT__wdata;
        }
        vlSelfRef.top__DOT__i_L2_DU__DOT__i_GPR__DOT__GPR[1U] 
            = vlSelfRef.top__DOT__i_L2_DU__DOT__i_GPR__DOT____Vcellout__foor_loop_i__BRA__1__KET____DOT__R____pinNumber4;
        if ((IData)(((0U == (0x00000f80U & vlSelfRef.instruct_i)) 
                     & (IData)(vlSelfRef.top__DOT__i_L2_DU__DOT__wen)))) {
            vlSelfRef.top__DOT__i_L2_DU__DOT__i_GPR__DOT____Vcellout__foor_loop_i__BRA__0__KET____DOT__R____pinNumber4 
                = vlSelfRef.top__DOT__i_L2_DU__DOT__wdata;
        }
    }
    vlSelfRef.top__DOT__i_L2_DU__DOT__i_GPR__DOT__GPR[0U] 
        = vlSelfRef.top__DOT__i_L2_DU__DOT__i_GPR__DOT____Vcellout__foor_loop_i__BRA__0__KET____DOT__R____pinNumber4;
    vlSelfRef.PC_N_o = (0x0000ffffU & (vlSelfRef.top__DOT__PC 
                                       >> 2U));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0 = (0x000000ffU 
                                                & vlSelfRef.top__DOT__i_L2_DU__DOT__i_GPR__DOT__GPR
                                                [(0x0000001fU 
                                                  & (vlSelfRef.instruct_i 
                                                     >> 0x00000014U))]);
    vlSelfRef.top__DOT__i_L4_SU__DOT__mem_addr = (vlSelfRef.top__DOT__i_L2_DU__DOT__i_GPR__DOT__GPR
                                                  [
                                                  (0x0000001fU 
                                                   & (vlSelfRef.instruct_i 
                                                      >> 0x0000000fU))] 
                                                  + vlSelfRef.top__DOT__i_L3_XU__DOT__imm_ext_32b_s);
    vlSelfRef.uart_tx = ((0x0028U < (IData)(vlSelfRef.PC_N_o)) 
                         | (0U == vlSelfRef.instruct_i));
    vlSelfRef.top__DOT____Vcellout__r_btn3____pinNumber4 
        = ((IData)(vlSelfRef.top__DOT__i_L2_DU__DOT__rst)
            ? 0U : (IData)(vlSelfRef.top__DOT____Vcellout__r_btn2____pinNumber4));
    vlSelfRef.top__DOT__btn_p[3U] = vlSelfRef.top__DOT____Vcellout__r_btn3____pinNumber4;
    vlSelfRef.top__DOT__i_L3_XU__DOT__next_PC = (0x0003ffffU 
                                                 & ((0x67U 
                                                     == 
                                                     (0x0000007fU 
                                                      & vlSelfRef.instruct_i))
                                                     ? 
                                                    (0x0003fffeU 
                                                     & vlSelfRef.top__DOT__i_L4_SU__DOT__mem_addr)
                                                     : 
                                                    ((IData)(4U) 
                                                     + vlSelfRef.top__DOT__PC)));
    vlSelfRef.top__DOT__i_L4_SU__DOT__mem_wen = ((~ 
                                                  (0U 
                                                   != 
                                                   (vlSelfRef.top__DOT__i_L4_SU__DOT__mem_addr 
                                                    >> 0x0000001dU))) 
                                                 & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5));
    vlSelfRef.top__DOT__i_L4_SU__DOT__mem_din = ((IData)(vlSelfRef.top__DOT__i_L2_DU__DOT__op_sb)
                                                  ? 
                                                 ((3U 
                                                   == 
                                                   (3U 
                                                    & vlSelfRef.top__DOT__i_L4_SU__DOT__mem_addr))
                                                   ? 
                                                  (vlSelfRef.top__DOT__i_L2_DU__DOT__i_GPR__DOT__GPR
                                                   [
                                                   (0x0000001fU 
                                                    & (vlSelfRef.instruct_i 
                                                       >> 0x00000014U))] 
                                                   << 0x00000018U)
                                                   : 
                                                  ((2U 
                                                    == 
                                                    (3U 
                                                     & vlSelfRef.top__DOT__i_L4_SU__DOT__mem_addr))
                                                    ? 
                                                   ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0) 
                                                    << 0x00000010U)
                                                    : 
                                                   ((1U 
                                                     == 
                                                     (3U 
                                                      & vlSelfRef.top__DOT__i_L4_SU__DOT__mem_addr))
                                                     ? 
                                                    ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0) 
                                                     << 8U)
                                                     : (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0))))
                                                  : vlSelfRef.top__DOT__i_L2_DU__DOT__i_GPR__DOT__GPR
                                                 [(0x0000001fU 
                                                   & (vlSelfRef.instruct_i 
                                                      >> 0x00000014U))]);
    if ((((~ (0U != (vlSelfRef.top__DOT__i_L4_SU__DOT__mem_addr 
                     >> 0x0000001dU))) & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3)) 
         | (IData)(vlSelfRef.top__DOT__i_L4_SU__DOT__mem_wen))) {
        Vtop___024root____Vdpiimwrap_top__DOT__i_L4_SU__DOT__pmem_read_TOP(vlSelfRef.top__DOT__i_L4_SU__DOT__mem_addr, vlSelfRef.__Vfunc_top__DOT__i_L4_SU__DOT__pmem_read__0__Vfuncout);
        vlSelfRef.top__DOT__i_L4_SU__DOT__mem_dout 
            = vlSelfRef.__Vfunc_top__DOT__i_L4_SU__DOT__pmem_read__0__Vfuncout;
        if (vlSelfRef.top__DOT__i_L4_SU__DOT__mem_wen) {
            Vtop___024root____Vdpiimwrap_top__DOT__i_L4_SU__DOT__pmem_write_TOP(vlSelfRef.top__DOT__i_L4_SU__DOT__mem_addr, vlSelfRef.top__DOT__i_L4_SU__DOT__mem_din, 
                                                                                ((((((3U 
                                                                                == 
                                                                                (3U 
                                                                                & vlSelfRef.top__DOT__i_L4_SU__DOT__mem_addr)) 
                                                                                & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1)) 
                                                                                | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2)) 
                                                                                << 3U) 
                                                                                | ((((2U 
                                                                                == 
                                                                                (3U 
                                                                                & vlSelfRef.top__DOT__i_L4_SU__DOT__mem_addr)) 
                                                                                & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1)) 
                                                                                | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2)) 
                                                                                << 2U)) 
                                                                                | (((((1U 
                                                                                == 
                                                                                (3U 
                                                                                & vlSelfRef.top__DOT__i_L4_SU__DOT__mem_addr)) 
                                                                                & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1)) 
                                                                                | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2)) 
                                                                                << 1U) 
                                                                                | (((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1) 
                                                                                & (0U 
                                                                                == 
                                                                                (3U 
                                                                                & vlSelfRef.top__DOT__i_L4_SU__DOT__mem_addr))) 
                                                                                | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2)))));
        }
    } else {
        vlSelfRef.top__DOT__i_L4_SU__DOT__mem_dout = 0U;
    }
    if (vlSelfRef.top__DOT__i_L2_DU__DOT__rst) {
        vlSelfRef.top__DOT____Vcellout__r_btn2____pinNumber4 = 0U;
        vlSelfRef.top__DOT____Vcellout__r_btn1____pinNumber4 = 0U;
        vlSelfRef.top__DOT____Vcellout__r_btn0____pinNumber4 = 0U;
    } else {
        vlSelfRef.top__DOT____Vcellout__r_btn2____pinNumber4 
            = vlSelfRef.top__DOT____Vcellout__r_btn1____pinNumber4;
        vlSelfRef.top__DOT____Vcellout__r_btn1____pinNumber4 
            = vlSelfRef.top__DOT____Vcellout__r_btn0____pinNumber4;
        vlSelfRef.top__DOT____Vcellout__r_btn0____pinNumber4 
            = vlSelfRef.btn;
    }
    vlSelfRef.top__DOT__btn_p[2U] = vlSelfRef.top__DOT____Vcellout__r_btn2____pinNumber4;
    vlSelfRef.top__DOT__i_L4_SU__DOT__mem_dout_byte8 
        = (0x000000ffU & ((3U == (3U & vlSelfRef.top__DOT__i_L4_SU__DOT__mem_addr))
                           ? (vlSelfRef.top__DOT__i_L4_SU__DOT__mem_dout 
                              >> 0x00000018U) : ((2U 
                                                  == 
                                                  (3U 
                                                   & vlSelfRef.top__DOT__i_L4_SU__DOT__mem_addr))
                                                  ? 
                                                 (vlSelfRef.top__DOT__i_L4_SU__DOT__mem_dout 
                                                  >> 0x00000010U)
                                                  : 
                                                 ((1U 
                                                   == 
                                                   (3U 
                                                    & vlSelfRef.top__DOT__i_L4_SU__DOT__mem_addr))
                                                   ? 
                                                  (vlSelfRef.top__DOT__i_L4_SU__DOT__mem_dout 
                                                   >> 8U)
                                                   : vlSelfRef.top__DOT__i_L4_SU__DOT__mem_dout))));
    vlSelfRef.top__DOT__i_L4_SU__DOT__mem_out_val = 
        ((IData)(vlSelfRef.top__DOT__i_L2_DU__DOT__op_lbu)
          ? (IData)(vlSelfRef.top__DOT__i_L4_SU__DOT__mem_dout_byte8)
          : vlSelfRef.top__DOT__i_L4_SU__DOT__mem_dout);
    vlSelfRef.top__DOT__btn_p[1U] = vlSelfRef.top__DOT____Vcellout__r_btn1____pinNumber4;
    vlSelfRef.top__DOT__i_L2_DU__DOT__wdata = ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3)
                                                ? vlSelfRef.top__DOT__i_L4_SU__DOT__mem_out_val
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
                                                                  & (vlSelfRef.top__DOT__i_L4_SU__DOT__mem_addr 
                                                                     >> 0x00000011U)))) 
                                                      << 0x00000012U) 
                                                     | (0x0003fffeU 
                                                        & vlSelfRef.top__DOT__i_L4_SU__DOT__mem_addr))
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
                                                       : vlSelfRef.top__DOT__i_L3_XU__DOT__imm_ext_32b_s)))));
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
                                                        ((((IData)(vlSelfRef.top__DOT__i_L2_DU__DOT__rst) 
                                                           & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__top__DOT__i_L2_DU__DOT__rst__0))) 
                                                          << 1U) 
                                                         | ((IData)(vlSelfRef.clk) 
                                                            & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__clk__1))))));
        vlSelfRef.__Vtrigprevexpr___TOP__clk__1 = vlSelfRef.clk;
        vlSelfRef.__Vtrigprevexpr___TOP__top__DOT__i_L2_DU__DOT__rst__0 
            = vlSelfRef.top__DOT__i_L2_DU__DOT__rst;
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
            if ((3ULL & vlSelfRef.__VnbaTriggered[0U])) {
                {
                    // Inlined CFunc: _nba_sequent__TOP__0
                    vlSelfRef.top__DOT__cnt_clk = ((IData)(vlSelfRef.top__DOT__i_L2_DU__DOT__rst)
                                                    ? 0U
                                                    : 
                                                   (0x00ffffffU 
                                                    & ((IData)(1U) 
                                                       + vlSelfRef.top__DOT__cnt_clk)));
                }
            }
            if ((1ULL & vlSelfRef.__VnbaTriggered[0U])) {
                Vtop___024root___nba_sequent__TOP__1(vlSelf);
                vlSelfRef.__Vm_traceActivity[2U] = 1U;
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
            VL_FATAL_MT("/home/devi/ysyx/ysyx-workbench/npc/vsrc/top_miniRV_module.v", 1, "", "DIDNOTCONVERGE: Input combinational region did not converge after '--converge-limit' of 10000 tries");
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
            VL_FATAL_MT("/home/devi/ysyx/ysyx-workbench/npc/vsrc/top_miniRV_module.v", 1, "", "DIDNOTCONVERGE: NBA region did not converge after '--converge-limit' of 10000 tries");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        vlSelfRef.__VactIterCount = 0U;
        do {
            if (VL_UNLIKELY(((0x00002710U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                Vtop___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
#endif
                VL_FATAL_MT("/home/devi/ysyx/ysyx-workbench/npc/vsrc/top_miniRV_module.v", 1, "", "DIDNOTCONVERGE: Active region did not converge after '--converge-limit' of 10000 tries");
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
