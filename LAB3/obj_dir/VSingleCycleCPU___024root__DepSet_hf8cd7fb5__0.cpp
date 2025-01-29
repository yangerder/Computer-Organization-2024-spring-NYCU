// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VSingleCycleCPU.h for the primary calling header

#include "verilated.h"

#include "VSingleCycleCPU___024root.h"

void VSingleCycleCPU___024root___eval_act(VSingleCycleCPU___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSingleCycleCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSingleCycleCPU___024root___eval_act\n"); );
}

VL_INLINE_OPT void VSingleCycleCPU___024root___nba_sequent__TOP__0(VSingleCycleCPU___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSingleCycleCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSingleCycleCPU___024root___nba_sequent__TOP__0\n"); );
    // Body
    vlSelf->__Vdly__SingleCycleCPU__DOT__pc_o_w = vlSelf->SingleCycleCPU__DOT__pc_o_w;
    vlSelf->__Vdly__SingleCycleCPU__DOT__pc_o_w = ((IData)(vlSelf->start)
                                                    ? 
                                                   ((1U 
                                                     & (IData)(vlSelf->SingleCycleCPU__DOT__m_Control__DOT__ctl))
                                                     ? vlSelf->SingleCycleCPU__DOT__ALU_result_w
                                                     : vlSelf->SingleCycleCPU__DOT__mux_pc_source_w)
                                                    : vlSelf->SingleCycleCPU__DOT__pc_o_w);
}

VL_INLINE_OPT void VSingleCycleCPU___024root___nba_sequent__TOP__1(VSingleCycleCPU___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSingleCycleCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSingleCycleCPU___024root___nba_sequent__TOP__1\n"); );
    // Body
    vlSelf->__Vdlyvset__SingleCycleCPU__DOT__m_DataMemory__DOT__data_memory__v0 = 0U;
    vlSelf->__Vdlyvset__SingleCycleCPU__DOT__m_DataMemory__DOT__data_memory__v4 = 0U;
    if (vlSelf->start) {
        if ((0x80U & vlSelf->SingleCycleCPU__DOT____Vcellout__EX_MEM__pipe_data_o[3U])) {
            vlSelf->__Vdlyvval__SingleCycleCPU__DOT__m_DataMemory__DOT__data_memory__v0 
                = (0xffU & ((vlSelf->SingleCycleCPU__DOT____Vcellout__EX_MEM__pipe_data_o[1U] 
                             << 3U) | (vlSelf->SingleCycleCPU__DOT____Vcellout__EX_MEM__pipe_data_o[0U] 
                                       >> 0x1dU)));
            vlSelf->__Vdlyvset__SingleCycleCPU__DOT__m_DataMemory__DOT__data_memory__v0 = 1U;
            vlSelf->__Vdlyvdim0__SingleCycleCPU__DOT__m_DataMemory__DOT__data_memory__v0 
                = (0x7fU & ((IData)(3U) + vlSelf->SingleCycleCPU__DOT__EX_MEM_ALU_result_w));
            vlSelf->__Vdlyvval__SingleCycleCPU__DOT__m_DataMemory__DOT__data_memory__v1 
                = (0xffU & (vlSelf->SingleCycleCPU__DOT____Vcellout__EX_MEM__pipe_data_o[0U] 
                            >> 0x15U));
            vlSelf->__Vdlyvdim0__SingleCycleCPU__DOT__m_DataMemory__DOT__data_memory__v1 
                = (0x7fU & ((IData)(2U) + vlSelf->SingleCycleCPU__DOT__EX_MEM_ALU_result_w));
            vlSelf->__Vdlyvval__SingleCycleCPU__DOT__m_DataMemory__DOT__data_memory__v2 
                = (0xffU & (vlSelf->SingleCycleCPU__DOT____Vcellout__EX_MEM__pipe_data_o[0U] 
                            >> 0xdU));
            vlSelf->__Vdlyvdim0__SingleCycleCPU__DOT__m_DataMemory__DOT__data_memory__v2 
                = (0x7fU & ((IData)(1U) + vlSelf->SingleCycleCPU__DOT__EX_MEM_ALU_result_w));
            vlSelf->__Vdlyvval__SingleCycleCPU__DOT__m_DataMemory__DOT__data_memory__v3 
                = (0xffU & (vlSelf->SingleCycleCPU__DOT____Vcellout__EX_MEM__pipe_data_o[0U] 
                            >> 5U));
            vlSelf->__Vdlyvdim0__SingleCycleCPU__DOT__m_DataMemory__DOT__data_memory__v3 
                = (0x7fU & vlSelf->SingleCycleCPU__DOT__EX_MEM_ALU_result_w);
        }
    } else {
        vlSelf->__Vdlyvset__SingleCycleCPU__DOT__m_DataMemory__DOT__data_memory__v4 = 1U;
    }
}

VL_INLINE_OPT void VSingleCycleCPU___024root___nba_sequent__TOP__2(VSingleCycleCPU___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSingleCycleCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSingleCycleCPU___024root___nba_sequent__TOP__2\n"); );
    // Body
    vlSelf->__Vdlyvset__SingleCycleCPU__DOT__m_Register__DOT__regs__v0 = 0U;
    vlSelf->__Vdlyvset__SingleCycleCPU__DOT__m_Register__DOT__regs__v1 = 0U;
    if (vlSelf->start) {
        if ((0x20U & vlSelf->SingleCycleCPU__DOT____Vcellout__MEM_WB__pipe_data_o[2U])) {
            vlSelf->__Vdlyvval__SingleCycleCPU__DOT__m_Register__DOT__regs__v0 
                = ((0U == (0x1fU & vlSelf->SingleCycleCPU__DOT____Vcellout__MEM_WB__pipe_data_o[0U]))
                    ? 0U : ((2U & (IData)(vlSelf->SingleCycleCPU__DOT__m_Control__DOT__ctl))
                             ? ((IData)(4U) + vlSelf->SingleCycleCPU__DOT__pc_o_w)
                             : ((0x40U & vlSelf->SingleCycleCPU__DOT____Vcellout__MEM_WB__pipe_data_o[2U])
                                 ? ((vlSelf->SingleCycleCPU__DOT____Vcellout__MEM_WB__pipe_data_o[1U] 
                                     << 0x1bU) | (vlSelf->SingleCycleCPU__DOT____Vcellout__MEM_WB__pipe_data_o[0U] 
                                                  >> 5U))
                                 : ((vlSelf->SingleCycleCPU__DOT____Vcellout__MEM_WB__pipe_data_o[2U] 
                                     << 0x1bU) | (vlSelf->SingleCycleCPU__DOT____Vcellout__MEM_WB__pipe_data_o[1U] 
                                                  >> 5U)))));
            vlSelf->__Vdlyvset__SingleCycleCPU__DOT__m_Register__DOT__regs__v0 = 1U;
            vlSelf->__Vdlyvdim0__SingleCycleCPU__DOT__m_Register__DOT__regs__v0 
                = (0x1fU & vlSelf->SingleCycleCPU__DOT____Vcellout__MEM_WB__pipe_data_o[0U]);
        }
    } else {
        vlSelf->__Vdlyvset__SingleCycleCPU__DOT__m_Register__DOT__regs__v1 = 1U;
    }
}

