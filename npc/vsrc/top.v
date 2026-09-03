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

    input  wire [31:0]  instruct_i,
    output wire [29:0]  PC_N_o
);

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

//? IFU
reg  [31:0] PC;

//? DU
wire [31:0] instruct;
wire op_add;
wire op_addi;
wire op_lui;
wire op_lw;
wire op_lbu;
wire op_sw;
wire op_sb;
wire op_jalr;

wire [31:0] rs1_out, rs2_out;
wire [19:0] imm_20b;
wire [11:0] imm_12b;
wire [6:0]  imm_7b;
wire [4:0]  imm_5b;


//? XU
wire gpr_wen;
wire [31:0]  gpr_din;

wire  [31:0] mem_addr;
wire  [31:0] mem_din;
wire         mem_wen;
wire         mem_ren;
wire  [3:0]  byte_en_4b; 

wire [31:0] next_PC;

wire gpr_wen_XU_o;
wire [31:0] gpr_din_XU_o;

//? SU
wire [31:0] gpr_din_SU_o;

wire [31:0] mem_out_val;

//? BU
wire gpr_wen_BU_i;
wire gpr_wen_BU_o;
wire [31:0] gpr_din_BU_o;

//// debug
wire [4:0] rs1, rs2, rd;
wire [6:0] opcode;
wire [2:0] funct3;

wire [31:0] imm_ext_32b_s;
wire [7:0] mem_din_byte8;

wire [7:0] mem_dout_byte8;

////----------- Logic ------------////
//? IFU
L1_IFU i_L1_IFU(
    .PC(PC),
    .instruct(instruct),

    .instruct_i(instruct_i),
    .PC_N_o(PC_N_o)
);

//? DU
L2_DU i_L2_DU(
    .clk(sys_clk), .rst(sys_rst),
    .instruct(instruct),

    .op_add(op_add), .op_addi(op_addi), .op_lui(op_lui), .op_lw(op_lw),
    .op_lbu(op_lbu), .op_sw(op_sw), .op_sb(op_sb), .op_jalr(op_jalr),
    
    .rs1_out(rs1_out), .rs2_out(rs2_out),
    .imm_20b(imm_20b), 
    .imm_12b(imm_12b), 
    .imm_7b(imm_7b), 
    .imm_5b(imm_5b), 
    
    .wen(gpr_wen),
    .wdata(gpr_din),

    //// debug
    .rs1(rs1), .rs2(rs2), .rd(rd),
    .opcode(opcode),
    .funct3(funct3)
);

//? XU
L3_XU i_L3_XU(
    .clk(clk), 
    .rst(rst),

    .op_add(op_add), .op_addi(op_addi), .op_lui(op_lui), .op_lw(op_lw),
    .op_lbu(op_lbu), .op_sw(op_sw), .op_sb(op_sb), .op_jalr(op_jalr),

    .rs1_out(rs1_out), .rs2_out(rs2_out),
    .imm_20b(imm_20b), 
    .imm_12b(imm_12b), 
    .imm_7b(imm_7b), 
    .imm_5b(imm_5b), 

    .gpr_en_o(gpr_wen_XU_o),
    .gpr_din_o(gpr_din_XU_o),

    .mem_addr(mem_addr),
    .mem_din(mem_din),
    .mem_wen(mem_wen),
    .mem_ren(mem_ren),
    .byte_en_4b(byte_en_4b), 

    .PC(PC),
    .next_PC(next_PC),

    //// debug
    .imm_ext_32b_s(imm_ext_32b_s),
    .mem_din_byte8(mem_din_byte8)
);


//? SU
L4_SU i_L4_SU(
    .clk(clk),
    .rst(rst),

    .op_lw(op_lw), .op_lbu(op_lbu),
    .mem_addr(mem_addr),
    .mem_din(mem_din),
    .mem_wen(mem_wen),
    .mem_ren(mem_ren),
    .byte_en_4b(byte_en_4b), 

    .gpr_din_i(gpr_din_XU_o),
    .gpr_din_o(gpr_din), 

    .mem_out_val(mem_out_val),

    //// debug
    .mem_dout_byte8(mem_dout_byte8)
);


//? BU
L5_BU i_L5_BU(
   .clk(clk), 
   .rst(rst),

   .gpr_en_i(gpr_wen_XU_o),
   .gpr_din_i(gpr_din_SU_o), 
   .gpr_en_o(gpr_wen),
   .gpr_din_o(gpr_din_BU_o), 

   .PC(PC),
   .next_PC(next_PC)
);



////----------- Debug ------------////
reg [23:0] cnt_clk;
always@(posedge clk or posedge sys_rst) begin
    if (sys_rst) cnt_clk <= 0;
    else cnt_clk <= cnt_clk + 24'd1;
end

