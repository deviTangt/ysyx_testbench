module bcd7seg(
    input      [3:0] b,
    output     [6:0] h
);

wire b3,b2,b1,b0;
assign {b3,b2,b1,b0} = b;

// h[0] a段
assign h[0] = (~b3&~b2&~b1&b0) | (~b3&b2&~b1&~b0) | (b3&~b2&b1&b0) | (b3&b2&~b1&b0);
// h[1] b段
assign h[1] = (~b3&b2&~b1&b0) | (~b3&b2&b1&~b0) | (b3&~b2&b1&b0) | (b3&b2&~b1&~b0);
// h[2] c段
assign h[2] = (~b3&~b2&b1&~b0) | (b3&b2&~b1&~b0) | (b3&b2&b1&~b0);
// h[3] d段
assign h[3] = (~b3&b2&~b1&~b0) | (~b3&~b2&~b1&b0) | (b3&~b2&b1&~b0) | (b3&b2&b1&b0);
// h[4] e段
assign h[4] = (~b3&b2&~b1&~b0) | (~b3&~b2&~b1&b0) | (~b3&~b2&b1&b0) | (b3&~b2&~b1&~b0);
// h[5] f段
assign h[5] = (~b3&~b2&~b1&b0) | (~b3&~b2&b1&~b0) | (~b3&b2&b1&b0) | (b3&~b2&b1&b0);
// h[6] g段
assign h[6] = (~b3&b2&b1&b0) | (b3&~b2&~b1&~b0) | (b3&~b2&b1&b0) | (b3&b2&b1&~b0);

endmodule