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
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
    vlSelf->__Vtrigrprev__TOP__clk = vlSelf->clk;
    vlSelf->__Vtrigrprev__TOP__start = vlSelf->start;
    vlSelf->__Vtrigrprev__TOP__SingleCycleCPU__DOT__EX_MEM_ALU_result_w 
        = vlSelf->SingleCycleCPU__DOT__EX_MEM_ALU_result_w;
    vlSelf->__Vtrigrprev__TOP__SingleCycleCPU__DOT__EX_MEM_memRead_w 
        = vlSelf->SingleCycleCPU__DOT__EX_MEM_memRead_w;
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
    CData/*6:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    CData/*5:0*/ __Vtableidx2;
    __Vtableidx2 = 0;
    // Body
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
    vlSelf->SingleCycleCPU__DOT__EX_MEM_memRead_w = 
        (1U & (vlSelf->SingleCycleCPU__DOT____Vcellout__EX_MEM__pipe_data_o[3U] 
               >> 9U));
    vlSelf->SingleCycleCPU__DOT__EX_MEM_ALU_result_w 
        = ((vlSelf->SingleCycleCPU__DOT____Vcellout__EX_MEM__pipe_data_o[2U] 
            << 0x1bU) | (vlSelf->SingleCycleCPU__DOT____Vcellout__EX_MEM__pipe_data_o[1U] 
                         >> 5U));
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
    __Vtableidx1 = (0x7fU & (IData)(vlSelf->SingleCycleCPU__DOT____Vcellout__IF_ID__pipe_data_o));
    vlSelf->SingleCycleCPU__DOT__m_Control__DOT__ctl 
        = VSingleCycleCPU__ConstPool__TABLE_h96a54203_0
        [__Vtableidx1];
    __Vtableidx2 = ((0x20U & (vlSelf->SingleCycleCPU__DOT____Vcellout__ID_EX__pipe_data_o[0U] 
                              >> 3U)) | ((0x1cU & (
                                                   vlSelf->SingleCycleCPU__DOT____Vcellout__ID_EX__pipe_data_o[0U] 
                                                   >> 3U)) 
                                         | (3U & (vlSelf->SingleCycleCPU__DOT____Vcellout__ID_EX__pipe_data_o[4U] 
                                                  >> 0xcU))));
    vlSelf->SingleCycleCPU__DOT__Aluctl_W = VSingleCycleCPU__ConstPool__TABLE_h8611c692_0
        [__Vtableidx2];
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
    vlSelf->SingleCycleCPU__DOT__mux_pc_source_w = 
        ((1U & (((vlSelf->SingleCycleCPU__DOT____Vcellout__EX_MEM__pipe_data_o[3U] 
                  >> 0xaU) & (vlSelf->SingleCycleCPU__DOT____Vcellout__EX_MEM__pipe_data_o[2U] 
                              >> 5U)) | ((IData)(vlSelf->SingleCycleCPU__DOT__m_Control__DOT__ctl) 
                                         >> 1U))) ? 
         ((vlSelf->SingleCycleCPU__DOT____Vcellout__EX_MEM__pipe_data_o[3U] 
           << 0x1aU) | (vlSelf->SingleCycleCPU__DOT____Vcellout__EX_MEM__pipe_data_o[2U] 
                        >> 6U)) : ((IData)(4U) + vlSelf->SingleCycleCPU__DOT__pc_o_w));
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
        VL_DBG_MSGF("         'act' region trigger index 3 is active: @([changed] SingleCycleCPU.EX_MEM_ALU_result_w or [changed] SingleCycleCPU.EX_MEM_memRead_w)\n");
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
        VL_DBG_MSGF("         'nba' region trigger index 3 is active: @([changed] SingleCycleCPU.EX_MEM_ALU_result_w or [changed] SingleCycleCPU.EX_MEM_memRead_w)\n");
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
    vlSelf->SingleCycleCPU__DOT__mux_alusrc_w = VL_RAND_RESET_I(32);
    vlSelf->SingleCycleCPU__DOT__mux_pc_source_w = VL_RAND_RESET_I(32);
    vlSelf->SingleCycleCPU__DOT__imm_W = VL_RAND_RESET_I(32);
    vlSelf->SingleCycleCPU__DOT__ALU_result_w = VL_RAND_RESET_I(32);
    vlSelf->SingleCycleCPU__DOT__Aluctl_W = VL_RAND_RESET_I(4);
    vlSelf->SingleCycleCPU__DOT__readdata_w = VL_RAND_RESET_I(32);
    vlSelf->SingleCycleCPU__DOT__EX_MEM_memRead_w = VL_RAND_RESET_I(1);
    vlSelf->SingleCycleCPU__DOT__EX_MEM_ALU_result_w = VL_RAND_RESET_I(32);
    vlSelf->SingleCycleCPU__DOT____Vcellout__IF_ID__pipe_data_o = VL_RAND_RESET_Q(64);
    VL_RAND_RESET_W(145, vlSelf->SingleCycleCPU__DOT____Vcellout__ID_EX__pipe_data_o);
    VL_RAND_RESET_W(107, vlSelf->SingleCycleCPU__DOT____Vcellout__EX_MEM__pipe_data_o);
    VL_RAND_RESET_W(71, vlSelf->SingleCycleCPU__DOT____Vcellout__MEM_WB__pipe_data_o);
    VL_RAND_RESET_W(71, vlSelf->SingleCycleCPU__DOT____Vcellinp__MEM_WB__pipe_data_i);
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
    vlSelf->__Vdly__SingleCycleCPU__DOT__pc_o_w = VL_RAND_RESET_I(32);
    vlSelf->__Vdlyvdim0__SingleCycleCPU__DOT__m_Register__DOT__regs__v0 = 0;
    vlSelf->__Vdlyvval__SingleCycleCPU__DOT__m_Register__DOT__regs__v0 = VL_RAND_RESET_I(32);
    vlSelf->__Vdlyvset__SingleCycleCPU__DOT__m_Register__DOT__regs__v0 = 0;
    vlSelf->__Vdlyvset__SingleCycleCPU__DOT__m_Register__DOT__regs__v1 = 0;
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
    vlSelf->__Vtrigrprev__TOP__SingleCycleCPU__DOT__EX_MEM_ALU_result_w = VL_RAND_RESET_I(32);
    vlSelf->__Vtrigrprev__TOP__SingleCycleCPU__DOT__EX_MEM_memRead_w = VL_RAND_RESET_I(1);
    vlSelf->__VactDidInit = 0;
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
