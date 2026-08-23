//! XU(EXecution Unit): 负责根据控制信号控制ALU, 对数据进行计算
module L3_XU(
  input  wire  clk,
  input  wire  rst,

  input  wire op_add, op_addi, op_lui, op_lw,
                op_lbu, op_sw, op_sb, op_jalr,

  input  wire [31:0] rs1_out, rs2_out,
  input  wire [19:0] imm_20b, 
  input  wire [11:0] imm_12b, 
  input  wire [6:0] imm_7b, 
  input  wire [4:0] imm_5b, 

  output wire gpr_en_o,
  output wire [31:0] gpr_din_o,

  output  wire  [31:0] mem_addr,
  output  wire  [31:0] mem_din,
  output  wire         mem_wen,
  output  wire         mem_ren,
  output  wire  [3:0]  byte_en_4b, 

  input  wire [31:0] PC,
  output wire [31:0] next_PC,

  //// debug
  output wire [31:0] imm_ext_32b_s,
  output wire [7:0] mem_din_byte8
);

////----------- Parameters ------------////
//? ALU
//wire [31:0] imm_ext_32b_s;
wire [31:0] imm_add_rs1_32b;
wire [25:0] imm_add_rs1_26b;

wire [31:0] ALU_add_t1;
wire [31:0] ALU_add_t2;
wire [31:0] ALU_add_sum;
wire [31:0] lui_setval;

//? GPR
//? MEM
wire [25:0] mem_addr_26b;
wire is_VGA;
wire is_MEM;
wire byte_en3, byte_en2, byte_en1, byte_en0;
// wire [7:0] mem_din_byte8;
wire [31:0] mem_din_byte8_ext32b;

//? PC
wire [31:0] next_PC_norm;
wire [31:0] next_PC_jalr;

////----------- Logic ------------////
//? ALU
assign imm_ext_32b_s = (op_sw | op_sb) 
                        ? {{20{imm_7b[6]}}, {imm_7b, imm_5b}} 
                        : {{20{imm_12b[11]}}, imm_12b};
assign imm_add_rs1_32b = imm_ext_32b_s + rs1_out;
assign imm_add_rs1_26b = imm_add_rs1_32b[25:0];

assign ALU_add_t1 = rs1_out;
assign ALU_add_t2 = op_add ? rs2_out : imm_ext_32b_s;
assign ALU_add_sum = ALU_add_t1 + ALU_add_t2;

assign lui_setval = {imm_20b, 12'b0};

//? GPR
assign gpr_en_o  =   op_add | op_addi | op_lui | op_lw | op_lbu | op_jalr;
assign gpr_din_o =  (op_lui) ? lui_setval
                  : (op_jalr) ? next_PC_jalr
                  : ALU_add_sum;
//? MEM
assign mem_addr = imm_add_rs1_32b;
assign mem_addr_26b = mem_addr[25:0];
assign is_VGA = (| imm_add_rs1_32b[31:29]); // addr > 0x2000_0000
assign is_MEM = ~is_VGA;
assign mem_wen = is_MEM & (op_sw | op_sb);
assign mem_wen = is_MEM & (op_sw | op_sb);
assign mem_ren = is_MEM & (op_lw | op_lbu);
assign byte_en_4b = {byte_en3, byte_en2, byte_en1, byte_en0};
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

//? PC
assign next_PC = (op_jalr) ? next_PC_jalr : next_PC_norm;
assign next_PC_norm = PC + 32'd4;

assign next_PC_jalr = {imm_add_rs1_32b[31:1], 1'b0};


endmodule