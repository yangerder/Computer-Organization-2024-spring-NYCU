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
//if_id
wire[31:0]IFID_pcout;
wire[31:0]IFID_inst_w;
//IDEX
wire IDEX_branch_w,IDEX_memRead_w,IDEX_memtoReg_w,IDEX_memWrite_w,IDEX_ALUSrc_w,IDEX_regWrite_w;
wire [1:0]IDEX_ALUOp_w;
wire [31:0]IDEX_pcout,IDEX_readData1_w,IDEX_readData2_w,IDEX_imm_W;
wire IDEX_inst_w_30;
wire [2:0]IDEX_inst_w_14_12;
wire [4:0]IDEX_inst_w_11_7;
//EX_MEM
wire EX_MEM_branch_w,EX_MEM_memRead_w,EX_MEM_memtoReg_w,EX_MEM_memWrite_w,EX_MEM_regWrite_w;
wire EX_MEM_ALU_zero_W;
wire [31:0]EX_MEM_sum_adder2_W,EX_MEM_ALU_result_w,EX_MEM_readData2_w;
wire [4:0]EX_MEM_inst_w_11_7;
//MEM_WB
wire MEM_WB_memtoReg_w,MEM_WB_regWrite_w;
wire [31:0]MEM_WB_ALU_result_w,MEM_WB_readdata_w;
wire [4:0]MEM_WB_inst_w_11_7;

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
    .opcode(IFID_inst_w[6:0]),
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
    .regWrite(MEM_WB_regWrite_w),
    .readReg1(IFID_inst_w[19:15]),
    .readReg2(IFID_inst_w[24:20]),
    .writeReg(MEM_WB_inst_w_11_7),
    .writeData(mux_dm_jump),
    .readData1(readData1_w),
    .readData2(readData2_w)
);

// ======= for validation ======= 
// == Dont change this section ==
assign r = m_Register.regs;
// ======= for vaildation =======

ImmGen m_ImmGen(
    .inst(IFID_inst_w[31:0]),
    .imm(imm_W)
);

ShiftLeftOne m_ShiftLeftOne(
    .i(IDEX_imm_W),
    .o(shift_W)
);



pipe #(.size(64)) IF_ID(
    .clk(clk),
    .rst(start),
    .pipe_data_i({pc_o_w,inst_w}),
    .pipe_data_o({IFID_pcout,IFID_inst_w})
);

pipe #(.size(145)) ID_EX(
    .clk(clk),
    .rst(start),
    .pipe_data_i({branch_w,memRead_w,memtoReg_w,ALUOp_w,memWrite_w,ALUSrc_w,regWrite_w,IFID_pcout,readData1_w,readData2_w,imm_W,IFID_inst_w[30],IFID_inst_w[14:12],IFID_inst_w[11:7]}),
    .pipe_data_o({IDEX_branch_w,IDEX_memRead_w,IDEX_memtoReg_w,IDEX_ALUOp_w,IDEX_memWrite_w,IDEX_ALUSrc_w,IDEX_regWrite_w,IDEX_pcout,IDEX_readData1_w,IDEX_readData2_w,IDEX_imm_W,IDEX_inst_w_30,IDEX_inst_w_14_12,IDEX_inst_w_11_7})
);




pipe #(.size(107)) EX_MEM(
    .clk(clk),
    .rst(start),
    .pipe_data_i({IDEX_branch_w,IDEX_memRead_w,IDEX_memtoReg_w,IDEX_memWrite_w,IDEX_regWrite_w,sum_adder2_W,ALU_zero_W,ALU_result_w,IDEX_readData2_w,IDEX_inst_w_11_7}),
    .pipe_data_o({EX_MEM_branch_w,EX_MEM_memRead_w,EX_MEM_memtoReg_w,EX_MEM_memWrite_w,EX_MEM_regWrite_w,EX_MEM_sum_adder2_W,EX_MEM_ALU_zero_W,EX_MEM_ALU_result_w,EX_MEM_readData2_w,EX_MEM_inst_w_11_7})
);




pipe #(.size(71)) MEM_WB(
    .clk(clk),
    .rst(start),
    .pipe_data_i({EX_MEM_memtoReg_w,EX_MEM_regWrite_w,EX_MEM_ALU_result_w,readdata_w,EX_MEM_inst_w_11_7}),
    .pipe_data_o({MEM_WB_memtoReg_w,MEM_WB_regWrite_w,MEM_WB_ALU_result_w,MEM_WB_readdata_w,MEM_WB_inst_w_11_7})
);



Adder m_Adder_2(
    .a(IDEX_pcout),
    .b(shift_W),
    .sum(sum_adder2_W)
);

and a(branch_zero,EX_MEM_branch_w,EX_MEM_ALU_zero_W);
or b(mux_bran_jump_sel,branch_zero,jump_w);

Mux2to1 #(.size(32)) m_Mux_PC(
    .sel(mux_bran_jump_sel),
    .s0(sum_adder1_w),
    .s1(EX_MEM_sum_adder2_W),
    .out(mux_pc_source_w)
);

Mux2to1 #(.size(32)) m_Mux_JUMP(//jalr
    .sel(ALUPC_w),
    .s0(mux_pc_source_w),
    .s1(ALU_result_w),
    .out(mux_pc_source_w_JALR)
);

Mux2to1 #(.size(32)) m_Mux_ALU(
    .sel(IDEX_ALUSrc_w),
    .s0(IDEX_readData2_w),
    .s1(IDEX_imm_W),
    .out(mux_alusrc_w)
);




ALUCtrl m_ALUCtrl(
    .ALUOp(IDEX_ALUOp_w),
    .funct7(IDEX_inst_w_30),
    .funct3(IDEX_inst_w_14_12),
    .ALUCtl(Aluctl_W)
);

ALU m_ALU(
    .ALUctl(Aluctl_W),
    .A(IDEX_readData1_w),
    .B(mux_alusrc_w),
    .ALUOut(ALU_result_w),
    .zero(ALU_zero_W)
);

DataMemory m_DataMemory(
    .rst(start),
    .clk(clk),
    .memWrite(EX_MEM_memWrite_w),
    .memRead(EX_MEM_memRead_w),
    .address(EX_MEM_ALU_result_w),
    .writeData(EX_MEM_readData2_w),
    .readData(readdata_w)
);

Mux2to1 #(.size(32)) m_Mux_WriteData(
    .sel(MEM_WB_memtoReg_w),
    .s0(MEM_WB_ALU_result_w),
    .s1(MEM_WB_readdata_w),
    .out(mux_dm_W)
);
Mux2to1 #(.size(32)) m_Mux_jump(
    .sel(jump_w),
    .s0(mux_dm_W),
    .s1(sum_adder1_w),
    .out(mux_dm_jump)
);



endmodule


