// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VPipelineCPU.h for the primary calling header

#include "verilated.h"

#include "VPipelineCPU___024root.h"

void VPipelineCPU___024root___eval_act(VPipelineCPU___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPipelineCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPipelineCPU___024root___eval_act\n"); );
}

VL_INLINE_OPT void VPipelineCPU___024root___nba_sequent__TOP__0(VPipelineCPU___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPipelineCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPipelineCPU___024root___nba_sequent__TOP__0\n"); );
    // Body
    vlSelf->__Vdlyvset__PipelineCPU__DOT__m_DataMemory__DOT__data_memory__v0 = 0U;
    vlSelf->__Vdlyvset__PipelineCPU__DOT__m_DataMemory__DOT__data_memory__v4 = 0U;
    if (vlSelf->start) {
        if (vlSelf->PipelineCPU__DOT__MEM_memWrite) {
            vlSelf->__Vdlyvval__PipelineCPU__DOT__m_DataMemory__DOT__data_memory__v0 
                = (vlSelf->PipelineCPU__DOT__MEM_writeData 
                   >> 0x18U);
            vlSelf->__Vdlyvset__PipelineCPU__DOT__m_DataMemory__DOT__data_memory__v0 = 1U;
            vlSelf->__Vdlyvdim0__PipelineCPU__DOT__m_DataMemory__DOT__data_memory__v0 
                = (0x7fU & ((IData)(3U) + vlSelf->PipelineCPU__DOT__MEM_ALUOut));
            vlSelf->__Vdlyvval__PipelineCPU__DOT__m_DataMemory__DOT__data_memory__v1 
                = (0xffU & (vlSelf->PipelineCPU__DOT__MEM_writeData 
                            >> 0x10U));
            vlSelf->__Vdlyvdim0__PipelineCPU__DOT__m_DataMemory__DOT__data_memory__v1 
                = (0x7fU & ((IData)(2U) + vlSelf->PipelineCPU__DOT__MEM_ALUOut));
            vlSelf->__Vdlyvval__PipelineCPU__DOT__m_DataMemory__DOT__data_memory__v2 
                = (0xffU & (vlSelf->PipelineCPU__DOT__MEM_writeData 
                            >> 8U));
            vlSelf->__Vdlyvdim0__PipelineCPU__DOT__m_DataMemory__DOT__data_memory__v2 
                = (0x7fU & ((IData)(1U) + vlSelf->PipelineCPU__DOT__MEM_ALUOut));
            vlSelf->__Vdlyvval__PipelineCPU__DOT__m_DataMemory__DOT__data_memory__v3 
                = (0xffU & vlSelf->PipelineCPU__DOT__MEM_writeData);
            vlSelf->__Vdlyvdim0__PipelineCPU__DOT__m_DataMemory__DOT__data_memory__v3 
                = (0x7fU & vlSelf->PipelineCPU__DOT__MEM_ALUOut);
        }
    } else {
        vlSelf->__Vdlyvset__PipelineCPU__DOT__m_DataMemory__DOT__data_memory__v4 = 1U;
    }
}

VL_INLINE_OPT void VPipelineCPU___024root___nba_sequent__TOP__1(VPipelineCPU___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPipelineCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPipelineCPU___024root___nba_sequent__TOP__1\n"); );
    // Body
    vlSelf->__Vdlyvset__PipelineCPU__DOT__m_Register__DOT__regs__v0 = 0U;
    vlSelf->__Vdlyvset__PipelineCPU__DOT__m_Register__DOT__regs__v1 = 0U;
    if (vlSelf->start) {
        if (vlSelf->PipelineCPU__DOT__WB_regWrite) {
            vlSelf->__Vdlyvval__PipelineCPU__DOT__m_Register__DOT__regs__v0 
                = ((0U == (IData)(vlSelf->PipelineCPU__DOT__WB_writeReg))
                    ? 0U : vlSelf->PipelineCPU__DOT__WB_result);
            vlSelf->__Vdlyvset__PipelineCPU__DOT__m_Register__DOT__regs__v0 = 1U;
            vlSelf->__Vdlyvdim0__PipelineCPU__DOT__m_Register__DOT__regs__v0 
                = vlSelf->PipelineCPU__DOT__WB_writeReg;
        }
    } else {
        vlSelf->__Vdlyvset__PipelineCPU__DOT__m_Register__DOT__regs__v1 = 1U;
    }
}

extern const VlUnpacked<CData/*3:0*/, 64> VPipelineCPU__ConstPool__TABLE_hefed9143_0;

