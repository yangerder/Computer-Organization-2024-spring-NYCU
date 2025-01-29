module Control (
    input [6:0] opcode,
    input [2:0] funct3,
    output reg memRead,
    output reg [1:0] memtoReg,
    output reg [1:0] ALUOp,
    output reg branch,
    output reg [1:0] branchType,
    output reg memWrite,
    output reg ALUSrc,
    output reg regWrite,
    output reg jump,
    output reg JumpSrc
);
    
    reg [12:0] ctrl;
    assign {ALUSrc, JumpSrc, memtoReg, regWrite, memRead, memWrite, branch, branchType, jump, ALUOp} = ctrl;

    always @(*) begin
        case(opcode)
            7'b0110011: ctrl = 13'b0x001000xx010; // R
            7'b0000011: ctrl = 13'b1x011100xx000; // I
            7'b0100011: ctrl = 13'b1x000010xx000; // S
            7'b1100011: case(funct3) // B
                3'b000 : ctrl = 13'b0000000100001; // beq
                3'b001 : ctrl = 13'b0000000101001; // bne
                3'b100 : ctrl = 13'b0000000110001; // blt
                3'b101 : ctrl = 13'b0000000111001; // bge
                default: ctrl = 13'bxxxxxxxxxxxxx;
            endcase
            7'b0010011: ctrl = 13'b1x001000xx011; // I
            7'b1100111: ctrl = 13'b11101xx0xx100; // jalr
            7'b1101111: ctrl = 13'b10111xx0xx100; // jal
            default:    ctrl = 13'bxxxxxxxxxxxxx;
        endcase
    end

endmodule

