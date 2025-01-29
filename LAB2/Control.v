module Control (
    input [6:0] opcode,
    output reg branch,
    output reg memRead,
    output reg memtoReg,
    output reg [1:0] ALUOp,
    output reg memWrite,
    output reg ALUSrc,
    output reg regWrite,
    output reg jump,
    output reg ALUPC
);
    //complete
    // TODO: implement your Control here
    // Hint: follow the Architecture (figure in spec) to set output signal
    reg [9:0] ctl;
    assign {ALUSrc, memtoReg, regWrite, memRead, memWrite, branch, ALUOp,jump,ALUPC} = ctl;

    always @(*) begin
        case(opcode)
            7'b0110011: ctl = 10'b0010001000; // R
            7'b0100011: ctl = 10'b1x00100000; // S
            7'b1100011: ctl = 10'b0x00010100; // B
            7'b0000011: ctl = 10'b1111000000; // Il
            7'b0010011: ctl = 10'b1010001100; // Ii
            7'b1100111: ctl = 10'b111xx00011; // jalr
            7'b1101111: ctl = 10'b111xx00010; // jal 
            default:    ctl = 10'bxxxxxxxxxx;
        endcase
    end

endmodule