VL_INLINE_OPT void VPipelineCPU___024root___nba_sequent__TOP__2(VPipelineCPU___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPipelineCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPipelineCPU___024root___nba_sequent__TOP__2\n"); );
    // Init
    CData/*5:0*/ __Vtableidx2;
    __Vtableidx2 = 0;
    // Body
    vlSelf->PipelineCPU__DOT__EX_JumpSrc = (1U & ((~ (IData)(vlSelf->PipelineCPU__DOT__IDEX_flush)) 
                                                  & ((IData)(vlSelf->PipelineCPU__DOT__m_Control__DOT__ctrl) 
                                                     >> 0xbU)));
    vlSelf->PipelineCPU__DOT__EX_jump = (1U & ((~ (IData)(vlSelf->PipelineCPU__DOT__IDEX_flush)) 
                                               & ((IData)(vlSelf->PipelineCPU__DOT__m_Control__DOT__ctrl) 
                                                  >> 2U)));
    vlSelf->PipelineCPU__DOT__EX_branch = (1U & ((~ (IData)(vlSelf->PipelineCPU__DOT__IDEX_flush)) 
                                                 & ((IData)(vlSelf->PipelineCPU__DOT__m_Control__DOT__ctrl) 
                                                    >> 5U)));
    vlSelf->PipelineCPU__DOT__EX_ALUSrc = ((~ (IData)(vlSelf->PipelineCPU__DOT__IDEX_flush)) 
                                           & ((IData)(vlSelf->PipelineCPU__DOT__m_Control__DOT__ctrl) 
                                              >> 0xcU));
    vlSelf->PipelineCPU__DOT__WB_memtoReg = vlSelf->PipelineCPU__DOT__MEM_memtoReg;
    vlSelf->PipelineCPU__DOT__WB_PCaddfour = vlSelf->PipelineCPU__DOT__MEM_PCaddfour;
    vlSelf->PipelineCPU__DOT__WB_ALUOut = vlSelf->PipelineCPU__DOT__MEM_ALUOut;
    vlSelf->PipelineCPU__DOT__WB_readData = vlSelf->PipelineCPU__DOT__MEM_readData;
    vlSelf->PipelineCPU__DOT__MEM_writeData = vlSelf->PipelineCPU__DOT__EX_writeData;
    vlSelf->PipelineCPU__DOT__MEM_memWrite = vlSelf->PipelineCPU__DOT__EX_memWrite;
    vlSelf->PipelineCPU__DOT__WB_regWrite = vlSelf->PipelineCPU__DOT__MEM_regWrite;
    vlSelf->PipelineCPU__DOT__WB_writeReg = vlSelf->PipelineCPU__DOT__MEM_writeReg;
    if (vlSelf->PipelineCPU__DOT__IDEX_flush) {
        vlSelf->PipelineCPU__DOT__EX_branchType = 0U;
        vlSelf->PipelineCPU__DOT__EX_imm = 0U;
        vlSelf->PipelineCPU__DOT__EX_ALUOp = 0U;
        vlSelf->PipelineCPU__DOT__EX_PC = 0U;
        vlSelf->PipelineCPU__DOT__MEM_memtoReg = vlSelf->PipelineCPU__DOT__EX_memtoReg;
        vlSelf->PipelineCPU__DOT__EX_inst = 0U;
    } else {
        vlSelf->PipelineCPU__DOT__EX_branchType = (3U 
                                                   & ((IData)(vlSelf->PipelineCPU__DOT__m_Control__DOT__ctrl) 
                                                      >> 3U));
        vlSelf->PipelineCPU__DOT__EX_imm = vlSelf->PipelineCPU__DOT__ID_imm;
        vlSelf->PipelineCPU__DOT__EX_ALUOp = (3U & (IData)(vlSelf->PipelineCPU__DOT__m_Control__DOT__ctrl));
        vlSelf->PipelineCPU__DOT__EX_PC = vlSelf->PipelineCPU__DOT__ID_PC;
        vlSelf->PipelineCPU__DOT__MEM_memtoReg = vlSelf->PipelineCPU__DOT__EX_memtoReg;
        vlSelf->PipelineCPU__DOT__EX_inst = vlSelf->PipelineCPU__DOT__ID_inst;
    }
    __Vtableidx2 = ((0x20U & (vlSelf->PipelineCPU__DOT__EX_inst 
                              >> 0x19U)) | ((0x1cU 
                                             & (vlSelf->PipelineCPU__DOT__EX_inst 
                                                >> 0xaU)) 
                                            | (IData)(vlSelf->PipelineCPU__DOT__EX_ALUOp)));
    vlSelf->PipelineCPU__DOT__ALUCtl = VPipelineCPU__ConstPool__TABLE_hefed9143_0
        [__Vtableidx2];
    vlSelf->PipelineCPU__DOT__MEM_PCaddfour = vlSelf->PipelineCPU__DOT__EX_PCaddfour;
    vlSelf->PipelineCPU__DOT__WB_result = ((2U & (IData)(vlSelf->PipelineCPU__DOT__WB_memtoReg))
                                            ? vlSelf->PipelineCPU__DOT__WB_PCaddfour
                                            : ((1U 
                                                & (IData)(vlSelf->PipelineCPU__DOT__WB_memtoReg))
                                                ? vlSelf->PipelineCPU__DOT__WB_readData
                                                : vlSelf->PipelineCPU__DOT__WB_ALUOut));
    vlSelf->PipelineCPU__DOT__EX_memWrite = (1U & (
                                                   (~ (IData)(vlSelf->PipelineCPU__DOT__IDEX_flush)) 
                                                   & ((IData)(vlSelf->PipelineCPU__DOT__m_Control__DOT__ctrl) 
                                                      >> 6U)));
    vlSelf->PipelineCPU__DOT__MEM_regWrite = vlSelf->PipelineCPU__DOT__EX_regWrite;
    vlSelf->PipelineCPU__DOT__MEM_writeReg = vlSelf->PipelineCPU__DOT__EX_writeReg;
    if (vlSelf->PipelineCPU__DOT__IDEX_flush) {
        vlSelf->PipelineCPU__DOT__EX_readReg1 = 0U;
        vlSelf->PipelineCPU__DOT__EX_readReg2 = 0U;
        vlSelf->PipelineCPU__DOT__EX_readData1 = 0U;
        vlSelf->PipelineCPU__DOT__EX_readData2 = 0U;
        vlSelf->PipelineCPU__DOT__EX_memtoReg = 0U;
        vlSelf->PipelineCPU__DOT__EX_PCaddfour = 0U;
        vlSelf->PipelineCPU__DOT__EX_writeReg = 0U;
    } else {
        vlSelf->PipelineCPU__DOT__EX_readReg1 = (0x1fU 
                                                 & (vlSelf->PipelineCPU__DOT__ID_inst 
                                                    >> 0xfU));
        vlSelf->PipelineCPU__DOT__EX_readReg2 = (0x1fU 
                                                 & (vlSelf->PipelineCPU__DOT__ID_inst 
                                                    >> 0x14U));
        vlSelf->PipelineCPU__DOT__EX_readData1 = vlSelf->PipelineCPU__DOT__m_Register__DOT__regs
            [(0x1fU & (vlSelf->PipelineCPU__DOT__ID_inst 
                       >> 0xfU))];
        vlSelf->PipelineCPU__DOT__EX_readData2 = vlSelf->PipelineCPU__DOT__m_Register__DOT__regs
            [(0x1fU & (vlSelf->PipelineCPU__DOT__ID_inst 
                       >> 0x14U))];
        vlSelf->PipelineCPU__DOT__EX_memtoReg = (3U 
                                                 & ((IData)(vlSelf->PipelineCPU__DOT__m_Control__DOT__ctrl) 
                                                    >> 9U));
        vlSelf->PipelineCPU__DOT__EX_PCaddfour = vlSelf->PipelineCPU__DOT__ID_PCaddfour;
        vlSelf->PipelineCPU__DOT__EX_writeReg = (0x1fU 
                                                 & (vlSelf->PipelineCPU__DOT__ID_inst 
                                                    >> 7U));
    }
    if ((1U & (~ (IData)(vlSelf->PipelineCPU__DOT__IFID_stall)))) {
        if (vlSelf->PipelineCPU__DOT__EX_PCSrc) {
            vlSelf->PipelineCPU__DOT__ID_PC = 0U;
            vlSelf->PipelineCPU__DOT__ID_PCaddfour = 0U;
            vlSelf->PipelineCPU__DOT__ID_inst = 0U;
        } else {
            vlSelf->PipelineCPU__DOT__ID_PC = vlSelf->PipelineCPU__DOT__IF_PC;
            vlSelf->PipelineCPU__DOT__ID_PCaddfour 
                = ((IData)(4U) + vlSelf->PipelineCPU__DOT__IF_PC);
            vlSelf->PipelineCPU__DOT__ID_inst = ((0x80U 
                                                  <= vlSelf->PipelineCPU__DOT__IF_PC)
                                                  ? 0U
                                                  : 
                                                 ((vlSelf->PipelineCPU__DOT__m_InstMem__DOT__insts
                                                   [
                                                   (0x7fU 
                                                    & vlSelf->PipelineCPU__DOT__IF_PC)] 
                                                   << 0x18U) 
                                                  | ((vlSelf->PipelineCPU__DOT__m_InstMem__DOT__insts
                                                      [
                                                      (0x7fU 
                                                       & ((IData)(1U) 
                                                          + vlSelf->PipelineCPU__DOT__IF_PC))] 
                                                      << 0x10U) 
                                                     | ((vlSelf->PipelineCPU__DOT__m_InstMem__DOT__insts
                                                         [
                                                         (0x7fU 
                                                          & ((IData)(2U) 
                                                             + vlSelf->PipelineCPU__DOT__IF_PC))] 
                                                         << 8U) 
                                                        | vlSelf->PipelineCPU__DOT__m_InstMem__DOT__insts
                                                        [
                                                        (0x7fU 
                                                         & ((IData)(3U) 
                                                            + vlSelf->PipelineCPU__DOT__IF_PC))]))));
        }
    }
    vlSelf->PipelineCPU__DOT__EX_regWrite = (1U & (
                                                   (~ (IData)(vlSelf->PipelineCPU__DOT__IDEX_flush)) 
                                                   & ((IData)(vlSelf->PipelineCPU__DOT__m_Control__DOT__ctrl) 
                                                      >> 8U)));
    vlSelf->PipelineCPU__DOT__EX_forward1 = 0U;
    if ((0U != (IData)(vlSelf->PipelineCPU__DOT__EX_readReg1))) {
        if (((IData)(vlSelf->PipelineCPU__DOT__MEM_regWrite) 
             & ((IData)(vlSelf->PipelineCPU__DOT__EX_readReg1) 
                == (IData)(vlSelf->PipelineCPU__DOT__MEM_writeReg)))) {
            vlSelf->PipelineCPU__DOT__EX_forward1 = 2U;
        } else if (((IData)(vlSelf->PipelineCPU__DOT__WB_regWrite) 
                    & ((IData)(vlSelf->PipelineCPU__DOT__EX_readReg1) 
                       == (IData)(vlSelf->PipelineCPU__DOT__WB_writeReg)))) {
            vlSelf->PipelineCPU__DOT__EX_forward1 = 1U;
        }
    }
    vlSelf->PipelineCPU__DOT__EX_forward2 = 0U;
    if ((0U != (IData)(vlSelf->PipelineCPU__DOT__EX_readReg2))) {
        if (((IData)(vlSelf->PipelineCPU__DOT__MEM_regWrite) 
             & ((IData)(vlSelf->PipelineCPU__DOT__EX_readReg2) 
                == (IData)(vlSelf->PipelineCPU__DOT__MEM_writeReg)))) {
            vlSelf->PipelineCPU__DOT__EX_forward2 = 2U;
        } else if (((IData)(vlSelf->PipelineCPU__DOT__WB_regWrite) 
                    & ((IData)(vlSelf->PipelineCPU__DOT__EX_readReg2) 
                       == (IData)(vlSelf->PipelineCPU__DOT__WB_writeReg)))) {
            vlSelf->PipelineCPU__DOT__EX_forward2 = 1U;
        }
    }
    vlSelf->PipelineCPU__DOT__ID_imm = ((0x40U & vlSelf->PipelineCPU__DOT__ID_inst)
                                         ? ((0x20U 
                                             & vlSelf->PipelineCPU__DOT__ID_inst)
                                             ? ((0x10U 
                                                 & vlSelf->PipelineCPU__DOT__ID_inst)
                                                 ? 0U
                                                 : 
                                                ((8U 
                                                  & vlSelf->PipelineCPU__DOT__ID_inst)
                                                  ? 
                                                 ((4U 
                                                   & vlSelf->PipelineCPU__DOT__ID_inst)
                                                   ? 
                                                  ((2U 
                                                    & vlSelf->PipelineCPU__DOT__ID_inst)
                                                    ? 
                                                   ((1U 
                                                     & vlSelf->PipelineCPU__DOT__ID_inst)
                                                     ? 
                                                    (((- (IData)(
                                                                 (vlSelf->PipelineCPU__DOT__ID_inst 
                                                                  >> 0x1fU))) 
                                                      << 0x15U) 
                                                     | ((0x100000U 
                                                         & (vlSelf->PipelineCPU__DOT__ID_inst 
                                                            >> 0xbU)) 
                                                        | ((0xff000U 
                                                            & vlSelf->PipelineCPU__DOT__ID_inst) 
                                                           | ((0x800U 
                                                               & (vlSelf->PipelineCPU__DOT__ID_inst 
                                                                  >> 9U)) 
                                                              | (0x7feU 
                                                                 & (vlSelf->PipelineCPU__DOT__ID_inst 
                                                                    >> 0x14U))))))
                                                     : 0U)
                                                    : 0U)
                                                   : 0U)
                                                  : 
                                                 ((4U 
                                                   & vlSelf->PipelineCPU__DOT__ID_inst)
                                                   ? 
                                                  ((2U 
                                                    & vlSelf->PipelineCPU__DOT__ID_inst)
                                                    ? 
                                                   ((1U 
                                                     & vlSelf->PipelineCPU__DOT__ID_inst)
                                                     ? 
                                                    (((- (IData)(
                                                                 (vlSelf->PipelineCPU__DOT__ID_inst 
                                                                  >> 0x1fU))) 
                                                      << 0xcU) 
                                                     | (vlSelf->PipelineCPU__DOT__ID_inst 
                                                        >> 0x14U))
                                                     : 0U)
                                                    : 0U)
                                                   : 
                                                  ((2U 
                                                    & vlSelf->PipelineCPU__DOT__ID_inst)
                                                    ? 
                                                   ((1U 
                                                     & vlSelf->PipelineCPU__DOT__ID_inst)
                                                     ? 
                                                    (((- (IData)(
                                                                 (vlSelf->PipelineCPU__DOT__ID_inst 
                                                                  >> 0x1fU))) 
                                                      << 0xdU) 
                                                     | ((0x1000U 
                                                         & (vlSelf->PipelineCPU__DOT__ID_inst 
                                                            >> 0x13U)) 
                                                        | ((0x800U 
                                                            & (vlSelf->PipelineCPU__DOT__ID_inst 
                                                               << 4U)) 
                                                           | ((0x7e0U 
                                                               & (vlSelf->PipelineCPU__DOT__ID_inst 
                                                                  >> 0x14U)) 
                                                              | (0x1eU 
                                                                 & (vlSelf->PipelineCPU__DOT__ID_inst 
                                                                    >> 7U))))))
                                                     : 0U)
                                                    : 0U))))
                                             : 0U) : 
                                        ((0x20U & vlSelf->PipelineCPU__DOT__ID_inst)
                                          ? ((0x10U 
                                              & vlSelf->PipelineCPU__DOT__ID_inst)
                                              ? 0U : 
                                             ((8U & vlSelf->PipelineCPU__DOT__ID_inst)
                                               ? 0U
                                               : ((4U 
                                                   & vlSelf->PipelineCPU__DOT__ID_inst)
                                                   ? 0U
                                                   : 
                                                  ((2U 
                                                    & vlSelf->PipelineCPU__DOT__ID_inst)
                                                    ? 
                                                   ((1U 
                                                     & vlSelf->PipelineCPU__DOT__ID_inst)
                                                     ? 
                                                    (((- (IData)(
                                                                 (vlSelf->PipelineCPU__DOT__ID_inst 
                                                                  >> 0x1fU))) 
                                                      << 0xcU) 
                                                     | ((0xfe0U 
                                                         & (vlSelf->PipelineCPU__DOT__ID_inst 
                                                            >> 0x14U)) 
                                                        | (0x1fU 
                                                           & (vlSelf->PipelineCPU__DOT__ID_inst 
                                                              >> 7U))))
                                                     : 0U)
                                                    : 0U))))
                                          : ((0x10U 
                                              & vlSelf->PipelineCPU__DOT__ID_inst)
                                              ? ((8U 
                                                  & vlSelf->PipelineCPU__DOT__ID_inst)
                                                  ? 0U
                                                  : 
                                                 ((4U 
                                                   & vlSelf->PipelineCPU__DOT__ID_inst)
                                                   ? 0U
                                                   : 
                                                  ((2U 
                                                    & vlSelf->PipelineCPU__DOT__ID_inst)
                                                    ? 
                                                   ((1U 
                                                     & vlSelf->PipelineCPU__DOT__ID_inst)
                                                     ? 
                                                    (((- (IData)(
                                                                 (vlSelf->PipelineCPU__DOT__ID_inst 
                                                                  >> 0x1fU))) 
                                                      << 0xcU) 
                                                     | (vlSelf->PipelineCPU__DOT__ID_inst 
                                                        >> 0x14U))
                                                     : 0U)
                                                    : 0U)))
                                              : ((8U 
                                                  & vlSelf->PipelineCPU__DOT__ID_inst)
                                                  ? 0U
                                                  : 
                                                 ((4U 
                                                   & vlSelf->PipelineCPU__DOT__ID_inst)
                                                   ? 0U
                                                   : 
                                                  ((2U 
                                                    & vlSelf->PipelineCPU__DOT__ID_inst)
                                                    ? 
                                                   ((1U 
                                                     & vlSelf->PipelineCPU__DOT__ID_inst)
                                                     ? 
                                                    (((- (IData)(
                                                                 (vlSelf->PipelineCPU__DOT__ID_inst 
                                                                  >> 0x1fU))) 
                                                      << 0xcU) 
                                                     | (vlSelf->PipelineCPU__DOT__ID_inst 
                                                        >> 0x14U))
                                                     : 0U)
                                                    : 0U))))));
    if ((1U & (~ (IData)(vlSelf->start)))) {
        vlSelf->PipelineCPU__DOT__IF_PC = 0U;
    }
    if ((1U & (~ (IData)(vlSelf->PipelineCPU__DOT__stallPC)))) {
        vlSelf->PipelineCPU__DOT__IF_PC = vlSelf->PipelineCPU__DOT__IF_PCSrcOut;
    }
}

