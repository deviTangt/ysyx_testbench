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

wire en_encoder_prio = sw[8];
wire [7:0] encoder_in = sw[7:0]; 

wire [2:0] encoder_out;
wire [2:0] encoder_out_buf;
reg indicator_out;
assign encoder_out = {3{en_encoder_prio}} & encoder_out_buf;
assign ledr[2:0] = encoder_out;
assign ledr[4] = indicator_out;

assign indicator_out = (encoder_in != 0);

assign encoder_out_buf[2] = (encoder_in[7:4] != 0);
assign encoder_out_buf[1] = (encoder_in[7]) | (encoder_in[7 : 6] == 2'b01) | 
                            (encoder_in[7:3] == 5'b0000_1) | (encoder_in[7:2] == 6'b0000_01);
assign encoder_out_buf[0] = (encoder_in[7] == 1'b1) | (encoder_in[7:5] == 3'b001) |
                            (encoder_in[7:3] == 5'b0000_1) | (encoder_in[7:1] == 7'b0000_001);
 
//output debuginfo to bcd
// bcd7seg seg5(cpudbgdata[23:20], seg5);
// bcd7seg seg4(cpudbgdata[19:16], seg4);
// bcd7seg seg3(cpudbgdata[15:12], seg3);
// bcd7seg seg2(cpudbgdata[11:8], seg2);
// bcd7seg seg1(cpudbgdata[7:4], seg1);
bcd7seg ins_seg0(.b({1'b0, encoder_out}), .h(seg0));

endmodule
