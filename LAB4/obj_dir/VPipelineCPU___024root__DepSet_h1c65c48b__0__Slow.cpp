// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VPipelineCPU.h for the primary calling header

#include "verilated.h"

#include "VPipelineCPU___024root.h"

VL_ATTR_COLD void VPipelineCPU___024root___eval_static(VPipelineCPU___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPipelineCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPipelineCPU___024root___eval_static\n"); );
}

VL_ATTR_COLD void VPipelineCPU___024root___eval_initial__TOP(VPipelineCPU___024root* vlSelf);

VL_ATTR_COLD void VPipelineCPU___024root___eval_initial(VPipelineCPU___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPipelineCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPipelineCPU___024root___eval_initial\n"); );
    // Body
    VPipelineCPU___024root___eval_initial__TOP(vlSelf);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
    vlSelf->__Vtrigrprev__TOP__clk = vlSelf->clk;
    vlSelf->__Vtrigrprev__TOP__start = vlSelf->start;
    vlSelf->__Vtrigrprev__TOP__PipelineCPU__DOT__MEM_ALUOut 
        = vlSelf->PipelineCPU__DOT__MEM_ALUOut;
    vlSelf->__Vtrigrprev__TOP__PipelineCPU__DOT__MEM_memRead 
        = vlSelf->PipelineCPU__DOT__MEM_memRead;
}

VL_ATTR_COLD void VPipelineCPU___024root___eval_initial__TOP(VPipelineCPU___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPipelineCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPipelineCPU___024root___eval_initial__TOP\n"); );
    // Init
    VlWide<6>/*191:0*/ __Vtemp_hd0a1b870__0;
    // Body
    vlSelf->PipelineCPU__DOT__m_InstMem__DOT__insts[0U] = 0U;
    vlSelf->PipelineCPU__DOT__m_InstMem__DOT__insts[1U] = 0U;
    vlSelf->PipelineCPU__DOT__m_InstMem__DOT__insts[2U] = 0U;
    vlSelf->PipelineCPU__DOT__m_InstMem__DOT__insts[3U] = 0U;
    vlSelf->PipelineCPU__DOT__m_InstMem__DOT__insts[4U] = 0U;
    vlSelf->PipelineCPU__DOT__m_InstMem__DOT__insts[5U] = 0U;
    vlSelf->PipelineCPU__DOT__m_InstMem__DOT__insts[6U] = 0U;
    vlSelf->PipelineCPU__DOT__m_InstMem__DOT__insts[7U] = 0U;
    vlSelf->PipelineCPU__DOT__m_InstMem__DOT__insts[8U] = 0U;
    vlSelf->PipelineCPU__DOT__m_InstMem__DOT__insts[9U] = 0U;
    vlSelf->PipelineCPU__DOT__m_InstMem__DOT__insts[0xaU] = 0U;
    vlSelf->PipelineCPU__DOT__m_InstMem__DOT__insts[0xbU] = 0U;
    vlSelf->PipelineCPU__DOT__m_InstMem__DOT__insts[0xcU] = 0U;
    vlSelf->PipelineCPU__DOT__m_InstMem__DOT__insts[0xdU] = 0U;
    vlSelf->PipelineCPU__DOT__m_InstMem__DOT__insts[0xeU] = 0U;
    vlSelf->PipelineCPU__DOT__m_InstMem__DOT__insts[0xfU] = 0U;
    vlSelf->PipelineCPU__DOT__m_InstMem__DOT__insts[0x10U] = 0U;
    vlSelf->PipelineCPU__DOT__m_InstMem__DOT__insts[0x11U] = 0U;
    vlSelf->PipelineCPU__DOT__m_InstMem__DOT__insts[0x12U] = 0U;
    vlSelf->PipelineCPU__DOT__m_InstMem__DOT__insts[0x13U] = 0U;
    vlSelf->PipelineCPU__DOT__m_InstMem__DOT__insts[0x14U] = 0U;
    vlSelf->PipelineCPU__DOT__m_InstMem__DOT__insts[0x15U] = 0U;
    vlSelf->PipelineCPU__DOT__m_InstMem__DOT__insts[0x16U] = 0U;
    vlSelf->PipelineCPU__DOT__m_InstMem__DOT__insts[0x17U] = 0U;
    vlSelf->PipelineCPU__DOT__m_InstMem__DOT__insts[0x18U] = 0U;
    vlSelf->PipelineCPU__DOT__m_InstMem__DOT__insts[0x19U] = 0U;
    vlSelf->PipelineCPU__DOT__m_InstMem__DOT__insts[0x1aU] = 0U;
    vlSelf->PipelineCPU__DOT__m_InstMem__DOT__insts[0x1bU] = 0U;
    vlSelf->PipelineCPU__DOT__m_InstMem__DOT__insts[0x1cU] = 0U;
    vlSelf->PipelineCPU__DOT__m_InstMem__DOT__insts[0x1dU] = 0U;
    vlSelf->PipelineCPU__DOT__m_InstMem__DOT__insts[0x1eU] = 0U;
    vlSelf->PipelineCPU__DOT__m_InstMem__DOT__insts[0x1fU] = 0U;
    __Vtemp_hd0a1b870__0[0U] = 0x2e747874U;
    __Vtemp_hd0a1b870__0[1U] = 0x494f4e53U;
    __Vtemp_hd0a1b870__0[2U] = 0x52554354U;
    __Vtemp_hd0a1b870__0[3U] = 0x494e5354U;
    __Vtemp_hd0a1b870__0[4U] = 0x4553545fU;
    __Vtemp_hd0a1b870__0[5U] = 0x54U;
    VL_READMEM_N(false, 8, 128, 0, VL_CVT_PACK_STR_NW(6, __Vtemp_hd0a1b870__0)
                 ,  &(vlSelf->PipelineCPU__DOT__m_InstMem__DOT__insts)
                 , 0, ~0ULL);
}

