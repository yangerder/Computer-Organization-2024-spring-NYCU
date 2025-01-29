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

//pC
wire[31:0]pc_o_w;
//adder
//wire[31:0]a;
//wire[31:0]b;
//instmem
wire[31:0]inst_w;
//control
wire regWrite_w,branch_w,ALUSrc_w,memRead_w,memWrite_w,memtoReg_w;
wire jump_w,ALUPC_w;
wire[1:0]ALUOp_w;
//MUX 
wire [31:0] mux_alusrc_w;
wire [31:0] mux_pc_source_w;
wire [31:0] mux_pc_source_w_JALR;
wire [31:0] mux_dm_W;
wire [31:0] mux_dm_jump;

//regist
wire[31:0]readData1_w;
wire[31:0]readData2_w;
//adder
wire[31:0]sum_adder1_w;
wire[31:0]sum_adder2_W;
//immgen
wire[31:0]imm_W;
//
wire[31:0]shift_W;
//alu
wire [31:0] ALU_result_w;
wire ALU_zero_W,branch_zero;
wire mux_bran_jump_sel;
//alucontrol
wire[3:0]Aluctl_W;
//datamemory
wire[31:0]readdata_w;

PC m_PC(
    .clk(clk),
    .rst(start),
    .pc_i(mux_pc_source_w_JALR),
    .pc_o(pc_o_w)
);

Adder m_Adder_1(
    .a(pc_o_w),
    .b(4),
    .sum(sum_adder1_w)
);

InstructionMemory m_InstMem(
    .readAddr(pc_o_w),
    .inst(inst_w)
);

Control m_Control(
    .opcode(inst_w[6:0]),
    .branch(branch_w),
    .memRead(memRead_w),
    .memtoReg(memtoReg_w),
    .ALUOp(ALUOp_w),
    .memWrite(memWrite_w),
    .ALUSrc(ALUSrc_w),
    .regWrite(regWrite_w),
    .jump(jump_w),
    .ALUPC(ALUPC_w)
);

// For Student: 
// Do not change the Register instance name!
// Or you will fail validation.

Register m_Register(
    .clk(clk),
    .rst(start),
    .regWrite(regWrite_w),
    .readReg1(inst_w[19:15]),
    .readReg2(inst_w[24:20]),
    .writeReg(inst_w[11:7]),
    .writeData(mux_dm_jump),
    .readData1(readData1_w),
    .readData2(readData2_w)
);

// ======= for validation ======= 
// == Dont change this section ==
assign r = m_Register.regs;
// ======= for vaildation =======

ImmGen m_ImmGen(
    .inst(inst_w[31:0]),
    .imm(imm_W)
);

ShiftLeftOne m_ShiftLeftOne(
    .i(imm_W),
    .o(shift_W)
);

Adder m_Adder_2(
    .a(pc_o_w),
    .b(shift_W),
    .sum(sum_adder2_W)
);

and a(branch_zero,branch_w,ALU_zero_W);
or b(mux_bran_jump_sel,branch_zero,jump_w);

Mux2to1 #(.size(32)) m_Mux_PC(
    .sel(mux_bran_jump_sel),
    .s0(sum_adder1_w),
    .s1(sum_adder2_W),
    .out(mux_pc_source_w)
);

Mux2to1 #(.size(32)) m_Mux_JUMP(//jalr
    .sel(ALUPC_w),
    .s0(mux_pc_source_w),
    .s1(ALU_result_w),
    .out(mux_pc_source_w_JALR)
);

Mux2to1 #(.size(32)) m_Mux_ALU(
    .sel(ALUSrc_w),
    .s0(readData2_w),
    .s1(imm_W),
    .out(mux_alusrc_w)
);




ALUCtrl m_ALUCtrl(
    .ALUOp(ALUOp_w),
    .funct7(inst_w[30]),
    .funct3(inst_w[14:12]),
    .ALUCtl(Aluctl_W)
);

ALU m_ALU(
    .ALUctl(Aluctl_W),
    .A(readData1_w),
    .B(mux_alusrc_w),
    .ALUOut(ALU_result_w),
    .zero(ALU_zero_W)
);

DataMemory m_DataMemory(
    .rst(start),
    .clk(clk),
    .memWrite(memWrite_w),
    .memRead(memRead_w),
    .address(ALU_result_w),
    .writeData(readData2_w),
    .readData(readdata_w)
);

Mux2to1 #(.size(32)) m_Mux_WriteData(
    .sel(memtoReg_w),
    .s0(ALU_result_w),
    .s1(readdata_w),
    .out(mux_dm_W)
);
Mux2to1 #(.size(32)) m_Mux_jump(
    .sel(jump_w),
    .s0(mux_dm_W),
    .s1(sum_adder1_w),
    .out(mux_dm_jump)
);

endmodule