VL_INLINE_OPT void VSingleCycleCPU___024root___nba_sequent__TOP__3(VSingleCycleCPU___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSingleCycleCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSingleCycleCPU___024root___nba_sequent__TOP__3\n"); );
    // Body
    if (vlSelf->SingleCycleCPU__DOT__EX_MEM_memRead_w) {
        vlSelf->SingleCycleCPU__DOT__readdata_w = (
                                                   (0xffffffU 
                                                    & vlSelf->SingleCycleCPU__DOT__readdata_w) 
                                                   | (vlSelf->SingleCycleCPU__DOT__m_DataMemory__DOT__data_memory
                                                      [
                                                      (0x7fU 
                                                       & ((IData)(3U) 
                                                          + vlSelf->SingleCycleCPU__DOT__EX_MEM_ALU_result_w))] 
                                                      << 0x18U));
        vlSelf->SingleCycleCPU__DOT__readdata_w = (
                                                   (0xff00ffffU 
                                                    & vlSelf->SingleCycleCPU__DOT__readdata_w) 
                                                   | (vlSelf->SingleCycleCPU__DOT__m_DataMemory__DOT__data_memory
                                                      [
                                                      (0x7fU 
                                                       & ((IData)(2U) 
                                                          + vlSelf->SingleCycleCPU__DOT__EX_MEM_ALU_result_w))] 
                                                      << 0x10U));
        vlSelf->SingleCycleCPU__DOT__readdata_w = (
                                                   (0xffff00ffU 
                                                    & vlSelf->SingleCycleCPU__DOT__readdata_w) 
                                                   | (vlSelf->SingleCycleCPU__DOT__m_DataMemory__DOT__data_memory
                                                      [
                                                      (0x7fU 
                                                       & ((IData)(1U) 
                                                          + vlSelf->SingleCycleCPU__DOT__EX_MEM_ALU_result_w))] 
                                                      << 8U));
        vlSelf->SingleCycleCPU__DOT__readdata_w = (
                                                   (0xffffff00U 
                                                    & vlSelf->SingleCycleCPU__DOT__readdata_w) 
                                                   | vlSelf->SingleCycleCPU__DOT__m_DataMemory__DOT__data_memory
                                                   [
                                                   (0x7fU 
                                                    & vlSelf->SingleCycleCPU__DOT__EX_MEM_ALU_result_w)]);
    }
}

extern const VlUnpacked<CData/*3:0*/, 64> VSingleCycleCPU__ConstPool__TABLE_h8611c692_0;
extern const VlUnpacked<SData/*9:0*/, 128> VSingleCycleCPU__ConstPool__TABLE_h96a54203_0;

