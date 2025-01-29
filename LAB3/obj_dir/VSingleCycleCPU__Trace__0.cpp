// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VSingleCycleCPU__Syms.h"


void VSingleCycleCPU___024root__trace_chg_sub_0(VSingleCycleCPU___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void VSingleCycleCPU___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSingleCycleCPU___024root__trace_chg_top_0\n"); );
    // Init
    VSingleCycleCPU___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VSingleCycleCPU___024root*>(voidSelf);
    VSingleCycleCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    VSingleCycleCPU___024root__trace_chg_sub_0((&vlSymsp->TOP), bufp);
}

void VSingleCycleCPU___024root__trace_chg_sub_0(VSingleCycleCPU___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    VSingleCycleCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSingleCycleCPU___024root__trace_chg_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    VlWide<4>/*127:0*/ __Vtemp_h7cc2ded1__0;
    VlWide<5>/*159:0*/ __Vtemp_h64830970__0;
    VlWide<5>/*159:0*/ __Vtemp_h1625ab87__0;
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        bufp->chgIData(oldp+0,(vlSelf->SingleCycleCPU__DOT__pc_o_w),32);
        bufp->chgIData(oldp+1,(((0x80U <= vlSelf->SingleCycleCPU__DOT__pc_o_w)
                                 ? 0U : ((vlSelf->SingleCycleCPU__DOT__m_InstMem__DOT__insts
                                          [(0x7fU & vlSelf->SingleCycleCPU__DOT__pc_o_w)] 
                                          << 0x18U) 
                                         | ((vlSelf->SingleCycleCPU__DOT__m_InstMem__DOT__insts
                                             [(0x7fU 
                                               & ((IData)(1U) 
                                                  + vlSelf->SingleCycleCPU__DOT__pc_o_w))] 
                                             << 0x10U) 
                                            | ((vlSelf->SingleCycleCPU__DOT__m_InstMem__DOT__insts
                                                [(0x7fU 
                                                  & ((IData)(2U) 
                                                     + vlSelf->SingleCycleCPU__DOT__pc_o_w))] 
                                                << 8U) 
                                               | vlSelf->SingleCycleCPU__DOT__m_InstMem__DOT__insts
                                               [(0x7fU 
                                                 & ((IData)(3U) 
                                                    + vlSelf->SingleCycleCPU__DOT__pc_o_w))]))))),32);
        bufp->chgBit(oldp+2,((1U & ((IData)(vlSelf->SingleCycleCPU__DOT__m_Control__DOT__ctl) 
                                    >> 7U))));
        bufp->chgBit(oldp+3,((1U & ((IData)(vlSelf->SingleCycleCPU__DOT__m_Control__DOT__ctl) 
                                    >> 4U))));
        bufp->chgBit(oldp+4,((1U & ((IData)(vlSelf->SingleCycleCPU__DOT__m_Control__DOT__ctl) 
                                    >> 9U))));
        bufp->chgBit(oldp+5,((1U & ((IData)(vlSelf->SingleCycleCPU__DOT__m_Control__DOT__ctl) 
                                    >> 6U))));
        bufp->chgBit(oldp+6,((1U & ((IData)(vlSelf->SingleCycleCPU__DOT__m_Control__DOT__ctl) 
                                    >> 5U))));
        bufp->chgBit(oldp+7,((1U & ((IData)(vlSelf->SingleCycleCPU__DOT__m_Control__DOT__ctl) 
                                    >> 8U))));
        bufp->chgBit(oldp+8,((1U & ((IData)(vlSelf->SingleCycleCPU__DOT__m_Control__DOT__ctl) 
                                    >> 1U))));
        bufp->chgBit(oldp+9,((1U & (IData)(vlSelf->SingleCycleCPU__DOT__m_Control__DOT__ctl))));
        bufp->chgCData(oldp+10,((3U & ((IData)(vlSelf->SingleCycleCPU__DOT__m_Control__DOT__ctl) 
                                       >> 2U))),2);
        bufp->chgIData(oldp+11,(vlSelf->SingleCycleCPU__DOT__mux_alusrc_w),32);
        bufp->chgIData(oldp+12,(((1U & (((vlSelf->SingleCycleCPU__DOT____Vcellout__EX_MEM__pipe_data_o[3U] 
                                          >> 0xaU) 
                                         & (vlSelf->SingleCycleCPU__DOT____Vcellout__EX_MEM__pipe_data_o[2U] 
                                            >> 5U)) 
                                        | ((IData)(vlSelf->SingleCycleCPU__DOT__m_Control__DOT__ctl) 
                                           >> 1U)))
                                  ? ((vlSelf->SingleCycleCPU__DOT____Vcellout__EX_MEM__pipe_data_o[3U] 
                                      << 0x1aU) | (
                                                   vlSelf->SingleCycleCPU__DOT____Vcellout__EX_MEM__pipe_data_o[2U] 
                                                   >> 6U))
                                  : ((IData)(4U) + vlSelf->SingleCycleCPU__DOT__pc_o_w))),32);
        bufp->chgIData(oldp+13,(((1U & (IData)(vlSelf->SingleCycleCPU__DOT__m_Control__DOT__ctl))
                                  ? vlSelf->SingleCycleCPU__DOT__ALU_result_w
                                  : ((1U & (((vlSelf->SingleCycleCPU__DOT____Vcellout__EX_MEM__pipe_data_o[3U] 
                                              >> 0xaU) 
                                             & (vlSelf->SingleCycleCPU__DOT____Vcellout__EX_MEM__pipe_data_o[2U] 
                                                >> 5U)) 
                                            | ((IData)(vlSelf->SingleCycleCPU__DOT__m_Control__DOT__ctl) 
                                               >> 1U)))
                                      ? ((vlSelf->SingleCycleCPU__DOT____Vcellout__EX_MEM__pipe_data_o[3U] 
                                          << 0x1aU) 
                                         | (vlSelf->SingleCycleCPU__DOT____Vcellout__EX_MEM__pipe_data_o[2U] 
                                            >> 6U))
                                      : ((IData)(4U) 
                                         + vlSelf->SingleCycleCPU__DOT__pc_o_w)))),32);
        bufp->chgIData(oldp+14,(((0x40U & vlSelf->SingleCycleCPU__DOT____Vcellout__MEM_WB__pipe_data_o[2U])
                                  ? ((vlSelf->SingleCycleCPU__DOT____Vcellout__MEM_WB__pipe_data_o[1U] 
                                      << 0x1bU) | (
                                                   vlSelf->SingleCycleCPU__DOT____Vcellout__MEM_WB__pipe_data_o[0U] 
                                                   >> 5U))
                                  : ((vlSelf->SingleCycleCPU__DOT____Vcellout__MEM_WB__pipe_data_o[2U] 
                                      << 0x1bU) | (
                                                   vlSelf->SingleCycleCPU__DOT____Vcellout__MEM_WB__pipe_data_o[1U] 
                                                   >> 5U)))),32);
        bufp->chgIData(oldp+15,(((2U & (IData)(vlSelf->SingleCycleCPU__DOT__m_Control__DOT__ctl))
                                  ? ((IData)(4U) + vlSelf->SingleCycleCPU__DOT__pc_o_w)
                                  : ((0x40U & vlSelf->SingleCycleCPU__DOT____Vcellout__MEM_WB__pipe_data_o[2U])
                                      ? ((vlSelf->SingleCycleCPU__DOT____Vcellout__MEM_WB__pipe_data_o[1U] 
                                          << 0x1bU) 
                                         | (vlSelf->SingleCycleCPU__DOT____Vcellout__MEM_WB__pipe_data_o[0U] 
                                            >> 5U))
                                      : ((vlSelf->SingleCycleCPU__DOT____Vcellout__MEM_WB__pipe_data_o[2U] 
                                          << 0x1bU) 
                                         | (vlSelf->SingleCycleCPU__DOT____Vcellout__MEM_WB__pipe_data_o[1U] 
                                            >> 5U))))),32);
        bufp->chgIData(oldp+16,(((IData)(4U) + vlSelf->SingleCycleCPU__DOT__pc_o_w)),32);
        bufp->chgIData(oldp+17,((((vlSelf->SingleCycleCPU__DOT____Vcellout__ID_EX__pipe_data_o[4U] 
                                   << 0x17U) | (vlSelf->SingleCycleCPU__DOT____Vcellout__ID_EX__pipe_data_o[3U] 
                                                >> 9U)) 
                                 + ((vlSelf->SingleCycleCPU__DOT____Vcellout__ID_EX__pipe_data_o[1U] 
                                     << 0x18U) | (0xfffffeU 
                                                  & (vlSelf->SingleCycleCPU__DOT____Vcellout__ID_EX__pipe_data_o[0U] 
                                                     >> 8U))))),32);
        bufp->chgIData(oldp+18,(vlSelf->SingleCycleCPU__DOT__imm_W),32);
        bufp->chgIData(oldp+19,(((vlSelf->SingleCycleCPU__DOT____Vcellout__ID_EX__pipe_data_o[1U] 
                                  << 0x18U) | (0xfffffeU 
                                               & (vlSelf->SingleCycleCPU__DOT____Vcellout__ID_EX__pipe_data_o[0U] 
                                                  >> 8U)))),32);
        bufp->chgIData(oldp+20,(vlSelf->SingleCycleCPU__DOT__ALU_result_w),32);
        bufp->chgBit(oldp+21,((0U == vlSelf->SingleCycleCPU__DOT__ALU_result_w)));
        bufp->chgBit(oldp+22,(((vlSelf->SingleCycleCPU__DOT____Vcellout__EX_MEM__pipe_data_o[2U] 
                                >> 5U) & (vlSelf->SingleCycleCPU__DOT____Vcellout__EX_MEM__pipe_data_o[3U] 
                                          >> 0xaU))));
        bufp->chgBit(oldp+23,((1U & (((vlSelf->SingleCycleCPU__DOT____Vcellout__EX_MEM__pipe_data_o[3U] 
                                       >> 0xaU) & (
                                                   vlSelf->SingleCycleCPU__DOT____Vcellout__EX_MEM__pipe_data_o[2U] 
                                                   >> 5U)) 
                                     | ((IData)(vlSelf->SingleCycleCPU__DOT__m_Control__DOT__ctl) 
                                        >> 1U)))));
        bufp->chgCData(oldp+24,(vlSelf->SingleCycleCPU__DOT__Aluctl_W),4);
        bufp->chgIData(oldp+25,((IData)((vlSelf->SingleCycleCPU__DOT____Vcellout__IF_ID__pipe_data_o 
                                         >> 0x20U))),32);
        bufp->chgIData(oldp+26,((IData)(vlSelf->SingleCycleCPU__DOT____Vcellout__IF_ID__pipe_data_o)),32);
        bufp->chgBit(oldp+27,((1U & (vlSelf->SingleCycleCPU__DOT____Vcellout__ID_EX__pipe_data_o[4U] 
                                     >> 0x10U))));
        bufp->chgBit(oldp+28,((1U & (vlSelf->SingleCycleCPU__DOT____Vcellout__ID_EX__pipe_data_o[4U] 
                                     >> 0xfU))));
        bufp->chgBit(oldp+29,((1U & (vlSelf->SingleCycleCPU__DOT____Vcellout__ID_EX__pipe_data_o[4U] 
                                     >> 0xeU))));
        bufp->chgBit(oldp+30,((1U & (vlSelf->SingleCycleCPU__DOT____Vcellout__ID_EX__pipe_data_o[4U] 
                                     >> 0xbU))));
        bufp->chgBit(oldp+31,((1U & (vlSelf->SingleCycleCPU__DOT____Vcellout__ID_EX__pipe_data_o[4U] 
                                     >> 0xaU))));
        bufp->chgBit(oldp+32,((1U & (vlSelf->SingleCycleCPU__DOT____Vcellout__ID_EX__pipe_data_o[4U] 
                                     >> 9U))));
        bufp->chgCData(oldp+33,((3U & (vlSelf->SingleCycleCPU__DOT____Vcellout__ID_EX__pipe_data_o[4U] 
                                       >> 0xcU))),2);
        bufp->chgIData(oldp+34,(((vlSelf->SingleCycleCPU__DOT____Vcellout__ID_EX__pipe_data_o[4U] 
                                  << 0x17U) | (vlSelf->SingleCycleCPU__DOT____Vcellout__ID_EX__pipe_data_o[3U] 
                                               >> 9U))),32);
        bufp->chgIData(oldp+35,(((vlSelf->SingleCycleCPU__DOT____Vcellout__ID_EX__pipe_data_o[3U] 
                                  << 0x17U) | (vlSelf->SingleCycleCPU__DOT____Vcellout__ID_EX__pipe_data_o[2U] 
                                               >> 9U))),32);
        bufp->chgIData(oldp+36,(((vlSelf->SingleCycleCPU__DOT____Vcellout__ID_EX__pipe_data_o[2U] 
                                  << 0x17U) | (vlSelf->SingleCycleCPU__DOT____Vcellout__ID_EX__pipe_data_o[1U] 
                                               >> 9U))),32);
        bufp->chgIData(oldp+37,(((vlSelf->SingleCycleCPU__DOT____Vcellout__ID_EX__pipe_data_o[1U] 
                                  << 0x17U) | (vlSelf->SingleCycleCPU__DOT____Vcellout__ID_EX__pipe_data_o[0U] 
                                               >> 9U))),32);
        bufp->chgBit(oldp+38,((1U & (vlSelf->SingleCycleCPU__DOT____Vcellout__ID_EX__pipe_data_o[0U] 
                                     >> 8U))));
        bufp->chgCData(oldp+39,((7U & (vlSelf->SingleCycleCPU__DOT____Vcellout__ID_EX__pipe_data_o[0U] 
                                       >> 5U))),3);
        bufp->chgCData(oldp+40,((0x1fU & vlSelf->SingleCycleCPU__DOT____Vcellout__ID_EX__pipe_data_o[0U])),5);
        bufp->chgBit(oldp+41,((1U & (vlSelf->SingleCycleCPU__DOT____Vcellout__EX_MEM__pipe_data_o[3U] 
                                     >> 0xaU))));
        bufp->chgBit(oldp+42,(vlSelf->SingleCycleCPU__DOT__EX_MEM_memRead_w));
        bufp->chgBit(oldp+43,((1U & (vlSelf->SingleCycleCPU__DOT____Vcellout__EX_MEM__pipe_data_o[3U] 
                                     >> 8U))));
        bufp->chgBit(oldp+44,((1U & (vlSelf->SingleCycleCPU__DOT____Vcellout__EX_MEM__pipe_data_o[3U] 
                                     >> 7U))));
        bufp->chgBit(oldp+45,((1U & (vlSelf->SingleCycleCPU__DOT____Vcellout__EX_MEM__pipe_data_o[3U] 
                                     >> 6U))));
        bufp->chgBit(oldp+46,((1U & (vlSelf->SingleCycleCPU__DOT____Vcellout__EX_MEM__pipe_data_o[2U] 
                                     >> 5U))));
        bufp->chgIData(oldp+47,(((vlSelf->SingleCycleCPU__DOT____Vcellout__EX_MEM__pipe_data_o[3U] 
                                  << 0x1aU) | (vlSelf->SingleCycleCPU__DOT____Vcellout__EX_MEM__pipe_data_o[2U] 
                                               >> 6U))),32);
        bufp->chgIData(oldp+48,(vlSelf->SingleCycleCPU__DOT__EX_MEM_ALU_result_w),32);
        bufp->chgIData(oldp+49,(((vlSelf->SingleCycleCPU__DOT____Vcellout__EX_MEM__pipe_data_o[1U] 
                                  << 0x1bU) | (vlSelf->SingleCycleCPU__DOT____Vcellout__EX_MEM__pipe_data_o[0U] 
                                               >> 5U))),32);
        bufp->chgCData(oldp+50,((0x1fU & vlSelf->SingleCycleCPU__DOT____Vcellout__EX_MEM__pipe_data_o[0U])),5);
        bufp->chgBit(oldp+51,((1U & (vlSelf->SingleCycleCPU__DOT____Vcellout__MEM_WB__pipe_data_o[2U] 
                                     >> 6U))));
        bufp->chgBit(oldp+52,((1U & (vlSelf->SingleCycleCPU__DOT____Vcellout__MEM_WB__pipe_data_o[2U] 
                                     >> 5U))));
        bufp->chgIData(oldp+53,(((vlSelf->SingleCycleCPU__DOT____Vcellout__MEM_WB__pipe_data_o[2U] 
                                  << 0x1bU) | (vlSelf->SingleCycleCPU__DOT____Vcellout__MEM_WB__pipe_data_o[1U] 
                                               >> 5U))),32);
        bufp->chgIData(oldp+54,(((vlSelf->SingleCycleCPU__DOT____Vcellout__MEM_WB__pipe_data_o[1U] 
                                  << 0x1bU) | (vlSelf->SingleCycleCPU__DOT____Vcellout__MEM_WB__pipe_data_o[0U] 
                                               >> 5U))),32);
        bufp->chgCData(oldp+55,((0x1fU & vlSelf->SingleCycleCPU__DOT____Vcellout__MEM_WB__pipe_data_o[0U])),5);
        __Vtemp_h7cc2ded1__0[0U] = (((IData)((((QData)((IData)(vlSelf->SingleCycleCPU__DOT__ALU_result_w)) 
                                               << 0x20U) 
                                              | (QData)((IData)(
                                                                ((vlSelf->SingleCycleCPU__DOT____Vcellout__ID_EX__pipe_data_o[2U] 
                                                                  << 0x17U) 
                                                                 | (vlSelf->SingleCycleCPU__DOT____Vcellout__ID_EX__pipe_data_o[1U] 
                                                                    >> 9U)))))) 
                                     << 5U) | (0x1fU 
                                               & vlSelf->SingleCycleCPU__DOT____Vcellout__ID_EX__pipe_data_o[0U]));
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
                                        << 0x17U) | 
                                       (vlSelf->SingleCycleCPU__DOT____Vcellout__ID_EX__pipe_data_o[3U] 
                                        >> 9U)) + (
                                                   (vlSelf->SingleCycleCPU__DOT____Vcellout__ID_EX__pipe_data_o[1U] 
                                                    << 0x18U) 
                                                   | (0xfffffeU 
                                                      & (vlSelf->SingleCycleCPU__DOT____Vcellout__ID_EX__pipe_data_o[0U] 
                                                         >> 8U)))) 
                                     << 6U) | (((0U 
                                                 == vlSelf->SingleCycleCPU__DOT__ALU_result_w) 
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
                                       | ((0x40U & 
                                           (vlSelf->SingleCycleCPU__DOT____Vcellout__ID_EX__pipe_data_o[4U] 
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
        bufp->chgWData(oldp+56,(__Vtemp_h7cc2ded1__0),107);
        bufp->chgWData(oldp+60,(vlSelf->SingleCycleCPU__DOT____Vcellout__EX_MEM__pipe_data_o),107);
        bufp->chgWData(oldp+64,(vlSelf->SingleCycleCPU__DOT____Vcellout__ID_EX__pipe_data_o),145);
        bufp->chgQData(oldp+69,((((QData)((IData)(vlSelf->SingleCycleCPU__DOT__pc_o_w)) 
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
        bufp->chgQData(oldp+71,(vlSelf->SingleCycleCPU__DOT____Vcellout__IF_ID__pipe_data_o),64);
        bufp->chgWData(oldp+73,(vlSelf->SingleCycleCPU__DOT____Vcellout__MEM_WB__pipe_data_o),71);
        bufp->chgCData(oldp+76,((0x7fU & (IData)(vlSelf->SingleCycleCPU__DOT____Vcellout__IF_ID__pipe_data_o))),7);
        bufp->chgSData(oldp+77,(vlSelf->SingleCycleCPU__DOT__m_Control__DOT__ctl),10);
        bufp->chgCData(oldp+78,((0x1fU & (IData)((vlSelf->SingleCycleCPU__DOT____Vcellout__IF_ID__pipe_data_o 
                                                  >> 0xfU)))),5);
        bufp->chgCData(oldp+79,((0x1fU & (IData)((vlSelf->SingleCycleCPU__DOT____Vcellout__IF_ID__pipe_data_o 
                                                  >> 0x14U)))),5);
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[1U] 
                     | vlSelf->__Vm_traceActivity[3U]))) {
        bufp->chgIData(oldp+80,(vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs
                                [(0x1fU & (IData)((vlSelf->SingleCycleCPU__DOT____Vcellout__IF_ID__pipe_data_o 
                                                   >> 0xfU)))]),32);
        bufp->chgIData(oldp+81,(vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs
                                [(0x1fU & (IData)((vlSelf->SingleCycleCPU__DOT____Vcellout__IF_ID__pipe_data_o 
                                                   >> 0x14U)))]),32);
        __Vtemp_h64830970__0[4U] = ((0x8000U & ((IData)(vlSelf->SingleCycleCPU__DOT__m_Control__DOT__ctl) 
                                                << 9U)) 
                                    | ((0x4000U & ((IData)(vlSelf->SingleCycleCPU__DOT__m_Control__DOT__ctl) 
                                                   << 6U)) 
                                       | ((0x3000U 
                                           & ((IData)(vlSelf->SingleCycleCPU__DOT__m_Control__DOT__ctl) 
                                              << 0xaU)) 
                                          | ((0x800U 
                                              & ((IData)(vlSelf->SingleCycleCPU__DOT__m_Control__DOT__ctl) 
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
                                                  [
                                                  (0x1fU 
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
        bufp->chgWData(oldp+82,(__Vtemp_h1625ab87__0),145);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
        bufp->chgWData(oldp+87,(vlSelf->SingleCycleCPU__DOT____Vcellinp__MEM_WB__pipe_data_i),71);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[3U])) {
        bufp->chgIData(oldp+90,(vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[0]),32);
        bufp->chgIData(oldp+91,(vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[1]),32);
        bufp->chgIData(oldp+92,(vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[2]),32);
        bufp->chgIData(oldp+93,(vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[3]),32);
        bufp->chgIData(oldp+94,(vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[4]),32);
        bufp->chgIData(oldp+95,(vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[5]),32);
        bufp->chgIData(oldp+96,(vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[6]),32);
        bufp->chgIData(oldp+97,(vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[7]),32);
        bufp->chgIData(oldp+98,(vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[8]),32);
        bufp->chgIData(oldp+99,(vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[9]),32);
        bufp->chgIData(oldp+100,(vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[10]),32);
        bufp->chgIData(oldp+101,(vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[11]),32);
        bufp->chgIData(oldp+102,(vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[12]),32);
        bufp->chgIData(oldp+103,(vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[13]),32);
        bufp->chgIData(oldp+104,(vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[14]),32);
        bufp->chgIData(oldp+105,(vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[15]),32);
        bufp->chgIData(oldp+106,(vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[16]),32);
        bufp->chgIData(oldp+107,(vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[17]),32);
        bufp->chgIData(oldp+108,(vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[18]),32);
        bufp->chgIData(oldp+109,(vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[19]),32);
        bufp->chgIData(oldp+110,(vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[20]),32);
        bufp->chgIData(oldp+111,(vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[21]),32);
        bufp->chgIData(oldp+112,(vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[22]),32);
        bufp->chgIData(oldp+113,(vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[23]),32);
        bufp->chgIData(oldp+114,(vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[24]),32);
        bufp->chgIData(oldp+115,(vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[25]),32);
        bufp->chgIData(oldp+116,(vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[26]),32);
        bufp->chgIData(oldp+117,(vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[27]),32);
        bufp->chgIData(oldp+118,(vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[28]),32);
        bufp->chgIData(oldp+119,(vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[29]),32);
        bufp->chgIData(oldp+120,(vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[30]),32);
        bufp->chgIData(oldp+121,(vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[31]),32);
    }
    bufp->chgBit(oldp+122,(vlSelf->clk));
    bufp->chgBit(oldp+123,(vlSelf->start));
    bufp->chgIData(oldp+124,(vlSelf->r[0]),32);
    bufp->chgIData(oldp+125,(vlSelf->r[1]),32);
    bufp->chgIData(oldp+126,(vlSelf->r[2]),32);
    bufp->chgIData(oldp+127,(vlSelf->r[3]),32);
    bufp->chgIData(oldp+128,(vlSelf->r[4]),32);
    bufp->chgIData(oldp+129,(vlSelf->r[5]),32);
    bufp->chgIData(oldp+130,(vlSelf->r[6]),32);
    bufp->chgIData(oldp+131,(vlSelf->r[7]),32);
    bufp->chgIData(oldp+132,(vlSelf->r[8]),32);
    bufp->chgIData(oldp+133,(vlSelf->r[9]),32);
    bufp->chgIData(oldp+134,(vlSelf->r[10]),32);
    bufp->chgIData(oldp+135,(vlSelf->r[11]),32);
    bufp->chgIData(oldp+136,(vlSelf->r[12]),32);
    bufp->chgIData(oldp+137,(vlSelf->r[13]),32);
    bufp->chgIData(oldp+138,(vlSelf->r[14]),32);
    bufp->chgIData(oldp+139,(vlSelf->r[15]),32);
    bufp->chgIData(oldp+140,(vlSelf->r[16]),32);
    bufp->chgIData(oldp+141,(vlSelf->r[17]),32);
    bufp->chgIData(oldp+142,(vlSelf->r[18]),32);
    bufp->chgIData(oldp+143,(vlSelf->r[19]),32);
    bufp->chgIData(oldp+144,(vlSelf->r[20]),32);
    bufp->chgIData(oldp+145,(vlSelf->r[21]),32);
    bufp->chgIData(oldp+146,(vlSelf->r[22]),32);
    bufp->chgIData(oldp+147,(vlSelf->r[23]),32);
    bufp->chgIData(oldp+148,(vlSelf->r[24]),32);
    bufp->chgIData(oldp+149,(vlSelf->r[25]),32);
    bufp->chgIData(oldp+150,(vlSelf->r[26]),32);
    bufp->chgIData(oldp+151,(vlSelf->r[27]),32);
    bufp->chgIData(oldp+152,(vlSelf->r[28]),32);
    bufp->chgIData(oldp+153,(vlSelf->r[29]),32);
    bufp->chgIData(oldp+154,(vlSelf->r[30]),32);
    bufp->chgIData(oldp+155,(vlSelf->r[31]),32);
    bufp->chgIData(oldp+156,(vlSelf->SingleCycleCPU__DOT__readdata_w),32);
}

void VSingleCycleCPU___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSingleCycleCPU___024root__trace_cleanup\n"); );
    // Init
    VSingleCycleCPU___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VSingleCycleCPU___024root*>(voidSelf);
    VSingleCycleCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[3U] = 0U;
}
