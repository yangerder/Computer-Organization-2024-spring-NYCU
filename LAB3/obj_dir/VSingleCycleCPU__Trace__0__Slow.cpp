// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VSingleCycleCPU__Syms.h"


VL_ATTR_COLD void VSingleCycleCPU___024root__trace_init_sub__TOP__0(VSingleCycleCPU___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VSingleCycleCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSingleCycleCPU___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+123,"clk", false,-1);
    tracep->declBit(c+124,"start", false,-1);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+125+i*1,"r", true,(i+0), 31,0);
    }
    tracep->pushNamePrefix("SingleCycleCPU ");
    tracep->declBit(c+123,"clk", false,-1);
    tracep->declBit(c+124,"start", false,-1);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+125+i*1,"r", true,(i+0), 31,0);
    }
    tracep->declBus(c+1,"pc_o_w", false,-1, 31,0);
    tracep->declBus(c+2,"inst_w", false,-1, 31,0);
    tracep->declBit(c+3,"regWrite_w", false,-1);
    tracep->declBit(c+4,"branch_w", false,-1);
    tracep->declBit(c+5,"ALUSrc_w", false,-1);
    tracep->declBit(c+6,"memRead_w", false,-1);
    tracep->declBit(c+7,"memWrite_w", false,-1);
    tracep->declBit(c+8,"memtoReg_w", false,-1);
    tracep->declBit(c+9,"jump_w", false,-1);
    tracep->declBit(c+10,"ALUPC_w", false,-1);
    tracep->declBus(c+11,"ALUOp_w", false,-1, 1,0);
    tracep->declBus(c+12,"mux_alusrc_w", false,-1, 31,0);
    tracep->declBus(c+13,"mux_pc_source_w", false,-1, 31,0);
    tracep->declBus(c+14,"mux_pc_source_w_JALR", false,-1, 31,0);
    tracep->declBus(c+15,"mux_dm_W", false,-1, 31,0);
    tracep->declBus(c+16,"mux_dm_jump", false,-1, 31,0);
    tracep->declBus(c+81,"readData1_w", false,-1, 31,0);
    tracep->declBus(c+82,"readData2_w", false,-1, 31,0);
    tracep->declBus(c+17,"sum_adder1_w", false,-1, 31,0);
    tracep->declBus(c+18,"sum_adder2_W", false,-1, 31,0);
    tracep->declBus(c+19,"imm_W", false,-1, 31,0);
    tracep->declBus(c+20,"shift_W", false,-1, 31,0);
    tracep->declBus(c+21,"ALU_result_w", false,-1, 31,0);
    tracep->declBit(c+22,"ALU_zero_W", false,-1);
    tracep->declBit(c+23,"branch_zero", false,-1);
    tracep->declBit(c+24,"mux_bran_jump_sel", false,-1);
    tracep->declBus(c+25,"Aluctl_W", false,-1, 3,0);
    tracep->declBus(c+157,"readdata_w", false,-1, 31,0);
    tracep->declBus(c+26,"IFID_pcout", false,-1, 31,0);
    tracep->declBus(c+27,"IFID_inst_w", false,-1, 31,0);
    tracep->declBit(c+28,"IDEX_branch_w", false,-1);
    tracep->declBit(c+29,"IDEX_memRead_w", false,-1);
    tracep->declBit(c+30,"IDEX_memtoReg_w", false,-1);
    tracep->declBit(c+31,"IDEX_memWrite_w", false,-1);
    tracep->declBit(c+32,"IDEX_ALUSrc_w", false,-1);
    tracep->declBit(c+33,"IDEX_regWrite_w", false,-1);
    tracep->declBus(c+34,"IDEX_ALUOp_w", false,-1, 1,0);
    tracep->declBus(c+35,"IDEX_pcout", false,-1, 31,0);
    tracep->declBus(c+36,"IDEX_readData1_w", false,-1, 31,0);
    tracep->declBus(c+37,"IDEX_readData2_w", false,-1, 31,0);
    tracep->declBus(c+38,"IDEX_imm_W", false,-1, 31,0);
    tracep->declBit(c+39,"IDEX_inst_w_30", false,-1);
    tracep->declBus(c+40,"IDEX_inst_w_14_12", false,-1, 2,0);
    tracep->declBus(c+41,"IDEX_inst_w_11_7", false,-1, 4,0);
    tracep->declBit(c+42,"EX_MEM_branch_w", false,-1);
    tracep->declBit(c+43,"EX_MEM_memRead_w", false,-1);
    tracep->declBit(c+44,"EX_MEM_memtoReg_w", false,-1);
    tracep->declBit(c+45,"EX_MEM_memWrite_w", false,-1);
    tracep->declBit(c+46,"EX_MEM_regWrite_w", false,-1);
    tracep->declBit(c+47,"EX_MEM_ALU_zero_W", false,-1);
    tracep->declBus(c+48,"EX_MEM_sum_adder2_W", false,-1, 31,0);
    tracep->declBus(c+49,"EX_MEM_ALU_result_w", false,-1, 31,0);
    tracep->declBus(c+50,"EX_MEM_readData2_w", false,-1, 31,0);
    tracep->declBus(c+51,"EX_MEM_inst_w_11_7", false,-1, 4,0);
    tracep->declBit(c+52,"MEM_WB_memtoReg_w", false,-1);
    tracep->declBit(c+53,"MEM_WB_regWrite_w", false,-1);
    tracep->declBus(c+54,"MEM_WB_ALU_result_w", false,-1, 31,0);
    tracep->declBus(c+55,"MEM_WB_readdata_w", false,-1, 31,0);
    tracep->declBus(c+56,"MEM_WB_inst_w_11_7", false,-1, 4,0);
    tracep->pushNamePrefix("EX_MEM ");
    tracep->declBit(c+123,"clk", false,-1);
    tracep->declBit(c+124,"rst", false,-1);
    tracep->declArray(c+57,"pipe_data_i", false,-1, 106,0);
    tracep->declArray(c+61,"pipe_data_o", false,-1, 106,0);
    tracep->declBus(c+158,"size", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("ID_EX ");
    tracep->declBit(c+123,"clk", false,-1);
    tracep->declBit(c+124,"rst", false,-1);
    tracep->declArray(c+83,"pipe_data_i", false,-1, 144,0);
    tracep->declArray(c+65,"pipe_data_o", false,-1, 144,0);
    tracep->declBus(c+159,"size", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("IF_ID ");
    tracep->declBit(c+123,"clk", false,-1);
    tracep->declBit(c+124,"rst", false,-1);
    tracep->declQuad(c+70,"pipe_data_i", false,-1, 63,0);
    tracep->declQuad(c+72,"pipe_data_o", false,-1, 63,0);
    tracep->declBus(c+160,"size", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("MEM_WB ");
    tracep->declBit(c+123,"clk", false,-1);
    tracep->declBit(c+124,"rst", false,-1);
    tracep->declArray(c+88,"pipe_data_i", false,-1, 70,0);
    tracep->declArray(c+74,"pipe_data_o", false,-1, 70,0);
    tracep->declBus(c+161,"size", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("m_ALU ");
    tracep->declBus(c+25,"ALUctl", false,-1, 3,0);
    tracep->declBus(c+36,"A", false,-1, 31,0);
    tracep->declBus(c+12,"B", false,-1, 31,0);
    tracep->declBus(c+21,"ALUOut", false,-1, 31,0);
    tracep->declBit(c+22,"zero", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("m_ALUCtrl ");
    tracep->declBus(c+34,"ALUOp", false,-1, 1,0);
    tracep->declBit(c+39,"funct7", false,-1);
    tracep->declBus(c+40,"funct3", false,-1, 2,0);
    tracep->declBus(c+25,"ALUCtl", false,-1, 3,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("m_Adder_1 ");
    tracep->declBus(c+1,"a", false,-1, 31,0);
    tracep->declBus(c+162,"b", false,-1, 31,0);
    tracep->declBus(c+17,"sum", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("m_Adder_2 ");
    tracep->declBus(c+35,"a", false,-1, 31,0);
    tracep->declBus(c+20,"b", false,-1, 31,0);
    tracep->declBus(c+18,"sum", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("m_Control ");
    tracep->declBus(c+77,"opcode", false,-1, 6,0);
    tracep->declBit(c+4,"branch", false,-1);
    tracep->declBit(c+6,"memRead", false,-1);
    tracep->declBit(c+8,"memtoReg", false,-1);
    tracep->declBus(c+11,"ALUOp", false,-1, 1,0);
    tracep->declBit(c+7,"memWrite", false,-1);
    tracep->declBit(c+5,"ALUSrc", false,-1);
    tracep->declBit(c+3,"regWrite", false,-1);
    tracep->declBit(c+9,"jump", false,-1);
    tracep->declBit(c+10,"ALUPC", false,-1);
    tracep->declBus(c+78,"ctl", false,-1, 9,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("m_DataMemory ");
    tracep->declBit(c+124,"rst", false,-1);
    tracep->declBit(c+123,"clk", false,-1);
    tracep->declBit(c+45,"memWrite", false,-1);
    tracep->declBit(c+43,"memRead", false,-1);
    tracep->declBus(c+49,"address", false,-1, 31,0);
    tracep->declBus(c+50,"writeData", false,-1, 31,0);
    tracep->declBus(c+157,"readData", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("m_ImmGen ");
    tracep->declBus(c+27,"inst", false,-1, 31,0);
    tracep->declBus(c+19,"imm", false,-1, 31,0);
    tracep->declBus(c+77,"opcode", false,-1, 6,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("m_InstMem ");
    tracep->declBus(c+1,"readAddr", false,-1, 31,0);
    tracep->declBus(c+2,"inst", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("m_Mux_ALU ");
    tracep->declBus(c+163,"size", false,-1, 31,0);
    tracep->declBit(c+32,"sel", false,-1);
    tracep->declBus(c+37,"s0", false,-1, 31,0);
    tracep->declBus(c+38,"s1", false,-1, 31,0);
    tracep->declBus(c+12,"out", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("m_Mux_JUMP ");
    tracep->declBus(c+163,"size", false,-1, 31,0);
    tracep->declBit(c+10,"sel", false,-1);
    tracep->declBus(c+13,"s0", false,-1, 31,0);
    tracep->declBus(c+21,"s1", false,-1, 31,0);
    tracep->declBus(c+14,"out", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("m_Mux_PC ");
    tracep->declBus(c+163,"size", false,-1, 31,0);
    tracep->declBit(c+24,"sel", false,-1);
    tracep->declBus(c+17,"s0", false,-1, 31,0);
    tracep->declBus(c+48,"s1", false,-1, 31,0);
    tracep->declBus(c+13,"out", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("m_Mux_WriteData ");
    tracep->declBus(c+163,"size", false,-1, 31,0);
    tracep->declBit(c+52,"sel", false,-1);
    tracep->declBus(c+54,"s0", false,-1, 31,0);
    tracep->declBus(c+55,"s1", false,-1, 31,0);
    tracep->declBus(c+15,"out", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("m_Mux_jump ");
    tracep->declBus(c+163,"size", false,-1, 31,0);
    tracep->declBit(c+9,"sel", false,-1);
    tracep->declBus(c+15,"s0", false,-1, 31,0);
    tracep->declBus(c+17,"s1", false,-1, 31,0);
    tracep->declBus(c+16,"out", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("m_PC ");
    tracep->declBit(c+123,"clk", false,-1);
    tracep->declBit(c+124,"rst", false,-1);
    tracep->declBus(c+14,"pc_i", false,-1, 31,0);
    tracep->declBus(c+1,"pc_o", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("m_Register ");
    tracep->declBit(c+123,"clk", false,-1);
    tracep->declBit(c+124,"rst", false,-1);
    tracep->declBit(c+53,"regWrite", false,-1);
    tracep->declBus(c+79,"readReg1", false,-1, 4,0);
    tracep->declBus(c+80,"readReg2", false,-1, 4,0);
    tracep->declBus(c+56,"writeReg", false,-1, 4,0);
    tracep->declBus(c+16,"writeData", false,-1, 31,0);
    tracep->declBus(c+81,"readData1", false,-1, 31,0);
    tracep->declBus(c+82,"readData2", false,-1, 31,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+91+i*1,"regs", true,(i+0), 31,0);
    }
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("m_ShiftLeftOne ");
    tracep->declBus(c+38,"i", false,-1, 31,0);
    tracep->declBus(c+20,"o", false,-1, 31,0);
    tracep->popNamePrefix(2);
}

VL_ATTR_COLD void VSingleCycleCPU___024root__trace_init_top(VSingleCycleCPU___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VSingleCycleCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSingleCycleCPU___024root__trace_init_top\n"); );
    // Body
    VSingleCycleCPU___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void VSingleCycleCPU___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void VSingleCycleCPU___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void VSingleCycleCPU___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void VSingleCycleCPU___024root__trace_register(VSingleCycleCPU___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VSingleCycleCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSingleCycleCPU___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&VSingleCycleCPU___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&VSingleCycleCPU___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&VSingleCycleCPU___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void VSingleCycleCPU___024root__trace_full_sub_0(VSingleCycleCPU___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void VSingleCycleCPU___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSingleCycleCPU___024root__trace_full_top_0\n"); );
    // Init
    VSingleCycleCPU___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VSingleCycleCPU___024root*>(voidSelf);
    VSingleCycleCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    VSingleCycleCPU___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void VSingleCycleCPU___024root__trace_full_sub_0(VSingleCycleCPU___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    VSingleCycleCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSingleCycleCPU___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    VlWide<4>/*127:0*/ __Vtemp_h7cc2ded1__0;
    VlWide<5>/*159:0*/ __Vtemp_h64830970__0;
    VlWide<5>/*159:0*/ __Vtemp_h1625ab87__0;
    // Body
    bufp->fullIData(oldp+1,(vlSelf->SingleCycleCPU__DOT__pc_o_w),32);
    bufp->fullIData(oldp+2,(((0x80U <= vlSelf->SingleCycleCPU__DOT__pc_o_w)
                              ? 0U : ((vlSelf->SingleCycleCPU__DOT__m_InstMem__DOT__insts
                                       [(0x7fU & vlSelf->SingleCycleCPU__DOT__pc_o_w)] 
                                       << 0x18U) | 
                                      ((vlSelf->SingleCycleCPU__DOT__m_InstMem__DOT__insts
                                        [(0x7fU & ((IData)(1U) 
                                                   + vlSelf->SingleCycleCPU__DOT__pc_o_w))] 
                                        << 0x10U) | 
                                       ((vlSelf->SingleCycleCPU__DOT__m_InstMem__DOT__insts
                                         [(0x7fU & 
                                           ((IData)(2U) 
                                            + vlSelf->SingleCycleCPU__DOT__pc_o_w))] 
                                         << 8U) | vlSelf->SingleCycleCPU__DOT__m_InstMem__DOT__insts
                                        [(0x7fU & ((IData)(3U) 
                                                   + vlSelf->SingleCycleCPU__DOT__pc_o_w))]))))),32);
    bufp->fullBit(oldp+3,((1U & ((IData)(vlSelf->SingleCycleCPU__DOT__m_Control__DOT__ctl) 
                                 >> 7U))));
    bufp->fullBit(oldp+4,((1U & ((IData)(vlSelf->SingleCycleCPU__DOT__m_Control__DOT__ctl) 
                                 >> 4U))));
    bufp->fullBit(oldp+5,((1U & ((IData)(vlSelf->SingleCycleCPU__DOT__m_Control__DOT__ctl) 
                                 >> 9U))));
    bufp->fullBit(oldp+6,((1U & ((IData)(vlSelf->SingleCycleCPU__DOT__m_Control__DOT__ctl) 
                                 >> 6U))));
    bufp->fullBit(oldp+7,((1U & ((IData)(vlSelf->SingleCycleCPU__DOT__m_Control__DOT__ctl) 
                                 >> 5U))));
    bufp->fullBit(oldp+8,((1U & ((IData)(vlSelf->SingleCycleCPU__DOT__m_Control__DOT__ctl) 
                                 >> 8U))));
    bufp->fullBit(oldp+9,((1U & ((IData)(vlSelf->SingleCycleCPU__DOT__m_Control__DOT__ctl) 
                                 >> 1U))));
    bufp->fullBit(oldp+10,((1U & (IData)(vlSelf->SingleCycleCPU__DOT__m_Control__DOT__ctl))));
    bufp->fullCData(oldp+11,((3U & ((IData)(vlSelf->SingleCycleCPU__DOT__m_Control__DOT__ctl) 
                                    >> 2U))),2);
    bufp->fullIData(oldp+12,(vlSelf->SingleCycleCPU__DOT__mux_alusrc_w),32);
    bufp->fullIData(oldp+13,(((1U & (((vlSelf->SingleCycleCPU__DOT____Vcellout__EX_MEM__pipe_data_o[3U] 
                                       >> 0xaU) & (
                                                   vlSelf->SingleCycleCPU__DOT____Vcellout__EX_MEM__pipe_data_o[2U] 
                                                   >> 5U)) 
                                     | ((IData)(vlSelf->SingleCycleCPU__DOT__m_Control__DOT__ctl) 
                                        >> 1U))) ? 
                              ((vlSelf->SingleCycleCPU__DOT____Vcellout__EX_MEM__pipe_data_o[3U] 
                                << 0x1aU) | (vlSelf->SingleCycleCPU__DOT____Vcellout__EX_MEM__pipe_data_o[2U] 
                                             >> 6U))
                               : ((IData)(4U) + vlSelf->SingleCycleCPU__DOT__pc_o_w))),32);
    bufp->fullIData(oldp+14,(((1U & (IData)(vlSelf->SingleCycleCPU__DOT__m_Control__DOT__ctl))
                               ? vlSelf->SingleCycleCPU__DOT__ALU_result_w
                               : ((1U & (((vlSelf->SingleCycleCPU__DOT____Vcellout__EX_MEM__pipe_data_o[3U] 
                                           >> 0xaU) 
                                          & (vlSelf->SingleCycleCPU__DOT____Vcellout__EX_MEM__pipe_data_o[2U] 
                                             >> 5U)) 
                                         | ((IData)(vlSelf->SingleCycleCPU__DOT__m_Control__DOT__ctl) 
                                            >> 1U)))
                                   ? ((vlSelf->SingleCycleCPU__DOT____Vcellout__EX_MEM__pipe_data_o[3U] 
                                       << 0x1aU) | 
                                      (vlSelf->SingleCycleCPU__DOT____Vcellout__EX_MEM__pipe_data_o[2U] 
                                       >> 6U)) : ((IData)(4U) 
                                                  + vlSelf->SingleCycleCPU__DOT__pc_o_w)))),32);
    bufp->fullIData(oldp+15,(((0x40U & vlSelf->SingleCycleCPU__DOT____Vcellout__MEM_WB__pipe_data_o[2U])
                               ? ((vlSelf->SingleCycleCPU__DOT____Vcellout__MEM_WB__pipe_data_o[1U] 
                                   << 0x1bU) | (vlSelf->SingleCycleCPU__DOT____Vcellout__MEM_WB__pipe_data_o[0U] 
                                                >> 5U))
                               : ((vlSelf->SingleCycleCPU__DOT____Vcellout__MEM_WB__pipe_data_o[2U] 
                                   << 0x1bU) | (vlSelf->SingleCycleCPU__DOT____Vcellout__MEM_WB__pipe_data_o[1U] 
                                                >> 5U)))),32);
    bufp->fullIData(oldp+16,(((2U & (IData)(vlSelf->SingleCycleCPU__DOT__m_Control__DOT__ctl))
                               ? ((IData)(4U) + vlSelf->SingleCycleCPU__DOT__pc_o_w)
                               : ((0x40U & vlSelf->SingleCycleCPU__DOT____Vcellout__MEM_WB__pipe_data_o[2U])
                                   ? ((vlSelf->SingleCycleCPU__DOT____Vcellout__MEM_WB__pipe_data_o[1U] 
                                       << 0x1bU) | 
                                      (vlSelf->SingleCycleCPU__DOT____Vcellout__MEM_WB__pipe_data_o[0U] 
                                       >> 5U)) : ((
                                                   vlSelf->SingleCycleCPU__DOT____Vcellout__MEM_WB__pipe_data_o[2U] 
                                                   << 0x1bU) 
                                                  | (vlSelf->SingleCycleCPU__DOT____Vcellout__MEM_WB__pipe_data_o[1U] 
                                                     >> 5U))))),32);
    bufp->fullIData(oldp+17,(((IData)(4U) + vlSelf->SingleCycleCPU__DOT__pc_o_w)),32);
    bufp->fullIData(oldp+18,((((vlSelf->SingleCycleCPU__DOT____Vcellout__ID_EX__pipe_data_o[4U] 
                                << 0x17U) | (vlSelf->SingleCycleCPU__DOT____Vcellout__ID_EX__pipe_data_o[3U] 
                                             >> 9U)) 
                              + ((vlSelf->SingleCycleCPU__DOT____Vcellout__ID_EX__pipe_data_o[1U] 
                                  << 0x18U) | (0xfffffeU 
                                               & (vlSelf->SingleCycleCPU__DOT____Vcellout__ID_EX__pipe_data_o[0U] 
                                                  >> 8U))))),32);
    bufp->fullIData(oldp+19,(vlSelf->SingleCycleCPU__DOT__imm_W),32);
    bufp->fullIData(oldp+20,(((vlSelf->SingleCycleCPU__DOT____Vcellout__ID_EX__pipe_data_o[1U] 
                               << 0x18U) | (0xfffffeU 
                                            & (vlSelf->SingleCycleCPU__DOT____Vcellout__ID_EX__pipe_data_o[0U] 
                                               >> 8U)))),32);
    bufp->fullIData(oldp+21,(vlSelf->SingleCycleCPU__DOT__ALU_result_w),32);
    bufp->fullBit(oldp+22,((0U == vlSelf->SingleCycleCPU__DOT__ALU_result_w)));
    bufp->fullBit(oldp+23,(((vlSelf->SingleCycleCPU__DOT____Vcellout__EX_MEM__pipe_data_o[2U] 
                             >> 5U) & (vlSelf->SingleCycleCPU__DOT____Vcellout__EX_MEM__pipe_data_o[3U] 
                                       >> 0xaU))));
    bufp->fullBit(oldp+24,((1U & (((vlSelf->SingleCycleCPU__DOT____Vcellout__EX_MEM__pipe_data_o[3U] 
                                    >> 0xaU) & (vlSelf->SingleCycleCPU__DOT____Vcellout__EX_MEM__pipe_data_o[2U] 
                                                >> 5U)) 
                                  | ((IData)(vlSelf->SingleCycleCPU__DOT__m_Control__DOT__ctl) 
                                     >> 1U)))));
    bufp->fullCData(oldp+25,(vlSelf->SingleCycleCPU__DOT__Aluctl_W),4);
    bufp->fullIData(oldp+26,((IData)((vlSelf->SingleCycleCPU__DOT____Vcellout__IF_ID__pipe_data_o 
                                      >> 0x20U))),32);
    bufp->fullIData(oldp+27,((IData)(vlSelf->SingleCycleCPU__DOT____Vcellout__IF_ID__pipe_data_o)),32);
    bufp->fullBit(oldp+28,((1U & (vlSelf->SingleCycleCPU__DOT____Vcellout__ID_EX__pipe_data_o[4U] 
                                  >> 0x10U))));
    bufp->fullBit(oldp+29,((1U & (vlSelf->SingleCycleCPU__DOT____Vcellout__ID_EX__pipe_data_o[4U] 
                                  >> 0xfU))));
    bufp->fullBit(oldp+30,((1U & (vlSelf->SingleCycleCPU__DOT____Vcellout__ID_EX__pipe_data_o[4U] 
                                  >> 0xeU))));
    bufp->fullBit(oldp+31,((1U & (vlSelf->SingleCycleCPU__DOT____Vcellout__ID_EX__pipe_data_o[4U] 
                                  >> 0xbU))));
    bufp->fullBit(oldp+32,((1U & (vlSelf->SingleCycleCPU__DOT____Vcellout__ID_EX__pipe_data_o[4U] 
                                  >> 0xaU))));
    bufp->fullBit(oldp+33,((1U & (vlSelf->SingleCycleCPU__DOT____Vcellout__ID_EX__pipe_data_o[4U] 
                                  >> 9U))));
    bufp->fullCData(oldp+34,((3U & (vlSelf->SingleCycleCPU__DOT____Vcellout__ID_EX__pipe_data_o[4U] 
                                    >> 0xcU))),2);
    bufp->fullIData(oldp+35,(((vlSelf->SingleCycleCPU__DOT____Vcellout__ID_EX__pipe_data_o[4U] 
                               << 0x17U) | (vlSelf->SingleCycleCPU__DOT____Vcellout__ID_EX__pipe_data_o[3U] 
                                            >> 9U))),32);
    bufp->fullIData(oldp+36,(((vlSelf->SingleCycleCPU__DOT____Vcellout__ID_EX__pipe_data_o[3U] 
                               << 0x17U) | (vlSelf->SingleCycleCPU__DOT____Vcellout__ID_EX__pipe_data_o[2U] 
                                            >> 9U))),32);
    bufp->fullIData(oldp+37,(((vlSelf->SingleCycleCPU__DOT____Vcellout__ID_EX__pipe_data_o[2U] 
                               << 0x17U) | (vlSelf->SingleCycleCPU__DOT____Vcellout__ID_EX__pipe_data_o[1U] 
                                            >> 9U))),32);
    bufp->fullIData(oldp+38,(((vlSelf->SingleCycleCPU__DOT____Vcellout__ID_EX__pipe_data_o[1U] 
                               << 0x17U) | (vlSelf->SingleCycleCPU__DOT____Vcellout__ID_EX__pipe_data_o[0U] 
                                            >> 9U))),32);
    bufp->fullBit(oldp+39,((1U & (vlSelf->SingleCycleCPU__DOT____Vcellout__ID_EX__pipe_data_o[0U] 
                                  >> 8U))));
    bufp->fullCData(oldp+40,((7U & (vlSelf->SingleCycleCPU__DOT____Vcellout__ID_EX__pipe_data_o[0U] 
                                    >> 5U))),3);
    bufp->fullCData(oldp+41,((0x1fU & vlSelf->SingleCycleCPU__DOT____Vcellout__ID_EX__pipe_data_o[0U])),5);
    bufp->fullBit(oldp+42,((1U & (vlSelf->SingleCycleCPU__DOT____Vcellout__EX_MEM__pipe_data_o[3U] 
                                  >> 0xaU))));
    bufp->fullBit(oldp+43,(vlSelf->SingleCycleCPU__DOT__EX_MEM_memRead_w));
    bufp->fullBit(oldp+44,((1U & (vlSelf->SingleCycleCPU__DOT____Vcellout__EX_MEM__pipe_data_o[3U] 
                                  >> 8U))));
    bufp->fullBit(oldp+45,((1U & (vlSelf->SingleCycleCPU__DOT____Vcellout__EX_MEM__pipe_data_o[3U] 
                                  >> 7U))));
    bufp->fullBit(oldp+46,((1U & (vlSelf->SingleCycleCPU__DOT____Vcellout__EX_MEM__pipe_data_o[3U] 
                                  >> 6U))));
    bufp->fullBit(oldp+47,((1U & (vlSelf->SingleCycleCPU__DOT____Vcellout__EX_MEM__pipe_data_o[2U] 
                                  >> 5U))));
    bufp->fullIData(oldp+48,(((vlSelf->SingleCycleCPU__DOT____Vcellout__EX_MEM__pipe_data_o[3U] 
                               << 0x1aU) | (vlSelf->SingleCycleCPU__DOT____Vcellout__EX_MEM__pipe_data_o[2U] 
                                            >> 6U))),32);
    bufp->fullIData(oldp+49,(vlSelf->SingleCycleCPU__DOT__EX_MEM_ALU_result_w),32);
    bufp->fullIData(oldp+50,(((vlSelf->SingleCycleCPU__DOT____Vcellout__EX_MEM__pipe_data_o[1U] 
                               << 0x1bU) | (vlSelf->SingleCycleCPU__DOT____Vcellout__EX_MEM__pipe_data_o[0U] 
                                            >> 5U))),32);
    bufp->fullCData(oldp+51,((0x1fU & vlSelf->SingleCycleCPU__DOT____Vcellout__EX_MEM__pipe_data_o[0U])),5);
    bufp->fullBit(oldp+52,((1U & (vlSelf->SingleCycleCPU__DOT____Vcellout__MEM_WB__pipe_data_o[2U] 
                                  >> 6U))));
    bufp->fullBit(oldp+53,((1U & (vlSelf->SingleCycleCPU__DOT____Vcellout__MEM_WB__pipe_data_o[2U] 
                                  >> 5U))));
    bufp->fullIData(oldp+54,(((vlSelf->SingleCycleCPU__DOT____Vcellout__MEM_WB__pipe_data_o[2U] 
                               << 0x1bU) | (vlSelf->SingleCycleCPU__DOT____Vcellout__MEM_WB__pipe_data_o[1U] 
                                            >> 5U))),32);
    bufp->fullIData(oldp+55,(((vlSelf->SingleCycleCPU__DOT____Vcellout__MEM_WB__pipe_data_o[1U] 
                               << 0x1bU) | (vlSelf->SingleCycleCPU__DOT____Vcellout__MEM_WB__pipe_data_o[0U] 
                                            >> 5U))),32);
    bufp->fullCData(oldp+56,((0x1fU & vlSelf->SingleCycleCPU__DOT____Vcellout__MEM_WB__pipe_data_o[0U])),5);
    __Vtemp_h7cc2ded1__0[0U] = (((IData)((((QData)((IData)(vlSelf->SingleCycleCPU__DOT__ALU_result_w)) 
                                           << 0x20U) 
                                          | (QData)((IData)(
                                                            ((vlSelf->SingleCycleCPU__DOT____Vcellout__ID_EX__pipe_data_o[2U] 
                                                              << 0x17U) 
                                                             | (vlSelf->SingleCycleCPU__DOT____Vcellout__ID_EX__pipe_data_o[1U] 
                                                                >> 9U)))))) 
                                 << 5U) | (0x1fU & 
                                           vlSelf->SingleCycleCPU__DOT____Vcellout__ID_EX__pipe_data_o[0U]));
    __Vtemp_h7cc2ded1__0[1U] = (((IData)((((QData)((IData)(vlSelf->SingleCycleCPU__DOT__ALU_result_w)) 
                                           << 0x20U) 
                                          | (QData)((IData)(
                                                            ((vlSelf->SingleCycleCPU__DOT____Vcellout__ID_EX__pipe_data_o[2U] 
                                                              << 0x17U) 
                                                             | (vlSelf->SingleCycleCPU__DOT____Vcellout__ID_EX__pipe_data_o[1U] 
                                                                >> 9U)))))) 
                                 >> 0x1bU) | ((IData)(
                                                      ((((QData)((IData)(vlSelf->SingleCycleCPU__DOT__ALU_result_w)) 
                                                         << 0x20U) 
                                                        | (QData)((IData)(
                                                                          ((vlSelf->SingleCycleCPU__DOT____Vcellout__ID_EX__pipe_data_o[2U] 
                                                                            << 0x17U) 
                                                                           | (vlSelf->SingleCycleCPU__DOT____Vcellout__ID_EX__pipe_data_o[1U] 
                                                                              >> 9U))))) 
                                                       >> 0x20U)) 
                                              << 5U));
    __Vtemp_h7cc2ded1__0[2U] = (((((vlSelf->SingleCycleCPU__DOT____Vcellout__ID_EX__pipe_data_o[4U] 
                                    << 0x17U) | (vlSelf->SingleCycleCPU__DOT____Vcellout__ID_EX__pipe_data_o[3U] 
                                                 >> 9U)) 
                                  + ((vlSelf->SingleCycleCPU__DOT____Vcellout__ID_EX__pipe_data_o[1U] 
                                      << 0x18U) | (0xfffffeU 
                                                   & (vlSelf->SingleCycleCPU__DOT____Vcellout__ID_EX__pipe_data_o[0U] 
                                                      >> 8U)))) 
                                 << 6U) | (((0U == vlSelf->SingleCycleCPU__DOT__ALU_result_w) 
                                            << 5U) 
                                           | ((IData)(
                                                      ((((QData)((IData)(vlSelf->SingleCycleCPU__DOT__ALU_result_w)) 
                                                         << 0x20U) 
                                                        | (QData)((IData)(
                                                                          ((vlSelf->SingleCycleCPU__DOT____Vcellout__ID_EX__pipe_data_o[2U] 
                                                                            << 0x17U) 
                                                                           | (vlSelf->SingleCycleCPU__DOT____Vcellout__ID_EX__pipe_data_o[1U] 
                                                                              >> 9U))))) 
                                                       >> 0x20U)) 
                                              >> 0x1bU)));
    __Vtemp_h7cc2ded1__0[3U] = ((0x700U & (vlSelf->SingleCycleCPU__DOT____Vcellout__ID_EX__pipe_data_o[4U] 
                                           >> 6U)) 
                                | ((0x80U & (vlSelf->SingleCycleCPU__DOT____Vcellout__ID_EX__pipe_data_o[4U] 
                                             >> 4U)) 
                                   | ((0x40U & (vlSelf->SingleCycleCPU__DOT____Vcellout__ID_EX__pipe_data_o[4U] 
                                                >> 3U)) 
                                      | ((((vlSelf->SingleCycleCPU__DOT____Vcellout__ID_EX__pipe_data_o[4U] 
                                            << 0x17U) 
                                           | (vlSelf->SingleCycleCPU__DOT____Vcellout__ID_EX__pipe_data_o[3U] 
                                              >> 9U)) 
                                          + ((vlSelf->SingleCycleCPU__DOT____Vcellout__ID_EX__pipe_data_o[1U] 
                                              << 0x18U) 
                                             | (0xfffffeU 
                                                & (vlSelf->SingleCycleCPU__DOT____Vcellout__ID_EX__pipe_data_o[0U] 
                                                   >> 8U)))) 
                                         >> 0x1aU))));
    bufp->fullWData(oldp+57,(__Vtemp_h7cc2ded1__0),107);
    bufp->fullWData(oldp+61,(vlSelf->SingleCycleCPU__DOT____Vcellout__EX_MEM__pipe_data_o),107);
    bufp->fullWData(oldp+65,(vlSelf->SingleCycleCPU__DOT____Vcellout__ID_EX__pipe_data_o),145);
    bufp->fullQData(oldp+70,((((QData)((IData)(vlSelf->SingleCycleCPU__DOT__pc_o_w)) 
                               << 0x20U) | (QData)((IData)(
                                                           ((0x80U 
                                                             <= vlSelf->SingleCycleCPU__DOT__pc_o_w)
                                                             ? 0U
                                                             : 
                                                            ((vlSelf->SingleCycleCPU__DOT__m_InstMem__DOT__insts
                                                              [
                                                              (0x7fU 
                                                               & vlSelf->SingleCycleCPU__DOT__pc_o_w)] 
                                                              << 0x18U) 
                                                             | ((vlSelf->SingleCycleCPU__DOT__m_InstMem__DOT__insts
                                                                 [
                                                                 (0x7fU 
                                                                  & ((IData)(1U) 
                                                                     + vlSelf->SingleCycleCPU__DOT__pc_o_w))] 
                                                                 << 0x10U) 
                                                                | ((vlSelf->SingleCycleCPU__DOT__m_InstMem__DOT__insts
                                                                    [
                                                                    (0x7fU 
                                                                     & ((IData)(2U) 
                                                                        + vlSelf->SingleCycleCPU__DOT__pc_o_w))] 
                                                                    << 8U) 
                                                                   | vlSelf->SingleCycleCPU__DOT__m_InstMem__DOT__insts
                                                                   [
                                                                   (0x7fU 
                                                                    & ((IData)(3U) 
                                                                       + vlSelf->SingleCycleCPU__DOT__pc_o_w))])))))))),64);
    bufp->fullQData(oldp+72,(vlSelf->SingleCycleCPU__DOT____Vcellout__IF_ID__pipe_data_o),64);
    bufp->fullWData(oldp+74,(vlSelf->SingleCycleCPU__DOT____Vcellout__MEM_WB__pipe_data_o),71);
    bufp->fullCData(oldp+77,((0x7fU & (IData)(vlSelf->SingleCycleCPU__DOT____Vcellout__IF_ID__pipe_data_o))),7);
    bufp->fullSData(oldp+78,(vlSelf->SingleCycleCPU__DOT__m_Control__DOT__ctl),10);
    bufp->fullCData(oldp+79,((0x1fU & (IData)((vlSelf->SingleCycleCPU__DOT____Vcellout__IF_ID__pipe_data_o 
                                               >> 0xfU)))),5);
    bufp->fullCData(oldp+80,((0x1fU & (IData)((vlSelf->SingleCycleCPU__DOT____Vcellout__IF_ID__pipe_data_o 
                                               >> 0x14U)))),5);
    bufp->fullIData(oldp+81,(vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs
                             [(0x1fU & (IData)((vlSelf->SingleCycleCPU__DOT____Vcellout__IF_ID__pipe_data_o 
                                                >> 0xfU)))]),32);
    bufp->fullIData(oldp+82,(vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs
                             [(0x1fU & (IData)((vlSelf->SingleCycleCPU__DOT____Vcellout__IF_ID__pipe_data_o 
                                                >> 0x14U)))]),32);
    __Vtemp_h64830970__0[4U] = ((0x8000U & ((IData)(vlSelf->SingleCycleCPU__DOT__m_Control__DOT__ctl) 
                                            << 9U)) 
                                | ((0x4000U & ((IData)(vlSelf->SingleCycleCPU__DOT__m_Control__DOT__ctl) 
                                               << 6U)) 
                                   | ((0x3000U & ((IData)(vlSelf->SingleCycleCPU__DOT__m_Control__DOT__ctl) 
                                                  << 0xaU)) 
                                      | ((0x800U & 
                                          ((IData)(vlSelf->SingleCycleCPU__DOT__m_Control__DOT__ctl) 
                                           << 6U)) 
                                         | ((0x400U 
                                             & ((IData)(vlSelf->SingleCycleCPU__DOT__m_Control__DOT__ctl) 
                                                << 1U)) 
                                            | ((0x200U 
                                                & ((IData)(vlSelf->SingleCycleCPU__DOT__m_Control__DOT__ctl) 
                                                   << 2U)) 
                                               | ((IData)(
                                                          ((((QData)((IData)(
                                                                             (vlSelf->SingleCycleCPU__DOT____Vcellout__IF_ID__pipe_data_o 
                                                                              >> 0x20U))) 
                                                             << 0x20U) 
                                                            | (QData)((IData)(
                                                                              vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs
                                                                              [
                                                                              (0x1fU 
                                                                               & (IData)(
                                                                                (vlSelf->SingleCycleCPU__DOT____Vcellout__IF_ID__pipe_data_o 
                                                                                >> 0xfU)))]))) 
                                                           >> 0x20U)) 
                                                  >> 0x17U)))))));
    __Vtemp_h1625ab87__0[0U] = ((vlSelf->SingleCycleCPU__DOT__imm_W 
                                 << 9U) | ((0x100U 
                                            & ((IData)(
                                                       (vlSelf->SingleCycleCPU__DOT____Vcellout__IF_ID__pipe_data_o 
                                                        >> 0x1eU)) 
                                               << 8U)) 
                                           | (0xffU 
                                              & (IData)(
                                                        (vlSelf->SingleCycleCPU__DOT____Vcellout__IF_ID__pipe_data_o 
                                                         >> 7U)))));
    __Vtemp_h1625ab87__0[1U] = ((vlSelf->SingleCycleCPU__DOT__imm_W 
                                 >> 0x17U) | (vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs
                                              [(0x1fU 
                                                & (IData)(
                                                          (vlSelf->SingleCycleCPU__DOT____Vcellout__IF_ID__pipe_data_o 
                                                           >> 0x14U)))] 
                                              << 9U));
    __Vtemp_h1625ab87__0[2U] = ((vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs
                                 [(0x1fU & (IData)(
                                                   (vlSelf->SingleCycleCPU__DOT____Vcellout__IF_ID__pipe_data_o 
                                                    >> 0x14U)))] 
                                 >> 0x17U) | ((IData)(
                                                      (((QData)((IData)(
                                                                        (vlSelf->SingleCycleCPU__DOT____Vcellout__IF_ID__pipe_data_o 
                                                                         >> 0x20U))) 
                                                        << 0x20U) 
                                                       | (QData)((IData)(
                                                                         vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs
                                                                         [
                                                                         (0x1fU 
                                                                          & (IData)(
                                                                                (vlSelf->SingleCycleCPU__DOT____Vcellout__IF_ID__pipe_data_o 
                                                                                >> 0xfU)))])))) 
                                              << 9U));
    __Vtemp_h1625ab87__0[3U] = (((IData)((((QData)((IData)(
                                                           (vlSelf->SingleCycleCPU__DOT____Vcellout__IF_ID__pipe_data_o 
                                                            >> 0x20U))) 
                                           << 0x20U) 
                                          | (QData)((IData)(
                                                            vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs
                                                            [
                                                            (0x1fU 
                                                             & (IData)(
                                                                       (vlSelf->SingleCycleCPU__DOT____Vcellout__IF_ID__pipe_data_o 
                                                                        >> 0xfU)))])))) 
                                 >> 0x17U) | ((IData)(
                                                      ((((QData)((IData)(
                                                                         (vlSelf->SingleCycleCPU__DOT____Vcellout__IF_ID__pipe_data_o 
                                                                          >> 0x20U))) 
                                                         << 0x20U) 
                                                        | (QData)((IData)(
                                                                          vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs
                                                                          [
                                                                          (0x1fU 
                                                                           & (IData)(
                                                                                (vlSelf->SingleCycleCPU__DOT____Vcellout__IF_ID__pipe_data_o 
                                                                                >> 0xfU)))]))) 
                                                       >> 0x20U)) 
                                              << 9U));
    __Vtemp_h1625ab87__0[4U] = ((0x10000U & ((IData)(vlSelf->SingleCycleCPU__DOT__m_Control__DOT__ctl) 
                                             << 0xcU)) 
                                | __Vtemp_h64830970__0[4U]);
    bufp->fullWData(oldp+83,(__Vtemp_h1625ab87__0),145);
    bufp->fullWData(oldp+88,(vlSelf->SingleCycleCPU__DOT____Vcellinp__MEM_WB__pipe_data_i),71);
    bufp->fullIData(oldp+91,(vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[0]),32);
    bufp->fullIData(oldp+92,(vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[1]),32);
    bufp->fullIData(oldp+93,(vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[2]),32);
    bufp->fullIData(oldp+94,(vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[3]),32);
    bufp->fullIData(oldp+95,(vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[4]),32);
    bufp->fullIData(oldp+96,(vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[5]),32);
    bufp->fullIData(oldp+97,(vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[6]),32);
    bufp->fullIData(oldp+98,(vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[7]),32);
    bufp->fullIData(oldp+99,(vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[8]),32);
    bufp->fullIData(oldp+100,(vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[9]),32);
    bufp->fullIData(oldp+101,(vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[10]),32);
    bufp->fullIData(oldp+102,(vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[11]),32);
    bufp->fullIData(oldp+103,(vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[12]),32);
    bufp->fullIData(oldp+104,(vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[13]),32);
    bufp->fullIData(oldp+105,(vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[14]),32);
    bufp->fullIData(oldp+106,(vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[15]),32);
    bufp->fullIData(oldp+107,(vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[16]),32);
    bufp->fullIData(oldp+108,(vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[17]),32);
    bufp->fullIData(oldp+109,(vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[18]),32);
    bufp->fullIData(oldp+110,(vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[19]),32);
    bufp->fullIData(oldp+111,(vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[20]),32);
    bufp->fullIData(oldp+112,(vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[21]),32);
    bufp->fullIData(oldp+113,(vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[22]),32);
    bufp->fullIData(oldp+114,(vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[23]),32);
    bufp->fullIData(oldp+115,(vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[24]),32);
    bufp->fullIData(oldp+116,(vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[25]),32);
    bufp->fullIData(oldp+117,(vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[26]),32);
    bufp->fullIData(oldp+118,(vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[27]),32);
    bufp->fullIData(oldp+119,(vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[28]),32);
    bufp->fullIData(oldp+120,(vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[29]),32);
    bufp->fullIData(oldp+121,(vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[30]),32);
    bufp->fullIData(oldp+122,(vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[31]),32);
    bufp->fullBit(oldp+123,(vlSelf->clk));
    bufp->fullBit(oldp+124,(vlSelf->start));
    bufp->fullIData(oldp+125,(vlSelf->r[0]),32);
    bufp->fullIData(oldp+126,(vlSelf->r[1]),32);
    bufp->fullIData(oldp+127,(vlSelf->r[2]),32);
    bufp->fullIData(oldp+128,(vlSelf->r[3]),32);
    bufp->fullIData(oldp+129,(vlSelf->r[4]),32);
    bufp->fullIData(oldp+130,(vlSelf->r[5]),32);
    bufp->fullIData(oldp+131,(vlSelf->r[6]),32);
    bufp->fullIData(oldp+132,(vlSelf->r[7]),32);
    bufp->fullIData(oldp+133,(vlSelf->r[8]),32);
    bufp->fullIData(oldp+134,(vlSelf->r[9]),32);
    bufp->fullIData(oldp+135,(vlSelf->r[10]),32);
    bufp->fullIData(oldp+136,(vlSelf->r[11]),32);
    bufp->fullIData(oldp+137,(vlSelf->r[12]),32);
    bufp->fullIData(oldp+138,(vlSelf->r[13]),32);
    bufp->fullIData(oldp+139,(vlSelf->r[14]),32);
    bufp->fullIData(oldp+140,(vlSelf->r[15]),32);
    bufp->fullIData(oldp+141,(vlSelf->r[16]),32);
    bufp->fullIData(oldp+142,(vlSelf->r[17]),32);
    bufp->fullIData(oldp+143,(vlSelf->r[18]),32);
    bufp->fullIData(oldp+144,(vlSelf->r[19]),32);
    bufp->fullIData(oldp+145,(vlSelf->r[20]),32);
    bufp->fullIData(oldp+146,(vlSelf->r[21]),32);
    bufp->fullIData(oldp+147,(vlSelf->r[22]),32);
    bufp->fullIData(oldp+148,(vlSelf->r[23]),32);
    bufp->fullIData(oldp+149,(vlSelf->r[24]),32);
    bufp->fullIData(oldp+150,(vlSelf->r[25]),32);
    bufp->fullIData(oldp+151,(vlSelf->r[26]),32);
    bufp->fullIData(oldp+152,(vlSelf->r[27]),32);
    bufp->fullIData(oldp+153,(vlSelf->r[28]),32);
    bufp->fullIData(oldp+154,(vlSelf->r[29]),32);
    bufp->fullIData(oldp+155,(vlSelf->r[30]),32);
    bufp->fullIData(oldp+156,(vlSelf->r[31]),32);
    bufp->fullIData(oldp+157,(vlSelf->SingleCycleCPU__DOT__readdata_w),32);
    bufp->fullIData(oldp+158,(0x6bU),32);
    bufp->fullIData(oldp+159,(0x91U),32);
    bufp->fullIData(oldp+160,(0x40U),32);
    bufp->fullIData(oldp+161,(0x47U),32);
    bufp->fullIData(oldp+162,(4U),32);
    bufp->fullIData(oldp+163,(0x20U),32);
}