VL_INLINE_OPT void VSingleCycleCPU___024root___nba_sequent__TOP__4(VSingleCycleCPU___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSingleCycleCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSingleCycleCPU___024root___nba_sequent__TOP__4\n"); );
    // Init
    CData/*6:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    CData/*5:0*/ __Vtableidx2;
    __Vtableidx2 = 0;
    VlWide<5>/*159:0*/ __Vtemp_h64830970__0;
    // Body
    if (vlSelf->start) {
        vlSelf->SingleCycleCPU__DOT____Vcellout__EX_MEM__pipe_data_o[0U] 
            = (((IData)((((QData)((IData)(vlSelf->SingleCycleCPU__DOT__ALU_result_w)) 
                          << 0x20U) | (QData)((IData)(
                                                      ((vlSelf->SingleCycleCPU__DOT____Vcellout__ID_EX__pipe_data_o[2U] 
                                                        << 0x17U) 
                                                       | (vlSelf->SingleCycleCPU__DOT____Vcellout__ID_EX__pipe_data_o[1U] 
                                                          >> 9U)))))) 
                << 5U) | (0x1fU & vlSelf->SingleCycleCPU__DOT____Vcellout__ID_EX__pipe_data_o[0U]));
        vlSelf->SingleCycleCPU__DOT____Vcellout__EX_MEM__pipe_data_o[1U] 
            = (((IData)((((QData)((IData)(vlSelf->SingleCycleCPU__DOT__ALU_result_w)) 
                          << 0x20U) | (QData)((IData)(
                                                      ((vlSelf->SingleCycleCPU__DOT____Vcellout__ID_EX__pipe_data_o[2U] 
                                                        << 0x17U) 
                                                       | (vlSelf->SingleCycleCPU__DOT____Vcellout__ID_EX__pipe_data_o[1U] 
                                                          >> 9U)))))) 
                >> 0x1bU) | ((IData)(((((QData)((IData)(vlSelf->SingleCycleCPU__DOT__ALU_result_w)) 
                                        << 0x20U) | (QData)((IData)(
                                                                    ((vlSelf->SingleCycleCPU__DOT____Vcellout__ID_EX__pipe_data_o[2U] 
                                                                      << 0x17U) 
                                                                     | (vlSelf->SingleCycleCPU__DOT____Vcellout__ID_EX__pipe_data_o[1U] 
                                                                        >> 9U))))) 
                                      >> 0x20U)) << 5U));
        vlSelf->SingleCycleCPU__DOT____Vcellout__EX_MEM__pipe_data_o[2U] 
            = (((((vlSelf->SingleCycleCPU__DOT____Vcellout__ID_EX__pipe_data_o[4U] 
                   << 0x17U) | (vlSelf->SingleCycleCPU__DOT____Vcellout__ID_EX__pipe_data_o[3U] 
                                >> 9U)) + ((vlSelf->SingleCycleCPU__DOT____Vcellout__ID_EX__pipe_data_o[1U] 
                                            << 0x18U) 
                                           | (0xfffffeU 
                                              & (vlSelf->SingleCycleCPU__DOT____Vcellout__ID_EX__pipe_data_o[0U] 
                                                 >> 8U)))) 
                << 6U) | (((0U == vlSelf->SingleCycleCPU__DOT__ALU_result_w) 
                           << 5U) | ((IData)(((((QData)((IData)(vlSelf->SingleCycleCPU__DOT__ALU_result_w)) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 ((vlSelf->SingleCycleCPU__DOT____Vcellout__ID_EX__pipe_data_o[2U] 
                                                                   << 0x17U) 
                                                                  | (vlSelf->SingleCycleCPU__DOT____Vcellout__ID_EX__pipe_data_o[1U] 
                                                                     >> 9U))))) 
                                              >> 0x20U)) 
                                     >> 0x1bU)));
        vlSelf->SingleCycleCPU__DOT____Vcellout__EX_MEM__pipe_data_o[3U] 
            = ((0x700U & (vlSelf->SingleCycleCPU__DOT____Vcellout__ID_EX__pipe_data_o[4U] 
                          >> 6U)) | ((0x80U & (vlSelf->SingleCycleCPU__DOT____Vcellout__ID_EX__pipe_data_o[4U] 
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
    } else {
        vlSelf->SingleCycleCPU__DOT____Vcellout__EX_MEM__pipe_data_o[0U] = 0U;
        vlSelf->SingleCycleCPU__DOT____Vcellout__EX_MEM__pipe_data_o[1U] = 0U;
        vlSelf->SingleCycleCPU__DOT____Vcellout__EX_MEM__pipe_data_o[2U] = 0U;
        vlSelf->SingleCycleCPU__DOT____Vcellout__EX_MEM__pipe_data_o[3U] = 0U;
    }
    vlSelf->SingleCycleCPU__DOT__EX_MEM_memRead_w = 
        (1U & (vlSelf->SingleCycleCPU__DOT____Vcellout__EX_MEM__pipe_data_o[3U] 
               >> 9U));
    vlSelf->SingleCycleCPU__DOT__EX_MEM_ALU_result_w 
        = ((vlSelf->SingleCycleCPU__DOT____Vcellout__EX_MEM__pipe_data_o[2U] 
            << 0x1bU) | (vlSelf->SingleCycleCPU__DOT____Vcellout__EX_MEM__pipe_data_o[1U] 
                         >> 5U));
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
    if (vlSelf->start) {
        vlSelf->SingleCycleCPU__DOT____Vcellout__MEM_WB__pipe_data_o[0U] 
            = vlSelf->SingleCycleCPU__DOT____Vcellinp__MEM_WB__pipe_data_i[0U];
        vlSelf->SingleCycleCPU__DOT____Vcellout__MEM_WB__pipe_data_o[1U] 
            = vlSelf->SingleCycleCPU__DOT____Vcellinp__MEM_WB__pipe_data_i[1U];
        vlSelf->SingleCycleCPU__DOT____Vcellout__MEM_WB__pipe_data_o[2U] 
            = vlSelf->SingleCycleCPU__DOT____Vcellinp__MEM_WB__pipe_data_i[2U];
        vlSelf->SingleCycleCPU__DOT____Vcellout__ID_EX__pipe_data_o[0U] 
            = ((vlSelf->SingleCycleCPU__DOT__imm_W 
                << 9U) | ((0x100U & ((IData)((vlSelf->SingleCycleCPU__DOT____Vcellout__IF_ID__pipe_data_o 
                                              >> 0x1eU)) 
                                     << 8U)) | (0xffU 
                                                & (IData)(
                                                          (vlSelf->SingleCycleCPU__DOT____Vcellout__IF_ID__pipe_data_o 
                                                           >> 7U)))));
        vlSelf->SingleCycleCPU__DOT____Vcellout__ID_EX__pipe_data_o[1U] 
            = ((vlSelf->SingleCycleCPU__DOT__imm_W 
                >> 0x17U) | (vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs
                             [(0x1fU & (IData)((vlSelf->SingleCycleCPU__DOT____Vcellout__IF_ID__pipe_data_o 
                                                >> 0x14U)))] 
                             << 9U));
        vlSelf->SingleCycleCPU__DOT____Vcellout__ID_EX__pipe_data_o[2U] 
            = ((vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs
                [(0x1fU & (IData)((vlSelf->SingleCycleCPU__DOT____Vcellout__IF_ID__pipe_data_o 
                                   >> 0x14U)))] >> 0x17U) 
               | ((IData)((((QData)((IData)((vlSelf->SingleCycleCPU__DOT____Vcellout__IF_ID__pipe_data_o 
                                             >> 0x20U))) 
                            << 0x20U) | (QData)((IData)(
                                                        vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs
                                                        [
                                                        (0x1fU 
                                                         & (IData)(
                                                                   (vlSelf->SingleCycleCPU__DOT____Vcellout__IF_ID__pipe_data_o 
                                                                    >> 0xfU)))])))) 
                  << 9U));
        vlSelf->SingleCycleCPU__DOT____Vcellout__ID_EX__pipe_data_o[3U] 
            = (((IData)((((QData)((IData)((vlSelf->SingleCycleCPU__DOT____Vcellout__IF_ID__pipe_data_o 
                                           >> 0x20U))) 
                          << 0x20U) | (QData)((IData)(
                                                      vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs
                                                      [
                                                      (0x1fU 
                                                       & (IData)(
                                                                 (vlSelf->SingleCycleCPU__DOT____Vcellout__IF_ID__pipe_data_o 
                                                                  >> 0xfU)))])))) 
                >> 0x17U) | ((IData)(((((QData)((IData)(
                                                        (vlSelf->SingleCycleCPU__DOT____Vcellout__IF_ID__pipe_data_o 
                                                         >> 0x20U))) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs
                                                                    [
                                                                    (0x1fU 
                                                                     & (IData)(
                                                                               (vlSelf->SingleCycleCPU__DOT____Vcellout__IF_ID__pipe_data_o 
                                                                                >> 0xfU)))]))) 
                                      >> 0x20U)) << 9U));
        vlSelf->SingleCycleCPU__DOT____Vcellout__ID_EX__pipe_data_o[4U] 
            = ((0x10000U & ((IData)(vlSelf->SingleCycleCPU__DOT__m_Control__DOT__ctl) 
                            << 0xcU)) | __Vtemp_h64830970__0[4U]);
        vlSelf->SingleCycleCPU__DOT____Vcellout__IF_ID__pipe_data_o 
            = (((QData)((IData)(vlSelf->SingleCycleCPU__DOT__pc_o_w)) 
                << 0x20U) | (QData)((IData)(((0x80U 
                                              <= vlSelf->SingleCycleCPU__DOT__pc_o_w)
                                              ? 0U : 
                                             ((vlSelf->SingleCycleCPU__DOT__m_InstMem__DOT__insts
                                               [(0x7fU 
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
                                                        + vlSelf->SingleCycleCPU__DOT__pc_o_w))])))))));
    } else {
        vlSelf->SingleCycleCPU__DOT____Vcellout__MEM_WB__pipe_data_o[0U] = 0U;
        vlSelf->SingleCycleCPU__DOT____Vcellout__MEM_WB__pipe_data_o[1U] = 0U;
        vlSelf->SingleCycleCPU__DOT____Vcellout__MEM_WB__pipe_data_o[2U] = 0U;
        vlSelf->SingleCycleCPU__DOT____Vcellout__ID_EX__pipe_data_o[0U] = 0U;
        vlSelf->SingleCycleCPU__DOT____Vcellout__ID_EX__pipe_data_o[1U] = 0U;
        vlSelf->SingleCycleCPU__DOT____Vcellout__ID_EX__pipe_data_o[2U] = 0U;
        vlSelf->SingleCycleCPU__DOT____Vcellout__ID_EX__pipe_data_o[3U] = 0U;
        vlSelf->SingleCycleCPU__DOT____Vcellout__ID_EX__pipe_data_o[4U] = 0U;
        vlSelf->SingleCycleCPU__DOT____Vcellout__IF_ID__pipe_data_o = 0ULL;
    }
    vlSelf->SingleCycleCPU__DOT__mux_alusrc_w = ((0x400U 
                                                  & vlSelf->SingleCycleCPU__DOT____Vcellout__ID_EX__pipe_data_o[4U])
                                                  ? 
                                                 ((vlSelf->SingleCycleCPU__DOT____Vcellout__ID_EX__pipe_data_o[1U] 
                                                   << 0x17U) 
                                                  | (vlSelf->SingleCycleCPU__DOT____Vcellout__ID_EX__pipe_data_o[0U] 
                                                     >> 9U))
                                                  : 
                                                 ((vlSelf->SingleCycleCPU__DOT____Vcellout__ID_EX__pipe_data_o[2U] 
                                                   << 0x17U) 
                                                  | (vlSelf->SingleCycleCPU__DOT____Vcellout__ID_EX__pipe_data_o[1U] 
                                                     >> 9U)));
    __Vtableidx2 = ((0x20U & (vlSelf->SingleCycleCPU__DOT____Vcellout__ID_EX__pipe_data_o[0U] 
                              >> 3U)) | ((0x1cU & (
                                                   vlSelf->SingleCycleCPU__DOT____Vcellout__ID_EX__pipe_data_o[0U] 
                                                   >> 3U)) 
                                         | (3U & (vlSelf->SingleCycleCPU__DOT____Vcellout__ID_EX__pipe_data_o[4U] 
                                                  >> 0xcU))));
    vlSelf->SingleCycleCPU__DOT__Aluctl_W = VSingleCycleCPU__ConstPool__TABLE_h8611c692_0
        [__Vtableidx2];
    vlSelf->SingleCycleCPU__DOT__ALU_result_w = ((0U 
                                                  == (IData)(vlSelf->SingleCycleCPU__DOT__Aluctl_W))
                                                  ? 
                                                 (((vlSelf->SingleCycleCPU__DOT____Vcellout__ID_EX__pipe_data_o[3U] 
                                                    << 0x17U) 
                                                   | (vlSelf->SingleCycleCPU__DOT____Vcellout__ID_EX__pipe_data_o[2U] 
                                                      >> 9U)) 
                                                  & vlSelf->SingleCycleCPU__DOT__mux_alusrc_w)
                                                  : 
                                                 ((2U 
                                                   == (IData)(vlSelf->SingleCycleCPU__DOT__Aluctl_W))
                                                   ? 
                                                  (((vlSelf->SingleCycleCPU__DOT____Vcellout__ID_EX__pipe_data_o[3U] 
                                                     << 0x17U) 
                                                    | (vlSelf->SingleCycleCPU__DOT____Vcellout__ID_EX__pipe_data_o[2U] 
                                                       >> 9U)) 
                                                   + vlSelf->SingleCycleCPU__DOT__mux_alusrc_w)
                                                   : 
                                                  ((6U 
                                                    == (IData)(vlSelf->SingleCycleCPU__DOT__Aluctl_W))
                                                    ? 
                                                   (((vlSelf->SingleCycleCPU__DOT____Vcellout__ID_EX__pipe_data_o[3U] 
                                                      << 0x17U) 
                                                     | (vlSelf->SingleCycleCPU__DOT____Vcellout__ID_EX__pipe_data_o[2U] 
                                                        >> 9U)) 
                                                    - vlSelf->SingleCycleCPU__DOT__mux_alusrc_w)
                                                    : 
                                                   ((1U 
                                                     == (IData)(vlSelf->SingleCycleCPU__DOT__Aluctl_W))
                                                     ? 
                                                    (((vlSelf->SingleCycleCPU__DOT____Vcellout__ID_EX__pipe_data_o[3U] 
                                                       << 0x17U) 
                                                      | (vlSelf->SingleCycleCPU__DOT____Vcellout__ID_EX__pipe_data_o[2U] 
                                                         >> 9U)) 
                                                     | vlSelf->SingleCycleCPU__DOT__mux_alusrc_w)
                                                     : 
                                                    ((0xfU 
                                                      == (IData)(vlSelf->SingleCycleCPU__DOT__Aluctl_W))
                                                      ? 
                                                     ((((vlSelf->SingleCycleCPU__DOT____Vcellout__ID_EX__pipe_data_o[3U] 
                                                         << 0x17U) 
                                                        | (vlSelf->SingleCycleCPU__DOT____Vcellout__ID_EX__pipe_data_o[2U] 
                                                           >> 9U)) 
                                                       == vlSelf->SingleCycleCPU__DOT__mux_alusrc_w)
                                                       ? 1U
                                                       : 0U)
                                                      : 
                                                     ((0xeU 
                                                       == (IData)(vlSelf->SingleCycleCPU__DOT__Aluctl_W))
                                                       ? 
                                                      (VL_GTES_III(32, 
                                                                   ((vlSelf->SingleCycleCPU__DOT____Vcellout__ID_EX__pipe_data_o[3U] 
                                                                     << 0x17U) 
                                                                    | (vlSelf->SingleCycleCPU__DOT____Vcellout__ID_EX__pipe_data_o[2U] 
                                                                       >> 9U)), vlSelf->SingleCycleCPU__DOT__mux_alusrc_w)
                                                        ? 1U
                                                        : 0U)
                                                       : 
                                                      ((4U 
                                                        == (IData)(vlSelf->SingleCycleCPU__DOT__Aluctl_W))
                                                        ? 
                                                       (VL_LTS_III(32, 
                                                                   ((vlSelf->SingleCycleCPU__DOT____Vcellout__ID_EX__pipe_data_o[3U] 
                                                                     << 0x17U) 
                                                                    | (vlSelf->SingleCycleCPU__DOT____Vcellout__ID_EX__pipe_data_o[2U] 
                                                                       >> 9U)), vlSelf->SingleCycleCPU__DOT__mux_alusrc_w)
                                                         ? 1U
                                                         : 0U)
                                                        : 0U)))))));
    vlSelf->SingleCycleCPU__DOT__pc_o_w = vlSelf->__Vdly__SingleCycleCPU__DOT__pc_o_w;
    vlSelf->SingleCycleCPU__DOT__imm_W = ((1U & (IData)(
                                                        (vlSelf->SingleCycleCPU__DOT____Vcellout__IF_ID__pipe_data_o 
                                                         >> 6U)))
                                           ? ((1U & (IData)(
                                                            (vlSelf->SingleCycleCPU__DOT____Vcellout__IF_ID__pipe_data_o 
                                                             >> 5U)))
                                               ? ((1U 
                                                   & (IData)(
                                                             (vlSelf->SingleCycleCPU__DOT____Vcellout__IF_ID__pipe_data_o 
                                                              >> 4U)))
                                                   ? 0U
                                                   : 
                                                  ((1U 
                                                    & (IData)(
                                                              (vlSelf->SingleCycleCPU__DOT____Vcellout__IF_ID__pipe_data_o 
                                                               >> 3U)))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(
                                                               (vlSelf->SingleCycleCPU__DOT____Vcellout__IF_ID__pipe_data_o 
                                                                >> 2U)))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(
                                                                (vlSelf->SingleCycleCPU__DOT____Vcellout__IF_ID__pipe_data_o 
                                                                 >> 1U)))
                                                      ? 
                                                     ((1U 
                                                       & (IData)(vlSelf->SingleCycleCPU__DOT____Vcellout__IF_ID__pipe_data_o))
                                                       ? 
                                                      (((- (IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->SingleCycleCPU__DOT____Vcellout__IF_ID__pipe_data_o 
                                                                               >> 0x1fU))))) 
                                                        << 0x14U) 
                                                       | ((0x80000U 
                                                           & ((IData)(
                                                                      (vlSelf->SingleCycleCPU__DOT____Vcellout__IF_ID__pipe_data_o 
                                                                       >> 0x1fU)) 
                                                              << 0x13U)) 
                                                          | ((0x7f800U 
                                                              & ((IData)(
                                                                         (vlSelf->SingleCycleCPU__DOT____Vcellout__IF_ID__pipe_data_o 
                                                                          >> 0xcU)) 
                                                                 << 0xbU)) 
                                                             | ((0x400U 
                                                                 & ((IData)(
                                                                            (vlSelf->SingleCycleCPU__DOT____Vcellout__IF_ID__pipe_data_o 
                                                                             >> 0x14U)) 
                                                                    << 0xaU)) 
                                                                | (0x3ffU 
                                                                   & (IData)(
                                                                             (vlSelf->SingleCycleCPU__DOT____Vcellout__IF_ID__pipe_data_o 
                                                                              >> 0x15U)))))))
                                                       : 0U)
                                                      : 0U)
                                                     : 0U)
                                                    : 
                                                   ((1U 
                                                     & (IData)(
                                                               (vlSelf->SingleCycleCPU__DOT____Vcellout__IF_ID__pipe_data_o 
                                                                >> 2U)))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(
                                                                (vlSelf->SingleCycleCPU__DOT____Vcellout__IF_ID__pipe_data_o 
                                                                 >> 1U)))
                                                      ? 
                                                     ((1U 
                                                       & (IData)(vlSelf->SingleCycleCPU__DOT____Vcellout__IF_ID__pipe_data_o))
                                                       ? 
                                                      (((- (IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->SingleCycleCPU__DOT____Vcellout__IF_ID__pipe_data_o 
                                                                               >> 0x1fU))))) 
                                                        << 0xcU) 
                                                       | (0xfffU 
                                                          & (IData)(
                                                                    (vlSelf->SingleCycleCPU__DOT____Vcellout__IF_ID__pipe_data_o 
                                                                     >> 0x14U))))
                                                       : 0U)
                                                      : 0U)
                                                     : 
                                                    ((1U 
                                                      & (IData)(
                                                                (vlSelf->SingleCycleCPU__DOT____Vcellout__IF_ID__pipe_data_o 
                                                                 >> 1U)))
                                                      ? 
                                                     ((1U 
                                                       & (IData)(vlSelf->SingleCycleCPU__DOT____Vcellout__IF_ID__pipe_data_o))
                                                       ? 
                                                      (((- (IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->SingleCycleCPU__DOT____Vcellout__IF_ID__pipe_data_o 
                                                                               >> 0x1fU))))) 
                                                        << 0xcU) 
                                                       | ((0x800U 
                                                           & ((IData)(
                                                                      (vlSelf->SingleCycleCPU__DOT____Vcellout__IF_ID__pipe_data_o 
                                                                       >> 0x1fU)) 
                                                              << 0xbU)) 
                                                          | ((0x400U 
                                                              & ((IData)(
                                                                         (vlSelf->SingleCycleCPU__DOT____Vcellout__IF_ID__pipe_data_o 
                                                                          >> 7U)) 
                                                                 << 0xaU)) 
                                                             | ((0x3f0U 
                                                                 & ((IData)(
                                                                            (vlSelf->SingleCycleCPU__DOT____Vcellout__IF_ID__pipe_data_o 
                                                                             >> 0x19U)) 
                                                                    << 4U)) 
                                                                | (0xfU 
                                                                   & (IData)(
                                                                             (vlSelf->SingleCycleCPU__DOT____Vcellout__IF_ID__pipe_data_o 
                                                                              >> 8U)))))))
                                                       : 0U)
                                                      : 0U))))
                                               : 0U)
                                           : ((1U & (IData)(
                                                            (vlSelf->SingleCycleCPU__DOT____Vcellout__IF_ID__pipe_data_o 
                                                             >> 5U)))
                                               ? ((1U 
                                                   & (IData)(
                                                             (vlSelf->SingleCycleCPU__DOT____Vcellout__IF_ID__pipe_data_o 
                                                              >> 4U)))
                                                   ? 0U
                                                   : 
                                                  ((1U 
                                                    & (IData)(
                                                              (vlSelf->SingleCycleCPU__DOT____Vcellout__IF_ID__pipe_data_o 
                                                               >> 3U)))
                                                    ? 0U
                                                    : 
                                                   ((1U 
                                                     & (IData)(
                                                               (vlSelf->SingleCycleCPU__DOT____Vcellout__IF_ID__pipe_data_o 
                                                                >> 2U)))
                                                     ? 0U
                                                     : 
                                                    ((1U 
                                                      & (IData)(
                                                                (vlSelf->SingleCycleCPU__DOT____Vcellout__IF_ID__pipe_data_o 
                                                                 >> 1U)))
                                                      ? 
                                                     ((1U 
                                                       & (IData)(vlSelf->SingleCycleCPU__DOT____Vcellout__IF_ID__pipe_data_o))
                                                       ? 
                                                      (((- (IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->SingleCycleCPU__DOT____Vcellout__IF_ID__pipe_data_o 
                                                                               >> 0x1fU))))) 
                                                        << 0xcU) 
                                                       | ((0xfe0U 
                                                           & ((IData)(
                                                                      (vlSelf->SingleCycleCPU__DOT____Vcellout__IF_ID__pipe_data_o 
                                                                       >> 0x19U)) 
                                                              << 5U)) 
                                                          | (0x1fU 
                                                             & (IData)(
                                                                       (vlSelf->SingleCycleCPU__DOT____Vcellout__IF_ID__pipe_data_o 
                                                                        >> 7U)))))
                                                       : 0U)
                                                      : 0U))))
                                               : ((1U 
                                                   & (IData)(
                                                             (vlSelf->SingleCycleCPU__DOT____Vcellout__IF_ID__pipe_data_o 
                                                              >> 4U)))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(
                                                              (vlSelf->SingleCycleCPU__DOT____Vcellout__IF_ID__pipe_data_o 
                                                               >> 3U)))
                                                    ? 0U
                                                    : 
                                                   ((1U 
                                                     & (IData)(
                                                               (vlSelf->SingleCycleCPU__DOT____Vcellout__IF_ID__pipe_data_o 
                                                                >> 2U)))
                                                     ? 0U
                                                     : 
                                                    ((1U 
                                                      & (IData)(
                                                                (vlSelf->SingleCycleCPU__DOT____Vcellout__IF_ID__pipe_data_o 
                                                                 >> 1U)))
                                                      ? 
                                                     ((1U 
                                                       & (IData)(vlSelf->SingleCycleCPU__DOT____Vcellout__IF_ID__pipe_data_o))
                                                       ? 
                                                      (((- (IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->SingleCycleCPU__DOT____Vcellout__IF_ID__pipe_data_o 
                                                                               >> 0x1fU))))) 
                                                        << 0xcU) 
                                                       | (0xfffU 
                                                          & (IData)(
                                                                    (vlSelf->SingleCycleCPU__DOT____Vcellout__IF_ID__pipe_data_o 
                                                                     >> 0x14U))))
                                                       : 0U)
                                                      : 0U)))
                                                   : 
                                                  ((1U 
                                                    & (IData)(
                                                              (vlSelf->SingleCycleCPU__DOT____Vcellout__IF_ID__pipe_data_o 
                                                               >> 3U)))
                                                    ? 0U
                                                    : 
                                                   ((1U 
                                                     & (IData)(
                                                               (vlSelf->SingleCycleCPU__DOT____Vcellout__IF_ID__pipe_data_o 
                                                                >> 2U)))
                                                     ? 0U
                                                     : 
                                                    ((1U 
                                                      & (IData)(
                                                                (vlSelf->SingleCycleCPU__DOT____Vcellout__IF_ID__pipe_data_o 
                                                                 >> 1U)))
                                                      ? 
                                                     ((1U 
                                                       & (IData)(vlSelf->SingleCycleCPU__DOT____Vcellout__IF_ID__pipe_data_o))
                                                       ? 
                                                      (((- (IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->SingleCycleCPU__DOT____Vcellout__IF_ID__pipe_data_o 
                                                                               >> 0x1fU))))) 
                                                        << 0xcU) 
                                                       | (0xfffU 
                                                          & (IData)(
                                                                    (vlSelf->SingleCycleCPU__DOT____Vcellout__IF_ID__pipe_data_o 
                                                                     >> 0x14U))))
                                                       : 0U)
                                                      : 0U))))));
    __Vtableidx1 = (0x7fU & (IData)(vlSelf->SingleCycleCPU__DOT____Vcellout__IF_ID__pipe_data_o));
    vlSelf->SingleCycleCPU__DOT__m_Control__DOT__ctl 
        = VSingleCycleCPU__ConstPool__TABLE_h96a54203_0
        [__Vtableidx1];
    vlSelf->SingleCycleCPU__DOT__mux_pc_source_w = 
        ((1U & (((vlSelf->SingleCycleCPU__DOT____Vcellout__EX_MEM__pipe_data_o[3U] 
                  >> 0xaU) & (vlSelf->SingleCycleCPU__DOT____Vcellout__EX_MEM__pipe_data_o[2U] 
                              >> 5U)) | ((IData)(vlSelf->SingleCycleCPU__DOT__m_Control__DOT__ctl) 
                                         >> 1U))) ? 
         ((vlSelf->SingleCycleCPU__DOT____Vcellout__EX_MEM__pipe_data_o[3U] 
           << 0x1aU) | (vlSelf->SingleCycleCPU__DOT____Vcellout__EX_MEM__pipe_data_o[2U] 
                        >> 6U)) : ((IData)(4U) + vlSelf->SingleCycleCPU__DOT__pc_o_w));
}

