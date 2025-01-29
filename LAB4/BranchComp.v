module BranchComp (
    input [1:0] sel,
    input zero,blt,
    output reg out
);

    always @(*) begin
        if(sel == 2'b00) out = zero;
        else if(sel == 2'b01) out = ~zero;
        else if(sel == 2'b10) out = blt;
        else out = ~blt;
    end
    
endmodule

