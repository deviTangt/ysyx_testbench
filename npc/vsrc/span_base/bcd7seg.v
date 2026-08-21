module bcd7seg(
    input      [3:0] b,
    output     [7:0] h
);

wire b3,b2,b1,b0;
assign {b3,b2,b1,b0} = b;

wire [7 : 0] y;
assign h = ~y;

MuxKeyWithDefault #(11, 4, 8) i0 (y, b, 8'h00, {
    4'd0,  8'b1111_1100,
    4'd1,  8'b0110_0000,
    4'd2,  8'b1101_1010,
    4'd3,  8'b1111_0010,
    4'd4,  8'b0110_0110,
    4'd5,  8'b1011_0110,
    4'd6,  8'b1011_1110,
    4'd7,  8'b1110_0000,
    4'd8,  8'b1111_1110,
    4'd9,  8'b1111_0110,
    4'd15, 8'b0000_0010
  });

endmodule