VL_INLINE_OPT void VSingleCycleCPU___024root___nba_sequent__TOP__5(VSingleCycleCPU___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSingleCycleCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSingleCycleCPU___024root___nba_sequent__TOP__5\n"); );
    // Init
    IData/*31:0*/ __Vilp;
    // Body
    if (vlSelf->__Vdlyvset__SingleCycleCPU__DOT__m_DataMemory__DOT__data_memory__v0) {
        vlSelf->SingleCycleCPU__DOT__m_DataMemory__DOT__data_memory[vlSelf->__Vdlyvdim0__SingleCycleCPU__DOT__m_DataMemory__DOT__data_memory__v0] 
            = vlSelf->__Vdlyvval__SingleCycleCPU__DOT__m_DataMemory__DOT__data_memory__v0;
        vlSelf->SingleCycleCPU__DOT__m_DataMemory__DOT__data_memory[vlSelf->__Vdlyvdim0__SingleCycleCPU__DOT__m_DataMemory__DOT__data_memory__v1] 
            = vlSelf->__Vdlyvval__SingleCycleCPU__DOT__m_DataMemory__DOT__data_memory__v1;
        vlSelf->SingleCycleCPU__DOT__m_DataMemory__DOT__data_memory[vlSelf->__Vdlyvdim0__SingleCycleCPU__DOT__m_DataMemory__DOT__data_memory__v2] 
            = vlSelf->__Vdlyvval__SingleCycleCPU__DOT__m_DataMemory__DOT__data_memory__v2;
        vlSelf->SingleCycleCPU__DOT__m_DataMemory__DOT__data_memory[vlSelf->__Vdlyvdim0__SingleCycleCPU__DOT__m_DataMemory__DOT__data_memory__v3] 
            = vlSelf->__Vdlyvval__SingleCycleCPU__DOT__m_DataMemory__DOT__data_memory__v3;
    }
    if (vlSelf->__Vdlyvset__SingleCycleCPU__DOT__m_DataMemory__DOT__data_memory__v4) {
        __Vilp = 0U;
        while ((__Vilp <= 0x7fU)) {
            vlSelf->SingleCycleCPU__DOT__m_DataMemory__DOT__data_memory[__Vilp] = 0U;
            __Vilp = ((IData)(1U) + __Vilp);
        }
    }
}

