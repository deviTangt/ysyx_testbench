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

void Vtop___024root__trace_chg_dtype____0(Vtop___024root* vlSelf, VerilatedFst::Buffer* bufp, uint32_t offset, const VlUnpacked<CData/*1:0*/, 4>& __VdtypeVar);
void Vtop___024root__trace_chg_dtype____1(Vtop___024root* vlSelf, VerilatedFst::Buffer* bufp, uint32_t offset, const VlUnpacked<SData/*11:0*/, 16>& __VdtypeVar);
void Vtop___024root__trace_chg_dtype____2(Vtop___024root* vlSelf, VerilatedFst::Buffer* bufp, uint32_t offset, const VlUnpacked<CData/*3:0*/, 16>& __VdtypeVar);
void Vtop___024root__trace_chg_dtype____3(Vtop___024root* vlSelf, VerilatedFst::Buffer* bufp, uint32_t offset, const VlUnpacked<CData/*7:0*/, 16>& __VdtypeVar);

void Vtop___024root__trace_chg_0_sub_0(Vtop___024root* vlSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_chg_0_sub_0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 0);
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[0U]))) {
        Vtop___024root__trace_chg_dtype____0(vlSelf, bufp, 0, vlSelfRef.top__DOT__i_GPR__DOT__sel_a__DOT__i0__DOT__key_list);
        Vtop___024root__trace_chg_dtype____0(vlSelf, bufp, 4, vlSelfRef.top__DOT__i_GPR__DOT__sel_b__DOT__i0__DOT__key_list);
        Vtop___024root__trace_chg_dtype____1(vlSelf, bufp, 8, vlSelfRef.top__DOT__ins_seg0__DOT__i0__DOT__i0__DOT__pair_list);
        Vtop___024root__trace_chg_dtype____2(vlSelf, bufp, 24, vlSelfRef.top__DOT__ins_seg0__DOT__i0__DOT__i0__DOT__key_list);
        Vtop___024root__trace_chg_dtype____3(vlSelf, bufp, 40, vlSelfRef.top__DOT__ins_seg0__DOT__i0__DOT__i0__DOT__data_list);
        Vtop___024root__trace_chg_dtype____1(vlSelf, bufp, 56, vlSelfRef.top__DOT__ins_seg1__DOT__i0__DOT__i0__DOT__pair_list);
        Vtop___024root__trace_chg_dtype____2(vlSelf, bufp, 72, vlSelfRef.top__DOT__ins_seg1__DOT__i0__DOT__i0__DOT__key_list);
        Vtop___024root__trace_chg_dtype____3(vlSelf, bufp, 88, vlSelfRef.top__DOT__ins_seg1__DOT__i0__DOT__i0__DOT__data_list);
        Vtop___024root__trace_chg_dtype____1(vlSelf, bufp, 104, vlSelfRef.top__DOT__ins_seg2__DOT__i0__DOT__i0__DOT__pair_list);
        Vtop___024root__trace_chg_dtype____2(vlSelf, bufp, 120, vlSelfRef.top__DOT__ins_seg2__DOT__i0__DOT__i0__DOT__key_list);
        Vtop___024root__trace_chg_dtype____3(vlSelf, bufp, 136, vlSelfRef.top__DOT__ins_seg2__DOT__i0__DOT__i0__DOT__data_list);
        Vtop___024root__trace_chg_dtype____1(vlSelf, bufp, 152, vlSelfRef.top__DOT__ins_seg3__DOT__i0__DOT__i0__DOT__pair_list);
        Vtop___024root__trace_chg_dtype____2(vlSelf, bufp, 168, vlSelfRef.top__DOT__ins_seg3__DOT__i0__DOT__i0__DOT__key_list);
        Vtop___024root__trace_chg_dtype____3(vlSelf, bufp, 184, vlSelfRef.top__DOT__ins_seg3__DOT__i0__DOT__i0__DOT__data_list);
        Vtop___024root__trace_chg_dtype____1(vlSelf, bufp, 200, vlSelfRef.top__DOT__ins_seg4__DOT__i0__DOT__i0__DOT__pair_list);
        Vtop___024root__trace_chg_dtype____2(vlSelf, bufp, 216, vlSelfRef.top__DOT__ins_seg4__DOT__i0__DOT__i0__DOT__key_list);
        Vtop___024root__trace_chg_dtype____3(vlSelf, bufp, 232, vlSelfRef.top__DOT__ins_seg4__DOT__i0__DOT__i0__DOT__data_list);
        Vtop___024root__trace_chg_dtype____1(vlSelf, bufp, 248, vlSelfRef.top__DOT__ins_seg5__DOT__i0__DOT__i0__DOT__pair_list);
        Vtop___024root__trace_chg_dtype____2(vlSelf, bufp, 264, vlSelfRef.top__DOT__ins_seg5__DOT__i0__DOT__i0__DOT__key_list);
        Vtop___024root__trace_chg_dtype____3(vlSelf, bufp, 280, vlSelfRef.top__DOT__ins_seg5__DOT__i0__DOT__i0__DOT__data_list);
        Vtop___024root__trace_chg_dtype____1(vlSelf, bufp, 296, vlSelfRef.top__DOT__ins_seg6__DOT__i0__DOT__i0__DOT__pair_list);
        Vtop___024root__trace_chg_dtype____2(vlSelf, bufp, 312, vlSelfRef.top__DOT__ins_seg6__DOT__i0__DOT__i0__DOT__key_list);
        Vtop___024root__trace_chg_dtype____3(vlSelf, bufp, 328, vlSelfRef.top__DOT__ins_seg6__DOT__i0__DOT__i0__DOT__data_list);
        Vtop___024root__trace_chg_dtype____1(vlSelf, bufp, 344, vlSelfRef.top__DOT__ins_seg7__DOT__i0__DOT__i0__DOT__pair_list);
        Vtop___024root__trace_chg_dtype____2(vlSelf, bufp, 360, vlSelfRef.top__DOT__ins_seg7__DOT__i0__DOT__i0__DOT__key_list);
        Vtop___024root__trace_chg_dtype____3(vlSelf, bufp, 376, vlSelfRef.top__DOT__ins_seg7__DOT__i0__DOT__i0__DOT__data_list);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[1U]))) {
        bufp->chgCData(oldp+392,(vlSelfRef.top__DOT__btn_p[4]),5);
        bufp->chgCData(oldp+393,(vlSelfRef.top__DOT__btn_p[3]),5);
        bufp->chgCData(oldp+394,(vlSelfRef.top__DOT__btn_p[2]),5);
        bufp->chgCData(oldp+395,(vlSelfRef.top__DOT__btn_p[1]),5);
        bufp->chgCData(oldp+396,(vlSelfRef.top__DOT__btn_p[0]),5);
        bufp->chgCData(oldp+397,(vlSelfRef.top__DOT__PC),8);
        bufp->chgCData(oldp+398,(vlSelfRef.top__DOT__R_PC__DOT__din),8);
        bufp->chgCData(oldp+399,(vlSelfRef.top__DOT__i_GPR__DOT__raddra),2);
        bufp->chgCData(oldp+400,(vlSelfRef.top__DOT__i_GPR__DOT__raddrb),2);
        bufp->chgCData(oldp+401,(vlSelfRef.top__DOT__i_GPR__DOT__douta),8);
        bufp->chgCData(oldp+402,(vlSelfRef.top__DOT__R_led__DOT__din),8);
        bufp->chgCData(oldp+403,(vlSelfRef.top__DOT__i_GPR__DOT__waddr),2);
        bufp->chgBit(oldp+404,(vlSelfRef.top__DOT__i_GPR__DOT__wen));
        bufp->chgCData(oldp+405,((0x000000ffU & ((2U 
                                                  == (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0))
                                                  ? 
                                                 ((IData)(vlSelfRef.top__DOT__rs2) 
                                                  << (IData)(vlSelfRef.top__DOT__rs1))
                                                  : (IData)(vlSelfRef.top__DOT__add_result)))),8);
        bufp->chgCData(oldp+406,(vlSelfRef.top__DOT__rom_PC
                                 [vlSelfRef.top__DOT__PC]),8);
        bufp->chgCData(oldp+407,(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0),2);
        bufp->chgBit(oldp+408,((0U == (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0))));
        bufp->chgBit(oldp+409,((1U == (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0))));
        bufp->chgBit(oldp+410,((2U == (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0))));
        bufp->chgBit(oldp+411,((3U == (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0))));
        bufp->chgCData(oldp+412,(vlSelfRef.top__DOT__rs1),2);
        bufp->chgCData(oldp+413,(vlSelfRef.top__DOT__rs2),2);
        bufp->chgCData(oldp+414,(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_6),4);
        bufp->chgCData(oldp+415,(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1),3);
        bufp->chgBit(oldp+416,(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_7));
        bufp->chgBit(oldp+417,(vlSelfRef.top__DOT__io_out));
        bufp->chgBit(oldp+418,(vlSelfRef.top__DOT__io_in));
        bufp->chgBit(oldp+419,(((0U == (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1)) 
                                & (IData)(vlSelfRef.top__DOT__io_out))));
        bufp->chgBit(oldp+420,(((1U == (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1)) 
                                & (IData)(vlSelfRef.top__DOT__io_out))));
        bufp->chgBit(oldp+421,(((0U == (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1)) 
                                & (IData)(vlSelfRef.top__DOT__io_in))));
        bufp->chgBit(oldp+422,(((1U == (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1)) 
                                & (IData)(vlSelfRef.top__DOT__io_in))));
        bufp->chgCData(oldp+423,(vlSelfRef.top__DOT__add_result),8);
        bufp->chgCData(oldp+424,(vlSelfRef.top__DOT__io_led_r),8);
        bufp->chgCData(oldp+425,(vlSelfRef.top__DOT__io_seg_r),8);
        bufp->chgCData(oldp+426,((0x000000ffU & ((IData)(vlSelfRef.top__DOT__rs2) 
                                                 << (IData)(vlSelfRef.top__DOT__rs1)))),8);
        bufp->chgCData(oldp+427,(((0x000000f0U & ((- (IData)(
                                                             (1U 
                                                              & (vlSelfRef.top__DOT__rom_PC
                                                                 [vlSelfRef.top__DOT__PC] 
                                                                 >> 5U)))) 
                                                  << 4U)) 
                                  | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_6))),8);
        bufp->chgBit(oldp+428,(((IData)(vlSelfRef.top__DOT__i_GPR__DOT__douta) 
                                != (IData)(vlSelfRef.top__DOT__R_led__DOT__din))));
        bufp->chgCData(oldp+429,((0x000000ffU & VL_MODDIV_III(32, 
                                                              VL_DIV_III(32, (IData)(vlSelfRef.top__DOT__io_seg_r), (IData)(0x0000000aU)), (IData)(0x0000000aU)))),8);
        bufp->chgCData(oldp+430,((0x000000ffU & VL_MODDIV_III(32, (IData)(vlSelfRef.top__DOT__io_seg_r), (IData)(0x0000000aU)))),8);
        bufp->chgCData(oldp+431,((0x000000ffU & VL_MODDIV_III(32, 
                                                              VL_DIV_III(32, (IData)(vlSelfRef.top__DOT__PC), (IData)(0x0000000aU)), (IData)(0x0000000aU)))),8);
        bufp->chgCData(oldp+432,((0x000000ffU & VL_MODDIV_III(32, (IData)(vlSelfRef.top__DOT__PC), (IData)(0x0000000aU)))),8);
        bufp->chgCData(oldp+433,(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_6),4);
        bufp->chgCData(oldp+434,(((0x000000f0U & ((- (IData)(
                                                             (1U 
                                                              & (vlSelfRef.top__DOT__rom_PC
                                                                 [vlSelfRef.top__DOT__PC] 
                                                                 >> 5U)))) 
                                                  << 4U)) 
                                  | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_6))),8);
        bufp->chgCData(oldp+435,(vlSelfRef.top__DOT__i_GPR__DOT__GPR[3]),8);
        bufp->chgCData(oldp+436,(vlSelfRef.top__DOT__i_GPR__DOT__GPR[2]),8);
        bufp->chgCData(oldp+437,(vlSelfRef.top__DOT__i_GPR__DOT__GPR[1]),8);
        bufp->chgCData(oldp+438,(vlSelfRef.top__DOT__i_GPR__DOT__GPR[0]),8);
        bufp->chgCData(oldp+439,(vlSelfRef.top__DOT__i_GPR__DOT____Vcellout__R0____pinNumber4),8);
        bufp->chgBit(oldp+440,(((0U == (IData)(vlSelfRef.top__DOT__i_GPR__DOT__waddr)) 
                                & (IData)(vlSelfRef.top__DOT__i_GPR__DOT__wen))));
        bufp->chgCData(oldp+441,(vlSelfRef.top__DOT__i_GPR__DOT____Vcellout__R1____pinNumber4),8);
        bufp->chgBit(oldp+442,(((1U == (IData)(vlSelfRef.top__DOT__i_GPR__DOT__waddr)) 
                                & (IData)(vlSelfRef.top__DOT__i_GPR__DOT__wen))));
        bufp->chgCData(oldp+443,(vlSelfRef.top__DOT__i_GPR__DOT____Vcellout__R2____pinNumber4),8);
        bufp->chgBit(oldp+444,(((2U == (IData)(vlSelfRef.top__DOT__i_GPR__DOT__waddr)) 
                                & (IData)(vlSelfRef.top__DOT__i_GPR__DOT__wen))));
        bufp->chgCData(oldp+445,(vlSelfRef.top__DOT__i_GPR__DOT____Vcellout__R3____pinNumber4),8);
        bufp->chgBit(oldp+446,(((3U == (IData)(vlSelfRef.top__DOT__i_GPR__DOT__waddr)) 
                                & (IData)(vlSelfRef.top__DOT__i_GPR__DOT__wen))));
        bufp->chgQData(oldp+447,(vlSelfRef.top__DOT__i_GPR__DOT__sel_a__DOT__i0__DOT__lut),40);
        bufp->chgSData(oldp+449,(vlSelfRef.top__DOT__i_GPR__DOT__sel_a__DOT__i0__DOT__pair_list[3]),10);
        bufp->chgSData(oldp+450,(vlSelfRef.top__DOT__i_GPR__DOT__sel_a__DOT__i0__DOT__pair_list[2]),10);
        bufp->chgSData(oldp+451,(vlSelfRef.top__DOT__i_GPR__DOT__sel_a__DOT__i0__DOT__pair_list[1]),10);
        bufp->chgSData(oldp+452,(vlSelfRef.top__DOT__i_GPR__DOT__sel_a__DOT__i0__DOT__pair_list[0]),10);
        bufp->chgCData(oldp+453,(vlSelfRef.top__DOT__i_GPR__DOT__sel_a__DOT__i0__DOT__data_list[3]),8);
        bufp->chgCData(oldp+454,(vlSelfRef.top__DOT__i_GPR__DOT__sel_a__DOT__i0__DOT__data_list[2]),8);
        bufp->chgCData(oldp+455,(vlSelfRef.top__DOT__i_GPR__DOT__sel_a__DOT__i0__DOT__data_list[1]),8);
        bufp->chgCData(oldp+456,(vlSelfRef.top__DOT__i_GPR__DOT__sel_a__DOT__i0__DOT__data_list[0]),8);
        bufp->chgCData(oldp+457,((((IData)(vlSelfRef.top__DOT__i_GPR__DOT____Vcellout__R3____pinNumber4) 
                                   & (- (IData)((3U 
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
                                                         == (IData)(vlSelfRef.top__DOT__i_GPR__DOT__raddra))))))))),8);
        bufp->chgBit(oldp+458,(((3U == (IData)(vlSelfRef.top__DOT__i_GPR__DOT__raddra)) 
                                | ((2U == (IData)(vlSelfRef.top__DOT__i_GPR__DOT__raddra)) 
                                   | ((1U == (IData)(vlSelfRef.top__DOT__i_GPR__DOT__raddra)) 
                                      | (0U == (IData)(vlSelfRef.top__DOT__i_GPR__DOT__raddra)))))));
        bufp->chgSData(oldp+459,(vlSelfRef.top__DOT__i_GPR__DOT__sel_b__DOT__i0__DOT__pair_list[3]),10);
        bufp->chgSData(oldp+460,(vlSelfRef.top__DOT__i_GPR__DOT__sel_b__DOT__i0__DOT__pair_list[2]),10);
        bufp->chgSData(oldp+461,(vlSelfRef.top__DOT__i_GPR__DOT__sel_b__DOT__i0__DOT__pair_list[1]),10);
        bufp->chgSData(oldp+462,(vlSelfRef.top__DOT__i_GPR__DOT__sel_b__DOT__i0__DOT__pair_list[0]),10);
        bufp->chgCData(oldp+463,(vlSelfRef.top__DOT__i_GPR__DOT__sel_b__DOT__i0__DOT__data_list[3]),8);
        bufp->chgCData(oldp+464,(vlSelfRef.top__DOT__i_GPR__DOT__sel_b__DOT__i0__DOT__data_list[2]),8);
        bufp->chgCData(oldp+465,(vlSelfRef.top__DOT__i_GPR__DOT__sel_b__DOT__i0__DOT__data_list[1]),8);
        bufp->chgCData(oldp+466,(vlSelfRef.top__DOT__i_GPR__DOT__sel_b__DOT__i0__DOT__data_list[0]),8);
        bufp->chgCData(oldp+467,((((IData)(vlSelfRef.top__DOT__i_GPR__DOT____Vcellout__R3____pinNumber4) 
                                   & (- (IData)((3U 
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
                                                         == (IData)(vlSelfRef.top__DOT__i_GPR__DOT__raddrb))))))))),8);
        bufp->chgBit(oldp+468,(((3U == (IData)(vlSelfRef.top__DOT__i_GPR__DOT__raddrb)) 
                                | ((2U == (IData)(vlSelfRef.top__DOT__i_GPR__DOT__raddrb)) 
                                   | ((1U == (IData)(vlSelfRef.top__DOT__i_GPR__DOT__raddrb)) 
                                      | (0U == (IData)(vlSelfRef.top__DOT__i_GPR__DOT__raddrb)))))));
        bufp->chgCData(oldp+469,((0x0000000fU & VL_MODDIV_III(32, (IData)(vlSelfRef.top__DOT__io_seg_r), (IData)(0x0000000aU)))),4);
        bufp->chgBit(oldp+470,((1U & (VL_MODDIV_III(32, (IData)(vlSelfRef.top__DOT__io_seg_r), (IData)(0x0000000aU)) 
                                      >> 3U))));
        bufp->chgBit(oldp+471,((1U & (VL_MODDIV_III(32, (IData)(vlSelfRef.top__DOT__io_seg_r), (IData)(0x0000000aU)) 
                                      >> 2U))));
        bufp->chgBit(oldp+472,((1U & (VL_MODDIV_III(32, (IData)(vlSelfRef.top__DOT__io_seg_r), (IData)(0x0000000aU)) 
                                      >> 1U))));
        bufp->chgBit(oldp+473,((1U & VL_MODDIV_III(32, (IData)(vlSelfRef.top__DOT__io_seg_r), (IData)(0x0000000aU)))));
        bufp->chgCData(oldp+474,(((- (IData)((IData)(vlSelfRef.top__DOT__ins_seg0__DOT__i0__DOT__i0__DOT__hit))) 
                                  & (IData)(vlSelfRef.top__DOT__ins_seg0__DOT__i0__DOT__i0__DOT__lut_out))),8);
        bufp->chgCData(oldp+475,(vlSelfRef.top__DOT__ins_seg0__DOT__i0__DOT__i0__DOT__lut_out),8);
        bufp->chgBit(oldp+476,(vlSelfRef.top__DOT__ins_seg0__DOT__i0__DOT__i0__DOT__hit));
        bufp->chgCData(oldp+477,((0x0000000fU & VL_MODDIV_III(32, 
                                                              VL_DIV_III(32, (IData)(vlSelfRef.top__DOT__io_seg_r), (IData)(0x0000000aU)), (IData)(0x0000000aU)))),4);
        bufp->chgBit(oldp+478,((1U & (VL_MODDIV_III(32, 
                                                    VL_DIV_III(32, (IData)(vlSelfRef.top__DOT__io_seg_r), (IData)(0x0000000aU)), (IData)(0x0000000aU)) 
                                      >> 3U))));
        bufp->chgBit(oldp+479,((1U & (VL_MODDIV_III(32, 
                                                    VL_DIV_III(32, (IData)(vlSelfRef.top__DOT__io_seg_r), (IData)(0x0000000aU)), (IData)(0x0000000aU)) 
                                      >> 2U))));
        bufp->chgBit(oldp+480,((1U & (VL_MODDIV_III(32, 
                                                    VL_DIV_III(32, (IData)(vlSelfRef.top__DOT__io_seg_r), (IData)(0x0000000aU)), (IData)(0x0000000aU)) 
                                      >> 1U))));
        bufp->chgBit(oldp+481,((1U & VL_MODDIV_III(32, 
                                                   VL_DIV_III(32, (IData)(vlSelfRef.top__DOT__io_seg_r), (IData)(0x0000000aU)), (IData)(0x0000000aU)))));
        bufp->chgCData(oldp+482,(((- (IData)((IData)(vlSelfRef.top__DOT__ins_seg1__DOT__i0__DOT__i0__DOT__hit))) 
                                  & (IData)(vlSelfRef.top__DOT__ins_seg1__DOT__i0__DOT__i0__DOT__lut_out))),8);
        bufp->chgCData(oldp+483,(vlSelfRef.top__DOT__ins_seg1__DOT__i0__DOT__i0__DOT__lut_out),8);
        bufp->chgBit(oldp+484,(vlSelfRef.top__DOT__ins_seg1__DOT__i0__DOT__i0__DOT__hit));
        bufp->chgCData(oldp+485,(vlSelfRef.top__DOT__ins_seg4__DOT__b),4);
        bufp->chgBit(oldp+486,((1U & (vlSelfRef.top__DOT__rom_PC
                                      [vlSelfRef.top__DOT__PC] 
                                      >> 2U))));
        bufp->chgBit(oldp+487,((1U & (vlSelfRef.top__DOT__rom_PC
                                      [vlSelfRef.top__DOT__PC] 
                                      >> 1U))));
        bufp->chgBit(oldp+488,((1U & vlSelfRef.top__DOT__rom_PC
                                [vlSelfRef.top__DOT__PC])));
        bufp->chgCData(oldp+489,(((- (IData)(((0x0fU 
                                               == (IData)(vlSelfRef.top__DOT__ins_seg4__DOT__b)) 
                                              | ((0x0eU 
                                                  == (IData)(vlSelfRef.top__DOT__ins_seg4__DOT__b)) 
                                                 | ((0x0dU 
                                                     == (IData)(vlSelfRef.top__DOT__ins_seg4__DOT__b)) 
                                                    | ((0x0cU 
                                                        == (IData)(vlSelfRef.top__DOT__ins_seg4__DOT__b)) 
                                                       | ((0x0bU 
                                                           == (IData)(vlSelfRef.top__DOT__ins_seg4__DOT__b)) 
                                                          | ((0x0aU 
                                                              == (IData)(vlSelfRef.top__DOT__ins_seg4__DOT__b)) 
                                                             | ((9U 
                                                                 == (IData)(vlSelfRef.top__DOT__ins_seg4__DOT__b)) 
                                                                | ((8U 
                                                                    == (IData)(vlSelfRef.top__DOT__ins_seg4__DOT__b)) 
                                                                   | ((7U 
                                                                       == (IData)(vlSelfRef.top__DOT__ins_seg4__DOT__b)) 
                                                                      | ((6U 
                                                                          == (IData)(vlSelfRef.top__DOT__ins_seg4__DOT__b)) 
                                                                         | ((5U 
                                                                             == (IData)(vlSelfRef.top__DOT__ins_seg4__DOT__b)) 
                                                                            | ((4U 
                                                                                == (IData)(vlSelfRef.top__DOT__ins_seg4__DOT__b)) 
                                                                               | ((3U 
                                                                                == (IData)(vlSelfRef.top__DOT__ins_seg4__DOT__b)) 
                                                                                | ((2U 
                                                                                == (IData)(vlSelfRef.top__DOT__ins_seg4__DOT__b)) 
                                                                                | ((0U 
                                                                                == (IData)(vlSelfRef.top__DOT__ins_seg4__DOT__b)) 
                                                                                | (1U 
                                                                                == (IData)(vlSelfRef.top__DOT__ins_seg4__DOT__b))))))))))))))))))) 
                                  & (IData)(vlSelfRef.top__DOT__ins_seg4__DOT__i0__DOT__i0__DOT__lut_out))),8);
        bufp->chgCData(oldp+490,(vlSelfRef.top__DOT__ins_seg4__DOT__i0__DOT__i0__DOT__lut_out),8);
        bufp->chgBit(oldp+491,(((0x0fU == (IData)(vlSelfRef.top__DOT__ins_seg4__DOT__b)) 
                                | ((0x0eU == (IData)(vlSelfRef.top__DOT__ins_seg4__DOT__b)) 
                                   | ((0x0dU == (IData)(vlSelfRef.top__DOT__ins_seg4__DOT__b)) 
                                      | ((0x0cU == (IData)(vlSelfRef.top__DOT__ins_seg4__DOT__b)) 
                                         | ((0x0bU 
                                             == (IData)(vlSelfRef.top__DOT__ins_seg4__DOT__b)) 
                                            | ((0x0aU 
                                                == (IData)(vlSelfRef.top__DOT__ins_seg4__DOT__b)) 
                                               | ((9U 
                                                   == (IData)(vlSelfRef.top__DOT__ins_seg4__DOT__b)) 
                                                  | ((8U 
                                                      == (IData)(vlSelfRef.top__DOT__ins_seg4__DOT__b)) 
                                                     | ((7U 
                                                         == (IData)(vlSelfRef.top__DOT__ins_seg4__DOT__b)) 
                                                        | ((6U 
                                                            == (IData)(vlSelfRef.top__DOT__ins_seg4__DOT__b)) 
                                                           | ((5U 
                                                               == (IData)(vlSelfRef.top__DOT__ins_seg4__DOT__b)) 
                                                              | ((4U 
                                                                  == (IData)(vlSelfRef.top__DOT__ins_seg4__DOT__b)) 
                                                                 | ((3U 
                                                                     == (IData)(vlSelfRef.top__DOT__ins_seg4__DOT__b)) 
                                                                    | ((2U 
                                                                        == (IData)(vlSelfRef.top__DOT__ins_seg4__DOT__b)) 
                                                                       | ((0U 
                                                                           == (IData)(vlSelfRef.top__DOT__ins_seg4__DOT__b)) 
                                                                          | (1U 
                                                                             == (IData)(vlSelfRef.top__DOT__ins_seg4__DOT__b)))))))))))))))))));
        bufp->chgCData(oldp+492,(vlSelfRef.top__DOT__ins_seg5__DOT__b),4);
        bufp->chgBit(oldp+493,((1U & (vlSelfRef.top__DOT__rom_PC
                                      [vlSelfRef.top__DOT__PC] 
                                      >> 7U))));
        bufp->chgBit(oldp+494,((1U & (vlSelfRef.top__DOT__rom_PC
                                      [vlSelfRef.top__DOT__PC] 
                                      >> 6U))));
        bufp->chgBit(oldp+495,((1U & (vlSelfRef.top__DOT__rom_PC
                                      [vlSelfRef.top__DOT__PC] 
                                      >> 5U))));
        bufp->chgBit(oldp+496,((1U & (vlSelfRef.top__DOT__rom_PC
                                      [vlSelfRef.top__DOT__PC] 
                                      >> 4U))));
        bufp->chgCData(oldp+497,(((- (IData)(((0x0fU 
                                               == (IData)(vlSelfRef.top__DOT__ins_seg5__DOT__b)) 
                                              | ((0x0eU 
                                                  == (IData)(vlSelfRef.top__DOT__ins_seg5__DOT__b)) 
                                                 | ((0x0dU 
                                                     == (IData)(vlSelfRef.top__DOT__ins_seg5__DOT__b)) 
                                                    | ((0x0cU 
                                                        == (IData)(vlSelfRef.top__DOT__ins_seg5__DOT__b)) 
                                                       | ((0x0bU 
                                                           == (IData)(vlSelfRef.top__DOT__ins_seg5__DOT__b)) 
                                                          | ((0x0aU 
                                                              == (IData)(vlSelfRef.top__DOT__ins_seg5__DOT__b)) 
                                                             | ((9U 
                                                                 == (IData)(vlSelfRef.top__DOT__ins_seg5__DOT__b)) 
                                                                | ((8U 
                                                                    == (IData)(vlSelfRef.top__DOT__ins_seg5__DOT__b)) 
                                                                   | ((7U 
                                                                       == (IData)(vlSelfRef.top__DOT__ins_seg5__DOT__b)) 
                                                                      | ((6U 
                                                                          == (IData)(vlSelfRef.top__DOT__ins_seg5__DOT__b)) 
                                                                         | ((5U 
                                                                             == (IData)(vlSelfRef.top__DOT__ins_seg5__DOT__b)) 
                                                                            | ((4U 
                                                                                == (IData)(vlSelfRef.top__DOT__ins_seg5__DOT__b)) 
                                                                               | ((3U 
                                                                                == (IData)(vlSelfRef.top__DOT__ins_seg5__DOT__b)) 
                                                                                | ((2U 
                                                                                == (IData)(vlSelfRef.top__DOT__ins_seg5__DOT__b)) 
                                                                                | ((0U 
                                                                                == (IData)(vlSelfRef.top__DOT__ins_seg5__DOT__b)) 
                                                                                | (1U 
                                                                                == (IData)(vlSelfRef.top__DOT__ins_seg5__DOT__b))))))))))))))))))) 
                                  & (IData)(vlSelfRef.top__DOT__ins_seg5__DOT__i0__DOT__i0__DOT__lut_out))),8);
        bufp->chgCData(oldp+498,(vlSelfRef.top__DOT__ins_seg5__DOT__i0__DOT__i0__DOT__lut_out),8);
        bufp->chgBit(oldp+499,(((0x0fU == (IData)(vlSelfRef.top__DOT__ins_seg5__DOT__b)) 
                                | ((0x0eU == (IData)(vlSelfRef.top__DOT__ins_seg5__DOT__b)) 
                                   | ((0x0dU == (IData)(vlSelfRef.top__DOT__ins_seg5__DOT__b)) 
                                      | ((0x0cU == (IData)(vlSelfRef.top__DOT__ins_seg5__DOT__b)) 
                                         | ((0x0bU 
                                             == (IData)(vlSelfRef.top__DOT__ins_seg5__DOT__b)) 
                                            | ((0x0aU 
                                                == (IData)(vlSelfRef.top__DOT__ins_seg5__DOT__b)) 
                                               | ((9U 
                                                   == (IData)(vlSelfRef.top__DOT__ins_seg5__DOT__b)) 
                                                  | ((8U 
                                                      == (IData)(vlSelfRef.top__DOT__ins_seg5__DOT__b)) 
                                                     | ((7U 
                                                         == (IData)(vlSelfRef.top__DOT__ins_seg5__DOT__b)) 
                                                        | ((6U 
                                                            == (IData)(vlSelfRef.top__DOT__ins_seg5__DOT__b)) 
                                                           | ((5U 
                                                               == (IData)(vlSelfRef.top__DOT__ins_seg5__DOT__b)) 
                                                              | ((4U 
                                                                  == (IData)(vlSelfRef.top__DOT__ins_seg5__DOT__b)) 
                                                                 | ((3U 
                                                                     == (IData)(vlSelfRef.top__DOT__ins_seg5__DOT__b)) 
                                                                    | ((2U 
                                                                        == (IData)(vlSelfRef.top__DOT__ins_seg5__DOT__b)) 
                                                                       | ((0U 
                                                                           == (IData)(vlSelfRef.top__DOT__ins_seg5__DOT__b)) 
                                                                          | (1U 
                                                                             == (IData)(vlSelfRef.top__DOT__ins_seg5__DOT__b)))))))))))))))))));
        bufp->chgCData(oldp+500,((0x0000000fU & VL_MODDIV_III(32, (IData)(vlSelfRef.top__DOT__PC), (IData)(0x0000000aU)))),4);
        bufp->chgBit(oldp+501,((1U & (VL_MODDIV_III(32, (IData)(vlSelfRef.top__DOT__PC), (IData)(0x0000000aU)) 
                                      >> 3U))));
        bufp->chgBit(oldp+502,((1U & (VL_MODDIV_III(32, (IData)(vlSelfRef.top__DOT__PC), (IData)(0x0000000aU)) 
                                      >> 2U))));
        bufp->chgBit(oldp+503,((1U & (VL_MODDIV_III(32, (IData)(vlSelfRef.top__DOT__PC), (IData)(0x0000000aU)) 
                                      >> 1U))));
        bufp->chgBit(oldp+504,((1U & VL_MODDIV_III(32, (IData)(vlSelfRef.top__DOT__PC), (IData)(0x0000000aU)))));
        bufp->chgCData(oldp+505,(((- (IData)((IData)(vlSelfRef.top__DOT__ins_seg6__DOT__i0__DOT__i0__DOT__hit))) 
                                  & (IData)(vlSelfRef.top__DOT__ins_seg6__DOT__i0__DOT__i0__DOT__lut_out))),8);
        bufp->chgCData(oldp+506,(vlSelfRef.top__DOT__ins_seg6__DOT__i0__DOT__i0__DOT__lut_out),8);
        bufp->chgBit(oldp+507,(vlSelfRef.top__DOT__ins_seg6__DOT__i0__DOT__i0__DOT__hit));
        bufp->chgCData(oldp+508,((0x0000000fU & VL_MODDIV_III(32, 
                                                              VL_DIV_III(32, (IData)(vlSelfRef.top__DOT__PC), (IData)(0x0000000aU)), (IData)(0x0000000aU)))),4);
        bufp->chgBit(oldp+509,((1U & (VL_MODDIV_III(32, 
                                                    VL_DIV_III(32, (IData)(vlSelfRef.top__DOT__PC), (IData)(0x0000000aU)), (IData)(0x0000000aU)) 
                                      >> 3U))));
        bufp->chgBit(oldp+510,((1U & (VL_MODDIV_III(32, 
                                                    VL_DIV_III(32, (IData)(vlSelfRef.top__DOT__PC), (IData)(0x0000000aU)), (IData)(0x0000000aU)) 
                                      >> 2U))));
        bufp->chgBit(oldp+511,((1U & (VL_MODDIV_III(32, 
                                                    VL_DIV_III(32, (IData)(vlSelfRef.top__DOT__PC), (IData)(0x0000000aU)), (IData)(0x0000000aU)) 
                                      >> 1U))));
        bufp->chgBit(oldp+512,((1U & VL_MODDIV_III(32, 
                                                   VL_DIV_III(32, (IData)(vlSelfRef.top__DOT__PC), (IData)(0x0000000aU)), (IData)(0x0000000aU)))));
        bufp->chgCData(oldp+513,(((- (IData)((IData)(vlSelfRef.top__DOT__ins_seg7__DOT__i0__DOT__i0__DOT__hit))) 
                                  & (IData)(vlSelfRef.top__DOT__ins_seg7__DOT__i0__DOT__i0__DOT__lut_out))),8);
        bufp->chgCData(oldp+514,(vlSelfRef.top__DOT__ins_seg7__DOT__i0__DOT__i0__DOT__lut_out),8);
        bufp->chgBit(oldp+515,(vlSelfRef.top__DOT__ins_seg7__DOT__i0__DOT__i0__DOT__hit));
        bufp->chgCData(oldp+516,(vlSelfRef.top__DOT____Vcellout__r_btn0____pinNumber4),5);
        bufp->chgCData(oldp+517,(vlSelfRef.top__DOT____Vcellout__r_btn1____pinNumber4),5);
        bufp->chgCData(oldp+518,(vlSelfRef.top__DOT____Vcellout__r_btn2____pinNumber4),5);
        bufp->chgCData(oldp+519,(vlSelfRef.top__DOT____Vcellout__r_btn3____pinNumber4),5);
        bufp->chgCData(oldp+520,(vlSelfRef.top__DOT____Vcellout__r_btn4____pinNumber4),5);
    }
    bufp->chgBit(oldp+521,(vlSelfRef.clk));
    bufp->chgBit(oldp+522,(vlSelfRef.rst));
    bufp->chgCData(oldp+523,(vlSelfRef.btn),5);
    bufp->chgSData(oldp+524,(vlSelfRef.sw),16);
    bufp->chgBit(oldp+525,(vlSelfRef.ps2_clk));
    bufp->chgBit(oldp+526,(vlSelfRef.ps2_data));
    bufp->chgBit(oldp+527,(vlSelfRef.uart_rx));
    bufp->chgBit(oldp+528,(vlSelfRef.uart_tx));
    bufp->chgSData(oldp+529,(vlSelfRef.ledr),16);
    bufp->chgBit(oldp+530,(vlSelfRef.VGA_CLK));
    bufp->chgBit(oldp+531,(vlSelfRef.VGA_HSYNC));
    bufp->chgBit(oldp+532,(vlSelfRef.VGA_VSYNC));
    bufp->chgBit(oldp+533,(vlSelfRef.VGA_BLANK_N));
    bufp->chgCData(oldp+534,(vlSelfRef.VGA_R),8);
    bufp->chgCData(oldp+535,(vlSelfRef.VGA_G),8);
    bufp->chgCData(oldp+536,(vlSelfRef.VGA_B),8);
    bufp->chgCData(oldp+537,(vlSelfRef.seg0),8);
    bufp->chgCData(oldp+538,(vlSelfRef.seg1),8);
    bufp->chgBit(oldp+539,(vlSelfRef.top__DOT__R_PC__DOT__rst));
    bufp->chgCData(oldp+540,(((~ (IData)(vlSelfRef.btn)) 
                              & (IData)(vlSelfRef.top__DOT____Vcellout__r_btn4____pinNumber4))),5);
    bufp->chgCData(oldp+541,((0x000000ffU & (((0U == (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1)) 
                                              & (IData)(vlSelfRef.top__DOT__io_in))
                                              ? (0x0000000fU 
                                                 & (IData)(vlSelfRef.sw))
                                              : ((2U 
                                                  == (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0))
                                                  ? 
                                                 ((IData)(vlSelfRef.top__DOT__rs2) 
                                                  << (IData)(vlSelfRef.top__DOT__rs1))
                                                  : (IData)(vlSelfRef.top__DOT__add_result))))),8);
    bufp->chgCData(oldp+542,(vlSelfRef.top__DOT__i_GPR__DOT__R0__DOT__din),8);
    bufp->chgCData(oldp+543,((0x0000000fU & (IData)(vlSelfRef.sw))),8);
    bufp->chgCData(oldp+544,((0x0000000fU & (IData)(vlSelfRef.btn))),8);
}

