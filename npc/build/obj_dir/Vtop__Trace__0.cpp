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

void Vtop___024root__trace_chg_dtype____0(Vtop___024root* vlSelf, VerilatedFst::Buffer* bufp, uint32_t offset, const VlUnpacked<SData/*11:0*/, 16>& __VdtypeVar);
void Vtop___024root__trace_chg_dtype____1(Vtop___024root* vlSelf, VerilatedFst::Buffer* bufp, uint32_t offset, const VlUnpacked<CData/*3:0*/, 16>& __VdtypeVar);
void Vtop___024root__trace_chg_dtype____2(Vtop___024root* vlSelf, VerilatedFst::Buffer* bufp, uint32_t offset, const VlUnpacked<CData/*7:0*/, 16>& __VdtypeVar);

void Vtop___024root__trace_chg_0_sub_0(Vtop___024root* vlSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_chg_0_sub_0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 0);
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[0U]))) {
        Vtop___024root__trace_chg_dtype____0(vlSelf, bufp, 0, vlSelfRef.top__DOT__ins_seg0__DOT__i0__DOT__i0__DOT__pair_list);
        Vtop___024root__trace_chg_dtype____1(vlSelf, bufp, 16, vlSelfRef.top__DOT__ins_seg0__DOT__i0__DOT__i0__DOT__key_list);
        Vtop___024root__trace_chg_dtype____2(vlSelf, bufp, 32, vlSelfRef.top__DOT__ins_seg0__DOT__i0__DOT__i0__DOT__data_list);
        Vtop___024root__trace_chg_dtype____0(vlSelf, bufp, 48, vlSelfRef.top__DOT__ins_seg1__DOT__i0__DOT__i0__DOT__pair_list);
        Vtop___024root__trace_chg_dtype____1(vlSelf, bufp, 64, vlSelfRef.top__DOT__ins_seg1__DOT__i0__DOT__i0__DOT__key_list);
        Vtop___024root__trace_chg_dtype____2(vlSelf, bufp, 80, vlSelfRef.top__DOT__ins_seg1__DOT__i0__DOT__i0__DOT__data_list);
        Vtop___024root__trace_chg_dtype____0(vlSelf, bufp, 96, vlSelfRef.top__DOT__ins_seg2__DOT__i0__DOT__i0__DOT__pair_list);
        Vtop___024root__trace_chg_dtype____1(vlSelf, bufp, 112, vlSelfRef.top__DOT__ins_seg2__DOT__i0__DOT__i0__DOT__key_list);
        Vtop___024root__trace_chg_dtype____2(vlSelf, bufp, 128, vlSelfRef.top__DOT__ins_seg2__DOT__i0__DOT__i0__DOT__data_list);
        Vtop___024root__trace_chg_dtype____0(vlSelf, bufp, 144, vlSelfRef.top__DOT__ins_seg3__DOT__i0__DOT__i0__DOT__pair_list);
        Vtop___024root__trace_chg_dtype____1(vlSelf, bufp, 160, vlSelfRef.top__DOT__ins_seg3__DOT__i0__DOT__i0__DOT__key_list);
        Vtop___024root__trace_chg_dtype____2(vlSelf, bufp, 176, vlSelfRef.top__DOT__ins_seg3__DOT__i0__DOT__i0__DOT__data_list);
        Vtop___024root__trace_chg_dtype____0(vlSelf, bufp, 192, vlSelfRef.top__DOT__ins_seg4__DOT__i0__DOT__i0__DOT__pair_list);
        Vtop___024root__trace_chg_dtype____1(vlSelf, bufp, 208, vlSelfRef.top__DOT__ins_seg4__DOT__i0__DOT__i0__DOT__key_list);
        Vtop___024root__trace_chg_dtype____2(vlSelf, bufp, 224, vlSelfRef.top__DOT__ins_seg4__DOT__i0__DOT__i0__DOT__data_list);
        Vtop___024root__trace_chg_dtype____0(vlSelf, bufp, 240, vlSelfRef.top__DOT__ins_seg5__DOT__i0__DOT__i0__DOT__pair_list);
        Vtop___024root__trace_chg_dtype____1(vlSelf, bufp, 256, vlSelfRef.top__DOT__ins_seg5__DOT__i0__DOT__i0__DOT__key_list);
        Vtop___024root__trace_chg_dtype____2(vlSelf, bufp, 272, vlSelfRef.top__DOT__ins_seg5__DOT__i0__DOT__i0__DOT__data_list);
        Vtop___024root__trace_chg_dtype____0(vlSelf, bufp, 288, vlSelfRef.top__DOT__ins_seg6__DOT__i0__DOT__i0__DOT__pair_list);
        Vtop___024root__trace_chg_dtype____1(vlSelf, bufp, 304, vlSelfRef.top__DOT__ins_seg6__DOT__i0__DOT__i0__DOT__key_list);
        Vtop___024root__trace_chg_dtype____2(vlSelf, bufp, 320, vlSelfRef.top__DOT__ins_seg6__DOT__i0__DOT__i0__DOT__data_list);
        Vtop___024root__trace_chg_dtype____0(vlSelf, bufp, 336, vlSelfRef.top__DOT__ins_seg7__DOT__i0__DOT__i0__DOT__pair_list);
        Vtop___024root__trace_chg_dtype____1(vlSelf, bufp, 352, vlSelfRef.top__DOT__ins_seg7__DOT__i0__DOT__i0__DOT__key_list);
        Vtop___024root__trace_chg_dtype____2(vlSelf, bufp, 368, vlSelfRef.top__DOT__ins_seg7__DOT__i0__DOT__i0__DOT__data_list);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[1U]))) {
        bufp->chgCData(oldp+384,(vlSelfRef.top__DOT__btn_p[4]),5);
        bufp->chgCData(oldp+385,(vlSelfRef.top__DOT__btn_p[3]),5);
        bufp->chgCData(oldp+386,(vlSelfRef.top__DOT__btn_p[2]),5);
        bufp->chgCData(oldp+387,(vlSelfRef.top__DOT__btn_p[1]),5);
        bufp->chgCData(oldp+388,(vlSelfRef.top__DOT__btn_p[0]),5);
        bufp->chgIData(oldp+389,(vlSelfRef.top__DOT__PC),18);
        bufp->chgSData(oldp+390,((0x0000ffffU & (vlSelfRef.top__DOT__PC 
                                                 >> 2U))),16);
        bufp->chgIData(oldp+391,(vlSelfRef.top__DOT__R_PC__DOT__din),18);
        bufp->chgIData(oldp+392,((0x0003ffffU & ((IData)(4U) 
                                                 + vlSelfRef.top__DOT__PC))),18);
        bufp->chgIData(oldp+393,((0x0003fffeU & vlSelfRef.top__DOT__mem_addr)),18);
        bufp->chgIData(oldp+394,((((- (IData)((1U & 
                                               (vlSelfRef.top__DOT__mem_addr 
                                                >> 0x00000011U)))) 
                                   << 0x00000012U) 
                                  | (0x0003fffeU & vlSelfRef.top__DOT__mem_addr))),32);
        bufp->chgCData(oldp+395,(vlSelfRef.top__DOT__i_GPR__DOT__raddra),5);
        bufp->chgCData(oldp+396,(vlSelfRef.top__DOT__i_GPR__DOT__raddrb),5);
        bufp->chgIData(oldp+397,(vlSelfRef.top__DOT__i_GPR__DOT__GPR
                                 [vlSelfRef.top__DOT__i_GPR__DOT__raddra]),32);
        bufp->chgIData(oldp+398,(vlSelfRef.top__DOT__i_GPR__DOT__GPR
                                 [vlSelfRef.top__DOT__i_GPR__DOT__raddrb]),32);
        bufp->chgCData(oldp+399,(vlSelfRef.top__DOT__i_GPR__DOT__waddr),5);
        bufp->chgBit(oldp+400,(vlSelfRef.top__DOT__i_GPR__DOT__wen));
        bufp->chgIData(oldp+401,(vlSelfRef.top__DOT__i_GPR__DOT__foor_loop_i__BRA__0__KET____DOT__R__DOT__din),32);
        bufp->chgIData(oldp+402,((vlSelfRef.top__DOT__imm_20b 
                                  << 0x0000000cU)),32);
        bufp->chgIData(oldp+403,(vlSelfRef.top__DOT__mem_addr),32);
        bufp->chgIData(oldp+404,((0x03ffffffU & vlSelfRef.top__DOT__mem_addr)),26);
        bufp->chgBit(oldp+405,((0U != (vlSelfRef.top__DOT__mem_addr 
                                       >> 0x0000001dU))));
        bufp->chgBit(oldp+406,((1U & (~ (0U != (vlSelfRef.top__DOT__mem_addr 
                                                >> 0x0000001dU))))));
        bufp->chgBit(oldp+407,(((~ (0U != (vlSelfRef.top__DOT__mem_addr 
                                           >> 0x0000001dU))) 
                                & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_15))));
        bufp->chgBit(oldp+408,(vlSelfRef.top__DOT__i_MEM__DOT__ren));
        bufp->chgBit(oldp+409,(vlSelfRef.top__DOT__i_MEM__DOT__byte_en3));
        bufp->chgBit(oldp+410,(vlSelfRef.top__DOT__i_MEM__DOT__byte_en2));
        bufp->chgBit(oldp+411,(vlSelfRef.top__DOT__i_MEM__DOT__byte_en1));
        bufp->chgBit(oldp+412,(vlSelfRef.top__DOT__i_MEM__DOT__byte_en0));
        bufp->chgCData(oldp+413,(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3),8);
        bufp->chgIData(oldp+414,(((3U == (3U & vlSelfRef.top__DOT__mem_addr))
                                   ? (vlSelfRef.top__DOT__i_GPR__DOT__GPR
                                      [vlSelfRef.top__DOT__i_GPR__DOT__raddrb] 
                                      << 0x00000018U)
                                   : ((2U == (3U & vlSelfRef.top__DOT__mem_addr))
                                       ? ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3) 
                                          << 0x00000010U)
                                       : ((1U == (3U 
                                                  & vlSelfRef.top__DOT__mem_addr))
                                           ? ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3) 
                                              << 8U)
                                           : (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3))))),32);
        bufp->chgIData(oldp+415,(vlSelfRef.top__DOT__i_MEM__DOT__din),32);
        bufp->chgIData(oldp+416,(((((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_14) 
                                    << 0x00000018U) 
                                   | ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_13) 
                                      << 0x00000010U)) 
                                  | (((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_12) 
                                      << 8U) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_11)))),32);
        bufp->chgCData(oldp+417,(vlSelfRef.top__DOT__mem_dout_byte8),8);
        bufp->chgIData(oldp+418,(vlSelfRef.top__DOT__mem_dout_byte8),32);
        bufp->chgIData(oldp+419,(vlSelfRef.top__DOT__mem_out_val),32);
        bufp->chgIData(oldp+420,(vlSelfRef.top__DOT__rom_PC
                                 [(0x0000ffffU & (vlSelfRef.top__DOT__PC 
                                                  >> 2U))]),32);
        bufp->chgCData(oldp+421,(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0),7);
        bufp->chgBit(oldp+422,((0x33U == (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0))));
        bufp->chgBit(oldp+423,((0x13U == (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0))));
        bufp->chgBit(oldp+424,((0x37U == (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0))));
        bufp->chgBit(oldp+425,(vlSelfRef.top__DOT__op_lw));
        bufp->chgBit(oldp+426,(vlSelfRef.top__DOT__op_lbu));
        bufp->chgBit(oldp+427,(vlSelfRef.top__DOT__op_sw));
        bufp->chgBit(oldp+428,(vlSelfRef.top__DOT__op_sb));
        bufp->chgBit(oldp+429,((0x67U == (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0))));
        bufp->chgCData(oldp+430,(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4),3);
        bufp->chgIData(oldp+431,(vlSelfRef.top__DOT__imm_20b),20);
        bufp->chgSData(oldp+432,(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_8),12);
        bufp->chgCData(oldp+433,((vlSelfRef.top__DOT__rom_PC
                                  [(0x0000ffffU & (vlSelfRef.top__DOT__PC 
                                                   >> 2U))] 
                                  >> 0x00000019U)),7);
        bufp->chgIData(oldp+434,(vlSelfRef.top__DOT__imm_ext_32b_s),32);
        bufp->chgIData(oldp+435,(((0x33U == (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0))
                                   ? vlSelfRef.top__DOT__i_GPR__DOT__GPR
                                  [vlSelfRef.top__DOT__i_GPR__DOT__raddrb]
                                   : vlSelfRef.top__DOT__imm_ext_32b_s)),32);
        bufp->chgIData(oldp+436,((((0x33U == (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0))
                                    ? vlSelfRef.top__DOT__i_GPR__DOT__GPR
                                   [vlSelfRef.top__DOT__i_GPR__DOT__raddrb]
                                    : vlSelfRef.top__DOT__imm_ext_32b_s) 
                                  + vlSelfRef.top__DOT__i_GPR__DOT__GPR
                                  [vlSelfRef.top__DOT__i_GPR__DOT__raddra])),32);
        bufp->chgSData(oldp+437,((0x0000ffffU & VL_MODDIV_III(32, 
                                                              VL_DIV_III(32, 
                                                                         (0x0000ffffU 
                                                                          & (vlSelfRef.top__DOT__PC 
                                                                             >> 2U)), (IData)(0x0000000aU)), (IData)(0x0000000aU)))),16);
        bufp->chgSData(oldp+438,((0x0000ffffU & VL_MODDIV_III(32, 
                                                              (0x0000ffffU 
                                                               & (vlSelfRef.top__DOT__PC 
                                                                  >> 2U)), (IData)(0x0000000aU)))),16);
        bufp->chgIData(oldp+439,(vlSelfRef.top__DOT__i_GPR__DOT__foor_loop_i__BRA__0__KET____DOT__R__DOT__din),32);
        bufp->chgIData(oldp+440,(vlSelfRef.top__DOT__imm_ext_32b_s),32);
        bufp->chgIData(oldp+441,(vlSelfRef.top__DOT__i_GPR__DOT__GPR[31]),32);
        bufp->chgIData(oldp+442,(vlSelfRef.top__DOT__i_GPR__DOT__GPR[30]),32);
        bufp->chgIData(oldp+443,(vlSelfRef.top__DOT__i_GPR__DOT__GPR[29]),32);
        bufp->chgIData(oldp+444,(vlSelfRef.top__DOT__i_GPR__DOT__GPR[28]),32);
        bufp->chgIData(oldp+445,(vlSelfRef.top__DOT__i_GPR__DOT__GPR[27]),32);
        bufp->chgIData(oldp+446,(vlSelfRef.top__DOT__i_GPR__DOT__GPR[26]),32);
        bufp->chgIData(oldp+447,(vlSelfRef.top__DOT__i_GPR__DOT__GPR[25]),32);
        bufp->chgIData(oldp+448,(vlSelfRef.top__DOT__i_GPR__DOT__GPR[24]),32);
        bufp->chgIData(oldp+449,(vlSelfRef.top__DOT__i_GPR__DOT__GPR[23]),32);
        bufp->chgIData(oldp+450,(vlSelfRef.top__DOT__i_GPR__DOT__GPR[22]),32);
        bufp->chgIData(oldp+451,(vlSelfRef.top__DOT__i_GPR__DOT__GPR[21]),32);
        bufp->chgIData(oldp+452,(vlSelfRef.top__DOT__i_GPR__DOT__GPR[20]),32);
        bufp->chgIData(oldp+453,(vlSelfRef.top__DOT__i_GPR__DOT__GPR[19]),32);
        bufp->chgIData(oldp+454,(vlSelfRef.top__DOT__i_GPR__DOT__GPR[18]),32);
        bufp->chgIData(oldp+455,(vlSelfRef.top__DOT__i_GPR__DOT__GPR[17]),32);
        bufp->chgIData(oldp+456,(vlSelfRef.top__DOT__i_GPR__DOT__GPR[16]),32);
        bufp->chgIData(oldp+457,(vlSelfRef.top__DOT__i_GPR__DOT__GPR[15]),32);
        bufp->chgIData(oldp+458,(vlSelfRef.top__DOT__i_GPR__DOT__GPR[14]),32);
        bufp->chgIData(oldp+459,(vlSelfRef.top__DOT__i_GPR__DOT__GPR[13]),32);
        bufp->chgIData(oldp+460,(vlSelfRef.top__DOT__i_GPR__DOT__GPR[12]),32);
        bufp->chgIData(oldp+461,(vlSelfRef.top__DOT__i_GPR__DOT__GPR[11]),32);
        bufp->chgIData(oldp+462,(vlSelfRef.top__DOT__i_GPR__DOT__GPR[10]),32);
        bufp->chgIData(oldp+463,(vlSelfRef.top__DOT__i_GPR__DOT__GPR[9]),32);
        bufp->chgIData(oldp+464,(vlSelfRef.top__DOT__i_GPR__DOT__GPR[8]),32);
        bufp->chgIData(oldp+465,(vlSelfRef.top__DOT__i_GPR__DOT__GPR[7]),32);
        bufp->chgIData(oldp+466,(vlSelfRef.top__DOT__i_GPR__DOT__GPR[6]),32);
        bufp->chgIData(oldp+467,(vlSelfRef.top__DOT__i_GPR__DOT__GPR[5]),32);
        bufp->chgIData(oldp+468,(vlSelfRef.top__DOT__i_GPR__DOT__GPR[4]),32);
        bufp->chgIData(oldp+469,(vlSelfRef.top__DOT__i_GPR__DOT__GPR[3]),32);
        bufp->chgIData(oldp+470,(vlSelfRef.top__DOT__i_GPR__DOT__GPR[2]),32);
        bufp->chgIData(oldp+471,(vlSelfRef.top__DOT__i_GPR__DOT__GPR[1]),32);
        bufp->chgIData(oldp+472,(vlSelfRef.top__DOT__i_GPR__DOT__GPR[0]),32);
        bufp->chgIData(oldp+473,(vlSelfRef.top__DOT__i_GPR__DOT____Vcellout__foor_loop_i__BRA__0__KET____DOT__R____pinNumber4),32);
        bufp->chgBit(oldp+474,(((0U == (IData)(vlSelfRef.top__DOT__i_GPR__DOT__waddr)) 
                                & (IData)(vlSelfRef.top__DOT__i_GPR__DOT__wen))));
        bufp->chgIData(oldp+475,(vlSelfRef.top__DOT__i_GPR__DOT____Vcellout__foor_loop_i__BRA__10__KET____DOT__R____pinNumber4),32);
        bufp->chgBit(oldp+476,(((0x0aU == (IData)(vlSelfRef.top__DOT__i_GPR__DOT__waddr)) 
                                & (IData)(vlSelfRef.top__DOT__i_GPR__DOT__wen))));
        bufp->chgIData(oldp+477,(vlSelfRef.top__DOT__i_GPR__DOT____Vcellout__foor_loop_i__BRA__11__KET____DOT__R____pinNumber4),32);
        bufp->chgBit(oldp+478,(((0x0bU == (IData)(vlSelfRef.top__DOT__i_GPR__DOT__waddr)) 
                                & (IData)(vlSelfRef.top__DOT__i_GPR__DOT__wen))));
        bufp->chgIData(oldp+479,(vlSelfRef.top__DOT__i_GPR__DOT____Vcellout__foor_loop_i__BRA__12__KET____DOT__R____pinNumber4),32);
        bufp->chgBit(oldp+480,(((0x0cU == (IData)(vlSelfRef.top__DOT__i_GPR__DOT__waddr)) 
                                & (IData)(vlSelfRef.top__DOT__i_GPR__DOT__wen))));
        bufp->chgIData(oldp+481,(vlSelfRef.top__DOT__i_GPR__DOT____Vcellout__foor_loop_i__BRA__13__KET____DOT__R____pinNumber4),32);
        bufp->chgBit(oldp+482,(((0x0dU == (IData)(vlSelfRef.top__DOT__i_GPR__DOT__waddr)) 
                                & (IData)(vlSelfRef.top__DOT__i_GPR__DOT__wen))));
        bufp->chgIData(oldp+483,(vlSelfRef.top__DOT__i_GPR__DOT____Vcellout__foor_loop_i__BRA__14__KET____DOT__R____pinNumber4),32);
        bufp->chgBit(oldp+484,(((0x0eU == (IData)(vlSelfRef.top__DOT__i_GPR__DOT__waddr)) 
                                & (IData)(vlSelfRef.top__DOT__i_GPR__DOT__wen))));
        bufp->chgIData(oldp+485,(vlSelfRef.top__DOT__i_GPR__DOT____Vcellout__foor_loop_i__BRA__15__KET____DOT__R____pinNumber4),32);
        bufp->chgBit(oldp+486,(((0x0fU == (IData)(vlSelfRef.top__DOT__i_GPR__DOT__waddr)) 
                                & (IData)(vlSelfRef.top__DOT__i_GPR__DOT__wen))));
        bufp->chgIData(oldp+487,(vlSelfRef.top__DOT__i_GPR__DOT____Vcellout__foor_loop_i__BRA__16__KET____DOT__R____pinNumber4),32);
        bufp->chgBit(oldp+488,(((0x10U == (IData)(vlSelfRef.top__DOT__i_GPR__DOT__waddr)) 
                                & (IData)(vlSelfRef.top__DOT__i_GPR__DOT__wen))));
        bufp->chgIData(oldp+489,(vlSelfRef.top__DOT__i_GPR__DOT____Vcellout__foor_loop_i__BRA__17__KET____DOT__R____pinNumber4),32);
        bufp->chgBit(oldp+490,(((0x11U == (IData)(vlSelfRef.top__DOT__i_GPR__DOT__waddr)) 
                                & (IData)(vlSelfRef.top__DOT__i_GPR__DOT__wen))));
        bufp->chgIData(oldp+491,(vlSelfRef.top__DOT__i_GPR__DOT____Vcellout__foor_loop_i__BRA__18__KET____DOT__R____pinNumber4),32);
        bufp->chgBit(oldp+492,(((0x12U == (IData)(vlSelfRef.top__DOT__i_GPR__DOT__waddr)) 
                                & (IData)(vlSelfRef.top__DOT__i_GPR__DOT__wen))));
        bufp->chgIData(oldp+493,(vlSelfRef.top__DOT__i_GPR__DOT____Vcellout__foor_loop_i__BRA__19__KET____DOT__R____pinNumber4),32);
        bufp->chgBit(oldp+494,(((0x13U == (IData)(vlSelfRef.top__DOT__i_GPR__DOT__waddr)) 
                                & (IData)(vlSelfRef.top__DOT__i_GPR__DOT__wen))));
        bufp->chgIData(oldp+495,(vlSelfRef.top__DOT__i_GPR__DOT____Vcellout__foor_loop_i__BRA__1__KET____DOT__R____pinNumber4),32);
        bufp->chgBit(oldp+496,(((1U == (IData)(vlSelfRef.top__DOT__i_GPR__DOT__waddr)) 
                                & (IData)(vlSelfRef.top__DOT__i_GPR__DOT__wen))));
        bufp->chgIData(oldp+497,(vlSelfRef.top__DOT__i_GPR__DOT____Vcellout__foor_loop_i__BRA__20__KET____DOT__R____pinNumber4),32);
        bufp->chgBit(oldp+498,(((0x14U == (IData)(vlSelfRef.top__DOT__i_GPR__DOT__waddr)) 
                                & (IData)(vlSelfRef.top__DOT__i_GPR__DOT__wen))));
        bufp->chgIData(oldp+499,(vlSelfRef.top__DOT__i_GPR__DOT____Vcellout__foor_loop_i__BRA__21__KET____DOT__R____pinNumber4),32);
        bufp->chgBit(oldp+500,(((0x15U == (IData)(vlSelfRef.top__DOT__i_GPR__DOT__waddr)) 
                                & (IData)(vlSelfRef.top__DOT__i_GPR__DOT__wen))));
        bufp->chgIData(oldp+501,(vlSelfRef.top__DOT__i_GPR__DOT____Vcellout__foor_loop_i__BRA__22__KET____DOT__R____pinNumber4),32);
        bufp->chgBit(oldp+502,(((0x16U == (IData)(vlSelfRef.top__DOT__i_GPR__DOT__waddr)) 
                                & (IData)(vlSelfRef.top__DOT__i_GPR__DOT__wen))));
        bufp->chgIData(oldp+503,(vlSelfRef.top__DOT__i_GPR__DOT____Vcellout__foor_loop_i__BRA__23__KET____DOT__R____pinNumber4),32);
        bufp->chgBit(oldp+504,(((0x17U == (IData)(vlSelfRef.top__DOT__i_GPR__DOT__waddr)) 
                                & (IData)(vlSelfRef.top__DOT__i_GPR__DOT__wen))));
        bufp->chgIData(oldp+505,(vlSelfRef.top__DOT__i_GPR__DOT____Vcellout__foor_loop_i__BRA__24__KET____DOT__R____pinNumber4),32);
        bufp->chgBit(oldp+506,(((0x18U == (IData)(vlSelfRef.top__DOT__i_GPR__DOT__waddr)) 
                                & (IData)(vlSelfRef.top__DOT__i_GPR__DOT__wen))));
        bufp->chgIData(oldp+507,(vlSelfRef.top__DOT__i_GPR__DOT____Vcellout__foor_loop_i__BRA__25__KET____DOT__R____pinNumber4),32);
        bufp->chgBit(oldp+508,(((0x19U == (IData)(vlSelfRef.top__DOT__i_GPR__DOT__waddr)) 
                                & (IData)(vlSelfRef.top__DOT__i_GPR__DOT__wen))));
        bufp->chgIData(oldp+509,(vlSelfRef.top__DOT__i_GPR__DOT____Vcellout__foor_loop_i__BRA__26__KET____DOT__R____pinNumber4),32);
        bufp->chgBit(oldp+510,(((0x1aU == (IData)(vlSelfRef.top__DOT__i_GPR__DOT__waddr)) 
                                & (IData)(vlSelfRef.top__DOT__i_GPR__DOT__wen))));
        bufp->chgIData(oldp+511,(vlSelfRef.top__DOT__i_GPR__DOT____Vcellout__foor_loop_i__BRA__27__KET____DOT__R____pinNumber4),32);
        bufp->chgBit(oldp+512,(((0x1bU == (IData)(vlSelfRef.top__DOT__i_GPR__DOT__waddr)) 
                                & (IData)(vlSelfRef.top__DOT__i_GPR__DOT__wen))));
        bufp->chgIData(oldp+513,(vlSelfRef.top__DOT__i_GPR__DOT____Vcellout__foor_loop_i__BRA__28__KET____DOT__R____pinNumber4),32);
        bufp->chgBit(oldp+514,(((0x1cU == (IData)(vlSelfRef.top__DOT__i_GPR__DOT__waddr)) 
                                & (IData)(vlSelfRef.top__DOT__i_GPR__DOT__wen))));
        bufp->chgIData(oldp+515,(vlSelfRef.top__DOT__i_GPR__DOT____Vcellout__foor_loop_i__BRA__29__KET____DOT__R____pinNumber4),32);
        bufp->chgBit(oldp+516,(((0x1dU == (IData)(vlSelfRef.top__DOT__i_GPR__DOT__waddr)) 
                                & (IData)(vlSelfRef.top__DOT__i_GPR__DOT__wen))));
        bufp->chgIData(oldp+517,(vlSelfRef.top__DOT__i_GPR__DOT____Vcellout__foor_loop_i__BRA__2__KET____DOT__R____pinNumber4),32);
        bufp->chgBit(oldp+518,(((2U == (IData)(vlSelfRef.top__DOT__i_GPR__DOT__waddr)) 
                                & (IData)(vlSelfRef.top__DOT__i_GPR__DOT__wen))));
        bufp->chgIData(oldp+519,(vlSelfRef.top__DOT__i_GPR__DOT____Vcellout__foor_loop_i__BRA__30__KET____DOT__R____pinNumber4),32);
        bufp->chgBit(oldp+520,(((0x1eU == (IData)(vlSelfRef.top__DOT__i_GPR__DOT__waddr)) 
                                & (IData)(vlSelfRef.top__DOT__i_GPR__DOT__wen))));
        bufp->chgIData(oldp+521,(vlSelfRef.top__DOT__i_GPR__DOT____Vcellout__foor_loop_i__BRA__31__KET____DOT__R____pinNumber4),32);
        bufp->chgBit(oldp+522,(((0x1fU == (IData)(vlSelfRef.top__DOT__i_GPR__DOT__waddr)) 
                                & (IData)(vlSelfRef.top__DOT__i_GPR__DOT__wen))));
        bufp->chgIData(oldp+523,(vlSelfRef.top__DOT__i_GPR__DOT____Vcellout__foor_loop_i__BRA__3__KET____DOT__R____pinNumber4),32);
        bufp->chgBit(oldp+524,(((3U == (IData)(vlSelfRef.top__DOT__i_GPR__DOT__waddr)) 
                                & (IData)(vlSelfRef.top__DOT__i_GPR__DOT__wen))));
        bufp->chgIData(oldp+525,(vlSelfRef.top__DOT__i_GPR__DOT____Vcellout__foor_loop_i__BRA__4__KET____DOT__R____pinNumber4),32);
        bufp->chgBit(oldp+526,(((4U == (IData)(vlSelfRef.top__DOT__i_GPR__DOT__waddr)) 
                                & (IData)(vlSelfRef.top__DOT__i_GPR__DOT__wen))));
        bufp->chgIData(oldp+527,(vlSelfRef.top__DOT__i_GPR__DOT____Vcellout__foor_loop_i__BRA__5__KET____DOT__R____pinNumber4),32);
        bufp->chgBit(oldp+528,(((5U == (IData)(vlSelfRef.top__DOT__i_GPR__DOT__waddr)) 
                                & (IData)(vlSelfRef.top__DOT__i_GPR__DOT__wen))));
        bufp->chgIData(oldp+529,(vlSelfRef.top__DOT__i_GPR__DOT____Vcellout__foor_loop_i__BRA__6__KET____DOT__R____pinNumber4),32);
        bufp->chgBit(oldp+530,(((6U == (IData)(vlSelfRef.top__DOT__i_GPR__DOT__waddr)) 
                                & (IData)(vlSelfRef.top__DOT__i_GPR__DOT__wen))));
        bufp->chgIData(oldp+531,(vlSelfRef.top__DOT__i_GPR__DOT____Vcellout__foor_loop_i__BRA__7__KET____DOT__R____pinNumber4),32);
        bufp->chgBit(oldp+532,(((7U == (IData)(vlSelfRef.top__DOT__i_GPR__DOT__waddr)) 
                                & (IData)(vlSelfRef.top__DOT__i_GPR__DOT__wen))));
        bufp->chgIData(oldp+533,(vlSelfRef.top__DOT__i_GPR__DOT____Vcellout__foor_loop_i__BRA__8__KET____DOT__R____pinNumber4),32);
        bufp->chgBit(oldp+534,(((8U == (IData)(vlSelfRef.top__DOT__i_GPR__DOT__waddr)) 
                                & (IData)(vlSelfRef.top__DOT__i_GPR__DOT__wen))));
        bufp->chgIData(oldp+535,(vlSelfRef.top__DOT__i_GPR__DOT____Vcellout__foor_loop_i__BRA__9__KET____DOT__R____pinNumber4),32);
        bufp->chgBit(oldp+536,(((9U == (IData)(vlSelfRef.top__DOT__i_GPR__DOT__waddr)) 
                                & (IData)(vlSelfRef.top__DOT__i_GPR__DOT__wen))));
        bufp->chgIData(oldp+537,((0x00ffffffU & (vlSelfRef.top__DOT__mem_addr 
                                                 >> 2U))),24);
        bufp->chgCData(oldp+538,((0x0000000fU & VL_MODDIV_III(32, 
                                                              (0x0000ffffU 
                                                               & (vlSelfRef.top__DOT__PC 
                                                                  >> 2U)), (IData)(0x0000000aU)))),4);
        bufp->chgBit(oldp+539,((1U & (VL_MODDIV_III(32, 
                                                    (0x0000ffffU 
                                                     & (vlSelfRef.top__DOT__PC 
                                                        >> 2U)), (IData)(0x0000000aU)) 
                                      >> 3U))));
        bufp->chgBit(oldp+540,((1U & (VL_MODDIV_III(32, 
                                                    (0x0000ffffU 
                                                     & (vlSelfRef.top__DOT__PC 
                                                        >> 2U)), (IData)(0x0000000aU)) 
                                      >> 2U))));
        bufp->chgBit(oldp+541,((1U & (VL_MODDIV_III(32, 
                                                    (0x0000ffffU 
                                                     & (vlSelfRef.top__DOT__PC 
                                                        >> 2U)), (IData)(0x0000000aU)) 
                                      >> 1U))));
        bufp->chgBit(oldp+542,((1U & VL_MODDIV_III(32, 
                                                   (0x0000ffffU 
                                                    & (vlSelfRef.top__DOT__PC 
                                                       >> 2U)), (IData)(0x0000000aU)))));
        bufp->chgCData(oldp+543,(((- (IData)((IData)(vlSelfRef.top__DOT__ins_seg6__DOT__i0__DOT__i0__DOT__hit))) 
                                  & (IData)(vlSelfRef.top__DOT__ins_seg6__DOT__i0__DOT__i0__DOT__lut_out))),8);
        bufp->chgCData(oldp+544,(vlSelfRef.top__DOT__ins_seg6__DOT__i0__DOT__i0__DOT__lut_out),8);
        bufp->chgBit(oldp+545,(vlSelfRef.top__DOT__ins_seg6__DOT__i0__DOT__i0__DOT__hit));
        bufp->chgCData(oldp+546,((0x0000000fU & VL_MODDIV_III(32, 
                                                              VL_DIV_III(32, 
                                                                         (0x0000ffffU 
                                                                          & (vlSelfRef.top__DOT__PC 
                                                                             >> 2U)), (IData)(0x0000000aU)), (IData)(0x0000000aU)))),4);
        bufp->chgBit(oldp+547,((1U & (VL_MODDIV_III(32, 
                                                    VL_DIV_III(32, 
                                                               (0x0000ffffU 
                                                                & (vlSelfRef.top__DOT__PC 
                                                                   >> 2U)), (IData)(0x0000000aU)), (IData)(0x0000000aU)) 
                                      >> 3U))));
        bufp->chgBit(oldp+548,((1U & (VL_MODDIV_III(32, 
                                                    VL_DIV_III(32, 
                                                               (0x0000ffffU 
                                                                & (vlSelfRef.top__DOT__PC 
                                                                   >> 2U)), (IData)(0x0000000aU)), (IData)(0x0000000aU)) 
                                      >> 2U))));
        bufp->chgBit(oldp+549,((1U & (VL_MODDIV_III(32, 
                                                    VL_DIV_III(32, 
                                                               (0x0000ffffU 
                                                                & (vlSelfRef.top__DOT__PC 
                                                                   >> 2U)), (IData)(0x0000000aU)), (IData)(0x0000000aU)) 
                                      >> 1U))));
        bufp->chgBit(oldp+550,((1U & VL_MODDIV_III(32, 
                                                   VL_DIV_III(32, 
                                                              (0x0000ffffU 
                                                               & (vlSelfRef.top__DOT__PC 
                                                                  >> 2U)), (IData)(0x0000000aU)), (IData)(0x0000000aU)))));
        bufp->chgCData(oldp+551,(((- (IData)((IData)(vlSelfRef.top__DOT__ins_seg7__DOT__i0__DOT__i0__DOT__hit))) 
                                  & (IData)(vlSelfRef.top__DOT__ins_seg7__DOT__i0__DOT__i0__DOT__lut_out))),8);
        bufp->chgCData(oldp+552,(vlSelfRef.top__DOT__ins_seg7__DOT__i0__DOT__i0__DOT__lut_out),8);
        bufp->chgBit(oldp+553,(vlSelfRef.top__DOT__ins_seg7__DOT__i0__DOT__i0__DOT__hit));
        bufp->chgCData(oldp+554,(vlSelfRef.top__DOT____Vcellout__r_btn0____pinNumber4),5);
        bufp->chgCData(oldp+555,(vlSelfRef.top__DOT____Vcellout__r_btn1____pinNumber4),5);
        bufp->chgCData(oldp+556,(vlSelfRef.top__DOT____Vcellout__r_btn2____pinNumber4),5);
        bufp->chgCData(oldp+557,(vlSelfRef.top__DOT____Vcellout__r_btn3____pinNumber4),5);
        bufp->chgCData(oldp+558,(vlSelfRef.top__DOT____Vcellout__r_btn4____pinNumber4),5);
    }
    bufp->chgBit(oldp+559,(vlSelfRef.clk));
    bufp->chgBit(oldp+560,(vlSelfRef.rst));
    bufp->chgCData(oldp+561,(vlSelfRef.btn),5);
    bufp->chgSData(oldp+562,(vlSelfRef.sw),16);
    bufp->chgBit(oldp+563,(vlSelfRef.ps2_clk));
    bufp->chgBit(oldp+564,(vlSelfRef.ps2_data));
    bufp->chgBit(oldp+565,(vlSelfRef.uart_rx));
    bufp->chgBit(oldp+566,(vlSelfRef.uart_tx));
    bufp->chgSData(oldp+567,(vlSelfRef.ledr),16);
    bufp->chgBit(oldp+568,(vlSelfRef.VGA_CLK));
    bufp->chgBit(oldp+569,(vlSelfRef.VGA_HSYNC));
    bufp->chgBit(oldp+570,(vlSelfRef.VGA_VSYNC));
    bufp->chgBit(oldp+571,(vlSelfRef.VGA_BLANK_N));
    bufp->chgCData(oldp+572,(vlSelfRef.VGA_R),8);
    bufp->chgCData(oldp+573,(vlSelfRef.VGA_G),8);
    bufp->chgCData(oldp+574,(vlSelfRef.VGA_B),8);
    bufp->chgCData(oldp+575,(vlSelfRef.seg6),8);
    bufp->chgCData(oldp+576,(vlSelfRef.seg7),8);
    bufp->chgBit(oldp+577,(vlSelfRef.top__DOT__R_PC__DOT__rst));
    bufp->chgCData(oldp+578,(((~ (IData)(vlSelfRef.btn)) 
                              & (IData)(vlSelfRef.top__DOT____Vcellout__r_btn0____pinNumber4))),5);
    bufp->chgCData(oldp+579,(((~ (IData)(vlSelfRef.btn)) 
                              & (IData)(vlSelfRef.top__DOT____Vcellout__r_btn1____pinNumber4))),5);
    bufp->chgIData(oldp+580,(vlSelfRef.top__DOT__cnt_clk),24);
}

