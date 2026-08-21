module PS2_to_ASCII( ps2_code, tx_out);
  
  //端口信号：模块的输入输出接口
  input [7:0] ps2_code;   //键盘的扫描键值
  output reg [7:0] tx_out;//通过ASCII码转换之后的值
  
  //通过查找表的方式，对照ASCII码将键值转换为二进制数值
  always@(*) 
    case (ps2_code)    
      8'h1c: tx_out = 8'h41;  //A
      8'h32: tx_out = 8'h42;  //B
      8'h21: tx_out = 8'h43;  //C
      8'h23: tx_out = 8'h44;  //D
      8'h24: tx_out = 8'h45;  //E
      8'h2b: tx_out = 8'h46;  //F
      8'h34: tx_out = 8'h47;  //G
      8'h33: tx_out = 8'h48;  //H
      8'h43: tx_out = 8'h49;  //I
      8'h3b: tx_out = 8'h4a;  //J
      8'h42: tx_out = 8'h4b;  //K
      8'h4b: tx_out = 8'h4c;  //L
      8'h3a: tx_out = 8'h4d;  //M
      8'h31: tx_out = 8'h4e;  //N  
      8'h44: tx_out = 8'h4f;  //O
      8'h4d: tx_out = 8'h50;  //P
      8'h15: tx_out = 8'h51;  //Q
      8'h2d: tx_out = 8'h52;  //R
      8'h1b: tx_out = 8'h53;  //S
      8'h2c: tx_out = 8'h54;  //T
      8'h3c: tx_out = 8'h55;  //U
      8'h2a: tx_out = 8'h56;  //V
      8'h1d: tx_out = 8'h57;  //W
      8'h22: tx_out = 8'h58;  //X
      8'h35: tx_out = 8'h59;  //Y
      8'h1a: tx_out = 8'h5a;  //Z
      default: tx_out = 8'h00;
    endcase
  
endmodule 