VL_INLINE_OPT void VSingleCycleCPU___024root___nba_comb__TOP__0(VSingleCycleCPU___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSingleCycleCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSingleCycleCPU___024root___nba_comb__TOP__0\n"); );
    // Body
    vlSelf->SingleCycleCPU__DOT____Vcellinp__MEM_WB__pipe_data_i[0U] 
        = (((IData)((((QData)((IData)(vlSelf->SingleCycleCPU__DOT__EX_MEM_ALU_result_w)) 
                      << 0x20U) | (QData)((IData)(vlSelf->SingleCycleCPU__DOT__readdata_w)))) 
            << 5U) | (0x1fU & vlSelf->SingleCycleCPU__DOT____Vcellout__EX_MEM__pipe_data_o[0U]));
    vlSelf->SingleCycleCPU__DOT____Vcellinp__MEM_WB__pipe_data_i[1U] 
        = (((IData)((((QData)((IData)(vlSelf->SingleCycleCPU__DOT__EX_MEM_ALU_result_w)) 
                      << 0x20U) | (QData)((IData)(vlSelf->SingleCycleCPU__DOT__readdata_w)))) 
            >> 0x1bU) | ((IData)(((((QData)((IData)(vlSelf->SingleCycleCPU__DOT__EX_MEM_ALU_result_w)) 
                                    << 0x20U) | (QData)((IData)(vlSelf->SingleCycleCPU__DOT__readdata_w))) 
                                  >> 0x20U)) << 5U));
    vlSelf->SingleCycleCPU__DOT____Vcellinp__MEM_WB__pipe_data_i[2U] 
        = ((0x40U & (vlSelf->SingleCycleCPU__DOT____Vcellout__EX_MEM__pipe_data_o[3U] 
                     >> 2U)) | ((0x20U & (vlSelf->SingleCycleCPU__DOT____Vcellout__EX_MEM__pipe_data_o[3U] 
                                          >> 1U)) | 
                                ((IData)(((((QData)((IData)(vlSelf->SingleCycleCPU__DOT__EX_MEM_ALU_result_w)) 
                                            << 0x20U) 
                                           | (QData)((IData)(vlSelf->SingleCycleCPU__DOT__readdata_w))) 
                                          >> 0x20U)) 
                                 >> 0x1bU)));
}

