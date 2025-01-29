// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VPipelineCPU__Syms.h"


VL_ATTR_COLD void VPipelineCPU___024root__trace_init_sub__TOP__0(VPipelineCPU___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VPipelineCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPipelineCPU___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+107,"clk", false,-1);
    tracep->declBit(c+108,"start", false,-1);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+109+i*1,"r", true,(i+0), 31,0);
    }
    tracep->pushNamePrefix("PipelineCPU ");
    tracep->declBit(c+107,"clk", false,-1);
    tracep->declBit(c+108,"start", false,-1);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+109+i*1,"r", true,(i+0), 31,0);
    }
    tracep->declBus(c+141,"IF_JumpSrcOut", false,-1, 31,0);
    tracep->declBus(c+142,"IF_PCSrcOut", false,-1, 31,0);
    tracep->declBus(c+1,"IF_inst", false,-1, 31,0);
    tracep->declBus(c+2,"IF_PC", false,-1, 31,0);
    tracep->declBus(c+3,"IF_PCaddfour", false,-1, 31,0);
    tracep->declBus(c+4,"ID_inst", false,-1, 31,0);
    tracep->declBus(c+5,"ID_PC", false,-1, 31,0);
    tracep->declBus(c+6,"ID_PCaddfour", false,-1, 31,0);
    tracep->declBus(c+143,"ID_readData1", false,-1, 31,0);
    tracep->declBus(c+144,"ID_readData2", false,-1, 31,0);
    tracep->declBus(c+7,"ID_imm", false,-1, 31,0);
    tracep->declBus(c+82,"ID_branchType", false,-1, 1,0);
    tracep->declBus(c+83,"ID_memtoReg", false,-1, 1,0);
    tracep->declBus(c+84,"ID_ALUOp", false,-1, 1,0);
    tracep->declBit(c+85,"ID_branch", false,-1);
    tracep->declBit(c+86,"ID_memRead", false,-1);
    tracep->declBit(c+87,"ID_memWrite", false,-1);
    tracep->declBit(c+88,"ID_ALUSrc", false,-1);
    tracep->declBit(c+89,"ID_regWrite", false,-1);
    tracep->declBit(c+90,"ID_jump", false,-1);
    tracep->declBit(c+91,"ID_JumpSrc", false,-1);
    tracep->declBus(c+8,"EX_readData1", false,-1, 31,0);
    tracep->declBus(c+9,"EX_readData2", false,-1, 31,0);
    tracep->declBus(c+10,"EX_PC", false,-1, 31,0);
    tracep->declBus(c+11,"EX_PCaddfour", false,-1, 31,0);
    tracep->declBus(c+12,"EX_imm", false,-1, 31,0);
    tracep->declBus(c+13,"EX_inst", false,-1, 31,0);
    tracep->declBus(c+14,"EX_PCTarget", false,-1, 31,0);
    tracep->declBus(c+92,"ALUA", false,-1, 31,0);
    tracep->declBus(c+93,"ALUB", false,-1, 31,0);
    tracep->declBus(c+94,"EX_ALUOut", false,-1, 31,0);
    tracep->declBus(c+95,"EX_writeData", false,-1, 31,0);
    tracep->declBus(c+15,"EX_readReg1", false,-1, 4,0);
    tracep->declBus(c+16,"EX_readReg2", false,-1, 4,0);
    tracep->declBus(c+17,"EX_writeReg", false,-1, 4,0);
    tracep->declBus(c+18,"ALUCtl", false,-1, 3,0);
    tracep->declBus(c+19,"EX_branchType", false,-1, 1,0);
    tracep->declBus(c+20,"EX_memtoReg", false,-1, 1,0);
    tracep->declBus(c+21,"EX_ALUOp", false,-1, 1,0);
    tracep->declBit(c+22,"EX_branch", false,-1);
    tracep->declBit(c+96,"EX_memRead", false,-1);
    tracep->declBit(c+23,"EX_memWrite", false,-1);
    tracep->declBit(c+24,"EX_ALUSrc", false,-1);
    tracep->declBit(c+25,"EX_regWrite", false,-1);
    tracep->declBit(c+26,"EX_jump", false,-1);
    tracep->declBit(c+27,"EX_JumpSrc", false,-1);
    tracep->declBit(c+97,"EX_PCSrc", false,-1);
    tracep->declBit(c+98,"zero", false,-1);
    tracep->declBit(c+99,"blt", false,-1);
    tracep->declBit(c+145,"branchCompOut", false,-1);
    tracep->declBit(c+146,"andOut", false,-1);
    tracep->declBus(c+100,"MEM_ALUOut", false,-1, 31,0);
    tracep->declBus(c+28,"MEM_writeData", false,-1, 31,0);
    tracep->declBus(c+29,"MEM_PCaddfour", false,-1, 31,0);
    tracep->declBus(c+147,"MEM_readData", false,-1, 31,0);
    tracep->declBus(c+30,"MEM_writeReg", false,-1, 4,0);
    tracep->declBus(c+31,"MEM_memtoReg", false,-1, 1,0);
    tracep->declBit(c+101,"MEM_memRead", false,-1);
    tracep->declBit(c+32,"MEM_memWrite", false,-1);
    tracep->declBit(c+33,"MEM_regWrite", false,-1);
    tracep->declBus(c+34,"WB_ALUOut", false,-1, 31,0);
    tracep->declBus(c+35,"WB_PCaddfour", false,-1, 31,0);
    tracep->declBus(c+36,"WB_readData", false,-1, 31,0);
    tracep->declBus(c+37,"WB_result", false,-1, 31,0);
    tracep->declBus(c+38,"WB_writeReg", false,-1, 4,0);
    tracep->declBus(c+39,"WB_memtoReg", false,-1, 1,0);
    tracep->declBit(c+40,"WB_regWrite", false,-1);
    tracep->declBus(c+41,"EX_forward1", false,-1, 1,0);
    tracep->declBus(c+42,"EX_forward2", false,-1, 1,0);
    tracep->declBit(c+102,"stallPC", false,-1);
    tracep->declBit(c+103,"IFID_stall", false,-1);
    tracep->declBit(c+97,"IFID_flush", false,-1);
    tracep->declBit(c+104,"IDEX_flush", false,-1);
    tracep->pushNamePrefix("m_ALU ");
    tracep->declBus(c+18,"ALUctl", false,-1, 3,0);
    tracep->declBus(c+92,"A", false,-1, 31,0);
    tracep->declBus(c+93,"B", false,-1, 31,0);
    tracep->declBus(c+94,"ALUOut", false,-1, 31,0);
    tracep->declBit(c+98,"zero", false,-1);
    tracep->declBit(c+99,"blt", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("m_ALUCtrlEX ");
    tracep->declBus(c+21,"ALUOp", false,-1, 1,0);
    tracep->declBit(c+43,"funct7", false,-1);
    tracep->declBus(c+44,"funct3", false,-1, 2,0);
    tracep->declBus(c+18,"ALUCtl", false,-1, 3,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("m_Adder_PCIF ");
    tracep->declBus(c+2,"a", false,-1, 31,0);
    tracep->declBus(c+148,"b", false,-1, 31,0);
    tracep->declBus(c+3,"sum", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("m_Adder_PCaddEX ");
    tracep->declBus(c+10,"a", false,-1, 31,0);
    tracep->declBus(c+12,"b", false,-1, 31,0);
    tracep->declBus(c+14,"sum", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("m_BranchComp ");
    tracep->declBus(c+19,"sel", false,-1, 1,0);
    tracep->declBit(c+98,"zero", false,-1);
    tracep->declBit(c+99,"blt", false,-1);
    tracep->declBit(c+145,"out", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("m_Control ");
    tracep->declBus(c+45,"opcode", false,-1, 6,0);
    tracep->declBus(c+46,"funct3", false,-1, 2,0);
    tracep->declBit(c+86,"memRead", false,-1);
    tracep->declBus(c+83,"memtoReg", false,-1, 1,0);
    tracep->declBus(c+84,"ALUOp", false,-1, 1,0);
    tracep->declBit(c+85,"branch", false,-1);
    tracep->declBus(c+82,"branchType", false,-1, 1,0);
    tracep->declBit(c+87,"memWrite", false,-1);
    tracep->declBit(c+88,"ALUSrc", false,-1);
    tracep->declBit(c+89,"regWrite", false,-1);
    tracep->declBit(c+90,"jump", false,-1);
    tracep->declBit(c+91,"JumpSrc", false,-1);
    tracep->declBus(c+105,"ctrl", false,-1, 12,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("m_DataMemory ");
    tracep->declBit(c+108,"rst", false,-1);
    tracep->declBit(c+107,"clk", false,-1);
    tracep->declBit(c+32,"memWrite", false,-1);
    tracep->declBit(c+101,"memRead", false,-1);
    tracep->declBus(c+100,"address", false,-1, 31,0);
    tracep->declBus(c+28,"writeData", false,-1, 31,0);
    tracep->declBus(c+147,"readData", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("m_EXMEM ");
    tracep->declBit(c+107,"clk", false,-1);
    tracep->declBus(c+94,"EX_ALUOut", false,-1, 31,0);
    tracep->declBus(c+95,"EX_writeData", false,-1, 31,0);
    tracep->declBus(c+17,"EX_writeReg", false,-1, 4,0);
    tracep->declBus(c+11,"EX_PCaddfour", false,-1, 31,0);
    tracep->declBus(c+100,"MEM_ALUOut", false,-1, 31,0);
    tracep->declBus(c+28,"MEM_writeData", false,-1, 31,0);
    tracep->declBus(c+30,"MEM_writeReg", false,-1, 4,0);
    tracep->declBus(c+29,"MEM_PCaddfour", false,-1, 31,0);
    tracep->declBit(c+96,"EX_memRead", false,-1);
    tracep->declBus(c+20,"EX_memtoReg", false,-1, 1,0);
    tracep->declBit(c+23,"EX_memWrite", false,-1);
    tracep->declBit(c+25,"EX_regWrite", false,-1);
    tracep->declBit(c+101,"MEM_memRead", false,-1);
    tracep->declBus(c+31,"MEM_memtoReg", false,-1, 1,0);
    tracep->declBit(c+32,"MEM_memWrite", false,-1);
    tracep->declBit(c+33,"MEM_regWrite", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("m_Forward ");
    tracep->declBus(c+15,"EX_readReg1", false,-1, 4,0);
    tracep->declBus(c+16,"EX_readReg2", false,-1, 4,0);
    tracep->declBus(c+30,"MEM_writeReg", false,-1, 4,0);
    tracep->declBus(c+38,"WB_writeReg", false,-1, 4,0);
    tracep->declBit(c+33,"MEM_regWrite", false,-1);
    tracep->declBit(c+40,"WB_regWrite", false,-1);
    tracep->declBus(c+41,"EX_forward1", false,-1, 1,0);
    tracep->declBus(c+42,"EX_forward2", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("m_Hazard ");
    tracep->declBus(c+47,"ID_readReg1", false,-1, 4,0);
    tracep->declBus(c+48,"ID_readReg2", false,-1, 4,0);
    tracep->declBus(c+17,"EX_writeReg", false,-1, 4,0);
    tracep->declBit(c+97,"EX_PCSrc", false,-1);
    tracep->declBus(c+20,"EX_memtoReg", false,-1, 1,0);
    tracep->declBit(c+102,"stallPC", false,-1);
    tracep->declBit(c+97,"IFID_flush", false,-1);
    tracep->declBit(c+103,"IFID_stall", false,-1);
    tracep->declBit(c+104,"IDEX_flush", false,-1);
    tracep->declBit(c+106,"lwStall", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("m_IDEX ");
    tracep->declBit(c+107,"clk", false,-1);
    tracep->declBus(c+47,"ID_readReg1", false,-1, 4,0);
    tracep->declBus(c+48,"ID_readReg2", false,-1, 4,0);
    tracep->declBus(c+143,"ID_readData1", false,-1, 31,0);
    tracep->declBus(c+144,"ID_readData2", false,-1, 31,0);
    tracep->declBus(c+49,"ID_writeReg", false,-1, 4,0);
    tracep->declBus(c+5,"ID_PC", false,-1, 31,0);
    tracep->declBus(c+6,"ID_PCaddfour", false,-1, 31,0);
    tracep->declBus(c+7,"ID_imm", false,-1, 31,0);
    tracep->declBus(c+4,"ID_inst", false,-1, 31,0);
    tracep->declBit(c+104,"IDEX_flush", false,-1);
    tracep->declBus(c+15,"EX_readReg1", false,-1, 4,0);
    tracep->declBus(c+16,"EX_readReg2", false,-1, 4,0);
    tracep->declBus(c+8,"EX_readData1", false,-1, 31,0);
    tracep->declBus(c+9,"EX_readData2", false,-1, 31,0);
    tracep->declBus(c+17,"EX_writeReg", false,-1, 4,0);
    tracep->declBus(c+10,"EX_PC", false,-1, 31,0);
    tracep->declBus(c+11,"EX_PCaddfour", false,-1, 31,0);
    tracep->declBus(c+12,"EX_imm", false,-1, 31,0);
    tracep->declBus(c+13,"EX_inst", false,-1, 31,0);
    tracep->declBit(c+85,"ID_branch", false,-1);
    tracep->declBus(c+82,"ID_branchType", false,-1, 1,0);
    tracep->declBit(c+86,"ID_memRead", false,-1);
    tracep->declBus(c+83,"ID_memtoReg", false,-1, 1,0);
    tracep->declBus(c+84,"ID_ALUOp", false,-1, 1,0);
    tracep->declBit(c+87,"ID_memWrite", false,-1);
    tracep->declBit(c+88,"ID_ALUSrc", false,-1);
    tracep->declBit(c+89,"ID_regWrite", false,-1);
    tracep->declBit(c+90,"ID_jump", false,-1);
    tracep->declBit(c+91,"ID_JumpSrc", false,-1);
    tracep->declBit(c+22,"EX_branch", false,-1);
    tracep->declBus(c+19,"EX_branchType", false,-1, 1,0);
    tracep->declBit(c+96,"EX_memRead", false,-1);
    tracep->declBus(c+20,"EX_memtoReg", false,-1, 1,0);
    tracep->declBus(c+21,"EX_ALUOp", false,-1, 1,0);
    tracep->declBit(c+23,"EX_memWrite", false,-1);
    tracep->declBit(c+24,"EX_ALUSrc", false,-1);
    tracep->declBit(c+25,"EX_regWrite", false,-1);
    tracep->declBit(c+26,"EX_jump", false,-1);
    tracep->declBit(c+27,"EX_JumpSrc", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("m_IFID ");
    tracep->declBit(c+107,"clk", false,-1);
    tracep->declBus(c+1,"IF_inst", false,-1, 31,0);
    tracep->declBus(c+2,"IF_PC", false,-1, 31,0);
    tracep->declBus(c+3,"IF_PCaddfour", false,-1, 31,0);
    tracep->declBit(c+97,"IFID_flush", false,-1);
    tracep->declBit(c+103,"IFID_stall", false,-1);
    tracep->declBus(c+4,"ID_inst", false,-1, 31,0);
    tracep->declBus(c+5,"ID_PC", false,-1, 31,0);
    tracep->declBus(c+6,"ID_PCaddfour", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("m_ImmGen ");
    tracep->declBus(c+4,"inst", false,-1, 31,0);
    tracep->declBus(c+7,"imm", false,-1, 31,0);
    tracep->declBus(c+45,"opcode", false,-1, 6,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("m_InstMem ");
    tracep->declBus(c+2,"readAddr", false,-1, 31,0);
    tracep->declBus(c+1,"inst", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("m_MEMWB ");
    tracep->declBit(c+107,"clk", false,-1);
    tracep->declBus(c+100,"MEM_ALUOut", false,-1, 31,0);
    tracep->declBus(c+30,"MEM_writeReg", false,-1, 4,0);
    tracep->declBus(c+29,"MEM_PCaddfour", false,-1, 31,0);
    tracep->declBus(c+147,"MEM_readData", false,-1, 31,0);
    tracep->declBus(c+34,"WB_ALUOut", false,-1, 31,0);
    tracep->declBus(c+38,"WB_writeReg", false,-1, 4,0);
    tracep->declBus(c+35,"WB_PCaddfour", false,-1, 31,0);
    tracep->declBus(c+36,"WB_readData", false,-1, 31,0);
    tracep->declBus(c+31,"MEM_memtoReg", false,-1, 1,0);
    tracep->declBit(c+33,"MEM_regWrite", false,-1);
    tracep->declBus(c+39,"WB_memtoReg", false,-1, 1,0);
    tracep->declBit(c+40,"WB_regWrite", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("m_Mux_ALUSrcEX ");
    tracep->declBus(c+149,"size", false,-1, 31,0);
    tracep->declBit(c+24,"sel", false,-1);
    tracep->declBus(c+95,"s0", false,-1, 31,0);
    tracep->declBus(c+12,"s1", false,-1, 31,0);
    tracep->declBus(c+93,"out", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("m_Mux_ForwardAEX ");
    tracep->declBus(c+149,"size", false,-1, 31,0);
    tracep->declBus(c+41,"sel", false,-1, 1,0);
    tracep->declBus(c+8,"s0", false,-1, 31,0);
    tracep->declBus(c+37,"s1", false,-1, 31,0);
    tracep->declBus(c+100,"s2", false,-1, 31,0);
    tracep->declBus(c+92,"out", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("m_Mux_ForwardBEX ");
    tracep->declBus(c+149,"size", false,-1, 31,0);
    tracep->declBus(c+42,"sel", false,-1, 1,0);
    tracep->declBus(c+9,"s0", false,-1, 31,0);
    tracep->declBus(c+37,"s1", false,-1, 31,0);
    tracep->declBus(c+100,"s2", false,-1, 31,0);
    tracep->declBus(c+95,"out", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("m_Mux_JumpSrcIF ");
    tracep->declBus(c+149,"size", false,-1, 31,0);
    tracep->declBit(c+27,"sel", false,-1);
    tracep->declBus(c+14,"s0", false,-1, 31,0);
    tracep->declBus(c+94,"s1", false,-1, 31,0);
    tracep->declBus(c+141,"out", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("m_Mux_PCSrcIF ");
    tracep->declBus(c+149,"size", false,-1, 31,0);
    tracep->declBit(c+97,"sel", false,-1);
    tracep->declBus(c+3,"s0", false,-1, 31,0);
    tracep->declBus(c+141,"s1", false,-1, 31,0);
    tracep->declBus(c+142,"out", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("m_Mux_WB ");
    tracep->declBus(c+149,"size", false,-1, 31,0);
    tracep->declBus(c+39,"sel", false,-1, 1,0);
    tracep->declBus(c+34,"s0", false,-1, 31,0);
    tracep->declBus(c+36,"s1", false,-1, 31,0);
    tracep->declBus(c+35,"s2", false,-1, 31,0);
    tracep->declBus(c+37,"out", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("m_PC ");
    tracep->declBit(c+107,"clk", false,-1);
    tracep->declBit(c+108,"rst", false,-1);
    tracep->declBit(c+102,"stallPC", false,-1);
    tracep->declBus(c+142,"pc_i", false,-1, 31,0);
    tracep->declBus(c+2,"pc_o", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("m_Register ");
    tracep->declBit(c+107,"clk", false,-1);
    tracep->declBit(c+108,"rst", false,-1);
    tracep->declBit(c+40,"regWrite", false,-1);
    tracep->declBus(c+47,"readReg1", false,-1, 4,0);
    tracep->declBus(c+48,"readReg2", false,-1, 4,0);
    tracep->declBus(c+38,"writeReg", false,-1, 4,0);
    tracep->declBus(c+37,"writeData", false,-1, 31,0);
    tracep->declBus(c+143,"readData1", false,-1, 31,0);
    tracep->declBus(c+144,"readData2", false,-1, 31,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+50+i*1,"regs", true,(i+0), 31,0);
    }
    tracep->popNamePrefix(2);
}

VL_ATTR_COLD void VPipelineCPU___024root__trace_init_top(VPipelineCPU___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VPipelineCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPipelineCPU___024root__trace_init_top\n"); );
    // Body
    VPipelineCPU___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void VPipelineCPU___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void VPipelineCPU___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void VPipelineCPU___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void VPipelineCPU___024root__trace_register(VPipelineCPU___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VPipelineCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPipelineCPU___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&VPipelineCPU___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&VPipelineCPU___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&VPipelineCPU___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void VPipelineCPU___024root__trace_full_sub_0(VPipelineCPU___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void VPipelineCPU___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPipelineCPU___024root__trace_full_top_0\n"); );
    // Init
    VPipelineCPU___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VPipelineCPU___024root*>(voidSelf);
    VPipelineCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    VPipelineCPU___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void VPipelineCPU___024root__trace_full_sub_0(VPipelineCPU___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    VPipelineCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPipelineCPU___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullIData(oldp+1,(((0x80U <= vlSelf->PipelineCPU__DOT__IF_PC)
                              ? 0U : ((vlSelf->PipelineCPU__DOT__m_InstMem__DOT__insts
                                       [(0x7fU & vlSelf->PipelineCPU__DOT__IF_PC)] 
                                       << 0x18U) | 
                                      ((vlSelf->PipelineCPU__DOT__m_InstMem__DOT__insts
                                        [(0x7fU & ((IData)(1U) 
                                                   + vlSelf->PipelineCPU__DOT__IF_PC))] 
                                        << 0x10U) | 
                                       ((vlSelf->PipelineCPU__DOT__m_InstMem__DOT__insts
                                         [(0x7fU & 
                                           ((IData)(2U) 
                                            + vlSelf->PipelineCPU__DOT__IF_PC))] 
                                         << 8U) | vlSelf->PipelineCPU__DOT__m_InstMem__DOT__insts
                                        [(0x7fU & ((IData)(3U) 
                                                   + vlSelf->PipelineCPU__DOT__IF_PC))]))))),32);
    bufp->fullIData(oldp+2,(vlSelf->PipelineCPU__DOT__IF_PC),32);
    bufp->fullIData(oldp+3,(((IData)(4U) + vlSelf->PipelineCPU__DOT__IF_PC)),32);
    bufp->fullIData(oldp+4,(vlSelf->PipelineCPU__DOT__ID_inst),32);
    bufp->fullIData(oldp+5,(vlSelf->PipelineCPU__DOT__ID_PC),32);
    bufp->fullIData(oldp+6,(vlSelf->PipelineCPU__DOT__ID_PCaddfour),32);
    bufp->fullIData(oldp+7,(vlSelf->PipelineCPU__DOT__ID_imm),32);
    bufp->fullIData(oldp+8,(vlSelf->PipelineCPU__DOT__EX_readData1),32);
    bufp->fullIData(oldp+9,(vlSelf->PipelineCPU__DOT__EX_readData2),32);
    bufp->fullIData(oldp+10,(vlSelf->PipelineCPU__DOT__EX_PC),32);
    bufp->fullIData(oldp+11,(vlSelf->PipelineCPU__DOT__EX_PCaddfour),32);
    bufp->fullIData(oldp+12,(vlSelf->PipelineCPU__DOT__EX_imm),32);
    bufp->fullIData(oldp+13,(vlSelf->PipelineCPU__DOT__EX_inst),32);
    bufp->fullIData(oldp+14,((vlSelf->PipelineCPU__DOT__EX_PC 
                              + vlSelf->PipelineCPU__DOT__EX_imm)),32);
    bufp->fullCData(oldp+15,(vlSelf->PipelineCPU__DOT__EX_readReg1),5);
    bufp->fullCData(oldp+16,(vlSelf->PipelineCPU__DOT__EX_readReg2),5);
    bufp->fullCData(oldp+17,(vlSelf->PipelineCPU__DOT__EX_writeReg),5);
    bufp->fullCData(oldp+18,(vlSelf->PipelineCPU__DOT__ALUCtl),4);
    bufp->fullCData(oldp+19,(vlSelf->PipelineCPU__DOT__EX_branchType),2);
    bufp->fullCData(oldp+20,(vlSelf->PipelineCPU__DOT__EX_memtoReg),2);
    bufp->fullCData(oldp+21,(vlSelf->PipelineCPU__DOT__EX_ALUOp),2);
    bufp->fullBit(oldp+22,(vlSelf->PipelineCPU__DOT__EX_branch));
    bufp->fullBit(oldp+23,(vlSelf->PipelineCPU__DOT__EX_memWrite));
    bufp->fullBit(oldp+24,(vlSelf->PipelineCPU__DOT__EX_ALUSrc));
    bufp->fullBit(oldp+25,(vlSelf->PipelineCPU__DOT__EX_regWrite));
    bufp->fullBit(oldp+26,(vlSelf->PipelineCPU__DOT__EX_jump));
    bufp->fullBit(oldp+27,(vlSelf->PipelineCPU__DOT__EX_JumpSrc));
    bufp->fullIData(oldp+28,(vlSelf->PipelineCPU__DOT__MEM_writeData),32);
    bufp->fullIData(oldp+29,(vlSelf->PipelineCPU__DOT__MEM_PCaddfour),32);
    bufp->fullCData(oldp+30,(vlSelf->PipelineCPU__DOT__MEM_writeReg),5);
    bufp->fullCData(oldp+31,(vlSelf->PipelineCPU__DOT__MEM_memtoReg),2);
    bufp->fullBit(oldp+32,(vlSelf->PipelineCPU__DOT__MEM_memWrite));
    bufp->fullBit(oldp+33,(vlSelf->PipelineCPU__DOT__MEM_regWrite));
    bufp->fullIData(oldp+34,(vlSelf->PipelineCPU__DOT__WB_ALUOut),32);
    bufp->fullIData(oldp+35,(vlSelf->PipelineCPU__DOT__WB_PCaddfour),32);
    bufp->fullIData(oldp+36,(vlSelf->PipelineCPU__DOT__WB_readData),32);
    bufp->fullIData(oldp+37,(vlSelf->PipelineCPU__DOT__WB_result),32);
    bufp->fullCData(oldp+38,(vlSelf->PipelineCPU__DOT__WB_writeReg),5);
    bufp->fullCData(oldp+39,(vlSelf->PipelineCPU__DOT__WB_memtoReg),2);
    bufp->fullBit(oldp+40,(vlSelf->PipelineCPU__DOT__WB_regWrite));
    bufp->fullCData(oldp+41,(vlSelf->PipelineCPU__DOT__EX_forward1),2);
    bufp->fullCData(oldp+42,(vlSelf->PipelineCPU__DOT__EX_forward2),2);
    bufp->fullBit(oldp+43,((1U & (vlSelf->PipelineCPU__DOT__EX_inst 
                                  >> 0x1eU))));
    bufp->fullCData(oldp+44,((7U & (vlSelf->PipelineCPU__DOT__EX_inst 
                                    >> 0xcU))),3);
    bufp->fullCData(oldp+45,((0x7fU & vlSelf->PipelineCPU__DOT__ID_inst)),7);
    bufp->fullCData(oldp+46,((7U & (vlSelf->PipelineCPU__DOT__ID_inst 
                                    >> 0xcU))),3);
    bufp->fullCData(oldp+47,((0x1fU & (vlSelf->PipelineCPU__DOT__ID_inst 
                                       >> 0xfU))),5);
    bufp->fullCData(oldp+48,((0x1fU & (vlSelf->PipelineCPU__DOT__ID_inst 
                                       >> 0x14U))),5);
    bufp->fullCData(oldp+49,((0x1fU & (vlSelf->PipelineCPU__DOT__ID_inst 
                                       >> 7U))),5);
    bufp->fullIData(oldp+50,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[0]),32);
    bufp->fullIData(oldp+51,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[1]),32);
    bufp->fullIData(oldp+52,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[2]),32);
    bufp->fullIData(oldp+53,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[3]),32);
    bufp->fullIData(oldp+54,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[4]),32);
    bufp->fullIData(oldp+55,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[5]),32);
    bufp->fullIData(oldp+56,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[6]),32);
    bufp->fullIData(oldp+57,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[7]),32);
    bufp->fullIData(oldp+58,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[8]),32);
    bufp->fullIData(oldp+59,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[9]),32);
    bufp->fullIData(oldp+60,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[10]),32);
    bufp->fullIData(oldp+61,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[11]),32);
    bufp->fullIData(oldp+62,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[12]),32);
    bufp->fullIData(oldp+63,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[13]),32);
    bufp->fullIData(oldp+64,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[14]),32);
    bufp->fullIData(oldp+65,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[15]),32);
    bufp->fullIData(oldp+66,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[16]),32);
    bufp->fullIData(oldp+67,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[17]),32);
    bufp->fullIData(oldp+68,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[18]),32);
    bufp->fullIData(oldp+69,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[19]),32);
    bufp->fullIData(oldp+70,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[20]),32);
    bufp->fullIData(oldp+71,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[21]),32);
    bufp->fullIData(oldp+72,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[22]),32);
    bufp->fullIData(oldp+73,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[23]),32);
    bufp->fullIData(oldp+74,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[24]),32);
    bufp->fullIData(oldp+75,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[25]),32);
    bufp->fullIData(oldp+76,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[26]),32);
    bufp->fullIData(oldp+77,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[27]),32);
    bufp->fullIData(oldp+78,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[28]),32);
    bufp->fullIData(oldp+79,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[29]),32);
    bufp->fullIData(oldp+80,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[30]),32);
    bufp->fullIData(oldp+81,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[31]),32);
    bufp->fullCData(oldp+82,((3U & ((IData)(vlSelf->PipelineCPU__DOT__m_Control__DOT__ctrl) 
                                    >> 3U))),2);
    bufp->fullCData(oldp+83,((3U & ((IData)(vlSelf->PipelineCPU__DOT__m_Control__DOT__ctrl) 
                                    >> 9U))),2);
    bufp->fullCData(oldp+84,((3U & (IData)(vlSelf->PipelineCPU__DOT__m_Control__DOT__ctrl))),2);
    bufp->fullBit(oldp+85,((1U & ((IData)(vlSelf->PipelineCPU__DOT__m_Control__DOT__ctrl) 
                                  >> 5U))));
    bufp->fullBit(oldp+86,((1U & ((IData)(vlSelf->PipelineCPU__DOT__m_Control__DOT__ctrl) 
                                  >> 7U))));
    bufp->fullBit(oldp+87,((1U & ((IData)(vlSelf->PipelineCPU__DOT__m_Control__DOT__ctrl) 
                                  >> 6U))));
    bufp->fullBit(oldp+88,((1U & ((IData)(vlSelf->PipelineCPU__DOT__m_Control__DOT__ctrl) 
                                  >> 0xcU))));
    bufp->fullBit(oldp+89,((1U & ((IData)(vlSelf->PipelineCPU__DOT__m_Control__DOT__ctrl) 
                                  >> 8U))));
    bufp->fullBit(oldp+90,((1U & ((IData)(vlSelf->PipelineCPU__DOT__m_Control__DOT__ctrl) 
                                  >> 2U))));
    bufp->fullBit(oldp+91,((1U & ((IData)(vlSelf->PipelineCPU__DOT__m_Control__DOT__ctrl) 
                                  >> 0xbU))));
    bufp->fullIData(oldp+92,(vlSelf->PipelineCPU__DOT__ALUA),32);
    bufp->fullIData(oldp+93,(vlSelf->PipelineCPU__DOT__ALUB),32);
    bufp->fullIData(oldp+94,(vlSelf->PipelineCPU__DOT__EX_ALUOut),32);
    bufp->fullIData(oldp+95,(vlSelf->PipelineCPU__DOT__EX_writeData),32);
    bufp->fullBit(oldp+96,(vlSelf->PipelineCPU__DOT__EX_memRead));
    bufp->fullBit(oldp+97,(vlSelf->PipelineCPU__DOT__EX_PCSrc));
    bufp->fullBit(oldp+98,((0U == vlSelf->PipelineCPU__DOT__EX_ALUOut)));
    bufp->fullBit(oldp+99,(VL_GTS_III(32, 0U, vlSelf->PipelineCPU__DOT__EX_ALUOut)));
    bufp->fullIData(oldp+100,(vlSelf->PipelineCPU__DOT__MEM_ALUOut),32);
    bufp->fullBit(oldp+101,(vlSelf->PipelineCPU__DOT__MEM_memRead));
    bufp->fullBit(oldp+102,(vlSelf->PipelineCPU__DOT__stallPC));
    bufp->fullBit(oldp+103,(vlSelf->PipelineCPU__DOT__IFID_stall));
    bufp->fullBit(oldp+104,(vlSelf->PipelineCPU__DOT__IDEX_flush));
    bufp->fullSData(oldp+105,(vlSelf->PipelineCPU__DOT__m_Control__DOT__ctrl),13);
    bufp->fullBit(oldp+106,(vlSelf->PipelineCPU__DOT__m_Hazard__DOT__lwStall));
    bufp->fullBit(oldp+107,(vlSelf->clk));
    bufp->fullBit(oldp+108,(vlSelf->start));
    bufp->fullIData(oldp+109,(vlSelf->r[0]),32);
    bufp->fullIData(oldp+110,(vlSelf->r[1]),32);
    bufp->fullIData(oldp+111,(vlSelf->r[2]),32);
    bufp->fullIData(oldp+112,(vlSelf->r[3]),32);
    bufp->fullIData(oldp+113,(vlSelf->r[4]),32);
    bufp->fullIData(oldp+114,(vlSelf->r[5]),32);
    bufp->fullIData(oldp+115,(vlSelf->r[6]),32);
    bufp->fullIData(oldp+116,(vlSelf->r[7]),32);
    bufp->fullIData(oldp+117,(vlSelf->r[8]),32);
    bufp->fullIData(oldp+118,(vlSelf->r[9]),32);
    bufp->fullIData(oldp+119,(vlSelf->r[10]),32);
    bufp->fullIData(oldp+120,(vlSelf->r[11]),32);
    bufp->fullIData(oldp+121,(vlSelf->r[12]),32);
    bufp->fullIData(oldp+122,(vlSelf->r[13]),32);
    bufp->fullIData(oldp+123,(vlSelf->r[14]),32);
    bufp->fullIData(oldp+124,(vlSelf->r[15]),32);
    bufp->fullIData(oldp+125,(vlSelf->r[16]),32);
    bufp->fullIData(oldp+126,(vlSelf->r[17]),32);
    bufp->fullIData(oldp+127,(vlSelf->r[18]),32);
    bufp->fullIData(oldp+128,(vlSelf->r[19]),32);
    bufp->fullIData(oldp+129,(vlSelf->r[20]),32);
    bufp->fullIData(oldp+130,(vlSelf->r[21]),32);
    bufp->fullIData(oldp+131,(vlSelf->r[22]),32);
    bufp->fullIData(oldp+132,(vlSelf->r[23]),32);
    bufp->fullIData(oldp+133,(vlSelf->r[24]),32);
    bufp->fullIData(oldp+134,(vlSelf->r[25]),32);
    bufp->fullIData(oldp+135,(vlSelf->r[26]),32);
    bufp->fullIData(oldp+136,(vlSelf->r[27]),32);
    bufp->fullIData(oldp+137,(vlSelf->r[28]),32);
    bufp->fullIData(oldp+138,(vlSelf->r[29]),32);
    bufp->fullIData(oldp+139,(vlSelf->r[30]),32);
    bufp->fullIData(oldp+140,(vlSelf->r[31]),32);
    bufp->fullIData(oldp+141,(((IData)(vlSelf->PipelineCPU__DOT__EX_JumpSrc)
                                ? vlSelf->PipelineCPU__DOT__EX_ALUOut
                                : (vlSelf->PipelineCPU__DOT__EX_PC 
                                   + vlSelf->PipelineCPU__DOT__EX_imm))),32);
    bufp->fullIData(oldp+142,(((IData)(vlSelf->PipelineCPU__DOT__EX_PCSrc)
                                ? ((IData)(vlSelf->PipelineCPU__DOT__EX_JumpSrc)
                                    ? vlSelf->PipelineCPU__DOT__EX_ALUOut
                                    : (vlSelf->PipelineCPU__DOT__EX_PC 
                                       + vlSelf->PipelineCPU__DOT__EX_imm))
                                : ((IData)(4U) + vlSelf->PipelineCPU__DOT__IF_PC))),32);
    bufp->fullIData(oldp+143,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs
                              [(0x1fU & (vlSelf->PipelineCPU__DOT__ID_inst 
                                         >> 0xfU))]),32);
    bufp->fullIData(oldp+144,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs
                              [(0x1fU & (vlSelf->PipelineCPU__DOT__ID_inst 
                                         >> 0x14U))]),32);
    bufp->fullBit(oldp+145,(((0U == (IData)(vlSelf->PipelineCPU__DOT__EX_branchType))
                              ? (0U == vlSelf->PipelineCPU__DOT__EX_ALUOut)
                              : ((1U == (IData)(vlSelf->PipelineCPU__DOT__EX_branchType))
                                  ? (0U != vlSelf->PipelineCPU__DOT__EX_ALUOut)
                                  : ((2U == (IData)(vlSelf->PipelineCPU__DOT__EX_branchType))
                                      ? VL_GTS_III(32, 0U, vlSelf->PipelineCPU__DOT__EX_ALUOut)
                                      : VL_LTES_III(32, 0U, vlSelf->PipelineCPU__DOT__EX_ALUOut))))));
    bufp->fullBit(oldp+146,(((IData)(vlSelf->PipelineCPU__DOT__EX_branch) 
                             & ((0U == (IData)(vlSelf->PipelineCPU__DOT__EX_branchType))
                                 ? (0U == vlSelf->PipelineCPU__DOT__EX_ALUOut)
                                 : ((1U == (IData)(vlSelf->PipelineCPU__DOT__EX_branchType))
                                     ? (0U != vlSelf->PipelineCPU__DOT__EX_ALUOut)
                                     : ((2U == (IData)(vlSelf->PipelineCPU__DOT__EX_branchType))
                                         ? VL_GTS_III(32, 0U, vlSelf->PipelineCPU__DOT__EX_ALUOut)
                                         : VL_LTES_III(32, 0U, vlSelf->PipelineCPU__DOT__EX_ALUOut)))))));
    bufp->fullIData(oldp+147,(vlSelf->PipelineCPU__DOT__MEM_readData),32);
    bufp->fullIData(oldp+148,(4U),32);
    bufp->fullIData(oldp+149,(0x20U),32);
}
