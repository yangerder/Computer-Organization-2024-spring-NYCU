module IDEX(
    input clk,
    input [4:0] ID_readReg1,
    input [4:0] ID_readReg2,
    input [31:0] ID_readData1,
    input [31:0] ID_readData2,
    input [4:0] ID_writeReg,
    input [31:0] ID_PC,
    input [31:0] ID_PCaddfour,
    input [31:0] ID_imm,
    input [31:0] ID_inst,
    input IDEX_flush,

    output reg [4:0] EX_readReg1,
    output reg [4:0] EX_readReg2,
    output reg [31:0] EX_readData1,
    output reg [31:0] EX_readData2,
    output reg [4:0] EX_writeReg,
    output reg [31:0] EX_PC,
    output reg [31:0] EX_PCaddfour,
    output reg [31:0] EX_imm,
    output reg [31:0] EX_inst,

    input ID_branch,
    input [1:0] ID_branchType,
    input ID_memRead,
    input [1:0] ID_memtoReg, 
    input [1:0] ID_ALUOp,
    input ID_memWrite,
    input ID_ALUSrc,
    input ID_regWrite,
    input ID_jump,
    input ID_JumpSrc,

    output reg EX_branch,
    output reg [1:0] EX_branchType,
    output reg EX_memRead,
    output reg [1:0] EX_memtoReg, 
    output reg [1:0] EX_ALUOp,
    output reg EX_memWrite,
    output reg EX_ALUSrc,
    output reg EX_regWrite,
    output reg EX_jump,
    output reg EX_JumpSrc
);

    always @(posedge clk) begin
        if(IDEX_flush) begin
            {EX_readReg1, EX_readReg2, EX_writeReg, EX_readData1, EX_readData2, EX_PC, EX_PCaddfour, EX_imm, EX_inst, EX_branch, EX_branchType, EX_memRead, EX_memtoReg, EX_ALUOp, EX_memWrite, EX_ALUSrc, EX_regWrite, EX_jump, EX_JumpSrc} <= 0;
        end
        else begin
            EX_readReg1 <= ID_readReg1;
            EX_readReg2 <= ID_readReg2;
            EX_writeReg <= ID_writeReg;
            EX_readData1 <= ID_readData1;
            EX_readData2 <= ID_readData2;
            EX_PC <= ID_PC;
            EX_PCaddfour <= ID_PCaddfour;
            EX_imm <= ID_imm;
            EX_inst <= ID_inst;
            EX_branch <= ID_branch;
            EX_branchType <= ID_branchType;
            EX_memRead <= ID_memRead;
            EX_memtoReg <= ID_memtoReg;
            EX_ALUOp <= ID_ALUOp;
            EX_memWrite <= ID_memWrite;
            EX_ALUSrc <= ID_ALUSrc;
            EX_regWrite <= ID_regWrite;
            EX_jump <= ID_jump;
            EX_JumpSrc <= ID_JumpSrc;
        end
    end
  
endmodule
