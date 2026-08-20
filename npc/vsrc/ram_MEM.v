module ram_MEM#(
  parameter   ADDR_BIT = 24,
              IO_BIT   = 32
)(
  input wire [ADDR_BIT-1:0] addr,
  input wire wen,
  input wire ren,
  input wire byte_en3,
  input wire byte_en2,
  input wire byte_en1,
  input wire byte_en0,
  input wire clk,
  input wire rst,

  input wire  [IO_BIT-1:0] din,
  output wire [IO_BIT-1:0] dout 
);

reg [IO_BIT-1:0] R_MEM [2**ADDR_BIT-1:0];
initial begin
    $display("INFO: Trying load rom_MEM");
    //$readmemh("resource/rom_PC.hex", R_MEM);
    $display("ram[0]=%h ram[1]=%h", R_MEM[0], R_MEM[1]);
end

always@(posedge clk) begin
  if (wen) begin
    if (byte_en3)
      R_MEM[addr][24+:8] <= din[24+:8];
    if (byte_en2)
      R_MEM[addr][16+:8] <= din[16+:8];
    if (byte_en1)
      R_MEM[addr][ 8+:8] <= din[ 8+:8];
    if (byte_en0)
      R_MEM[addr][ 0+:8] <= din[ 0+:8];
  end
end

assign dout[24+:8] = (ren & byte_en3) ? R_MEM[addr][24+:8] : 0;
assign dout[16+:8] = (ren & byte_en3) ? R_MEM[addr][16+:8] : 0;
assign dout[ 8+:8] = (ren & byte_en3) ? R_MEM[addr][ 8+:8] : 0;
assign dout[ 0+:8] = (ren & byte_en3) ? R_MEM[addr][ 0+:8] : 0;

endmodule