VL_INLINE_OPT void VPipelineCPU___024root___nba_sequent__TOP__3(VPipelineCPU___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPipelineCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPipelineCPU___024root___nba_sequent__TOP__3\n"); );
    // Body
    if (vlSelf->PipelineCPU__DOT__MEM_memRead) {
        vlSelf->PipelineCPU__DOT__MEM_readData = ((0xffffffU 
                                                   & vlSelf->PipelineCPU__DOT__MEM_readData) 
                                                  | (vlSelf->PipelineCPU__DOT__m_DataMemory__DOT__data_memory
                                                     [
                                                     (0x7fU 
                                                      & ((IData)(3U) 
                                                         + vlSelf->PipelineCPU__DOT__MEM_ALUOut))] 
                                                     << 0x18U));
        vlSelf->PipelineCPU__DOT__MEM_readData = ((0xff00ffffU 
                                                   & vlSelf->PipelineCPU__DOT__MEM_readData) 
                                                  | (vlSelf->PipelineCPU__DOT__m_DataMemory__DOT__data_memory
                                                     [
                                                     (0x7fU 
                                                      & ((IData)(2U) 
                                                         + vlSelf->PipelineCPU__DOT__MEM_ALUOut))] 
                                                     << 0x10U));
        vlSelf->PipelineCPU__DOT__MEM_readData = ((0xffff00ffU 
                                                   & vlSelf->PipelineCPU__DOT__MEM_readData) 
                                                  | (vlSelf->PipelineCPU__DOT__m_DataMemory__DOT__data_memory
                                                     [
                                                     (0x7fU 
                                                      & ((IData)(1U) 
                                                         + vlSelf->PipelineCPU__DOT__MEM_ALUOut))] 
                                                     << 8U));
        vlSelf->PipelineCPU__DOT__MEM_readData = ((0xffffff00U 
                                                   & vlSelf->PipelineCPU__DOT__MEM_readData) 
                                                  | vlSelf->PipelineCPU__DOT__m_DataMemory__DOT__data_memory
                                                  [
                                                  (0x7fU 
                                                   & vlSelf->PipelineCPU__DOT__MEM_ALUOut)]);
    }
}

