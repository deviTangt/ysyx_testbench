module bcd7seg(
    input      [3:0] b,
    output     [6:0] h
);

wire b3,b2,b1,b0;
assign {b3,b2,b1,b0} = b;

MuxKeyWithDefault #(10, 4, 7) i0 (h, b, 7'h00, {
    4'd0, 7'h3F,
    4'd1, 7'h06,
    4'd2, 7'h5B,
    4'd3, 7'h4F,
    4'd4, 7'h66,
    4'd5, 7'h6D,
    4'd6, 7'h7D,
    4'd7, 7'h07,
    4'd8, 7'h7F,
    4'd9, 7'h6F
  });

endmodule