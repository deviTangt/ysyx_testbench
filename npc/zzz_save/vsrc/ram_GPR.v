module ram_GPR(
  input wire [1:0] raddra,
  input wire [1:0] raddrb,
  input wire [7:0] din,
  input wire [1:0] waddr,
  inout wire       wen,
  input wire       clk,
  input wire       rst,

  output wire [7:0] douta,
  output wire [7:0] doutb
);

reg [7:0] GPR [3:0];
Reg #(8, 8'd0) R3(clk, rst, din, GPR[3], waddr == 2'b11 && wen);
Reg #(8, 8'd0) R2(clk, rst, din, GPR[2], waddr == 2'b10 && wen);
Reg #(8, 8'd0) R1(clk, rst, din, GPR[1], waddr == 2'b01 && wen);
Reg #(8, 8'd0) R0(clk, rst, din, GPR[0], waddr == 2'b00 && wen);

MuxKeyWithDefault #(4, 2, 8) sel_a (douta, raddra, 8'd0, {
    2'b00, GPR[0],
    2'b01, GPR[1],
    2'b10, GPR[2],
    2'b11, GPR[3]
  });
MuxKeyWithDefault #(4, 2, 8) sel_b (doutb, raddrb, 8'd0, {
    2'b00, GPR[0],
    2'b01, GPR[1],
    2'b10, GPR[2],
    2'b11, GPR[3]
  });

endmodule
