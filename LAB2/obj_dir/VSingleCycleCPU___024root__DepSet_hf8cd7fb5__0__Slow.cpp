// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VSingleCycleCPU.h for the primary calling header

#include "verilated.h"

#include "VSingleCycleCPU___024root.h"

VL_ATTR_COLD void VSingleCycleCPU___024root___eval_static(VSingleCycleCPU___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSingleCycleCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSingleCycleCPU___024root___eval_static\n"); );
}

VL_ATTR_COLD void VSingleCycleCPU___024root___eval_initial__TOP(VSingleCycleCPU___024root* vlSelf);

VL_ATTR_COLD void VSingleCycleCPU___024root___eval_initial(VSingleCycleCPU___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSingleCycleCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSingleCycleCPU___024root___eval_initial\n"); );
    // Body
    VSingleCycleCPU___024root___eval_initial__TOP(vlSelf);
    vlSelf->__Vtrigrprev__TOP__clk = vlSelf->clk;
    vlSelf->__Vtrigrprev__TOP__start = vlSelf->start;
    vlSelf->__Vtrigrprev__TOP__SingleCycleCPU__DOT__ALU_result_w 
        = vlSelf->SingleCycleCPU__DOT__ALU_result_w;
    vlSelf->__Vtrigrprev__TOP__SingleCycleCPU__DOT__memRead_w 
        = vlSelf->SingleCycleCPU__DOT__memRead_w;
}

VL_ATTR_COLD void VSingleCycleCPU___024root___eval_initial__TOP(VSingleCycleCPU___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSingleCycleCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSingleCycleCPU___024root___eval_initial__TOP\n"); );
    // Init
    VlWide<6>/*191:0*/ __Vtemp_hd0a1b870__0;
    // Body
    vlSelf->SingleCycleCPU__DOT__m_InstMem__DOT__insts[0U] = 0U;
    vlSelf->SingleCycleCPU__DOT__m_InstMem__DOT__insts[1U] = 0U;
    vlSelf->SingleCycleCPU__DOT__m_InstMem__DOT__insts[2U] = 0U;
    vlSelf->SingleCycleCPU__DOT__m_InstMem__DOT__insts[3U] = 0U;
    vlSelf->SingleCycleCPU__DOT__m_InstMem__DOT__insts[4U] = 0U;
    vlSelf->SingleCycleCPU__DOT__m_InstMem__DOT__insts[5U] = 0U;
    vlSelf->SingleCycleCPU__DOT__m_InstMem__DOT__insts[6U] = 0U;
    vlSelf->SingleCycleCPU__DOT__m_InstMem__DOT__insts[7U] = 0U;
    vlSelf->SingleCycleCPU__DOT__m_InstMem__DOT__insts[8U] = 0U;
    vlSelf->SingleCycleCPU__DOT__m_InstMem__DOT__insts[9U] = 0U;
    vlSelf->SingleCycleCPU__DOT__m_InstMem__DOT__insts[0xaU] = 0U;
    vlSelf->SingleCycleCPU__DOT__m_InstMem__DOT__insts[0xbU] = 0U;
    vlSelf->SingleCycleCPU__DOT__m_InstMem__DOT__insts[0xcU] = 0U;
    vlSelf->SingleCycleCPU__DOT__m_InstMem__DOT__insts[0xdU] = 0U;
    vlSelf->SingleCycleCPU__DOT__m_InstMem__DOT__insts[0xeU] = 0U;
    vlSelf->SingleCycleCPU__DOT__m_InstMem__DOT__insts[0xfU] = 0U;
    vlSelf->SingleCycleCPU__DOT__m_InstMem__DOT__insts[0x10U] = 0U;
    vlSelf->SingleCycleCPU__DOT__m_InstMem__DOT__insts[0x11U] = 0U;
    vlSelf->SingleCycleCPU__DOT__m_InstMem__DOT__insts[0x12U] = 0U;
    vlSelf->SingleCycleCPU__DOT__m_InstMem__DOT__insts[0x13U] = 0U;
    vlSelf->SingleCycleCPU__DOT__m_InstMem__DOT__insts[0x14U] = 0U;
    vlSelf->SingleCycleCPU__DOT__m_InstMem__DOT__insts[0x15U] = 0U;
    vlSelf->SingleCycleCPU__DOT__m_InstMem__DOT__insts[0x16U] = 0U;
    vlSelf->SingleCycleCPU__DOT__m_InstMem__DOT__insts[0x17U] = 0U;
    vlSelf->SingleCycleCPU__DOT__m_InstMem__DOT__insts[0x18U] = 0U;
    vlSelf->SingleCycleCPU__DOT__m_InstMem__DOT__insts[0x19U] = 0U;
    vlSelf->SingleCycleCPU__DOT__m_InstMem__DOT__insts[0x1aU] = 0U;
    vlSelf->SingleCycleCPU__DOT__m_InstMem__DOT__insts[0x1bU] = 0U;
    vlSelf->SingleCycleCPU__DOT__m_InstMem__DOT__insts[0x1cU] = 0U;
    vlSelf->SingleCycleCPU__DOT__m_InstMem__DOT__insts[0x1dU] = 0U;
    vlSelf->SingleCycleCPU__DOT__m_InstMem__DOT__insts[0x1eU] = 0U;
    vlSelf->SingleCycleCPU__DOT__m_InstMem__DOT__insts[0x1fU] = 0U;
    __Vtemp_hd0a1b870__0[0U] = 0x2e747874U;
    __Vtemp_hd0a1b870__0[1U] = 0x494f4e53U;
    __Vtemp_hd0a1b870__0[2U] = 0x52554354U;
    __Vtemp_hd0a1b870__0[3U] = 0x494e5354U;
    __Vtemp_hd0a1b870__0[4U] = 0x4553545fU;
    __Vtemp_hd0a1b870__0[5U] = 0x54U;
    VL_READMEM_N(false, 8, 128, 0, VL_CVT_PACK_STR_NW(6, __Vtemp_hd0a1b870__0)
                 ,  &(vlSelf->SingleCycleCPU__DOT__m_InstMem__DOT__insts)
                 , 0, ~0ULL);
}