void Vtop___024root__trace_chg_dtype____0(Vtop___024root* vlSelf, VerilatedFst::Buffer* bufp, uint32_t offset, const VlUnpacked<SData/*11:0*/, 16>& __VdtypeVar) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_chg_dtype____0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode +  offset);
    bufp->chgSData(oldp+0,(__VdtypeVar[15]),12);
    bufp->chgSData(oldp+1,(__VdtypeVar[14]),12);
    bufp->chgSData(oldp+2,(__VdtypeVar[13]),12);
    bufp->chgSData(oldp+3,(__VdtypeVar[12]),12);
    bufp->chgSData(oldp+4,(__VdtypeVar[11]),12);
    bufp->chgSData(oldp+5,(__VdtypeVar[10]),12);
    bufp->chgSData(oldp+6,(__VdtypeVar[9]),12);
    bufp->chgSData(oldp+7,(__VdtypeVar[8]),12);
    bufp->chgSData(oldp+8,(__VdtypeVar[7]),12);
    bufp->chgSData(oldp+9,(__VdtypeVar[6]),12);
    bufp->chgSData(oldp+10,(__VdtypeVar[5]),12);
    bufp->chgSData(oldp+11,(__VdtypeVar[4]),12);
    bufp->chgSData(oldp+12,(__VdtypeVar[3]),12);
    bufp->chgSData(oldp+13,(__VdtypeVar[2]),12);
    bufp->chgSData(oldp+14,(__VdtypeVar[1]),12);
    bufp->chgSData(oldp+15,(__VdtypeVar[0]),12);
}