VL_INLINE_OPT void VSingleCycleCPU___024root___nba_sequent__TOP__6(VSingleCycleCPU___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSingleCycleCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSingleCycleCPU___024root___nba_sequent__TOP__6\n"); );
    // Body
    if (vlSelf->__Vdlyvset__SingleCycleCPU__DOT__m_Register__DOT__regs__v0) {
        vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[vlSelf->__Vdlyvdim0__SingleCycleCPU__DOT__m_Register__DOT__regs__v0] 
            = vlSelf->__Vdlyvval__SingleCycleCPU__DOT__m_Register__DOT__regs__v0;
    }
    if (vlSelf->__Vdlyvset__SingleCycleCPU__DOT__m_Register__DOT__regs__v1) {
        vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[0U] = 0U;
        vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[1U] = 0U;
        vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[2U] = 0x80U;
        vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[3U] = 0U;
        vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[4U] = 0U;
        vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[5U] = 0U;
        vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[6U] = 0U;
        vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[7U] = 0U;
        vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[8U] = 0U;
        vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[9U] = 0U;
        vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[0xaU] = 0U;
        vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[0xbU] = 0U;
        vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[0xcU] = 0U;
        vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[0xdU] = 0U;
        vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[0xeU] = 0U;
        vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[0xfU] = 0U;
        vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[0x10U] = 0U;
        vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[0x11U] = 0U;
        vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[0x12U] = 0U;
        vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[0x13U] = 0U;
        vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[0x14U] = 0U;
        vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[0x15U] = 0U;
        vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[0x16U] = 0U;
        vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[0x17U] = 0U;
        vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[0x18U] = 0U;
        vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[0x19U] = 0U;
        vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[0x1aU] = 0U;
        vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[0x1bU] = 0U;
        vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[0x1cU] = 0U;
        vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[0x1dU] = 0U;
        vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[0x1eU] = 0U;
        vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[0x1fU] = 0U;
    }
    vlSelf->r[0U] = vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs
        [0U];
    vlSelf->r[1U] = vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs
        [1U];
    vlSelf->r[2U] = vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs
        [2U];
    vlSelf->r[3U] = vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs
        [3U];
    vlSelf->r[4U] = vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs
        [4U];
    vlSelf->r[5U] = vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs
        [5U];
    vlSelf->r[6U] = vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs
        [6U];
    vlSelf->r[7U] = vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs
        [7U];
    vlSelf->r[8U] = vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs
        [8U];
    vlSelf->r[9U] = vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs
        [9U];
    vlSelf->r[0xaU] = vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs
        [0xaU];
    vlSelf->r[0xbU] = vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs
        [0xbU];
    vlSelf->r[0xcU] = vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs
        [0xcU];
    vlSelf->r[0xdU] = vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs
        [0xdU];
    vlSelf->r[0xeU] = vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs
        [0xeU];
    vlSelf->r[0xfU] = vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs
        [0xfU];
    vlSelf->r[0x10U] = vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs
        [0x10U];
    vlSelf->r[0x11U] = vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs
        [0x11U];
    vlSelf->r[0x12U] = vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs
        [0x12U];
    vlSelf->r[0x13U] = vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs
        [0x13U];
    vlSelf->r[0x14U] = vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs
        [0x14U];
    vlSelf->r[0x15U] = vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs
        [0x15U];
    vlSelf->r[0x16U] = vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs
        [0x16U];
    vlSelf->r[0x17U] = vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs
        [0x17U];
    vlSelf->r[0x18U] = vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs
        [0x18U];
    vlSelf->r[0x19U] = vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs
        [0x19U];
    vlSelf->r[0x1aU] = vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs
        [0x1aU];
    vlSelf->r[0x1bU] = vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs
        [0x1bU];
    vlSelf->r[0x1cU] = vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs
        [0x1cU];
    vlSelf->r[0x1dU] = vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs
        [0x1dU];
    vlSelf->r[0x1eU] = vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs
        [0x1eU];
    vlSelf->r[0x1fU] = vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs
        [0x1fU];
}

