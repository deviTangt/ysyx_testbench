module top(
    input clk,
    input rst,
    input [4:0] btn,
    input [7:0] sw,
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

reg [15 : 0] led_buf;
assign ledr = led_buf;

reg [23 : 0] cnt_clk;
localparam CNT_CLK_MAX = 24'd1_000_000;
always@(posedge clk or posedge rst) begin
    if (rst)
        cnt_clk <= 'b0;
    else if (cnt_clk == CNT_CLK_MAX - 'd1)
        cnt_clk <= 'b0;
    else   
        cnt_clk <= cnt_clk + 'd1;
end

always@(posedge clk or posedge rst) begin
    if (rst)
        led_buf <= 16'b1;
    else if (cnt_clk == CNT_CLK_MAX - 'd1)
        led_buf <= {led_buf[14 : 0], led_buf[15]};
    else   
        led_buf <= led_buf;
end
 
endmodule