VL_INLINE_OPT void VPipelineCPU___024root___nba_sequent__TOP__4(VPipelineCPU___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPipelineCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPipelineCPU___024root___nba_sequent__TOP__4\n"); );
    // Body
    if (vlSelf->__Vdlyvset__PipelineCPU__DOT__m_Register__DOT__regs__v0) {
        vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[vlSelf->__Vdlyvdim0__PipelineCPU__DOT__m_Register__DOT__regs__v0] 
            = vlSelf->__Vdlyvval__PipelineCPU__DOT__m_Register__DOT__regs__v0;
    }
    if (vlSelf->__Vdlyvset__PipelineCPU__DOT__m_Register__DOT__regs__v1) {
        vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[0U] = 0U;
        vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[1U] = 0U;
        vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[2U] = 0x80U;
        vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[3U] = 0U;
        vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[4U] = 0U;
        vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[5U] = 0U;
        vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[6U] = 0U;
        vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[7U] = 0U;
        vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[8U] = 0U;
        vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[9U] = 0U;
        vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[0xaU] = 0U;
        vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[0xbU] = 0U;
        vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[0xcU] = 0U;
        vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[0xdU] = 0U;
        vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[0xeU] = 0U;
        vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[0xfU] = 0U;
        vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[0x10U] = 0U;
        vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[0x11U] = 0U;
        vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[0x12U] = 0U;
        vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[0x13U] = 0U;
        vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[0x14U] = 0U;
        vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[0x15U] = 0U;
        vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[0x16U] = 0U;
        vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[0x17U] = 0U;
        vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[0x18U] = 0U;
        vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[0x19U] = 0U;
        vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[0x1aU] = 0U;
        vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[0x1bU] = 0U;
        vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[0x1cU] = 0U;
        vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[0x1dU] = 0U;
        vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[0x1eU] = 0U;
        vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[0x1fU] = 0U;
    }
    vlSelf->r[0U] = vlSelf->PipelineCPU__DOT__m_Register__DOT__regs
        [0U];
    vlSelf->r[1U] = vlSelf->PipelineCPU__DOT__m_Register__DOT__regs
        [1U];
    vlSelf->r[2U] = vlSelf->PipelineCPU__DOT__m_Register__DOT__regs
        [2U];
    vlSelf->r[3U] = vlSelf->PipelineCPU__DOT__m_Register__DOT__regs
        [3U];
    vlSelf->r[4U] = vlSelf->PipelineCPU__DOT__m_Register__DOT__regs
        [4U];
    vlSelf->r[5U] = vlSelf->PipelineCPU__DOT__m_Register__DOT__regs
        [5U];
    vlSelf->r[6U] = vlSelf->PipelineCPU__DOT__m_Register__DOT__regs
        [6U];
    vlSelf->r[7U] = vlSelf->PipelineCPU__DOT__m_Register__DOT__regs
        [7U];
    vlSelf->r[8U] = vlSelf->PipelineCPU__DOT__m_Register__DOT__regs
        [8U];
    vlSelf->r[9U] = vlSelf->PipelineCPU__DOT__m_Register__DOT__regs
        [9U];
    vlSelf->r[0xaU] = vlSelf->PipelineCPU__DOT__m_Register__DOT__regs
        [0xaU];
    vlSelf->r[0xbU] = vlSelf->PipelineCPU__DOT__m_Register__DOT__regs
        [0xbU];
    vlSelf->r[0xcU] = vlSelf->PipelineCPU__DOT__m_Register__DOT__regs
        [0xcU];
    vlSelf->r[0xdU] = vlSelf->PipelineCPU__DOT__m_Register__DOT__regs
        [0xdU];
    vlSelf->r[0xeU] = vlSelf->PipelineCPU__DOT__m_Register__DOT__regs
        [0xeU];
    vlSelf->r[0xfU] = vlSelf->PipelineCPU__DOT__m_Register__DOT__regs
        [0xfU];
    vlSelf->r[0x10U] = vlSelf->PipelineCPU__DOT__m_Register__DOT__regs
        [0x10U];
    vlSelf->r[0x11U] = vlSelf->PipelineCPU__DOT__m_Register__DOT__regs
        [0x11U];
    vlSelf->r[0x12U] = vlSelf->PipelineCPU__DOT__m_Register__DOT__regs
        [0x12U];
    vlSelf->r[0x13U] = vlSelf->PipelineCPU__DOT__m_Register__DOT__regs
        [0x13U];
    vlSelf->r[0x14U] = vlSelf->PipelineCPU__DOT__m_Register__DOT__regs
        [0x14U];
    vlSelf->r[0x15U] = vlSelf->PipelineCPU__DOT__m_Register__DOT__regs
        [0x15U];
    vlSelf->r[0x16U] = vlSelf->PipelineCPU__DOT__m_Register__DOT__regs
        [0x16U];
    vlSelf->r[0x17U] = vlSelf->PipelineCPU__DOT__m_Register__DOT__regs
        [0x17U];
    vlSelf->r[0x18U] = vlSelf->PipelineCPU__DOT__m_Register__DOT__regs
        [0x18U];
    vlSelf->r[0x19U] = vlSelf->PipelineCPU__DOT__m_Register__DOT__regs
        [0x19U];
    vlSelf->r[0x1aU] = vlSelf->PipelineCPU__DOT__m_Register__DOT__regs
        [0x1aU];
    vlSelf->r[0x1bU] = vlSelf->PipelineCPU__DOT__m_Register__DOT__regs
        [0x1bU];
    vlSelf->r[0x1cU] = vlSelf->PipelineCPU__DOT__m_Register__DOT__regs
        [0x1cU];
    vlSelf->r[0x1dU] = vlSelf->PipelineCPU__DOT__m_Register__DOT__regs
        [0x1dU];
    vlSelf->r[0x1eU] = vlSelf->PipelineCPU__DOT__m_Register__DOT__regs
        [0x1eU];
    vlSelf->r[0x1fU] = vlSelf->PipelineCPU__DOT__m_Register__DOT__regs
        [0x1fU];
}

