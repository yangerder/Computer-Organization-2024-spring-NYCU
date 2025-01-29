// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VPipelineCPU__Syms.h"


void VPipelineCPU___024root__trace_chg_sub_0(VPipelineCPU___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void VPipelineCPU___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPipelineCPU___024root__trace_chg_top_0\n"); );
    // Init
    VPipelineCPU___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VPipelineCPU___024root*>(voidSelf);
    VPipelineCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    VPipelineCPU___024root__trace_chg_sub_0((&vlSymsp->TOP), bufp);
}

void VPipelineCPU___024root__trace_chg_sub_0(VPipelineCPU___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    VPipelineCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPipelineCPU___024root__trace_chg_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        bufp->chgIData(oldp+0,(((0x80U <= vlSelf->PipelineCPU__DOT__IF_PC)
                                 ? 0U : ((vlSelf->PipelineCPU__DOT__m_InstMem__DOT__insts
                                          [(0x7fU & vlSelf->PipelineCPU__DOT__IF_PC)] 
                                          << 0x18U) 
                                         | ((vlSelf->PipelineCPU__DOT__m_InstMem__DOT__insts
                                             [(0x7fU 
                                               & ((IData)(1U) 
                                                  + vlSelf->PipelineCPU__DOT__IF_PC))] 
                                             << 0x10U) 
                                            | ((vlSelf->PipelineCPU__DOT__m_InstMem__DOT__insts
                                                [(0x7fU 
                                                  & ((IData)(2U) 
                                                     + vlSelf->PipelineCPU__DOT__IF_PC))] 
                                                << 8U) 
                                               | vlSelf->PipelineCPU__DOT__m_InstMem__DOT__insts
                                               [(0x7fU 
                                                 & ((IData)(3U) 
                                                    + vlSelf->PipelineCPU__DOT__IF_PC))]))))),32);
        bufp->chgIData(oldp+1,(vlSelf->PipelineCPU__DOT__IF_PC),32);
        bufp->chgIData(oldp+2,(((IData)(4U) + vlSelf->PipelineCPU__DOT__IF_PC)),32);
        bufp->chgIData(oldp+3,(vlSelf->PipelineCPU__DOT__ID_inst),32);
        bufp->chgIData(oldp+4,(vlSelf->PipelineCPU__DOT__ID_PC),32);
        bufp->chgIData(oldp+5,(vlSelf->PipelineCPU__DOT__ID_PCaddfour),32);
        bufp->chgIData(oldp+6,(vlSelf->PipelineCPU__DOT__ID_imm),32);
        bufp->chgIData(oldp+7,(vlSelf->PipelineCPU__DOT__EX_readData1),32);
        bufp->chgIData(oldp+8,(vlSelf->PipelineCPU__DOT__EX_readData2),32);
        bufp->chgIData(oldp+9,(vlSelf->PipelineCPU__DOT__EX_PC),32);
        bufp->chgIData(oldp+10,(vlSelf->PipelineCPU__DOT__EX_PCaddfour),32);
        bufp->chgIData(oldp+11,(vlSelf->PipelineCPU__DOT__EX_imm),32);
        bufp->chgIData(oldp+12,(vlSelf->PipelineCPU__DOT__EX_inst),32);
        bufp->chgIData(oldp+13,((vlSelf->PipelineCPU__DOT__EX_PC 
                                 + vlSelf->PipelineCPU__DOT__EX_imm)),32);
        bufp->chgCData(oldp+14,(vlSelf->PipelineCPU__DOT__EX_readReg1),5);
        bufp->chgCData(oldp+15,(vlSelf->PipelineCPU__DOT__EX_readReg2),5);
        bufp->chgCData(oldp+16,(vlSelf->PipelineCPU__DOT__EX_writeReg),5);
        bufp->chgCData(oldp+17,(vlSelf->PipelineCPU__DOT__ALUCtl),4);
        bufp->chgCData(oldp+18,(vlSelf->PipelineCPU__DOT__EX_branchType),2);
        bufp->chgCData(oldp+19,(vlSelf->PipelineCPU__DOT__EX_memtoReg),2);
        bufp->chgCData(oldp+20,(vlSelf->PipelineCPU__DOT__EX_ALUOp),2);
        bufp->chgBit(oldp+21,(vlSelf->PipelineCPU__DOT__EX_branch));
        bufp->chgBit(oldp+22,(vlSelf->PipelineCPU__DOT__EX_memWrite));
        bufp->chgBit(oldp+23,(vlSelf->PipelineCPU__DOT__EX_ALUSrc));
        bufp->chgBit(oldp+24,(vlSelf->PipelineCPU__DOT__EX_regWrite));
        bufp->chgBit(oldp+25,(vlSelf->PipelineCPU__DOT__EX_jump));
        bufp->chgBit(oldp+26,(vlSelf->PipelineCPU__DOT__EX_JumpSrc));
        bufp->chgIData(oldp+27,(vlSelf->PipelineCPU__DOT__MEM_writeData),32);
        bufp->chgIData(oldp+28,(vlSelf->PipelineCPU__DOT__MEM_PCaddfour),32);
        bufp->chgCData(oldp+29,(vlSelf->PipelineCPU__DOT__MEM_writeReg),5);
        bufp->chgCData(oldp+30,(vlSelf->PipelineCPU__DOT__MEM_memtoReg),2);
        bufp->chgBit(oldp+31,(vlSelf->PipelineCPU__DOT__MEM_memWrite));
        bufp->chgBit(oldp+32,(vlSelf->PipelineCPU__DOT__MEM_regWrite));
        bufp->chgIData(oldp+33,(vlSelf->PipelineCPU__DOT__WB_ALUOut),32);
        bufp->chgIData(oldp+34,(vlSelf->PipelineCPU__DOT__WB_PCaddfour),32);
        bufp->chgIData(oldp+35,(vlSelf->PipelineCPU__DOT__WB_readData),32);
        bufp->chgIData(oldp+36,(vlSelf->PipelineCPU__DOT__WB_result),32);
        bufp->chgCData(oldp+37,(vlSelf->PipelineCPU__DOT__WB_writeReg),5);
        bufp->chgCData(oldp+38,(vlSelf->PipelineCPU__DOT__WB_memtoReg),2);
        bufp->chgBit(oldp+39,(vlSelf->PipelineCPU__DOT__WB_regWrite));
        bufp->chgCData(oldp+40,(vlSelf->PipelineCPU__DOT__EX_forward1),2);
        bufp->chgCData(oldp+41,(vlSelf->PipelineCPU__DOT__EX_forward2),2);
        bufp->chgBit(oldp+42,((1U & (vlSelf->PipelineCPU__DOT__EX_inst 
                                     >> 0x1eU))));
        bufp->chgCData(oldp+43,((7U & (vlSelf->PipelineCPU__DOT__EX_inst 
                                       >> 0xcU))),3);
        bufp->chgCData(oldp+44,((0x7fU & vlSelf->PipelineCPU__DOT__ID_inst)),7);
        bufp->chgCData(oldp+45,((7U & (vlSelf->PipelineCPU__DOT__ID_inst 
                                       >> 0xcU))),3);
        bufp->chgCData(oldp+46,((0x1fU & (vlSelf->PipelineCPU__DOT__ID_inst 
                                          >> 0xfU))),5);
        bufp->chgCData(oldp+47,((0x1fU & (vlSelf->PipelineCPU__DOT__ID_inst 
                                          >> 0x14U))),5);
        bufp->chgCData(oldp+48,((0x1fU & (vlSelf->PipelineCPU__DOT__ID_inst 
                                          >> 7U))),5);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
        bufp->chgIData(oldp+49,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[0]),32);
        bufp->chgIData(oldp+50,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[1]),32);
        bufp->chgIData(oldp+51,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[2]),32);
        bufp->chgIData(oldp+52,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[3]),32);
        bufp->chgIData(oldp+53,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[4]),32);
        bufp->chgIData(oldp+54,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[5]),32);
        bufp->chgIData(oldp+55,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[6]),32);
        bufp->chgIData(oldp+56,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[7]),32);
        bufp->chgIData(oldp+57,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[8]),32);
        bufp->chgIData(oldp+58,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[9]),32);
        bufp->chgIData(oldp+59,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[10]),32);
        bufp->chgIData(oldp+60,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[11]),32);
        bufp->chgIData(oldp+61,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[12]),32);
        bufp->chgIData(oldp+62,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[13]),32);
        bufp->chgIData(oldp+63,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[14]),32);
        bufp->chgIData(oldp+64,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[15]),32);
        bufp->chgIData(oldp+65,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[16]),32);
        bufp->chgIData(oldp+66,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[17]),32);
        bufp->chgIData(oldp+67,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[18]),32);
        bufp->chgIData(oldp+68,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[19]),32);
        bufp->chgIData(oldp+69,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[20]),32);
        bufp->chgIData(oldp+70,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[21]),32);
        bufp->chgIData(oldp+71,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[22]),32);
        bufp->chgIData(oldp+72,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[23]),32);
        bufp->chgIData(oldp+73,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[24]),32);
        bufp->chgIData(oldp+74,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[25]),32);
        bufp->chgIData(oldp+75,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[26]),32);
        bufp->chgIData(oldp+76,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[27]),32);
        bufp->chgIData(oldp+77,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[28]),32);
        bufp->chgIData(oldp+78,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[29]),32);
        bufp->chgIData(oldp+79,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[30]),32);
        bufp->chgIData(oldp+80,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[31]),32);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[3U])) {
        bufp->chgCData(oldp+81,((3U & ((IData)(vlSelf->PipelineCPU__DOT__m_Control__DOT__ctrl) 
                                       >> 3U))),2);
        bufp->chgCData(oldp+82,((3U & ((IData)(vlSelf->PipelineCPU__DOT__m_Control__DOT__ctrl) 
                                       >> 9U))),2);
        bufp->chgCData(oldp+83,((3U & (IData)(vlSelf->PipelineCPU__DOT__m_Control__DOT__ctrl))),2);
        bufp->chgBit(oldp+84,((1U & ((IData)(vlSelf->PipelineCPU__DOT__m_Control__DOT__ctrl) 
                                     >> 5U))));
        bufp->chgBit(oldp+85,((1U & ((IData)(vlSelf->PipelineCPU__DOT__m_Control__DOT__ctrl) 
                                     >> 7U))));
        bufp->chgBit(oldp+86,((1U & ((IData)(vlSelf->PipelineCPU__DOT__m_Control__DOT__ctrl) 
                                     >> 6U))));
        bufp->chgBit(oldp+87,((1U & ((IData)(vlSelf->PipelineCPU__DOT__m_Control__DOT__ctrl) 
                                     >> 0xcU))));
        bufp->chgBit(oldp+88,((1U & ((IData)(vlSelf->PipelineCPU__DOT__m_Control__DOT__ctrl) 
                                     >> 8U))));
        bufp->chgBit(oldp+89,((1U & ((IData)(vlSelf->PipelineCPU__DOT__m_Control__DOT__ctrl) 
                                     >> 2U))));
        bufp->chgBit(oldp+90,((1U & ((IData)(vlSelf->PipelineCPU__DOT__m_Control__DOT__ctrl) 
                                     >> 0xbU))));
        bufp->chgIData(oldp+91,(vlSelf->PipelineCPU__DOT__ALUA),32);
        bufp->chgIData(oldp+92,(vlSelf->PipelineCPU__DOT__ALUB),32);
        bufp->chgIData(oldp+93,(vlSelf->PipelineCPU__DOT__EX_ALUOut),32);
        bufp->chgIData(oldp+94,(vlSelf->PipelineCPU__DOT__EX_writeData),32);
        bufp->chgBit(oldp+95,(vlSelf->PipelineCPU__DOT__EX_memRead));
        bufp->chgBit(oldp+96,(vlSelf->PipelineCPU__DOT__EX_PCSrc));
        bufp->chgBit(oldp+97,((0U == vlSelf->PipelineCPU__DOT__EX_ALUOut)));
        bufp->chgBit(oldp+98,(VL_GTS_III(32, 0U, vlSelf->PipelineCPU__DOT__EX_ALUOut)));
        bufp->chgIData(oldp+99,(vlSelf->PipelineCPU__DOT__MEM_ALUOut),32);
        bufp->chgBit(oldp+100,(vlSelf->PipelineCPU__DOT__MEM_memRead));
        bufp->chgBit(oldp+101,(vlSelf->PipelineCPU__DOT__stallPC));
        bufp->chgBit(oldp+102,(vlSelf->PipelineCPU__DOT__IFID_stall));
        bufp->chgBit(oldp+103,(vlSelf->PipelineCPU__DOT__IDEX_flush));
        bufp->chgSData(oldp+104,(vlSelf->PipelineCPU__DOT__m_Control__DOT__ctrl),13);
        bufp->chgBit(oldp+105,(vlSelf->PipelineCPU__DOT__m_Hazard__DOT__lwStall));
    }
    bufp->chgBit(oldp+106,(vlSelf->clk));
    bufp->chgBit(oldp+107,(vlSelf->start));
    bufp->chgIData(oldp+108,(vlSelf->r[0]),32);
    bufp->chgIData(oldp+109,(vlSelf->r[1]),32);
    bufp->chgIData(oldp+110,(vlSelf->r[2]),32);
    bufp->chgIData(oldp+111,(vlSelf->r[3]),32);
    bufp->chgIData(oldp+112,(vlSelf->r[4]),32);
    bufp->chgIData(oldp+113,(vlSelf->r[5]),32);
    bufp->chgIData(oldp+114,(vlSelf->r[6]),32);
    bufp->chgIData(oldp+115,(vlSelf->r[7]),32);
    bufp->chgIData(oldp+116,(vlSelf->r[8]),32);
    bufp->chgIData(oldp+117,(vlSelf->r[9]),32);
    bufp->chgIData(oldp+118,(vlSelf->r[10]),32);
    bufp->chgIData(oldp+119,(vlSelf->r[11]),32);
    bufp->chgIData(oldp+120,(vlSelf->r[12]),32);
    bufp->chgIData(oldp+121,(vlSelf->r[13]),32);
    bufp->chgIData(oldp+122,(vlSelf->r[14]),32);
    bufp->chgIData(oldp+123,(vlSelf->r[15]),32);
    bufp->chgIData(oldp+124,(vlSelf->r[16]),32);
    bufp->chgIData(oldp+125,(vlSelf->r[17]),32);
    bufp->chgIData(oldp+126,(vlSelf->r[18]),32);
    bufp->chgIData(oldp+127,(vlSelf->r[19]),32);
    bufp->chgIData(oldp+128,(vlSelf->r[20]),32);
    bufp->chgIData(oldp+129,(vlSelf->r[21]),32);
    bufp->chgIData(oldp+130,(vlSelf->r[22]),32);
    bufp->chgIData(oldp+131,(vlSelf->r[23]),32);
    bufp->chgIData(oldp+132,(vlSelf->r[24]),32);
    bufp->chgIData(oldp+133,(vlSelf->r[25]),32);
    bufp->chgIData(oldp+134,(vlSelf->r[26]),32);
    bufp->chgIData(oldp+135,(vlSelf->r[27]),32);
    bufp->chgIData(oldp+136,(vlSelf->r[28]),32);
    bufp->chgIData(oldp+137,(vlSelf->r[29]),32);
    bufp->chgIData(oldp+138,(vlSelf->r[30]),32);
    bufp->chgIData(oldp+139,(vlSelf->r[31]),32);
    bufp->chgIData(oldp+140,(((IData)(vlSelf->PipelineCPU__DOT__EX_JumpSrc)
                               ? vlSelf->PipelineCPU__DOT__EX_ALUOut
                               : (vlSelf->PipelineCPU__DOT__EX_PC 
                                  + vlSelf->PipelineCPU__DOT__EX_imm))),32);
    bufp->chgIData(oldp+141,(((IData)(vlSelf->PipelineCPU__DOT__EX_PCSrc)
                               ? ((IData)(vlSelf->PipelineCPU__DOT__EX_JumpSrc)
                                   ? vlSelf->PipelineCPU__DOT__EX_ALUOut
                                   : (vlSelf->PipelineCPU__DOT__EX_PC 
                                      + vlSelf->PipelineCPU__DOT__EX_imm))
                               : ((IData)(4U) + vlSelf->PipelineCPU__DOT__IF_PC))),32);
    bufp->chgIData(oldp+142,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs
                             [(0x1fU & (vlSelf->PipelineCPU__DOT__ID_inst 
                                        >> 0xfU))]),32);
    bufp->chgIData(oldp+143,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs
                             [(0x1fU & (vlSelf->PipelineCPU__DOT__ID_inst 
                                        >> 0x14U))]),32);
    bufp->chgBit(oldp+144,(((0U == (IData)(vlSelf->PipelineCPU__DOT__EX_branchType))
                             ? (0U == vlSelf->PipelineCPU__DOT__EX_ALUOut)
                             : ((1U == (IData)(vlSelf->PipelineCPU__DOT__EX_branchType))
                                 ? (0U != vlSelf->PipelineCPU__DOT__EX_ALUOut)
                                 : ((2U == (IData)(vlSelf->PipelineCPU__DOT__EX_branchType))
                                     ? VL_GTS_III(32, 0U, vlSelf->PipelineCPU__DOT__EX_ALUOut)
                                     : VL_LTES_III(32, 0U, vlSelf->PipelineCPU__DOT__EX_ALUOut))))));
    bufp->chgBit(oldp+145,(((IData)(vlSelf->PipelineCPU__DOT__EX_branch) 
                            & ((0U == (IData)(vlSelf->PipelineCPU__DOT__EX_branchType))
                                ? (0U == vlSelf->PipelineCPU__DOT__EX_ALUOut)
                                : ((1U == (IData)(vlSelf->PipelineCPU__DOT__EX_branchType))
                                    ? (0U != vlSelf->PipelineCPU__DOT__EX_ALUOut)
                                    : ((2U == (IData)(vlSelf->PipelineCPU__DOT__EX_branchType))
                                        ? VL_GTS_III(32, 0U, vlSelf->PipelineCPU__DOT__EX_ALUOut)
                                        : VL_LTES_III(32, 0U, vlSelf->PipelineCPU__DOT__EX_ALUOut)))))));
    bufp->chgIData(oldp+146,(vlSelf->PipelineCPU__DOT__MEM_readData),32);
}

void VPipelineCPU___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPipelineCPU___024root__trace_cleanup\n"); );
    // Init
    VPipelineCPU___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VPipelineCPU___024root*>(voidSelf);
    VPipelineCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[3U] = 0U;
}
