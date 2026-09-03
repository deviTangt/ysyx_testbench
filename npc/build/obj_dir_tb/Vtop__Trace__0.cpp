// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals

#include "verilated_fst_c.h"
#include "Vtop__Syms.h"


void Vtop___024root__trace_chg_0_sub_0(Vtop___024root* vlSelf, VerilatedFst::Buffer* bufp);

void Vtop___024root__trace_chg_0(void* voidSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_chg_0\n"); );
    // Body
    Vtop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    Vtop___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vtop___024root__trace_chg_0_sub_0(Vtop___024root* vlSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_chg_0_sub_0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 0);
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[1U]))) {
        bufp->chgBit(oldp+0,(vlSelfRef.top__DOT__i_L2_DU__DOT__op_add));
        bufp->chgBit(oldp+1,(vlSelfRef.top__DOT__i_L2_DU__DOT__op_addi));
        bufp->chgBit(oldp+2,(vlSelfRef.top__DOT__i_L2_DU__DOT__op_lw));
        bufp->chgBit(oldp+3,(vlSelfRef.top__DOT__i_L2_DU__DOT__op_lbu));
        bufp->chgBit(oldp+4,(vlSelfRef.top__DOT__i_L2_DU__DOT__op_sw));
        bufp->chgBit(oldp+5,(vlSelfRef.top__DOT__i_L2_DU__DOT__op_sb));
        bufp->chgBit(oldp+6,(vlSelfRef.top__DOT__i_L2_DU__DOT__op_jalr));
        bufp->chgBit(oldp+7,(vlSelfRef.top__DOT__i_L2_DU__DOT__wen));
        bufp->chgIData(oldp+8,(vlSelfRef.top__DOT__i_L3_XU__DOT__imm_ext_32b_s),32);
        bufp->chgIData(oldp+9,(vlSelfRef.top__DOT__i_L3_XU__DOT__imm_ext_32b_s),32);
    }
    if (VL_UNLIKELY(((vlSelfRef.__Vm_traceActivity[1U] 
                      | vlSelfRef.__Vm_traceActivity[2U])))) {
        bufp->chgIData(oldp+10,(vlSelfRef.top__DOT__i_L2_DU__DOT__i_GPR__DOT__foor_loop_i__BRA__0__KET____DOT__R__DOT__din),32);
        bufp->chgIData(oldp+11,(vlSelfRef.top__DOT__i_L3_XU__DOT__mem_addr),32);
        bufp->chgIData(oldp+12,(vlSelfRef.top__DOT__i_L3_XU__DOT__mem_din),32);
        bufp->chgBit(oldp+13,(vlSelfRef.top__DOT__i_L3_XU__DOT__mem_wen));
        bufp->chgBit(oldp+14,(((~ (0U != (vlSelfRef.top__DOT__i_L3_XU__DOT__mem_addr 
                                          >> 0x0000001dU))) 
                               & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3))));
        bufp->chgCData(oldp+15,(((((((3U == (3U & vlSelfRef.top__DOT__i_L3_XU__DOT__mem_addr)) 
                                     & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1)) 
                                    | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2)) 
                                   << 3U) | ((((2U 
                                                == 
                                                (3U 
                                                 & vlSelfRef.top__DOT__i_L3_XU__DOT__mem_addr)) 
                                               & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1)) 
                                              | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2)) 
                                             << 2U)) 
                                 | (((((1U == (3U & vlSelfRef.top__DOT__i_L3_XU__DOT__mem_addr)) 
                                       & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1)) 
                                      | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2)) 
                                     << 1U) | (((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1) 
                                                & (0U 
                                                   == 
                                                   (3U 
                                                    & vlSelfRef.top__DOT__i_L3_XU__DOT__mem_addr))) 
                                               | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2))))),4);
        bufp->chgIData(oldp+16,(vlSelfRef.top__DOT__i_L5_BU__DOT__R_PC__DOT__din),32);
        bufp->chgIData(oldp+17,(vlSelfRef.top__DOT__i_L4_SU__DOT__mem_out_val),32);
        bufp->chgCData(oldp+18,(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0),8);
        bufp->chgCData(oldp+19,(vlSelfRef.top__DOT__i_L4_SU__DOT__mem_dout_byte8),8);
        bufp->chgIData(oldp+20,(vlSelfRef.top__DOT__i_L2_DU__DOT__i_GPR__DOT__foor_loop_i__BRA__0__KET____DOT__R__DOT__din),32);
        bufp->chgIData(oldp+21,((0x03ffffffU & vlSelfRef.top__DOT__i_L3_XU__DOT__mem_addr)),26);
        bufp->chgBit(oldp+22,((0U != (vlSelfRef.top__DOT__i_L3_XU__DOT__mem_addr 
                                      >> 0x0000001dU))));
        bufp->chgBit(oldp+23,((1U & (~ (0U != (vlSelfRef.top__DOT__i_L3_XU__DOT__mem_addr 
                                               >> 0x0000001dU))))));
        bufp->chgBit(oldp+24,((((3U == (3U & vlSelfRef.top__DOT__i_L3_XU__DOT__mem_addr)) 
                                & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1)) 
                               | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2))));
        bufp->chgBit(oldp+25,((((2U == (3U & vlSelfRef.top__DOT__i_L3_XU__DOT__mem_addr)) 
                                & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1)) 
                               | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2))));
        bufp->chgBit(oldp+26,((((1U == (3U & vlSelfRef.top__DOT__i_L3_XU__DOT__mem_addr)) 
                                & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1)) 
                               | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2))));
        bufp->chgBit(oldp+27,((((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1) 
                                & (0U == (3U & vlSelfRef.top__DOT__i_L3_XU__DOT__mem_addr))) 
                               | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2))));
        bufp->chgIData(oldp+28,((0xfffffffeU & vlSelfRef.top__DOT__i_L3_XU__DOT__mem_addr)),32);
        bufp->chgCData(oldp+29,(((((((3U == (3U & vlSelfRef.top__DOT__i_L3_XU__DOT__mem_addr)) 
                                     & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1)) 
                                    | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2)) 
                                   << 3U) | ((((2U 
                                                == 
                                                (3U 
                                                 & vlSelfRef.top__DOT__i_L3_XU__DOT__mem_addr)) 
                                               & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1)) 
                                              | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2)) 
                                             << 2U)) 
                                 | (((((1U == (3U & vlSelfRef.top__DOT__i_L3_XU__DOT__mem_addr)) 
                                       & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1)) 
                                      | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2)) 
                                     << 1U) | (((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1) 
                                                & (0U 
                                                   == 
                                                   (3U 
                                                    & vlSelfRef.top__DOT__i_L3_XU__DOT__mem_addr))) 
                                               | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2))))),8);
        bufp->chgIData(oldp+30,(vlSelfRef.top__DOT__i_L4_SU__DOT__mem_dout),32);
        bufp->chgIData(oldp+31,(vlSelfRef.top__DOT__i_L4_SU__DOT__mem_dout_byte8),32);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[2U]))) {
        bufp->chgCData(oldp+32,(vlSelfRef.top__DOT__btn_p[4]),5);
        bufp->chgCData(oldp+33,(vlSelfRef.top__DOT__btn_p[3]),5);
        bufp->chgCData(oldp+34,(vlSelfRef.top__DOT__btn_p[2]),5);
        bufp->chgCData(oldp+35,(vlSelfRef.top__DOT__btn_p[1]),5);
        bufp->chgCData(oldp+36,(vlSelfRef.top__DOT__btn_p[0]),5);
        bufp->chgIData(oldp+37,(vlSelfRef.top__DOT__PC),32);
        bufp->chgIData(oldp+38,((0x03ffffffU & (vlSelfRef.top__DOT__PC 
                                                >> 2U))),30);
        bufp->chgIData(oldp+39,(vlSelfRef.top__DOT__i_L2_DU__DOT__i_GPR__DOT__GPR[31]),32);
        bufp->chgIData(oldp+40,(vlSelfRef.top__DOT__i_L2_DU__DOT__i_GPR__DOT__GPR[30]),32);
        bufp->chgIData(oldp+41,(vlSelfRef.top__DOT__i_L2_DU__DOT__i_GPR__DOT__GPR[29]),32);
        bufp->chgIData(oldp+42,(vlSelfRef.top__DOT__i_L2_DU__DOT__i_GPR__DOT__GPR[28]),32);
        bufp->chgIData(oldp+43,(vlSelfRef.top__DOT__i_L2_DU__DOT__i_GPR__DOT__GPR[27]),32);
        bufp->chgIData(oldp+44,(vlSelfRef.top__DOT__i_L2_DU__DOT__i_GPR__DOT__GPR[26]),32);
        bufp->chgIData(oldp+45,(vlSelfRef.top__DOT__i_L2_DU__DOT__i_GPR__DOT__GPR[25]),32);
        bufp->chgIData(oldp+46,(vlSelfRef.top__DOT__i_L2_DU__DOT__i_GPR__DOT__GPR[24]),32);
        bufp->chgIData(oldp+47,(vlSelfRef.top__DOT__i_L2_DU__DOT__i_GPR__DOT__GPR[23]),32);
        bufp->chgIData(oldp+48,(vlSelfRef.top__DOT__i_L2_DU__DOT__i_GPR__DOT__GPR[22]),32);
        bufp->chgIData(oldp+49,(vlSelfRef.top__DOT__i_L2_DU__DOT__i_GPR__DOT__GPR[21]),32);
        bufp->chgIData(oldp+50,(vlSelfRef.top__DOT__i_L2_DU__DOT__i_GPR__DOT__GPR[20]),32);
        bufp->chgIData(oldp+51,(vlSelfRef.top__DOT__i_L2_DU__DOT__i_GPR__DOT__GPR[19]),32);
        bufp->chgIData(oldp+52,(vlSelfRef.top__DOT__i_L2_DU__DOT__i_GPR__DOT__GPR[18]),32);
        bufp->chgIData(oldp+53,(vlSelfRef.top__DOT__i_L2_DU__DOT__i_GPR__DOT__GPR[17]),32);
        bufp->chgIData(oldp+54,(vlSelfRef.top__DOT__i_L2_DU__DOT__i_GPR__DOT__GPR[16]),32);
        bufp->chgIData(oldp+55,(vlSelfRef.top__DOT__i_L2_DU__DOT__i_GPR__DOT__GPR[15]),32);
        bufp->chgIData(oldp+56,(vlSelfRef.top__DOT__i_L2_DU__DOT__i_GPR__DOT__GPR[14]),32);
        bufp->chgIData(oldp+57,(vlSelfRef.top__DOT__i_L2_DU__DOT__i_GPR__DOT__GPR[13]),32);
        bufp->chgIData(oldp+58,(vlSelfRef.top__DOT__i_L2_DU__DOT__i_GPR__DOT__GPR[12]),32);
        bufp->chgIData(oldp+59,(vlSelfRef.top__DOT__i_L2_DU__DOT__i_GPR__DOT__GPR[11]),32);
        bufp->chgIData(oldp+60,(vlSelfRef.top__DOT__i_L2_DU__DOT__i_GPR__DOT__GPR[10]),32);
        bufp->chgIData(oldp+61,(vlSelfRef.top__DOT__i_L2_DU__DOT__i_GPR__DOT__GPR[9]),32);
        bufp->chgIData(oldp+62,(vlSelfRef.top__DOT__i_L2_DU__DOT__i_GPR__DOT__GPR[8]),32);
        bufp->chgIData(oldp+63,(vlSelfRef.top__DOT__i_L2_DU__DOT__i_GPR__DOT__GPR[7]),32);
        bufp->chgIData(oldp+64,(vlSelfRef.top__DOT__i_L2_DU__DOT__i_GPR__DOT__GPR[6]),32);
        bufp->chgIData(oldp+65,(vlSelfRef.top__DOT__i_L2_DU__DOT__i_GPR__DOT__GPR[5]),32);
        bufp->chgIData(oldp+66,(vlSelfRef.top__DOT__i_L2_DU__DOT__i_GPR__DOT__GPR[4]),32);
        bufp->chgIData(oldp+67,(vlSelfRef.top__DOT__i_L2_DU__DOT__i_GPR__DOT__GPR[3]),32);
        bufp->chgIData(oldp+68,(vlSelfRef.top__DOT__i_L2_DU__DOT__i_GPR__DOT__GPR[2]),32);
        bufp->chgIData(oldp+69,(vlSelfRef.top__DOT__i_L2_DU__DOT__i_GPR__DOT__GPR[1]),32);
        bufp->chgIData(oldp+70,(vlSelfRef.top__DOT__i_L2_DU__DOT__i_GPR__DOT__GPR[0]),32);
        bufp->chgIData(oldp+71,(vlSelfRef.top__DOT__i_L2_DU__DOT__i_GPR__DOT____Vcellout__foor_loop_i__BRA__0__KET____DOT__R____pinNumber4),32);
        bufp->chgIData(oldp+72,(vlSelfRef.top__DOT__i_L2_DU__DOT__i_GPR__DOT____Vcellout__foor_loop_i__BRA__10__KET____DOT__R____pinNumber4),32);
        bufp->chgIData(oldp+73,(vlSelfRef.top__DOT__i_L2_DU__DOT__i_GPR__DOT____Vcellout__foor_loop_i__BRA__11__KET____DOT__R____pinNumber4),32);
        bufp->chgIData(oldp+74,(vlSelfRef.top__DOT__i_L2_DU__DOT__i_GPR__DOT____Vcellout__foor_loop_i__BRA__12__KET____DOT__R____pinNumber4),32);
        bufp->chgIData(oldp+75,(vlSelfRef.top__DOT__i_L2_DU__DOT__i_GPR__DOT____Vcellout__foor_loop_i__BRA__13__KET____DOT__R____pinNumber4),32);
        bufp->chgIData(oldp+76,(vlSelfRef.top__DOT__i_L2_DU__DOT__i_GPR__DOT____Vcellout__foor_loop_i__BRA__14__KET____DOT__R____pinNumber4),32);
        bufp->chgIData(oldp+77,(vlSelfRef.top__DOT__i_L2_DU__DOT__i_GPR__DOT____Vcellout__foor_loop_i__BRA__15__KET____DOT__R____pinNumber4),32);
        bufp->chgIData(oldp+78,(vlSelfRef.top__DOT__i_L2_DU__DOT__i_GPR__DOT____Vcellout__foor_loop_i__BRA__16__KET____DOT__R____pinNumber4),32);
        bufp->chgIData(oldp+79,(vlSelfRef.top__DOT__i_L2_DU__DOT__i_GPR__DOT____Vcellout__foor_loop_i__BRA__17__KET____DOT__R____pinNumber4),32);
        bufp->chgIData(oldp+80,(vlSelfRef.top__DOT__i_L2_DU__DOT__i_GPR__DOT____Vcellout__foor_loop_i__BRA__18__KET____DOT__R____pinNumber4),32);
        bufp->chgIData(oldp+81,(vlSelfRef.top__DOT__i_L2_DU__DOT__i_GPR__DOT____Vcellout__foor_loop_i__BRA__19__KET____DOT__R____pinNumber4),32);
        bufp->chgIData(oldp+82,(vlSelfRef.top__DOT__i_L2_DU__DOT__i_GPR__DOT____Vcellout__foor_loop_i__BRA__1__KET____DOT__R____pinNumber4),32);
        bufp->chgIData(oldp+83,(vlSelfRef.top__DOT__i_L2_DU__DOT__i_GPR__DOT____Vcellout__foor_loop_i__BRA__20__KET____DOT__R____pinNumber4),32);
        bufp->chgIData(oldp+84,(vlSelfRef.top__DOT__i_L2_DU__DOT__i_GPR__DOT____Vcellout__foor_loop_i__BRA__21__KET____DOT__R____pinNumber4),32);
        bufp->chgIData(oldp+85,(vlSelfRef.top__DOT__i_L2_DU__DOT__i_GPR__DOT____Vcellout__foor_loop_i__BRA__22__KET____DOT__R____pinNumber4),32);
        bufp->chgIData(oldp+86,(vlSelfRef.top__DOT__i_L2_DU__DOT__i_GPR__DOT____Vcellout__foor_loop_i__BRA__23__KET____DOT__R____pinNumber4),32);
        bufp->chgIData(oldp+87,(vlSelfRef.top__DOT__i_L2_DU__DOT__i_GPR__DOT____Vcellout__foor_loop_i__BRA__24__KET____DOT__R____pinNumber4),32);
        bufp->chgIData(oldp+88,(vlSelfRef.top__DOT__i_L2_DU__DOT__i_GPR__DOT____Vcellout__foor_loop_i__BRA__25__KET____DOT__R____pinNumber4),32);
        bufp->chgIData(oldp+89,(vlSelfRef.top__DOT__i_L2_DU__DOT__i_GPR__DOT____Vcellout__foor_loop_i__BRA__26__KET____DOT__R____pinNumber4),32);
        bufp->chgIData(oldp+90,(vlSelfRef.top__DOT__i_L2_DU__DOT__i_GPR__DOT____Vcellout__foor_loop_i__BRA__27__KET____DOT__R____pinNumber4),32);
        bufp->chgIData(oldp+91,(vlSelfRef.top__DOT__i_L2_DU__DOT__i_GPR__DOT____Vcellout__foor_loop_i__BRA__28__KET____DOT__R____pinNumber4),32);
        bufp->chgIData(oldp+92,(vlSelfRef.top__DOT__i_L2_DU__DOT__i_GPR__DOT____Vcellout__foor_loop_i__BRA__29__KET____DOT__R____pinNumber4),32);
        bufp->chgIData(oldp+93,(vlSelfRef.top__DOT__i_L2_DU__DOT__i_GPR__DOT____Vcellout__foor_loop_i__BRA__2__KET____DOT__R____pinNumber4),32);
        bufp->chgIData(oldp+94,(vlSelfRef.top__DOT__i_L2_DU__DOT__i_GPR__DOT____Vcellout__foor_loop_i__BRA__30__KET____DOT__R____pinNumber4),32);
        bufp->chgIData(oldp+95,(vlSelfRef.top__DOT__i_L2_DU__DOT__i_GPR__DOT____Vcellout__foor_loop_i__BRA__31__KET____DOT__R____pinNumber4),32);
        bufp->chgIData(oldp+96,(vlSelfRef.top__DOT__i_L2_DU__DOT__i_GPR__DOT____Vcellout__foor_loop_i__BRA__3__KET____DOT__R____pinNumber4),32);
        bufp->chgIData(oldp+97,(vlSelfRef.top__DOT__i_L2_DU__DOT__i_GPR__DOT____Vcellout__foor_loop_i__BRA__4__KET____DOT__R____pinNumber4),32);
        bufp->chgIData(oldp+98,(vlSelfRef.top__DOT__i_L2_DU__DOT__i_GPR__DOT____Vcellout__foor_loop_i__BRA__5__KET____DOT__R____pinNumber4),32);
        bufp->chgIData(oldp+99,(vlSelfRef.top__DOT__i_L2_DU__DOT__i_GPR__DOT____Vcellout__foor_loop_i__BRA__6__KET____DOT__R____pinNumber4),32);
        bufp->chgIData(oldp+100,(vlSelfRef.top__DOT__i_L2_DU__DOT__i_GPR__DOT____Vcellout__foor_loop_i__BRA__7__KET____DOT__R____pinNumber4),32);
        bufp->chgIData(oldp+101,(vlSelfRef.top__DOT__i_L2_DU__DOT__i_GPR__DOT____Vcellout__foor_loop_i__BRA__8__KET____DOT__R____pinNumber4),32);
        bufp->chgIData(oldp+102,(vlSelfRef.top__DOT__i_L2_DU__DOT__i_GPR__DOT____Vcellout__foor_loop_i__BRA__9__KET____DOT__R____pinNumber4),32);
        bufp->chgIData(oldp+103,(((IData)(4U) + vlSelfRef.top__DOT__PC)),32);
        bufp->chgCData(oldp+104,(vlSelfRef.top__DOT____Vcellout__r_btn0____pinNumber4),5);
        bufp->chgCData(oldp+105,(vlSelfRef.top__DOT____Vcellout__r_btn1____pinNumber4),5);
        bufp->chgCData(oldp+106,(vlSelfRef.top__DOT____Vcellout__r_btn2____pinNumber4),5);
        bufp->chgCData(oldp+107,(vlSelfRef.top__DOT____Vcellout__r_btn3____pinNumber4),5);
        bufp->chgCData(oldp+108,(vlSelfRef.top__DOT____Vcellout__r_btn4____pinNumber4),5);
    }
    bufp->chgBit(oldp+109,(vlSelfRef.clk));
    bufp->chgBit(oldp+110,(vlSelfRef.rst));
    bufp->chgCData(oldp+111,(vlSelfRef.btn),5);
    bufp->chgSData(oldp+112,(vlSelfRef.sw),16);
    bufp->chgBit(oldp+113,(vlSelfRef.ps2_clk));
    bufp->chgBit(oldp+114,(vlSelfRef.ps2_data));
    bufp->chgBit(oldp+115,(vlSelfRef.uart_rx));
    bufp->chgBit(oldp+116,(vlSelfRef.uart_tx));
    bufp->chgSData(oldp+117,(vlSelfRef.ledr),16);
    bufp->chgBit(oldp+118,(vlSelfRef.VGA_CLK));
    bufp->chgBit(oldp+119,(vlSelfRef.VGA_HSYNC));
    bufp->chgBit(oldp+120,(vlSelfRef.VGA_VSYNC));
    bufp->chgBit(oldp+121,(vlSelfRef.VGA_BLANK_N));
    bufp->chgCData(oldp+122,(vlSelfRef.VGA_R),8);
    bufp->chgCData(oldp+123,(vlSelfRef.VGA_G),8);
    bufp->chgCData(oldp+124,(vlSelfRef.VGA_B),8);
    bufp->chgCData(oldp+125,(vlSelfRef.seg0),8);
    bufp->chgCData(oldp+126,(vlSelfRef.seg1),8);
    bufp->chgCData(oldp+127,(vlSelfRef.seg2),8);
    bufp->chgCData(oldp+128,(vlSelfRef.seg3),8);
    bufp->chgCData(oldp+129,(vlSelfRef.seg4),8);
    bufp->chgCData(oldp+130,(vlSelfRef.seg5),8);
    bufp->chgCData(oldp+131,(vlSelfRef.seg6),8);
    bufp->chgCData(oldp+132,(vlSelfRef.seg7),8);
    bufp->chgIData(oldp+133,(vlSelfRef.instruct_i),32);
    bufp->chgIData(oldp+134,(vlSelfRef.PC_N_o),30);
    bufp->chgBit(oldp+135,(vlSelfRef.top__DOT__i_L2_DU__DOT__i_GPR__DOT__foor_loop_i__BRA__0__KET____DOT__R__DOT__rst));
    bufp->chgCData(oldp+136,(((~ (IData)(vlSelfRef.btn)) 
                              & (IData)(vlSelfRef.top__DOT____Vcellout__r_btn0____pinNumber4))),5);
    bufp->chgCData(oldp+137,(((~ (IData)(vlSelfRef.btn)) 
                              & (IData)(vlSelfRef.top__DOT____Vcellout__r_btn1____pinNumber4))),5);
    bufp->chgBit(oldp+138,((0x37U == (0x0000007fU & vlSelfRef.instruct_i))));
    bufp->chgIData(oldp+139,(vlSelfRef.top__DOT__i_L2_DU__DOT__i_GPR__DOT__GPR
                             [(0x0000001fU & (vlSelfRef.instruct_i 
                                              >> 0x0000000fU))]),32);
    bufp->chgIData(oldp+140,(vlSelfRef.top__DOT__i_L2_DU__DOT__i_GPR__DOT__GPR
                             [(0x0000001fU & (vlSelfRef.instruct_i 
                                              >> 0x00000014U))]),32);
    bufp->chgIData(oldp+141,((vlSelfRef.instruct_i 
                              >> 0x0000000cU)),20);
    bufp->chgSData(oldp+142,((vlSelfRef.instruct_i 
                              >> 0x00000014U)),12);
    bufp->chgCData(oldp+143,((vlSelfRef.instruct_i 
                              >> 0x00000019U)),7);
    bufp->chgCData(oldp+144,((0x0000001fU & (vlSelfRef.instruct_i 
                                             >> 7U))),5);
    bufp->chgIData(oldp+145,(((0x37U == (0x0000007fU 
                                         & vlSelfRef.instruct_i))
                               ? (0xfffff000U & vlSelfRef.instruct_i)
                               : ((IData)(vlSelfRef.top__DOT__i_L2_DU__DOT__op_jalr)
                                   ? (0xfffffffeU & vlSelfRef.top__DOT__i_L3_XU__DOT__mem_addr)
                                   : (vlSelfRef.top__DOT__i_L2_DU__DOT__i_GPR__DOT__GPR
                                      [(0x0000001fU 
                                        & (vlSelfRef.instruct_i 
                                           >> 0x0000000fU))] 
                                      + ((IData)(vlSelfRef.top__DOT__i_L2_DU__DOT__op_add)
                                          ? vlSelfRef.top__DOT__i_L2_DU__DOT__i_GPR__DOT__GPR
                                         [(0x0000001fU 
                                           & (vlSelfRef.instruct_i 
                                              >> 0x00000014U))]
                                          : vlSelfRef.top__DOT__i_L3_XU__DOT__imm_ext_32b_s))))),32);
    bufp->chgCData(oldp+146,((0x0000001fU & (vlSelfRef.instruct_i 
                                             >> 0x0000000fU))),5);
    bufp->chgCData(oldp+147,((0x0000001fU & (vlSelfRef.instruct_i 
                                             >> 0x00000014U))),5);
    bufp->chgCData(oldp+148,((0x0000007fU & vlSelfRef.instruct_i)),7);
    bufp->chgCData(oldp+149,((7U & (vlSelfRef.instruct_i 
                                    >> 0x0000000cU))),3);
    bufp->chgIData(oldp+150,(vlSelfRef.top__DOT__cnt_clk),24);
    bufp->chgBit(oldp+151,((0x00100073U == vlSelfRef.instruct_i)));
    bufp->chgBit(oldp+152,((IData)(((0U == (0x00000f80U 
                                            & vlSelfRef.instruct_i)) 
                                    & (IData)(vlSelfRef.top__DOT__i_L2_DU__DOT__wen)))));
    bufp->chgBit(oldp+153,((IData)(((0x00000500U == 
                                     (0x00000f80U & vlSelfRef.instruct_i)) 
                                    & (IData)(vlSelfRef.top__DOT__i_L2_DU__DOT__wen)))));
    bufp->chgBit(oldp+154,((IData)(((0x00000580U == 
                                     (0x00000f80U & vlSelfRef.instruct_i)) 
                                    & (IData)(vlSelfRef.top__DOT__i_L2_DU__DOT__wen)))));
    bufp->chgBit(oldp+155,((IData)(((0x00000600U == 
                                     (0x00000f80U & vlSelfRef.instruct_i)) 
                                    & (IData)(vlSelfRef.top__DOT__i_L2_DU__DOT__wen)))));
    bufp->chgBit(oldp+156,((IData)(((0x00000680U == 
                                     (0x00000f80U & vlSelfRef.instruct_i)) 
                                    & (IData)(vlSelfRef.top__DOT__i_L2_DU__DOT__wen)))));
    bufp->chgBit(oldp+157,((IData)(((0x00000700U == 
                                     (0x00000f80U & vlSelfRef.instruct_i)) 
                                    & (IData)(vlSelfRef.top__DOT__i_L2_DU__DOT__wen)))));
    bufp->chgBit(oldp+158,((IData)(((0x00000780U == 
                                     (0x00000f80U & vlSelfRef.instruct_i)) 
                                    & (IData)(vlSelfRef.top__DOT__i_L2_DU__DOT__wen)))));
    bufp->chgBit(oldp+159,((IData)(((0x00000800U == 
                                     (0x00000f80U & vlSelfRef.instruct_i)) 
                                    & (IData)(vlSelfRef.top__DOT__i_L2_DU__DOT__wen)))));
    bufp->chgBit(oldp+160,((IData)(((0x00000880U == 
                                     (0x00000f80U & vlSelfRef.instruct_i)) 
                                    & (IData)(vlSelfRef.top__DOT__i_L2_DU__DOT__wen)))));
    bufp->chgBit(oldp+161,((IData)(((0x00000900U == 
                                     (0x00000f80U & vlSelfRef.instruct_i)) 
                                    & (IData)(vlSelfRef.top__DOT__i_L2_DU__DOT__wen)))));
    bufp->chgBit(oldp+162,((IData)(((0x00000980U == 
                                     (0x00000f80U & vlSelfRef.instruct_i)) 
                                    & (IData)(vlSelfRef.top__DOT__i_L2_DU__DOT__wen)))));
    bufp->chgBit(oldp+163,((IData)(((0x00000080U == 
                                     (0x00000f80U & vlSelfRef.instruct_i)) 
                                    & (IData)(vlSelfRef.top__DOT__i_L2_DU__DOT__wen)))));
    bufp->chgBit(oldp+164,((IData)(((0x00000a00U == 
                                     (0x00000f80U & vlSelfRef.instruct_i)) 
                                    & (IData)(vlSelfRef.top__DOT__i_L2_DU__DOT__wen)))));
    bufp->chgBit(oldp+165,((IData)(((0x00000a80U == 
                                     (0x00000f80U & vlSelfRef.instruct_i)) 
                                    & (IData)(vlSelfRef.top__DOT__i_L2_DU__DOT__wen)))));
    bufp->chgBit(oldp+166,((IData)(((0x00000b00U == 
                                     (0x00000f80U & vlSelfRef.instruct_i)) 
                                    & (IData)(vlSelfRef.top__DOT__i_L2_DU__DOT__wen)))));
    bufp->chgBit(oldp+167,((IData)(((0x00000b80U == 
                                     (0x00000f80U & vlSelfRef.instruct_i)) 
                                    & (IData)(vlSelfRef.top__DOT__i_L2_DU__DOT__wen)))));
    bufp->chgBit(oldp+168,((IData)(((0x00000c00U == 
                                     (0x00000f80U & vlSelfRef.instruct_i)) 
                                    & (IData)(vlSelfRef.top__DOT__i_L2_DU__DOT__wen)))));
    bufp->chgBit(oldp+169,((IData)(((0x00000c80U == 
                                     (0x00000f80U & vlSelfRef.instruct_i)) 
                                    & (IData)(vlSelfRef.top__DOT__i_L2_DU__DOT__wen)))));
    bufp->chgBit(oldp+170,((IData)(((0x00000d00U == 
                                     (0x00000f80U & vlSelfRef.instruct_i)) 
                                    & (IData)(vlSelfRef.top__DOT__i_L2_DU__DOT__wen)))));
    bufp->chgBit(oldp+171,((IData)(((0x00000d80U == 
                                     (0x00000f80U & vlSelfRef.instruct_i)) 
                                    & (IData)(vlSelfRef.top__DOT__i_L2_DU__DOT__wen)))));
    bufp->chgBit(oldp+172,((IData)(((0x00000e00U == 
                                     (0x00000f80U & vlSelfRef.instruct_i)) 
                                    & (IData)(vlSelfRef.top__DOT__i_L2_DU__DOT__wen)))));
    bufp->chgBit(oldp+173,((IData)(((0x00000e80U == 
                                     (0x00000f80U & vlSelfRef.instruct_i)) 
                                    & (IData)(vlSelfRef.top__DOT__i_L2_DU__DOT__wen)))));
    bufp->chgBit(oldp+174,((IData)(((0x00000100U == 
                                     (0x00000f80U & vlSelfRef.instruct_i)) 
                                    & (IData)(vlSelfRef.top__DOT__i_L2_DU__DOT__wen)))));
    bufp->chgBit(oldp+175,((IData)(((0x00000f00U == 
                                     (0x00000f80U & vlSelfRef.instruct_i)) 
                                    & (IData)(vlSelfRef.top__DOT__i_L2_DU__DOT__wen)))));
    bufp->chgBit(oldp+176,((IData)(((0x00000f80U == 
                                     (0x00000f80U & vlSelfRef.instruct_i)) 
                                    & (IData)(vlSelfRef.top__DOT__i_L2_DU__DOT__wen)))));
    bufp->chgBit(oldp+177,((IData)(((0x00000180U == 
                                     (0x00000f80U & vlSelfRef.instruct_i)) 
                                    & (IData)(vlSelfRef.top__DOT__i_L2_DU__DOT__wen)))));
    bufp->chgBit(oldp+178,((IData)(((0x00000200U == 
                                     (0x00000f80U & vlSelfRef.instruct_i)) 
                                    & (IData)(vlSelfRef.top__DOT__i_L2_DU__DOT__wen)))));
    bufp->chgBit(oldp+179,((IData)(((0x00000280U == 
                                     (0x00000f80U & vlSelfRef.instruct_i)) 
                                    & (IData)(vlSelfRef.top__DOT__i_L2_DU__DOT__wen)))));
    bufp->chgBit(oldp+180,((IData)(((0x00000300U == 
                                     (0x00000f80U & vlSelfRef.instruct_i)) 
                                    & (IData)(vlSelfRef.top__DOT__i_L2_DU__DOT__wen)))));
    bufp->chgBit(oldp+181,((IData)(((0x00000380U == 
                                     (0x00000f80U & vlSelfRef.instruct_i)) 
                                    & (IData)(vlSelfRef.top__DOT__i_L2_DU__DOT__wen)))));
    bufp->chgBit(oldp+182,((IData)(((0x00000400U == 
                                     (0x00000f80U & vlSelfRef.instruct_i)) 
                                    & (IData)(vlSelfRef.top__DOT__i_L2_DU__DOT__wen)))));
    bufp->chgBit(oldp+183,((IData)(((0x00000480U == 
                                     (0x00000f80U & vlSelfRef.instruct_i)) 
                                    & (IData)(vlSelfRef.top__DOT__i_L2_DU__DOT__wen)))));
    bufp->chgIData(oldp+184,(((IData)(vlSelfRef.top__DOT__i_L2_DU__DOT__op_add)
                               ? vlSelfRef.top__DOT__i_L2_DU__DOT__i_GPR__DOT__GPR
                              [(0x0000001fU & (vlSelfRef.instruct_i 
                                               >> 0x00000014U))]
                               : vlSelfRef.top__DOT__i_L3_XU__DOT__imm_ext_32b_s)),32);
    bufp->chgIData(oldp+185,((vlSelfRef.top__DOT__i_L2_DU__DOT__i_GPR__DOT__GPR
                              [(0x0000001fU & (vlSelfRef.instruct_i 
                                               >> 0x0000000fU))] 
                              + ((IData)(vlSelfRef.top__DOT__i_L2_DU__DOT__op_add)
                                  ? vlSelfRef.top__DOT__i_L2_DU__DOT__i_GPR__DOT__GPR
                                 [(0x0000001fU & (vlSelfRef.instruct_i 
                                                  >> 0x00000014U))]
                                  : vlSelfRef.top__DOT__i_L3_XU__DOT__imm_ext_32b_s))),32);
    bufp->chgIData(oldp+186,((0xfffff000U & vlSelfRef.instruct_i)),32);
    bufp->chgIData(oldp+187,(((3U == (3U & vlSelfRef.top__DOT__i_L3_XU__DOT__mem_addr))
                               ? (vlSelfRef.top__DOT__i_L2_DU__DOT__i_GPR__DOT__GPR
                                  [(0x0000001fU & (vlSelfRef.instruct_i 
                                                   >> 0x00000014U))] 
                                  << 0x00000018U) : 
                              ((2U == (3U & vlSelfRef.top__DOT__i_L3_XU__DOT__mem_addr))
                                ? ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0) 
                                   << 0x00000010U) : 
                               ((1U == (3U & vlSelfRef.top__DOT__i_L3_XU__DOT__mem_addr))
                                 ? ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0) 
                                    << 8U) : (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0))))),32);
}

void Vtop___024root__trace_cleanup(void* voidSelf, VerilatedFst* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_cleanup\n"); );
    // Body
    Vtop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
}