VL_ATTR_COLD void VPipelineCPU___024root___eval_final(VPipelineCPU___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPipelineCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPipelineCPU___024root___eval_final\n"); );
}

VL_ATTR_COLD void VPipelineCPU___024root___eval_triggers__stl(VPipelineCPU___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void VPipelineCPU___024root___dump_triggers__stl(VPipelineCPU___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD void VPipelineCPU___024root___eval_stl(VPipelineCPU___024root* vlSelf);

VL_ATTR_COLD void VPipelineCPU___024root___eval_settle(VPipelineCPU___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPipelineCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPipelineCPU___024root___eval_settle\n"); );
    // Init
    CData/*0:0*/ __VstlContinue;
    // Body
    vlSelf->__VstlIterCount = 0U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        __VstlContinue = 0U;
        VPipelineCPU___024root___eval_triggers__stl(vlSelf);
        if (vlSelf->__VstlTriggered.any()) {
            __VstlContinue = 1U;
            if (VL_UNLIKELY((0x64U < vlSelf->__VstlIterCount))) {
#ifdef VL_DEBUG
                VPipelineCPU___024root___dump_triggers__stl(vlSelf);
#endif
                VL_FATAL_MT("PipelineCPU.v", 1, "", "Settle region did not converge.");
            }
            vlSelf->__VstlIterCount = ((IData)(1U) 
                                       + vlSelf->__VstlIterCount);
            VPipelineCPU___024root___eval_stl(vlSelf);
        }
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VPipelineCPU___024root___dump_triggers__stl(VPipelineCPU___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPipelineCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPipelineCPU___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VstlTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if (vlSelf->__VstlTriggered.at(0U)) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

extern const VlUnpacked<SData/*12:0*/, 1024> VPipelineCPU__ConstPool__TABLE_h220c80fb_0;
extern const VlUnpacked<CData/*3:0*/, 64> VPipelineCPU__ConstPool__TABLE_hefed9143_0;

VL_ATTR_COLD void VPipelineCPU___024root___stl_sequent__TOP__0(VPipelineCPU___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPipelineCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPipelineCPU___024root___stl_sequent__TOP__0\n"); );
    // Init
    SData/*9:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    CData/*5:0*/ __Vtableidx2;
    __Vtableidx2 = 0;
    // Body
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
    __Vtableidx1 = ((0x380U & (vlSelf->PipelineCPU__DOT__ID_inst 
                               >> 5U)) | (0x7fU & vlSelf->PipelineCPU__DOT__ID_inst));
    vlSelf->PipelineCPU__DOT__m_Control__DOT__ctrl 
        = VPipelineCPU__ConstPool__TABLE_h220c80fb_0
        [__Vtableidx1];
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
    __Vtableidx2 = ((0x20U & (vlSelf->PipelineCPU__DOT__EX_inst 
                              >> 0x19U)) | ((0x1cU 
                                             & (vlSelf->PipelineCPU__DOT__EX_inst 
                                                >> 0xaU)) 
                                            | (IData)(vlSelf->PipelineCPU__DOT__EX_ALUOp)));
    vlSelf->PipelineCPU__DOT__ALUCtl = VPipelineCPU__ConstPool__TABLE_hefed9143_0
        [__Vtableidx2];
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
    vlSelf->PipelineCPU__DOT__WB_result = ((2U & (IData)(vlSelf->PipelineCPU__DOT__WB_memtoReg))
                                            ? vlSelf->PipelineCPU__DOT__WB_PCaddfour
                                            : ((1U 
                                                & (IData)(vlSelf->PipelineCPU__DOT__WB_memtoReg))
                                                ? vlSelf->PipelineCPU__DOT__WB_readData
                                                : vlSelf->PipelineCPU__DOT__WB_ALUOut));
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
    vlSelf->PipelineCPU__DOT__IF_PCSrcOut = ((IData)(vlSelf->PipelineCPU__DOT__EX_PCSrc)
                                              ? ((IData)(vlSelf->PipelineCPU__DOT__EX_JumpSrc)
                                                  ? vlSelf->PipelineCPU__DOT__EX_ALUOut
                                                  : 
                                                 (vlSelf->PipelineCPU__DOT__EX_PC 
                                                  + vlSelf->PipelineCPU__DOT__EX_imm))
                                              : ((IData)(4U) 
                                                 + vlSelf->PipelineCPU__DOT__IF_PC));
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
}

VL_ATTR_COLD void VPipelineCPU___024root___eval_stl(VPipelineCPU___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPipelineCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPipelineCPU___024root___eval_stl\n"); );
    // Body
    if (vlSelf->__VstlTriggered.at(0U)) {
        VPipelineCPU___024root___stl_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSelf->__Vm_traceActivity[2U] = 1U;
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->__Vm_traceActivity[0U] = 1U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VPipelineCPU___024root___dump_triggers__act(VPipelineCPU___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPipelineCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPipelineCPU___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if (vlSelf->__VactTriggered.at(0U)) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge clk)\n");
    }
    if (vlSelf->__VactTriggered.at(1U)) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @(negedge clk or negedge start)\n");
    }
    if (vlSelf->__VactTriggered.at(2U)) {
        VL_DBG_MSGF("         'act' region trigger index 2 is active: @(posedge clk or negedge start)\n");
    }
    if (vlSelf->__VactTriggered.at(3U)) {
        VL_DBG_MSGF("         'act' region trigger index 3 is active: @([changed] PipelineCPU.MEM_ALUOut or [changed] PipelineCPU.MEM_memRead)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void VPipelineCPU___024root___dump_triggers__nba(VPipelineCPU___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPipelineCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPipelineCPU___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VnbaTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if (vlSelf->__VnbaTriggered.at(0U)) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge clk)\n");
    }
    if (vlSelf->__VnbaTriggered.at(1U)) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @(negedge clk or negedge start)\n");
    }
    if (vlSelf->__VnbaTriggered.at(2U)) {
        VL_DBG_MSGF("         'nba' region trigger index 2 is active: @(posedge clk or negedge start)\n");
    }
    if (vlSelf->__VnbaTriggered.at(3U)) {
        VL_DBG_MSGF("         'nba' region trigger index 3 is active: @([changed] PipelineCPU.MEM_ALUOut or [changed] PipelineCPU.MEM_memRead)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void VPipelineCPU___024root___ctor_var_reset(VPipelineCPU___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPipelineCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPipelineCPU___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->start = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->r[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->PipelineCPU__DOT__IF_PCSrcOut = VL_RAND_RESET_I(32);
    vlSelf->PipelineCPU__DOT__IF_PC = VL_RAND_RESET_I(32);
    vlSelf->PipelineCPU__DOT__ID_inst = VL_RAND_RESET_I(32);
    vlSelf->PipelineCPU__DOT__ID_PC = VL_RAND_RESET_I(32);
    vlSelf->PipelineCPU__DOT__ID_PCaddfour = VL_RAND_RESET_I(32);
    vlSelf->PipelineCPU__DOT__ID_imm = VL_RAND_RESET_I(32);
    vlSelf->PipelineCPU__DOT__EX_readData1 = VL_RAND_RESET_I(32);
    vlSelf->PipelineCPU__DOT__EX_readData2 = VL_RAND_RESET_I(32);
    vlSelf->PipelineCPU__DOT__EX_PC = VL_RAND_RESET_I(32);
    vlSelf->PipelineCPU__DOT__EX_PCaddfour = VL_RAND_RESET_I(32);
    vlSelf->PipelineCPU__DOT__EX_imm = VL_RAND_RESET_I(32);
    vlSelf->PipelineCPU__DOT__EX_inst = VL_RAND_RESET_I(32);
    vlSelf->PipelineCPU__DOT__ALUA = VL_RAND_RESET_I(32);
    vlSelf->PipelineCPU__DOT__ALUB = VL_RAND_RESET_I(32);
    vlSelf->PipelineCPU__DOT__EX_ALUOut = VL_RAND_RESET_I(32);
    vlSelf->PipelineCPU__DOT__EX_writeData = VL_RAND_RESET_I(32);
    vlSelf->PipelineCPU__DOT__EX_readReg1 = VL_RAND_RESET_I(5);
    vlSelf->PipelineCPU__DOT__EX_readReg2 = VL_RAND_RESET_I(5);
    vlSelf->PipelineCPU__DOT__EX_writeReg = VL_RAND_RESET_I(5);
    vlSelf->PipelineCPU__DOT__ALUCtl = VL_RAND_RESET_I(4);
    vlSelf->PipelineCPU__DOT__EX_branchType = VL_RAND_RESET_I(2);
    vlSelf->PipelineCPU__DOT__EX_memtoReg = VL_RAND_RESET_I(2);
    vlSelf->PipelineCPU__DOT__EX_ALUOp = VL_RAND_RESET_I(2);
    vlSelf->PipelineCPU__DOT__EX_branch = VL_RAND_RESET_I(1);
    vlSelf->PipelineCPU__DOT__EX_memRead = VL_RAND_RESET_I(1);
    vlSelf->PipelineCPU__DOT__EX_memWrite = VL_RAND_RESET_I(1);
    vlSelf->PipelineCPU__DOT__EX_ALUSrc = VL_RAND_RESET_I(1);
    vlSelf->PipelineCPU__DOT__EX_regWrite = VL_RAND_RESET_I(1);
    vlSelf->PipelineCPU__DOT__EX_jump = VL_RAND_RESET_I(1);
    vlSelf->PipelineCPU__DOT__EX_JumpSrc = VL_RAND_RESET_I(1);
    vlSelf->PipelineCPU__DOT__EX_PCSrc = VL_RAND_RESET_I(1);
    vlSelf->PipelineCPU__DOT__MEM_ALUOut = VL_RAND_RESET_I(32);
    vlSelf->PipelineCPU__DOT__MEM_writeData = VL_RAND_RESET_I(32);
    vlSelf->PipelineCPU__DOT__MEM_PCaddfour = VL_RAND_RESET_I(32);
    vlSelf->PipelineCPU__DOT__MEM_readData = VL_RAND_RESET_I(32);
    vlSelf->PipelineCPU__DOT__MEM_writeReg = VL_RAND_RESET_I(5);
    vlSelf->PipelineCPU__DOT__MEM_memtoReg = VL_RAND_RESET_I(2);
    vlSelf->PipelineCPU__DOT__MEM_memRead = VL_RAND_RESET_I(1);
    vlSelf->PipelineCPU__DOT__MEM_memWrite = VL_RAND_RESET_I(1);
    vlSelf->PipelineCPU__DOT__MEM_regWrite = VL_RAND_RESET_I(1);
    vlSelf->PipelineCPU__DOT__WB_ALUOut = VL_RAND_RESET_I(32);
    vlSelf->PipelineCPU__DOT__WB_PCaddfour = VL_RAND_RESET_I(32);
    vlSelf->PipelineCPU__DOT__WB_readData = VL_RAND_RESET_I(32);
    vlSelf->PipelineCPU__DOT__WB_result = VL_RAND_RESET_I(32);
    vlSelf->PipelineCPU__DOT__WB_writeReg = VL_RAND_RESET_I(5);
    vlSelf->PipelineCPU__DOT__WB_memtoReg = VL_RAND_RESET_I(2);
    vlSelf->PipelineCPU__DOT__WB_regWrite = VL_RAND_RESET_I(1);
    vlSelf->PipelineCPU__DOT__EX_forward1 = VL_RAND_RESET_I(2);
    vlSelf->PipelineCPU__DOT__EX_forward2 = VL_RAND_RESET_I(2);
    vlSelf->PipelineCPU__DOT__stallPC = VL_RAND_RESET_I(1);
    vlSelf->PipelineCPU__DOT__IFID_stall = VL_RAND_RESET_I(1);
    vlSelf->PipelineCPU__DOT__IDEX_flush = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 128; ++__Vi0) {
        vlSelf->PipelineCPU__DOT__m_InstMem__DOT__insts[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->PipelineCPU__DOT__m_Hazard__DOT__lwStall = VL_RAND_RESET_I(1);
    vlSelf->PipelineCPU__DOT__m_Control__DOT__ctrl = VL_RAND_RESET_I(13);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0 = 0; __Vi0 < 128; ++__Vi0) {
        vlSelf->PipelineCPU__DOT__m_DataMemory__DOT__data_memory[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->__Vdlyvdim0__PipelineCPU__DOT__m_Register__DOT__regs__v0 = 0;
    vlSelf->__Vdlyvval__PipelineCPU__DOT__m_Register__DOT__regs__v0 = VL_RAND_RESET_I(32);
    vlSelf->__Vdlyvset__PipelineCPU__DOT__m_Register__DOT__regs__v0 = 0;
    vlSelf->__Vdlyvset__PipelineCPU__DOT__m_Register__DOT__regs__v1 = 0;
    vlSelf->__Vdlyvdim0__PipelineCPU__DOT__m_DataMemory__DOT__data_memory__v0 = 0;
    vlSelf->__Vdlyvval__PipelineCPU__DOT__m_DataMemory__DOT__data_memory__v0 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvset__PipelineCPU__DOT__m_DataMemory__DOT__data_memory__v0 = 0;
    vlSelf->__Vdlyvdim0__PipelineCPU__DOT__m_DataMemory__DOT__data_memory__v1 = 0;
    vlSelf->__Vdlyvval__PipelineCPU__DOT__m_DataMemory__DOT__data_memory__v1 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvdim0__PipelineCPU__DOT__m_DataMemory__DOT__data_memory__v2 = 0;
    vlSelf->__Vdlyvval__PipelineCPU__DOT__m_DataMemory__DOT__data_memory__v2 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvdim0__PipelineCPU__DOT__m_DataMemory__DOT__data_memory__v3 = 0;
    vlSelf->__Vdlyvval__PipelineCPU__DOT__m_DataMemory__DOT__data_memory__v3 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvset__PipelineCPU__DOT__m_DataMemory__DOT__data_memory__v4 = 0;
    vlSelf->__Vtrigrprev__TOP__clk = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigrprev__TOP__start = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigrprev__TOP__PipelineCPU__DOT__MEM_ALUOut = VL_RAND_RESET_I(32);
    vlSelf->__Vtrigrprev__TOP__PipelineCPU__DOT__MEM_memRead = VL_RAND_RESET_I(1);
    vlSelf->__VactDidInit = 0;
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
