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
    output wire [7:0]   seg7,

    input  wire [31:0]  instruct,
    output wire [15:0]  PC_N_o
);

//? RAM GET 
import "DPI-C" function int pmem_read(input int raddr);
import "DPI-C" function void pmem_write(input int waddr, input int wdata, input byte mem_wmask);

////----------- Parameters ------------////
reg sys_clk;
wire sys_rst;
reg  [4:0] btn_p [4:0];
Reg #(5, 5'd0) r_btn0 (clk, sys_rst, btn, btn_p[0], 1'b1);
Reg #(5, 5'd0) r_btn1 (clk, sys_rst, btn_p[0], btn_p[1], 1'b1);
Reg #(5, 5'd0) r_btn2 (clk, sys_rst, btn_p[1], btn_p[2], 1'b1);
Reg #(5, 5'd0) r_btn3 (clk, sys_rst, btn_p[2], btn_p[3], 1'b1);
Reg #(5, 5'd0) r_btn4 (clk, sys_rst, btn_p[3], btn_p[4], 1'b1);
wire [4:0] btn_neg0 = btn_p[0] & ~btn;
wire [4:0] btn_neg1 = btn_p[1] & ~btn;
//Reg #(1, 1'd0) r_sysclk (clk, sys_rst, ~sys_clk, sys_clk, btn_neg1[4]);
assign sys_clk = clk;
assign sys_rst = sw[15] | rst;

//? PC jalr
// reg [31:0] rom_PC [65535:0];
// initial begin
//     $display("INFO: Trying load rom_PC");
//     $readmemh("resource/test_diag.hex", rom_PC);
//     $display("rom[0]=%h rom[1]=%h", rom_PC[0], rom_PC[1]);
// end
reg  [17:0] PC;
wire [15:0] PC_N;
wire [17:0] next_PC;
wire [17:0] next_PC_norm;

wire [17:0] next_PC_jalr;
wire [31:0] next_PC_jalr_ext32b_s;

//? RAM GPR lui
wire [4:0] gpr_raddra, gpr_raddrb;
wire [31:0] gpr_douta, gpr_doutb;
wire [4:0] gpr_waddr;
wire gpr_wen;
wire [31:0] gpr_din;

wire [31:0] rs1_out, rs2_out;

wire [31:0] lui_setval;

//? RAM MEM lw & lbu & sw & sb
wire [31:0] mem_addr;
wire [25:0] mem_addr_26b;
wire is_VGA;
wire is_MEM;
wire mem_wen;
wire mem_ren;
wire byte_en3, byte_en2, byte_en1, byte_en0;
wire [7:0] mem_wmask;
wire [7:0] mem_din_byte8;
wire [31:0] mem_din_byte8_ext32b;
wire [31:0] mem_din;
reg [31:0] mem_dout;
wire [7:0] mem_dout_byte8;
wire [31:0] mem_dout_byte8_ext32b;
wire [31:0] mem_out_val;

//? Instrucions
// wire [31:0] instruct;
wire [6:0] opcode;
wire op_add;
wire op_addi;
wire op_lui;
wire op_lw;
wire op_lbu;
wire op_sw;
wire op_sb;
wire op_jalr;

wire [4:0] rs1, rs2, rd;
wire [2:0] funct3;
wire [19:0] imm_20b;
wire [11:0] imm_12b;
wire [6:0] imm_7b;
wire [4:0] imm_5b;
wire [31:0] imm_ext_32b_s;

wire [31:0] imm_add_rs1_32b;
wire [25:0] imm_add_rs1_26b;

//? ALU add & addi
wire [31:0] ALU_add_t1;
wire [31:0] ALU_add_t2;
wire [31:0] ALU_add_sum;

////----------- Logic ------------////
//? PC jalr
Reg #(18, 18'd0) R_PC(sys_clk, sys_rst, next_PC, PC, 1'b1);
assign PC_N = PC[17:2];
assign PC_N_o = PC_N;