VL_ATTR_COLD void VSingleCycleCPU___024root___eval_final(VSingleCycleCPU___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSingleCycleCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSingleCycleCPU___024root___eval_final\n"); );
}

VL_ATTR_COLD void VSingleCycleCPU___024root___eval_triggers__stl(VSingleCycleCPU___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void VSingleCycleCPU___024root___dump_triggers__stl(VSingleCycleCPU___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD void VSingleCycleCPU___024root___eval_stl(VSingleCycleCPU___024root* vlSelf);

VL_ATTR_COLD void VSingleCycleCPU___024root___eval_settle(VSingleCycleCPU___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSingleCycleCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSingleCycleCPU___024root___eval_settle\n"); );
    // Init
    CData/*0:0*/ __VstlContinue;
    // Body
    vlSelf->__VstlIterCount = 0U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        __VstlContinue = 0U;
        VSingleCycleCPU___024root___eval_triggers__stl(vlSelf);
        if (vlSelf->__VstlTriggered.any()) {
            __VstlContinue = 1U;
            if (VL_UNLIKELY((0x64U < vlSelf->__VstlIterCount))) {
#ifdef VL_DEBUG
                VSingleCycleCPU___024root___dump_triggers__stl(vlSelf);
#endif
                VL_FATAL_MT("SingleCycleCPU.v", 1, "", "Settle region did not converge.");
            }
            vlSelf->__VstlIterCount = ((IData)(1U) 
                                       + vlSelf->__VstlIterCount);
            VSingleCycleCPU___024root___eval_stl(vlSelf);
        }
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VSingleCycleCPU___024root___dump_triggers__stl(VSingleCycleCPU___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSingleCycleCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSingleCycleCPU___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VstlTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if (vlSelf->__VstlTriggered.at(0U)) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

extern const VlUnpacked<SData/*9:0*/, 128> VSingleCycleCPU__ConstPool__TABLE_h96a54203_0;
extern const VlUnpacked<CData/*3:0*/, 64> VSingleCycleCPU__ConstPool__TABLE_h8611c692_0;

VL_ATTR_COLD void VSingleCycleCPU___024root___stl_sequent__TOP__0(VSingleCycleCPU___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSingleCycleCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSingleCycleCPU___024root___stl_sequent__TOP__0\n"); );
    // Init
    CData/*7:0*/ __VdfgTmp_hd4f690f4__0;
    __VdfgTmp_hd4f690f4__0 = 0;
    SData/*15:0*/ __VdfgTmp_he3085f40__0;
    __VdfgTmp_he3085f40__0 = 0;
    CData/*6:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    CData/*5:0*/ __Vtableidx2;
    __Vtableidx2 = 0;
    // Body
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
    vlSelf->__VdfgTmp_hd41cf205__0 = vlSelf->SingleCycleCPU__DOT__m_InstMem__DOT__insts
        [(0x7fU & vlSelf->SingleCycleCPU__DOT__pc_o_w)];
    vlSelf->__VdfgTmp_hd4cce57f__0 = vlSelf->SingleCycleCPU__DOT__m_InstMem__DOT__insts
        [(0x7fU & ((IData)(2U) + vlSelf->SingleCycleCPU__DOT__pc_o_w))];
    __VdfgTmp_hd4f690f4__0 = vlSelf->SingleCycleCPU__DOT__m_InstMem__DOT__insts
        [(0x7fU & ((IData)(3U) + vlSelf->SingleCycleCPU__DOT__pc_o_w))];
    __VdfgTmp_he3085f40__0 = (((IData)(vlSelf->__VdfgTmp_hd4cce57f__0) 
                               << 8U) | (IData)(__VdfgTmp_hd4f690f4__0));
    vlSelf->__VdfgTmp_h5c97059e__0 = ((vlSelf->SingleCycleCPU__DOT__m_InstMem__DOT__insts
                                       [(0x7fU & ((IData)(1U) 
                                                  + vlSelf->SingleCycleCPU__DOT__pc_o_w))] 
                                       << 0x10U) | (IData)(__VdfgTmp_he3085f40__0));
    vlSelf->SingleCycleCPU__DOT____Vcellinp__m_Control__opcode 
        = ((0x80U <= vlSelf->SingleCycleCPU__DOT__pc_o_w)
            ? 0U : (0x7fU & (IData)(__VdfgTmp_hd4f690f4__0)));
    __Vtableidx1 = vlSelf->SingleCycleCPU__DOT____Vcellinp__m_Control__opcode;
    vlSelf->SingleCycleCPU__DOT__m_Control__DOT__ctl 
        = VSingleCycleCPU__ConstPool__TABLE_h96a54203_0
        [__Vtableidx1];
    vlSelf->SingleCycleCPU__DOT__readData1_w = vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs
        [((0x80U <= vlSelf->SingleCycleCPU__DOT__pc_o_w)
           ? 0U : (0x1fU & (vlSelf->__VdfgTmp_h5c97059e__0 
                            >> 0xfU)))];
    vlSelf->__VdfgTmp_hce78f63f__0 = (((IData)(vlSelf->__VdfgTmp_hd41cf205__0) 
                                       << 0x18U) | vlSelf->__VdfgTmp_h5c97059e__0);
    if ((0x80U <= vlSelf->SingleCycleCPU__DOT__pc_o_w)) {
        vlSelf->SingleCycleCPU__DOT____Vcellinp__m_Register__writeReg = 0U;
        vlSelf->SingleCycleCPU__DOT__inst_w = 0U;
    } else {
        vlSelf->SingleCycleCPU__DOT____Vcellinp__m_Register__writeReg 
            = (0x1fU & ((IData)(__VdfgTmp_he3085f40__0) 
                        >> 7U));
        vlSelf->SingleCycleCPU__DOT__inst_w = vlSelf->__VdfgTmp_hce78f63f__0;
    }
    vlSelf->SingleCycleCPU__DOT__memRead_w = (1U & 
                                              ((IData)(vlSelf->SingleCycleCPU__DOT__m_Control__DOT__ctl) 
                                               >> 6U));
    __Vtableidx2 = ((0x7fffffe0U & (((0x80U > vlSelf->SingleCycleCPU__DOT__pc_o_w) 
                                     << 5U) & ((IData)(vlSelf->__VdfgTmp_hd41cf205__0) 
                                               >> 1U))) 
                    | ((((0x80U <= vlSelf->SingleCycleCPU__DOT__pc_o_w)
                          ? 0U : (7U & ((IData)(vlSelf->__VdfgTmp_hd4cce57f__0) 
                                        >> 4U))) << 2U) 
                       | (3U & ((IData)(vlSelf->SingleCycleCPU__DOT__m_Control__DOT__ctl) 
                                >> 2U))));
    vlSelf->SingleCycleCPU__DOT__Aluctl_W = VSingleCycleCPU__ConstPool__TABLE_h8611c692_0
        [__Vtableidx2];
    vlSelf->SingleCycleCPU__DOT__readData2_w = vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs
        [((0x80U <= vlSelf->SingleCycleCPU__DOT__pc_o_w)
           ? 0U : (0x1fU & (vlSelf->__VdfgTmp_hce78f63f__0 
                            >> 0x14U)))];
    vlSelf->SingleCycleCPU__DOT__imm_W = ((0x40U & (IData)(vlSelf->SingleCycleCPU__DOT____Vcellinp__m_Control__opcode))
                                           ? ((0x20U 
                                               & (IData)(vlSelf->SingleCycleCPU__DOT____Vcellinp__m_Control__opcode))
                                               ? ((0x10U 
                                                   & (IData)(vlSelf->SingleCycleCPU__DOT____Vcellinp__m_Control__opcode))
                                                   ? 0U
                                                   : 
                                                  ((8U 
                                                    & (IData)(vlSelf->SingleCycleCPU__DOT____Vcellinp__m_Control__opcode))
                                                    ? 
                                                   ((4U 
                                                     & (IData)(vlSelf->SingleCycleCPU__DOT____Vcellinp__m_Control__opcode))
                                                     ? 
                                                    ((2U 
                                                      & (IData)(vlSelf->SingleCycleCPU__DOT____Vcellinp__m_Control__opcode))
                                                      ? 
                                                     ((1U 
                                                       & (IData)(vlSelf->SingleCycleCPU__DOT____Vcellinp__m_Control__opcode))
                                                       ? 
                                                      (((- (IData)(
                                                                   (vlSelf->SingleCycleCPU__DOT__inst_w 
                                                                    >> 0x1fU))) 
                                                        << 0x14U) 
                                                       | ((0x80000U 
                                                           & (vlSelf->SingleCycleCPU__DOT__inst_w 
                                                              >> 0xcU)) 
                                                          | ((0x7f800U 
                                                              & (vlSelf->SingleCycleCPU__DOT__inst_w 
                                                                 >> 1U)) 
                                                             | ((0x400U 
                                                                 & (vlSelf->SingleCycleCPU__DOT__inst_w 
                                                                    >> 0xaU)) 
                                                                | (0x3ffU 
                                                                   & (vlSelf->SingleCycleCPU__DOT__inst_w 
                                                                      >> 0x15U))))))
                                                       : 0U)
                                                      : 0U)
                                                     : 0U)
                                                    : 
                                                   ((4U 
                                                     & (IData)(vlSelf->SingleCycleCPU__DOT____Vcellinp__m_Control__opcode))
                                                     ? 
                                                    ((2U 
                                                      & (IData)(vlSelf->SingleCycleCPU__DOT____Vcellinp__m_Control__opcode))
                                                      ? 
                                                     ((1U 
                                                       & (IData)(vlSelf->SingleCycleCPU__DOT____Vcellinp__m_Control__opcode))
                                                       ? 
                                                      (((- (IData)(
                                                                   (vlSelf->SingleCycleCPU__DOT__inst_w 
                                                                    >> 0x1fU))) 
                                                        << 0xcU) 
                                                       | (vlSelf->SingleCycleCPU__DOT__inst_w 
                                                          >> 0x14U))
                                                       : 0U)
                                                      : 0U)
                                                     : 
                                                    ((2U 
                                                      & (IData)(vlSelf->SingleCycleCPU__DOT____Vcellinp__m_Control__opcode))
                                                      ? 
                                                     ((1U 
                                                       & (IData)(vlSelf->SingleCycleCPU__DOT____Vcellinp__m_Control__opcode))
                                                       ? 
                                                      (((- (IData)(
                                                                   (vlSelf->SingleCycleCPU__DOT__inst_w 
                                                                    >> 0x1fU))) 
                                                        << 0xcU) 
                                                       | ((0x800U 
                                                           & (vlSelf->SingleCycleCPU__DOT__inst_w 
                                                              >> 0x14U)) 
                                                          | ((0x400U 
                                                              & (vlSelf->SingleCycleCPU__DOT__inst_w 
                                                                 << 3U)) 
                                                             | ((0x3f0U 
                                                                 & (vlSelf->SingleCycleCPU__DOT__inst_w 
                                                                    >> 0x15U)) 
                                                                | (0xfU 
                                                                   & (vlSelf->SingleCycleCPU__DOT__inst_w 
                                                                      >> 8U))))))
                                                       : 0U)
                                                      : 0U))))
                                               : 0U)
                                           : ((0x20U 
                                               & (IData)(vlSelf->SingleCycleCPU__DOT____Vcellinp__m_Control__opcode))
                                               ? ((0x10U 
                                                   & (IData)(vlSelf->SingleCycleCPU__DOT____Vcellinp__m_Control__opcode))
                                                   ? 0U
                                                   : 
                                                  ((8U 
                                                    & (IData)(vlSelf->SingleCycleCPU__DOT____Vcellinp__m_Control__opcode))
                                                    ? 0U
                                                    : 
                                                   ((4U 
                                                     & (IData)(vlSelf->SingleCycleCPU__DOT____Vcellinp__m_Control__opcode))
                                                     ? 0U
                                                     : 
                                                    ((2U 
                                                      & (IData)(vlSelf->SingleCycleCPU__DOT____Vcellinp__m_Control__opcode))
                                                      ? 
                                                     ((1U 
                                                       & (IData)(vlSelf->SingleCycleCPU__DOT____Vcellinp__m_Control__opcode))
                                                       ? 
                                                      (((- (IData)(
                                                                   (vlSelf->SingleCycleCPU__DOT__inst_w 
                                                                    >> 0x1fU))) 
                                                        << 0xcU) 
                                                       | ((0xfe0U 
                                                           & (vlSelf->SingleCycleCPU__DOT__inst_w 
                                                              >> 0x14U)) 
                                                          | (0x1fU 
                                                             & (vlSelf->SingleCycleCPU__DOT__inst_w 
                                                                >> 7U))))
                                                       : 0U)
                                                      : 0U))))
                                               : ((0x10U 
                                                   & (IData)(vlSelf->SingleCycleCPU__DOT____Vcellinp__m_Control__opcode))
                                                   ? 
                                                  ((8U 
                                                    & (IData)(vlSelf->SingleCycleCPU__DOT____Vcellinp__m_Control__opcode))
                                                    ? 0U
                                                    : 
                                                   ((4U 
                                                     & (IData)(vlSelf->SingleCycleCPU__DOT____Vcellinp__m_Control__opcode))
                                                     ? 0U
                                                     : 
                                                    ((2U 
                                                      & (IData)(vlSelf->SingleCycleCPU__DOT____Vcellinp__m_Control__opcode))
                                                      ? 
                                                     ((1U 
                                                       & (IData)(vlSelf->SingleCycleCPU__DOT____Vcellinp__m_Control__opcode))
                                                       ? 
                                                      (((- (IData)(
                                                                   (vlSelf->SingleCycleCPU__DOT__inst_w 
                                                                    >> 0x1fU))) 
                                                        << 0xcU) 
                                                       | (vlSelf->SingleCycleCPU__DOT__inst_w 
                                                          >> 0x14U))
                                                       : 0U)
                                                      : 0U)))
                                                   : 
                                                  ((8U 
                                                    & (IData)(vlSelf->SingleCycleCPU__DOT____Vcellinp__m_Control__opcode))
                                                    ? 0U
                                                    : 
                                                   ((4U 
                                                     & (IData)(vlSelf->SingleCycleCPU__DOT____Vcellinp__m_Control__opcode))
                                                     ? 0U
                                                     : 
                                                    ((2U 
                                                      & (IData)(vlSelf->SingleCycleCPU__DOT____Vcellinp__m_Control__opcode))
                                                      ? 
                                                     ((1U 
                                                       & (IData)(vlSelf->SingleCycleCPU__DOT____Vcellinp__m_Control__opcode))
                                                       ? 
                                                      (((- (IData)(
                                                                   (vlSelf->SingleCycleCPU__DOT__inst_w 
                                                                    >> 0x1fU))) 
                                                        << 0xcU) 
                                                       | (vlSelf->SingleCycleCPU__DOT__inst_w 
                                                          >> 0x14U))
                                                       : 0U)
                                                      : 0U))))));
    vlSelf->SingleCycleCPU__DOT__mux_alusrc_w = ((0x200U 
                                                  & (IData)(vlSelf->SingleCycleCPU__DOT__m_Control__DOT__ctl))
                                                  ? vlSelf->SingleCycleCPU__DOT__imm_W
                                                  : vlSelf->SingleCycleCPU__DOT__readData2_w);
    vlSelf->SingleCycleCPU__DOT__ALU_result_w = ((0U 
                                                  == (IData)(vlSelf->SingleCycleCPU__DOT__Aluctl_W))
                                                  ? 
                                                 (vlSelf->SingleCycleCPU__DOT__readData1_w 
                                                  & vlSelf->SingleCycleCPU__DOT__mux_alusrc_w)
                                                  : 
                                                 ((2U 
                                                   == (IData)(vlSelf->SingleCycleCPU__DOT__Aluctl_W))
                                                   ? 
                                                  (vlSelf->SingleCycleCPU__DOT__readData1_w 
                                                   + vlSelf->SingleCycleCPU__DOT__mux_alusrc_w)
                                                   : 
                                                  ((6U 
                                                    == (IData)(vlSelf->SingleCycleCPU__DOT__Aluctl_W))
                                                    ? 
                                                   (vlSelf->SingleCycleCPU__DOT__readData1_w 
                                                    - vlSelf->SingleCycleCPU__DOT__mux_alusrc_w)
                                                    : 
                                                   ((1U 
                                                     == (IData)(vlSelf->SingleCycleCPU__DOT__Aluctl_W))
                                                     ? 
                                                    (vlSelf->SingleCycleCPU__DOT__readData1_w 
                                                     | vlSelf->SingleCycleCPU__DOT__mux_alusrc_w)
                                                     : 
                                                    ((0xfU 
                                                      == (IData)(vlSelf->SingleCycleCPU__DOT__Aluctl_W))
                                                      ? 
                                                     ((vlSelf->SingleCycleCPU__DOT__readData1_w 
                                                       == vlSelf->SingleCycleCPU__DOT__mux_alusrc_w)
                                                       ? 1U
                                                       : 0U)
                                                      : 
                                                     ((0xeU 
                                                       == (IData)(vlSelf->SingleCycleCPU__DOT__Aluctl_W))
                                                       ? 
                                                      (VL_GTES_III(32, vlSelf->SingleCycleCPU__DOT__readData1_w, vlSelf->SingleCycleCPU__DOT__mux_alusrc_w)
                                                        ? 1U
                                                        : 0U)
                                                       : 
                                                      ((4U 
                                                        == (IData)(vlSelf->SingleCycleCPU__DOT__Aluctl_W))
                                                        ? 
                                                       (VL_LTS_III(32, vlSelf->SingleCycleCPU__DOT__readData1_w, vlSelf->SingleCycleCPU__DOT__mux_alusrc_w)
                                                         ? 1U
                                                         : 0U)
                                                        : 0U)))))));
    vlSelf->SingleCycleCPU__DOT__mux_dm_W = ((0x100U 
                                              & (IData)(vlSelf->SingleCycleCPU__DOT__m_Control__DOT__ctl))
                                              ? vlSelf->SingleCycleCPU__DOT__readdata_w
                                              : vlSelf->SingleCycleCPU__DOT__ALU_result_w);
    vlSelf->SingleCycleCPU__DOT__mux_pc_source_w_JALR 
        = ((1U & (IData)(vlSelf->SingleCycleCPU__DOT__m_Control__DOT__ctl))
            ? vlSelf->SingleCycleCPU__DOT__ALU_result_w
            : ((1U & (((0U == vlSelf->SingleCycleCPU__DOT__ALU_result_w) 
                       & ((IData)(vlSelf->SingleCycleCPU__DOT__m_Control__DOT__ctl) 
                          >> 4U)) | ((IData)(vlSelf->SingleCycleCPU__DOT__m_Control__DOT__ctl) 
                                     >> 1U))) ? (vlSelf->SingleCycleCPU__DOT__pc_o_w 
                                                 + 
                                                 (vlSelf->SingleCycleCPU__DOT__imm_W 
                                                  << 1U))
                : ((IData)(4U) + vlSelf->SingleCycleCPU__DOT__pc_o_w)));
}

VL_ATTR_COLD void VSingleCycleCPU___024root___eval_stl(VSingleCycleCPU___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSingleCycleCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSingleCycleCPU___024root___eval_stl\n"); );
    // Body
    if (vlSelf->__VstlTriggered.at(0U)) {
        VSingleCycleCPU___024root___stl_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSelf->__Vm_traceActivity[2U] = 1U;
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->__Vm_traceActivity[0U] = 1U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VSingleCycleCPU___024root___dump_triggers__act(VSingleCycleCPU___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSingleCycleCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSingleCycleCPU___024root___dump_triggers__act\n"); );
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
        VL_DBG_MSGF("         'act' region trigger index 3 is active: @([changed] SingleCycleCPU.ALU_result_w or [changed] SingleCycleCPU.memRead_w)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void VSingleCycleCPU___024root___dump_triggers__nba(VSingleCycleCPU___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSingleCycleCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSingleCycleCPU___024root___dump_triggers__nba\n"); );
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
        VL_DBG_MSGF("         'nba' region trigger index 3 is active: @([changed] SingleCycleCPU.ALU_result_w or [changed] SingleCycleCPU.memRead_w)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void VSingleCycleCPU___024root___ctor_var_reset(VSingleCycleCPU___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSingleCycleCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSingleCycleCPU___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->start = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->r[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->SingleCycleCPU__DOT__pc_o_w = VL_RAND_RESET_I(32);
    vlSelf->SingleCycleCPU__DOT__inst_w = VL_RAND_RESET_I(32);
    vlSelf->SingleCycleCPU__DOT__memRead_w = VL_RAND_RESET_I(1);
    vlSelf->SingleCycleCPU__DOT__mux_alusrc_w = VL_RAND_RESET_I(32);
    vlSelf->SingleCycleCPU__DOT__mux_pc_source_w_JALR = VL_RAND_RESET_I(32);
    vlSelf->SingleCycleCPU__DOT__mux_dm_W = VL_RAND_RESET_I(32);
    vlSelf->SingleCycleCPU__DOT__readData1_w = VL_RAND_RESET_I(32);
    vlSelf->SingleCycleCPU__DOT__readData2_w = VL_RAND_RESET_I(32);
    vlSelf->SingleCycleCPU__DOT__imm_W = VL_RAND_RESET_I(32);
    vlSelf->SingleCycleCPU__DOT__ALU_result_w = VL_RAND_RESET_I(32);
    vlSelf->SingleCycleCPU__DOT__Aluctl_W = VL_RAND_RESET_I(4);
    vlSelf->SingleCycleCPU__DOT__readdata_w = VL_RAND_RESET_I(32);
    vlSelf->SingleCycleCPU__DOT____Vcellinp__m_Control__opcode = VL_RAND_RESET_I(7);
    vlSelf->SingleCycleCPU__DOT____Vcellinp__m_Register__writeReg = VL_RAND_RESET_I(5);
    for (int __Vi0 = 0; __Vi0 < 128; ++__Vi0) {
        vlSelf->SingleCycleCPU__DOT__m_InstMem__DOT__insts[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->SingleCycleCPU__DOT__m_Control__DOT__ctl = VL_RAND_RESET_I(10);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0 = 0; __Vi0 < 128; ++__Vi0) {
        vlSelf->SingleCycleCPU__DOT__m_DataMemory__DOT__data_memory[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->__VdfgTmp_hce78f63f__0 = 0;
    vlSelf->__VdfgTmp_h5c97059e__0 = 0;
    vlSelf->__VdfgTmp_hd41cf205__0 = 0;
    vlSelf->__VdfgTmp_hd4cce57f__0 = 0;
    vlSelf->__Vdly__SingleCycleCPU__DOT__pc_o_w = VL_RAND_RESET_I(32);
    vlSelf->__Vdlyvdim0__SingleCycleCPU__DOT__m_DataMemory__DOT__data_memory__v0 = 0;
    vlSelf->__Vdlyvval__SingleCycleCPU__DOT__m_DataMemory__DOT__data_memory__v0 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvset__SingleCycleCPU__DOT__m_DataMemory__DOT__data_memory__v0 = 0;
    vlSelf->__Vdlyvdim0__SingleCycleCPU__DOT__m_DataMemory__DOT__data_memory__v1 = 0;
    vlSelf->__Vdlyvval__SingleCycleCPU__DOT__m_DataMemory__DOT__data_memory__v1 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvdim0__SingleCycleCPU__DOT__m_DataMemory__DOT__data_memory__v2 = 0;
    vlSelf->__Vdlyvval__SingleCycleCPU__DOT__m_DataMemory__DOT__data_memory__v2 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvdim0__SingleCycleCPU__DOT__m_DataMemory__DOT__data_memory__v3 = 0;
    vlSelf->__Vdlyvval__SingleCycleCPU__DOT__m_DataMemory__DOT__data_memory__v3 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvset__SingleCycleCPU__DOT__m_DataMemory__DOT__data_memory__v4 = 0;
    vlSelf->__Vtrigrprev__TOP__clk = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigrprev__TOP__start = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigrprev__TOP__SingleCycleCPU__DOT__ALU_result_w = VL_RAND_RESET_I(32);
    vlSelf->__Vtrigrprev__TOP__SingleCycleCPU__DOT__memRead_w = VL_RAND_RESET_I(1);
    vlSelf->__VactDidInit = 0;
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