VL_INLINE_OPT void VPipelineCPU___024root___nba_sequent__TOP__5(VPipelineCPU___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPipelineCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPipelineCPU___024root___nba_sequent__TOP__5\n"); );
    // Init
    IData/*31:0*/ __Vilp;
    // Body
    if (vlSelf->__Vdlyvset__PipelineCPU__DOT__m_DataMemory__DOT__data_memory__v0) {
        vlSelf->PipelineCPU__DOT__m_DataMemory__DOT__data_memory[vlSelf->__Vdlyvdim0__PipelineCPU__DOT__m_DataMemory__DOT__data_memory__v0] 
            = vlSelf->__Vdlyvval__PipelineCPU__DOT__m_DataMemory__DOT__data_memory__v0;
        vlSelf->PipelineCPU__DOT__m_DataMemory__DOT__data_memory[vlSelf->__Vdlyvdim0__PipelineCPU__DOT__m_DataMemory__DOT__data_memory__v1] 
            = vlSelf->__Vdlyvval__PipelineCPU__DOT__m_DataMemory__DOT__data_memory__v1;
        vlSelf->PipelineCPU__DOT__m_DataMemory__DOT__data_memory[vlSelf->__Vdlyvdim0__PipelineCPU__DOT__m_DataMemory__DOT__data_memory__v2] 
            = vlSelf->__Vdlyvval__PipelineCPU__DOT__m_DataMemory__DOT__data_memory__v2;
        vlSelf->PipelineCPU__DOT__m_DataMemory__DOT__data_memory[vlSelf->__Vdlyvdim0__PipelineCPU__DOT__m_DataMemory__DOT__data_memory__v3] 
            = vlSelf->__Vdlyvval__PipelineCPU__DOT__m_DataMemory__DOT__data_memory__v3;
    }
    if (vlSelf->__Vdlyvset__PipelineCPU__DOT__m_DataMemory__DOT__data_memory__v4) {
        __Vilp = 0U;
        while ((__Vilp <= 0x7fU)) {
            vlSelf->PipelineCPU__DOT__m_DataMemory__DOT__data_memory[__Vilp] = 0U;
            __Vilp = ((IData)(1U) + __Vilp);
        }
    }
}

