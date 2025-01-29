module PipelineCPU (
    input clk,
    input start,
    output signed [31:0] r [0:31]
);

// IF
wire [31:0] IF_JumpSrcOut, IF_PCSrcOut,IF_inst, IF_PC, IF_PCaddfour;

// ID
wire [31:0] ID_inst, ID_PC, ID_PCaddfour,ID_readData1, ID_readData2, ID_imm;
wire [1:0] ID_branchType, ID_memtoReg, ID_ALUOp;
wire ID_branch, ID_memRead, ID_memWrite, ID_ALUSrc, ID_regWrite, ID_jump, ID_JumpSrc;

// EX
/* verilator lint_off UNUSEDSIGNAL */
wire [31:0] EX_readData1, EX_readData2, EX_PC, EX_PCaddfour, EX_imm, EX_inst,EX_PCTarget, ALUA, ALUB,EX_ALUOut, EX_writeData;
wire [4:0] EX_readReg1, EX_readReg2, EX_writeReg;
wire [3:0] ALUCtl;
wire [1:0] EX_branchType, EX_memtoReg, EX_ALUOp;
wire EX_branch, EX_memRead, EX_memWrite, EX_ALUSrc, EX_regWrite, EX_jump, EX_JumpSrc,EX_PCSrc, zero, blt, branchCompOut, andOut;


// MEM
wire [31:0] MEM_ALUOut, MEM_writeData, MEM_PCaddfour,MEM_readData;
wire [4:0] MEM_writeReg;
wire [1:0] MEM_memtoReg;
wire MEM_memRead, MEM_memWrite, MEM_regWrite;

// WB
wire [31:0] WB_ALUOut, WB_PCaddfour, WB_readData,WB_result;
wire [4:0] WB_writeReg;
wire [1:0] WB_memtoReg;
wire WB_regWrite;
//Forward
wire [1:0] EX_forward1, EX_forward2;
// Hazard
wire stallPC, IFID_stall, IFID_flush, IDEX_flush;


PC m_PC(
    .clk(clk),
    .rst(start),
    .stallPC(stallPC),
    .pc_i(IF_PCSrcOut),
    .pc_o(IF_PC)
);

InstructionMemory m_InstMem(
    .readAddr(IF_PC),
    .inst(IF_inst)
);

Adder m_Adder_PCIF(
    .a(IF_PC),
    .b(4),
    .sum(IF_PCaddfour)
);

Hazard m_Hazard(
    .ID_readReg1(ID_inst[19:15]),
    .ID_readReg2(ID_inst[24:20]),
    .EX_PCSrc(EX_PCSrc),
    .EX_memtoReg(EX_memtoReg),
    .EX_writeReg(EX_writeReg),
    .stallPC(stallPC),
    .IFID_stall(IFID_stall),
    .IFID_flush(IFID_flush),
    .IDEX_flush(IDEX_flush)
);

IFID m_IFID(
    .clk(clk),
    .IF_PC(IF_PC),
    .IF_PCaddfour(IF_PCaddfour),
    .IF_inst(IF_inst),
    .IFID_flush(IFID_flush),
    .IFID_stall(IFID_stall),
    .ID_inst(ID_inst),
    .ID_PC(ID_PC),
    .ID_PCaddfour(ID_PCaddfour)
);

Control m_Control(
    .opcode(ID_inst[6:0]),
    .funct3(ID_inst[14:12]),
    .branch(ID_branch),
    .branchType(ID_branchType),
    .memRead(ID_memRead),
    .memtoReg(ID_memtoReg),
    .ALUOp(ID_ALUOp),
    .memWrite(ID_memWrite),
    .ALUSrc(ID_ALUSrc),
    .regWrite(ID_regWrite),
    .jump(ID_jump),
    .JumpSrc(ID_JumpSrc)
);

// For Student: 
// Do not change the Register instance name!
// Or you will fail validation.

Register m_Register(
    .clk(clk),
    .rst(start),
    .regWrite(WB_regWrite),
    .readReg1(ID_inst[19:15]),
    .readReg2(ID_inst[24:20]),
    .writeReg(WB_writeReg),
    .writeData(WB_result),
    .readData1(ID_readData1),
    .readData2(ID_readData2)
);

// ======= for validation ======= 
// == Dont change this section ==
assign r = m_Register.regs;
// ======= for vaildation =======

ImmGen m_ImmGen(
    .inst(ID_inst),
    .imm(ID_imm)
);

IDEX m_IDEX(
    .clk(clk),
    .ID_PC(ID_PC),
    .ID_PCaddfour(ID_PCaddfour),
    .ID_imm(ID_imm),
    .ID_inst(ID_inst),
    .ID_readReg1(ID_inst[19:15]),
    .ID_readReg2(ID_inst[24:20]),
    .ID_writeReg(ID_inst[11:7]),
    .ID_readData1(ID_readData1),
    .ID_readData2(ID_readData2),
    .IDEX_flush(IDEX_flush),
    .EX_readReg1(EX_readReg1),
    .EX_readReg2(EX_readReg2),
    .EX_PC(EX_PC),
    .EX_writeReg(EX_writeReg),
    .EX_readData1(EX_readData1),
    .EX_readData2(EX_readData2),
    .EX_PCaddfour(EX_PCaddfour),
    .EX_imm(EX_imm),
    .EX_inst(EX_inst),
    .ID_branch(ID_branch),
    .ID_branchType(ID_branchType),
    .ID_memWrite(ID_memWrite),
    .ID_ALUSrc(ID_ALUSrc),
    .ID_regWrite(ID_regWrite),
    .ID_jump(ID_jump),
    .ID_JumpSrc(ID_JumpSrc),
    .ID_memRead(ID_memRead),
    .ID_memtoReg(ID_memtoReg),
    .ID_ALUOp(ID_ALUOp),
    .EX_memWrite(EX_memWrite),
    .EX_ALUSrc(EX_ALUSrc),
    .EX_branch(EX_branch),
    .EX_branchType(EX_branchType),
    .EX_memRead(EX_memRead),
    .EX_memtoReg(EX_memtoReg),
    .EX_ALUOp(EX_ALUOp),
    .EX_regWrite(EX_regWrite),
    .EX_jump(EX_jump),
    .EX_JumpSrc(EX_JumpSrc)
);

