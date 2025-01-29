module SingleCycleCPU (
    input clk,
    input start,
    output signed [31:0] r [0:31]
);

// When input start is zero, cpu should reset
// When input start is high, cpu start running

// TODO: connect wire to realize SingleCycleCPU
// The following provides simple template,
// you can modify it as you wish except I/O pin and register module
wire[31:0] pc_out, Mux_PC_out, pc_add_4, inst_out, Mux_WriteData_out, rd_1, rd_2, Mux_Mux_WriteData_out;
wire reg jalr, jump, branch, memRead, memtoReg, memWrite, ALUSrc, regWrite;
wire reg[1:0] ALUOp;
wire[31:0] imm, shift_out, pc_add_shift, Mux_ALU_out, readData, ALUOut, Mux_Mux_PC_out;
wire branch_zero, zero, jump_branch_zero;
wire[3:0] ALUCtl;

wire reg[31:0] ID_pc_out, EX_pc_out, ID_inst_out, EX_rd_1, EX_rd_2, MEM_rd_2;
wire reg EX_branch, EX_memRead, EX_memtoReg, EX_memWrite, EX_ALUSrc, EX_regWrite;
wire reg[1:0] EX_ALUOp;
wire reg[31:0] EX_imm, MEM_pc_add_shift, WB_readData, MEM_ALUOut, WB_ALUOut, WB_readData;
wire reg MEM_zero;
wire reg MEM_branch, MEM_memRead, MEM_memtoReg, MEM_memWrite, MEM_regWrite;
wire reg WB_memtoReg, WB_regWrite;
wire reg EX_inst_out_30;
wire reg[2:0] EX_inst_out_1412;
wire reg[4:0] EX_inst_out_1107, MEM_inst_out_1107, WB_inst_out_1107;

Pipeline #(.size(64))m_IFID(
    .clk(clk),
    .rst(start),
    .pl_i({pc_out, inst_out}),
    .pl_o({ID_pc_out, ID_inst_out})
);

Pipeline #(.size(145))m_IDEX(
    .clk(clk),
    .rst(start),
    .pl_i({ALUOp, ID_pc_out, ID_inst_out[30], ID_inst_out[14:12], ID_inst_out[11:7], rd_1, rd_2, branch, memRead, memtoReg, memWrite, ALUSrc, regWrite, imm}),
    .pl_o({EX_ALUOp, EX_pc_out, EX_inst_out_30, EX_inst_out_1412, EX_inst_out_1107, EX_rd_1, EX_rd_2, EX_branch, EX_memRead, EX_memtoReg, EX_memWrite, EX_ALUSrc, EX_regWrite, EX_imm})
);

Pipeline #(.size(107))m_EXMEM(
    .clk(clk),
    .rst(start),
    .pl_i({EX_branch, EX_memRead, EX_memtoReg, EX_memWrite, EX_regWrite, pc_add_shift, zero, ALUOut, EX_rd_2, EX_inst_out_1107}),
    .pl_o({MEM_branch, MEM_memRead, MEM_memtoReg, MEM_memWrite, MEM_regWrite, MEM_pc_add_shift, MEM_zero, MEM_ALUOut, MEM_rd_2, MEM_inst_out_1107})
);

Pipeline #(.size(71))m_MEMWB(
    .clk(clk),
    .rst(start),
    .pl_i({MEM_memtoReg, MEM_regWrite, readData, MEM_ALUOut, MEM_inst_out_1107}),
    .pl_o({WB_memtoReg, WB_regWrite, WB_readData, WB_ALUOut, WB_inst_out_1107})
);

PC m_PC(
    .clk(clk),
    .rst(start),
    .pc_i(Mux_Mux_PC_out),
    .pc_o(pc_out)
);

Adder m_Adder_1(
    .a(pc_out),
    .b(4),
    .sum(pc_add_4)
);

InstructionMemory m_InstMem(
    .readAddr(pc_out),
    .inst(inst_out)
);

Control m_Control(
    .opcode(ID_inst_out[6:0]),
    .jalr(jalr),
    .jump(jump),
    .branch(branch),
    .memRead(memRead),
    .memtoReg(memtoReg),
    .ALUOp(ALUOp),
    .memWrite(memWrite),
    .ALUSrc(ALUSrc),
    .regWrite(regWrite)
);

// For Student: 
// Do not change the Register instance name!
// Or you will fail validation.

Register m_Register(
    .clk(clk),
    .rst(start),
    .regWrite(WB_regWrite),
    .readReg1(ID_inst_out[19:15]),
    .readReg2(ID_inst_out[24:20]),
    .writeReg(WB_inst_out_1107),
    .writeData(Mux_Mux_WriteData_out),
    .readData1(rd_1),
    .readData2(rd_2)
);

// ======= for validation ======= 
// == Dont change this section ==
assign r = m_Register.regs;
// ======= for vaildation =======
ImmGen m_ImmGen(
    .inst(ID_inst_out[31:0]),
    .imm(imm)
);

ShiftLeftOne m_ShiftLeftOne(
    .i(EX_imm),
    .o(shift_out)
);

Adder m_Adder_2(
    .a(EX_pc_out),
    .b(shift_out),
    .sum(pc_add_shift)
);

and a(branch_zero, MEM_branch, MEM_zero);
or b(jump_branch_zero, jump, branch_zero);

Mux2to1 #(.size(32)) m_Mux_PC(
    .sel(jump_branch_zero),
    .s0(pc_add_4),
    .s1(MEM_pc_add_shift),
    .out(Mux_PC_out)
);

Mux2to1 #(.size(32)) m_Mux_Mux_PC(
    .sel(jalr),
    .s0(Mux_PC_out),
    .s1(ALUOut),
    .out(Mux_Mux_PC_out)
);

Mux2to1 #(.size(32)) m_Mux_ALU(
    .sel(EX_ALUSrc),
    .s0(EX_rd_2),
    .s1(EX_imm),
    .out(Mux_ALU_out)
);


ALUCtrl m_ALUCtrl(
    .ALUOp(EX_ALUOp),
    .funct7(EX_inst_out_30),
    .funct3(EX_inst_out_1412),
    .ALUCtl(ALUCtl)
);

ALU m_ALU(
    .ALUctl(ALUCtl),
    .A(EX_rd_1),
    .B(Mux_ALU_out),
    .ALUOut(ALUOut),
    .zero(zero)
);

DataMemory m_DataMemory(
    .rst(start),
    .clk(clk),
    .memWrite(MEM_memWrite),
    .memRead(MEM_memRead),
    .address(MEM_ALUOut),
    .writeData(MEM_rd_2),
    .readData(readData)
);

Mux2to1 #(.size(32)) m_Mux_WriteData(
    .sel(WB_memtoReg),
    .s0(WB_ALUOut),
    .s1(WB_readData),
    .out(Mux_WriteData_out) 
);

Mux2to1 #(.size(32)) m_Mux_Mux(
    .sel(jump),
    .s0(Mux_WriteData_out),
    .s1(pc_add_4),
    .out(Mux_Mux_WriteData_out) 
);

endmodule