//? RAM GPR li
ram_GPR_miniRV i_GPR(
  .raddra(gpr_raddra),
  .raddrb(gpr_raddrb),
  .din(gpr_din),
  .waddr(gpr_waddr),
  .wen(gpr_wen),
  .clk(sys_clk),
  .rst(sys_rst),

  .douta(gpr_douta),
  .doutb(gpr_doutb)
);

assign gpr_raddra = rs1;
assign gpr_raddrb = rs2;
assign rs1_out    = gpr_douta;
assign rs2_out    = gpr_doutb;
assign gpr_waddr  = rd;
assign gpr_wen = op_add | op_addi | op_lui | op_lw | op_lbu | op_jalr;
assign gpr_din =  (op_lw | op_lbu) ? mem_out_val
                : (op_lui) ? lui_setval
                : (op_jalr) ? next_PC_jalr_ext32b_s
                : ALU_add_sum;

assign lui_setval = {imm_20b, 12'b0};

//? RAM MEM lw & lbu & sw & sb
// ram_MEM#(
//   .ADDR_BIT ( 24 ),
//   .IO_BIT   ( 32 )
// ) 
// i_MEM(
//   .addr(mem_addr_26b[25:2]),
//   .wen(mem_wen),
//   .ren(mem_ren),
//   .byte_en3(byte_en3),
//   .byte_en2(byte_en2),
//   .byte_en1(byte_en1),
//   .byte_en0(byte_en0),
//   .clk(sys_clk),
//   .rst(sys_rst),

//   .din(mem_din),
//   .dout(mem_dout) 
// );
assign mem_wmask = {4'd0, byte_en3, byte_en2, byte_en1, byte_en0};
always @(*) begin
  if (mem_ren | mem_wen) begin // 有读写请求时
    mem_dout = pmem_read(mem_addr);
    if (mem_wen) begin // 有写请求时
      pmem_write(mem_addr, mem_din, mem_wmask);
    end
  end
  else begin
    mem_dout = 32'd0;
  end
end

assign mem_addr = imm_add_rs1_32b;
assign mem_addr_26b = mem_addr[25:0];
assign is_VGA = (| imm_add_rs1_32b[31:29]); // addr > 0x2000_0000
assign is_MEM = ~is_VGA;
assign mem_wen = is_MEM & (op_sw | op_sb);
assign mem_wen = is_MEM & (op_sw | op_sb);
assign mem_ren = is_MEM & (op_lw | op_lbu);
assign byte_en3 = op_sw | op_lw | ((op_lbu | op_sb) & mem_addr_26b[1:0] == 2'b11);
assign byte_en2 = op_sw | op_lw | ((op_lbu | op_sb) & mem_addr_26b[1:0] == 2'b10);
assign byte_en1 = op_sw | op_lw | ((op_lbu | op_sb) & mem_addr_26b[1:0] == 2'b01);
assign byte_en0 = op_sw | op_lw | ((op_lbu | op_sb) & mem_addr_26b[1:0] == 2'b00);
assign mem_din_byte8 = rs2_out[7:0];
assign mem_din_byte8_ext32b =     (mem_addr_26b[1:0] == 2'b11) ? {mem_din_byte8, 24'b0}
                                : (mem_addr_26b[1:0] == 2'b10) ? {8'b0, mem_din_byte8, 16'b0}
                                : (mem_addr_26b[1:0] == 2'b01) ? {16'b0, mem_din_byte8, 8'b0}
                                : {24'b0, mem_din_byte8};
assign mem_din = op_sb ? mem_din_byte8_ext32b : rs2_out;
assign mem_dout_byte8 =   (mem_addr_26b[1:0] == 2'b11) ? mem_dout[24+:8]
                        : (mem_addr_26b[1:0] == 2'b10) ? mem_dout[16+:8]
                        : (mem_addr_26b[1:0] == 2'b01) ? mem_dout[ 8+:8]
                        : mem_dout[0+:8];
assign mem_dout_byte8_ext32b = {24'b0, mem_dout_byte8};
assign mem_out_val = op_lbu ? mem_dout_byte8_ext32b : mem_dout;

//? Instrucions
// assign instruct = rom_PC[PC_N];
assign imm_20b  = instruct[31:12];
assign imm_12b  = instruct[31:20];
assign imm_7b   = instruct[31:25];
assign rs2      = instruct[24:20];
assign rs1      = instruct[19:15];
assign funct3   = instruct[14:12];
assign rd       = instruct[11:7];
assign imm_5b   = instruct[11:7];
assign opcode   = instruct[6:0];

assign op_addi  = (opcode == 7'h13);
assign op_add   = (opcode == 7'h33);
assign op_lui   = (opcode == 7'h37);
assign op_lw    = (opcode == 7'h03 && funct3 == 3'h2);
assign op_lbu   = (opcode == 7'h03 && funct3 == 3'h4);
assign op_sw    = (opcode == 7'h23 && funct3 == 3'h2);
assign op_sb    = (opcode == 7'h23 && funct3 == 3'h0);
assign op_jalr  = (opcode == 7'h67);

assign imm_ext_32b_s = (op_sw | op_sb) 
                        ? {{20{imm_7b[6]}}, {imm_7b, imm_5b}} 
                        : {{20{imm_12b[11]}}, imm_12b};
assign imm_add_rs1_32b = imm_ext_32b_s + rs1_out;
assign imm_add_rs1_26b = imm_add_rs1_32b[25:0];

//? ALU add & addi
assign ALU_add_t1 = rs1_out;
assign ALU_add_t2 = op_add ? rs2_out : imm_ext_32b_s;
assign ALU_add_sum = ALU_add_t1 + ALU_add_t2;


////----------- Debug ------------////
reg [23:0] cnt_clk;
always@(posedge clk or posedge sys_rst) begin
    if (sys_rst) cnt_clk <= 0;
    else cnt_clk <= cnt_clk + 24'd1;
end

wire [15:0] PC_N_w1 = PC_N / 10 % 10;
wire [15:0] PC_N_w0 = PC_N % 10;
bcd7seg_AF ins_seg7(.b( PC_N_w1[3:0] ), .h(seg7), .en( 1'b1 ));
bcd7seg_AF ins_seg6(.b( PC_N_w0[3:0] ), .h(seg6), .en( 1'b1 ));
bcd7seg_AF ins_seg5(.b( 4'd0 ), .h(seg5), .en( 1'd0 ));
bcd7seg_AF ins_seg4(.b( 4'd0 ), .h(seg4), .en( 1'd0 ));
bcd7seg_AF ins_seg3(.b( 4'd0 ), .h(seg3), .en( 1'd0 ));
bcd7seg_AF ins_seg2(.b( 4'd0 ), .h(seg2), .en( 1'd0 ));
bcd7seg_AF ins_seg1(.b( 4'd0 ), .h(seg1), .en( 1'b0 ));
bcd7seg_AF ins_seg0(.b( 4'd0 ), .h(seg0), .en( 1'b0 ));

localparam PC_TRACE_MAX = 'h1b0;
localparam PC_N_TRACE_MAX = 200;
wire work_fin;
assign work_fin = (( 0 ) ? PC_N > PC_TRACE_MAX / 4 : PC_N > PC_N_TRACE_MAX) | (instruct == 32'h0);
assign uart_tx = work_fin; 

wire signed [31:0] gpr_din_ss = gpr_din;
wire signed [31:0] imm_ext_32b_ss = imm_ext_32b_s;

always@(posedge sys_clk) begin
    if (~work_fin && ~sys_rst) begin
        if (op_add) begin
            $display("%03d-%3x %08h  | add  rd  ,rs1,rs2"
                    ,PC_N, PC, instruct); 
            $display("%03s %3s %08s  - add  r%-2d ,r%-2d,r%-2d     {r%-2d -> 0x%h = r%-2d[0x%h] + r%-2d[0x%h]}"
                , "", "", "", rd, rs1, rs2, rd, gpr_din, rs1, rs1_out, rs2, rs2_out);
       
        end else if (op_addi) begin
            $display("%03d-%3x %08h  | addi rd , rs1,imm"
                    ,PC_N, PC, instruct);
            $display("%03s %3s %08s  - addi r%-2d, r%-2d,0x%3h   {r%-2d -> 0x%h or %d}"
                , "", "", "", rd, rs1, imm_12b, rd, gpr_din, gpr_din_ss);

            // $display("ALU_add_t1:%h, ALU_add_t2:%h"
            //     ,ALU_add_t1, ALU_add_t2);

        end else if (op_lui) begin
            $display("%03d-%3x %08h  | lui  rd , imm"
                    ,PC_N, PC, instruct);
            $display("%03s %3s %08s  - lui  r%-2d, %5h       {r%-2d -> 0x%h}"
                , "", "", "", rd, imm_20b, rd, gpr_din);

        end else if (op_lw) begin
            $display("%03d-%3x %08h  | lw   rd , offset(rs1)"
                    ,PC_N, PC, instruct);
            $display("%03s %3s %08s  - lw   r%-2d, %6d(r%-2d) {r%-2d -> 0x%h}"
                , "", "", "", rd, imm_ext_32b_ss, rs1, rs1_out, mem_out_val);
        
        end else if (op_lbu) begin
            $display("%03d-%3x %08h  | lbu  rd , offset(rs1)"
                    ,PC_N, PC, instruct);
            $display("%03s %3s %08s  - lbu  r%-2d, %6d(r%-2d) {r%-2d -> 0x%h}"
                , "", "", "", rd, imm_ext_32b_ss, rs1, rd, mem_dout_byte8);
        
            // $display("mem_addr:%h, mem_dout:%h, mem_out_val:%h"
            //     ,mem_addr, mem_dout, mem_out_val);

        end else if (op_sw) begin
            $display("%03d-%3x %08h  | sw   rs2, offset(rs1)"
                    ,PC_N, PC, instruct);
            $display("%03s %3s %08s  - sw   r%-2d, %6d(r%-2d) {M[0x%4h] -> 0x%h}"
                , "", "", "", rs2, imm_ext_32b_ss, rs1, mem_addr, mem_din);
        
        end else if (op_sb) begin
            $display("%03d-%3x %08h  | sb   rs2, offset(rs1)"
                    ,PC_N, PC, instruct);
            $display("%03s %3s %08s  - sb   r%-2d, %6d(r%-2d) {M[0x%4h] -> 0x%h}"
                , "", "", "", rs2, imm_ext_32b_ss, rs1, mem_addr, mem_din_byte8);
        
            // $display("mem_addr:%h, mem_din_byte8:%h"
            //     ,mem_addr, mem_din_byte8);

        end else if (op_jalr) begin
            $display("%03d-%3x %08h  | jalr rd , offset(rs1)"
                    ,PC_N, PC, instruct);
            $display("%03s %3s %08s  - jalr r%-2d, %6d(r%2d) {r%1d -> 0x%h | PC -> %3h}"
                , "", "", "", rd, imm_12b, rs1, rd, gpr_din, next_PC);
        
            // $display("next_PC:%h, next_PC_jalr:%h, next_PC_jalr_ext32b_s:%h"
            //     ,next_PC, next_PC_jalr, next_PC_jalr_ext32b_s);

        end else begin
            $display("%03d-%3x %08h  | Instruction err!!!"
                    ,PC_N, PC, instruct);
            $display("%03s %3s %08s  - funct3=%1d opcode=%2h"
                , "", "", "", funct3, opcode);
        end
    end
end

always@(posedge clk) begin
    if (btn_neg0[0]) begin
        $display("Cur PC:%03h PC_N:0x%h Ins:0x%h", PC,PC_N, PC, instruct);
    end
end

endmodule
