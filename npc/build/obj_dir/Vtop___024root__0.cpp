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
    // Locals
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_5;
    __VdfgRegularize_h6e95ff9d_0_5 = 0;
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_6;
    __VdfgRegularize_h6e95ff9d_0_6 = 0;
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_7;
    __VdfgRegularize_h6e95ff9d_0_7 = 0;
    CData/*7:0*/ __VdlyVal__top__DOT__i_MEM__DOT__R_MEM__v0;
    __VdlyVal__top__DOT__i_MEM__DOT__R_MEM__v0 = 0;
    IData/*23:0*/ __VdlyDim0__top__DOT__i_MEM__DOT__R_MEM__v0;
    __VdlyDim0__top__DOT__i_MEM__DOT__R_MEM__v0 = 0;
    CData/*0:0*/ __VdlySet__top__DOT__i_MEM__DOT__R_MEM__v0;
    __VdlySet__top__DOT__i_MEM__DOT__R_MEM__v0 = 0;
    CData/*7:0*/ __VdlyVal__top__DOT__i_MEM__DOT__R_MEM__v1;
    __VdlyVal__top__DOT__i_MEM__DOT__R_MEM__v1 = 0;
    IData/*23:0*/ __VdlyDim0__top__DOT__i_MEM__DOT__R_MEM__v1;
    __VdlyDim0__top__DOT__i_MEM__DOT__R_MEM__v1 = 0;
    CData/*0:0*/ __VdlySet__top__DOT__i_MEM__DOT__R_MEM__v1;
    __VdlySet__top__DOT__i_MEM__DOT__R_MEM__v1 = 0;
    CData/*7:0*/ __VdlyVal__top__DOT__i_MEM__DOT__R_MEM__v2;
    __VdlyVal__top__DOT__i_MEM__DOT__R_MEM__v2 = 0;
    IData/*23:0*/ __VdlyDim0__top__DOT__i_MEM__DOT__R_MEM__v2;
    __VdlyDim0__top__DOT__i_MEM__DOT__R_MEM__v2 = 0;
    CData/*0:0*/ __VdlySet__top__DOT__i_MEM__DOT__R_MEM__v2;
    __VdlySet__top__DOT__i_MEM__DOT__R_MEM__v2 = 0;
    CData/*7:0*/ __VdlyVal__top__DOT__i_MEM__DOT__R_MEM__v3;
    __VdlyVal__top__DOT__i_MEM__DOT__R_MEM__v3 = 0;
    IData/*23:0*/ __VdlyDim0__top__DOT__i_MEM__DOT__R_MEM__v3;
    __VdlyDim0__top__DOT__i_MEM__DOT__R_MEM__v3 = 0;
    CData/*0:0*/ __VdlySet__top__DOT__i_MEM__DOT__R_MEM__v3;
    __VdlySet__top__DOT__i_MEM__DOT__R_MEM__v3 = 0;
    // Body
    __VdlySet__top__DOT__i_MEM__DOT__R_MEM__v0 = 0U;
    __VdlySet__top__DOT__i_MEM__DOT__R_MEM__v1 = 0U;
    __VdlySet__top__DOT__i_MEM__DOT__R_MEM__v2 = 0U;
    __VdlySet__top__DOT__i_MEM__DOT__R_MEM__v3 = 0U;
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSelfRef.btn)) 
                            & (IData)(vlSelfRef.top__DOT____Vcellout__r_btn0____pinNumber4)))))) {
        VL_WRITEF_NX("Cur PC:%03h PC_N:0x%h Ins:0x%h%d\n",4
                     , '#',18,vlSelfRef.top__DOT__PC
                     , '#',16,(0x0000ffffU & (vlSelfRef.top__DOT__PC 
                                              >> 2U))
                     , '#',18,vlSelfRef.top__DOT__PC
                     , '#',32,vlSelfRef.top__DOT__rom_PC
                     [(0x0000ffffU & (vlSelfRef.top__DOT__PC 
                                      >> 2U))]);
    }
    if ((1U & ((~ (IData)(vlSelfRef.uart_tx)) & (~ (IData)(vlSelfRef.top__DOT__R_PC__DOT__rst))))) {
        if (VL_UNLIKELY(((0x33U == (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0))))) {
            VL_WRITEF_NX("%03d-%3x %08h  | add  rd  ,rs1,rs2\n                  - add  r%-2d ,r%-2d,r%-2d     {r%-2d -> 0x%h = r%-2d[0x%h] + r%-2d[0x%h]}\n",12
                         , '#',16,(0x0000ffffU & (vlSelfRef.top__DOT__PC 
                                                  >> 2U))
                         , '#',18,vlSelfRef.top__DOT__PC
                         , '#',32,vlSelfRef.top__DOT__rom_PC
                         [(0x0000ffffU & (vlSelfRef.top__DOT__PC 
                                          >> 2U))], '#',5,vlSelfRef.top__DOT__i_GPR__DOT__waddr
                         , '#',5,(IData)(vlSelfRef.top__DOT__i_GPR__DOT__raddra)
                         , '#',5,vlSelfRef.top__DOT__i_GPR__DOT__raddrb
                         , '#',5,(IData)(vlSelfRef.top__DOT__i_GPR__DOT__waddr)
                         , '#',32,vlSelfRef.top__DOT__i_GPR__DOT__foor_loop_i__BRA__0__KET____DOT__R__DOT__din
                         , '#',5,(IData)(vlSelfRef.top__DOT__i_GPR__DOT__raddra)
                         , '#',32,vlSelfRef.top__DOT__i_GPR__DOT__GPR
                         [vlSelfRef.top__DOT__i_GPR__DOT__raddra]
                         , '#',5,vlSelfRef.top__DOT__i_GPR__DOT__raddrb
                         , '#',32,vlSelfRef.top__DOT__i_GPR__DOT__GPR
                         [vlSelfRef.top__DOT__i_GPR__DOT__raddrb]);
        } else if (VL_UNLIKELY(((0x13U == (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0))))) {
            VL_WRITEF_NX("%03d-%3x %08h  | addi rd , rs1,imm\n                  - addi r%-2d, r%-2d,0x%3h   {r%-2d -> 0x%h or %d}\n",9
                         , '#',16,(0x0000ffffU & (vlSelfRef.top__DOT__PC 
                                                  >> 2U))
                         , '#',18,vlSelfRef.top__DOT__PC
                         , '#',32,vlSelfRef.top__DOT__rom_PC
                         [(0x0000ffffU & (vlSelfRef.top__DOT__PC 
                                          >> 2U))], '#',5,vlSelfRef.top__DOT__i_GPR__DOT__waddr
                         , '#',5,(IData)(vlSelfRef.top__DOT__i_GPR__DOT__raddra)
                         , '#',12,vlSelfRef.__VdfgRegularize_h6e95ff9d_0_8
                         , '#',5,(IData)(vlSelfRef.top__DOT__i_GPR__DOT__waddr)
                         , '#',32,vlSelfRef.top__DOT__i_GPR__DOT__foor_loop_i__BRA__0__KET____DOT__R__DOT__din
                         , '~',32,vlSelfRef.top__DOT__i_GPR__DOT__foor_loop_i__BRA__0__KET____DOT__R__DOT__din);
        } else if (VL_UNLIKELY(((0x37U == (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0))))) {
            VL_WRITEF_NX("%03d-%3x %08h  | lui  rd , imm\n                  - lui  r%-2d, %5h       {r%-2d -> 0x%h}\n",7
                         , '#',16,(0x0000ffffU & (vlSelfRef.top__DOT__PC 
                                                  >> 2U))
                         , '#',18,vlSelfRef.top__DOT__PC
                         , '#',32,vlSelfRef.top__DOT__rom_PC
                         [(0x0000ffffU & (vlSelfRef.top__DOT__PC 
                                          >> 2U))], '#',5,vlSelfRef.top__DOT__i_GPR__DOT__waddr
                         , '#',20,vlSelfRef.top__DOT__imm_20b
                         , '#',5,(IData)(vlSelfRef.top__DOT__i_GPR__DOT__waddr)
                         , '#',32,vlSelfRef.top__DOT__i_GPR__DOT__foor_loop_i__BRA__0__KET____DOT__R__DOT__din);
        } else if (VL_UNLIKELY((vlSelfRef.top__DOT__op_lw))) {
            VL_WRITEF_NX("%03d-%3x %08h  | lw   rd , offset(rs1)\n                  - lw   r%-2d, %6d(r%-2d) {r%-2d -> 0x%h}\n",8
                         , '#',16,(0x0000ffffU & (vlSelfRef.top__DOT__PC 
                                                  >> 2U))
                         , '#',18,vlSelfRef.top__DOT__PC
                         , '#',32,vlSelfRef.top__DOT__rom_PC
                         [(0x0000ffffU & (vlSelfRef.top__DOT__PC 
                                          >> 2U))], '#',5,vlSelfRef.top__DOT__i_GPR__DOT__waddr
                         , '~',32,vlSelfRef.top__DOT__imm_ext_32b_s
                         , '#',5,(IData)(vlSelfRef.top__DOT__i_GPR__DOT__raddra)
                         , '#',32,vlSelfRef.top__DOT__i_GPR__DOT__GPR
                         [vlSelfRef.top__DOT__i_GPR__DOT__raddra]
                         , '#',32,vlSelfRef.top__DOT__mem_out_val);
        } else if (VL_UNLIKELY((vlSelfRef.top__DOT__op_lbu))) {
            VL_WRITEF_NX("%03d-%3x %08h  | lbu  rd , offset(rs1)\n                  - lbu  r%-2d, %6d(r%-2d) {r%-2d -> 0x%h}\n",8
                         , '#',16,(0x0000ffffU & (vlSelfRef.top__DOT__PC 
                                                  >> 2U))
                         , '#',18,vlSelfRef.top__DOT__PC
                         , '#',32,vlSelfRef.top__DOT__rom_PC
                         [(0x0000ffffU & (vlSelfRef.top__DOT__PC 
                                          >> 2U))], '#',5,vlSelfRef.top__DOT__i_GPR__DOT__waddr
                         , '~',32,vlSelfRef.top__DOT__imm_ext_32b_s
                         , '#',5,(IData)(vlSelfRef.top__DOT__i_GPR__DOT__raddra)
                         , '#',5,vlSelfRef.top__DOT__i_GPR__DOT__waddr
                         , '#',8,(IData)(vlSelfRef.top__DOT__mem_dout_byte8));
        } else if (VL_UNLIKELY((vlSelfRef.top__DOT__op_sw))) {
            VL_WRITEF_NX("%03d-%3x %08h  | sw   rs2, offset(rs1)\n                  - sw   r%-2d, %6d(r%-2d) {M[0x%4h] -> 0x%h}\n",8
                         , '#',16,(0x0000ffffU & (vlSelfRef.top__DOT__PC 
                                                  >> 2U))
                         , '#',18,vlSelfRef.top__DOT__PC
                         , '#',32,vlSelfRef.top__DOT__rom_PC
                         [(0x0000ffffU & (vlSelfRef.top__DOT__PC 
                                          >> 2U))], '#',5,vlSelfRef.top__DOT__i_GPR__DOT__raddrb
                         , '~',32,vlSelfRef.top__DOT__imm_ext_32b_s
                         , '#',5,(IData)(vlSelfRef.top__DOT__i_GPR__DOT__raddra)
                         , '#',32,vlSelfRef.top__DOT__mem_addr
                         , '#',32,vlSelfRef.top__DOT__i_MEM__DOT__din);
        } else if (VL_UNLIKELY((vlSelfRef.top__DOT__op_sb))) {
            VL_WRITEF_NX("%03d-%3x %08h  | sb   rs2, offset(rs1)\n                  - sb   r%-2d, %6d(r%-2d) {M[0x%4h] -> 0x%h}\n",8
                         , '#',16,(0x0000ffffU & (vlSelfRef.top__DOT__PC 
                                                  >> 2U))
                         , '#',18,vlSelfRef.top__DOT__PC
                         , '#',32,vlSelfRef.top__DOT__rom_PC
                         [(0x0000ffffU & (vlSelfRef.top__DOT__PC 
                                          >> 2U))], '#',5,vlSelfRef.top__DOT__i_GPR__DOT__raddrb
                         , '~',32,vlSelfRef.top__DOT__imm_ext_32b_s
                         , '#',5,(IData)(vlSelfRef.top__DOT__i_GPR__DOT__raddra)
                         , '#',32,vlSelfRef.top__DOT__mem_addr
                         , '#',8,(IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3));
        } else if ((0x67U == (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0))) {
            VL_WRITEF_NX("%03d-%3x %08h  | jalr rd , offset(rs1)\n                  - jalr r%-2d, %6d(r%2d) {r%1d -> 0x%h | PC -> %3h}\n",9
                         , '#',16,(0x0000ffffU & (vlSelfRef.top__DOT__PC 
                                                  >> 2U))
                         , '#',18,vlSelfRef.top__DOT__PC
                         , '#',32,vlSelfRef.top__DOT__rom_PC
                         [(0x0000ffffU & (vlSelfRef.top__DOT__PC 
                                          >> 2U))], '#',5,vlSelfRef.top__DOT__i_GPR__DOT__waddr
                         , '#',12,(IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_8)
                         , '#',5,vlSelfRef.top__DOT__i_GPR__DOT__raddra
                         , '#',5,(IData)(vlSelfRef.top__DOT__i_GPR__DOT__waddr)
                         , '#',32,vlSelfRef.top__DOT__i_GPR__DOT__foor_loop_i__BRA__0__KET____DOT__R__DOT__din
                         , '#',18,vlSelfRef.top__DOT__R_PC__DOT__din);
        } else {
            VL_WRITEF_NX("%03d-%3x %08h  | Instruction err!!!\n                  - funct3=%1d opcode=%2h\n",5
                         , '#',16,(0x0000ffffU & (vlSelfRef.top__DOT__PC 
                                                  >> 2U))
                         , '#',18,vlSelfRef.top__DOT__PC
                         , '#',32,vlSelfRef.top__DOT__rom_PC
                         [(0x0000ffffU & (vlSelfRef.top__DOT__PC 
                                          >> 2U))], '#',3,vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4
                         , '#',7,(IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0));
        }
    }
    if (((~ (0U != (vlSelfRef.top__DOT__mem_addr >> 0x0000001dU))) 
         & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_15))) {
        if (vlSelfRef.top__DOT__i_MEM__DOT__byte_en3) {
            __VdlyVal__top__DOT__i_MEM__DOT__R_MEM__v0 
                = (vlSelfRef.top__DOT__i_MEM__DOT__din 
                   >> 0x18U);
            __VdlyDim0__top__DOT__i_MEM__DOT__R_MEM__v0 
                = (0x00ffffffU & (vlSelfRef.top__DOT__mem_addr 
                                  >> 2U));
            __VdlySet__top__DOT__i_MEM__DOT__R_MEM__v0 = 1U;
        }
        if (vlSelfRef.top__DOT__i_MEM__DOT__byte_en2) {
            __VdlyVal__top__DOT__i_MEM__DOT__R_MEM__v1 
                = (0x000000ffU & (vlSelfRef.top__DOT__i_MEM__DOT__din 
                                  >> 0x10U));
            __VdlyDim0__top__DOT__i_MEM__DOT__R_MEM__v1 
                = (0x00ffffffU & (vlSelfRef.top__DOT__mem_addr 
                                  >> 2U));
            __VdlySet__top__DOT__i_MEM__DOT__R_MEM__v1 = 1U;
        }
        if (vlSelfRef.top__DOT__i_MEM__DOT__byte_en1) {
            __VdlyVal__top__DOT__i_MEM__DOT__R_MEM__v2 
                = (0x000000ffU & (vlSelfRef.top__DOT__i_MEM__DOT__din 
                                  >> 8U));
            __VdlyDim0__top__DOT__i_MEM__DOT__R_MEM__v2 
                = (0x00ffffffU & (vlSelfRef.top__DOT__mem_addr 
                                  >> 2U));
            __VdlySet__top__DOT__i_MEM__DOT__R_MEM__v2 = 1U;
        }
        if (vlSelfRef.top__DOT__i_MEM__DOT__byte_en0) {
            __VdlyVal__top__DOT__i_MEM__DOT__R_MEM__v3 
                = (0x000000ffU & vlSelfRef.top__DOT__i_MEM__DOT__din);
            __VdlyDim0__top__DOT__i_MEM__DOT__R_MEM__v3 
                = (0x00ffffffU & (vlSelfRef.top__DOT__mem_addr 
                                  >> 2U));
            __VdlySet__top__DOT__i_MEM__DOT__R_MEM__v3 = 1U;
        }
    }
    if (vlSelfRef.top__DOT__R_PC__DOT__rst) {
        vlSelfRef.top__DOT____Vcellout__r_btn4____pinNumber4 = 0U;
        vlSelfRef.top__DOT__i_GPR__DOT____Vcellout__foor_loop_i__BRA__31__KET____DOT__R____pinNumber4 = 0U;
        vlSelfRef.top__DOT__i_GPR__DOT____Vcellout__foor_loop_i__BRA__30__KET____DOT__R____pinNumber4 = 0U;
        vlSelfRef.top__DOT__i_GPR__DOT____Vcellout__foor_loop_i__BRA__29__KET____DOT__R____pinNumber4 = 0U;
        vlSelfRef.top__DOT__i_GPR__DOT____Vcellout__foor_loop_i__BRA__28__KET____DOT__R____pinNumber4 = 0U;
        vlSelfRef.top__DOT__i_GPR__DOT____Vcellout__foor_loop_i__BRA__27__KET____DOT__R____pinNumber4 = 0U;
        vlSelfRef.top__DOT__i_GPR__DOT____Vcellout__foor_loop_i__BRA__26__KET____DOT__R____pinNumber4 = 0U;
        vlSelfRef.top__DOT__i_GPR__DOT____Vcellout__foor_loop_i__BRA__25__KET____DOT__R____pinNumber4 = 0U;
        vlSelfRef.top__DOT__i_GPR__DOT____Vcellout__foor_loop_i__BRA__24__KET____DOT__R____pinNumber4 = 0U;
        vlSelfRef.top__DOT__i_GPR__DOT____Vcellout__foor_loop_i__BRA__23__KET____DOT__R____pinNumber4 = 0U;
        vlSelfRef.top__DOT__i_GPR__DOT____Vcellout__foor_loop_i__BRA__22__KET____DOT__R____pinNumber4 = 0U;
        vlSelfRef.top__DOT__i_GPR__DOT____Vcellout__foor_loop_i__BRA__21__KET____DOT__R____pinNumber4 = 0U;
        vlSelfRef.top__DOT__i_GPR__DOT____Vcellout__foor_loop_i__BRA__20__KET____DOT__R____pinNumber4 = 0U;
        vlSelfRef.top__DOT__i_GPR__DOT____Vcellout__foor_loop_i__BRA__19__KET____DOT__R____pinNumber4 = 0U;
        vlSelfRef.top__DOT__i_GPR__DOT____Vcellout__foor_loop_i__BRA__18__KET____DOT__R____pinNumber4 = 0U;
        vlSelfRef.top__DOT__i_GPR__DOT____Vcellout__foor_loop_i__BRA__17__KET____DOT__R____pinNumber4 = 0U;
        vlSelfRef.top__DOT__i_GPR__DOT____Vcellout__foor_loop_i__BRA__16__KET____DOT__R____pinNumber4 = 0U;
        vlSelfRef.top__DOT__i_GPR__DOT____Vcellout__foor_loop_i__BRA__15__KET____DOT__R____pinNumber4 = 0U;
        vlSelfRef.top__DOT__i_GPR__DOT____Vcellout__foor_loop_i__BRA__14__KET____DOT__R____pinNumber4 = 0U;
        vlSelfRef.top__DOT__i_GPR__DOT____Vcellout__foor_loop_i__BRA__13__KET____DOT__R____pinNumber4 = 0U;
        vlSelfRef.top__DOT__i_GPR__DOT____Vcellout__foor_loop_i__BRA__12__KET____DOT__R____pinNumber4 = 0U;
        vlSelfRef.top__DOT__i_GPR__DOT____Vcellout__foor_loop_i__BRA__11__KET____DOT__R____pinNumber4 = 0U;
        vlSelfRef.top__DOT__i_GPR__DOT____Vcellout__foor_loop_i__BRA__10__KET____DOT__R____pinNumber4 = 0U;
        vlSelfRef.top__DOT__i_GPR__DOT____Vcellout__foor_loop_i__BRA__9__KET____DOT__R____pinNumber4 = 0U;
        vlSelfRef.top__DOT__i_GPR__DOT____Vcellout__foor_loop_i__BRA__8__KET____DOT__R____pinNumber4 = 0U;
        vlSelfRef.top__DOT__i_GPR__DOT____Vcellout__foor_loop_i__BRA__7__KET____DOT__R____pinNumber4 = 0U;
        vlSelfRef.top__DOT__i_GPR__DOT____Vcellout__foor_loop_i__BRA__6__KET____DOT__R____pinNumber4 = 0U;
        vlSelfRef.top__DOT__i_GPR__DOT____Vcellout__foor_loop_i__BRA__5__KET____DOT__R____pinNumber4 = 0U;
        vlSelfRef.top__DOT__i_GPR__DOT____Vcellout__foor_loop_i__BRA__4__KET____DOT__R____pinNumber4 = 0U;
        vlSelfRef.top__DOT__i_GPR__DOT____Vcellout__foor_loop_i__BRA__3__KET____DOT__R____pinNumber4 = 0U;
        vlSelfRef.top__DOT__i_GPR__DOT____Vcellout__foor_loop_i__BRA__2__KET____DOT__R____pinNumber4 = 0U;
        vlSelfRef.top__DOT__i_GPR__DOT____Vcellout__foor_loop_i__BRA__1__KET____DOT__R____pinNumber4 = 0U;
        vlSelfRef.top__DOT__i_GPR__DOT____Vcellout__foor_loop_i__BRA__0__KET____DOT__R____pinNumber4 = 0U;
        vlSelfRef.top__DOT__PC = 0U;
        vlSelfRef.top__DOT____Vcellout__r_btn3____pinNumber4 = 0U;
        vlSelfRef.top__DOT____Vcellout__r_btn2____pinNumber4 = 0U;
        vlSelfRef.top__DOT____Vcellout__r_btn1____pinNumber4 = 0U;
        vlSelfRef.top__DOT____Vcellout__r_btn0____pinNumber4 = 0U;
    } else {
        vlSelfRef.top__DOT____Vcellout__r_btn4____pinNumber4 
            = vlSelfRef.top__DOT____Vcellout__r_btn3____pinNumber4;
        if (((0x1fU == (IData)(vlSelfRef.top__DOT__i_GPR__DOT__waddr)) 
             & (IData)(vlSelfRef.top__DOT__i_GPR__DOT__wen))) {
            vlSelfRef.top__DOT__i_GPR__DOT____Vcellout__foor_loop_i__BRA__31__KET____DOT__R____pinNumber4 
                = vlSelfRef.top__DOT__i_GPR__DOT__foor_loop_i__BRA__0__KET____DOT__R__DOT__din;
        }
        if (((0x1eU == (IData)(vlSelfRef.top__DOT__i_GPR__DOT__waddr)) 
             & (IData)(vlSelfRef.top__DOT__i_GPR__DOT__wen))) {
            vlSelfRef.top__DOT__i_GPR__DOT____Vcellout__foor_loop_i__BRA__30__KET____DOT__R____pinNumber4 
                = vlSelfRef.top__DOT__i_GPR__DOT__foor_loop_i__BRA__0__KET____DOT__R__DOT__din;
        }
        if (((0x1dU == (IData)(vlSelfRef.top__DOT__i_GPR__DOT__waddr)) 
             & (IData)(vlSelfRef.top__DOT__i_GPR__DOT__wen))) {
            vlSelfRef.top__DOT__i_GPR__DOT____Vcellout__foor_loop_i__BRA__29__KET____DOT__R____pinNumber4 
                = vlSelfRef.top__DOT__i_GPR__DOT__foor_loop_i__BRA__0__KET____DOT__R__DOT__din;
        }
        if (((0x1cU == (IData)(vlSelfRef.top__DOT__i_GPR__DOT__waddr)) 
             & (IData)(vlSelfRef.top__DOT__i_GPR__DOT__wen))) {
            vlSelfRef.top__DOT__i_GPR__DOT____Vcellout__foor_loop_i__BRA__28__KET____DOT__R____pinNumber4 
                = vlSelfRef.top__DOT__i_GPR__DOT__foor_loop_i__BRA__0__KET____DOT__R__DOT__din;
        }
        if (((0x1bU == (IData)(vlSelfRef.top__DOT__i_GPR__DOT__waddr)) 
             & (IData)(vlSelfRef.top__DOT__i_GPR__DOT__wen))) {
            vlSelfRef.top__DOT__i_GPR__DOT____Vcellout__foor_loop_i__BRA__27__KET____DOT__R____pinNumber4 
                = vlSelfRef.top__DOT__i_GPR__DOT__foor_loop_i__BRA__0__KET____DOT__R__DOT__din;
        }
        if (((0x1aU == (IData)(vlSelfRef.top__DOT__i_GPR__DOT__waddr)) 
             & (IData)(vlSelfRef.top__DOT__i_GPR__DOT__wen))) {
            vlSelfRef.top__DOT__i_GPR__DOT____Vcellout__foor_loop_i__BRA__26__KET____DOT__R____pinNumber4 
                = vlSelfRef.top__DOT__i_GPR__DOT__foor_loop_i__BRA__0__KET____DOT__R__DOT__din;
        }
        if (((0x19U == (IData)(vlSelfRef.top__DOT__i_GPR__DOT__waddr)) 
             & (IData)(vlSelfRef.top__DOT__i_GPR__DOT__wen))) {
            vlSelfRef.top__DOT__i_GPR__DOT____Vcellout__foor_loop_i__BRA__25__KET____DOT__R____pinNumber4 
                = vlSelfRef.top__DOT__i_GPR__DOT__foor_loop_i__BRA__0__KET____DOT__R__DOT__din;
        }
        if (((0x18U == (IData)(vlSelfRef.top__DOT__i_GPR__DOT__waddr)) 
             & (IData)(vlSelfRef.top__DOT__i_GPR__DOT__wen))) {
            vlSelfRef.top__DOT__i_GPR__DOT____Vcellout__foor_loop_i__BRA__24__KET____DOT__R____pinNumber4 
                = vlSelfRef.top__DOT__i_GPR__DOT__foor_loop_i__BRA__0__KET____DOT__R__DOT__din;
        }
        if (((0x17U == (IData)(vlSelfRef.top__DOT__i_GPR__DOT__waddr)) 
             & (IData)(vlSelfRef.top__DOT__i_GPR__DOT__wen))) {
            vlSelfRef.top__DOT__i_GPR__DOT____Vcellout__foor_loop_i__BRA__23__KET____DOT__R____pinNumber4 
                = vlSelfRef.top__DOT__i_GPR__DOT__foor_loop_i__BRA__0__KET____DOT__R__DOT__din;
        }
        if (((0x16U == (IData)(vlSelfRef.top__DOT__i_GPR__DOT__waddr)) 
             & (IData)(vlSelfRef.top__DOT__i_GPR__DOT__wen))) {
            vlSelfRef.top__DOT__i_GPR__DOT____Vcellout__foor_loop_i__BRA__22__KET____DOT__R____pinNumber4 
                = vlSelfRef.top__DOT__i_GPR__DOT__foor_loop_i__BRA__0__KET____DOT__R__DOT__din;
        }
        if (((0x15U == (IData)(vlSelfRef.top__DOT__i_GPR__DOT__waddr)) 
             & (IData)(vlSelfRef.top__DOT__i_GPR__DOT__wen))) {
            vlSelfRef.top__DOT__i_GPR__DOT____Vcellout__foor_loop_i__BRA__21__KET____DOT__R____pinNumber4 
                = vlSelfRef.top__DOT__i_GPR__DOT__foor_loop_i__BRA__0__KET____DOT__R__DOT__din;
        }
        if (((0x14U == (IData)(vlSelfRef.top__DOT__i_GPR__DOT__waddr)) 
             & (IData)(vlSelfRef.top__DOT__i_GPR__DOT__wen))) {
            vlSelfRef.top__DOT__i_GPR__DOT____Vcellout__foor_loop_i__BRA__20__KET____DOT__R____pinNumber4 
                = vlSelfRef.top__DOT__i_GPR__DOT__foor_loop_i__BRA__0__KET____DOT__R__DOT__din;
        }
        if (((0x13U == (IData)(vlSelfRef.top__DOT__i_GPR__DOT__waddr)) 
             & (IData)(vlSelfRef.top__DOT__i_GPR__DOT__wen))) {
            vlSelfRef.top__DOT__i_GPR__DOT____Vcellout__foor_loop_i__BRA__19__KET____DOT__R____pinNumber4 
                = vlSelfRef.top__DOT__i_GPR__DOT__foor_loop_i__BRA__0__KET____DOT__R__DOT__din;
        }
        if (((0x12U == (IData)(vlSelfRef.top__DOT__i_GPR__DOT__waddr)) 
             & (IData)(vlSelfRef.top__DOT__i_GPR__DOT__wen))) {
            vlSelfRef.top__DOT__i_GPR__DOT____Vcellout__foor_loop_i__BRA__18__KET____DOT__R____pinNumber4 
                = vlSelfRef.top__DOT__i_GPR__DOT__foor_loop_i__BRA__0__KET____DOT__R__DOT__din;
        }
        if (((0x11U == (IData)(vlSelfRef.top__DOT__i_GPR__DOT__waddr)) 
             & (IData)(vlSelfRef.top__DOT__i_GPR__DOT__wen))) {
            vlSelfRef.top__DOT__i_GPR__DOT____Vcellout__foor_loop_i__BRA__17__KET____DOT__R____pinNumber4 
                = vlSelfRef.top__DOT__i_GPR__DOT__foor_loop_i__BRA__0__KET____DOT__R__DOT__din;
        }
        if (((0x10U == (IData)(vlSelfRef.top__DOT__i_GPR__DOT__waddr)) 
             & (IData)(vlSelfRef.top__DOT__i_GPR__DOT__wen))) {
            vlSelfRef.top__DOT__i_GPR__DOT____Vcellout__foor_loop_i__BRA__16__KET____DOT__R____pinNumber4 
                = vlSelfRef.top__DOT__i_GPR__DOT__foor_loop_i__BRA__0__KET____DOT__R__DOT__din;
        }
        if (((0x0fU == (IData)(vlSelfRef.top__DOT__i_GPR__DOT__waddr)) 
             & (IData)(vlSelfRef.top__DOT__i_GPR__DOT__wen))) {
            vlSelfRef.top__DOT__i_GPR__DOT____Vcellout__foor_loop_i__BRA__15__KET____DOT__R____pinNumber4 
                = vlSelfRef.top__DOT__i_GPR__DOT__foor_loop_i__BRA__0__KET____DOT__R__DOT__din;
        }
        if (((0x0eU == (IData)(vlSelfRef.top__DOT__i_GPR__DOT__waddr)) 
             & (IData)(vlSelfRef.top__DOT__i_GPR__DOT__wen))) {
            vlSelfRef.top__DOT__i_GPR__DOT____Vcellout__foor_loop_i__BRA__14__KET____DOT__R____pinNumber4 
                = vlSelfRef.top__DOT__i_GPR__DOT__foor_loop_i__BRA__0__KET____DOT__R__DOT__din;
        }
        if (((0x0dU == (IData)(vlSelfRef.top__DOT__i_GPR__DOT__waddr)) 
             & (IData)(vlSelfRef.top__DOT__i_GPR__DOT__wen))) {
            vlSelfRef.top__DOT__i_GPR__DOT____Vcellout__foor_loop_i__BRA__13__KET____DOT__R____pinNumber4 
                = vlSelfRef.top__DOT__i_GPR__DOT__foor_loop_i__BRA__0__KET____DOT__R__DOT__din;
        }
        if (((0x0cU == (IData)(vlSelfRef.top__DOT__i_GPR__DOT__waddr)) 
             & (IData)(vlSelfRef.top__DOT__i_GPR__DOT__wen))) {
            vlSelfRef.top__DOT__i_GPR__DOT____Vcellout__foor_loop_i__BRA__12__KET____DOT__R____pinNumber4 
                = vlSelfRef.top__DOT__i_GPR__DOT__foor_loop_i__BRA__0__KET____DOT__R__DOT__din;
        }
        if (((0x0bU == (IData)(vlSelfRef.top__DOT__i_GPR__DOT__waddr)) 
             & (IData)(vlSelfRef.top__DOT__i_GPR__DOT__wen))) {
            vlSelfRef.top__DOT__i_GPR__DOT____Vcellout__foor_loop_i__BRA__11__KET____DOT__R____pinNumber4 
                = vlSelfRef.top__DOT__i_GPR__DOT__foor_loop_i__BRA__0__KET____DOT__R__DOT__din;
        }
        if (((0x0aU == (IData)(vlSelfRef.top__DOT__i_GPR__DOT__waddr)) 
             & (IData)(vlSelfRef.top__DOT__i_GPR__DOT__wen))) {
            vlSelfRef.top__DOT__i_GPR__DOT____Vcellout__foor_loop_i__BRA__10__KET____DOT__R____pinNumber4 
                = vlSelfRef.top__DOT__i_GPR__DOT__foor_loop_i__BRA__0__KET____DOT__R__DOT__din;
        }
        if (((9U == (IData)(vlSelfRef.top__DOT__i_GPR__DOT__waddr)) 
             & (IData)(vlSelfRef.top__DOT__i_GPR__DOT__wen))) {
            vlSelfRef.top__DOT__i_GPR__DOT____Vcellout__foor_loop_i__BRA__9__KET____DOT__R____pinNumber4 
                = vlSelfRef.top__DOT__i_GPR__DOT__foor_loop_i__BRA__0__KET____DOT__R__DOT__din;
        }
        if (((8U == (IData)(vlSelfRef.top__DOT__i_GPR__DOT__waddr)) 
             & (IData)(vlSelfRef.top__DOT__i_GPR__DOT__wen))) {
            vlSelfRef.top__DOT__i_GPR__DOT____Vcellout__foor_loop_i__BRA__8__KET____DOT__R____pinNumber4 
                = vlSelfRef.top__DOT__i_GPR__DOT__foor_loop_i__BRA__0__KET____DOT__R__DOT__din;
        }
        if (((7U == (IData)(vlSelfRef.top__DOT__i_GPR__DOT__waddr)) 
             & (IData)(vlSelfRef.top__DOT__i_GPR__DOT__wen))) {
            vlSelfRef.top__DOT__i_GPR__DOT____Vcellout__foor_loop_i__BRA__7__KET____DOT__R____pinNumber4 
                = vlSelfRef.top__DOT__i_GPR__DOT__foor_loop_i__BRA__0__KET____DOT__R__DOT__din;
        }
        if (((6U == (IData)(vlSelfRef.top__DOT__i_GPR__DOT__waddr)) 
             & (IData)(vlSelfRef.top__DOT__i_GPR__DOT__wen))) {
            vlSelfRef.top__DOT__i_GPR__DOT____Vcellout__foor_loop_i__BRA__6__KET____DOT__R____pinNumber4 
                = vlSelfRef.top__DOT__i_GPR__DOT__foor_loop_i__BRA__0__KET____DOT__R__DOT__din;
        }
        if (((5U == (IData)(vlSelfRef.top__DOT__i_GPR__DOT__waddr)) 
             & (IData)(vlSelfRef.top__DOT__i_GPR__DOT__wen))) {
            vlSelfRef.top__DOT__i_GPR__DOT____Vcellout__foor_loop_i__BRA__5__KET____DOT__R____pinNumber4 
                = vlSelfRef.top__DOT__i_GPR__DOT__foor_loop_i__BRA__0__KET____DOT__R__DOT__din;
        }
        if (((4U == (IData)(vlSelfRef.top__DOT__i_GPR__DOT__waddr)) 
             & (IData)(vlSelfRef.top__DOT__i_GPR__DOT__wen))) {
            vlSelfRef.top__DOT__i_GPR__DOT____Vcellout__foor_loop_i__BRA__4__KET____DOT__R____pinNumber4 
                = vlSelfRef.top__DOT__i_GPR__DOT__foor_loop_i__BRA__0__KET____DOT__R__DOT__din;
        }
        if (((3U == (IData)(vlSelfRef.top__DOT__i_GPR__DOT__waddr)) 
             & (IData)(vlSelfRef.top__DOT__i_GPR__DOT__wen))) {
            vlSelfRef.top__DOT__i_GPR__DOT____Vcellout__foor_loop_i__BRA__3__KET____DOT__R____pinNumber4 
                = vlSelfRef.top__DOT__i_GPR__DOT__foor_loop_i__BRA__0__KET____DOT__R__DOT__din;
        }
        if (((2U == (IData)(vlSelfRef.top__DOT__i_GPR__DOT__waddr)) 
             & (IData)(vlSelfRef.top__DOT__i_GPR__DOT__wen))) {
            vlSelfRef.top__DOT__i_GPR__DOT____Vcellout__foor_loop_i__BRA__2__KET____DOT__R____pinNumber4 
                = vlSelfRef.top__DOT__i_GPR__DOT__foor_loop_i__BRA__0__KET____DOT__R__DOT__din;
        }
        if (((1U == (IData)(vlSelfRef.top__DOT__i_GPR__DOT__waddr)) 
             & (IData)(vlSelfRef.top__DOT__i_GPR__DOT__wen))) {
            vlSelfRef.top__DOT__i_GPR__DOT____Vcellout__foor_loop_i__BRA__1__KET____DOT__R____pinNumber4 
                = vlSelfRef.top__DOT__i_GPR__DOT__foor_loop_i__BRA__0__KET____DOT__R__DOT__din;
        }
        if (((0U == (IData)(vlSelfRef.top__DOT__i_GPR__DOT__waddr)) 
             & (IData)(vlSelfRef.top__DOT__i_GPR__DOT__wen))) {
            vlSelfRef.top__DOT__i_GPR__DOT____Vcellout__foor_loop_i__BRA__0__KET____DOT__R____pinNumber4 
                = vlSelfRef.top__DOT__i_GPR__DOT__foor_loop_i__BRA__0__KET____DOT__R__DOT__din;
        }
        vlSelfRef.top__DOT__PC = vlSelfRef.top__DOT__R_PC__DOT__din;
        vlSelfRef.top__DOT____Vcellout__r_btn3____pinNumber4 
            = vlSelfRef.top__DOT____Vcellout__r_btn2____pinNumber4;
        vlSelfRef.top__DOT____Vcellout__r_btn2____pinNumber4 
            = vlSelfRef.top__DOT____Vcellout__r_btn1____pinNumber4;
        vlSelfRef.top__DOT____Vcellout__r_btn1____pinNumber4 
            = vlSelfRef.top__DOT____Vcellout__r_btn0____pinNumber4;
        vlSelfRef.top__DOT____Vcellout__r_btn0____pinNumber4 
            = vlSelfRef.btn;
    }
    if (__VdlySet__top__DOT__i_MEM__DOT__R_MEM__v0) {
        vlSelfRef.top__DOT__i_MEM__DOT__R_MEM[__VdlyDim0__top__DOT__i_MEM__DOT__R_MEM__v0] 
            = ((0x00ffffffU & vlSelfRef.top__DOT__i_MEM__DOT__R_MEM
                [__VdlyDim0__top__DOT__i_MEM__DOT__R_MEM__v0]) 
               | ((IData)(__VdlyVal__top__DOT__i_MEM__DOT__R_MEM__v0) 
                  << 0x00000018U));
    }
    if (__VdlySet__top__DOT__i_MEM__DOT__R_MEM__v1) {
        vlSelfRef.top__DOT__i_MEM__DOT__R_MEM[__VdlyDim0__top__DOT__i_MEM__DOT__R_MEM__v1] 
            = ((0xff00ffffU & vlSelfRef.top__DOT__i_MEM__DOT__R_MEM
                [__VdlyDim0__top__DOT__i_MEM__DOT__R_MEM__v1]) 
               | ((IData)(__VdlyVal__top__DOT__i_MEM__DOT__R_MEM__v1) 
                  << 0x00000010U));
    }
    if (__VdlySet__top__DOT__i_MEM__DOT__R_MEM__v2) {
        vlSelfRef.top__DOT__i_MEM__DOT__R_MEM[__VdlyDim0__top__DOT__i_MEM__DOT__R_MEM__v2] 
            = ((0xffff00ffU & vlSelfRef.top__DOT__i_MEM__DOT__R_MEM
                [__VdlyDim0__top__DOT__i_MEM__DOT__R_MEM__v2]) 
               | ((IData)(__VdlyVal__top__DOT__i_MEM__DOT__R_MEM__v2) 
                  << 8U));
    }
    if (__VdlySet__top__DOT__i_MEM__DOT__R_MEM__v3) {
        vlSelfRef.top__DOT__i_MEM__DOT__R_MEM[__VdlyDim0__top__DOT__i_MEM__DOT__R_MEM__v3] 
            = ((0xffffff00U & vlSelfRef.top__DOT__i_MEM__DOT__R_MEM
                [__VdlyDim0__top__DOT__i_MEM__DOT__R_MEM__v3]) 
               | (IData)(__VdlyVal__top__DOT__i_MEM__DOT__R_MEM__v3));
    }
    vlSelfRef.top__DOT__btn_p[4U] = vlSelfRef.top__DOT____Vcellout__r_btn4____pinNumber4;
    vlSelfRef.top__DOT__i_GPR__DOT__GPR[31U] = vlSelfRef.top__DOT__i_GPR__DOT____Vcellout__foor_loop_i__BRA__31__KET____DOT__R____pinNumber4;
    vlSelfRef.top__DOT__i_GPR__DOT__GPR[30U] = vlSelfRef.top__DOT__i_GPR__DOT____Vcellout__foor_loop_i__BRA__30__KET____DOT__R____pinNumber4;
    vlSelfRef.top__DOT__i_GPR__DOT__GPR[29U] = vlSelfRef.top__DOT__i_GPR__DOT____Vcellout__foor_loop_i__BRA__29__KET____DOT__R____pinNumber4;
    vlSelfRef.top__DOT__i_GPR__DOT__GPR[28U] = vlSelfRef.top__DOT__i_GPR__DOT____Vcellout__foor_loop_i__BRA__28__KET____DOT__R____pinNumber4;
    vlSelfRef.top__DOT__i_GPR__DOT__GPR[27U] = vlSelfRef.top__DOT__i_GPR__DOT____Vcellout__foor_loop_i__BRA__27__KET____DOT__R____pinNumber4;
    vlSelfRef.top__DOT__i_GPR__DOT__GPR[26U] = vlSelfRef.top__DOT__i_GPR__DOT____Vcellout__foor_loop_i__BRA__26__KET____DOT__R____pinNumber4;
    vlSelfRef.top__DOT__i_GPR__DOT__GPR[25U] = vlSelfRef.top__DOT__i_GPR__DOT____Vcellout__foor_loop_i__BRA__25__KET____DOT__R____pinNumber4;
    vlSelfRef.top__DOT__i_GPR__DOT__GPR[24U] = vlSelfRef.top__DOT__i_GPR__DOT____Vcellout__foor_loop_i__BRA__24__KET____DOT__R____pinNumber4;
    vlSelfRef.top__DOT__i_GPR__DOT__GPR[23U] = vlSelfRef.top__DOT__i_GPR__DOT____Vcellout__foor_loop_i__BRA__23__KET____DOT__R____pinNumber4;
    vlSelfRef.top__DOT__i_GPR__DOT__GPR[22U] = vlSelfRef.top__DOT__i_GPR__DOT____Vcellout__foor_loop_i__BRA__22__KET____DOT__R____pinNumber4;
    vlSelfRef.top__DOT__i_GPR__DOT__GPR[21U] = vlSelfRef.top__DOT__i_GPR__DOT____Vcellout__foor_loop_i__BRA__21__KET____DOT__R____pinNumber4;
    vlSelfRef.top__DOT__i_GPR__DOT__GPR[20U] = vlSelfRef.top__DOT__i_GPR__DOT____Vcellout__foor_loop_i__BRA__20__KET____DOT__R____pinNumber4;
    vlSelfRef.top__DOT__i_GPR__DOT__GPR[19U] = vlSelfRef.top__DOT__i_GPR__DOT____Vcellout__foor_loop_i__BRA__19__KET____DOT__R____pinNumber4;
    vlSelfRef.top__DOT__i_GPR__DOT__GPR[18U] = vlSelfRef.top__DOT__i_GPR__DOT____Vcellout__foor_loop_i__BRA__18__KET____DOT__R____pinNumber4;
    vlSelfRef.top__DOT__i_GPR__DOT__GPR[17U] = vlSelfRef.top__DOT__i_GPR__DOT____Vcellout__foor_loop_i__BRA__17__KET____DOT__R____pinNumber4;
    vlSelfRef.top__DOT__i_GPR__DOT__GPR[16U] = vlSelfRef.top__DOT__i_GPR__DOT____Vcellout__foor_loop_i__BRA__16__KET____DOT__R____pinNumber4;
    vlSelfRef.top__DOT__i_GPR__DOT__GPR[15U] = vlSelfRef.top__DOT__i_GPR__DOT____Vcellout__foor_loop_i__BRA__15__KET____DOT__R____pinNumber4;
    vlSelfRef.top__DOT__i_GPR__DOT__GPR[14U] = vlSelfRef.top__DOT__i_GPR__DOT____Vcellout__foor_loop_i__BRA__14__KET____DOT__R____pinNumber4;
    vlSelfRef.top__DOT__i_GPR__DOT__GPR[13U] = vlSelfRef.top__DOT__i_GPR__DOT____Vcellout__foor_loop_i__BRA__13__KET____DOT__R____pinNumber4;
    vlSelfRef.top__DOT__i_GPR__DOT__GPR[12U] = vlSelfRef.top__DOT__i_GPR__DOT____Vcellout__foor_loop_i__BRA__12__KET____DOT__R____pinNumber4;
    vlSelfRef.top__DOT__i_GPR__DOT__GPR[11U] = vlSelfRef.top__DOT__i_GPR__DOT____Vcellout__foor_loop_i__BRA__11__KET____DOT__R____pinNumber4;
    vlSelfRef.top__DOT__i_GPR__DOT__GPR[10U] = vlSelfRef.top__DOT__i_GPR__DOT____Vcellout__foor_loop_i__BRA__10__KET____DOT__R____pinNumber4;
    vlSelfRef.top__DOT__i_GPR__DOT__GPR[9U] = vlSelfRef.top__DOT__i_GPR__DOT____Vcellout__foor_loop_i__BRA__9__KET____DOT__R____pinNumber4;
    vlSelfRef.top__DOT__i_GPR__DOT__GPR[8U] = vlSelfRef.top__DOT__i_GPR__DOT____Vcellout__foor_loop_i__BRA__8__KET____DOT__R____pinNumber4;
    vlSelfRef.top__DOT__i_GPR__DOT__GPR[7U] = vlSelfRef.top__DOT__i_GPR__DOT____Vcellout__foor_loop_i__BRA__7__KET____DOT__R____pinNumber4;
    vlSelfRef.top__DOT__i_GPR__DOT__GPR[6U] = vlSelfRef.top__DOT__i_GPR__DOT____Vcellout__foor_loop_i__BRA__6__KET____DOT__R____pinNumber4;
    vlSelfRef.top__DOT__i_GPR__DOT__GPR[5U] = vlSelfRef.top__DOT__i_GPR__DOT____Vcellout__foor_loop_i__BRA__5__KET____DOT__R____pinNumber4;
    vlSelfRef.top__DOT__i_GPR__DOT__GPR[4U] = vlSelfRef.top__DOT__i_GPR__DOT____Vcellout__foor_loop_i__BRA__4__KET____DOT__R____pinNumber4;
    vlSelfRef.top__DOT__i_GPR__DOT__GPR[3U] = vlSelfRef.top__DOT__i_GPR__DOT____Vcellout__foor_loop_i__BRA__3__KET____DOT__R____pinNumber4;
    vlSelfRef.top__DOT__i_GPR__DOT__GPR[2U] = vlSelfRef.top__DOT__i_GPR__DOT____Vcellout__foor_loop_i__BRA__2__KET____DOT__R____pinNumber4;
    vlSelfRef.top__DOT__i_GPR__DOT__GPR[1U] = vlSelfRef.top__DOT__i_GPR__DOT____Vcellout__foor_loop_i__BRA__1__KET____DOT__R____pinNumber4;
    vlSelfRef.top__DOT__i_GPR__DOT__GPR[0U] = vlSelfRef.top__DOT__i_GPR__DOT____Vcellout__foor_loop_i__BRA__0__KET____DOT__R____pinNumber4;
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
    vlSelfRef.top__DOT__btn_p[3U] = vlSelfRef.top__DOT____Vcellout__r_btn3____pinNumber4;
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
    vlSelfRef.top__DOT__btn_p[2U] = vlSelfRef.top__DOT____Vcellout__r_btn2____pinNumber4;
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
    vlSelfRef.top__DOT__btn_p[1U] = vlSelfRef.top__DOT____Vcellout__r_btn1____pinNumber4;
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
    vlSelfRef.top__DOT__btn_p[0U] = vlSelfRef.top__DOT____Vcellout__r_btn0____pinNumber4;
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
                                                        ((((IData)(vlSelfRef.top__DOT__R_PC__DOT__rst) 
                                                           & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__top__DOT__R_PC__DOT__rst__0))) 
                                                          << 1U) 
                                                         | ((IData)(vlSelfRef.clk) 
                                                            & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__clk__1))))));
        vlSelfRef.__Vtrigprevexpr___TOP__clk__1 = vlSelfRef.clk;
        vlSelfRef.__Vtrigprevexpr___TOP__top__DOT__R_PC__DOT__rst__0 
            = vlSelfRef.top__DOT__R_PC__DOT__rst;
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
                    vlSelfRef.top__DOT__cnt_clk = ((IData)(vlSelfRef.top__DOT__R_PC__DOT__rst)
                                                    ? 0U
                                                    : 
                                                   (0x00ffffffU 
                                                    & ((IData)(1U) 
                                                       + vlSelfRef.top__DOT__cnt_clk)));
                }
            }
            if ((1ULL & vlSelfRef.__VnbaTriggered[0U])) {
                Vtop___024root___nba_sequent__TOP__1(vlSelf);
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
            VL_FATAL_MT("/home/devi/ysyx/ysyx-workbench/npc/vsrc/top_miniRV.v", 1, "", "DIDNOTCONVERGE: Input combinational region did not converge after '--converge-limit' of 10000 tries");
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
            VL_FATAL_MT("/home/devi/ysyx/ysyx-workbench/npc/vsrc/top_miniRV.v", 1, "", "DIDNOTCONVERGE: NBA region did not converge after '--converge-limit' of 10000 tries");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        vlSelfRef.__VactIterCount = 0U;
        do {
            if (VL_UNLIKELY(((0x00002710U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                Vtop___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
#endif
                VL_FATAL_MT("/home/devi/ysyx/ysyx-workbench/npc/vsrc/top_miniRV.v", 1, "", "DIDNOTCONVERGE: Active region did not converge after '--converge-limit' of 10000 tries");
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
