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

////----------- Parameters ------------////
//? PC
reg [7:0] rom_PC [255:0];
reg [7:0] PC;
wire [7:0] next_PC;

//? RAM GPR
reg [7:0] ram_GPR [3:0];

wire [1:0] raddra, raddrb;
wire [7:0] douta, doutb;
wire [1:0] waddr;
wire wen;
wire [7:0] din_p1, din_p2, din;

//? Instrucions
wire [7:0] instrct;
wire [1:0] instruct_type;
wire type_add;
wire type_io;
wire type_li;
wire type_bner0;

wire [1:0] rs1, rs2, rd;
wire [1:0] imm, s;
wire [3:0] offset;
wire [2:0] idx;
wire i_o;
wire io_out, io_in;
wire out_led, out_seg;
wire in_sw, in_btn;

//? add
wire [7:0] add_result;

//? io
reg [7:0] io_led_r, io_seg_r;
wire [7:0] sw_in, btn_in;

//? li
wire [7:0] imm_8b;

//? bner0
wire [7:0] off_ext;
wire bne0;

////----------- Logic ------------////
//? PC
assign next_PC = (type_bner0 & bne0) ? PC + off_ext : PC + 8'd1;
Reg #(8, 8'd0) R_PC(clk, rst, next_PC, PC, 1'b1);

//? RAM GPR
ram_GPR i_GPR(
  .raddra(raddra),
  .raddrb(raddrb),
  .din(din),
  .waddr(waddr),
  .wen(wen),
  .clk(clk),
  .rst(rst),

  .douta(douta),
  .doutb(doutb)
);
assign din_p1 = type_li ? imm_8b : add_result;
assign din_p2 = in_sw ? sw_in : din_p1;
assign din = in_btn ? btn_in : din_p2;

//? Instrucions
assign instrct = rom_PC[PC];
assign instruct_type = instrct[7:6];
assign type_add   = instruct_type == 2'b00;
assign type_io    = instruct_type == 2'b01;
assign type_li    = instruct_type == 2'b10;
assign type_bner0 = instruct_type == 2'b11;

assign rd  = instrct[5:4];
assign rs1 = instrct[3:2];
assign rs2 = instrct[1:0];

assign s   = instrct[3:2];
assign imm = instrct[1:0];

assign offset = instrct[5:2];

assign i_o = instrct[3];
assign idx = instrct[2:0];
assign io_out = type_io & i_o;
assign io_in  = type_io & ~i_o;
assign out_led = idx == 3'b000 && io_out;
assign out_seg = idx == 3'b001 && io_out;
assign in_sw   = idx == 3'b000 && io_in;
assign in_btn  = idx == 3'b001 && io_in;

//? add
assign add_result = douta + doutb;

//? io
Reg #(8, 8'd0) R_led(clk, rst, doutb, io_led_r, out_led);
assign ledr[7:0] = io_led_r;

Reg #(8, 8'd0) R_seg(clk, rst, doutb, io_seg_r, out_seg);
// output debuginfo to bcd
bcd7seg_AF ins_seg7(.b(4'd0), .h(seg7), .en(1'b0));
bcd7seg_AF ins_seg6(.b(4'd0), .h(seg6), .en(1'b0));
bcd7seg_AF ins_seg5(.b(4'd0), .h(seg5), .en(1'd0));
bcd7seg_AF ins_seg4(.b(4'd0), .h(seg4), .en(1'd0));
bcd7seg_AF ins_seg3(.b(4'd0), .h(seg3), .en(1'd0));
bcd7seg_AF ins_seg2(.b(4'd0), .h(seg2), .en(1'd0));
bcd7seg_AF ins_seg1(.b(io_seg_r[7:4]), .h(seg1), .en(1'b1));
bcd7seg_AF ins_seg0(.b(io_seg_r[3:0]), .h(seg0), .en(1'b1));

assign sw_in = sw[7:0];
assign btn_in = {3'd0, btn[4:0]};

//? li
assign imm_8b = ({6'd0, imm} << s);

//? bner0
assign off_ext = {{4{offset[3]}}, offset};


assign ledr[15:8] = PC;

endmodule