void Vtop___024root__trace_chg_dtype____1(Vtop___024root* vlSelf, VerilatedFst::Buffer* bufp, uint32_t offset, const VlUnpacked<CData/*3:0*/, 16>& __VdtypeVar) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_chg_dtype____1\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode +  offset);
    bufp->chgCData(oldp+0,(__VdtypeVar[15]),4);
    bufp->chgCData(oldp+1,(__VdtypeVar[14]),4);
    bufp->chgCData(oldp+2,(__VdtypeVar[13]),4);
    bufp->chgCData(oldp+3,(__VdtypeVar[12]),4);
    bufp->chgCData(oldp+4,(__VdtypeVar[11]),4);
    bufp->chgCData(oldp+5,(__VdtypeVar[10]),4);
    bufp->chgCData(oldp+6,(__VdtypeVar[9]),4);
    bufp->chgCData(oldp+7,(__VdtypeVar[8]),4);
    bufp->chgCData(oldp+8,(__VdtypeVar[7]),4);
    bufp->chgCData(oldp+9,(__VdtypeVar[6]),4);
    bufp->chgCData(oldp+10,(__VdtypeVar[5]),4);
    bufp->chgCData(oldp+11,(__VdtypeVar[4]),4);
    bufp->chgCData(oldp+12,(__VdtypeVar[3]),4);
    bufp->chgCData(oldp+13,(__VdtypeVar[2]),4);
    bufp->chgCData(oldp+14,(__VdtypeVar[1]),4);
    bufp->chgCData(oldp+15,(__VdtypeVar[0]),4);
}

