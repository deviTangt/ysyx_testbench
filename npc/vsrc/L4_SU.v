//! SU(Load-Store Unit): 负责根据控制信号控制存储器, 从存储器中读出数据, 或将数据写入存储器
module L4_SU(
  input wire clk,
  input wire rst,

  input wire  op_lw, op_lbu,
  input wire  [31:0] mem_addr,
  input wire  [31:0] mem_din,
  input wire         mem_wen,
  input wire         mem_ren,
  input wire  [3:0]  byte_en_4b,

  input  wire [31:0] gpr_din_i, 
  output wire [31:0] gpr_din_o,  

  output wire [31:0] mem_out_val,

  //// debug
  output  wire [7:0] mem_dout_byte8
);

wire [7:0] mem_wmask;
assign mem_wmask = {4'd0, byte_en_4b};

reg  [31:0] mem_dout;
// wire [7:0] mem_dout_byte8;
wire [31:0] mem_dout_byte8_ext32b;

//? func
import "DPI-C" function int pmem_read(input int raddr);
import "DPI-C" function void pmem_write(input int waddr, input int wdata, input byte mem_wmask);
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

assign gpr_din_o =  (op_lw | op_lbu) ? mem_out_val
                  : gpr_din_i;

assign mem_dout_byte8 =   (mem_addr[1:0] == 2'b11) ? mem_dout[24+:8]
                        : (mem_addr[1:0] == 2'b10) ? mem_dout[16+:8]
                        : (mem_addr[1:0] == 2'b01) ? mem_dout[ 8+:8]
                        :  mem_dout[0+:8];
assign mem_dout_byte8_ext32b = {24'b0, mem_dout_byte8};
assign mem_out_val = op_lbu ? mem_dout_byte8_ext32b : mem_dout;

endmodule