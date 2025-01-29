// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VPipelineCPU.h for the primary calling header

#ifndef VERILATED_VPIPELINECPU___024ROOT_H_
#define VERILATED_VPIPELINECPU___024ROOT_H_  // guard

#include "verilated.h"

class VPipelineCPU__Syms;

class VPipelineCPU___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(clk,0,0);
        VL_IN8(start,0,0);
        CData/*0:0*/ PipelineCPU__DOT__MEM_memRead;
        CData/*4:0*/ PipelineCPU__DOT__EX_readReg1;
        CData/*4:0*/ PipelineCPU__DOT__EX_readReg2;
        CData/*4:0*/ PipelineCPU__DOT__EX_writeReg;
        CData/*3:0*/ PipelineCPU__DOT__ALUCtl;
        CData/*1:0*/ PipelineCPU__DOT__EX_branchType;
        CData/*1:0*/ PipelineCPU__DOT__EX_memtoReg;
        CData/*1:0*/ PipelineCPU__DOT__EX_ALUOp;
        CData/*0:0*/ PipelineCPU__DOT__EX_branch;
        CData/*0:0*/ PipelineCPU__DOT__EX_memRead;
        CData/*0:0*/ PipelineCPU__DOT__EX_memWrite;
        CData/*0:0*/ PipelineCPU__DOT__EX_ALUSrc;
        CData/*0:0*/ PipelineCPU__DOT__EX_regWrite;
        CData/*0:0*/ PipelineCPU__DOT__EX_jump;
        CData/*0:0*/ PipelineCPU__DOT__EX_JumpSrc;
        CData/*0:0*/ PipelineCPU__DOT__EX_PCSrc;
        CData/*4:0*/ PipelineCPU__DOT__MEM_writeReg;
        CData/*1:0*/ PipelineCPU__DOT__MEM_memtoReg;
        CData/*0:0*/ PipelineCPU__DOT__MEM_memWrite;
        CData/*0:0*/ PipelineCPU__DOT__MEM_regWrite;
        CData/*4:0*/ PipelineCPU__DOT__WB_writeReg;
        CData/*1:0*/ PipelineCPU__DOT__WB_memtoReg;
        CData/*0:0*/ PipelineCPU__DOT__WB_regWrite;
        CData/*1:0*/ PipelineCPU__DOT__EX_forward1;
        CData/*1:0*/ PipelineCPU__DOT__EX_forward2;
        CData/*0:0*/ PipelineCPU__DOT__stallPC;
        CData/*0:0*/ PipelineCPU__DOT__IFID_stall;
        CData/*0:0*/ PipelineCPU__DOT__IDEX_flush;
        CData/*0:0*/ PipelineCPU__DOT__m_Hazard__DOT__lwStall;
        CData/*4:0*/ __Vdlyvdim0__PipelineCPU__DOT__m_Register__DOT__regs__v0;
        CData/*0:0*/ __Vdlyvset__PipelineCPU__DOT__m_Register__DOT__regs__v0;
        CData/*0:0*/ __Vdlyvset__PipelineCPU__DOT__m_Register__DOT__regs__v1;
        CData/*6:0*/ __Vdlyvdim0__PipelineCPU__DOT__m_DataMemory__DOT__data_memory__v0;
        CData/*7:0*/ __Vdlyvval__PipelineCPU__DOT__m_DataMemory__DOT__data_memory__v0;
        CData/*0:0*/ __Vdlyvset__PipelineCPU__DOT__m_DataMemory__DOT__data_memory__v0;
        CData/*6:0*/ __Vdlyvdim0__PipelineCPU__DOT__m_DataMemory__DOT__data_memory__v1;
        CData/*7:0*/ __Vdlyvval__PipelineCPU__DOT__m_DataMemory__DOT__data_memory__v1;
        CData/*6:0*/ __Vdlyvdim0__PipelineCPU__DOT__m_DataMemory__DOT__data_memory__v2;
        CData/*7:0*/ __Vdlyvval__PipelineCPU__DOT__m_DataMemory__DOT__data_memory__v2;
        CData/*6:0*/ __Vdlyvdim0__PipelineCPU__DOT__m_DataMemory__DOT__data_memory__v3;
        CData/*7:0*/ __Vdlyvval__PipelineCPU__DOT__m_DataMemory__DOT__data_memory__v3;
        CData/*0:0*/ __Vdlyvset__PipelineCPU__DOT__m_DataMemory__DOT__data_memory__v4;
        CData/*0:0*/ __Vtrigrprev__TOP__clk;
        CData/*0:0*/ __Vtrigrprev__TOP__start;
        CData/*0:0*/ __Vtrigrprev__TOP__PipelineCPU__DOT__MEM_memRead;
        CData/*0:0*/ __VactDidInit;
        CData/*0:0*/ __VactContinue;
        SData/*12:0*/ PipelineCPU__DOT__m_Control__DOT__ctrl;
        IData/*31:0*/ PipelineCPU__DOT__IF_PCSrcOut;
        IData/*31:0*/ PipelineCPU__DOT__IF_PC;
        IData/*31:0*/ PipelineCPU__DOT__ID_inst;
        IData/*31:0*/ PipelineCPU__DOT__ID_PC;
        IData/*31:0*/ PipelineCPU__DOT__ID_PCaddfour;
        IData/*31:0*/ PipelineCPU__DOT__ID_imm;
        IData/*31:0*/ PipelineCPU__DOT__EX_readData1;
        IData/*31:0*/ PipelineCPU__DOT__EX_readData2;
        IData/*31:0*/ PipelineCPU__DOT__EX_PC;
        IData/*31:0*/ PipelineCPU__DOT__EX_PCaddfour;
        IData/*31:0*/ PipelineCPU__DOT__EX_imm;
        IData/*31:0*/ PipelineCPU__DOT__EX_inst;
        IData/*31:0*/ PipelineCPU__DOT__ALUA;
        IData/*31:0*/ PipelineCPU__DOT__ALUB;
    };
    struct {
        IData/*31:0*/ PipelineCPU__DOT__EX_ALUOut;
        IData/*31:0*/ PipelineCPU__DOT__EX_writeData;
        IData/*31:0*/ PipelineCPU__DOT__MEM_ALUOut;
        IData/*31:0*/ PipelineCPU__DOT__MEM_writeData;
        IData/*31:0*/ PipelineCPU__DOT__MEM_PCaddfour;
        IData/*31:0*/ PipelineCPU__DOT__MEM_readData;
        IData/*31:0*/ PipelineCPU__DOT__WB_ALUOut;
        IData/*31:0*/ PipelineCPU__DOT__WB_PCaddfour;
        IData/*31:0*/ PipelineCPU__DOT__WB_readData;
        IData/*31:0*/ PipelineCPU__DOT__WB_result;
        IData/*31:0*/ __Vdlyvval__PipelineCPU__DOT__m_Register__DOT__regs__v0;
        IData/*31:0*/ __VstlIterCount;
        IData/*31:0*/ __Vtrigrprev__TOP__PipelineCPU__DOT__MEM_ALUOut;
        IData/*31:0*/ __VactIterCount;
        VL_OUT(r[32],31,0);
        VlUnpacked<CData/*7:0*/, 128> PipelineCPU__DOT__m_InstMem__DOT__insts;
        VlUnpacked<IData/*31:0*/, 32> PipelineCPU__DOT__m_Register__DOT__regs;
        VlUnpacked<CData/*7:0*/, 128> PipelineCPU__DOT__m_DataMemory__DOT__data_memory;
        VlUnpacked<CData/*0:0*/, 4> __Vm_traceActivity;
    };
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<4> __VactTriggered;
    VlTriggerVec<4> __VnbaTriggered;

    // INTERNAL VARIABLES
    VPipelineCPU__Syms* const vlSymsp;

    // CONSTRUCTORS
    VPipelineCPU___024root(VPipelineCPU__Syms* symsp, const char* v__name);
    ~VPipelineCPU___024root();
    VL_UNCOPYABLE(VPipelineCPU___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