void Vtop___024root__trace_chg_dtype____2(Vtop___024root* vlSelf, VerilatedFst::Buffer* bufp, uint32_t offset, const VlUnpacked<CData/*7:0*/, 16>& __VdtypeVar) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_chg_dtype____2\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode +  offset);
    bufp->chgCData(oldp+0,(__VdtypeVar[15]),8);
    bufp->chgCData(oldp+1,(__VdtypeVar[14]),8);
    bufp->chgCData(oldp+2,(__VdtypeVar[13]),8);
    bufp->chgCData(oldp+3,(__VdtypeVar[12]),8);
    bufp->chgCData(oldp+4,(__VdtypeVar[11]),8);
    bufp->chgCData(oldp+5,(__VdtypeVar[10]),8);
    bufp->chgCData(oldp+6,(__VdtypeVar[9]),8);
    bufp->chgCData(oldp+7,(__VdtypeVar[8]),8);
    bufp->chgCData(oldp+8,(__VdtypeVar[7]),8);
    bufp->chgCData(oldp+9,(__VdtypeVar[6]),8);
    bufp->chgCData(oldp+10,(__VdtypeVar[5]),8);
    bufp->chgCData(oldp+11,(__VdtypeVar[4]),8);
    bufp->chgCData(oldp+12,(__VdtypeVar[3]),8);
    bufp->chgCData(oldp+13,(__VdtypeVar[2]),8);
    bufp->chgCData(oldp+14,(__VdtypeVar[1]),8);
    bufp->chgCData(oldp+15,(__VdtypeVar[0]),8);
}

void Vtop___024root__trace_cleanup(void* voidSelf, VerilatedFst* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_cleanup\n"); );
    // Body
    Vtop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
}
