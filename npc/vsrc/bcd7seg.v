module bcd7seg(
    input      [3:0] b,
    output     [7:0] h
);

wire b3,b2,b1,b0;
assign {b3,b2,b1,b0} = b;

MuxKeyWithDefault #(10, 4, 8) i0 (h, b, 8'h00, {
    4'd0, 8'b11111101,
    4'd1, 8'b01100000,
    4'd2, 8'b11011010,
    4'd3, 8'b11110010,
    4'd4, 8'b01100110,
    4'd5, 8'b10110110,
    4'd6, 8'b10111110,
    4'd7, 8'b11100000,
    4'd8, 8'b0,
    4'd9, 8'b0
  });

endmodule