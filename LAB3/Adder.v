module Adder (
    input signed [31:0] a,
    input signed [31:0] b,
    output signed [31:0] sum
);
//complete
    // Adder computes sum = a + b
    // The module is useful when accumulating PC (Program Counter)
//wire [31:0] sum;
assign sum=a+b;
    // TODO: implement your Adder here
    // Hint: you can use operator to implement


endmodule

