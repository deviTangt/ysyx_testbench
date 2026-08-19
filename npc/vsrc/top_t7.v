module top(
    input  wire         clk,
    input  wire         rst,

    input  wire [4:0]   btn,
    input  wire [15:0]  sw,

    input  wire         ps2_clk,
    input  wire         ps2_data,

    input  wire         uart_rx,
    output wire         uart_tx,

    output wire [15:0]  ledr,

    output wire         VGA_CLK,
    output wire         VGA_HSYNC,
    output wire         VGA_VSYNC,
    output wire         VGA_BLANK_N,
    output wire [7:0]   VGA_R,
    output wire [7:0]   VGA_G,
    output wire [7:0]   VGA_B,

    output wire [7:0]   seg0,
    output wire [7:0]   seg1,
    output wire [7:0]   seg2,
    output wire [7:0]   seg3,
    output wire [7:0]   seg4,
    output wire [7:0]   seg5,
    output wire [7:0]   seg6,
    output wire [7:0]   seg7

);

reg  [4:0] btn_p;
Reg #(5, 0) r_b (clk, rst, btn, btn_p, 1'b1);
wire [4:0] btn_pos = ~btn_p & btn;

reg [7:0] ps2_code;
wire [7:0] ps2_data_out;
wire ps2_data_valid;
wire ps2_ready_get_n;
wire ps2_of;
ps2_keyboard ps2(clk, ~(rst | btn_pos[4] | ps2_of), ps2_clk, ps2_data, ps2_data_out,
                    ps2_data_valid, ps2_ready_get_n, ps2_of);
Reg #(8, 8'h00) r0 (clk, rst, ps2_data_out, ps2_code, ps2_data_valid);
assign ps2_ready_get_n = 1'b0;


reg [7:0] ps2_code_pre;
reg [7:0] ps2_code_pre_p;
reg [7:0] ps2_cpde_pre_valid;
wire ps2_tick_off = (ps2_code_pre != 8'hf0) && (ps2_code_pre_p == 8'hf0);
wire ps2_diff = (ps2_code != 8'hf0) && (ps2_code_pre != 8'hf0) && (ps2_code != ps2_code_pre);

Reg #(8, 8'h00) r1 (clk, rst, ps2_code, ps2_code_pre, ps2_data_valid);
Reg #(8, 8'h00) rp (clk, rst, ps2_code_pre, ps2_code_pre_p, 1'b1);
Reg #(8, 8'h00) r2 (clk, rst, ps2_code_pre, ps2_cpde_pre_valid, ps2_diff);

reg [7:0] cnt_tick;
Reg #(8, 8'h00) r3 (clk, rst, cnt_tick + 8'd1, cnt_tick, ps2_tick_off);

//output debuginfo to bcd
bcd7seg_AF ins_seg7(.b(cnt_tick[7:4]), .h(seg7));
bcd7seg_AF ins_seg6(.b(cnt_tick[3:0]), .h(seg6));
bcd7seg_AF ins_seg5(.b(ps2_cpde_pre_valid[7:4]), .h(seg5));
bcd7seg_AF ins_seg4(.b(ps2_cpde_pre_valid[3:0]), .h(seg4));
bcd7seg_AF ins_seg3(.b(4'd0), .h(seg3));
bcd7seg_AF ins_seg2(.b(4'd0), .h(seg2));
bcd7seg_AF ins_seg1(.b(ps2_code[7:4]), .h(seg1));
bcd7seg_AF ins_seg0(.b(ps2_code[3:0]), .h(seg0));

endmodule