BranchComp m_BranchComp(
    .sel(EX_branchType),
    .zero(zero),
    .blt(blt),
    .out(branchCompOut)
);

and A1(andOut, EX_branch, branchCompOut);
or O1(EX_PCSrc, andOut, EX_jump);

Mux2to1 #(.size(32)) m_Mux_PCSrcIF(
    .sel(EX_PCSrc),
    .s0(IF_PCaddfour),
    .s1(IF_JumpSrcOut),
    .out(IF_PCSrcOut)
);

Mux3to1 #(.size(32)) m_Mux_ForwardAEX(
    .sel(EX_forward1),
    .s0(EX_readData1),
    .s1(WB_result),
    .s2(MEM_ALUOut),
    .out(ALUA)
);

Mux3to1 #(.size(32)) m_Mux_ForwardBEX(
    .sel(EX_forward2),
    .s0(EX_readData2),
    .s1(WB_result),
    .s2(MEM_ALUOut),
    .out(EX_writeData)
);

Adder m_Adder_PCaddEX(
    .a(EX_PC),
    .b(EX_imm),
    .sum(EX_PCTarget)
);

ALUCtrl m_ALUCtrlEX(
    .ALUOp(EX_ALUOp),
    .funct7(EX_inst[30]),
    .funct3(EX_inst[14:12]),
    .ALUCtl(ALUCtl)
);

Mux2to1 #(.size(32)) m_Mux_ALUSrcEX(
    .sel(EX_ALUSrc),
    .s0(EX_writeData),
    .s1(EX_imm),
    .out(ALUB)
);

ALU m_ALU(
    .ALUctl(ALUCtl),
    .A(ALUA),
    .B(ALUB),
    .ALUOut(EX_ALUOut),
    .zero(zero),
    .blt(blt)
);


EXMEM m_EXMEM(
    .clk(clk),
    .EX_ALUOut(EX_ALUOut),
    .EX_writeReg(EX_writeReg),
    .EX_memtoReg(EX_memtoReg),
    .EX_memRead(EX_memRead),
    .EX_memWrite(EX_memWrite),
    .EX_writeData(EX_writeData),
    .EX_PCaddfour(EX_PCaddfour),
    .EX_regWrite(EX_regWrite),
    .MEM_ALUOut(MEM_ALUOut),
    .MEM_memtoReg(MEM_memtoReg),
    .MEM_memRead(MEM_memRead),
    .MEM_writeData(MEM_writeData),
    .MEM_PCaddfour(MEM_PCaddfour),
    .MEM_writeReg(MEM_writeReg),
    .MEM_memWrite(MEM_memWrite),
    .MEM_regWrite(MEM_regWrite)
);


DataMemory m_DataMemory(
    .rst(start),
    .clk(clk),
    .memWrite(MEM_memWrite),
    .memRead(MEM_memRead),
    .address(MEM_ALUOut),
    .writeData(MEM_writeData),
    .readData(MEM_readData)
);


MEMWB m_MEMWB(
    .clk(clk),
    .MEM_memtoReg(MEM_memtoReg),
    .MEM_regWrite(MEM_regWrite),
    .MEM_PCaddfour(MEM_PCaddfour),
    .MEM_ALUOut(MEM_ALUOut),
    .MEM_writeReg(MEM_writeReg),
    .MEM_readData(MEM_readData),
    .WB_ALUOut(WB_ALUOut),
    .WB_readData(WB_readData),
    .WB_writeReg(WB_writeReg),
    .WB_PCaddfour(WB_PCaddfour),
    .WB_memtoReg(WB_memtoReg),
    .WB_regWrite(WB_regWrite)
);


Mux3to1 #(.size(32)) m_Mux_WB(
    .sel(WB_memtoReg),
    .s0(WB_ALUOut),
    .s1(WB_readData),
    .s2(WB_PCaddfour),
    .out(WB_result)
);

Forward m_Forward(
    .EX_readReg1(EX_readReg1),
    .EX_readReg2(EX_readReg2),
    .MEM_writeReg(MEM_writeReg),
    .WB_writeReg(WB_writeReg),
    .MEM_regWrite(MEM_regWrite),
    .WB_regWrite(WB_regWrite),
    .EX_forward1(EX_forward1),
    .EX_forward2(EX_forward2)
);

Mux2to1 #(.size(32)) m_Mux_JumpSrcIF(
    .sel(EX_JumpSrc),
    .s0(EX_PCTarget),
    .s1(EX_ALUOut),
    .out(IF_JumpSrcOut)
);
endmodule