void VSingleCycleCPU___024root___eval_nba(VSingleCycleCPU___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSingleCycleCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSingleCycleCPU___024root___eval_nba\n"); );
    // Body
    if (vlSelf->__VnbaTriggered.at(0U)) {
        VSingleCycleCPU___024root___nba_sequent__TOP__0(vlSelf);
    }
    if (vlSelf->__VnbaTriggered.at(2U)) {
        VSingleCycleCPU___024root___nba_sequent__TOP__1(vlSelf);
    }
    if (vlSelf->__VnbaTriggered.at(1U)) {
        VSingleCycleCPU___024root___nba_sequent__TOP__2(vlSelf);
    }
    if (vlSelf->__VnbaTriggered.at(3U)) {
        VSingleCycleCPU___024root___nba_sequent__TOP__3(vlSelf);
    }
    if (vlSelf->__VnbaTriggered.at(0U)) {
        VSingleCycleCPU___024root___nba_sequent__TOP__4(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
    if (vlSelf->__VnbaTriggered.at(2U)) {
        VSingleCycleCPU___024root___nba_sequent__TOP__5(vlSelf);
    }
    if ((vlSelf->__VnbaTriggered.at(0U) | vlSelf->__VnbaTriggered.at(3U))) {
        VSingleCycleCPU___024root___nba_comb__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[2U] = 1U;
    }
    if (vlSelf->__VnbaTriggered.at(1U)) {
        VSingleCycleCPU___024root___nba_sequent__TOP__6(vlSelf);
        vlSelf->__Vm_traceActivity[3U] = 1U;
    }
}

void VSingleCycleCPU___024root___eval_triggers__act(VSingleCycleCPU___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void VSingleCycleCPU___024root___dump_triggers__act(VSingleCycleCPU___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void VSingleCycleCPU___024root___dump_triggers__nba(VSingleCycleCPU___024root* vlSelf);
#endif  // VL_DEBUG

void VSingleCycleCPU___024root___eval(VSingleCycleCPU___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSingleCycleCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSingleCycleCPU___024root___eval\n"); );
    // Init
    VlTriggerVec<4> __VpreTriggered;
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        __VnbaContinue = 0U;
        vlSelf->__VnbaTriggered.clear();
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            vlSelf->__VactContinue = 0U;
            VSingleCycleCPU___024root___eval_triggers__act(vlSelf);
            if (vlSelf->__VactTriggered.any()) {
                vlSelf->__VactContinue = 1U;
                if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                    VSingleCycleCPU___024root___dump_triggers__act(vlSelf);
#endif
                    VL_FATAL_MT("SingleCycleCPU.v", 1, "", "Active region did not converge.");
                }
                vlSelf->__VactIterCount = ((IData)(1U) 
                                           + vlSelf->__VactIterCount);
                __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
                vlSelf->__VnbaTriggered.set(vlSelf->__VactTriggered);
                VSingleCycleCPU___024root___eval_act(vlSelf);
            }
        }
        if (vlSelf->__VnbaTriggered.any()) {
            __VnbaContinue = 1U;
            if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
                VSingleCycleCPU___024root___dump_triggers__nba(vlSelf);
#endif
                VL_FATAL_MT("SingleCycleCPU.v", 1, "", "NBA region did not converge.");
            }
            __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
            VSingleCycleCPU___024root___eval_nba(vlSelf);
        }
    }
}

#ifdef VL_DEBUG
void VSingleCycleCPU___024root___eval_debug_assertions(VSingleCycleCPU___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSingleCycleCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSingleCycleCPU___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelf->start & 0xfeU))) {
        Verilated::overWidthError("start");}
}
#endif  // VL_DEBUG
