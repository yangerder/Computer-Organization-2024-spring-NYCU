module Control (
    input [6:0] opcode,
    output reg branch,
    output reg memRead,
    output reg memtoReg,
    output reg [1:0] ALUOp,
    output reg memWrite,
    output reg ALUSrc,
    output reg regWrite
);
    //complete
    // TODO: implement your Control here
    // Hint: follow the Architecture (figure in spec) to set output signal
    reg [7:0] ctl;
    assign {ALUSrc, memtoReg, regWrite, memRead, memWrite, branch, ALUOp} = ctl;

    always @(*) begin
        case(opcode)
            7'b0110011: ctl = 8'b00100010; // R
            7'b0100011: ctl = 8'b1x001000; // S
            7'b1100011: ctl = 8'b0x000101; // B
            7'b0000011: ctl = 8'b11110000; // Il
            7'b0010011: ctl = 8'b10100011; // Ii 
            default:    ctl = 8'bxxxxxxxx;
        endcase
    end

endmodule

