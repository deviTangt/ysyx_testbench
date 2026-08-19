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
reg sys_clk;
wire sys_rst;
reg  [4:0] btn_p;
Reg #(5, 5'd0) r_btn (clk, rst, btn, btn_p, 1'b1);
wire [4:0] btn_pos = ~btn_p & btn;
Reg #(1, 1'd0) r_sysclk (clk, rst, ~sys_clk, sys_clk, btn_pos[4]);
assign sys_rst = sw[15] | rst;

//? PC
reg [7:0] rom_PC [255:0];
initial begin
    $display("INFO: Trying load rom_PC.hex");
    $readmemh("resource/rom_PC.hex", rom_PC);
    $display("rom[0]=%h rom[1]=%h", rom_PC[0], rom_PC[1]);
end
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
Reg #(8, 8'd0) R_PC(sys_clk, sys_rst, next_PC, PC, 1'b1);

//? RAM GPR
ram_GPR i_GPR(
  .raddra(raddra),
  .raddrb(raddrb),
  .din(din),
  .waddr(waddr),
  .wen(wen),
  .clk(sys_clk),
  .rst(sys_rst),

  .douta(douta),
  .doutb(doutb)
);
assign din_p1 = type_li ? imm_8b : add_result;
assign din_p2 = in_sw ? sw_in : din_p1;
assign din = in_btn ? btn_in : din_p2;

assign raddra = type_bner0 ? 2'd0 : rs1;
assign raddrb = io_out ? rd : rs2;

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
Reg #(8, 8'd0) R_led(sys_clk, sys_rst, doutb, io_led_r, out_led);
assign ledr[7:0] = io_led_r;

Reg #(8, 8'd0) R_seg(sys_clk, sys_rst, doutb, io_seg_r, out_seg);
// output debuginfo to bcd
bcd7seg_AF ins_seg1(.b(io_seg_r[7:4]), .h(seg1), .en(1'b1));
bcd7seg_AF ins_seg0(.b(io_seg_r[3:0]), .h(seg0), .en(1'b1));

assign sw_in = sw[7:0];
assign btn_in = {3'd0, btn[4:0]};

//? li
assign imm_8b = ({6'd0, imm} << s);

//? bner0
assign off_ext = {{4{offset[3]}}, offset};


assign ledr[15] = sys_clk;
assign ledr[14] = sys_rst;

wire [7:0] PC_w1 = PC / 10 % 10;
wire [7:0] PC_w0 = PC % 10;
bcd7seg_AF ins_seg7(.b(PC_w1[3:0]), .h(seg7), .en(1'b1));
bcd7seg_AF ins_seg6(.b(PC_w0[3:0]), .h(seg6), .en(1'b1));
bcd7seg_AF ins_seg5(.b(instrct[7:4]), .h(seg5), .en(1'd1));
bcd7seg_AF ins_seg4(.b(instrct[3:0]), .h(seg4), .en(1'd1));
bcd7seg_AF ins_seg3(.b(4'd0), .h(seg3), .en(1'd0));
bcd7seg_AF ins_seg2(.b(4'd0), .h(seg2), .en(1'd0));

wire signed [3:0] offset_s = offset;
always@(posedge sys_clk) begin
    case(instruct_type)
        2'b00: begin //! add
            $display("%02d: %08b  %02x  add rd rs1 rs2"
                , PC, instrct, instrct);
            $display("%02s  %08s   |  add r%1d r%1d  r%1d (r%1d -> %3d)"
                , "", "", rd, rs1, rs2, rd, add_result);
        end
        2'b01: begin //! io
            if (io_out) begin
                $display("%02d: %08b  %02x  io out rd -> dev[idx]"
                    , PC, instrct, instrct);
                $display("%02s  %08s   |  io out r%1d -> dev[%03b] (dev[%03b] = %3d)"
                    , "", "", rd, idx, idx, doutb);

                $display("raddrb = %1d doutb = %3d"
                    , raddrb, doutb);
            end else begin
                $display("%02d: %08b  %02x  io in  dev[idx] -> rd"
                    , PC, instrct, instrct);
                $display("%02s  %08s   |  io in  dev[%03b] -> r%1d (rd = %3d)"
                    , "", "", idx, rd, din);
            end
        end
        2'b10: begin //! li
            $display("%02d: %08b  %02x  li rd imm << s"
                , PC, instrct, instrct);
            $display("%02s  %08s   |  li r%1d %3d << %1d (r%1d -> %3d)"
                , "", "", rd, imm, s, rd, imm << s);
        end
        2'b11: begin //! bner0
            $display("%02d: %08b  %02x  bner0 rs2 offset"
                , PC, instrct, instrct);
            $display("%02s  %08s   |  bner0 r%1d  %6d (%3d - %3d : PC -> %2d)"
                , "", "", rs2, offset_s, douta, doutb, next_PC);
        end
    endcase
end

endmodule
