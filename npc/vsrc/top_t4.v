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

reg [7:0] lfsr;
wire [7:0] lfsr_n; 
assign lfsr_n[6:0] = lfsr[7:1];
assign lfsr_n[7] = lfsr[4] ^ lfsr[3] ^ lfsr[2] ^ lfsr[0];
Reg #(8, 8'h01) r0 (btn_pos[0], rst, lfsr_n, lfsr, 1'b1);

reg [7:0] led_buf;
Reg #(8, 8'd1) r1 (clk, rst, led_buf + 8'd1, led_buf, btn_pos[0]);
assign ledr[7:0] = led_buf; 

//output debuginfo to bcd
// bcd7seg_AF ins_seg7(.b(4'd14), .h(seg7));
// bcd7seg_AF ins_seg6(.b(4'd14), .h(seg6));
// bcd7seg_AF ins_seg5(.b(4'd14), .h(seg5));
// bcd7seg_AF ins_seg4(.b(4'd14), .h(seg4));
// bcd7seg_AF ins_seg3(.b(4'd14), .h(seg3));
// bcd7seg_AF ins_seg2(.b(4'd14), .h(seg2));
assign seg7 = 8'hff;
assign seg6 = 8'hff;
assign seg5 = 8'hff;
assign seg4 = 8'hff;
assign seg3 = 8'hff;
assign seg2 = 8'hff;
bcd7seg_AF ins_seg1(.b(lfsr[7:4]), .h(seg1));
bcd7seg_AF ins_seg0(.b(lfsr[3:0]), .h(seg0));

endmodule
