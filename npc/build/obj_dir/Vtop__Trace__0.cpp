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
        bufp->chgBit(oldp+384,(vlSelfRef.top__DOT__i_GPR__DOT__wen));
        bufp->chgBit(oldp+385,(vlSelfRef.top__DOT__op_lw));
        bufp->chgBit(oldp+386,(vlSelfRef.top__DOT__op_lbu));
        bufp->chgBit(oldp+387,(vlSelfRef.top__DOT__op_sw));
        bufp->chgBit(oldp+388,(vlSelfRef.top__DOT__op_sb));
        bufp->chgIData(oldp+389,(vlSelfRef.top__DOT__imm_ext_32b_s),32);
        bufp->chgIData(oldp+390,(vlSelfRef.top__DOT__imm_ext_32b_s),32);
    }
    if (VL_UNLIKELY(((vlSelfRef.__Vm_traceActivity[1U] 
                      | vlSelfRef.__Vm_traceActivity[2U])))) {
        bufp->chgIData(oldp+391,(vlSelfRef.top__DOT__R_PC__DOT__din),18);
        bufp->chgIData(oldp+392,((0x0003fffeU & vlSelfRef.top__DOT__mem_addr)),18);
        bufp->chgIData(oldp+393,((((- (IData)((1U & 
                                               (vlSelfRef.top__DOT__mem_addr 
                                                >> 0x00000011U)))) 
                                   << 0x00000012U) 
                                  | (0x0003fffeU & vlSelfRef.top__DOT__mem_addr))),32);
        bufp->chgIData(oldp+394,(vlSelfRef.top__DOT__i_GPR__DOT__foor_loop_i__BRA__0__KET____DOT__R__DOT__din),32);
        bufp->chgIData(oldp+395,(vlSelfRef.top__DOT__mem_addr),32);
        bufp->chgIData(oldp+396,((0x03ffffffU & vlSelfRef.top__DOT__mem_addr)),26);
        bufp->chgBit(oldp+397,((0U != (vlSelfRef.top__DOT__mem_addr 
                                       >> 0x0000001dU))));
        bufp->chgBit(oldp+398,((1U & (~ (0U != (vlSelfRef.top__DOT__mem_addr 
                                                >> 0x0000001dU))))));
        bufp->chgBit(oldp+399,(vlSelfRef.top__DOT__mem_wen));
        bufp->chgBit(oldp+400,(((~ (0U != (vlSelfRef.top__DOT__mem_addr 
                                           >> 0x0000001dU))) 
                                & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5))));
        bufp->chgBit(oldp+401,((((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3) 
                                 & (3U == (3U & vlSelfRef.top__DOT__mem_addr))) 
                                | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4))));
        bufp->chgBit(oldp+402,((((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3) 
                                 & (2U == (3U & vlSelfRef.top__DOT__mem_addr))) 
                                | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4))));
        bufp->chgBit(oldp+403,((((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3) 
                                 & (1U == (3U & vlSelfRef.top__DOT__mem_addr))) 
                                | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4))));
        bufp->chgBit(oldp+404,((((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3) 
                                 & (0U == (3U & vlSelfRef.top__DOT__mem_addr))) 
                                | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4))));
        bufp->chgCData(oldp+405,(((((((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3) 
                                      & (3U == (3U 
                                                & vlSelfRef.top__DOT__mem_addr))) 
                                     | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4)) 
                                    << 3U) | ((((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3) 
                                                & (2U 
                                                   == 
                                                   (3U 
                                                    & vlSelfRef.top__DOT__mem_addr))) 
                                               | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4)) 
                                              << 2U)) 
                                  | (((((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3) 
                                        & (1U == (3U 
                                                  & vlSelfRef.top__DOT__mem_addr))) 
                                       | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4)) 
                                      << 1U) | (((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3) 
                                                 & (0U 
                                                    == 
                                                    (3U 
                                                     & vlSelfRef.top__DOT__mem_addr))) 
                                                | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4))))),8);
        bufp->chgCData(oldp+406,(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2),8);
        bufp->chgIData(oldp+407,(vlSelfRef.top__DOT__mem_din),32);
        bufp->chgIData(oldp+408,(vlSelfRef.top__DOT__mem_dout),32);
        bufp->chgCData(oldp+409,(vlSelfRef.top__DOT__mem_dout_byte8),8);
        bufp->chgIData(oldp+410,(vlSelfRef.top__DOT__mem_dout_byte8),32);
        bufp->chgIData(oldp+411,(vlSelfRef.top__DOT__mem_out_val),32);
        bufp->chgIData(oldp+412,(vlSelfRef.top__DOT__i_GPR__DOT__foor_loop_i__BRA__0__KET____DOT__R__DOT__din),32);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[2U]))) {
        bufp->chgCData(oldp+413,(vlSelfRef.top__DOT__btn_p[4]),5);
        bufp->chgCData(oldp+414,(vlSelfRef.top__DOT__btn_p[3]),5);
        bufp->chgCData(oldp+415,(vlSelfRef.top__DOT__btn_p[2]),5);
        bufp->chgCData(oldp+416,(vlSelfRef.top__DOT__btn_p[1]),5);
        bufp->chgCData(oldp+417,(vlSelfRef.top__DOT__btn_p[0]),5);
        bufp->chgIData(oldp+418,(vlSelfRef.top__DOT__PC),18);
        bufp->chgIData(oldp+419,((0x0003ffffU & ((IData)(4U) 
                                                 + vlSelfRef.top__DOT__PC))),18);
        bufp->chgIData(oldp+420,(vlSelfRef.top__DOT__i_GPR__DOT__GPR[31]),32);
        bufp->chgIData(oldp+421,(vlSelfRef.top__DOT__i_GPR__DOT__GPR[30]),32);
        bufp->chgIData(oldp+422,(vlSelfRef.top__DOT__i_GPR__DOT__GPR[29]),32);
        bufp->chgIData(oldp+423,(vlSelfRef.top__DOT__i_GPR__DOT__GPR[28]),32);
        bufp->chgIData(oldp+424,(vlSelfRef.top__DOT__i_GPR__DOT__GPR[27]),32);
        bufp->chgIData(oldp+425,(vlSelfRef.top__DOT__i_GPR__DOT__GPR[26]),32);
        bufp->chgIData(oldp+426,(vlSelfRef.top__DOT__i_GPR__DOT__GPR[25]),32);
        bufp->chgIData(oldp+427,(vlSelfRef.top__DOT__i_GPR__DOT__GPR[24]),32);
        bufp->chgIData(oldp+428,(vlSelfRef.top__DOT__i_GPR__DOT__GPR[23]),32);
        bufp->chgIData(oldp+429,(vlSelfRef.top__DOT__i_GPR__DOT__GPR[22]),32);
        bufp->chgIData(oldp+430,(vlSelfRef.top__DOT__i_GPR__DOT__GPR[21]),32);
        bufp->chgIData(oldp+431,(vlSelfRef.top__DOT__i_GPR__DOT__GPR[20]),32);
        bufp->chgIData(oldp+432,(vlSelfRef.top__DOT__i_GPR__DOT__GPR[19]),32);
        bufp->chgIData(oldp+433,(vlSelfRef.top__DOT__i_GPR__DOT__GPR[18]),32);
        bufp->chgIData(oldp+434,(vlSelfRef.top__DOT__i_GPR__DOT__GPR[17]),32);
        bufp->chgIData(oldp+435,(vlSelfRef.top__DOT__i_GPR__DOT__GPR[16]),32);
        bufp->chgIData(oldp+436,(vlSelfRef.top__DOT__i_GPR__DOT__GPR[15]),32);
        bufp->chgIData(oldp+437,(vlSelfRef.top__DOT__i_GPR__DOT__GPR[14]),32);
        bufp->chgIData(oldp+438,(vlSelfRef.top__DOT__i_GPR__DOT__GPR[13]),32);
        bufp->chgIData(oldp+439,(vlSelfRef.top__DOT__i_GPR__DOT__GPR[12]),32);
        bufp->chgIData(oldp+440,(vlSelfRef.top__DOT__i_GPR__DOT__GPR[11]),32);
        bufp->chgIData(oldp+441,(vlSelfRef.top__DOT__i_GPR__DOT__GPR[10]),32);
        bufp->chgIData(oldp+442,(vlSelfRef.top__DOT__i_GPR__DOT__GPR[9]),32);
        bufp->chgIData(oldp+443,(vlSelfRef.top__DOT__i_GPR__DOT__GPR[8]),32);
        bufp->chgIData(oldp+444,(vlSelfRef.top__DOT__i_GPR__DOT__GPR[7]),32);
        bufp->chgIData(oldp+445,(vlSelfRef.top__DOT__i_GPR__DOT__GPR[6]),32);
        bufp->chgIData(oldp+446,(vlSelfRef.top__DOT__i_GPR__DOT__GPR[5]),32);
        bufp->chgIData(oldp+447,(vlSelfRef.top__DOT__i_GPR__DOT__GPR[4]),32);
        bufp->chgIData(oldp+448,(vlSelfRef.top__DOT__i_GPR__DOT__GPR[3]),32);
        bufp->chgIData(oldp+449,(vlSelfRef.top__DOT__i_GPR__DOT__GPR[2]),32);
        bufp->chgIData(oldp+450,(vlSelfRef.top__DOT__i_GPR__DOT__GPR[1]),32);
        bufp->chgIData(oldp+451,(vlSelfRef.top__DOT__i_GPR__DOT__GPR[0]),32);
        bufp->chgIData(oldp+452,(vlSelfRef.top__DOT__i_GPR__DOT____Vcellout__foor_loop_i__BRA__0__KET____DOT__R____pinNumber4),32);
        bufp->chgIData(oldp+453,(vlSelfRef.top__DOT__i_GPR__DOT____Vcellout__foor_loop_i__BRA__10__KET____DOT__R____pinNumber4),32);
        bufp->chgIData(oldp+454,(vlSelfRef.top__DOT__i_GPR__DOT____Vcellout__foor_loop_i__BRA__11__KET____DOT__R____pinNumber4),32);
        bufp->chgIData(oldp+455,(vlSelfRef.top__DOT__i_GPR__DOT____Vcellout__foor_loop_i__BRA__12__KET____DOT__R____pinNumber4),32);
        bufp->chgIData(oldp+456,(vlSelfRef.top__DOT__i_GPR__DOT____Vcellout__foor_loop_i__BRA__13__KET____DOT__R____pinNumber4),32);
        bufp->chgIData(oldp+457,(vlSelfRef.top__DOT__i_GPR__DOT____Vcellout__foor_loop_i__BRA__14__KET____DOT__R____pinNumber4),32);
        bufp->chgIData(oldp+458,(vlSelfRef.top__DOT__i_GPR__DOT____Vcellout__foor_loop_i__BRA__15__KET____DOT__R____pinNumber4),32);
        bufp->chgIData(oldp+459,(vlSelfRef.top__DOT__i_GPR__DOT____Vcellout__foor_loop_i__BRA__16__KET____DOT__R____pinNumber4),32);
        bufp->chgIData(oldp+460,(vlSelfRef.top__DOT__i_GPR__DOT____Vcellout__foor_loop_i__BRA__17__KET____DOT__R____pinNumber4),32);
        bufp->chgIData(oldp+461,(vlSelfRef.top__DOT__i_GPR__DOT____Vcellout__foor_loop_i__BRA__18__KET____DOT__R____pinNumber4),32);
        bufp->chgIData(oldp+462,(vlSelfRef.top__DOT__i_GPR__DOT____Vcellout__foor_loop_i__BRA__19__KET____DOT__R____pinNumber4),32);
        bufp->chgIData(oldp+463,(vlSelfRef.top__DOT__i_GPR__DOT____Vcellout__foor_loop_i__BRA__1__KET____DOT__R____pinNumber4),32);
        bufp->chgIData(oldp+464,(vlSelfRef.top__DOT__i_GPR__DOT____Vcellout__foor_loop_i__BRA__20__KET____DOT__R____pinNumber4),32);
        bufp->chgIData(oldp+465,(vlSelfRef.top__DOT__i_GPR__DOT____Vcellout__foor_loop_i__BRA__21__KET____DOT__R____pinNumber4),32);
        bufp->chgIData(oldp+466,(vlSelfRef.top__DOT__i_GPR__DOT____Vcellout__foor_loop_i__BRA__22__KET____DOT__R____pinNumber4),32);
        bufp->chgIData(oldp+467,(vlSelfRef.top__DOT__i_GPR__DOT____Vcellout__foor_loop_i__BRA__23__KET____DOT__R____pinNumber4),32);
        bufp->chgIData(oldp+468,(vlSelfRef.top__DOT__i_GPR__DOT____Vcellout__foor_loop_i__BRA__24__KET____DOT__R____pinNumber4),32);
        bufp->chgIData(oldp+469,(vlSelfRef.top__DOT__i_GPR__DOT____Vcellout__foor_loop_i__BRA__25__KET____DOT__R____pinNumber4),32);
        bufp->chgIData(oldp+470,(vlSelfRef.top__DOT__i_GPR__DOT____Vcellout__foor_loop_i__BRA__26__KET____DOT__R____pinNumber4),32);
        bufp->chgIData(oldp+471,(vlSelfRef.top__DOT__i_GPR__DOT____Vcellout__foor_loop_i__BRA__27__KET____DOT__R____pinNumber4),32);
        bufp->chgIData(oldp+472,(vlSelfRef.top__DOT__i_GPR__DOT____Vcellout__foor_loop_i__BRA__28__KET____DOT__R____pinNumber4),32);
        bufp->chgIData(oldp+473,(vlSelfRef.top__DOT__i_GPR__DOT____Vcellout__foor_loop_i__BRA__29__KET____DOT__R____pinNumber4),32);
        bufp->chgIData(oldp+474,(vlSelfRef.top__DOT__i_GPR__DOT____Vcellout__foor_loop_i__BRA__2__KET____DOT__R____pinNumber4),32);
        bufp->chgIData(oldp+475,(vlSelfRef.top__DOT__i_GPR__DOT____Vcellout__foor_loop_i__BRA__30__KET____DOT__R____pinNumber4),32);
        bufp->chgIData(oldp+476,(vlSelfRef.top__DOT__i_GPR__DOT____Vcellout__foor_loop_i__BRA__31__KET____DOT__R____pinNumber4),32);
        bufp->chgIData(oldp+477,(vlSelfRef.top__DOT__i_GPR__DOT____Vcellout__foor_loop_i__BRA__3__KET____DOT__R____pinNumber4),32);
        bufp->chgIData(oldp+478,(vlSelfRef.top__DOT__i_GPR__DOT____Vcellout__foor_loop_i__BRA__4__KET____DOT__R____pinNumber4),32);
        bufp->chgIData(oldp+479,(vlSelfRef.top__DOT__i_GPR__DOT____Vcellout__foor_loop_i__BRA__5__KET____DOT__R____pinNumber4),32);
        bufp->chgIData(oldp+480,(vlSelfRef.top__DOT__i_GPR__DOT____Vcellout__foor_loop_i__BRA__6__KET____DOT__R____pinNumber4),32);
        bufp->chgIData(oldp+481,(vlSelfRef.top__DOT__i_GPR__DOT____Vcellout__foor_loop_i__BRA__7__KET____DOT__R____pinNumber4),32);
        bufp->chgIData(oldp+482,(vlSelfRef.top__DOT__i_GPR__DOT____Vcellout__foor_loop_i__BRA__8__KET____DOT__R____pinNumber4),32);
        bufp->chgIData(oldp+483,(vlSelfRef.top__DOT__i_GPR__DOT____Vcellout__foor_loop_i__BRA__9__KET____DOT__R____pinNumber4),32);
        bufp->chgCData(oldp+484,(((- (IData)((IData)(vlSelfRef.top__DOT__ins_seg6__DOT__i0__DOT__i0__DOT__hit))) 
                                  & (IData)(vlSelfRef.top__DOT__ins_seg6__DOT__i0__DOT__i0__DOT__lut_out))),8);
        bufp->chgCData(oldp+485,(vlSelfRef.top__DOT__ins_seg6__DOT__i0__DOT__i0__DOT__lut_out),8);
        bufp->chgBit(oldp+486,(vlSelfRef.top__DOT__ins_seg6__DOT__i0__DOT__i0__DOT__hit));
        bufp->chgCData(oldp+487,(((- (IData)((IData)(vlSelfRef.top__DOT__ins_seg7__DOT__i0__DOT__i0__DOT__hit))) 
                                  & (IData)(vlSelfRef.top__DOT__ins_seg7__DOT__i0__DOT__i0__DOT__lut_out))),8);
        bufp->chgCData(oldp+488,(vlSelfRef.top__DOT__ins_seg7__DOT__i0__DOT__i0__DOT__lut_out),8);
        bufp->chgBit(oldp+489,(vlSelfRef.top__DOT__ins_seg7__DOT__i0__DOT__i0__DOT__hit));
        bufp->chgCData(oldp+490,(vlSelfRef.top__DOT____Vcellout__r_btn0____pinNumber4),5);
        bufp->chgCData(oldp+491,(vlSelfRef.top__DOT____Vcellout__r_btn1____pinNumber4),5);
        bufp->chgCData(oldp+492,(vlSelfRef.top__DOT____Vcellout__r_btn2____pinNumber4),5);
        bufp->chgCData(oldp+493,(vlSelfRef.top__DOT____Vcellout__r_btn3____pinNumber4),5);
        bufp->chgCData(oldp+494,(vlSelfRef.top__DOT____Vcellout__r_btn4____pinNumber4),5);
    }
    bufp->chgBit(oldp+495,(vlSelfRef.clk));
    bufp->chgBit(oldp+496,(vlSelfRef.rst));
    bufp->chgCData(oldp+497,(vlSelfRef.btn),5);
    bufp->chgSData(oldp+498,(vlSelfRef.sw),16);
    bufp->chgBit(oldp+499,(vlSelfRef.ps2_clk));
    bufp->chgBit(oldp+500,(vlSelfRef.ps2_data));
    bufp->chgBit(oldp+501,(vlSelfRef.uart_rx));
    bufp->chgBit(oldp+502,(vlSelfRef.uart_tx));
    bufp->chgSData(oldp+503,(vlSelfRef.ledr),16);
    bufp->chgBit(oldp+504,(vlSelfRef.VGA_CLK));
    bufp->chgBit(oldp+505,(vlSelfRef.VGA_HSYNC));
    bufp->chgBit(oldp+506,(vlSelfRef.VGA_VSYNC));
    bufp->chgBit(oldp+507,(vlSelfRef.VGA_BLANK_N));
    bufp->chgCData(oldp+508,(vlSelfRef.VGA_R),8);
    bufp->chgCData(oldp+509,(vlSelfRef.VGA_G),8);
    bufp->chgCData(oldp+510,(vlSelfRef.VGA_B),8);
    bufp->chgCData(oldp+511,(vlSelfRef.seg6),8);
    bufp->chgCData(oldp+512,(vlSelfRef.seg7),8);
    bufp->chgIData(oldp+513,(vlSelfRef.instruct),32);
    bufp->chgSData(oldp+514,(vlSelfRef.PC_N_o),16);
    bufp->chgBit(oldp+515,(vlSelfRef.top__DOT__R_PC__DOT__rst));
    bufp->chgCData(oldp+516,(((~ (IData)(vlSelfRef.btn)) 
                              & (IData)(vlSelfRef.top__DOT____Vcellout__r_btn0____pinNumber4))),5);
    bufp->chgCData(oldp+517,(((~ (IData)(vlSelfRef.btn)) 
                              & (IData)(vlSelfRef.top__DOT____Vcellout__r_btn1____pinNumber4))),5);
    bufp->chgCData(oldp+518,((0x0000001fU & (vlSelfRef.instruct 
                                             >> 0x0000000fU))),5);
    bufp->chgCData(oldp+519,((0x0000001fU & (vlSelfRef.instruct 
                                             >> 0x00000014U))),5);
    bufp->chgIData(oldp+520,(vlSelfRef.top__DOT__i_GPR__DOT__GPR
                             [(0x0000001fU & (vlSelfRef.instruct 
                                              >> 0x0000000fU))]),32);
    bufp->chgIData(oldp+521,(vlSelfRef.top__DOT__i_GPR__DOT__GPR
                             [(0x0000001fU & (vlSelfRef.instruct 
                                              >> 0x00000014U))]),32);
    bufp->chgCData(oldp+522,((0x0000001fU & (vlSelfRef.instruct 
                                             >> 7U))),5);
    bufp->chgIData(oldp+523,((0xfffff000U & vlSelfRef.instruct)),32);
    bufp->chgIData(oldp+524,(((3U == (3U & vlSelfRef.top__DOT__mem_addr))
                               ? (vlSelfRef.top__DOT__i_GPR__DOT__GPR
                                  [(0x0000001fU & (vlSelfRef.instruct 
                                                   >> 0x00000014U))] 
                                  << 0x00000018U) : 
                              ((2U == (3U & vlSelfRef.top__DOT__mem_addr))
                                ? ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2) 
                                   << 0x00000010U) : 
                               ((1U == (3U & vlSelfRef.top__DOT__mem_addr))
                                 ? ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2) 
                                    << 8U) : (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2))))),32);
    bufp->chgCData(oldp+525,((0x0000007fU & vlSelfRef.instruct)),7);
    bufp->chgBit(oldp+526,((0x33U == (0x0000007fU & vlSelfRef.instruct))));
    bufp->chgBit(oldp+527,((0x13U == (0x0000007fU & vlSelfRef.instruct))));
    bufp->chgBit(oldp+528,((0x37U == (0x0000007fU & vlSelfRef.instruct))));
    bufp->chgBit(oldp+529,((0x67U == (0x0000007fU & vlSelfRef.instruct))));
    bufp->chgCData(oldp+530,((7U & (vlSelfRef.instruct 
                                    >> 0x0000000cU))),3);
    bufp->chgIData(oldp+531,((vlSelfRef.instruct >> 0x0000000cU)),20);
    bufp->chgSData(oldp+532,((vlSelfRef.instruct >> 0x00000014U)),12);
    bufp->chgCData(oldp+533,((vlSelfRef.instruct >> 0x00000019U)),7);
    bufp->chgIData(oldp+534,(((0x33U == (0x0000007fU 
                                         & vlSelfRef.instruct))
                               ? vlSelfRef.top__DOT__i_GPR__DOT__GPR
                              [(0x0000001fU & (vlSelfRef.instruct 
                                               >> 0x00000014U))]
                               : vlSelfRef.top__DOT__imm_ext_32b_s)),32);
    bufp->chgIData(oldp+535,((((0x33U == (0x0000007fU 
                                          & vlSelfRef.instruct))
                                ? vlSelfRef.top__DOT__i_GPR__DOT__GPR
                               [(0x0000001fU & (vlSelfRef.instruct 
                                                >> 0x00000014U))]
                                : vlSelfRef.top__DOT__imm_ext_32b_s) 
                              + vlSelfRef.top__DOT__i_GPR__DOT__GPR
                              [(0x0000001fU & (vlSelfRef.instruct 
                                               >> 0x0000000fU))])),32);
    bufp->chgIData(oldp+536,(vlSelfRef.top__DOT__cnt_clk),24);
    bufp->chgSData(oldp+537,((0x0000ffffU & VL_MODDIV_III(32, 
                                                          VL_DIV_III(32, (IData)(vlSelfRef.PC_N_o), (IData)(0x0000000aU)), (IData)(0x0000000aU)))),16);
    bufp->chgSData(oldp+538,((0x0000ffffU & VL_MODDIV_III(32, (IData)(vlSelfRef.PC_N_o), (IData)(0x0000000aU)))),16);
    bufp->chgBit(oldp+539,((IData)(((0U == (0x00000f80U 
                                            & vlSelfRef.instruct)) 
                                    & (IData)(vlSelfRef.top__DOT__i_GPR__DOT__wen)))));
    bufp->chgBit(oldp+540,((IData)(((0x00000500U == 
                                     (0x00000f80U & vlSelfRef.instruct)) 
                                    & (IData)(vlSelfRef.top__DOT__i_GPR__DOT__wen)))));
    bufp->chgBit(oldp+541,((IData)(((0x00000580U == 
                                     (0x00000f80U & vlSelfRef.instruct)) 
                                    & (IData)(vlSelfRef.top__DOT__i_GPR__DOT__wen)))));
    bufp->chgBit(oldp+542,((IData)(((0x00000600U == 
                                     (0x00000f80U & vlSelfRef.instruct)) 
                                    & (IData)(vlSelfRef.top__DOT__i_GPR__DOT__wen)))));
    bufp->chgBit(oldp+543,((IData)(((0x00000680U == 
                                     (0x00000f80U & vlSelfRef.instruct)) 
                                    & (IData)(vlSelfRef.top__DOT__i_GPR__DOT__wen)))));
    bufp->chgBit(oldp+544,((IData)(((0x00000700U == 
                                     (0x00000f80U & vlSelfRef.instruct)) 
                                    & (IData)(vlSelfRef.top__DOT__i_GPR__DOT__wen)))));
    bufp->chgBit(oldp+545,((IData)(((0x00000780U == 
                                     (0x00000f80U & vlSelfRef.instruct)) 
                                    & (IData)(vlSelfRef.top__DOT__i_GPR__DOT__wen)))));
    bufp->chgBit(oldp+546,((IData)(((0x00000800U == 
                                     (0x00000f80U & vlSelfRef.instruct)) 
                                    & (IData)(vlSelfRef.top__DOT__i_GPR__DOT__wen)))));
    bufp->chgBit(oldp+547,((IData)(((0x00000880U == 
                                     (0x00000f80U & vlSelfRef.instruct)) 
                                    & (IData)(vlSelfRef.top__DOT__i_GPR__DOT__wen)))));
    bufp->chgBit(oldp+548,((IData)(((0x00000900U == 
                                     (0x00000f80U & vlSelfRef.instruct)) 
                                    & (IData)(vlSelfRef.top__DOT__i_GPR__DOT__wen)))));
    bufp->chgBit(oldp+549,((IData)(((0x00000980U == 
                                     (0x00000f80U & vlSelfRef.instruct)) 
                                    & (IData)(vlSelfRef.top__DOT__i_GPR__DOT__wen)))));
    bufp->chgBit(oldp+550,((IData)(((0x00000080U == 
                                     (0x00000f80U & vlSelfRef.instruct)) 
                                    & (IData)(vlSelfRef.top__DOT__i_GPR__DOT__wen)))));
    bufp->chgBit(oldp+551,((IData)(((0x00000a00U == 
                                     (0x00000f80U & vlSelfRef.instruct)) 
                                    & (IData)(vlSelfRef.top__DOT__i_GPR__DOT__wen)))));
    bufp->chgBit(oldp+552,((IData)(((0x00000a80U == 
                                     (0x00000f80U & vlSelfRef.instruct)) 
                                    & (IData)(vlSelfRef.top__DOT__i_GPR__DOT__wen)))));
    bufp->chgBit(oldp+553,((IData)(((0x00000b00U == 
                                     (0x00000f80U & vlSelfRef.instruct)) 
                                    & (IData)(vlSelfRef.top__DOT__i_GPR__DOT__wen)))));
    bufp->chgBit(oldp+554,((IData)(((0x00000b80U == 
                                     (0x00000f80U & vlSelfRef.instruct)) 
                                    & (IData)(vlSelfRef.top__DOT__i_GPR__DOT__wen)))));
    bufp->chgBit(oldp+555,((IData)(((0x00000c00U == 
                                     (0x00000f80U & vlSelfRef.instruct)) 
                                    & (IData)(vlSelfRef.top__DOT__i_GPR__DOT__wen)))));
    bufp->chgBit(oldp+556,((IData)(((0x00000c80U == 
                                     (0x00000f80U & vlSelfRef.instruct)) 
                                    & (IData)(vlSelfRef.top__DOT__i_GPR__DOT__wen)))));
    bufp->chgBit(oldp+557,((IData)(((0x00000d00U == 
                                     (0x00000f80U & vlSelfRef.instruct)) 
                                    & (IData)(vlSelfRef.top__DOT__i_GPR__DOT__wen)))));
    bufp->chgBit(oldp+558,((IData)(((0x00000d80U == 
                                     (0x00000f80U & vlSelfRef.instruct)) 
                                    & (IData)(vlSelfRef.top__DOT__i_GPR__DOT__wen)))));
    bufp->chgBit(oldp+559,((IData)(((0x00000e00U == 
                                     (0x00000f80U & vlSelfRef.instruct)) 
                                    & (IData)(vlSelfRef.top__DOT__i_GPR__DOT__wen)))));
    bufp->chgBit(oldp+560,((IData)(((0x00000e80U == 
                                     (0x00000f80U & vlSelfRef.instruct)) 
                                    & (IData)(vlSelfRef.top__DOT__i_GPR__DOT__wen)))));
    bufp->chgBit(oldp+561,((IData)(((0x00000100U == 
                                     (0x00000f80U & vlSelfRef.instruct)) 
                                    & (IData)(vlSelfRef.top__DOT__i_GPR__DOT__wen)))));
    bufp->chgBit(oldp+562,((IData)(((0x00000f00U == 
                                     (0x00000f80U & vlSelfRef.instruct)) 
                                    & (IData)(vlSelfRef.top__DOT__i_GPR__DOT__wen)))));
    bufp->chgBit(oldp+563,((IData)(((0x00000f80U == 
                                     (0x00000f80U & vlSelfRef.instruct)) 
                                    & (IData)(vlSelfRef.top__DOT__i_GPR__DOT__wen)))));
    bufp->chgBit(oldp+564,((IData)(((0x00000180U == 
                                     (0x00000f80U & vlSelfRef.instruct)) 
                                    & (IData)(vlSelfRef.top__DOT__i_GPR__DOT__wen)))));
    bufp->chgBit(oldp+565,((IData)(((0x00000200U == 
                                     (0x00000f80U & vlSelfRef.instruct)) 
                                    & (IData)(vlSelfRef.top__DOT__i_GPR__DOT__wen)))));
    bufp->chgBit(oldp+566,((IData)(((0x00000280U == 
                                     (0x00000f80U & vlSelfRef.instruct)) 
                                    & (IData)(vlSelfRef.top__DOT__i_GPR__DOT__wen)))));
    bufp->chgBit(oldp+567,((IData)(((0x00000300U == 
                                     (0x00000f80U & vlSelfRef.instruct)) 
                                    & (IData)(vlSelfRef.top__DOT__i_GPR__DOT__wen)))));
    bufp->chgBit(oldp+568,((IData)(((0x00000380U == 
                                     (0x00000f80U & vlSelfRef.instruct)) 
                                    & (IData)(vlSelfRef.top__DOT__i_GPR__DOT__wen)))));
    bufp->chgBit(oldp+569,((IData)(((0x00000400U == 
                                     (0x00000f80U & vlSelfRef.instruct)) 
                                    & (IData)(vlSelfRef.top__DOT__i_GPR__DOT__wen)))));
    bufp->chgBit(oldp+570,((IData)(((0x00000480U == 
                                     (0x00000f80U & vlSelfRef.instruct)) 
                                    & (IData)(vlSelfRef.top__DOT__i_GPR__DOT__wen)))));
    bufp->chgCData(oldp+571,((0x0000000fU & VL_MODDIV_III(32, (IData)(vlSelfRef.PC_N_o), (IData)(0x0000000aU)))),4);
    bufp->chgBit(oldp+572,((1U & (VL_MODDIV_III(32, (IData)(vlSelfRef.PC_N_o), (IData)(0x0000000aU)) 
                                  >> 3U))));
    bufp->chgBit(oldp+573,((1U & (VL_MODDIV_III(32, (IData)(vlSelfRef.PC_N_o), (IData)(0x0000000aU)) 
                                  >> 2U))));
    bufp->chgBit(oldp+574,((1U & (VL_MODDIV_III(32, (IData)(vlSelfRef.PC_N_o), (IData)(0x0000000aU)) 
                                  >> 1U))));
    bufp->chgBit(oldp+575,((1U & VL_MODDIV_III(32, (IData)(vlSelfRef.PC_N_o), (IData)(0x0000000aU)))));
    bufp->chgCData(oldp+576,((0x0000000fU & VL_MODDIV_III(32, 
                                                          VL_DIV_III(32, (IData)(vlSelfRef.PC_N_o), (IData)(0x0000000aU)), (IData)(0x0000000aU)))),4);
    bufp->chgBit(oldp+577,((1U & (VL_MODDIV_III(32, 
                                                VL_DIV_III(32, (IData)(vlSelfRef.PC_N_o), (IData)(0x0000000aU)), (IData)(0x0000000aU)) 
                                  >> 3U))));
    bufp->chgBit(oldp+578,((1U & (VL_MODDIV_III(32, 
                                                VL_DIV_III(32, (IData)(vlSelfRef.PC_N_o), (IData)(0x0000000aU)), (IData)(0x0000000aU)) 
                                  >> 2U))));
    bufp->chgBit(oldp+579,((1U & (VL_MODDIV_III(32, 
                                                VL_DIV_III(32, (IData)(vlSelfRef.PC_N_o), (IData)(0x0000000aU)), (IData)(0x0000000aU)) 
                                  >> 1U))));
    bufp->chgBit(oldp+580,((1U & VL_MODDIV_III(32, 
                                               VL_DIV_III(32, (IData)(vlSelfRef.PC_N_o), (IData)(0x0000000aU)), (IData)(0x0000000aU)))));
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
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
}
