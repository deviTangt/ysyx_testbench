//! IFU(Instruction Fetch Unit): 负责根据当前PC从存储器中取出一条指令
module L1_IFU(
    input wire [17:0] PC,
    output wire [31:0] instruct,

    input  wire [31:0]  instruct_i,
    output wire [15:0]  PC_N_o
);

    assign PC_N_o = PC[17:2];
    assign instruct = instruct_i;
endmodule