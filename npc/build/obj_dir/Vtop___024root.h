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
        CData/*0:0*/ top__DOT__mem_wen;
        CData/*7:0*/ top__DOT__mem_dout_byte8;
        CData/*0:0*/ top__DOT__op_lw;
        CData/*0:0*/ top__DOT__op_lbu;
        CData/*0:0*/ top__DOT__op_sw;
        CData/*0:0*/ top__DOT__op_sb;
        CData/*0:0*/ top__DOT__i_GPR__DOT__wen;
        CData/*7:0*/ top__DOT__ins_seg6__DOT__i0__DOT__i0__DOT__lut_out;
        CData/*0:0*/ top__DOT__ins_seg6__DOT__i0__DOT__i0__DOT__hit;
        CData/*7:0*/ top__DOT__ins_seg7__DOT__i0__DOT__i0__DOT__lut_out;
        CData/*0:0*/ top__DOT__ins_seg7__DOT__i0__DOT__i0__DOT__hit;
        CData/*0:0*/ top__DOT__R_PC__DOT__rst;
        CData/*7:0*/ __VdfgRegularize_h6e95ff9d_0_2;
        CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_3;
        CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_4;
        CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_5;
        CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_7;
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
        CData/*0:0*/ __Vtrigprevexpr___TOP__top__DOT__R_PC__DOT__rst__0;
        CData/*0:0*/ __VactPhaseResult;
        CData/*0:0*/ __VnbaPhaseResult;
        VL_IN16(sw,15,0);
        VL_OUT16(ledr,15,0);
        VL_OUT16(PC_N_o,15,0);
        SData/*15:0*/ __Vtrigprevexpr___TOP__sw__0;
        VL_IN(instruct,31,0);
        IData/*17:0*/ top__DOT__PC;
    };
    struct {
        IData/*31:0*/ top__DOT__mem_addr;
        IData/*31:0*/ top__DOT__mem_din;
        IData/*31:0*/ top__DOT__mem_dout;
        IData/*31:0*/ top__DOT__mem_out_val;
        IData/*31:0*/ top__DOT__imm_ext_32b_s;
        IData/*23:0*/ top__DOT__cnt_clk;
        IData/*31:0*/ top__DOT__i_GPR__DOT____Vcellout__foor_loop_i__BRA__0__KET____DOT__R____pinNumber4;
        IData/*31:0*/ top__DOT__i_GPR__DOT____Vcellout__foor_loop_i__BRA__1__KET____DOT__R____pinNumber4;
        IData/*31:0*/ top__DOT__i_GPR__DOT____Vcellout__foor_loop_i__BRA__2__KET____DOT__R____pinNumber4;
        IData/*31:0*/ top__DOT__i_GPR__DOT____Vcellout__foor_loop_i__BRA__3__KET____DOT__R____pinNumber4;
        IData/*31:0*/ top__DOT__i_GPR__DOT____Vcellout__foor_loop_i__BRA__4__KET____DOT__R____pinNumber4;
        IData/*31:0*/ top__DOT__i_GPR__DOT____Vcellout__foor_loop_i__BRA__5__KET____DOT__R____pinNumber4;
        IData/*31:0*/ top__DOT__i_GPR__DOT____Vcellout__foor_loop_i__BRA__6__KET____DOT__R____pinNumber4;
        IData/*31:0*/ top__DOT__i_GPR__DOT____Vcellout__foor_loop_i__BRA__7__KET____DOT__R____pinNumber4;
        IData/*31:0*/ top__DOT__i_GPR__DOT____Vcellout__foor_loop_i__BRA__8__KET____DOT__R____pinNumber4;
        IData/*31:0*/ top__DOT__i_GPR__DOT____Vcellout__foor_loop_i__BRA__9__KET____DOT__R____pinNumber4;
        IData/*31:0*/ top__DOT__i_GPR__DOT____Vcellout__foor_loop_i__BRA__10__KET____DOT__R____pinNumber4;
        IData/*31:0*/ top__DOT__i_GPR__DOT____Vcellout__foor_loop_i__BRA__11__KET____DOT__R____pinNumber4;
        IData/*31:0*/ top__DOT__i_GPR__DOT____Vcellout__foor_loop_i__BRA__12__KET____DOT__R____pinNumber4;
        IData/*31:0*/ top__DOT__i_GPR__DOT____Vcellout__foor_loop_i__BRA__13__KET____DOT__R____pinNumber4;
        IData/*31:0*/ top__DOT__i_GPR__DOT____Vcellout__foor_loop_i__BRA__14__KET____DOT__R____pinNumber4;
        IData/*31:0*/ top__DOT__i_GPR__DOT____Vcellout__foor_loop_i__BRA__15__KET____DOT__R____pinNumber4;
        IData/*31:0*/ top__DOT__i_GPR__DOT____Vcellout__foor_loop_i__BRA__16__KET____DOT__R____pinNumber4;
        IData/*31:0*/ top__DOT__i_GPR__DOT____Vcellout__foor_loop_i__BRA__17__KET____DOT__R____pinNumber4;
        IData/*31:0*/ top__DOT__i_GPR__DOT____Vcellout__foor_loop_i__BRA__18__KET____DOT__R____pinNumber4;
        IData/*31:0*/ top__DOT__i_GPR__DOT____Vcellout__foor_loop_i__BRA__19__KET____DOT__R____pinNumber4;
        IData/*31:0*/ top__DOT__i_GPR__DOT____Vcellout__foor_loop_i__BRA__20__KET____DOT__R____pinNumber4;
        IData/*31:0*/ top__DOT__i_GPR__DOT____Vcellout__foor_loop_i__BRA__21__KET____DOT__R____pinNumber4;
        IData/*31:0*/ top__DOT__i_GPR__DOT____Vcellout__foor_loop_i__BRA__22__KET____DOT__R____pinNumber4;
        IData/*31:0*/ top__DOT__i_GPR__DOT____Vcellout__foor_loop_i__BRA__23__KET____DOT__R____pinNumber4;
        IData/*31:0*/ top__DOT__i_GPR__DOT____Vcellout__foor_loop_i__BRA__24__KET____DOT__R____pinNumber4;
        IData/*31:0*/ top__DOT__i_GPR__DOT____Vcellout__foor_loop_i__BRA__25__KET____DOT__R____pinNumber4;
        IData/*31:0*/ top__DOT__i_GPR__DOT____Vcellout__foor_loop_i__BRA__26__KET____DOT__R____pinNumber4;
        IData/*31:0*/ top__DOT__i_GPR__DOT____Vcellout__foor_loop_i__BRA__27__KET____DOT__R____pinNumber4;
        IData/*31:0*/ top__DOT__i_GPR__DOT____Vcellout__foor_loop_i__BRA__28__KET____DOT__R____pinNumber4;
        IData/*31:0*/ top__DOT__i_GPR__DOT____Vcellout__foor_loop_i__BRA__29__KET____DOT__R____pinNumber4;
        IData/*31:0*/ top__DOT__i_GPR__DOT____Vcellout__foor_loop_i__BRA__30__KET____DOT__R____pinNumber4;
        IData/*31:0*/ top__DOT__i_GPR__DOT____Vcellout__foor_loop_i__BRA__31__KET____DOT__R____pinNumber4;
        IData/*31:0*/ top__DOT__i_GPR__DOT__foor_loop_i__BRA__0__KET____DOT__R__DOT__din;
        IData/*17:0*/ top__DOT__R_PC__DOT__din;
        IData/*31:0*/ __Vfunc_top__DOT__pmem_read__0__Vfuncout;
        IData/*31:0*/ __Vtrigprevexpr___TOP__instruct__0;
        IData/*31:0*/ __VactIterCount;
        VlUnpacked<CData/*4:0*/, 5> top__DOT__btn_p;
        VlUnpacked<IData/*31:0*/, 32> top__DOT__i_GPR__DOT__GPR;
        VlUnpacked<SData/*11:0*/, 16> top__DOT__ins_seg0__DOT__i0__DOT__i0__DOT__pair_list;
        VlUnpacked<CData/*3:0*/, 16> top__DOT__ins_seg0__DOT__i0__DOT__i0__DOT__key_list;
        VlUnpacked<CData/*7:0*/, 16> top__DOT__ins_seg0__DOT__i0__DOT__i0__DOT__data_list;
        VlUnpacked<SData/*11:0*/, 16> top__DOT__ins_seg1__DOT__i0__DOT__i0__DOT__pair_list;
        VlUnpacked<CData/*3:0*/, 16> top__DOT__ins_seg1__DOT__i0__DOT__i0__DOT__key_list;
        VlUnpacked<CData/*7:0*/, 16> top__DOT__ins_seg1__DOT__i0__DOT__i0__DOT__data_list;
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
    };
    struct {
        VlUnpacked<CData/*3:0*/, 16> top__DOT__ins_seg6__DOT__i0__DOT__i0__DOT__key_list;
        VlUnpacked<CData/*7:0*/, 16> top__DOT__ins_seg6__DOT__i0__DOT__i0__DOT__data_list;
        VlUnpacked<SData/*11:0*/, 16> top__DOT__ins_seg7__DOT__i0__DOT__i0__DOT__pair_list;
        VlUnpacked<CData/*3:0*/, 16> top__DOT__ins_seg7__DOT__i0__DOT__i0__DOT__key_list;
        VlUnpacked<CData/*7:0*/, 16> top__DOT__ins_seg7__DOT__i0__DOT__i0__DOT__data_list;
        VlUnpacked<QData/*63:0*/, 1> __VstlTriggered;
        VlUnpacked<QData/*63:0*/, 2> __VicoTriggered;
        VlUnpacked<QData/*63:0*/, 1> __VactTriggered;
        VlUnpacked<QData/*63:0*/, 1> __VnbaTriggered;
        VlUnpacked<CData/*0:0*/, 3> __Vm_traceActivity;
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
