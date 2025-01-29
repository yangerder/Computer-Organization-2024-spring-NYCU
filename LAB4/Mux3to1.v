module Mux3to1 #(
    parameter size = 32
) 
(
    input [1:0] sel,
    input signed [size-1:0] s0,
    input signed [size-1:0] s1,
    input signed [size-1:0] s2,
    output signed [size-1:0] out
);

    assign out = (sel[1] == 1'b1) ? s2 : (sel[0] == 1'b1) ? s1 : s0;
    
endmodule

