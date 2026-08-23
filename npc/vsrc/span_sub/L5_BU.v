//! BU(WriteBack Unit): 将数据写入寄存器, 并更新PC
module L5_BU(
    input wire clk, 
    input wire rst,

    input  wire gpr_en_i,
    input  wire [31:0] gpr_din_i, 
    output wire gpr_en_o,
    output wire [31:0] gpr_din_o, 

    output wire [31:0] PC,
    input  wire [31:0] next_PC
);

assign gpr_en_o = gpr_en_i;
assign gpr_din_o = gpr_din_i;

Reg #(32, 32'h80000000) R_PC(clk, rst, next_PC, PC, 1'b1);

endmodule