wire [29:0] PC_N;
assign PC_N = {4'b0, PC[27:2]};

localparam PC_TRACE_MAX = 'h1b0;
localparam CNT_CLK_TRACE_MAX = 20;
wire work_fin;
wire e_break;
assign e_break = (instruct == 32'h00100073);
assign work_fin = (( 0 ) ? PC_N > PC_TRACE_MAX / 4 : cnt_clk > CNT_CLK_TRACE_MAX) | e_break;
assign uart_tx = work_fin; 

wire signed [31:0] gpr_din_ss = gpr_din;
wire signed [31:0] imm_ext_32b_ss = imm_ext_32b_s;

always@(posedge sys_clk) begin
    if (~work_fin && ~sys_rst) begin
        if (op_add) begin
            $display("%03d-%8x %08h  | add  rd  ,rs1,rs2"
                    ,PC_N, PC, instruct); 
            $display("%03s %8s %08s  - add  r%-2d ,r%-2d,r%-2d     {r%-2d -> 0x%h = r%-2d[0x%h] + r%-2d[0x%h]}"
                , "", "", "", rd, rs1, rs2, rd, gpr_din, rs1, rs1_out, rs2, rs2_out);
       
        end else if (op_addi) begin
            $display("%03d-%8x %08h  | addi rd , rs1,imm"
                    ,PC_N, PC, instruct);
            $display("%03s %8s %08s  - addi r%-2d, r%-2d,0x%3h   {r%-2d -> 0x%h or %d}"
                , "", "", "", rd, rs1, imm_12b, rd, gpr_din, gpr_din_ss);

            // $display("ALU_add_t1:%h, ALU_add_t2:%h"
            //     ,ALU_add_t1, ALU_add_t2);

        end else if (op_lui) begin
            $display("%03d-%8x %08h  | lui  rd , imm"
                    ,PC_N, PC, instruct);
            $display("%03s %8s %08s  - lui  r%-2d, %5h       {r%-2d -> 0x%h}"
                , "", "", "", rd, imm_20b, rd, gpr_din);

        end else if (op_lw) begin
            $display("%03d-%8x %08h  | lw   rd , offset(rs1)"
                    ,PC_N, PC, instruct);
            $display("%03s %8s %08s  - lw   r%-2d, %6d(r%-2d) {r%-2d -> 0x%h}"
                , "", "", "", rd, imm_ext_32b_ss, rs1, rs1_out, mem_out_val);
        
        end else if (op_lbu) begin
            $display("%03d-%8x %08h  | lbu  rd , offset(rs1)"
                    ,PC_N, PC, instruct);
            $display("%03s %8s %08s  - lbu  r%-2d, %6d(r%-2d) {r%-2d -> 0x%h}"
                , "", "", "", rd, imm_ext_32b_ss, rs1, rd, mem_dout_byte8);
        
            // $display("mem_addr:%h, mem_dout:%h, mem_out_val:%h"
            //     ,mem_addr, mem_dout, mem_out_val);

        end else if (op_sw) begin
            $display("%03d-%8x %08h  | sw   rs2, offset(rs1)"
                    ,PC_N, PC, instruct);
            $display("%03s %8s %08s  - sw   r%-2d, %6d(r%-2d) {M[0x%4h] -> 0x%h}"
                , "", "", "", rs2, imm_ext_32b_ss, rs1, mem_addr, mem_din);
        
        end else if (op_sb) begin
            $display("%03d-%8x %08h  | sb   rs2, offset(rs1)"
                    ,PC_N, PC, instruct);
            $display("%03s %8s %08s  - sb   r%-2d, %6d(r%-2d) {M[0x%4h] -> 0x%h}"
                , "", "", "", rs2, imm_ext_32b_ss, rs1, mem_addr, mem_din_byte8);
        
            // $display("mem_addr:%h, mem_din_byte8:%h"
            //     ,mem_addr, mem_din_byte8);

        end else if (op_jalr) begin
            $display("%03d-%8x %08h  | jalr rd , offset(rs1)"
                    ,PC_N, PC, instruct);
            $display("%03s %8s %08s  - jalr r%-2d, %6d(r%2d) {PC -> %3h | r%1d -> 0x%h}"
                , "", "", "", rd, imm_12b, rs1, next_PC, rd, gpr_din);
        
            // $display("next_PC:%h, next_PC_jalr:%h, next_PC_jalr_ext32b_s:%h"
            //     ,next_PC, next_PC_jalr, next_PC_jalr_ext32b_s);

        end else begin
            $display("%03d-%8x %08h  | * Instruction Not Found *"
                    ,PC_N, PC, instruct);
            $display("%03s %8s %08s  - opcode = 0x%2h funct3 = 0b%03b" 
                , "", "", "", opcode, funct3);
        end
    end else if (e_break) begin
        $display("%03d-%8x %08h  | e-break"
                    , PC_N, PC, instruct);
    end
end

always@(posedge clk) begin
    if (btn_neg0[0]) begin
        $display("Cur PC:%03h PC_N:0x%h Ins:0x%h", PC,PC_N, PC, instruct);
    end
end

endmodule









