module bcd7seg(
    input      [3:0] b,
    output     [6:0] h
);

wire b3,b2,b1,b0;
assign {b3,b2,b1,b0} = b;

MuxKeyWithDefault #(10, 4, 7) i0 (h, b, 7'h00, {
    4'd0, 7'b1111110,
    4'd1, 7'b0110000,
    4'd2, 7'b1101101,
    4'd3, 7'b1111001,
    4'd4, 7'b0110011,
    4'd5, 7'b1011011,
    4'd6, 7'b1011111,
    4'd7, 7'b1110000,
    4'd8, 7'h7F,
    4'd9, 7'h6F
  });

endmodule