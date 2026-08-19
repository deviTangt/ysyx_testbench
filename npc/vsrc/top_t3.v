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

wire [3:0] num1 = sw[7:4];
wire [3:0] num2 = sw[3:0];

reg  [4:0] btn_p;
Reg #(5, 0) r_b (clk, rst, btn, btn_p, 1'b1);
wire [4:0] btn_pos = ~btn_p & btn;

reg  [2:0] op;
wire [2:0] op_n;
assign op_n = btn_pos[4] ? (op + 3'b1) : btn_pos[0] ? (op - 3'b1) : (op); 
Reg #(3, 0) r_m (clk, rst, op_n, op, btn_pos[0] | btn_pos[2] | btn_pos[4]);
assign ledr[15:12] = (1 << op);


wire f_zero;
wire f_of;
wire f_carry;
reg  [3:0] result;

assign f_zero = ~(| result);

assign ledr[6] = f_zero;
assign ledr[5] = f_of;
assign ledr[4] = f_carry;
assign ledr[3:0] = result;

//? 0 / 1
wire [3:0] res_op_add_sub;
wire cin = (| op);
wire [3:0] n2_no_cin = {4{cin}} ^ num2;
assign {f_carry, res_op_add_sub} = num1 + n2_no_cin + cin;
assign f_of = (num1[3] == n2_no_cin[3]) & (res_op_add_sub[3] != num1[3]);

//? 2
wire [3:0] res_op_not;
assign res_op_not = ~num1;
//? 3
wire [3:0] res_op_and;
assign res_op_and = num1 & num2;
//? 4
wire [3:0] res_op_or;
assign res_op_or = num1 | num2;
//? 5
wire [3:0] res_op_xor;
assign res_op_xor = num1 ^ num2;
//? 6
wire [3:0] res_op_cmp;
assign res_op_cmp[3:1] = 3'd0;
MuxKeyWithDefault #(4, 2, 1) icmp (res_op_cmp[0], {num1[3], num2[3]}, 1'b0, {
    2'b00, num1 < num2,
    2'b01, 1'b0,
    2'b10, 1'b1,
    2'b11, num1 < num2
  });
//? 7
wire [3:0] res_op_equ;
assign res_op_equ = {3'd0, (num1 == num2)};

MuxKeyWithDefault #(8, 3, 4) i0 (result, op, 4'd0, {
    3'd0, res_op_add_sub,
    3'd1, res_op_add_sub,
    3'd2, res_op_not,
    3'd3, res_op_and,
    3'd4, res_op_or,
    3'd5, res_op_xor,
    3'd6, res_op_cmp,
    3'd7, res_op_equ
  });

wire [3:0] num1_w1 = (op > 3'd2) ? {3'd0, num1 > 4'd9} : (num1[3] ? 4'd15 : 4'd14);
wire [3:0] num1_w0 = (op > 3'd2) ? (num1 > 4'd9 ? num1 - 4'd10 : num1) : (num1[3] ? ~num1 + 4'd1 : num1);
wire [3:0] num2_w1 = (op > 3'd2) ? {3'd0, num2 > 4'd9} : (num2[3] ? 4'd15 : 4'd14);
wire [3:0] num2_w0 = (op > 3'd2) ? (num2 > 4'd9 ? num2 - 4'd10 : num2) :  (num2[3] ? ~num2 + 4'd1 : num2);
wire [3:0] res_w1 = (op > 3'd2) ? {3'd0, result > 4'd9} : (result[3] ? 4'd15 : 4'd14);
wire [3:0] res_w0 = (op > 3'd2) ? (result > 4'd9 ? result - 4'd10 : result) :  (result[3] ? ~result + 4'd1 : result);
//output debuginfo to bcd
bcd7seg ins_seg7(.b(num1_w1), .h(seg7));
bcd7seg ins_seg6(.b(num1_w0), .h(seg6));
bcd7seg ins_seg5(.b(num2_w1), .h(seg5));
bcd7seg ins_seg4(.b(num2_w0), .h(seg4));
bcd7seg ins_seg3(.b({2'd0, f_zero, f_of}), .h(seg3));
bcd7seg ins_seg2(.b({3'd0, f_carry}), .h(seg2));
bcd7seg ins_seg1(.b(res_w1), .h(seg1));
bcd7seg ins_seg0(.b(res_w0), .h(seg0));

endmodule
