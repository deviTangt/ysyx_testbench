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

//640x480分辨率下的VGA参数设置
parameter    h_frontporch = 96;
parameter    h_active = 144;
parameter    h_backporch = 784;
parameter    h_total = 800;

parameter    v_frontporch = 2;
parameter    v_active = 35;
parameter    v_backporch = 515;
parameter    v_total = 525;

assign VGA_CLK = clk;
reg [9:0] hc, vc;
wire [9:0] px, py;

wire [9:0] hc_next = (hc == h_total) ? 0 : (hc + 'd1);
wire [9:0] vc_next = (hc == h_total && vc == v_total) ? 0 : 
                         (hc == h_total) ? vc + 'd1 : vc;
Reg #(10, 10'd0) r0(clk, rst, hc_next, hc, 1'b1);
Reg #(10, 10'd0) r1(clk, rst, vc_next, vc, 1'b1);

assign VGA_HSYNC = (h_frontporch < hc);
assign VGA_VSYNC = (v_frontporch < hc);
assign VGA_BLANK_N = 1'b0;

wire px_valid = (h_active <= hc) && (hc < h_backporch);
wire py_valid = (v_active <= vc) && (vc < v_backporch);
wire pxy_valid = px_valid & py_valid;
assign px = hc - h_active;
assign py = vc - v_active;

wire [18:0] rgb_addr = py * 640 + {9'd0, px};
reg [23:0] vga_mem [524287:0];
assign {VGA_R, VGA_G, VGA_B} = pxy_valid ? vga_mem[rgb_addr] : 24'd0;

initial begin
    $readmemh("resource/picture.hex", vga_mem);
end


//output debuginfo to bcd
bcd7seg_AF ins_seg7(.b(4'd0), .h(seg7), .en(1'b1));
bcd7seg_AF ins_seg6(.b({4{pxy_valid}}), .h(seg6), .en(1'b1));
bcd7seg_AF ins_seg5(.b({2'd0, vc[9:8]}), .h(seg5), .en(| hc[9:8]));
bcd7seg_AF ins_seg4(.b(vc[7:4]), .h(seg4), .en(| vc[7:4]));
bcd7seg_AF ins_seg3(.b(vc[3:0]), .h(seg3), .en(| vc[3:0]));
bcd7seg_AF ins_seg2(.b({2'd0, hc[9:8]}), .h(seg2), .en(| hc[9:8]));
bcd7seg_AF ins_seg1(.b(hc[7:4]), .h(seg1), .en(| hc[7:4]));
bcd7seg_AF ins_seg0(.b(hc[3:0]), .h(seg0), .en(| hc[3:0]));

endmodule
