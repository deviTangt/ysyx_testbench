//! DU(Instruction Decode Unit): 负责对当前指令进行译码, 准备执行阶段需要使用的数据和控制信号
module L2_DU(
    input  wire clk, rst,
    input  wire [31:0] instruct,

    output wire op_add, op_addi, op_lui, op_lw,
                op_lbu, op_sw, op_sb, op_jalr,

    output wire [31:0] rs1_out, rs2_out,
    output wire [19:0] imm_20b, 
    output wire [11:0] imm_12b, 
    output wire [6:0] imm_7b, 
    output wire [4:0] imm_5b, 

    input  wire wen,
    input  wire [31:0] wdata,

    //// debug
    output wire [4:0] rs1, rs2, rd,
    output wire [6:0] opcode,
    output wire [2:0] funct3
);

////----------- Parameters ------------////
//? ram
wire [4:0] gpr_raddra, gpr_raddrb;
wire [31:0] gpr_douta, gpr_doutb;
wire [4:0] gpr_waddr;

//? instruct
// wire [6:0] opcode;

// wire [4:0] rs1, rs2, rd;
// wire [2:0] funct3;

////----------- Logic ------------////
ram_GPR_miniRV i_GPR(
  .raddra(gpr_raddra),
  .raddrb(gpr_raddrb),
  .din(wdata),
  .waddr(gpr_waddr),
  .wen(wen),
  .clk(clk),
  .rst(rst),

  .douta(gpr_douta),
  .doutb(gpr_doutb)
);

//? ram
assign gpr_raddra = rs1;
assign gpr_raddrb = rs2;
assign rs1_out    = gpr_douta;
assign rs2_out    = gpr_doutb;
assign gpr_waddr  = rd;



//? instruct
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

endmodule
