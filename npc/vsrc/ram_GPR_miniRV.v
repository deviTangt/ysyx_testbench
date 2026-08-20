module ram_GPR_miniRV(
  input wire [4:0] raddra,
  input wire [4:0] raddrb,
  input wire [31:0] din,
  input wire [4:0] waddr,
  inout wire       wen,
  input wire       clk,
  input wire       rst,

  output wire [31:0] douta,
  output wire [31:0] doutb
);

reg [31:0] GPR [31:0];
genvar i;
generate
  for (i = 0;i < 32;i = i + 1)begin:foor_loop_i
    Reg #(32, 32'd0) R(clk, rst, din, GPR[i], waddr == i && wen);
  end
endgenerate


assign douta = GPR[raddra];
assign doutb = GPR[raddrb];

endmodule