extern const VlUnpacked<SData/*12:0*/, 1024> VPipelineCPU__ConstPool__TABLE_h220c80fb_0;

VL_INLINE_OPT void VPipelineCPU___024root___nba_sequent__TOP__6(VPipelineCPU___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPipelineCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPipelineCPU___024root___nba_sequent__TOP__6\n"); );
    // Init
    SData/*9:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    // Body
    vlSelf->PipelineCPU__DOT__MEM_memRead = vlSelf->PipelineCPU__DOT__EX_memRead;
    vlSelf->PipelineCPU__DOT__MEM_ALUOut = vlSelf->PipelineCPU__DOT__EX_ALUOut;
    vlSelf->PipelineCPU__DOT__EX_memRead = (1U & ((~ (IData)(vlSelf->PipelineCPU__DOT__IDEX_flush)) 
                                                  & ((IData)(vlSelf->PipelineCPU__DOT__m_Control__DOT__ctrl) 
                                                     >> 7U)));
    vlSelf->PipelineCPU__DOT__ALUA = ((2U & (IData)(vlSelf->PipelineCPU__DOT__EX_forward1))
                                       ? vlSelf->PipelineCPU__DOT__MEM_ALUOut
                                       : ((1U & (IData)(vlSelf->PipelineCPU__DOT__EX_forward1))
                                           ? vlSelf->PipelineCPU__DOT__WB_result
                                           : vlSelf->PipelineCPU__DOT__EX_readData1));
    vlSelf->PipelineCPU__DOT__EX_writeData = ((2U & (IData)(vlSelf->PipelineCPU__DOT__EX_forward2))
                                               ? vlSelf->PipelineCPU__DOT__MEM_ALUOut
                                               : ((1U 
                                                   & (IData)(vlSelf->PipelineCPU__DOT__EX_forward2))
                                                   ? vlSelf->PipelineCPU__DOT__WB_result
                                                   : vlSelf->PipelineCPU__DOT__EX_readData2));
    __Vtableidx1 = ((0x380U & (vlSelf->PipelineCPU__DOT__ID_inst 
                               >> 5U)) | (0x7fU & vlSelf->PipelineCPU__DOT__ID_inst));
    vlSelf->PipelineCPU__DOT__m_Control__DOT__ctrl 
        = VPipelineCPU__ConstPool__TABLE_h220c80fb_0
        [__Vtableidx1];
    vlSelf->PipelineCPU__DOT__ALUB = ((IData)(vlSelf->PipelineCPU__DOT__EX_ALUSrc)
                                       ? vlSelf->PipelineCPU__DOT__EX_imm
                                       : vlSelf->PipelineCPU__DOT__EX_writeData);
    vlSelf->PipelineCPU__DOT__EX_ALUOut = ((0U == (IData)(vlSelf->PipelineCPU__DOT__ALUCtl))
                                            ? (vlSelf->PipelineCPU__DOT__ALUA 
                                               & vlSelf->PipelineCPU__DOT__ALUB)
                                            : ((1U 
                                                == (IData)(vlSelf->PipelineCPU__DOT__ALUCtl))
                                                ? (vlSelf->PipelineCPU__DOT__ALUA 
                                                   | vlSelf->PipelineCPU__DOT__ALUB)
                                                : (
                                                   (2U 
                                                    == (IData)(vlSelf->PipelineCPU__DOT__ALUCtl))
                                                    ? 
                                                   (vlSelf->PipelineCPU__DOT__ALUA 
                                                    + vlSelf->PipelineCPU__DOT__ALUB)
                                                    : 
                                                   ((6U 
                                                     == (IData)(vlSelf->PipelineCPU__DOT__ALUCtl))
                                                     ? 
                                                    (vlSelf->PipelineCPU__DOT__ALUA 
                                                     - vlSelf->PipelineCPU__DOT__ALUB)
                                                     : 
                                                    ((4U 
                                                      == (IData)(vlSelf->PipelineCPU__DOT__ALUCtl))
                                                      ? 
                                                     (VL_LTS_III(32, vlSelf->PipelineCPU__DOT__ALUA, vlSelf->PipelineCPU__DOT__ALUB)
                                                       ? 1U
                                                       : 0U)
                                                      : 0U)))));
    vlSelf->PipelineCPU__DOT__EX_PCSrc = (((IData)(vlSelf->PipelineCPU__DOT__EX_branch) 
                                           & ((0U == (IData)(vlSelf->PipelineCPU__DOT__EX_branchType))
                                               ? (0U 
                                                  == vlSelf->PipelineCPU__DOT__EX_ALUOut)
                                               : ((1U 
                                                   == (IData)(vlSelf->PipelineCPU__DOT__EX_branchType))
                                                   ? 
                                                  (0U 
                                                   != vlSelf->PipelineCPU__DOT__EX_ALUOut)
                                                   : 
                                                  ((2U 
                                                    == (IData)(vlSelf->PipelineCPU__DOT__EX_branchType))
                                                    ? 
                                                   VL_GTS_III(32, 0U, vlSelf->PipelineCPU__DOT__EX_ALUOut)
                                                    : 
                                                   VL_LTES_III(32, 0U, vlSelf->PipelineCPU__DOT__EX_ALUOut))))) 
                                          | (IData)(vlSelf->PipelineCPU__DOT__EX_jump));
    vlSelf->PipelineCPU__DOT__m_Hazard__DOT__lwStall = 0U;
    if (((1U == (IData)(vlSelf->PipelineCPU__DOT__EX_memtoReg)) 
         & (((0x1fU & (vlSelf->PipelineCPU__DOT__ID_inst 
                       >> 0xfU)) == (IData)(vlSelf->PipelineCPU__DOT__EX_writeReg)) 
            | ((0x1fU & (vlSelf->PipelineCPU__DOT__ID_inst 
                         >> 0x14U)) == (IData)(vlSelf->PipelineCPU__DOT__EX_writeReg))))) {
        vlSelf->PipelineCPU__DOT__m_Hazard__DOT__lwStall = 1U;
    }
    vlSelf->PipelineCPU__DOT__stallPC = vlSelf->PipelineCPU__DOT__m_Hazard__DOT__lwStall;
    vlSelf->PipelineCPU__DOT__IFID_stall = vlSelf->PipelineCPU__DOT__m_Hazard__DOT__lwStall;
    vlSelf->PipelineCPU__DOT__IDEX_flush = ((IData)(vlSelf->PipelineCPU__DOT__m_Hazard__DOT__lwStall) 
                                            | (IData)(vlSelf->PipelineCPU__DOT__EX_PCSrc));
    vlSelf->PipelineCPU__DOT__IF_PCSrcOut = ((IData)(vlSelf->PipelineCPU__DOT__EX_PCSrc)
                                              ? ((IData)(vlSelf->PipelineCPU__DOT__EX_JumpSrc)
                                                  ? vlSelf->PipelineCPU__DOT__EX_ALUOut
                                                  : 
                                                 (vlSelf->PipelineCPU__DOT__EX_PC 
                                                  + vlSelf->PipelineCPU__DOT__EX_imm))
                                              : ((IData)(4U) 
                                                 + vlSelf->PipelineCPU__DOT__IF_PC));
}

void VPipelineCPU___024root___eval_nba(VPipelineCPU___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPipelineCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPipelineCPU___024root___eval_nba\n"); );
    // Body
    if (vlSelf->__VnbaTriggered.at(2U)) {
        VPipelineCPU___024root___nba_sequent__TOP__0(vlSelf);
    }
    if (vlSelf->__VnbaTriggered.at(1U)) {
        VPipelineCPU___024root___nba_sequent__TOP__1(vlSelf);
    }
    if (vlSelf->__VnbaTriggered.at(0U)) {
        VPipelineCPU___024root___nba_sequent__TOP__2(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
    if (vlSelf->__VnbaTriggered.at(3U)) {
        VPipelineCPU___024root___nba_sequent__TOP__3(vlSelf);
    }
    if (vlSelf->__VnbaTriggered.at(1U)) {
        VPipelineCPU___024root___nba_sequent__TOP__4(vlSelf);
        vlSelf->__Vm_traceActivity[2U] = 1U;
    }
    if (vlSelf->__VnbaTriggered.at(2U)) {
        VPipelineCPU___024root___nba_sequent__TOP__5(vlSelf);
    }
    if (vlSelf->__VnbaTriggered.at(0U)) {
        VPipelineCPU___024root___nba_sequent__TOP__6(vlSelf);
        vlSelf->__Vm_traceActivity[3U] = 1U;
    }
}

void VPipelineCPU___024root___eval_triggers__act(VPipelineCPU___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void VPipelineCPU___024root___dump_triggers__act(VPipelineCPU___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void VPipelineCPU___024root___dump_triggers__nba(VPipelineCPU___024root* vlSelf);
#endif  // VL_DEBUG

void VPipelineCPU___024root___eval(VPipelineCPU___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPipelineCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPipelineCPU___024root___eval\n"); );
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
            VPipelineCPU___024root___eval_triggers__act(vlSelf);
            if (vlSelf->__VactTriggered.any()) {
                vlSelf->__VactContinue = 1U;
                if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                    VPipelineCPU___024root___dump_triggers__act(vlSelf);
#endif
                    VL_FATAL_MT("PipelineCPU.v", 1, "", "Active region did not converge.");
                }
                vlSelf->__VactIterCount = ((IData)(1U) 
                                           + vlSelf->__VactIterCount);
                __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
                vlSelf->__VnbaTriggered.set(vlSelf->__VactTriggered);
                VPipelineCPU___024root___eval_act(vlSelf);
            }
        }
        if (vlSelf->__VnbaTriggered.any()) {
            __VnbaContinue = 1U;
            if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
                VPipelineCPU___024root___dump_triggers__nba(vlSelf);
#endif
                VL_FATAL_MT("PipelineCPU.v", 1, "", "NBA region did not converge.");
            }
            __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
            VPipelineCPU___024root___eval_nba(vlSelf);
        }
    }
}

#ifdef VL_DEBUG
void VPipelineCPU___024root___eval_debug_assertions(VPipelineCPU___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPipelineCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPipelineCPU___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelf->start & 0xfeU))) {
        Verilated::overWidthError("start");}
}
#endif  // VL_DEBUG