void Vtop___024root__trace_chg_dtype____0(Vtop___024root* vlSelf, VerilatedFst::Buffer* bufp, uint32_t offset, const VlUnpacked<CData/*1:0*/, 4>& __VdtypeVar) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_chg_dtype____0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode +  offset);
    bufp->chgCData(oldp+0,(__VdtypeVar[3]),2);
    bufp->chgCData(oldp+1,(__VdtypeVar[2]),2);
    bufp->chgCData(oldp+2,(__VdtypeVar[1]),2);
    bufp->chgCData(oldp+3,(__VdtypeVar[0]),2);
}

void Vtop___024root__trace_chg_dtype____1(Vtop___024root* vlSelf, VerilatedFst::Buffer* bufp, uint32_t offset, const VlUnpacked<SData/*11:0*/, 16>& __VdtypeVar) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_chg_dtype____1\n"); );
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

void Vtop___024root__trace_chg_dtype____2(Vtop___024root* vlSelf, VerilatedFst::Buffer* bufp, uint32_t offset, const VlUnpacked<CData/*3:0*/, 16>& __VdtypeVar) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_chg_dtype____2\n"); );
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

void Vtop___024root__trace_chg_dtype____3(Vtop___024root* vlSelf, VerilatedFst::Buffer* bufp, uint32_t offset, const VlUnpacked<CData/*7:0*/, 16>& __VdtypeVar) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_chg_dtype____3\n"); );
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
