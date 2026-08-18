module top(
    input clk,
    input rst,
    input [4:0] btn,
    input [15:0] sw,
    input ps2_clk,
    input ps2_data,
    input uart_rx,
    output uart_tx,
    output [15:0] ledr,
    output VGA_CLK,
    output VGA_HSYNC,
    output VGA_VSYNC,
    output VGA_BLANK_N,
    output [7:0] VGA_R,
    output [7:0] VGA_G,
    output [7:0] VGA_B,
    output [7:0] seg0,
    output [7:0] seg1,
    output [7:0] seg2,
    output [7:0] seg3,
    output [7:0] seg4,
    output [7:0] seg5,
    output [7:0] seg6,
    output [7:0] seg7

);

wire en_encoder_prio = sw[8];
wire [7 : 0] encoder_in = sw[7 : 0]; 

reg [2 : 0] encoder_out;
wire [2 : 0] encoder_out_buf;
reg indicator_out;
assign encoder_out = {3{en_encoder_prio}} & encoder_out_buf;
assign ledr[2 : 0] = encoder_out;
assign ledr[4] = indicator_out;

assign indicator_out = (encoder_in != 0);

assign encoder_out_buf[2] = (encoder_in[7 : 4] != 0);
assign encoder_out_buf[1] = (encoder_in[7 : 6] == 2'b01) | (encoder_in[7 : 2] == 6'b0000_01);
assign encoder_out_buf[0] = (encoder_in[7] == 1'b1) | (encoder_in[7 : 5] == 3'b001) |
                            (encoder_in[7 : 3] == 5'b0000_1) | (encoder_in[7 : 1] == 7'b0000_001);
 
endmodule
