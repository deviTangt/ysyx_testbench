// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtop.h for the primary calling header

#ifndef VERILATED_VTOP___024ROOT_H_
#define VERILATED_VTOP___024ROOT_H_  // guard

#include "verilated.h"


class Vtop__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtop___024root final {
  public:

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(clk,0,0);
        VL_IN8(rst,0,0);
        VL_IN8(btn,4,0);
        VL_IN8(ps2_clk,0,0);
        VL_IN8(ps2_data,0,0);
        VL_IN8(uart_rx,0,0);
        VL_OUT8(uart_tx,0,0);
        VL_OUT8(VGA_CLK,0,0);
        VL_OUT8(VGA_HSYNC,0,0);
        VL_OUT8(VGA_VSYNC,0,0);
        VL_OUT8(VGA_BLANK_N,0,0);
        VL_OUT8(VGA_R,7,0);
        VL_OUT8(VGA_G,7,0);
        VL_OUT8(VGA_B,7,0);
        VL_OUT8(seg0,7,0);
        VL_OUT8(seg1,7,0);
        VL_OUT8(seg2,7,0);
        VL_OUT8(seg3,7,0);
        VL_OUT8(seg4,7,0);
        VL_OUT8(seg5,7,0);
        VL_OUT8(seg6,7,0);
        VL_OUT8(seg7,7,0);
        CData/*4:0*/ top__DOT____Vcellout__r_btn0____pinNumber4;
        CData/*4:0*/ top__DOT____Vcellout__r_btn1____pinNumber4;
        CData/*4:0*/ top__DOT____Vcellout__r_btn2____pinNumber4;
        CData/*4:0*/ top__DOT____Vcellout__r_btn3____pinNumber4;
        CData/*4:0*/ top__DOT____Vcellout__r_btn4____pinNumber4;
        CData/*7:0*/ top__DOT__PC;
        CData/*1:0*/ top__DOT__rs1;
        CData/*1:0*/ top__DOT__rs2;
        CData/*0:0*/ top__DOT__io_out;
        CData/*0:0*/ top__DOT__io_in;
        CData/*7:0*/ top__DOT__add_result;
        CData/*7:0*/ top__DOT__io_led_r;
        CData/*7:0*/ top__DOT__io_seg_r;
        CData/*1:0*/ top__DOT__i_GPR__DOT__raddra;
        CData/*1:0*/ top__DOT__i_GPR__DOT__raddrb;
        CData/*1:0*/ top__DOT__i_GPR__DOT__waddr;
        CData/*0:0*/ top__DOT__i_GPR__DOT__wen;
        CData/*7:0*/ top__DOT__i_GPR__DOT__douta;
        CData/*7:0*/ top__DOT__i_GPR__DOT____Vcellout__R3____pinNumber4;
        CData/*7:0*/ top__DOT__i_GPR__DOT____Vcellout__R2____pinNumber4;
        CData/*7:0*/ top__DOT__i_GPR__DOT____Vcellout__R1____pinNumber4;
        CData/*7:0*/ top__DOT__i_GPR__DOT____Vcellout__R0____pinNumber4;
        CData/*7:0*/ top__DOT__i_GPR__DOT__R0__DOT__din;
        CData/*3:0*/ top__DOT__ins_seg4__DOT__b;
        CData/*7:0*/ top__DOT__ins_seg4__DOT__i0__DOT__i0__DOT__lut_out;
        CData/*3:0*/ top__DOT__ins_seg5__DOT__b;
        CData/*7:0*/ top__DOT__ins_seg5__DOT__i0__DOT__i0__DOT__lut_out;
        CData/*7:0*/ top__DOT__ins_seg6__DOT__i0__DOT__i0__DOT__lut_out;
        CData/*0:0*/ top__DOT__ins_seg6__DOT__i0__DOT__i0__DOT__hit;
        CData/*7:0*/ top__DOT__ins_seg7__DOT__i0__DOT__i0__DOT__lut_out;
        CData/*0:0*/ top__DOT__ins_seg7__DOT__i0__DOT__i0__DOT__hit;
        CData/*7:0*/ top__DOT__ins_seg0__DOT__i0__DOT__i0__DOT__lut_out;
        CData/*0:0*/ top__DOT__ins_seg0__DOT__i0__DOT__i0__DOT__hit;
        CData/*7:0*/ top__DOT__ins_seg1__DOT__i0__DOT__i0__DOT__lut_out;
        CData/*0:0*/ top__DOT__ins_seg1__DOT__i0__DOT__i0__DOT__hit;
        CData/*7:0*/ top__DOT__R_led__DOT__din;
        CData/*0:0*/ top__DOT__R_PC__DOT__rst;
        CData/*7:0*/ top__DOT__R_PC__DOT__din;
        CData/*1:0*/ __VdfgRegularize_h6e95ff9d_0_0;
        CData/*2:0*/ __VdfgRegularize_h6e95ff9d_0_1;
        CData/*3:0*/ __VdfgRegularize_h6e95ff9d_0_6;
        CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_7;
    };
    struct {
        CData/*0:0*/ __VstlFirstIteration;
        CData/*0:0*/ __VstlPhaseResult;
        CData/*0:0*/ __Vtrigprevexpr___TOP__clk__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__rst__0;
        CData/*4:0*/ __Vtrigprevexpr___TOP__btn__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__ps2_clk__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__ps2_data__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__uart_rx__0;
        CData/*0:0*/ __VicoDidInit;
        CData/*0:0*/ __VicoPhaseResult;
        CData/*0:0*/ __Vtrigprevexpr___TOP__clk__1;
        CData/*0:0*/ __VactPhaseResult;
        CData/*0:0*/ __VnbaPhaseResult;
        VL_IN16(sw,15,0);
        VL_OUT16(ledr,15,0);
        SData/*15:0*/ __Vtrigprevexpr___TOP__sw__0;
        IData/*31:0*/ __VactIterCount;
        QData/*39:0*/ top__DOT__i_GPR__DOT__sel_a__DOT__i0__DOT__lut;
        VlUnpacked<CData/*4:0*/, 5> top__DOT__btn_p;
        VlUnpacked<CData/*7:0*/, 256> top__DOT__rom_PC;
        VlUnpacked<CData/*7:0*/, 4> top__DOT__i_GPR__DOT__GPR;
        VlUnpacked<SData/*9:0*/, 4> top__DOT__i_GPR__DOT__sel_b__DOT__i0__DOT__pair_list;
        VlUnpacked<CData/*1:0*/, 4> top__DOT__i_GPR__DOT__sel_b__DOT__i0__DOT__key_list;
        VlUnpacked<CData/*7:0*/, 4> top__DOT__i_GPR__DOT__sel_b__DOT__i0__DOT__data_list;
        VlUnpacked<SData/*9:0*/, 4> top__DOT__i_GPR__DOT__sel_a__DOT__i0__DOT__pair_list;
        VlUnpacked<CData/*1:0*/, 4> top__DOT__i_GPR__DOT__sel_a__DOT__i0__DOT__key_list;
        VlUnpacked<CData/*7:0*/, 4> top__DOT__i_GPR__DOT__sel_a__DOT__i0__DOT__data_list;
        VlUnpacked<SData/*11:0*/, 16> top__DOT__ins_seg2__DOT__i0__DOT__i0__DOT__pair_list;
        VlUnpacked<CData/*3:0*/, 16> top__DOT__ins_seg2__DOT__i0__DOT__i0__DOT__key_list;
        VlUnpacked<CData/*7:0*/, 16> top__DOT__ins_seg2__DOT__i0__DOT__i0__DOT__data_list;
        VlUnpacked<SData/*11:0*/, 16> top__DOT__ins_seg3__DOT__i0__DOT__i0__DOT__pair_list;
        VlUnpacked<CData/*3:0*/, 16> top__DOT__ins_seg3__DOT__i0__DOT__i0__DOT__key_list;
        VlUnpacked<CData/*7:0*/, 16> top__DOT__ins_seg3__DOT__i0__DOT__i0__DOT__data_list;
        VlUnpacked<SData/*11:0*/, 16> top__DOT__ins_seg4__DOT__i0__DOT__i0__DOT__pair_list;
        VlUnpacked<CData/*3:0*/, 16> top__DOT__ins_seg4__DOT__i0__DOT__i0__DOT__key_list;
        VlUnpacked<CData/*7:0*/, 16> top__DOT__ins_seg4__DOT__i0__DOT__i0__DOT__data_list;
        VlUnpacked<SData/*11:0*/, 16> top__DOT__ins_seg5__DOT__i0__DOT__i0__DOT__pair_list;
        VlUnpacked<CData/*3:0*/, 16> top__DOT__ins_seg5__DOT__i0__DOT__i0__DOT__key_list;
        VlUnpacked<CData/*7:0*/, 16> top__DOT__ins_seg5__DOT__i0__DOT__i0__DOT__data_list;
        VlUnpacked<SData/*11:0*/, 16> top__DOT__ins_seg6__DOT__i0__DOT__i0__DOT__pair_list;
        VlUnpacked<CData/*3:0*/, 16> top__DOT__ins_seg6__DOT__i0__DOT__i0__DOT__key_list;
        VlUnpacked<CData/*7:0*/, 16> top__DOT__ins_seg6__DOT__i0__DOT__i0__DOT__data_list;
        VlUnpacked<SData/*11:0*/, 16> top__DOT__ins_seg7__DOT__i0__DOT__i0__DOT__pair_list;
        VlUnpacked<CData/*3:0*/, 16> top__DOT__ins_seg7__DOT__i0__DOT__i0__DOT__key_list;
        VlUnpacked<CData/*7:0*/, 16> top__DOT__ins_seg7__DOT__i0__DOT__i0__DOT__data_list;
        VlUnpacked<SData/*11:0*/, 16> top__DOT__ins_seg0__DOT__i0__DOT__i0__DOT__pair_list;
        VlUnpacked<CData/*3:0*/, 16> top__DOT__ins_seg0__DOT__i0__DOT__i0__DOT__key_list;
        VlUnpacked<CData/*7:0*/, 16> top__DOT__ins_seg0__DOT__i0__DOT__i0__DOT__data_list;
        VlUnpacked<SData/*11:0*/, 16> top__DOT__ins_seg1__DOT__i0__DOT__i0__DOT__pair_list;
        VlUnpacked<CData/*3:0*/, 16> top__DOT__ins_seg1__DOT__i0__DOT__i0__DOT__key_list;
        VlUnpacked<CData/*7:0*/, 16> top__DOT__ins_seg1__DOT__i0__DOT__i0__DOT__data_list;
        VlUnpacked<QData/*63:0*/, 1> __VstlTriggered;
        VlUnpacked<QData/*63:0*/, 2> __VicoTriggered;
        VlUnpacked<QData/*63:0*/, 1> __VactTriggered;
        VlUnpacked<QData/*63:0*/, 1> __VnbaTriggered;
        VlUnpacked<CData/*0:0*/, 2> __Vm_traceActivity;
    };

    // INTERNAL VARIABLES
    Vtop__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vtop___024root(Vtop__Syms* symsp, const char* namep);
    ~Vtop___024root();
    VL_UNCOPYABLE(Vtop___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
