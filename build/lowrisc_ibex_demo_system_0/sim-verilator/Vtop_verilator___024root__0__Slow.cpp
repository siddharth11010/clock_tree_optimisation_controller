// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop_verilator.h for the primary calling header

#include "Vtop_verilator__pch.h"

VL_ATTR_COLD void Vtop_verilator___024root___eval_static__TOP(Vtop_verilator___024root* vlSelf);
VL_ATTR_COLD void Vtop_verilator___024root____Vm_traceActivitySetAll(Vtop_verilator___024root* vlSelf);

VL_ATTR_COLD void Vtop_verilator___024root___eval_static(Vtop_verilator___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_verilator___024root___eval_static\n"); );
    Vtop_verilator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtop_verilator___024root___eval_static__TOP(vlSelf);
    Vtop_verilator___024root____Vm_traceActivitySetAll(vlSelf);
    vlSelfRef.__Vtrigprevexpr___TOP__top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__instr_executing_spec__0 
        = vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__instr_executing_spec;
    vlSelfRef.__Vtrigprevexpr___TOP__top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__special_req__0 
        = vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__special_req;
    vlSelfRef.__Vtrigprevexpr___TOP__top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__id_in_ready_o__0 
        = vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__id_in_ready_o;
    vlSelfRef.__Vtrigprevexpr___TOP__top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__clear_resumeack__0 
        = vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__clear_resumeack;
    vlSelfRef.__Vtrigprevexpr___TOP__top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__instr_executing_spec__1 
        = vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__instr_executing_spec;
    vlSelfRef.__Vtrigprevexpr___TOP__top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__special_req__1 
        = vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__special_req;
    vlSelfRef.__Vtrigprevexpr___TOP__top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__id_in_ready_o__1 
        = vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__id_in_ready_o;
    vlSelfRef.__Vtrigprevexpr___TOP__top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__clear_resumeack__1 
        = vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__clear_resumeack;
    vlSelfRef.__Vtrigprevexpr___TOP__clk_i__0 = vlSelfRef.clk_i;
    vlSelfRef.__Vtrigprevexpr___TOP__rst_ni__0 = vlSelfRef.rst_ni;
    vlSelfRef.__Vtrigprevexpr___TOP__top_verilator__DOT__u_ibex_demo_system__DOT__rst_core_n__0 
        = vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__rst_core_n;
    vlSelfRef.__Vtrigprevexpr___TOP__top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__clk__0 
        = vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__combined_rstn_premux__0 
        = vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__combined_rstn_premux;
    vlSelfRef.__Vtrigprevexpr___TOP__top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT____Vcellinp__u_combined_rstn_sync__rst_ni__0 
        = vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT____Vcellinp__u_combined_rstn_sync__rst_ni;
}

VL_ATTR_COLD void Vtop_verilator___024root___eval_static__TOP(Vtop_verilator___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_verilator___024root___eval_static__TOP\n"); );
    Vtop_verilator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_ram__DOT__u_ram__DOT__gen_generic__DOT__u_impl_generic__DOT__simutil_set_mem__Vstatic__valid = 0U;
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_ram__DOT__u_ram__DOT__gen_generic__DOT__u_impl_generic__DOT__simutil_get_mem__Vstatic__valid = 0U;
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->vlNamep);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_ram__DOT__u_ram__DOT__gen_generic__DOT__u_impl_generic__DOT__unnamedblk3__DOT__show_mem_paths = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2477620406562742034ull);
    vlSelfRef.top_verilator__DOT__u_uartdpi__DOT__log_file_path = "uart0.log"s;
}

VL_ATTR_COLD void Vtop_verilator___024root___eval_initial__TOP(Vtop_verilator___024root* vlSelf);

VL_ATTR_COLD void Vtop_verilator___024root___eval_initial(Vtop_verilator___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_verilator___024root___eval_initial\n"); );
    Vtop_verilator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtop_verilator___024root___eval_initial__TOP(vlSelf);
    Vtop_verilator___024root____Vm_traceActivitySetAll(vlSelf);
}

void Vtop_verilator___024root____Vdpiimwrap_top_verilator__DOT__u_uartdpi__DOT__uartdpi_create_TOP(std::string name, std::string log_file_path, QData/*63:0*/ &uartdpi_create__Vfuncrtn);

VL_ATTR_COLD void Vtop_verilator___024root___eval_initial__TOP(Vtop_verilator___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_verilator___024root___eval_initial__TOP\n"); );
    Vtop_verilator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    QData/*63:0*/ __Vfunc_top_verilator__DOT__u_uartdpi__DOT__uartdpi_create__41__Vfuncout;
    __Vfunc_top_verilator__DOT__u_uartdpi__DOT__uartdpi_create__41__Vfuncout = 0;
    // Body
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__ic_tag_rdata[0U] = 0U;
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__ic_tag_rdata[1U] = 0U;
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__ic_data_rdata[0U] = 0ULL;
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__ic_data_rdata[1U] = 0ULL;
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_imd_val_d[0U] = 0U;
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_imd_val_d[1U] = 0U;
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent[0U] = 0U;
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent[1U] = 0U;
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent[2U] = 0U;
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent[3U] = 0U;
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent[3U] 
        = (1U | vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent[3U]);
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent[4U] = 0U;
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent[4U] 
        = (2U | vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent[4U]);
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent[5U] = 0U;
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent[5U] 
        = (4U | vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent[5U]);
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent[6U] = 0U;
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent[6U] 
        = (8U | vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent[6U]);
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent[7U] = 0U;
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent[7U] 
        = (0x00000010U | vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent[7U]);
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent[8U] = 0U;
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent[8U] 
        = (0x00000020U | vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent[8U]);
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent[9U] = 0U;
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent[9U] 
        = (0x00000040U | vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent[9U]);
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent[10U] = 0U;
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent[10U] 
        = (0x00000080U | vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent[10U]);
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent[11U] = 0U;
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent[11U] 
        = (0x00000100U | vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent[11U]);
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent[12U] = 0U;
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent[12U] 
        = (0x00000200U | vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent[12U]);
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent[13U] = 0U;
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent[13U] 
        = (0x00000400U | vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent[13U]);
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent[14U] = 0U;
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent[14U] 
        = (0x00000800U | vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent[14U]);
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent[15U] = 0U;
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent[15U] 
        = (0x00001000U | vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent[15U]);
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent[16U] = 0U;
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent[16U] 
        = (0x00002000U | vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent[16U]);
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent[17U] = 0U;
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent[17U] 
        = (0x00004000U | vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent[17U]);
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent[18U] = 0U;
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent[18U] 
        = (0x00008000U | vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent[18U]);
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent[19U] = 0U;
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent[19U] 
        = (0x00010000U | vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent[19U]);
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent[20U] = 0U;
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent[20U] 
        = (0x00020000U | vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent[20U]);
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent[21U] = 0U;
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent[21U] 
        = (0x00040000U | vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent[21U]);
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent[22U] = 0U;
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent[22U] 
        = (0x00080000U | vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent[22U]);
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent[23U] = 0U;
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent[23U] 
        = (0x00100000U | vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent[23U]);
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent[24U] = 0U;
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent[24U] 
        = (0x00200000U | vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent[24U]);
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent[25U] = 0U;
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent[25U] 
        = (0x00400000U | vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent[25U]);
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent[26U] = 0U;
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent[26U] 
        = (0x00800000U | vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent[26U]);
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent[27U] = 0U;
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent[27U] 
        = (0x01000000U | vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent[27U]);
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent[28U] = 0U;
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent[28U] 
        = (0x02000000U | vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent[28U]);
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent[29U] = 0U;
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent[29U] 
        = (0x04000000U | vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent[29U]);
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent[30U] = 0U;
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent[30U] 
        = (0x08000000U | vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent[30U]);
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent[31U] = 0U;
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent[31U] 
        = (0x10000000U | vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent[31U]);
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent[1U] = 0U;
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent[13U] = 0U;
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent[14U] = 0U;
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent[15U] = 0U;
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent[16U] = 0U;
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent[17U] = 0U;
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent[18U] = 0U;
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent[19U] = 0U;
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent[20U] = 0U;
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent[21U] = 0U;
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent[22U] = 0U;
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent[23U] = 0U;
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent[24U] = 0U;
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent[25U] = 0U;
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent[26U] = 0U;
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent[27U] = 0U;
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent[28U] = 0U;
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent[29U] = 0U;
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent[30U] = 0U;
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent[31U] = 0U;
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__device_rdata[2U] = 0U;
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__device_rdata[6U] = 0U;
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[0U] = 0U;
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter[1U] = 0ULL;
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter[13U] = 0ULL;
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter[14U] = 0ULL;
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter[15U] = 0ULL;
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter[16U] = 0ULL;
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter[17U] = 0ULL;
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter[18U] = 0ULL;
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter[19U] = 0ULL;
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter[20U] = 0ULL;
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter[21U] = 0ULL;
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter[22U] = 0ULL;
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter[23U] = 0ULL;
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter[24U] = 0ULL;
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter[25U] = 0ULL;
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter[26U] = 0ULL;
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter[27U] = 0ULL;
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter[28U] = 0ULL;
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter[29U] = 0ULL;
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter[30U] = 0ULL;
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter[31U] = 0ULL;
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__device_err[0U] = 0U;
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__device_err[1U] = 0U;
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__device_err[2U] = 0U;
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__device_err[3U] = 0U;
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__device_err[5U] = 0U;
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__device_err[6U] = 0U;
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__device_err[7U] = 0U;
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__cfg_device_addr_base[0U] = 0x00100000U;
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__cfg_device_addr_base[1U] = 0x80000000U;
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__cfg_device_addr_base[2U] = 0x80003000U;
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__cfg_device_addr_base[3U] = 0x80001000U;
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__cfg_device_addr_base[4U] = 0x80002000U;
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__cfg_device_addr_base[5U] = 0x80004000U;
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__cfg_device_addr_base[6U] = 0x00020000U;
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__cfg_device_addr_base[7U] = 0x1a110000U;
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__cfg_device_addr_mask[0U] = 0xfffe0000U;
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__cfg_device_addr_mask[1U] = 0xfffff000U;
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__cfg_device_addr_mask[2U] = 0xfffff000U;
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__cfg_device_addr_mask[3U] = 0xfffff000U;
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__cfg_device_addr_mask[4U] = 0xfffff000U;
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__cfg_device_addr_mask[5U] = 0xfffffc00U;
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__cfg_device_addr_mask[6U] = 0xfffffc00U;
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__cfg_device_addr_mask[7U] = 0xffff0000U;
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__pmp_req_err[0U] = 0U;
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__pmp_req_err[1U] = 0U;
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__pmp_req_err[2U] = 0U;
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_pmp_addr[0U] = 0ULL;
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_pmp_addr[1U] = 0ULL;
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_pmp_addr[2U] = 0ULL;
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_pmp_addr[3U] = 0ULL;
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_pmp_cfg[0U] = 0U;
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_pmp_cfg[1U] = 0U;
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_pmp_cfg[2U] = 0U;
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_pmp_cfg[3U] = 0U;
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_addr_rdata[0U] = 0U;
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_addr_rdata[1U] = 0U;
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_addr_rdata[2U] = 0U;
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_addr_rdata[3U] = 0U;
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_addr_rdata[4U] = 0U;
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_addr_rdata[5U] = 0U;
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_addr_rdata[6U] = 0U;
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_addr_rdata[7U] = 0U;
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_addr_rdata[8U] = 0U;
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_addr_rdata[9U] = 0U;
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_addr_rdata[10U] = 0U;
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_addr_rdata[11U] = 0U;
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_addr_rdata[12U] = 0U;
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_addr_rdata[13U] = 0U;
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_addr_rdata[14U] = 0U;
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_addr_rdata[15U] = 0U;
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_cfg_rdata[0U] = 0U;
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_cfg_rdata[1U] = 0U;
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_cfg_rdata[2U] = 0U;
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_cfg_rdata[3U] = 0U;
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_cfg_rdata[4U] = 0U;
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_cfg_rdata[5U] = 0U;
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_cfg_rdata[6U] = 0U;
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_cfg_rdata[7U] = 0U;
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_cfg_rdata[8U] = 0U;
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_cfg_rdata[9U] = 0U;
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_cfg_rdata[10U] = 0U;
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_cfg_rdata[11U] = 0U;
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_cfg_rdata[12U] = 0U;
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_cfg_rdata[13U] = 0U;
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_cfg_rdata[14U] = 0U;
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_cfg_rdata[15U] = 0U;
    (void)VL_VALUEPLUSARGS_INI(1, "show_mem_paths=%0b"s, 
                               vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_ram__DOT__u_ram__DOT__gen_generic__DOT__u_impl_generic__DOT__unnamedblk3__DOT__show_mem_paths);
    if (VL_UNLIKELY((vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_ram__DOT__u_ram__DOT__gen_generic__DOT__u_impl_generic__DOT__unnamedblk3__DOT__show_mem_paths))) {
        VL_WRITEF_NX("%Ntop_verilator.u_ibex_demo_system.u_ram.u_ram.gen_generic.u_impl_generic.unnamedblk3\n",0,
                     vlSymsp->name());
    }
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_simulator_ctrl__DOT__log_fd 
        = VL_FOPEN_NN("ibex_demo_system.log"s, "w"s);
    ;
    (void)VL_VALUEPLUSARGS_INN(64, "UARTDPI_LOG_uart0=%s"s, 
                               vlSelfRef.top_verilator__DOT__u_uartdpi__DOT__log_file_path);
    Vtop_verilator___024root____Vdpiimwrap_top_verilator__DOT__u_uartdpi__DOT__uartdpi_create_TOP("uart0"s, vlSelfRef.top_verilator__DOT__u_uartdpi__DOT__log_file_path, __Vfunc_top_verilator__DOT__u_uartdpi__DOT__uartdpi_create__41__Vfuncout);
    vlSelfRef.top_verilator__DOT__u_uartdpi__DOT__ctx 
        = __Vfunc_top_verilator__DOT__u_uartdpi__DOT__uartdpi_create__41__Vfuncout;
}

VL_ATTR_COLD void Vtop_verilator___024root___eval_final__TOP(Vtop_verilator___024root* vlSelf);

VL_ATTR_COLD void Vtop_verilator___024root___eval_final(Vtop_verilator___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_verilator___024root___eval_final\n"); );
    Vtop_verilator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtop_verilator___024root___eval_final__TOP(vlSelf);
    Vtop_verilator___024root____Vm_traceActivitySetAll(vlSelf);
}

void Vtop_verilator___024root____Vdpiimwrap_top_verilator__DOT__u_uartdpi__DOT__uartdpi_close_TOP(QData/*63:0*/ ctx);

VL_ATTR_COLD void Vtop_verilator___024root___eval_final__TOP(Vtop_verilator___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_verilator___024root___eval_final__TOP\n"); );
    Vtop_verilator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_FCLOSE_I(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_simulator_ctrl__DOT__log_fd); Vtop_verilator___024root____Vdpiimwrap_top_verilator__DOT__u_uartdpi__DOT__uartdpi_close_TOP(vlSelfRef.top_verilator__DOT__u_uartdpi__DOT__ctx);
    vlSelfRef.top_verilator__DOT__u_uartdpi__DOT__ctx = 0ULL;
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop_verilator___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 2> &triggers, const std::string &tag);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vtop_verilator___024root___eval_phase__stl(Vtop_verilator___024root* vlSelf);

VL_ATTR_COLD void Vtop_verilator___024root___eval_settle(Vtop_verilator___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_verilator___024root___eval_settle\n"); );
    Vtop_verilator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VstlIterCount;
    // Body
    __VstlIterCount = 0U;
    vlSelfRef.__VstlFirstIteration = 1U;
    do {
        if (VL_UNLIKELY(((0x00000064U < __VstlIterCount)))) {
#ifdef VL_DEBUG
            Vtop_verilator___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
#endif
            VL_FATAL_MT("../src/lowrisc_ibex_demo_system_0/src/dv/verilator/top_verilator.sv", 6, "", "DIDNOTCONVERGE: Settle region did not converge after '--converge-limit' of 100 tries");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        vlSelfRef.__VstlPhaseResult = Vtop_verilator___024root___eval_phase__stl(vlSelf);
        vlSelfRef.__VstlFirstIteration = 0U;
    } while (vlSelfRef.__VstlPhaseResult);
}

VL_ATTR_COLD void Vtop_verilator___024root___eval_triggers_vec__stl(Vtop_verilator___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_verilator___024root___eval_triggers_vec__stl\n"); );
    Vtop_verilator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VstlTriggered[1U] = ((0xfffffffffffffffeULL 
                                      & vlSelfRef.__VstlTriggered[1U]) 
                                     | (IData)((IData)(vlSelfRef.__VstlFirstIteration)));
    vlSelfRef.__VstlTriggered[0U] = (QData)((IData)(
                                                    (((((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__clear_resumeack) 
                                                        != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__clear_resumeack__0)) 
                                                       << 3U) 
                                                      | (((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__id_in_ready_o) 
                                                          != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__id_in_ready_o__0)) 
                                                         << 2U)) 
                                                     | ((((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__special_req) 
                                                          != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__special_req__0)) 
                                                         << 1U) 
                                                        | ((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__instr_executing_spec) 
                                                           != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__instr_executing_spec__0))))));
    vlSelfRef.__Vtrigprevexpr___TOP__top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__instr_executing_spec__0 
        = vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__instr_executing_spec;
    vlSelfRef.__Vtrigprevexpr___TOP__top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__special_req__0 
        = vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__special_req;
    vlSelfRef.__Vtrigprevexpr___TOP__top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__id_in_ready_o__0 
        = vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__id_in_ready_o;
    vlSelfRef.__Vtrigprevexpr___TOP__top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__clear_resumeack__0 
        = vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__clear_resumeack;
    if (VL_UNLIKELY(((1U & (~ (IData)(vlSelfRef.__VstlDidInit)))))) {
        vlSelfRef.__VstlDidInit = 1U;
        vlSelfRef.__VstlTriggered[0U] = (1ULL | vlSelfRef.__VstlTriggered[0U]);
        vlSelfRef.__VstlTriggered[0U] = (2ULL | vlSelfRef.__VstlTriggered[0U]);
        vlSelfRef.__VstlTriggered[0U] = (4ULL | vlSelfRef.__VstlTriggered[0U]);
        vlSelfRef.__VstlTriggered[0U] = (8ULL | vlSelfRef.__VstlTriggered[0U]);
    }
}

VL_ATTR_COLD bool Vtop_verilator___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 2> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop_verilator___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 2> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_verilator___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(Vtop_verilator___024root___trigger_anySet__stl(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: @([hybrid] top_verilator.u_ibex_demo_system.u_top.u_ibex_core.id_stage_i.instr_executing_spec)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 1U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 1 is active: @([hybrid] top_verilator.u_ibex_demo_system.u_top.u_ibex_core.id_stage_i.controller_i.special_req)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 2U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 2 is active: @([hybrid] top_verilator.u_ibex_demo_system.u_top.u_ibex_core.id_stage_i.controller_i.id_in_ready_o)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 3U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 3 is active: @([hybrid] top_verilator.u_ibex_demo_system.gen_dm_top.u_dm_top.clear_resumeack)\n");
    }
    if ((1U & (IData)(triggers[1U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 64 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD bool Vtop_verilator___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 2> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_verilator___024root___trigger_anySet__stl\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        if (in[n]) {
            return (1U);
        }
        n = ((IData)(1U) + n);
    } while ((2U > n));
    return (0U);
}

extern const VlUnpacked<CData/*0:0*/, 256> Vtop_verilator__ConstPool__TABLE_h3835cecf_0;
extern const VlUnpacked<CData/*0:0*/, 256> Vtop_verilator__ConstPool__TABLE_h043f924d_0;
extern const VlUnpacked<CData/*0:0*/, 32> Vtop_verilator__ConstPool__TABLE_h4f814333_0;
extern const VlUnpacked<CData/*0:0*/, 32> Vtop_verilator__ConstPool__TABLE_h8a016367_0;
extern const VlUnpacked<CData/*0:0*/, 32> Vtop_verilator__ConstPool__TABLE_h102087e8_0;
extern const VlUnpacked<CData/*0:0*/, 32> Vtop_verilator__ConstPool__TABLE_h428df72f_0;
extern const VlUnpacked<IData/*31:0*/, 128> Vtop_verilator__ConstPool__TABLE_ha3c5110d_0;
extern const VlWide<40>/*1279:0*/ Vtop_verilator__ConstPool__CONST_h9127903b_0;
extern const VlUnpacked<CData/*0:0*/, 16> Vtop_verilator__ConstPool__TABLE_h977a12db_0;
extern const VlUnpacked<CData/*0:0*/, 16> Vtop_verilator__ConstPool__TABLE_h63159f31_0;
extern const VlUnpacked<CData/*0:0*/, 16> Vtop_verilator__ConstPool__TABLE_h2fa5ba49_0;
extern const VlUnpacked<CData/*0:0*/, 16> Vtop_verilator__ConstPool__TABLE_h089d0867_0;
extern const VlUnpacked<CData/*0:0*/, 16> Vtop_verilator__ConstPool__TABLE_h5308b01c_0;
extern const VlUnpacked<CData/*0:0*/, 16> Vtop_verilator__ConstPool__TABLE_hd01eafdf_0;
extern const VlUnpacked<CData/*0:0*/, 16> Vtop_verilator__ConstPool__TABLE_hae4f1d6f_0;
extern const VlUnpacked<CData/*3:0*/, 16> Vtop_verilator__ConstPool__TABLE_hd9609cc0_0;
extern const VlWide<16>/*511:0*/ Vtop_verilator__ConstPool__CONST_h7c8123e3_0;
extern const VlUnpacked<CData/*0:0*/, 256> Vtop_verilator__ConstPool__TABLE_h616256a8_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vtop_verilator__ConstPool__TABLE_h23304e2a_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vtop_verilator__ConstPool__TABLE_h2608d7a5_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vtop_verilator__ConstPool__TABLE_he65bff1b_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vtop_verilator__ConstPool__TABLE_h053660a6_0;
extern const VlUnpacked<CData/*0:0*/, 64> Vtop_verilator__ConstPool__TABLE_h139cf27b_0;
extern const VlUnpacked<CData/*0:0*/, 64> Vtop_verilator__ConstPool__TABLE_h611732e7_0;
extern const VlUnpacked<CData/*0:0*/, 64> Vtop_verilator__ConstPool__TABLE_h7b340f8b_0;
extern const VlUnpacked<CData/*0:0*/, 64> Vtop_verilator__ConstPool__TABLE_h27e1e6b7_0;
extern const VlUnpacked<CData/*0:0*/, 64> Vtop_verilator__ConstPool__TABLE_hac9147c9_0;
extern const VlUnpacked<CData/*0:0*/, 64> Vtop_verilator__ConstPool__TABLE_h1e2ce85a_0;
extern const VlUnpacked<CData/*3:0*/, 32> Vtop_verilator__ConstPool__TABLE_h9816e50e_0;
extern const VlUnpacked<CData/*0:0*/, 1024> Vtop_verilator__ConstPool__TABLE_h0c298502_0;

VL_ATTR_COLD void Vtop_verilator___024root___stl_sequent__TOP__0(Vtop_verilator___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_verilator___024root___stl_sequent__TOP__0\n"); );
    Vtop_verilator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT____VdfgExtracted_h39cfad6c__0;
    top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT____VdfgExtracted_h39cfad6c__0 = 0;
    CData/*0:0*/ top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT____VdfgExtracted_h79490129__0;
    top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT____VdfgExtracted_h79490129__0 = 0;
    CData/*0:0*/ top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT____VdfgRegularize_h72f67231_0_0;
    top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT____VdfgRegularize_h72f67231_0_0 = 0;
    QData/*33:0*/ __VdfgRegularize_he50b618e_0_2;
    __VdfgRegularize_he50b618e_0_2 = 0;
    CData/*5:0*/ __Vtableidx2;
    __Vtableidx2 = 0;
    CData/*6:0*/ __Vtableidx3;
    __Vtableidx3 = 0;
    CData/*6:0*/ __Vtableidx4;
    __Vtableidx4 = 0;
    SData/*9:0*/ __Vtableidx5;
    __Vtableidx5 = 0;
    CData/*6:0*/ __Vtableidx6;
    __Vtableidx6 = 0;
    CData/*4:0*/ __Vtableidx7;
    __Vtableidx7 = 0;
    CData/*7:0*/ __Vtableidx8;
    __Vtableidx8 = 0;
    CData/*7:0*/ __Vtableidx9;
    __Vtableidx9 = 0;
    CData/*4:0*/ __Vtableidx10;
    __Vtableidx10 = 0;
    CData/*3:0*/ __Vtableidx11;
    __Vtableidx11 = 0;
    CData/*7:0*/ __Vtableidx14;
    __Vtableidx14 = 0;
    CData/*6:0*/ __Vtableidx16;
    __Vtableidx16 = 0;
    // Body
    if ((0U != (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__command_q 
                >> 0x00000018U))) {
        if ((0U == (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__command_q 
                    >> 0x00000018U))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: dm_mem.sv:372: Assertion failed in %Ntop_verilator.u_ibex_demo_system.gen_dm_top.u_dm_top.i_dm_mem.p_abstract_cmd_rom: unique case, but multiple matches found for '8'h%x'\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),8,
                             (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__command_q 
                              >> 0x00000018U));
                VL_STOP_MT("../src/pulp_riscv_debug_module_0/src/vendor/pulp_riscv_dbg/src/dm_mem.sv", 372, "");
            }
        }
    }
    if ((1U & (~ VL_ONEHOT_I((((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__u_prim_sync_reqack__DOT__gen_rz_hs_protocol__DOT__src_fsm_q) 
                               << 1U) | (1U & (~ (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__u_prim_sync_reqack__DOT__gen_rz_hs_protocol__DOT__src_fsm_q)))))))) {
        if ((0U != (((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__u_prim_sync_reqack__DOT__gen_rz_hs_protocol__DOT__src_fsm_q) 
                     << 1U) | (1U & (~ (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__u_prim_sync_reqack__DOT__gen_rz_hs_protocol__DOT__src_fsm_q)))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: prim_sync_reqack.sv:79: Assertion failed in %Ntop_verilator.u_ibex_demo_system.gen_dm_top.u_dm_top.dap.i_dmi_cdc.i_cdc_req.u_prim_sync_reqack.gen_rz_hs_protocol.src_fsm: unique case, but multiple matches found for '1'h%x'\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),1,
                             (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__u_prim_sync_reqack__DOT__gen_rz_hs_protocol__DOT__src_fsm_q));
                VL_STOP_MT("../src/pulp_riscv_debug_module_0/src/vendor/lowrisc_ip/ip/prim/rtl/prim_sync_reqack.sv", 79, "");
            }
        }
    }
    if ((1U & (~ VL_ONEHOT_I((((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__u_prim_sync_reqack__DOT__gen_rz_hs_protocol__DOT__dst_fsm_q) 
                               << 1U) | (1U & (~ (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__u_prim_sync_reqack__DOT__gen_rz_hs_protocol__DOT__dst_fsm_q)))))))) {
        if ((0U != (((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__u_prim_sync_reqack__DOT__gen_rz_hs_protocol__DOT__dst_fsm_q) 
                     << 1U) | (1U & (~ (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__u_prim_sync_reqack__DOT__gen_rz_hs_protocol__DOT__dst_fsm_q)))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: prim_sync_reqack.sv:130: Assertion failed in %Ntop_verilator.u_ibex_demo_system.gen_dm_top.u_dm_top.dap.i_dmi_cdc.i_cdc_req.u_prim_sync_reqack.gen_rz_hs_protocol.dst_fsm: unique case, but multiple matches found for '1'h%x'\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),1,
                             (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__u_prim_sync_reqack__DOT__gen_rz_hs_protocol__DOT__dst_fsm_q));
                VL_STOP_MT("../src/pulp_riscv_debug_module_0/src/vendor/lowrisc_ip/ip/prim/rtl/prim_sync_reqack.sv", 130, "");
            }
        }
    }
    if ((1U & (~ VL_ONEHOT_I((((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__u_prim_sync_reqack__DOT__gen_rz_hs_protocol__DOT__src_fsm_q) 
                               << 1U) | (1U & (~ (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__u_prim_sync_reqack__DOT__gen_rz_hs_protocol__DOT__src_fsm_q)))))))) {
        if ((0U != (((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__u_prim_sync_reqack__DOT__gen_rz_hs_protocol__DOT__src_fsm_q) 
                     << 1U) | (1U & (~ (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__u_prim_sync_reqack__DOT__gen_rz_hs_protocol__DOT__src_fsm_q)))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: prim_sync_reqack.sv:79: Assertion failed in %Ntop_verilator.u_ibex_demo_system.gen_dm_top.u_dm_top.dap.i_dmi_cdc.i_cdc_resp.u_prim_sync_reqack.gen_rz_hs_protocol.src_fsm: unique case, but multiple matches found for '1'h%x'\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),1,
                             (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__u_prim_sync_reqack__DOT__gen_rz_hs_protocol__DOT__src_fsm_q));
                VL_STOP_MT("../src/pulp_riscv_debug_module_0/src/vendor/lowrisc_ip/ip/prim/rtl/prim_sync_reqack.sv", 79, "");
            }
        }
    }
    if ((1U & (~ VL_ONEHOT_I((((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__u_prim_sync_reqack__DOT__gen_rz_hs_protocol__DOT__dst_fsm_q) 
                               << 1U) | (1U & (~ (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__u_prim_sync_reqack__DOT__gen_rz_hs_protocol__DOT__dst_fsm_q)))))))) {
        if ((0U != (((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__u_prim_sync_reqack__DOT__gen_rz_hs_protocol__DOT__dst_fsm_q) 
                     << 1U) | (1U & (~ (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__u_prim_sync_reqack__DOT__gen_rz_hs_protocol__DOT__dst_fsm_q)))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: prim_sync_reqack.sv:130: Assertion failed in %Ntop_verilator.u_ibex_demo_system.gen_dm_top.u_dm_top.dap.i_dmi_cdc.i_cdc_resp.u_prim_sync_reqack.gen_rz_hs_protocol.dst_fsm: unique case, but multiple matches found for '1'h%x'\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),1,
                             (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__u_prim_sync_reqack__DOT__gen_rz_hs_protocol__DOT__dst_fsm_q));
                VL_STOP_MT("../src/pulp_riscv_debug_module_0/src/vendor/lowrisc_ip/ip/prim/rtl/prim_sync_reqack.sv", 130, "");
            }
        }
    }
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_bus__DOT__cfg_device_addr_base[0U] 
        = vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__cfg_device_addr_base[0U];
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_bus__DOT__cfg_device_addr_base[1U] 
        = vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__cfg_device_addr_base[1U];
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_bus__DOT__cfg_device_addr_base[2U] 
        = vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__cfg_device_addr_base[2U];
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_bus__DOT__cfg_device_addr_base[3U] 
        = vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__cfg_device_addr_base[3U];
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_bus__DOT__cfg_device_addr_base[4U] 
        = vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__cfg_device_addr_base[4U];
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_bus__DOT__cfg_device_addr_base[5U] 
        = vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__cfg_device_addr_base[5U];
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_bus__DOT__cfg_device_addr_base[6U] 
        = vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__cfg_device_addr_base[6U];
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_bus__DOT__cfg_device_addr_base[7U] 
        = vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__cfg_device_addr_base[7U];
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_bus__DOT__cfg_device_addr_mask[0U] 
        = vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__cfg_device_addr_mask[0U];
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_bus__DOT__cfg_device_addr_mask[1U] 
        = vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__cfg_device_addr_mask[1U];
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_bus__DOT__cfg_device_addr_mask[2U] 
        = vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__cfg_device_addr_mask[2U];
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_bus__DOT__cfg_device_addr_mask[3U] 
        = vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__cfg_device_addr_mask[3U];
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_bus__DOT__cfg_device_addr_mask[4U] 
        = vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__cfg_device_addr_mask[4U];
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_bus__DOT__cfg_device_addr_mask[5U] 
        = vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__cfg_device_addr_mask[5U];
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_bus__DOT__cfg_device_addr_mask[6U] 
        = vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__cfg_device_addr_mask[6U];
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_bus__DOT__cfg_device_addr_mask[7U] 
        = vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__cfg_device_addr_mask[7U];
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ic_tag_rdata_i[0U] 
        = vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__ic_tag_rdata[0U];
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ic_tag_rdata_i[1U] 
        = vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__ic_tag_rdata[1U];
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ic_data_rdata_i[0U] 
        = vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__ic_data_rdata[0U];
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ic_data_rdata_i[1U] 
        = vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__ic_data_rdata[1U];
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__ic_tag_rdata_i[0U] 
        = vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__ic_tag_rdata[0U];
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__ic_tag_rdata_i[1U] 
        = vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__ic_tag_rdata[1U];
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__ic_data_rdata_i[0U] 
        = vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__ic_data_rdata[0U];
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__ic_data_rdata_i[1U] 
        = vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__ic_data_rdata[1U];
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__imd_val_d_o[0U] 
        = vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_imd_val_d[0U];
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__imd_val_d_o[1U] 
        = vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_imd_val_d[1U];
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_pmp_cfg_o[0U] 
        = vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_pmp_cfg[0U];
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_pmp_cfg_o[1U] 
        = vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_pmp_cfg[1U];
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_pmp_cfg_o[2U] 
        = vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_pmp_cfg[2U];
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_pmp_cfg_o[3U] 
        = vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_pmp_cfg[3U];
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_pmp_addr_o[0U] 
        = vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_pmp_addr[0U];
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_pmp_addr_o[1U] 
        = vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_pmp_addr[1U];
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_pmp_addr_o[2U] 
        = vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_pmp_addr[2U];
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_pmp_addr_o[3U] 
        = vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_pmp_addr[3U];
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__unused_tag_ram_input[0U] 
        = vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__ic_tag_rdata[0U];
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__unused_tag_ram_input[1U] 
        = vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__ic_tag_rdata[1U];
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__unused_data_ram_input[0U] 
        = vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__ic_data_rdata[0U];
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__unused_data_ram_input[1U] 
        = vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__ic_data_rdata[1U];
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__g_no_pmp__DOT__unused_csr_pmp_addr[0U] 
        = vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_pmp_addr[0U];
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__g_no_pmp__DOT__unused_csr_pmp_addr[1U] 
        = vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_pmp_addr[1U];
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__g_no_pmp__DOT__unused_csr_pmp_addr[2U] 
        = vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_pmp_addr[2U];
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__g_no_pmp__DOT__unused_csr_pmp_addr[3U] 
        = vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_pmp_addr[3U];
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__g_no_pmp__DOT__unused_csr_pmp_cfg[0U] 
        = vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_pmp_cfg[0U];
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__g_no_pmp__DOT__unused_csr_pmp_cfg[1U] 
        = vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_pmp_cfg[1U];
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__g_no_pmp__DOT__unused_csr_pmp_cfg[2U] 
        = vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_pmp_cfg[2U];
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__g_no_pmp__DOT__unused_csr_pmp_cfg[3U] 
        = vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_pmp_cfg[3U];
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__tx_baud_counter_d 
        = ((0x01b1U == (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__tx_baud_counter_q))
            ? 0U : (0x000001ffU & ((IData)(1U) + (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__tx_baud_counter_q))));
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_set_cnt 
        = (0x00000080U & ((~ ((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q) 
                              >> 7U)) << 7U));
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_set_cnt 
        = (0x00000080U & ((~ ((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q) 
                              >> 7U)) << 7U));
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_set_cnt 
        = (0x00000080U & ((~ ((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q) 
                              >> 7U)) << 7U));
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_set_cnt 
        = (0x00000080U & ((~ ((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q) 
                              >> 7U)) << 7U));
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_set_cnt 
        = (0x00000080U & ((~ ((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q) 
                              >> 7U)) << 7U));
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_set_cnt 
        = (0x00000080U & ((~ ((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q) 
                              >> 7U)) << 7U));
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_spi_host__DOT__count_at_limit 
        = (1U <= (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_spi_host__DOT__count));
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_set_cnt 
        = (2U & ((~ ((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q) 
                     >> 1U)) << 1U));
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_set_cnt 
        = (2U & ((~ ((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q) 
                     >> 1U)) << 1U));
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__rx_bit_counter_d 
        = vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__rx_bit_counter_q;
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__tx_bit_counter_d 
        = vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__tx_bit_counter_q;
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__spi_tx_o = 1U;
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__byte_data_o = 0U;
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_spi_host__DOT__bit_counter_d 
        = vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_spi_host__DOT__bit_counter_q;
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__rst_core_n 
        = ((~ (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__dmcontrol_q 
               >> 1U)) & (IData)(vlSelfRef.rst_ni));
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT____Vcellinp__u_combined_rstn_sync__rst_ni 
        = ((IData)(vlSelfRef.rst_ni) & (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__jtag_combined_rstn));
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__err_d__BRA__1__KET__ 
        = (((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_q) 
            >> 2U) & (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__err_q__BRA__2__KET__));
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__err_d__BRA__0__KET__ 
        = (((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_q) 
            >> 1U) & (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__err_q__BRA__1__KET__));
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_spi_host__DOT__sck_pos 
        = ((~ (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_spi_host__DOT__sck)) 
           & (1U <= (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_spi_host__DOT__count)));
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_spi_host__DOT__sck_neg 
        = ((1U <= (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_spi_host__DOT__count)) 
           & (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_spi_host__DOT__sck));
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__rx_current_byte_d 
        = vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__rx_current_byte_q;
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_gpio__DOT__gen_debounce__BRA__0__KET____DOT__dbnc__DOT__btn_d 
        = (1U & ((0x01f4U <= (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_gpio__DOT__gen_debounce__BRA__0__KET____DOT__dbnc__DOT__cnt_q))
                  ? (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_gpio__DOT__gp_i_q 
                     >> 0x00000010U) : (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_gpio__DOT__gen_debounce__BRA__0__KET____DOT__dbnc__DOT__btn_q)));
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_gpio__DOT__gen_debounce__BRA__0__KET____DOT__dbnc__DOT__cnt_d 
        = ((((1U & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_gpio__DOT__gp_i_q 
                    >> 0x00000010U)) == (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_gpio__DOT__gen_debounce__BRA__0__KET____DOT__dbnc__DOT__btn_q)) 
            | (0x01f4U <= (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_gpio__DOT__gen_debounce__BRA__0__KET____DOT__dbnc__DOT__cnt_q)))
            ? 0U : (0x000001ffU & ((IData)(1U) + (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_gpio__DOT__gen_debounce__BRA__0__KET____DOT__dbnc__DOT__cnt_q))));
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_gpio__DOT__gen_debounce__BRA__1__KET____DOT__dbnc__DOT__btn_d 
        = (1U & ((0x01f4U <= (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_gpio__DOT__gen_debounce__BRA__1__KET____DOT__dbnc__DOT__cnt_q))
                  ? (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_gpio__DOT__gp_i_q 
                     >> 0x00000011U) : (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_gpio__DOT__gen_debounce__BRA__1__KET____DOT__dbnc__DOT__btn_q)));
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_gpio__DOT__gen_debounce__BRA__1__KET____DOT__dbnc__DOT__cnt_d 
        = ((((1U & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_gpio__DOT__gp_i_q 
                    >> 0x00000011U)) == (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_gpio__DOT__gen_debounce__BRA__1__KET____DOT__dbnc__DOT__btn_q)) 
            | (0x01f4U <= (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_gpio__DOT__gen_debounce__BRA__1__KET____DOT__dbnc__DOT__cnt_q)))
            ? 0U : (0x000001ffU & ((IData)(1U) + (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_gpio__DOT__gen_debounce__BRA__1__KET____DOT__dbnc__DOT__cnt_q))));
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_gpio__DOT__gen_debounce__BRA__2__KET____DOT__dbnc__DOT__btn_d 
        = (1U & ((0x01f4U <= (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_gpio__DOT__gen_debounce__BRA__2__KET____DOT__dbnc__DOT__cnt_q))
                  ? (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_gpio__DOT__gp_i_q 
                     >> 0x00000012U) : (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_gpio__DOT__gen_debounce__BRA__2__KET____DOT__dbnc__DOT__btn_q)));
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_gpio__DOT__gen_debounce__BRA__2__KET____DOT__dbnc__DOT__cnt_d 
        = ((((1U & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_gpio__DOT__gp_i_q 
                    >> 0x00000012U)) == (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_gpio__DOT__gen_debounce__BRA__2__KET____DOT__dbnc__DOT__btn_q)) 
            | (0x01f4U <= (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_gpio__DOT__gen_debounce__BRA__2__KET____DOT__dbnc__DOT__cnt_q)))
            ? 0U : (0x000001ffU & ((IData)(1U) + (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_gpio__DOT__gen_debounce__BRA__2__KET____DOT__dbnc__DOT__cnt_q))));
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_gpio__DOT__gen_debounce__BRA__3__KET____DOT__dbnc__DOT__btn_d 
        = (1U & ((0x01f4U <= (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_gpio__DOT__gen_debounce__BRA__3__KET____DOT__dbnc__DOT__cnt_q))
                  ? (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_gpio__DOT__gp_i_q 
                     >> 0x00000013U) : (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_gpio__DOT__gen_debounce__BRA__3__KET____DOT__dbnc__DOT__btn_q)));
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_gpio__DOT__gen_debounce__BRA__3__KET____DOT__dbnc__DOT__cnt_d 
        = ((((1U & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_gpio__DOT__gp_i_q 
                    >> 0x00000013U)) == (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_gpio__DOT__gen_debounce__BRA__3__KET____DOT__dbnc__DOT__btn_q)) 
            | (0x01f4U <= (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_gpio__DOT__gen_debounce__BRA__3__KET____DOT__dbnc__DOT__cnt_q)))
            ? 0U : (0x000001ffU & ((IData)(1U) + (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_gpio__DOT__gen_debounce__BRA__3__KET____DOT__dbnc__DOT__cnt_q))));
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_gpio__DOT__gen_debounce__BRA__4__KET____DOT__dbnc__DOT__btn_d 
        = (1U & ((0x01f4U <= (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_gpio__DOT__gen_debounce__BRA__4__KET____DOT__dbnc__DOT__cnt_q))
                  ? (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_gpio__DOT__gp_i_q 
                     >> 0x00000014U) : (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_gpio__DOT__gen_debounce__BRA__4__KET____DOT__dbnc__DOT__btn_q)));
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_gpio__DOT__gen_debounce__BRA__4__KET____DOT__dbnc__DOT__cnt_d 
        = ((((1U & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_gpio__DOT__gp_i_q 
                    >> 0x00000014U)) == (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_gpio__DOT__gen_debounce__BRA__4__KET____DOT__dbnc__DOT__btn_q)) 
            | (0x01f4U <= (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_gpio__DOT__gen_debounce__BRA__4__KET____DOT__dbnc__DOT__cnt_q)))
            ? 0U : (0x000001ffU & ((IData)(1U) + (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_gpio__DOT__gen_debounce__BRA__4__KET____DOT__dbnc__DOT__cnt_q))));
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_gpio__DOT__gen_debounce__BRA__5__KET____DOT__dbnc__DOT__btn_d 
        = (1U & ((0x01f4U <= (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_gpio__DOT__gen_debounce__BRA__5__KET____DOT__dbnc__DOT__cnt_q))
                  ? (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_gpio__DOT__gp_i_q 
                     >> 0x00000015U) : (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_gpio__DOT__gen_debounce__BRA__5__KET____DOT__dbnc__DOT__btn_q)));
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_gpio__DOT__gen_debounce__BRA__5__KET____DOT__dbnc__DOT__cnt_d 
        = ((((1U & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_gpio__DOT__gp_i_q 
                    >> 0x00000015U)) == (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_gpio__DOT__gen_debounce__BRA__5__KET____DOT__dbnc__DOT__btn_q)) 
            | (0x01f4U <= (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_gpio__DOT__gen_debounce__BRA__5__KET____DOT__dbnc__DOT__cnt_q)))
            ? 0U : (0x000001ffU & ((IData)(1U) + (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_gpio__DOT__gen_debounce__BRA__5__KET____DOT__dbnc__DOT__cnt_q))));
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_gpio__DOT__gen_debounce__BRA__6__KET____DOT__dbnc__DOT__btn_d 
        = (1U & ((0x01f4U <= (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_gpio__DOT__gen_debounce__BRA__6__KET____DOT__dbnc__DOT__cnt_q))
                  ? (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_gpio__DOT__gp_i_q 
                     >> 0x00000016U) : (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_gpio__DOT__gen_debounce__BRA__6__KET____DOT__dbnc__DOT__btn_q)));
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_gpio__DOT__gen_debounce__BRA__6__KET____DOT__dbnc__DOT__cnt_d 
        = ((((1U & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_gpio__DOT__gp_i_q 
                    >> 0x00000016U)) == (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_gpio__DOT__gen_debounce__BRA__6__KET____DOT__dbnc__DOT__btn_q)) 
            | (0x01f4U <= (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_gpio__DOT__gen_debounce__BRA__6__KET____DOT__dbnc__DOT__cnt_q)))
            ? 0U : (0x000001ffU & ((IData)(1U) + (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_gpio__DOT__gen_debounce__BRA__6__KET____DOT__dbnc__DOT__cnt_q))));
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_gpio__DOT__gen_debounce__BRA__7__KET____DOT__dbnc__DOT__btn_d 
        = (1U & ((0x01f4U <= (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_gpio__DOT__gen_debounce__BRA__7__KET____DOT__dbnc__DOT__cnt_q))
                  ? (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_gpio__DOT__gp_i_q 
                     >> 0x00000017U) : (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_gpio__DOT__gen_debounce__BRA__7__KET____DOT__dbnc__DOT__btn_q)));
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_gpio__DOT__gen_debounce__BRA__7__KET____DOT__dbnc__DOT__cnt_d 
        = ((((1U & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_gpio__DOT__gp_i_q 
                    >> 0x00000017U)) == (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_gpio__DOT__gen_debounce__BRA__7__KET____DOT__dbnc__DOT__btn_q)) 
            | (0x01f4U <= (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_gpio__DOT__gen_debounce__BRA__7__KET____DOT__dbnc__DOT__cnt_q)))
            ? 0U : (0x000001ffU & ((IData)(1U) + (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_gpio__DOT__gen_debounce__BRA__7__KET____DOT__dbnc__DOT__cnt_q))));
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__err 
        = ((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_q) 
           & (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__err_q__BRA__0__KET__));
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_hold = 0U;
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__tx_next_byte = 0U;
    if ((1U & (~ ((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__tx_state_q) 
                  >> 1U)))) {
        if ((1U & (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__tx_state_q))) {
            vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__tx_next_byte = 1U;
        }
    }
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__next_tx_byte_d = 0U;
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__rx_valid = 0U;
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__full_o 
        = ((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q) 
           == (0x80U ^ (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q)));
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__rx_start 
        = (IData)(((4U == (6U & (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__rx_q))) 
                   & (0U == (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__rx_state_q))));
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__wready_o 
        = ((~ (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__pending_q)) 
           & (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__not_in_reset_q));
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__lowest_free_entry__BRA__2__KET__ 
        = (IData)((2U == (6U & (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_q))));
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__full_o 
        = ((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q) 
           == (0x80U ^ (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q)));
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__fifo_empty 
        = ((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q) 
           == (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q));
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__fifo_empty 
        = ((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q) 
           == (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q));
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__lowest_free_entry__BRA__1__KET__ 
        = (IData)((1U == (3U & (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_q))));
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT____VdfgExtracted_h048ecfaa__0 
        = (1U & ((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__resuming_q) 
                 >> (1U & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__dmcontrol_q 
                           >> 0x00000010U))));
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__gen_normal_fifo__DOT__fifo_empty 
        = ((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q) 
           == (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q));
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__wready_o 
        = ((~ (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__pending_q)) 
           & (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__not_in_reset_q));
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__dst_req = 0U;
    if ((1U & (~ (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__u_prim_sync_reqack__DOT__gen_rz_hs_protocol__DOT__dst_fsm_q)))) {
        if (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__u_prim_sync_reqack__DOT__gen_rz_hs_protocol__DOT__dst_req) {
            vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__dst_req = 1U;
        }
    }
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT____VdfgRegularize_h68cd8b5a_0_7 
        = ((~ (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_fetch_err)) 
           & (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__instr_valid_id_q));
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT____VdfgRegularize_h6d1c0005_0_0 
        = ((0x20U <= (0x0000007fU & (IData)((vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__data_q 
                                             >> 0x00000022U)))) 
           & (0x27U >= (0x0000007fU & (IData)((vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__data_q 
                                               >> 0x00000022U)))));
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT____VdfgRegularize_h6d1c0005_0_1 
        = ((((0x16U == (0x0000007fU & (IData)((vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__data_q 
                                               >> 0x00000022U)))) 
             << 4U) | (((0x12U == (0x0000007fU & (IData)(
                                                         (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__data_q 
                                                          >> 0x00000022U)))) 
                        << 3U) | ((0x11U == (0x0000007fU 
                                             & (IData)(
                                                       (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__data_q 
                                                        >> 0x00000022U)))) 
                                  << 2U))) | (((0x10U 
                                                == 
                                                (0x0000007fU 
                                                 & (IData)(
                                                           (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__data_q 
                                                            >> 0x00000022U)))) 
                                               << 1U) 
                                              | ((4U 
                                                  <= 
                                                  (0x0000007fU 
                                                   & (IData)(
                                                             (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__data_q 
                                                              >> 0x00000022U)))) 
                                                 & (5U 
                                                    >= 
                                                    (0x0000007fU 
                                                     & (IData)(
                                                               (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__data_q 
                                                                >> 0x00000022U)))))));
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__sberror = 0U;
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__sberror_valid = 0U;
    if (((2U < (7U & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__sbcs_q 
                      >> 0x00000011U))) & (0U != (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_sba__DOT__state_q)))) {
        vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__sberror = 4U;
        vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__sberror_valid = 1U;
    }
    __Vtableidx8 = (0x0000007fU & (IData)((vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__data_q 
                                           >> 0x00000022U)));
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT____VdfgExtracted_h184edcfc__0 
        = Vtop_verilator__ConstPool__TABLE_h3835cecf_0
        [__Vtableidx8];
    __Vtableidx9 = (0x0000007fU & (IData)((vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__data_q 
                                           >> 0x00000022U)));
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT____VdfgExtracted_h45a04ee3__0 
        = Vtop_verilator__ConstPool__TABLE_h043f924d_0
        [__Vtableidx9];
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT____VdfgRegularize_hb899178c_0_2 
        = (1U & ((~ (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_q)) 
                 | (~ (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__err_q__BRA__0__KET__))));
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__dst_req = 0U;
    if ((1U & (~ (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__u_prim_sync_reqack__DOT__gen_rz_hs_protocol__DOT__dst_fsm_q)))) {
        if (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__u_prim_sync_reqack__DOT__gen_rz_hs_protocol__DOT__dst_req) {
            vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__dst_req = 1U;
        }
    }
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__full_o 
        = ((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q) 
           == (2U ^ (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q)));
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__device_rdata[0U] 
        = vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT____Vcellout__u_ram__a_rdata_o;
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__device_rdata[3U] 
        = vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__device_rdata_q;
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__device_rdata[4U] 
        = vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_timer__DOT__rdata_q;
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__in_valid_i 
        = ((~ (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__branch_discard_q)) 
           & (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__core_instr_rvalid));
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__device_err[4U] 
        = vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_timer__DOT__error_q;
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__device_rdata[1U] 
        = ((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_gpio__DOT__gp_i_dbnc_rd_en_q)
            ? ((((((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_gpio__DOT__gen_debounce__BRA__7__KET____DOT__dbnc__DOT__btn_q) 
                   << 3U) | ((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_gpio__DOT__gen_debounce__BRA__6__KET____DOT__dbnc__DOT__btn_q) 
                             << 2U)) | (((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_gpio__DOT__gen_debounce__BRA__5__KET____DOT__dbnc__DOT__btn_q) 
                                         << 1U) | (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_gpio__DOT__gen_debounce__BRA__4__KET____DOT__dbnc__DOT__btn_q))) 
                << 4U) | ((((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_gpio__DOT__gen_debounce__BRA__3__KET____DOT__dbnc__DOT__btn_q) 
                            << 3U) | ((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_gpio__DOT__gen_debounce__BRA__2__KET____DOT__dbnc__DOT__btn_q) 
                                      << 2U)) | (((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_gpio__DOT__gen_debounce__BRA__1__KET____DOT__dbnc__DOT__btn_q) 
                                                  << 1U) 
                                                 | (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_gpio__DOT__gen_debounce__BRA__0__KET____DOT__dbnc__DOT__btn_q))))
            : ((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_gpio__DOT__gp_i_rd_en_q)
                ? (0x000000ffU & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_gpio__DOT__gp_i_q 
                                  >> 0x00000010U)) : (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gp_o)));
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__full_o 
        = ((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q) 
           == (0x80U ^ (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q)));
    __Vtableidx10 = vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_jtag_tap__DOT__jtag_ir_q;
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__dmi_select 
        = Vtop_verilator__ConstPool__TABLE_h4f814333_0
        [__Vtableidx10];
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__dtmcs_select 
        = Vtop_verilator__ConstPool__TABLE_h8a016367_0
        [__Vtableidx10];
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_jtag_tap__DOT__idcode_select 
        = Vtop_verilator__ConstPool__TABLE_h102087e8_0
        [__Vtableidx10];
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_jtag_tap__DOT__bypass_select 
        = Vtop_verilator__ConstPool__TABLE_h428df72f_0
        [__Vtableidx10];
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_trigger_regs__DOT__tmatch_value_q[0U] 
        = vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_trigger_regs__DOT__g_dbg_tmatch_reg__BRA__0__KET____DOT__u_tmatch_value_csr__DOT__rdata_q;
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_trigger_regs__DOT__tmatch_value_q[1U] 
        = vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_trigger_regs__DOT__g_dbg_tmatch_reg__BRA__1__KET____DOT__u_tmatch_value_csr__DOT__rdata_q;
    __Vtableidx16 = vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mcause_csr__DOT__rdata_q;
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT____VdfgExtracted_h8790b315__0 
        = Vtop_verilator__ConstPool__TABLE_ha3c5110d_0
        [__Vtableidx16];
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter[0U] 
        = vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mcycle_counter_i__DOT__counter_q;
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter[2U] 
        = vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__minstret_counter_i__DOT__counter_q;
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter[3U] 
        = vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__0__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q;
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter[4U] 
        = vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__1__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q;
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter[5U] 
        = vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__2__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q;
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter[6U] 
        = vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__3__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q;
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter[7U] 
        = vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__4__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q;
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter[8U] 
        = vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__5__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q;
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter[9U] 
        = vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__6__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q;
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter[10U] 
        = vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__7__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q;
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter[11U] 
        = vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__8__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q;
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter[12U] 
        = vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__9__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q;
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__word_mux 
        = ((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__fwd_rom_q)
            ? ((0x14U > (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__gen_rom_snd_scratch__DOT__i_debug_rom__DOT__addr_q))
                ? ((0x04ffU >= ((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__gen_rom_snd_scratch__DOT__i_debug_rom__DOT__addr_q) 
                                << 6U)) ? (((QData)((IData)(Vtop_verilator__ConstPool__CONST_h9127903b_0
                                                            [
                                                            (((IData)(0x0000003fU) 
                                                              + 
                                                              ((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__gen_rom_snd_scratch__DOT__i_debug_rom__DOT__addr_q) 
                                                               << 6U)) 
                                                             >> 5U)])) 
                                            << ((0U 
                                                 == 
                                                 (0x0000001fU 
                                                  & ((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__gen_rom_snd_scratch__DOT__i_debug_rom__DOT__addr_q) 
                                                     << 6U)))
                                                 ? 0x00000020U
                                                 : 
                                                ((IData)(0x00000040U) 
                                                 - 
                                                 (0x0000001fU 
                                                  & ((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__gen_rom_snd_scratch__DOT__i_debug_rom__DOT__addr_q) 
                                                     << 6U))))) 
                                           | (((0U 
                                                == 
                                                (0x0000001fU 
                                                 & ((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__gen_rom_snd_scratch__DOT__i_debug_rom__DOT__addr_q) 
                                                    << 6U)))
                                                ? 0ULL
                                                : ((QData)((IData)(Vtop_verilator__ConstPool__CONST_h9127903b_0
                                                                   [
                                                                   (((IData)(0x0000001fU) 
                                                                     + 
                                                                     ((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__gen_rom_snd_scratch__DOT__i_debug_rom__DOT__addr_q) 
                                                                      << 6U)) 
                                                                    >> 5U)])) 
                                                   << 
                                                   ((IData)(0x00000020U) 
                                                    - 
                                                    (0x0000001fU 
                                                     & ((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__gen_rom_snd_scratch__DOT__i_debug_rom__DOT__addr_q) 
                                                        << 6U))))) 
                                              | ((QData)((IData)(Vtop_verilator__ConstPool__CONST_h9127903b_0
                                                                 [
                                                                 (0x07fffffeU 
                                                                  & ((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__gen_rom_snd_scratch__DOT__i_debug_rom__DOT__addr_q) 
                                                                     << 1U))])) 
                                                 >> 
                                                 (0x0000001fU 
                                                  & ((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__gen_rom_snd_scratch__DOT__i_debug_rom__DOT__addr_q) 
                                                     << 6U)))))
                    : 0ULL) : 0ULL) : vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__rdata_q);
    __Vtableidx11 = vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_jtag_tap__DOT__tap_state_q;
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_jtag_tap__DOT__test_logic_reset 
        = Vtop_verilator__ConstPool__TABLE_h977a12db_0
        [__Vtableidx11];
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_jtag_tap__DOT__capture_dr 
        = Vtop_verilator__ConstPool__TABLE_h63159f31_0
        [__Vtableidx11];
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_jtag_tap__DOT__shift_dr 
        = Vtop_verilator__ConstPool__TABLE_h2fa5ba49_0
        [__Vtableidx11];
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_jtag_tap__DOT__update_dr 
        = Vtop_verilator__ConstPool__TABLE_h089d0867_0
        [__Vtableidx11];
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_jtag_tap__DOT__capture_ir 
        = Vtop_verilator__ConstPool__TABLE_h5308b01c_0
        [__Vtableidx11];
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_jtag_tap__DOT__shift_ir 
        = Vtop_verilator__ConstPool__TABLE_hd01eafdf_0
        [__Vtableidx11];
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_jtag_tap__DOT__update_ir 
        = Vtop_verilator__ConstPool__TABLE_hae4f1d6f_0
        [__Vtableidx11];
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_jtag_tap__DOT__tap_state_d 
        = Vtop_verilator__ConstPool__TABLE_hd9609cc0_0
        [__Vtableidx11];
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__resume = 0U;
    if ((2U & (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__state_q))) {
        if ((1U & (~ (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__state_q)))) {
            vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__resume = 1U;
        }
        vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__go = 0U;
        if ((1U & (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__state_q))) {
            vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__go = 0U;
        }
    } else {
        vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__go = 0U;
        if ((1U & (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__state_q))) {
            vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__go = 1U;
        }
    }
    if ((2U & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__dmcontrol_q)) {
        vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__resume = 0U;
        vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__go = 0U;
    }
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_sba__DOT__be_mask = 0U;
    if ((1U & (~ (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__sbcs_q 
                  >> 0x00000013U)))) {
        vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_sba__DOT__be_mask 
            = ((0x00040000U & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__sbcs_q)
                ? 0x0fU : ((0x00020000U & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__sbcs_q)
                            ? ((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_sba__DOT__be_mask) 
                               | (0x0fU & ((IData)(3U) 
                                           << (2U & 
                                               ((IData)(
                                                        (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__sbaddr_q 
                                                         >> 1U)) 
                                                << 1U)))))
                            : ((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_sba__DOT__be_mask) 
                               | (0x0fU & ((IData)(1U) 
                                           << (3U & (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__sbaddr_q)))))));
    }
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__cmdbusy 
        = ((1U & ((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__state_q) 
                  >> 1U)) || (1U & (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__state_q)));
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__dbg_csr = 0U;
    if ((1U & (~ (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                  >> 0x0000001fU)))) {
        if ((0x40000000U & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id)) {
            if ((0x20000000U & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id)) {
                if ((0x10000000U & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id)) {
                    if ((0x08000000U & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id)) {
                        if ((1U & (~ (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                      >> 0x0000001aU)))) {
                            if ((0x02000000U & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id)) {
                                if ((0x01000000U & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id)) {
                                    if ((1U & (~ (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                  >> 0x00000017U)))) {
                                        if ((1U & (~ 
                                                   (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                    >> 0x00000016U)))) {
                                            vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__dbg_csr = 1U;
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT____VdfgExtracted_h39cfad6c__0 
        = ((0x03a0U == (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                        >> 0x00000014U)) | ((0x03a1U 
                                             == (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                 >> 0x00000014U)) 
                                            | ((0x03a2U 
                                                == 
                                                (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                 >> 0x00000014U)) 
                                               | ((0x03a3U 
                                                   == 
                                                   (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                    >> 0x00000014U)) 
                                                  | ((0x03b0U 
                                                      == 
                                                      (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                       >> 0x00000014U)) 
                                                     | ((0x03b1U 
                                                         == 
                                                         (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                          >> 0x00000014U)) 
                                                        | ((0x03b2U 
                                                            == 
                                                            (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                             >> 0x00000014U)) 
                                                           | ((0x03b3U 
                                                               == 
                                                               (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                                >> 0x00000014U)) 
                                                              | ((0x03b4U 
                                                                  == 
                                                                  (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                                   >> 0x00000014U)) 
                                                                 | ((0x03b5U 
                                                                     == 
                                                                     (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                                      >> 0x00000014U)) 
                                                                    | ((0x03b6U 
                                                                        == 
                                                                        (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                                         >> 0x00000014U)) 
                                                                       | ((0x03b7U 
                                                                           == 
                                                                           (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                                            >> 0x00000014U)) 
                                                                          | ((0x03b8U 
                                                                              == 
                                                                              (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                                               >> 0x00000014U)) 
                                                                             | ((0x03b9U 
                                                                                == 
                                                                                (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                                                >> 0x00000014U)) 
                                                                                | ((0x03baU 
                                                                                == 
                                                                                (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                                                >> 0x00000014U)) 
                                                                                | ((0x03bbU 
                                                                                == 
                                                                                (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                                                >> 0x00000014U)) 
                                                                                | ((0x03bcU 
                                                                                == 
                                                                                (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                                                >> 0x00000014U)) 
                                                                                | ((0x03bdU 
                                                                                == 
                                                                                (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                                                >> 0x00000014U)) 
                                                                                | ((0x03beU 
                                                                                == 
                                                                                (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                                                >> 0x00000014U)) 
                                                                                | (0x03bfU 
                                                                                == 
                                                                                (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                                                >> 0x00000014U)))))))))))))))))))));
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_sba__DOT__be_idx_masked 
        = (3U & ((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__sbaddr_q) 
                 & ((IData)(3U) << (7U & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__sbcs_q 
                                          >> 0x00000011U)))));
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_sba__DOT__we = 0U;
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__hartsel_o 
        = ((0x000ffc00U & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__dmcontrol_q 
                           << 4U)) | (0x000003ffU & 
                                      (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__dmcontrol_q 
                                       >> 0x00000010U)));
    top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT____VdfgExtracted_h79490129__0 
        = (IData)((0x0000100aU == (0x0000103fU & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__command_q)));
    top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT____VdfgRegularize_h72f67231_0_0 
        = ((3U > (7U & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__command_q 
                        >> 0x00000014U))) & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__command_q 
                                             >> 0x00000011U));
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__branch_set_i 
        = ((~ (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__branch_jump_set_done_q)) 
           & (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__g_branch_set_flop__DOT__branch_set_raw_q));
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ebreak_into_debug 
        = (1U & ((3U == (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__priv_lvl_q))
                  ? (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_dcsr_csr__DOT__rdata_q 
                     >> 0x0000000fU) : ((0U == (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__priv_lvl_q)) 
                                        & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_dcsr_csr__DOT__rdata_q 
                                           >> 0x0000000cU))));
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_trigger_regs__DOT__trigger_match 
        = ((((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_trigger_regs__DOT__g_dbg_tmatch_reg__BRA__1__KET____DOT__u_tmatch_control_csr__DOT__rdata_q) 
             & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_trigger_regs__DOT__g_dbg_tmatch_reg__BRA__1__KET____DOT__u_tmatch_value_csr__DOT__rdata_q 
                == (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__instr_addr_q 
                    << 1U))) << 1U) | ((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_trigger_regs__DOT__g_dbg_tmatch_reg__BRA__0__KET____DOT__u_tmatch_control_csr__DOT__rdata_q) 
                                       & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_trigger_regs__DOT__g_dbg_tmatch_reg__BRA__0__KET____DOT__u_tmatch_value_csr__DOT__rdata_q 
                                          == (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__instr_addr_q 
                                              << 1U))));
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__do_single_step_d 
        = (1U & ((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__instr_valid_id_q)
                  ? ((~ (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q)) 
                     & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_dcsr_csr__DOT__rdata_q 
                        >> 2U)) : (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__do_single_step_q)));
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__host_addr[1U] 
        = (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__sbaddr_q);
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_sba__DOT__req = 0U;
    if ((1U & (~ ((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_sba__DOT__state_q) 
                  >> 2U)))) {
        if ((2U & (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_sba__DOT__state_q))) {
            if ((1U & (~ (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_sba__DOT__state_q)))) {
                vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_sba__DOT__we = 1U;
                vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_sba__DOT__req = 1U;
            }
        } else if ((1U & (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_sba__DOT__state_q))) {
            vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_sba__DOT__req = 1U;
        }
    }
    if (((2U < (7U & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__sbcs_q 
                      >> 0x00000011U))) & (0U != (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_sba__DOT__state_q)))) {
        vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_sba__DOT__req = 0U;
    }
    if (((0U != ((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__sbaddr_q) 
                 & (~ ((IData)(0xffffffffU) << (7U 
                                                & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__sbcs_q 
                                                   >> 0x00000011U)))))) 
         & (0U != (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_sba__DOT__state_q)))) {
        vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__sberror = 3U;
        vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__sberror_valid = 1U;
        vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_sba__DOT__req = 0U;
    }
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__selected_hart 
        = (1U & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__dmcontrol_q 
                 >> 0x00000010U));
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__haltreq = 0U;
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__resumereq = 0U;
    if ((0U >= (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__selected_hart))) {
        vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT____Vlvbound_ha3173f0b__0 
            = (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__dmcontrol_q 
               >> 0x0000001fU);
        vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT____Vlvbound_hb3fbfe00__0 
            = (1U & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__dmcontrol_q 
                     >> 0x0000001eU));
        if (VL_LIKELY(((0U >= (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__selected_hart))))) {
            vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__haltreq 
                = (((~ ((IData)(1U) << (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__selected_hart))) 
                    & (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__haltreq)) 
                   | (1U & ((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT____Vlvbound_ha3173f0b__0) 
                            << (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__selected_hart))));
            vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__resumereq 
                = (((~ ((IData)(1U) << (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__selected_hart))) 
                    & (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__resumereq)) 
                   | (1U & ((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT____Vlvbound_hb3fbfe00__0) 
                            << (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__selected_hart))));
        }
    }
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__fifo_empty 
        = ((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q) 
           == (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q));
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_valid = 0U;
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__instr_fetch_err 
        = ((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__instr_valid_id_q) 
           & (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_fetch_err));
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__device_rvalid[0U] 
        = vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT____Vcellout__u_ram__a_rvalid_o;
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__device_rvalid[1U] 
        = vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT____Vcellout__u_gpio__device_rvalid_o;
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__device_rvalid[2U] 
        = vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT____Vcellout__u_pwm__device_rvalid_o;
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__device_rvalid[3U] 
        = vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__device_rvalid_q;
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__device_rvalid[4U] 
        = vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_timer__DOT__rvalid_q;
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__device_rvalid[5U] 
        = vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT____Vcellout__u_spi__device_rvalid_o;
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__device_rvalid[6U] 
        = vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT____Vcellout__u_simulator_ctrl__rvalid_o;
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__device_rvalid[7U] 
        = vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__dbg_device_rvalid;
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__imd_val_q_ex[0U] 
        = vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__imd_val_q[0U];
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__imd_val_q_ex[1U] 
        = vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__imd_val_q[1U];
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__lsu_addr_incr_req = 0U;
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[1U] 
        = vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__1__KET____DOT__rf_reg_q;
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[2U] 
        = vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__2__KET____DOT__rf_reg_q;
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[3U] 
        = vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__3__KET____DOT__rf_reg_q;
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[4U] 
        = vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__4__KET____DOT__rf_reg_q;
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[5U] 
        = vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__5__KET____DOT__rf_reg_q;
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[6U] 
        = vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__6__KET____DOT__rf_reg_q;
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[7U] 
        = vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__7__KET____DOT__rf_reg_q;
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[8U] 
        = vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__8__KET____DOT__rf_reg_q;
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[9U] 
        = vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__9__KET____DOT__rf_reg_q;
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[10U] 
        = vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__10__KET____DOT__rf_reg_q;
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[11U] 
        = vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__11__KET____DOT__rf_reg_q;
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[12U] 
        = vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__12__KET____DOT__rf_reg_q;
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[13U] 
        = vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__13__KET____DOT__rf_reg_q;
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[14U] 
        = vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__14__KET____DOT__rf_reg_q;
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[15U] 
        = vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__15__KET____DOT__rf_reg_q;
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[16U] 
        = vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__16__KET____DOT__rf_reg_q;
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[17U] 
        = vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__17__KET____DOT__rf_reg_q;
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[18U] 
        = vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__18__KET____DOT__rf_reg_q;
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[19U] 
        = vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__19__KET____DOT__rf_reg_q;
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[20U] 
        = vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__20__KET____DOT__rf_reg_q;
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[21U] 
        = vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__21__KET____DOT__rf_reg_q;
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[22U] 
        = vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__22__KET____DOT__rf_reg_q;
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[23U] 
        = vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__23__KET____DOT__rf_reg_q;
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[24U] 
        = vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__24__KET____DOT__rf_reg_q;
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[25U] 
        = vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__25__KET____DOT__rf_reg_q;
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[26U] 
        = vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__26__KET____DOT__rf_reg_q;
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[27U] 
        = vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__27__KET____DOT__rf_reg_q;
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[28U] 
        = vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__28__KET____DOT__rf_reg_q;
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[29U] 
        = vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__29__KET____DOT__rf_reg_q;
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[30U] 
        = vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__30__KET____DOT__rf_reg_q;
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[31U] 
        = vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__31__KET____DOT__rf_reg_q;
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT____VdfgExtracted_h4ba40d0d__0 
        = (0U != (((2U == (3U & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                 >> 0x0000000cU))) 
                   << 2U) | (((1U == (3U & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                            >> 0x0000000cU))) 
                              << 1U) | (0U == (3U & 
                                               (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                >> 0x0000000cU))))));
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__instr_first_cycle_i 
        = ((~ (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__id_fsm_q)) 
           & (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__instr_valid_id_q));
    if ((2U & (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__rx_state_q))) {
        if ((1U & (~ (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__rx_state_q)))) {
            if ((7U != (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__rx_bit_counter_q))) {
                vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__rx_bit_counter_d 
                    = (7U & ((IData)(1U) + (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__rx_bit_counter_q)));
            }
            vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__rx_current_byte_d 
                = ((0x00000080U & ((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__rx_q) 
                                   << 5U)) | (0x0000007fU 
                                              & ((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__rx_current_byte_q) 
                                                 >> 1U)));
        }
        if ((1U & (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__rx_state_q))) {
            if ((4U & (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__rx_q))) {
                vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__rx_valid = 1U;
            }
        }
    } else if ((1U & (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__rx_state_q))) {
        vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__rx_bit_counter_d = 0U;
        vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__rx_current_byte_d = 0U;
    }
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__fifo_incr_wptr 
        = (IData)(((((0x01b1U == (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__rx_baud_counter_q)) 
                     & (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__rx_valid)) 
                    & (~ (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__under_rst))) 
                   & (~ (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__full_o))));
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__rx_baud_counter_d 
        = ((0x01b1U == (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__rx_baud_counter_q))
            ? 0U : ((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__rx_start)
                     ? 0x000000d9U : (0x000001ffU & 
                                      ((IData)(1U) 
                                       + (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__rx_baud_counter_q)))));
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__rx_state_d 
        = vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__rx_state_q;
    if ((2U & (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__rx_state_q))) {
        if ((1U & (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__rx_state_q))) {
            vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__rx_state_d = 0U;
        } else if ((7U == (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__rx_bit_counter_q))) {
            vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__rx_state_d = 3U;
        }
    } else if ((1U & (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__rx_state_q))) {
        vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__rx_state_d 
            = ((4U & (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__rx_q))
                ? 0U : 2U);
    } else if (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__rx_start) {
        vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__rx_state_d = 1U;
    }
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__tx_current_byte_d 
        = vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__tx_current_byte_q;
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__rvalid_o 
        = (1U & ((~ (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__fifo_empty)) 
                 & (~ (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__under_rst))));
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_spi_host__DOT__current_byte_d 
        = vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_spi_host__DOT__current_byte_q;
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__rvalid_o 
        = (1U & ((~ (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__fifo_empty)) 
                 & (~ (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__under_rst))));
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__wvalid_i 
        = (1U & ((~ (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__gen_normal_fifo__DOT__fifo_empty)) 
                 & (~ (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__gen_normal_fifo__DOT__under_rst))));
    if (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__u_prim_sync_reqack__DOT__gen_rz_hs_protocol__DOT__dst_fsm_q) {
        vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__u_prim_sync_reqack__DOT__gen_rz_hs_protocol__DOT__dst_fsm_d = 1U;
        if ((1U & (~ (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__u_prim_sync_reqack__DOT__gen_rz_hs_protocol__DOT__dst_req)))) {
            vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__u_prim_sync_reqack__DOT__gen_rz_hs_protocol__DOT__dst_fsm_d = 0U;
        }
    } else {
        vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__u_prim_sync_reqack__DOT__gen_rz_hs_protocol__DOT__dst_fsm_d = 0U;
        if (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__u_prim_sync_reqack__DOT__gen_rz_hs_protocol__DOT__dst_req) {
            if (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__dst_req) {
                vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__u_prim_sync_reqack__DOT__gen_rz_hs_protocol__DOT__dst_fsm_d = 1U;
            }
        }
    }
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__rready_i 
        = (1U & ((~ (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__full_o)) 
                 & (~ (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__gen_normal_fifo__DOT__under_rst))));
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT____VdfgRegularize_hb899178c_0_7 
        = ((~ (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_q)) 
           & (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__in_valid_i));
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__entry_en__BRA__2__KET__ 
        = ((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__in_valid_i) 
           & (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__lowest_free_entry__BRA__2__KET__));
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT____VdfgRegularize_hb899178c_0_6 
        = ((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__in_valid_i) 
           & (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__lowest_free_entry__BRA__1__KET__));
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid 
        = (1U & ((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_q) 
                 | (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__in_valid_i)));
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_bus__DOT__device_err_i[0U] 
        = vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__device_err[0U];
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_bus__DOT__device_err_i[1U] 
        = vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__device_err[1U];
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_bus__DOT__device_err_i[2U] 
        = vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__device_err[2U];
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_bus__DOT__device_err_i[3U] 
        = vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__device_err[3U];
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_bus__DOT__device_err_i[4U] 
        = vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__device_err[4U];
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_bus__DOT__device_err_i[5U] 
        = vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__device_err[5U];
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_bus__DOT__device_err_i[6U] 
        = vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__device_err[6U];
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_bus__DOT__device_err_i[7U] 
        = vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__device_err[7U];
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__host_err[0U] 
        = ((1U & (~ (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_bus__DOT__host_sel_resp))) 
           && (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__device_err
               [vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_bus__DOT__device_sel_resp] 
               | (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_bus__DOT__decode_err_resp)));
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__host_err[1U] 
        = ((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_bus__DOT__host_sel_resp) 
           && (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__device_err
               [vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_bus__DOT__device_sel_resp] 
               | (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_bus__DOT__decode_err_resp)));
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__device_rdata[5U] 
        = ((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__read_status_q)
            ? (((0U == ((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__full_o)
                         ? 0x0000007fU : (0x0000007fU 
                                          & (((1U & 
                                               ((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q) 
                                                >> 7U)) 
                                              == (1U 
                                                  & ((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q) 
                                                     >> 7U)))
                                              ? ((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q) 
                                                 - (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q))
                                              : (((IData)(0x7fU) 
                                                  - (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q)) 
                                                 + (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q)))))) 
                << 1U) | (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__full_o))
            : 0U);
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__rdata_o 
        = ((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__word_enable32_q)
            ? (IData)((vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__word_mux 
                       >> 0x00000020U)) : (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__word_mux));
    if ((2U & (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__tx_state_q))) {
        vlSelfRef.top_verilator__DOT__uart_sys_tx = 
            (1U & ((1U & (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__tx_state_q)) 
                   || (1U & (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__tx_current_byte_q))));
        if ((1U & (~ (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__tx_state_q)))) {
            if ((7U != (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__tx_bit_counter_q))) {
                vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__tx_bit_counter_d 
                    = (7U & ((IData)(1U) + (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__tx_bit_counter_q)));
            }
            vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__tx_current_byte_d 
                = (0x0000007fU & ((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__tx_current_byte_q) 
                                  >> 1U));
        }
    } else {
        vlSelfRef.top_verilator__DOT__uart_sys_tx = 
            (1U & (~ (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__tx_state_q)));
        if ((1U & (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__tx_state_q))) {
            vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__tx_bit_counter_d = 0U;
            vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__tx_current_byte_d 
                = ((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__fifo_empty)
                    ? 0U : (0x000000ffU & (((0U == 
                                             (0x00000018U 
                                              & ((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q) 
                                                 << 3U)))
                                             ? 0U : 
                                            (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage
                                             [(((IData)(7U) 
                                                + (0x000003f8U 
                                                   & ((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q) 
                                                      << 3U))) 
                                               >> 5U)] 
                                             << ((IData)(0x00000020U) 
                                                 - 
                                                 (0x00000018U 
                                                  & ((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q) 
                                                     << 3U))))) 
                                           | (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage
                                              [(0x0000001fU 
                                                & ((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q) 
                                                   >> 2U))] 
                                              >> (0x00000018U 
                                                  & ((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q) 
                                                     << 3U))))));
        }
    }
    if ((2U & (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_spi_host__DOT__state_q))) {
        vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__spi_tx_o 
            = ((1U & (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_spi_host__DOT__state_q)) 
               || (1U & ((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_spi_host__DOT__current_byte_q) 
                         >> 7U)));
        if ((1U & (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_spi_host__DOT__state_q))) {
            vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__byte_data_o 
                = vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_spi_host__DOT__recieved_byte_q;
            vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__next_tx_byte_d = 1U;
        }
        if ((1U & (~ (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_spi_host__DOT__state_q)))) {
            if ((0U != (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_spi_host__DOT__bit_counter_q))) {
                vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_spi_host__DOT__bit_counter_d 
                    = (7U & ((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_spi_host__DOT__bit_counter_q) 
                             - (IData)(1U)));
            }
            vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_spi_host__DOT__current_byte_d 
                = (0x000000feU & ((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_spi_host__DOT__current_byte_q) 
                                  << 1U));
        }
    } else {
        if ((1U & (~ (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_spi_host__DOT__state_q)))) {
            vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__spi_tx_o = 1U;
        }
        if ((1U & (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_spi_host__DOT__state_q))) {
            vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_spi_host__DOT__bit_counter_d = 7U;
            vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_spi_host__DOT__current_byte_d 
                = ((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__fifo_empty)
                    ? 0U : ((0x03f7U >= (0x000003f8U 
                                         & ((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q) 
                                            << 3U)))
                             ? (0x000000ffU & (((0U 
                                                 == 
                                                 (0x00000018U 
                                                  & ((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q) 
                                                     << 3U)))
                                                 ? 0U
                                                 : 
                                                (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage
                                                 [(
                                                   ((IData)(7U) 
                                                    + 
                                                    (0x000003f8U 
                                                     & ((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q) 
                                                        << 3U))) 
                                                   >> 5U)] 
                                                 << 
                                                 ((IData)(0x00000020U) 
                                                  - 
                                                  (0x00000018U 
                                                   & ((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q) 
                                                      << 3U))))) 
                                               | (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage
                                                  [
                                                  (0x0000001fU 
                                                   & ((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q) 
                                                      >> 2U))] 
                                                  >> 
                                                  (0x00000018U 
                                                   & ((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q) 
                                                      << 3U)))))
                             : 0U));
        }
    }
    if ((4U & (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__ls_fsm_cs))) {
        if ((1U & (~ ((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__ls_fsm_cs) 
                      >> 1U)))) {
            if ((1U & (~ (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__ls_fsm_cs)))) {
                vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__lsu_addr_incr_req = 1U;
            }
        }
    } else if ((2U & (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__ls_fsm_cs))) {
        vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__lsu_addr_incr_req 
            = ((1U & (~ (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__ls_fsm_cs))) 
               || (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__handle_misaligned_q));
    }
    if ((4U & (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__md_state_q))) {
        if ((2U & (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__md_state_q))) {
            if ((1U & (~ (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__md_state_q)))) {
                vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_hold = 0U;
                vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_valid = 1U;
            }
        }
    }
    if (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_jtag_tap__DOT__shift_ir) {
        vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_jtag_tap__DOT__tdo_mux 
            = (1U & (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_jtag_tap__DOT__jtag_ir_shift_q));
    } else {
        vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_jtag_tap__DOT__tdo_mux 
            = (1U & ((1U == (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_jtag_tap__DOT__jtag_ir_q))
                      ? vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_jtag_tap__DOT__idcode_q
                      : ((0x10U == (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_jtag_tap__DOT__jtag_ir_q))
                          ? vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__dtmcs_q
                          : ((0x11U == (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_jtag_tap__DOT__jtag_ir_q))
                              ? (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__dr_q)
                              : (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_jtag_tap__DOT__bypass_q)))));
        if (VL_UNLIKELY(((1U & (~ VL_ONEHOT_I((((0x11U 
                                                 == (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_jtag_tap__DOT__jtag_ir_q)) 
                                                << 2U) 
                                               | (((0x10U 
                                                    == (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_jtag_tap__DOT__jtag_ir_q)) 
                                                   << 1U) 
                                                  | (1U 
                                                     == (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_jtag_tap__DOT__jtag_ir_q)))))))))) {
            if ((0U != (((0x11U == (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_jtag_tap__DOT__jtag_ir_q)) 
                         << 2U) | (((0x10U == (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_jtag_tap__DOT__jtag_ir_q)) 
                                    << 1U) | (1U == (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_jtag_tap__DOT__jtag_ir_q)))))) {
                if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                    VL_WRITEF_NX("[%0t] %%Error: dmi_jtag_tap.sv:176: Assertion failed in %Ntop_verilator.u_ibex_demo_system.gen_dm_top.u_dm_top.dap.i_dmi_jtag_tap.p_out_sel: unique case, but multiple matches found for '5'h%x'\n",0,
                                 64,VL_TIME_UNITED_Q(1),
                                 -12,vlSymsp->name(),
                                 5,(IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_jtag_tap__DOT__jtag_ir_q));
                    VL_STOP_MT("../src/pulp_riscv_debug_module_0/src/vendor/pulp_riscv_dbg/src/dmi_jtag_tap.sv", 176, "");
                }
            }
        }
    }
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__dtmcs_d 
        = vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__dtmcs_q;
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_jtag_tap__DOT__jtag_ir_shift_d 
        = vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_jtag_tap__DOT__jtag_ir_shift_q;
    if (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_jtag_tap__DOT__shift_ir) {
        vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_jtag_tap__DOT__jtag_ir_shift_d 
            = (0x0000000fU & ((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_jtag_tap__DOT__jtag_ir_shift_q) 
                              >> 1U));
    }
    if (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_jtag_tap__DOT__capture_ir) {
        vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_jtag_tap__DOT__jtag_ir_shift_d = 5U;
    }
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_jtag_tap__DOT__jtag_ir_d 
        = vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_jtag_tap__DOT__jtag_ir_q;
    if (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_jtag_tap__DOT__update_ir) {
        vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_jtag_tap__DOT__jtag_ir_d 
            = vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_jtag_tap__DOT__jtag_ir_shift_q;
    }
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_jtag_tap__DOT__idcode_d 
        = vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_jtag_tap__DOT__idcode_q;
    if (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_jtag_tap__DOT__capture_dr) {
        if (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__dtmcs_select) {
            vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__dtmcs_d 
                = (0x00001071U | ((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__error_q) 
                                  << 0x0000000aU));
        }
        if (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_jtag_tap__DOT__idcode_select) {
            vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_jtag_tap__DOT__idcode_d = 0x11001cdfU;
        }
    }
    if (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_jtag_tap__DOT__shift_dr) {
        if (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__dtmcs_select) {
            vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__dtmcs_d 
                = (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__dtmcs_q 
                   >> 1U);
        }
        if (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_jtag_tap__DOT__idcode_select) {
            vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_jtag_tap__DOT__idcode_d 
                = (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_jtag_tap__DOT__idcode_q 
                   >> 1U);
        }
    }
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_jtag_tap__DOT__bypass_d 
        = vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_jtag_tap__DOT__bypass_q;
    if (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_jtag_tap__DOT__capture_dr) {
        if (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_jtag_tap__DOT__bypass_select) {
            vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_jtag_tap__DOT__bypass_d = 0U;
        }
    }
    if (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_jtag_tap__DOT__shift_dr) {
        if (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_jtag_tap__DOT__bypass_select) {
            vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_jtag_tap__DOT__bypass_d = 0U;
        }
    }
    if (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_jtag_tap__DOT__test_logic_reset) {
        vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_jtag_tap__DOT__jtag_ir_shift_d = 0U;
        vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_jtag_tap__DOT__jtag_ir_d = 1U;
        vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_jtag_tap__DOT__idcode_d = 0x11001cdfU;
        vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_jtag_tap__DOT__bypass_d = 0U;
    }
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__jtag_dmi_cdc_clear_i 
        = ((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_jtag_tap__DOT__test_logic_reset) 
           | ((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__dtmcs_select) 
              & ((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_jtag_tap__DOT__update_dr) 
                 & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__dtmcs_q 
                    >> 0x00000011U))));
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_sba__DOT__be = 0U;
    if ((1U & (~ ((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_sba__DOT__state_q) 
                  >> 2U)))) {
        if ((2U & (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_sba__DOT__state_q))) {
            if ((1U & (~ (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_sba__DOT__state_q)))) {
                vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_sba__DOT__be 
                    = vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_sba__DOT__be_mask;
            }
        } else if ((1U & (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_sba__DOT__state_q))) {
            vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_sba__DOT__be 
                = vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_sba__DOT__be_mask;
        }
    }
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__illegal_csr = 0U;
    if ((vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
         >> 0x0000001fU)) {
        if ((0x40000000U & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id)) {
            if ((0x20000000U & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id)) {
                if ((0x10000000U & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id)) {
                    if ((0x08000000U & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id)) {
                        vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__illegal_csr = 1U;
                    } else if ((0x04000000U & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id)) {
                        vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__illegal_csr = 1U;
                    } else if ((0x02000000U & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id)) {
                        vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__illegal_csr = 1U;
                    } else if ((0x01000000U & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id)) {
                        if ((0x00800000U & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id)) {
                            vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__illegal_csr = 1U;
                        } else if ((0x00400000U & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id)) {
                            if ((0x00200000U & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id)) {
                                vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__illegal_csr = 1U;
                            }
                        } else if ((1U & (~ (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                             >> 0x00000015U)))) {
                            if ((1U & (~ (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                          >> 0x00000014U)))) {
                                vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__illegal_csr = 1U;
                            }
                        }
                    } else {
                        vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__illegal_csr = 1U;
                    }
                } else {
                    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__illegal_csr = 1U;
                }
            } else {
                vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__illegal_csr = 1U;
            }
        } else if ((0x20000000U & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id)) {
            if ((0x10000000U & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id)) {
                if ((0x08000000U & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id)) {
                    if ((0x04000000U & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id)) {
                        vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__illegal_csr = 1U;
                    } else if ((0x02000000U & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id)) {
                        vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__illegal_csr = 1U;
                    } else if ((1U & (~ (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                         >> 0x00000018U)))) {
                        if ((1U & (~ (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                      >> 0x00000017U)))) {
                            if ((1U & (~ (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                          >> 0x00000016U)))) {
                                if ((1U & (~ (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                              >> 0x00000015U)))) {
                                    if ((0x00100000U 
                                         & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id)) {
                                        vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__illegal_csr = 1U;
                                    }
                                }
                            }
                        }
                    }
                } else if ((0x04000000U & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id)) {
                    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__illegal_csr = 1U;
                } else if ((0x02000000U & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id)) {
                    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__illegal_csr = 1U;
                } else if ((1U & (~ (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                     >> 0x00000018U)))) {
                    if ((1U & (~ (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                  >> 0x00000017U)))) {
                        if ((1U & (~ (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                      >> 0x00000016U)))) {
                            if ((1U & (~ (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                          >> 0x00000015U)))) {
                                if ((0x00100000U & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id)) {
                                    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__illegal_csr = 1U;
                                }
                            }
                        }
                    }
                }
            } else {
                vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__illegal_csr = 1U;
            }
        } else {
            vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__illegal_csr = 1U;
        }
    } else if ((0x40000000U & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id)) {
        if ((0x20000000U & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id)) {
            if ((0x10000000U & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id)) {
                if ((0x08000000U & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id)) {
                    if ((0x04000000U & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id)) {
                        if ((0x02000000U & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id)) {
                            vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__illegal_csr = 1U;
                        } else if ((0x01000000U & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id)) {
                            vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__illegal_csr = 1U;
                        } else if ((0x00800000U & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id)) {
                            vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__illegal_csr = 1U;
                        } else if ((0x00400000U & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id)) {
                            vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__illegal_csr = 1U;
                        } else if ((0x00200000U & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id)) {
                            vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__illegal_csr = 1U;
                        }
                    } else if ((0x02000000U & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id)) {
                        if ((0x01000000U & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id)) {
                            if ((0x00800000U & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id)) {
                                vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__illegal_csr = 1U;
                            } else if ((0x00400000U 
                                        & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id)) {
                                vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__illegal_csr = 1U;
                            }
                        } else {
                            vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__illegal_csr 
                                = (1U & ((0x00800000U 
                                          & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id)
                                          ? ((1U & 
                                              (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                               >> 0x00000016U)) 
                                             || (1U 
                                                 & ((0x00200000U 
                                                     & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id)
                                                     ? 
                                                    (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                     >> 0x00000014U)
                                                     : 
                                                    (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                     >> 0x00000014U))))
                                          : (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                             >> 0x00000016U)));
                        }
                    } else {
                        vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__illegal_csr = 1U;
                    }
                } else {
                    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__illegal_csr = 1U;
                }
            } else {
                vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__illegal_csr = 1U;
            }
        } else {
            vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__illegal_csr 
                = ((1U & (~ (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                             >> 0x0000001cU))) || (
                                                   (1U 
                                                    & (~ 
                                                       (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                        >> 0x0000001bU))) 
                                                   || ((1U 
                                                        & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                           >> 0x0000001aU)) 
                                                       || ((1U 
                                                            & (~ 
                                                               (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                                >> 0x00000019U))) 
                                                           || ((1U 
                                                                & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                                   >> 0x00000018U)) 
                                                               || ((1U 
                                                                    & (~ 
                                                                       (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                                        >> 0x00000017U))) 
                                                                   || ((1U 
                                                                        & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                                           >> 0x00000016U)) 
                                                                       || ((1U 
                                                                            & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                                               >> 0x00000015U)) 
                                                                           || (1U 
                                                                               & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                                                >> 0x00000014U))))))))));
        }
    } else if ((0x20000000U & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id)) {
        if ((0x10000000U & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id)) {
            if ((0x08000000U & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id)) {
                if ((0x04000000U & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id)) {
                    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__illegal_csr = 1U;
                } else if ((0x02000000U & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id)) {
                    if ((1U & (~ (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                  >> 0x00000018U)))) {
                        if ((0x00800000U & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id)) {
                            vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__illegal_csr = 1U;
                        } else if ((0x00400000U & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id)) {
                            vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__illegal_csr = 1U;
                        }
                    }
                } else {
                    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__illegal_csr = 1U;
                }
            } else if ((0x04000000U & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id)) {
                if ((0x02000000U & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id)) {
                    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__illegal_csr = 1U;
                } else if ((0x01000000U & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id)) {
                    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__illegal_csr = 1U;
                } else if ((0x00800000U & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id)) {
                    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__illegal_csr = 1U;
                } else if ((0x00400000U & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id)) {
                    if ((0x00200000U & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id)) {
                        vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__illegal_csr = 1U;
                    } else if ((0x00100000U & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id)) {
                        vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__illegal_csr = 1U;
                    }
                }
            } else if ((0x02000000U & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id)) {
                if ((1U & (~ (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                              >> 0x00000018U)))) {
                    if ((1U & (~ (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                  >> 0x00000017U)))) {
                        if ((1U & (~ (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                      >> 0x00000016U)))) {
                            if ((0x00200000U & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id)) {
                                if ((1U & (~ (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                              >> 0x00000014U)))) {
                                    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__illegal_csr = 1U;
                                }
                            } else if ((0x00100000U 
                                        & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id)) {
                                vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__illegal_csr = 1U;
                            }
                        }
                    }
                }
            } else if ((0x01000000U & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id)) {
                if ((0x00800000U & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id)) {
                    if ((0x00400000U & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id)) {
                        vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__illegal_csr = 1U;
                    } else if ((0x00200000U & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id)) {
                        if ((0x00100000U & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id)) {
                            vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__illegal_csr = 1U;
                        }
                    } else {
                        vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__illegal_csr = 1U;
                    }
                } else if ((0x00400000U & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id)) {
                    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__illegal_csr = 1U;
                } else if ((0x00200000U & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id)) {
                    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__illegal_csr = 1U;
                } else if ((0x00100000U & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id)) {
                    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__illegal_csr = 1U;
                }
            } else if ((0x00800000U & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id)) {
                if ((0x00400000U & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id)) {
                    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__illegal_csr = 1U;
                } else if ((0x00200000U & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id)) {
                    if ((0x00100000U & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id)) {
                        vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__illegal_csr = 1U;
                    }
                } else {
                    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__illegal_csr = 1U;
                }
            } else if ((0x00400000U & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id)) {
                if ((0x00200000U & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id)) {
                    if ((0x00100000U & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id)) {
                        vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__illegal_csr = 1U;
                    }
                }
            } else if ((0x00200000U & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id)) {
                vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__illegal_csr = 1U;
            }
        } else {
            vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__illegal_csr = 1U;
        }
    } else {
        vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__illegal_csr = 1U;
    }
    if (top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT____VdfgExtracted_h39cfad6c__0) {
        vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__illegal_csr = 1U;
    }
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__host_wdata[1U] 
        = VL_SHIFTL_III(32,32,32, (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__sbdata_q), 
                        VL_SHIFTL_III(32,32,32, (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_sba__DOT__be_idx_masked), 3U));
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__host_we[1U] 
        = vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_sba__DOT__we;
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__halted = 0U;
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__haltsum0 = 0U;
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__hartsel_idx0 
        = (0x00007fffU & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__hartsel_o 
                          >> 5U));
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__halted 
        = ((0xfffffffeU & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__halted) 
           | (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__halted_q));
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__halted_reshaped0 
        = vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__halted;
    if ((1U > (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__hartsel_idx0))) {
        vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__haltsum0 
            = (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__halted_reshaped0 
               >> (0x0000001fU & VL_SHIFTL_III(5,32,32, (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__hartsel_idx0), 5U)));
    }
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__unsupported_command = 0U;
    VL_ASSIGN_W(512, vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__abstract_cmd, Vtop_verilator__ConstPool__CONST_h7c8123e3_0);
    if ((0U == (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__command_q 
                >> 0x00000018U))) {
        if (((IData)(top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT____VdfgRegularize_h72f67231_0_0) 
             & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__command_q 
                >> 0x00000010U))) {
            vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__abstract_cmd[0U] = 0x7b351073U;
            if ((0U != (3U & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__command_q 
                              >> 0x0000000eU)))) {
                vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__abstract_cmd[0U] = 0x00100073U;
                vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__unsupported_command = 1U;
            } else if (top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT____VdfgExtracted_h79490129__0) {
                vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__abstract_cmd[4U] = 0x7b241073U;
                vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__abstract_cmd[5U] 
                    = (0x38050403U | (0x00007000U & 
                                      (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__command_q 
                                       >> 8U)));
                vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__abstract_cmd[6U] = 0x7b341073U;
                vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__abstract_cmd[7U] = 0x7b202473U;
            } else if ((0x00001000U & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__command_q)) {
                vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__abstract_cmd[4U] 
                    = ((0x00000020U & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__command_q)
                        ? (0x38050007U | ((0x00007000U 
                                           & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__command_q 
                                              >> 8U)) 
                                          | (0x00000f80U 
                                             & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__command_q 
                                                << 7U))))
                        : (0x38050003U | ((0x00007000U 
                                           & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__command_q 
                                              >> 8U)) 
                                          | (0x00000f80U 
                                             & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__command_q 
                                                << 7U)))));
            } else {
                vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__abstract_cmd[4U] = 0x7b241073U;
                vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__abstract_cmd[5U] 
                    = (0x38050403U | (0x00007000U & 
                                      (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__command_q 
                                       >> 8U)));
                vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__abstract_cmd[6U] 
                    = (IData)((0x7b20247300000000ULL 
                               | (QData)((IData)((0x00041073U 
                                                  | (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__command_q 
                                                     << 0x00000014U))))));
                vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__abstract_cmd[7U] 
                    = (IData)(((0x7b20247300000000ULL 
                                | (QData)((IData)((0x00041073U 
                                                   | (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__command_q 
                                                      << 0x00000014U))))) 
                               >> 0x00000020U));
            }
        } else if (((~ (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__command_q 
                        >> 0x00000010U)) & (IData)(top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT____VdfgRegularize_h72f67231_0_0))) {
            vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__abstract_cmd[0U] = 0x7b351073U;
            if ((0U != (3U & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__command_q 
                              >> 0x0000000eU)))) {
                vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__abstract_cmd[0U] = 0x00100073U;
                vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__unsupported_command = 1U;
            } else if (top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT____VdfgExtracted_h79490129__0) {
                vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__abstract_cmd[4U] = 0x7b241073U;
                vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__abstract_cmd[5U] = 0x7b302473U;
                vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__abstract_cmd[6U] 
                    = (0x38850023U | (0x00007000U & 
                                      (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__command_q 
                                       >> 8U)));
                vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__abstract_cmd[7U] = 0x7b202473U;
            } else if ((0x00001000U & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__command_q)) {
                vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__abstract_cmd[4U] 
                    = ((0x00000020U & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__command_q)
                        ? (0x38050027U | ((0x01f00000U 
                                           & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__command_q 
                                              << 0x00000014U)) 
                                          | (0x00007000U 
                                             & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__command_q 
                                                >> 8U))))
                        : (0x38050023U | ((0x01f00000U 
                                           & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__command_q 
                                              << 0x00000014U)) 
                                          | (0x00007000U 
                                             & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__command_q 
                                                >> 8U)))));
            } else {
                vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__abstract_cmd[4U] 
                    = (IData)((0x000000007b241073ULL 
                               | ((QData)((IData)((0x00002473U 
                                                   | (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__command_q 
                                                      << 0x00000014U)))) 
                                  << 0x00000020U)));
                vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__abstract_cmd[5U] 
                    = (IData)(((0x000000007b241073ULL 
                                | ((QData)((IData)(
                                                   (0x00002473U 
                                                    | (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__command_q 
                                                       << 0x00000014U)))) 
                                   << 0x00000020U)) 
                               >> 0x00000020U));
                vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__abstract_cmd[6U] 
                    = (0x38850023U | (0x00007000U & 
                                      (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__command_q 
                                       >> 8U)));
                vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__abstract_cmd[7U] = 0x7b202473U;
            }
        } else if ((1U & ((3U <= (7U & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__command_q 
                                        >> 0x00000014U))) 
                          | (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__command_q 
                             >> 0x00000013U)))) {
            vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__abstract_cmd[0U] = 0x00100073U;
            vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__unsupported_command = 1U;
        }
        if ((1U & ((vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__command_q 
                    >> 0x00000012U) & (~ (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__unsupported_command))))) {
            vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__abstract_cmd[9U] = 0x00000013U;
        }
    } else {
        vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__abstract_cmd[0U] = 0x00100073U;
        vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__unsupported_command = 1U;
    }
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__host_req[1U] 
        = vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_sba__DOT__req;
    __Vtableidx14 = ((((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__halted_q) 
                       << 6U) | ((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__haltreq) 
                                 << 4U)) | ((8U & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__dmcontrol_q 
                                                   >> 0x0000000dU)) 
                                            | (((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__resumereq) 
                                                << 1U) 
                                               | (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT____VdfgExtracted_h048ecfaa__0))));
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT____VdfgExtracted_h2e4532f7__0 
        = Vtop_verilator__ConstPool__TABLE_h616256a8_0
        [__Vtableidx14];
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__enter_debug_mode_prio_d 
        = ((~ (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q)) 
           & ((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__haltreq) 
              | (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__do_single_step_d)));
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__rvalid_o 
        = (1U & ((~ (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__fifo_empty)) 
                 & (~ (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__under_rst))));
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_bus__DOT__device_rvalid_i[0U] 
        = vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__device_rvalid[0U];
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_bus__DOT__device_rvalid_i[1U] 
        = vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__device_rvalid[1U];
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_bus__DOT__device_rvalid_i[2U] 
        = vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__device_rvalid[2U];
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_bus__DOT__device_rvalid_i[3U] 
        = vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__device_rvalid[3U];
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_bus__DOT__device_rvalid_i[4U] 
        = vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__device_rvalid[4U];
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_bus__DOT__device_rvalid_i[5U] 
        = vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__device_rvalid[5U];
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_bus__DOT__device_rvalid_i[6U] 
        = vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__device_rvalid[6U];
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_bus__DOT__device_rvalid_i[7U] 
        = vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__device_rvalid[7U];
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__host_rvalid[0U] 
        = ((1U & (~ (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_bus__DOT__host_sel_resp))) 
           && (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__device_rvalid
               [vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_bus__DOT__device_sel_resp] 
               | (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_bus__DOT__decode_err_resp)));
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__host_rvalid[1U] 
        = ((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_bus__DOT__host_sel_resp) 
           && (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__device_rvalid
               [vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_bus__DOT__device_sel_resp] 
               | (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_bus__DOT__decode_err_resp)));
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__imd_val_q_ex_o[0U] 
        = vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__imd_val_q_ex[0U];
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__imd_val_q_ex_o[1U] 
        = vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__imd_val_q_ex[1U];
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__imd_val_q_i[0U] 
        = vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__imd_val_q_ex[0U];
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__imd_val_q_i[1U] 
        = vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__imd_val_q_ex[1U];
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__imd_val_q_i[0U] 
        = vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__imd_val_q_ex[0U];
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__imd_val_q_i[1U] 
        = vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__imd_val_q_ex[1U];
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_imd_val_q[0U] 
        = (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__imd_val_q_ex[0U]);
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_imd_val_q[1U] 
        = (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__imd_val_q_ex[1U]);
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__multdiv_alu_operand_a = 1ULL;
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_rf_rdata_a_ecc_buf__DOT__gen_generic__DOT__u_impl_generic__DOT__in_i 
        = vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg
        [(0x0000001fU & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                         >> 0x0000000fU))];
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_rf_rdata_b_ecc_buf__DOT__gen_generic__DOT__u_impl_generic__DOT__in_i 
        = vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg
        [(0x0000001fU & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                         >> 0x00000014U))];
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__jump_in_dec = 0U;
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__jump_set_dec = 0U;
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__branch_in_dec = 0U;
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__icache_inval = 0U;
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__multdiv_operator = 0U;
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__multdiv_signed_mode = 0U;
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__rf_wdata_sel = 0U;
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__rf_we = 0U;
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__rf_ren_a_dec = 0U;
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__rf_ren_b_dec = 0U;
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_access = 0U;
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__csr_illegal = 0U;
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__csr_op = 0U;
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__lsu_we = 0U;
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__lsu_type = 0U;
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__lsu_sign_ext = 0U;
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__lsu_req_dec = 0U;
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 0U;
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__ebrk_insn = 0U;
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__mret_insn_dec = 0U;
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__dret_insn_dec = 0U;
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__ecall_insn_dec = 0U;
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__wfi_insn_dec = 0U;
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode 
        = (0x0000007fU & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id);
    if ((4U & (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__md_state_q))) {
        if ((1U & (~ ((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__md_state_q) 
                      >> 1U)))) {
            vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__multdiv_alu_operand_a 
                = ((1U & (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__md_state_q))
                    ? 1ULL : (1ULL | ((QData)((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__imd_val_q_ex[0U])) 
                                      << 1U)));
        }
    } else {
        vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__multdiv_alu_operand_a 
            = ((2U & (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__md_state_q))
                ? ((1U & (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__md_state_q))
                    ? (1ULL | ((QData)((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__imd_val_q_ex[0U])) 
                               << 1U)) : 1ULL) : 1ULL);
    }
    if ((0x00000040U & (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
        if ((0x00000020U & (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
            if ((0x00000010U & (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
                if ((8U & (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
                    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
                } else if ((4U & (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
                    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
                } else if ((2U & (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
                    if ((1U & (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
                        if ((0U == (7U & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                          >> 0x0000000cU)))) {
                            if ((0U == (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                        >> 0x14U))) {
                                vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__ecall_insn_dec = 1U;
                            } else if ((1U == (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                               >> 0x14U))) {
                                vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__ebrk_insn = 1U;
                            } else if ((0x0302U == 
                                        (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                         >> 0x14U))) {
                                vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__mret_insn_dec = 1U;
                            } else if ((0x07b2U == 
                                        (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                         >> 0x14U))) {
                                vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__dret_insn_dec = 1U;
                            } else if ((0x0105U == 
                                        (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                         >> 0x14U))) {
                                vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__wfi_insn_dec = 1U;
                            } else {
                                vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
                            }
                            if ((1U & (~ VL_ONEHOT_I(
                                                     ((((0x0105U 
                                                         == 
                                                         (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                          >> 0x14U)) 
                                                        << 4U) 
                                                       | (((0x07b2U 
                                                            == 
                                                            (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                             >> 0x14U)) 
                                                           << 3U) 
                                                          | ((0x0302U 
                                                              == 
                                                              (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                               >> 0x14U)) 
                                                             << 2U))) 
                                                      | (((1U 
                                                           == 
                                                           (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                            >> 0x14U)) 
                                                          << 1U) 
                                                         | (0U 
                                                            == 
                                                            (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                             >> 0x14U)))))))) {
                                if ((0U != ((((0x0105U 
                                               == (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                   >> 0x00000014U)) 
                                              << 4U) 
                                             | (((0x07b2U 
                                                  == 
                                                  (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                   >> 0x00000014U)) 
                                                 << 3U) 
                                                | ((0x0302U 
                                                    == 
                                                    (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                     >> 0x00000014U)) 
                                                   << 2U))) 
                                            | (((1U 
                                                 == 
                                                 (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                  >> 0x00000014U)) 
                                                << 1U) 
                                               | (0U 
                                                  == 
                                                  (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                   >> 0x00000014U)))))) {
                                    if (VL_UNLIKELY((
                                                     vlSymsp->_vm_contextp__->assertOn()))) {
                                        VL_WRITEF_NX("[%0t] %%Error: ibex_decoder.sv:597: Assertion failed in %Ntop_verilator.u_ibex_demo_system.u_top.u_ibex_core.id_stage_i.decoder_i: unique case, but multiple matches found for '12'h%x'\n",0,
                                                     64,
                                                     VL_TIME_UNITED_Q(1),
                                                     -12,
                                                     vlSymsp->name(),
                                                     12,
                                                     (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                      >> 0x14U));
                                        VL_STOP_MT("../src/lowrisc_ibex_ibex_core_0.1/rtl/ibex_decoder.sv", 597, "");
                                    }
                                }
                            }
                            if ((IData)((0U != (0x000f8f80U 
                                                & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id)))) {
                                vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
                            }
                        } else {
                            vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_access = 1U;
                            vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__rf_wdata_sel = 1U;
                            vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__rf_we = 1U;
                            if ((1U & (~ (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                          >> 0x0000000eU)))) {
                                vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__rf_ren_a_dec = 1U;
                            }
                            if ((1U == (3U & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                              >> 0x0cU)))) {
                                vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__csr_op = 1U;
                            } else if ((2U == (3U & 
                                               (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                >> 0x0cU)))) {
                                vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__csr_op = 2U;
                            } else if ((3U == (3U & 
                                               (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                >> 0x0cU)))) {
                                vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__csr_op = 3U;
                            } else {
                                vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__csr_illegal = 1U;
                            }
                            if ((1U & (~ VL_ONEHOT_I(
                                                     (((3U 
                                                        == 
                                                        (3U 
                                                         & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                            >> 0x0cU))) 
                                                       << 2U) 
                                                      | (((2U 
                                                           == 
                                                           (3U 
                                                            & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                               >> 0x0cU))) 
                                                          << 1U) 
                                                         | (1U 
                                                            == 
                                                            (3U 
                                                             & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                                >> 0x0cU))))))))) {
                                if ((0U != (((3U == 
                                              (3U & 
                                               (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                >> 0x0000000cU))) 
                                             << 2U) 
                                            | (((2U 
                                                 == 
                                                 (3U 
                                                  & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                     >> 0x0000000cU))) 
                                                << 1U) 
                                               | (1U 
                                                  == 
                                                  (3U 
                                                   & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                      >> 0x0000000cU))))))) {
                                    if (VL_UNLIKELY((
                                                     vlSymsp->_vm_contextp__->assertOn()))) {
                                        VL_WRITEF_NX("[%0t] %%Error: ibex_decoder.sv:633: Assertion failed in %Ntop_verilator.u_ibex_demo_system.u_top.u_ibex_core.id_stage_i.decoder_i: unique case, but multiple matches found for '2'h%x'\n",0,
                                                     64,
                                                     VL_TIME_UNITED_Q(1),
                                                     -12,
                                                     vlSymsp->name(),
                                                     2,
                                                     (3U 
                                                      & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                         >> 0x0cU)));
                                        VL_STOP_MT("../src/lowrisc_ibex_ibex_core_0.1/rtl/ibex_decoder.sv", 633, "");
                                    }
                                }
                            }
                            vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn 
                                = vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__csr_illegal;
                        }
                    } else {
                        vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
                    }
                } else {
                    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
                }
            } else if ((8U & (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
                if ((4U & (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
                    if ((2U & (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
                        if ((1U & (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
                            vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__jump_in_dec = 1U;
                            if (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__instr_first_cycle_i) {
                                vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__rf_we = 0U;
                                vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__jump_set_dec = 1U;
                            } else {
                                vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__rf_we = 1U;
                            }
                        } else {
                            vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
                        }
                    } else {
                        vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
                    }
                } else {
                    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
                }
            } else if ((4U & (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
                if ((2U & (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
                    if ((1U & (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
                        vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__jump_in_dec = 1U;
                        if (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__instr_first_cycle_i) {
                            vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__rf_we = 0U;
                            vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__jump_set_dec = 1U;
                        } else {
                            vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__rf_we = 1U;
                        }
                        if ((0U != (7U & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                          >> 0x0000000cU)))) {
                            vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
                        }
                        vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__rf_ren_a_dec = 1U;
                    } else {
                        vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
                    }
                } else {
                    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
                }
            } else if ((2U & (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
                if ((1U & (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
                    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__branch_in_dec = 1U;
                    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn 
                        = ((1U & (~ (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                     >> 0x0000000eU))) 
                           && (1U & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                     >> 0x0000000dU)));
                    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__rf_ren_a_dec = 1U;
                    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__rf_ren_b_dec = 1U;
                } else {
                    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
                }
            } else {
                vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
            }
        } else {
            vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
        }
    } else if ((0x00000020U & (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
        if ((0x00000010U & (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
            if ((8U & (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
                vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
            } else if ((4U & (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
                if ((2U & (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
                    if ((1U & (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
                        vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__rf_we = 1U;
                    } else {
                        vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
                    }
                } else {
                    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
                }
            } else if ((2U & (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
                if ((1U & (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
                    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__rf_ren_a_dec = 1U;
                    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__rf_ren_b_dec = 1U;
                    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__rf_we = 1U;
                    if ((5U == ((4U & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                       >> 0x00000018U)) 
                                | (3U & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                         >> 0x0000000cU))))) {
                        vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
                    } else if ((vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                >> 0x0000001fU)) {
                        vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
                    } else if ((0x40000000U & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id)) {
                        vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn 
                            = ((1U & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                      >> 0x0000001dU)) 
                               || ((1U & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                          >> 0x0000001cU)) 
                                   || ((1U & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                              >> 0x0000001bU)) 
                                       || ((1U & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                  >> 0x0000001aU)) 
                                           || ((1U 
                                                & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                   >> 0x00000019U)) 
                                               || ((0x00004000U 
                                                    & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id)
                                                    ? 
                                                   ((1U 
                                                     & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                        >> 0x0000000dU)) 
                                                    || (1U 
                                                        & (~ 
                                                           (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                            >> 0x0000000cU))))
                                                    : 
                                                   ((1U 
                                                     & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                        >> 0x0000000dU)) 
                                                    || (1U 
                                                        & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                           >> 0x0000000cU)))))))));
                    } else if ((0x20000000U & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id)) {
                        vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
                    } else if ((0x10000000U & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id)) {
                        vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
                    } else if ((0x08000000U & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id)) {
                        vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
                    } else if ((0x04000000U & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id)) {
                        vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
                    } else if ((0x02000000U & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id)) {
                        if ((0x00004000U & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id)) {
                            if ((0x00002000U & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id)) {
                                if ((0x00001000U & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id)) {
                                    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__multdiv_operator = 3U;
                                    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__multdiv_signed_mode = 0U;
                                    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 0U;
                                } else {
                                    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__multdiv_operator = 3U;
                                    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__multdiv_signed_mode = 3U;
                                    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 0U;
                                }
                            } else if ((0x00001000U 
                                        & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id)) {
                                vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__multdiv_operator = 2U;
                                vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__multdiv_signed_mode = 0U;
                                vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 0U;
                            } else {
                                vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__multdiv_operator = 2U;
                                vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__multdiv_signed_mode = 3U;
                                vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 0U;
                            }
                        } else if ((0x00002000U & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id)) {
                            if ((0x00001000U & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id)) {
                                vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__multdiv_operator = 1U;
                                vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__multdiv_signed_mode = 0U;
                                vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 0U;
                            } else {
                                vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__multdiv_operator = 1U;
                                vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__multdiv_signed_mode = 1U;
                                vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 0U;
                            }
                        } else if ((0x00001000U & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id)) {
                            vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__multdiv_operator = 1U;
                            vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__multdiv_signed_mode = 3U;
                            vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 0U;
                        } else {
                            vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__multdiv_operator = 0U;
                            vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__multdiv_signed_mode = 0U;
                            vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 0U;
                        }
                    } else {
                        vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 0U;
                    }
                } else {
                    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
                }
            } else {
                vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
            }
        } else if ((8U & (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
            vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
        } else if ((4U & (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
            vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
        } else if ((2U & (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
            if ((1U & (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
                vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__rf_ren_a_dec = 1U;
                vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__rf_ren_b_dec = 1U;
                vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__lsu_req_dec = 1U;
                vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__lsu_we = 1U;
                if ((0x00004000U & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id)) {
                    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
                }
                if ((1U & (~ VL_ONEHOT_I((((2U == (3U 
                                                   & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                      >> 0x0cU))) 
                                           << 2U) | 
                                          (((1U == 
                                             (3U & 
                                              (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                               >> 0x0cU))) 
                                            << 1U) 
                                           | (0U == 
                                              (3U & 
                                               (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                >> 0x0cU))))))))) {
                    if (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT____VdfgExtracted_h4ba40d0d__0) {
                        if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                            VL_WRITEF_NX("[%0t] %%Error: ibex_decoder.sv:309: Assertion failed in %Ntop_verilator.u_ibex_demo_system.u_top.u_ibex_core.id_stage_i.decoder_i: unique case, but multiple matches found for '2'h%x'\n",0,
                                         64,VL_TIME_UNITED_Q(1),
                                         -12,vlSymsp->name(),
                                         2,(3U & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                  >> 0x0cU)));
                            VL_STOP_MT("../src/lowrisc_ibex_ibex_core_0.1/rtl/ibex_decoder.sv", 309, "");
                        }
                    }
                }
                if ((0U == (3U & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                  >> 0x0cU)))) {
                    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__lsu_type = 2U;
                } else if ((1U == (3U & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                         >> 0x0cU)))) {
                    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__lsu_type = 1U;
                } else if ((2U == (3U & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                         >> 0x0cU)))) {
                    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__lsu_type = 0U;
                } else {
                    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
                }
            } else {
                vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
            }
        } else {
            vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
        }
    } else if ((0x00000010U & (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
        if ((8U & (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
            vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
        } else if ((4U & (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
            if ((2U & (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
                if ((1U & (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
                    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__rf_we = 1U;
                } else {
                    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
                }
            } else {
                vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
            }
        } else if ((2U & (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
            if ((1U & (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
                vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__rf_ren_a_dec = 1U;
                vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__rf_we = 1U;
                vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn 
                    = ((0x00004000U & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id)
                        ? ((1U & (~ (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                     >> 0x0000000dU))) 
                           && ((1U & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                      >> 0x0000000cU)) 
                               && ((1U & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                          >> 0x0000001aU)) 
                                   || ((vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                        >> 0x0000001fU) 
                                       || ((0x40000000U 
                                            & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id)
                                            ? ((1U 
                                                & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                   >> 0x0000001dU)) 
                                               || ((1U 
                                                    & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                       >> 0x0000001cU)) 
                                                   || ((1U 
                                                        & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                           >> 0x0000001bU)) 
                                                       || (0U 
                                                           != 
                                                           (3U 
                                                            & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                               >> 0x00000019U))))))
                                            : ((1U 
                                                & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                   >> 0x0000001dU)) 
                                               || ((1U 
                                                    & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                       >> 0x0000001cU)) 
                                                   || ((1U 
                                                        & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                           >> 0x0000001bU)) 
                                                       || (0U 
                                                           != 
                                                           (3U 
                                                            & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                               >> 0x00000019U)))))))))))
                        : ((1U & (~ (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                     >> 0x0000000dU))) 
                           && ((1U & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                      >> 0x0000000cU)) 
                               && ((vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                    >> 0x0000001fU) 
                                   || ((1U & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                              >> 0x0000001eU)) 
                                       || ((1U & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                  >> 0x0000001dU)) 
                                           || ((1U 
                                                & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                   >> 0x0000001cU)) 
                                               || ((1U 
                                                    & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                       >> 0x0000001bU)) 
                                                   || (0U 
                                                       != 
                                                       (3U 
                                                        & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                           >> 0x00000019U)))))))))));
            } else {
                vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
            }
        } else {
            vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
        }
    } else if ((8U & (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
        if ((4U & (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
            if ((2U & (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
                if ((1U & (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
                    if ((0U == (7U & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                      >> 0x0cU)))) {
                        vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__rf_we = 0U;
                    } else if ((1U == (7U & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                             >> 0x0cU)))) {
                        vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__jump_in_dec = 1U;
                        vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__rf_we = 0U;
                        if (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__instr_first_cycle_i) {
                            vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__jump_set_dec = 1U;
                            vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__icache_inval = 1U;
                        }
                    } else {
                        vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
                    }
                    if ((1U & (~ VL_ONEHOT_I((((1U 
                                                == 
                                                (7U 
                                                 & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                    >> 0x0cU))) 
                                               << 1U) 
                                              | (0U 
                                                 == 
                                                 (7U 
                                                  & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                     >> 0x0cU)))))))) {
                        if ((0U != (((1U == (7U & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                   >> 0x0000000cU))) 
                                     << 1U) | (0U == 
                                               (7U 
                                                & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                   >> 0x0000000cU)))))) {
                            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                                VL_WRITEF_NX("[%0t] %%Error: ibex_decoder.sv:569: Assertion failed in %Ntop_verilator.u_ibex_demo_system.u_top.u_ibex_core.id_stage_i.decoder_i: unique case, but multiple matches found for '3'h%x'\n",0,
                                             64,VL_TIME_UNITED_Q(1),
                                             -12,vlSymsp->name(),
                                             3,(7U 
                                                & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                   >> 0x0cU)));
                                VL_STOP_MT("../src/lowrisc_ibex_ibex_core_0.1/rtl/ibex_decoder.sv", 569, "");
                            }
                        }
                    }
                } else {
                    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
                }
            } else {
                vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
            }
        } else {
            vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
        }
    } else if ((4U & (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
        vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
    } else if ((2U & (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
        if ((1U & (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
            vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__rf_ren_a_dec = 1U;
            vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__lsu_req_dec = 1U;
            vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__lsu_type = 0U;
            vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__lsu_sign_ext 
                = (1U & (~ (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                            >> 0x0000000eU)));
            if ((1U & (~ VL_ONEHOT_I((((2U == (3U & 
                                               (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                >> 0x0cU))) 
                                       << 2U) | (((1U 
                                                   == 
                                                   (3U 
                                                    & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                       >> 0x0cU))) 
                                                  << 1U) 
                                                 | (0U 
                                                    == 
                                                    (3U 
                                                     & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                        >> 0x0cU))))))))) {
                if (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT____VdfgExtracted_h4ba40d0d__0) {
                    if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                        VL_WRITEF_NX("[%0t] %%Error: ibex_decoder.sv:326: Assertion failed in %Ntop_verilator.u_ibex_demo_system.u_top.u_ibex_core.id_stage_i.decoder_i: unique case, but multiple matches found for '2'h%x'\n",0,
                                     64,VL_TIME_UNITED_Q(1),
                                     -12,vlSymsp->name(),
                                     2,(3U & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                              >> 0x0cU)));
                        VL_STOP_MT("../src/lowrisc_ibex_ibex_core_0.1/rtl/ibex_decoder.sv", 326, "");
                    }
                }
            }
            if ((0U == (3U & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                              >> 0x0cU)))) {
                vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__lsu_type = 2U;
            } else if ((1U == (3U & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                     >> 0x0cU)))) {
                vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__lsu_type = 1U;
            } else if ((2U == (3U & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                     >> 0x0cU)))) {
                vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__lsu_type = 0U;
                if ((0x00004000U & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id)) {
                    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
                }
            } else {
                vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
            }
        } else {
            vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
        }
    } else {
        vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
    }
    if (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__illegal_c_insn_id) {
        vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
    }
    if (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn) {
        vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__rf_we = 0U;
        vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__lsu_req_dec = 0U;
        vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__lsu_we = 0U;
        vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__jump_in_dec = 0U;
        vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__jump_set_dec = 0U;
        vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__branch_in_dec = 0U;
        vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_access = 0U;
    }
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operator = 0x2cU;
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_op_a_mux_sel_dec = 3U;
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_op_b_mux_sel_dec = 1U;
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__imm_a_mux_sel = 1U;
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__imm_b_mux_sel_dec = 0U;
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode_alu 
        = (0x0000007fU & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id);
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__mult_sel_ex = 0U;
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__div_sel_ex = 0U;
    if ((0x00000040U & (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode_alu))) {
        if ((0x00000020U & (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode_alu))) {
            if ((0x00000010U & (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode_alu))) {
                if ((1U & (~ ((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode_alu) 
                              >> 3U)))) {
                    if ((1U & (~ ((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode_alu) 
                                  >> 2U)))) {
                        if ((2U & (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode_alu))) {
                            if ((1U & (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode_alu))) {
                                if ((0U == (7U & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                  >> 0x0000000cU)))) {
                                    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_op_a_mux_sel_dec = 0U;
                                    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_op_b_mux_sel_dec = 1U;
                                } else {
                                    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__imm_a_mux_sel = 0U;
                                    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_op_a_mux_sel_dec 
                                        = ((0x00004000U 
                                            & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id)
                                            ? 3U : 0U);
                                }
                            }
                        }
                    }
                }
            } else if ((8U & (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode_alu))) {
                if ((4U & (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode_alu))) {
                    if ((2U & (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode_alu))) {
                        if ((1U & (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode_alu))) {
                            if (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__instr_first_cycle_i) {
                                vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_op_a_mux_sel_dec = 2U;
                                vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_op_b_mux_sel_dec = 1U;
                                vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__imm_b_mux_sel_dec = 4U;
                                vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operator = 0U;
                            } else {
                                vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_op_a_mux_sel_dec = 2U;
                                vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_op_b_mux_sel_dec = 1U;
                                vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__imm_b_mux_sel_dec = 5U;
                                vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operator = 0U;
                            }
                        }
                    }
                }
            } else if ((4U & (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode_alu))) {
                if ((2U & (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode_alu))) {
                    if ((1U & (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode_alu))) {
                        if (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__instr_first_cycle_i) {
                            vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_op_a_mux_sel_dec = 0U;
                            vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_op_b_mux_sel_dec = 1U;
                            vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__imm_b_mux_sel_dec = 0U;
                            vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operator = 0U;
                        } else {
                            vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_op_a_mux_sel_dec = 2U;
                            vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_op_b_mux_sel_dec = 1U;
                            vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__imm_b_mux_sel_dec = 5U;
                            vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operator = 0U;
                        }
                    }
                }
            } else if ((2U & (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode_alu))) {
                if ((1U & (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode_alu))) {
                    if ((0x00004000U & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id)) {
                        vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operator 
                            = ((0x00002000U & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id)
                                ? ((0x00001000U & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id)
                                    ? 0x1cU : 0x1aU)
                                : ((0x00001000U & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id)
                                    ? 0x1bU : 0x19U));
                    } else if ((1U & (~ (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                         >> 0x0000000dU)))) {
                        vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operator 
                            = ((0x00001000U & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id)
                                ? 0x1eU : 0x1dU);
                    }
                    if (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__instr_first_cycle_i) {
                        vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_op_a_mux_sel_dec = 0U;
                        vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_op_b_mux_sel_dec = 0U;
                    } else {
                        vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_op_a_mux_sel_dec = 2U;
                        vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_op_b_mux_sel_dec = 1U;
                        vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__imm_b_mux_sel_dec = 2U;
                        vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operator = 0U;
                    }
                }
            }
        }
    } else if ((0x00000020U & (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode_alu))) {
        if ((0x00000010U & (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode_alu))) {
            if ((1U & (~ ((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode_alu) 
                          >> 3U)))) {
                if ((4U & (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode_alu))) {
                    if ((2U & (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode_alu))) {
                        if ((1U & (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode_alu))) {
                            vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_op_a_mux_sel_dec = 3U;
                            vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_op_b_mux_sel_dec = 1U;
                            vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__imm_a_mux_sel = 1U;
                            vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__imm_b_mux_sel_dec = 3U;
                            vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operator = 0U;
                        }
                    }
                } else if ((2U & (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode_alu))) {
                    if ((1U & (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode_alu))) {
                        vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_op_a_mux_sel_dec = 0U;
                        vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_op_b_mux_sel_dec = 0U;
                        if ((1U & (~ (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                      >> 0x0000001aU)))) {
                            if ((1U & (~ (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                          >> 0x0000001fU)))) {
                                if ((0x40000000U & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id)) {
                                    if ((1U & (~ (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                  >> 0x0000001dU)))) {
                                        if ((1U & (~ 
                                                   (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                    >> 0x0000001cU)))) {
                                            if ((1U 
                                                 & (~ 
                                                    (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                     >> 0x0000001bU)))) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                         >> 0x0000001aU)))) {
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                             >> 0x00000019U)))) {
                                                        if (
                                                            (0x00004000U 
                                                             & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id)) {
                                                            if (
                                                                (1U 
                                                                 & (~ 
                                                                    (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                                     >> 0x0000000dU)))) {
                                                                if (
                                                                    (0x00001000U 
                                                                     & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id)) {
                                                                    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operator = 8U;
                                                                }
                                                            }
                                                        } else if (
                                                                   (1U 
                                                                    & (~ 
                                                                       (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                                        >> 0x0000000dU)))) {
                                                            if (
                                                                (1U 
                                                                 & (~ 
                                                                    (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                                     >> 0x0000000cU)))) {
                                                                vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operator = 1U;
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                } else if ((1U & (~ 
                                                  (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                   >> 0x0000001dU)))) {
                                    if ((1U & (~ (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                  >> 0x0000001cU)))) {
                                        if ((1U & (~ 
                                                   (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                    >> 0x0000001bU)))) {
                                            if ((1U 
                                                 & (~ 
                                                    (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                     >> 0x0000001aU)))) {
                                                if (
                                                    (0x02000000U 
                                                     & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id)) {
                                                    if (
                                                        (0x00004000U 
                                                         & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id)) {
                                                        if (
                                                            (0x00002000U 
                                                             & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id)) {
                                                            if (
                                                                (0x00001000U 
                                                                 & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id)) {
                                                                vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operator = 0U;
                                                                vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__div_sel_ex = 1U;
                                                            } else {
                                                                vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operator = 0U;
                                                                vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__div_sel_ex = 1U;
                                                            }
                                                        } else if (
                                                                   (0x00001000U 
                                                                    & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id)) {
                                                            vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operator = 0U;
                                                            vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__div_sel_ex = 1U;
                                                        } else {
                                                            vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operator = 0U;
                                                            vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__div_sel_ex = 1U;
                                                        }
                                                    } else if (
                                                               (0x00002000U 
                                                                & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id)) {
                                                        if (
                                                            (0x00001000U 
                                                             & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id)) {
                                                            vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operator = 0U;
                                                            vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__mult_sel_ex = 1U;
                                                        } else {
                                                            vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operator = 0U;
                                                            vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__mult_sel_ex = 1U;
                                                        }
                                                    } else if (
                                                               (0x00001000U 
                                                                & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id)) {
                                                        vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operator = 0U;
                                                        vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__mult_sel_ex = 1U;
                                                    } else {
                                                        vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operator = 0U;
                                                        vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__mult_sel_ex = 1U;
                                                    }
                                                } else {
                                                    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operator 
                                                        = 
                                                        ((0x00004000U 
                                                          & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id)
                                                          ? 
                                                         ((0x00002000U 
                                                           & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id)
                                                           ? 
                                                          ((0x00001000U 
                                                            & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id)
                                                            ? 4U
                                                            : 3U)
                                                           : 
                                                          ((0x00001000U 
                                                            & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id)
                                                            ? 9U
                                                            : 2U))
                                                          : 
                                                         ((0x00002000U 
                                                           & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id)
                                                           ? 
                                                          ((0x00001000U 
                                                            & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id)
                                                            ? 0x2cU
                                                            : 0x2bU)
                                                           : 
                                                          ((0x00001000U 
                                                            & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id)
                                                            ? 0x0aU
                                                            : 0U)));
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        } else if ((1U & (~ ((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode_alu) 
                             >> 3U)))) {
            if ((1U & (~ ((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode_alu) 
                          >> 2U)))) {
                if ((2U & (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode_alu))) {
                    if ((1U & (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode_alu))) {
                        vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_op_a_mux_sel_dec = 0U;
                        vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_op_b_mux_sel_dec = 0U;
                        vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operator = 0U;
                        if ((1U & (~ (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                      >> 0x0000000eU)))) {
                            vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__imm_b_mux_sel_dec = 1U;
                            vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_op_b_mux_sel_dec = 1U;
                        }
                    }
                }
            }
        }
    } else if ((0x00000010U & (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode_alu))) {
        if ((1U & (~ ((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode_alu) 
                      >> 3U)))) {
            if ((4U & (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode_alu))) {
                if ((2U & (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode_alu))) {
                    if ((1U & (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode_alu))) {
                        vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_op_a_mux_sel_dec = 2U;
                        vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_op_b_mux_sel_dec = 1U;
                        vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__imm_b_mux_sel_dec = 3U;
                        vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operator = 0U;
                    }
                }
            } else if ((2U & (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode_alu))) {
                if ((1U & (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode_alu))) {
                    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_op_a_mux_sel_dec = 0U;
                    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_op_b_mux_sel_dec = 1U;
                    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__imm_b_mux_sel_dec = 0U;
                    if ((0x00004000U & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id)) {
                        if ((0x00002000U & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id)) {
                            vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operator 
                                = ((0x00001000U & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id)
                                    ? 4U : 3U);
                        } else if ((0x00001000U & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id)) {
                            if ((0U == (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                        >> 0x0000001bU))) {
                                vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operator = 9U;
                            } else if ((8U == (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                               >> 0x0000001bU))) {
                                vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operator = 8U;
                            }
                        } else {
                            vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operator = 2U;
                        }
                    } else {
                        vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operator 
                            = ((0x00002000U & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id)
                                ? ((0x00001000U & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id)
                                    ? 0x2cU : 0x2bU)
                                : ((0x00001000U & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id)
                                    ? 0x0aU : 0U));
                    }
                }
            }
        }
    } else if ((8U & (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode_alu))) {
        if ((4U & (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode_alu))) {
            if ((2U & (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode_alu))) {
                if ((1U & (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode_alu))) {
                    if ((0U == (7U & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                      >> 0x0cU)))) {
                        vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operator = 0U;
                        vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_op_a_mux_sel_dec = 0U;
                        vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_op_b_mux_sel_dec = 1U;
                    } else if ((1U == (7U & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                             >> 0x0cU)))) {
                        vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_op_a_mux_sel_dec = 2U;
                        vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_op_b_mux_sel_dec = 1U;
                        vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__imm_b_mux_sel_dec = 5U;
                        vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operator = 0U;
                    }
                    if ((1U & (~ VL_ONEHOT_I((((1U 
                                                == 
                                                (7U 
                                                 & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                    >> 0x0cU))) 
                                               << 1U) 
                                              | (0U 
                                                 == 
                                                 (7U 
                                                  & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                     >> 0x0cU)))))))) {
                        if ((0U != (((1U == (7U & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                   >> 0x0000000cU))) 
                                     << 1U) | (0U == 
                                               (7U 
                                                & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                   >> 0x0000000cU)))))) {
                            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                                VL_WRITEF_NX("[%0t] %%Error: ibex_decoder.sv:1144: Assertion failed in %Ntop_verilator.u_ibex_demo_system.u_top.u_ibex_core.id_stage_i.decoder_i: unique case, but multiple matches found for '3'h%x'\n",0,
                                             64,VL_TIME_UNITED_Q(1),
                                             -12,vlSymsp->name(),
                                             3,(7U 
                                                & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                   >> 0x0cU)));
                                VL_STOP_MT("../src/lowrisc_ibex_ibex_core_0.1/rtl/ibex_decoder.sv", 1144, "");
                            }
                        }
                    }
                }
            }
        }
    } else if ((1U & (~ ((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode_alu) 
                         >> 2U)))) {
        if ((2U & (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode_alu))) {
            if ((1U & (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode_alu))) {
                vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_op_a_mux_sel_dec = 0U;
                vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operator = 0U;
                vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_op_b_mux_sel_dec = 1U;
                vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__imm_b_mux_sel_dec = 0U;
            }
        }
    }
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_set 
        = ((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__fifo_incr_wptr) 
           & (0x7fU == (0x0000007fU & (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q))));
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__tx_state_d 
        = vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__tx_state_q;
    if ((2U & (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__tx_state_q))) {
        if ((1U & (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__tx_state_q))) {
            vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__tx_state_d 
                = ((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__rvalid_o)
                    ? 1U : 0U);
        } else if ((7U == (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__tx_bit_counter_q))) {
            vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__tx_state_d = 3U;
        }
    } else if ((1U & (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__tx_state_q))) {
        vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__tx_state_d = 2U;
    } else if (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__rvalid_o) {
        vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__tx_state_d = 1U;
    }
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__fifo_incr_rptr 
        = ((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__rvalid_o) 
           & ((~ (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__under_rst)) 
              & ((0x01b1U == (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__tx_baud_counter_q)) 
                 & (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__tx_next_byte))));
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_spi_host__DOT__state_d 
        = vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_spi_host__DOT__state_q;
    if ((2U & (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_spi_host__DOT__state_q))) {
        if ((1U & (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_spi_host__DOT__state_q))) {
            vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_spi_host__DOT__state_d = 0U;
        } else if ((0U == (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_spi_host__DOT__bit_counter_q))) {
            vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_spi_host__DOT__state_d = 3U;
        }
    } else if ((1U & (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_spi_host__DOT__state_q))) {
        vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_spi_host__DOT__state_d = 2U;
    } else if (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__rvalid_o) {
        vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_spi_host__DOT__state_d = 1U;
    }
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__fifo_incr_rptr 
        = ((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__rvalid_o) 
           & ((~ (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__under_rst)) 
              & ((~ (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__next_tx_byte_q)) 
                 & (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__next_tx_byte_d))));
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__gen_normal_fifo__DOT__fifo_incr_rptr 
        = ((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__wvalid_i) 
           & ((~ (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__gen_normal_fifo__DOT__under_rst)) 
              & (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__wready_o)));
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__src_req 
        = ((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__pending_q) 
           | (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__wvalid_i));
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__wr_en 
        = ((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__wvalid_i) 
           & (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__wready_o));
    if (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__u_prim_sync_reqack__DOT__gen_rz_hs_protocol__DOT__dst_fsm_q) {
        vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__u_prim_sync_reqack__DOT__gen_rz_hs_protocol__DOT__dst_fsm_d = 1U;
        if ((1U & (~ (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__u_prim_sync_reqack__DOT__gen_rz_hs_protocol__DOT__dst_req)))) {
            vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__u_prim_sync_reqack__DOT__gen_rz_hs_protocol__DOT__dst_fsm_d = 0U;
        }
    } else {
        vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__u_prim_sync_reqack__DOT__gen_rz_hs_protocol__DOT__dst_fsm_d = 0U;
        if (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__u_prim_sync_reqack__DOT__gen_rz_hs_protocol__DOT__dst_req) {
            if (((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__dst_req) 
                 & (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__rready_i))) {
                vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__u_prim_sync_reqack__DOT__gen_rz_hs_protocol__DOT__dst_fsm_d = 1U;
            }
        }
    }
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__gen_normal_fifo__DOT__fifo_incr_wptr 
        = ((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__dst_req) 
           & ((~ (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__gen_normal_fifo__DOT__under_rst)) 
              & (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__rready_i)));
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_pushed__BRA__0__KET__ 
        = (1U & ((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT____VdfgRegularize_hb899178c_0_7) 
                 | (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_q)));
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_pushed__BRA__2__KET__ 
        = (IData)((((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_q) 
                    >> 2U) | (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__entry_en__BRA__2__KET__)));
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_pushed__BRA__1__KET__ 
        = (1U & ((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT____VdfgRegularize_hb899178c_0_6) 
                 | ((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_q) 
                    >> 1U)));
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_bus__DOT__host_err_o[0U] 
        = vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__host_err[0U];
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_bus__DOT__host_err_o[1U] 
        = vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__host_err[1U];
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__data_or_pmp_err 
        = ((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__lsu_err_q) 
           | (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__host_err[0U] 
              | (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__pmp_err_q)));
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__in_rdata_i 
        = ((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__core_instr_sel_dbg)
            ? vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__rdata_o
            : vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__mem_instr_rdata);
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__device_rdata[7U] 
        = vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__rdata_o;
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__error_dmi_busy = 0U;
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__error_dmi_op_failed = 0U;
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__state_d 
        = vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__state_q;
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__address_d 
        = vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__address_q;
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__data_d 
        = vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__data_q;
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__error_d 
        = vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__error_q;
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__dmi_req_valid = 0U;
    if (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__jtag_dmi_cdc_clear_i) {
        vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__state_d = 0U;
        vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__data_d = 0U;
        vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__error_d = 0U;
        vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__address_d = 0U;
    } else {
        if ((4U & (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__state_q))) {
            if ((2U & (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__state_q))) {
                if (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__dst_req) {
                    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__state_d = 0U;
                }
            } else if ((1U & (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__state_q))) {
                if (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__dst_req) {
                    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__state_d = 0U;
                }
            } else if (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__dst_req) {
                if ((2U == (3U & (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__data_q)))) {
                    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__error_dmi_op_failed = 1U;
                } else if ((3U == (3U & (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__data_q)))) {
                    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__error_dmi_busy = 1U;
                }
                if ((1U & (~ VL_ONEHOT_I((((3U == (3U 
                                                   & (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__data_q))) 
                                           << 1U) | 
                                          (2U == (3U 
                                                  & (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__data_q)))))))) {
                    if ((0U != (((3U == (3U & (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__data_q))) 
                                 << 1U) | (2U == (3U 
                                                  & (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__data_q)))))) {
                        if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                            VL_WRITEF_NX("[%0t] %%Error: dmi_jtag.sv:214: Assertion failed in %Ntop_verilator.u_ibex_demo_system.gen_dm_top.u_dm_top.dap.p_fsm: unique case, but multiple matches found for '2'h%x'\n",0,
                                         64,VL_TIME_UNITED_Q(1),
                                         -12,vlSymsp->name(),
                                         2,(3U & (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__data_q)));
                            VL_STOP_MT("../src/pulp_riscv_debug_module_0/src/vendor/pulp_riscv_dbg/src/dmi_jtag.sv", 214, "");
                        }
                    }
                }
                vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__state_d = 0U;
            }
        } else if ((2U & (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__state_q))) {
            if ((1U & (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__state_q))) {
                vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__dmi_req_valid = 1U;
                if (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__wready_o) {
                    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__state_d = 4U;
                }
            } else if (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__dst_req) {
                if ((0U == (3U & (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__data_q)))) {
                    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__data_d 
                        = (IData)((vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__data_q 
                                   >> 2U));
                } else if ((2U == (3U & (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__data_q)))) {
                    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__data_d = 0xdeadbeefU;
                    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__error_dmi_op_failed = 1U;
                } else if ((3U == (3U & (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__data_q)))) {
                    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__data_d = 0xb051b051U;
                    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__error_dmi_busy = 1U;
                } else {
                    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__data_d = 0xbaadc0deU;
                }
                if ((1U & (~ VL_ONEHOT_I((((3U == (3U 
                                                   & (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__data_q))) 
                                           << 2U) | 
                                          (((2U == 
                                             (3U & (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__data_q))) 
                                            << 1U) 
                                           | (0U == 
                                              (3U & (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__data_q))))))))) {
                    if ((0U != (((3U == (3U & (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__data_q))) 
                                 << 2U) | (((2U == 
                                             (3U & (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__data_q))) 
                                            << 1U) 
                                           | (0U == 
                                              (3U & (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__data_q))))))) {
                        if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                            VL_WRITEF_NX("[%0t] %%Error: dmi_jtag.sv:183: Assertion failed in %Ntop_verilator.u_ibex_demo_system.gen_dm_top.u_dm_top.dap.p_fsm: unique case, but multiple matches found for '2'h%x'\n",0,
                                         64,VL_TIME_UNITED_Q(1),
                                         -12,vlSymsp->name(),
                                         2,(3U & (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__data_q)));
                            VL_STOP_MT("../src/pulp_riscv_debug_module_0/src/vendor/pulp_riscv_dbg/src/dmi_jtag.sv", 183, "");
                        }
                    }
                }
                vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__state_d = 0U;
            }
        } else if ((1U & (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__state_q))) {
            vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__dmi_req_valid = 1U;
            if (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__wready_o) {
                vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__state_d = 2U;
            }
        } else if ((((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__dmi_select) 
                     & (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_jtag_tap__DOT__update_dr)) 
                    & (0U == (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__error_q)))) {
            vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__address_d 
                = (0x0000007fU & (IData)((vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__dr_q 
                                          >> 0x00000022U)));
            vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__data_d 
                = (IData)((vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__dr_q 
                           >> 2U));
            if ((1U == (3U & (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__dr_q)))) {
                vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__state_d = 1U;
            } else if ((2U == (3U & (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__dr_q)))) {
                vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__state_d = 3U;
            }
        }
        if (((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_jtag_tap__DOT__update_dr) 
             & (0U != (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__state_q)))) {
            vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__error_dmi_busy = 1U;
        }
        if (((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_jtag_tap__DOT__capture_dr) 
             & ((1U == (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__state_q)) 
                | (2U == (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__state_q))))) {
            vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__error_dmi_busy = 1U;
        }
        if (((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__error_dmi_busy) 
             & (0U == (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__error_q)))) {
            vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__error_d = 3U;
        }
        if (((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__error_dmi_op_failed) 
             & (0U == (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__error_q)))) {
            vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__error_d = 2U;
        }
        if ((((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_jtag_tap__DOT__update_dr) 
              & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__dtmcs_q 
                 >> 0x00000010U)) & (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__dtmcs_select))) {
            vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__error_d = 0U;
        }
    }
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__host_be[1U] 
        = vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_sba__DOT__be;
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__halted_flat1 = 0U;
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__haltsum1 = 0U;
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__hartsel_idx1 
        = (0x000003ffU & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__dmcontrol_q 
                          >> 6U));
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__halted_flat1 
        = ((0xfffffffeU & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__halted_flat1) 
           | (0U != vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__halted_reshaped0));
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__halted_reshaped1 
        = vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__halted_flat1;
    if ((1U > (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__hartsel_idx1))) {
        vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__haltsum1 
            = (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__halted_reshaped1 
               >> (0x0000001fU & VL_SHIFTL_III(5,32,32, (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__hartsel_idx1), 5U)));
    }
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0 = ((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__cmd_valid_q) 
                                                & (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__unsupported_command));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1 = ((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__cmd_valid_q) 
                                                & ((~ (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__unsupported_command)) 
                                                   & ((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__halted_q) 
                                                      >> 
                                                      (1U 
                                                       & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__dmcontrol_q 
                                                          >> 0x00000010U)))));
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__enter_debug_mode 
        = ((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__enter_debug_mode_prio_d) 
           | ((~ (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q)) 
              & (0U != (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_trigger_regs__DOT__trigger_match))));
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mip 
        = (((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_timer__DOT__interrupt_q) 
            << 0x00000010U) | (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__rvalid_o));
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_bus__DOT__host_rvalid_o[0U] 
        = vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__host_rvalid[0U];
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_bus__DOT__host_rvalid_o[1U] 
        = vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__host_rvalid[1U];
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__rdata_update = 0U;
    if ((4U & (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__ls_fsm_cs))) {
        if ((1U & (~ ((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__ls_fsm_cs) 
                      >> 1U)))) {
            if ((1U & (~ (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__ls_fsm_cs)))) {
                if (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__host_rvalid[0U]) {
                    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__rdata_update 
                        = (1U & (~ (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__data_we_q)));
                }
            }
        }
    } else if ((2U & (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__ls_fsm_cs))) {
        if ((1U & (~ (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__ls_fsm_cs)))) {
            if ((vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__host_rvalid[0U] 
                 | (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__pmp_err_q))) {
                vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__rdata_update 
                    = (1U & (~ (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__data_we_q)));
            }
        }
    }
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__fcov_mis_rvalid_1 
        = (((2U == (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__ls_fsm_cs)) 
            | (4U == (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__ls_fsm_cs))) 
           & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__host_rvalid[0U]);
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__fcov_mis_rvalid_2 
        = ((0U == (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__ls_fsm_cs)) 
           & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__host_rvalid[0U] 
              & (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__fcov_mis_2_en_q)));
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_sba__DOT__addr_incr_en = 0U;
    if ((4U & (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_sba__DOT__state_q))) {
        if ((1U & (~ ((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_sba__DOT__state_q) 
                      >> 1U)))) {
            if ((1U & (~ (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_sba__DOT__state_q)))) {
                if (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__host_rvalid[1U]) {
                    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_sba__DOT__addr_incr_en 
                        = (1U & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__sbcs_q 
                                 >> 0x00000010U));
                }
            }
        }
    } else if ((2U & (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_sba__DOT__state_q))) {
        if ((1U & (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_sba__DOT__state_q))) {
            if (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__host_rvalid[1U]) {
                vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_sba__DOT__addr_incr_en 
                    = (1U & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__sbcs_q 
                             >> 0x00000010U));
            }
        }
    }
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__lsu_resp_valid_i 
        = ((vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__host_rvalid[0U] 
            | (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__pmp_err_q)) 
           & (0U == (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__ls_fsm_cs)));
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__imd_val_q_i[0U] 
        = vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_imd_val_q[0U];
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__imd_val_q_i[1U] 
        = vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_imd_val_q[1U];
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__g_no_alu_rvb__DOT__unused_imd_val_q[0U] 
        = vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_imd_val_q[0U];
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__g_no_alu_rvb__DOT__unused_imd_val_q[1U] 
        = vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_imd_val_q[1U];
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__multdiv_alu_operand_b 
        = (1ULL | ((QData)((IData)((~ vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_rf_rdata_b_ecc_buf__DOT__gen_generic__DOT__u_impl_generic__DOT__in_i))) 
                   << 1U));
    if ((2U & (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__gen_mult_fast__DOT__mult_state_q))) {
        if ((1U & (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__gen_mult_fast__DOT__mult_state_q))) {
            vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__gen_mult_fast__DOT__mult_op_a 
                = (0x0000ffffU & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_rf_rdata_a_ecc_buf__DOT__gen_generic__DOT__u_impl_generic__DOT__in_i 
                                  >> 0x10U));
            vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__gen_mult_fast__DOT__mult_op_b 
                = (0x0000ffffU & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_rf_rdata_b_ecc_buf__DOT__gen_generic__DOT__u_impl_generic__DOT__in_i 
                                  >> 0x10U));
        } else {
            vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__gen_mult_fast__DOT__mult_op_a 
                = (0x0000ffffU & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_rf_rdata_a_ecc_buf__DOT__gen_generic__DOT__u_impl_generic__DOT__in_i 
                                  >> 0x10U));
            vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__gen_mult_fast__DOT__mult_op_b 
                = (0x0000ffffU & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_rf_rdata_b_ecc_buf__DOT__gen_generic__DOT__u_impl_generic__DOT__in_i);
        }
    } else {
        vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__gen_mult_fast__DOT__mult_op_a 
            = (0x0000ffffU & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_rf_rdata_a_ecc_buf__DOT__gen_generic__DOT__u_impl_generic__DOT__in_i);
        vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__gen_mult_fast__DOT__mult_op_b 
            = (0x0000ffffU & ((1U & (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__gen_mult_fast__DOT__mult_state_q))
                               ? (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_rf_rdata_b_ecc_buf__DOT__gen_generic__DOT__u_impl_generic__DOT__in_i 
                                  >> 0x10U) : vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_rf_rdata_b_ecc_buf__DOT__gen_generic__DOT__u_impl_generic__DOT__in_i));
    }
    if ((4U & (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__md_state_q))) {
        if ((1U & (~ ((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__md_state_q) 
                      >> 1U)))) {
            vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__multdiv_alu_operand_b 
                = ((1U & (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__md_state_q))
                    ? (1ULL | ((QData)((IData)((~ (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__imd_val_q_ex[0U])))) 
                               << 1U)) : (1ULL | ((QData)((IData)(
                                                                  (~ (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__imd_val_q[1U])))) 
                                                  << 1U)));
        }
    } else {
        vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__multdiv_alu_operand_b 
            = ((2U & (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__md_state_q))
                ? ((1U & (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__md_state_q))
                    ? (1ULL | ((QData)((IData)((~ (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__imd_val_q[1U])))) 
                               << 1U)) : (1ULL | ((QData)((IData)(
                                                                  (~ vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_rf_rdata_b_ecc_buf__DOT__gen_generic__DOT__u_impl_generic__DOT__in_i))) 
                                                  << 1U)))
                : ((1U & (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__md_state_q))
                    ? (1ULL | ((QData)((IData)((~ vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_rf_rdata_a_ecc_buf__DOT__gen_generic__DOT__u_impl_generic__DOT__in_i))) 
                               << 1U)) : (1ULL | ((QData)((IData)(
                                                                  (~ vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_rf_rdata_b_ecc_buf__DOT__gen_generic__DOT__u_impl_generic__DOT__in_i))) 
                                                  << 1U))));
    }
    if ((1U & (~ VL_ONEHOT_I((((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__rf_wdata_sel) 
                               << 1U) | (1U & (~ (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__rf_wdata_sel)))))))) {
        if ((0U != (((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__rf_wdata_sel) 
                     << 1U) | (1U & (~ (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__rf_wdata_sel)))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: ibex_id_stage.sv:425: Assertion failed in %Ntop_verilator.u_ibex_demo_system.u_top.u_ibex_core.id_stage_i.rf_wdata_id_mux: unique case, but multiple matches found for '1'h%x'\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),1,
                             (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__rf_wdata_sel));
                VL_STOP_MT("../src/lowrisc_ibex_ibex_core_0.1/rtl/ibex_id_stage.sv", 425, "");
            }
        }
    }
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_sign_a 
        = ((vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_rf_rdata_a_ecc_buf__DOT__gen_generic__DOT__u_impl_generic__DOT__in_i 
            >> 0x0000001fU) & (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__multdiv_signed_mode));
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__sign_a 
        = ((1U & ((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__gen_mult_fast__DOT__mult_state_q) 
                  >> 1U)) && (1U & ((1U & (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__gen_mult_fast__DOT__mult_state_q))
                                     ? ((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__multdiv_signed_mode) 
                                        & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_rf_rdata_a_ecc_buf__DOT__gen_generic__DOT__u_impl_generic__DOT__in_i 
                                           >> 0x1fU))
                                     : ((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__multdiv_signed_mode) 
                                        & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_rf_rdata_a_ecc_buf__DOT__gen_generic__DOT__u_impl_generic__DOT__in_i 
                                           >> 0x1fU)))));
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_sign_b 
        = ((vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_rf_rdata_b_ecc_buf__DOT__gen_generic__DOT__u_impl_generic__DOT__in_i 
            >> 0x0000001fU) & ((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__multdiv_signed_mode) 
                               >> 1U));
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__host_we[0U] 
        = vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__lsu_we;
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_op_i 
        = ((IData)(((0U == (0x000f8000U & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id)) 
                    & ((2U == (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__csr_op)) 
                       | (3U == (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__csr_op)))))
            ? 0U : (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__csr_op));
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__mret_insn 
        = ((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__mret_insn_dec) 
           & (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__instr_valid_id_q));
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__dret_insn 
        = ((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__dret_insn_dec) 
           & (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__instr_valid_id_q));
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__wfi_insn 
        = ((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__wfi_insn_dec) 
           & (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__instr_valid_id_q));
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__mult_hold = 0U;
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__accum 
        = vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__imd_val_q_ex[0U];
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__mult_valid = 0U;
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ebrk_insn 
        = ((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__ebrk_insn) 
           & (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__instr_valid_id_q));
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ecall_insn 
        = ((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__ecall_insn_dec) 
           & (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__instr_valid_id_q));
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT____VdfgRegularize_h68cd8b5a_0_5 
        = ((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__instr_valid_id_q) 
           & ((~ (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__instr_first_cycle_i)) 
              & (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__lsu_req_dec)));
    if (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__lsu_addr_incr_req) {
        vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__imm_b_mux_sel = 6U;
        vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_op_a_mux_sel = 1U;
    } else {
        vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__imm_b_mux_sel 
            = vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__imm_b_mux_sel_dec;
        vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_op_a_mux_sel 
            = vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_op_a_mux_sel_dec;
    }
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__mult_en_o 
        = ((~ (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn)) 
           & (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__mult_sel_ex));
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__div_en_o 
        = ((~ (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn)) 
           & (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__div_sel_ex));
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__multdiv_sel_i 
        = ((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__div_sel_ex) 
           | (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__mult_sel_ex));
    if ((2U & (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__gen_mult_fast__DOT__mult_state_q))) {
        vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__sign_b 
            = ((1U & (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__gen_mult_fast__DOT__mult_state_q)) 
               && (IData)((((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__multdiv_signed_mode) 
                            >> 1U) & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_rf_rdata_b_ecc_buf__DOT__gen_generic__DOT__u_impl_generic__DOT__in_i 
                                      >> 0x0000001fU))));
        if ((1U & (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__gen_mult_fast__DOT__mult_state_q))) {
            vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__gen_mult_fast__DOT__mult_state_d = 0U;
            vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__mult_hold = 0U;
            vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__accum 
                = ((0x00000003fffc0000ULL & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__accum) 
                   | (IData)((IData)((0x0003ffffU & (IData)(
                                                            (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__imd_val_q_ex[0U] 
                                                             >> 0x10U))))));
            vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__accum 
                = ((0x000000000003ffffULL & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__accum) 
                   | ((QData)((IData)((0x0000ffffU 
                                       & (- (IData)(
                                                    ((0U 
                                                      != (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__multdiv_signed_mode)) 
                                                     & (IData)(
                                                               (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__imd_val_q_ex[0U] 
                                                                >> 0x21U)))))))) 
                      << 0x00000012U));
            vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__mult_valid = 1U;
        } else if ((0U == (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__multdiv_operator))) {
            vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__gen_mult_fast__DOT__mult_state_d = 0U;
            vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__mult_hold = 0U;
            vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__accum 
                = (QData)((IData)((0x0000ffffU & (IData)(
                                                         (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__imd_val_q_ex[0U] 
                                                          >> 0x10U)))));
            vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__mult_valid = 1U;
        } else {
            vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__gen_mult_fast__DOT__mult_state_d = 3U;
            vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__accum 
                = vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__imd_val_q_ex[0U];
        }
    } else {
        vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__sign_b 
            = ((1U & (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__gen_mult_fast__DOT__mult_state_q)) 
               && (IData)((((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__multdiv_signed_mode) 
                            >> 1U) & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_rf_rdata_b_ecc_buf__DOT__gen_generic__DOT__u_impl_generic__DOT__in_i 
                                      >> 0x0000001fU))));
        if ((1U & (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__gen_mult_fast__DOT__mult_state_q))) {
            vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__gen_mult_fast__DOT__mult_state_d = 2U;
            vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__accum 
                = (QData)((IData)((0x0000ffffU & (IData)(
                                                         (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__imd_val_q_ex[0U] 
                                                          >> 0x10U)))));
        } else {
            vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__gen_mult_fast__DOT__mult_state_d = 1U;
            vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__accum = 0ULL;
        }
    }
    if ((1U & (~ VL_ONEHOT_I(((((4U == (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operator)) 
                                | (7U == (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operator))) 
                               << 1U) | ((3U == (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operator)) 
                                         | (6U == (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operator)))))))) {
        if ((0U != ((((4U == (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operator)) 
                      | (7U == (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operator))) 
                     << 1U) | ((3U == (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operator)) 
                               | (6U == (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operator)))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: ibex_alu.sv:392: Assertion failed in %Ntop_verilator.u_ibex_demo_system.u_top.u_ibex_core.ex_block_i.alu_i: unique case, but multiple matches found for '1'h1'\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name());
                VL_STOP_MT("../src/lowrisc_ibex_ibex_core_0.1/rtl/ibex_alu.sv", 392, "");
            }
        }
    }
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__mac_res_d 
        = (0x00000003ffffffffULL & ((2U & (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__gen_mult_fast__DOT__mult_state_q))
                                     ? ((1U & (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__gen_mult_fast__DOT__mult_state_q))
                                         ? ((0x00000007ffffffffULL 
                                             & VL_MULS_QQQ(35, 
                                                           (0x00000007ffffffffULL 
                                                            & VL_EXTENDS_QI(35,17, 
                                                                            (((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__sign_a) 
                                                                              << 0x00000010U) 
                                                                             | (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__gen_mult_fast__DOT__mult_op_a)))), 
                                                           (0x00000007ffffffffULL 
                                                            & VL_EXTENDS_QI(35,17, 
                                                                            (((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__sign_b) 
                                                                              << 0x00000010U) 
                                                                             | (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__gen_mult_fast__DOT__mult_op_b)))))) 
                                            + (0x00000007ffffffffULL 
                                               & VL_EXTENDS_QQ(35,34, vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__accum)))
                                         : ((0U == (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__multdiv_operator))
                                             ? (((QData)((IData)(
                                                                 (0x0000ffffU 
                                                                  & ((IData)(
                                                                             (0x00000007ffffffffULL 
                                                                              & VL_MULS_QQQ(35, 
                                                                                (0x00000007ffffffffULL 
                                                                                & VL_EXTENDS_QI(35,17, 
                                                                                (((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__sign_a) 
                                                                                << 0x00000010U) 
                                                                                | (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__gen_mult_fast__DOT__mult_op_a)))), 
                                                                                (0x00000007ffffffffULL 
                                                                                & VL_EXTENDS_QI(35,17, 
                                                                                (((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__sign_b) 
                                                                                << 0x00000010U) 
                                                                                | (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__gen_mult_fast__DOT__mult_op_b))))))) 
                                                                     + (IData)(
                                                                               (0x00000007ffffffffULL 
                                                                                & VL_EXTENDS_QQ(35,34, vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__accum))))))) 
                                                 << 0x00000010U) 
                                                | (QData)((IData)(
                                                                  (0x0000ffffU 
                                                                   & (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__imd_val_q_ex[0U])))))
                                             : ((0x00000007ffffffffULL 
                                                 & VL_MULS_QQQ(35, 
                                                               (0x00000007ffffffffULL 
                                                                & VL_EXTENDS_QI(35,17, 
                                                                                (((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__sign_a) 
                                                                                << 0x00000010U) 
                                                                                | (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__gen_mult_fast__DOT__mult_op_a)))), 
                                                               (0x00000007ffffffffULL 
                                                                & VL_EXTENDS_QI(35,17, 
                                                                                (((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__sign_b) 
                                                                                << 0x00000010U) 
                                                                                | (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__gen_mult_fast__DOT__mult_op_b)))))) 
                                                + (0x00000007ffffffffULL 
                                                   & VL_EXTENDS_QQ(35,34, vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__accum)))))
                                     : ((1U & (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__gen_mult_fast__DOT__mult_state_q))
                                         ? ((0U == (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__multdiv_operator))
                                             ? (((QData)((IData)(
                                                                 (0x0000ffffU 
                                                                  & ((IData)(
                                                                             (0x00000007ffffffffULL 
                                                                              & VL_MULS_QQQ(35, 
                                                                                (0x00000007ffffffffULL 
                                                                                & VL_EXTENDS_QI(35,17, 
                                                                                (((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__sign_a) 
                                                                                << 0x00000010U) 
                                                                                | (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__gen_mult_fast__DOT__mult_op_a)))), 
                                                                                (0x00000007ffffffffULL 
                                                                                & VL_EXTENDS_QI(35,17, 
                                                                                (((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__sign_b) 
                                                                                << 0x00000010U) 
                                                                                | (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__gen_mult_fast__DOT__mult_op_b))))))) 
                                                                     + (IData)(
                                                                               (0x00000007ffffffffULL 
                                                                                & VL_EXTENDS_QQ(35,34, vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__accum))))))) 
                                                 << 0x00000010U) 
                                                | (QData)((IData)(
                                                                  (0x0000ffffU 
                                                                   & (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__imd_val_q_ex[0U])))))
                                             : ((0x00000007ffffffffULL 
                                                 & VL_MULS_QQQ(35, 
                                                               (0x00000007ffffffffULL 
                                                                & VL_EXTENDS_QI(35,17, 
                                                                                (((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__sign_a) 
                                                                                << 0x00000010U) 
                                                                                | (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__gen_mult_fast__DOT__mult_op_a)))), 
                                                               (0x00000007ffffffffULL 
                                                                & VL_EXTENDS_QI(35,17, 
                                                                                (((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__sign_b) 
                                                                                << 0x00000010U) 
                                                                                | (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__gen_mult_fast__DOT__mult_op_b)))))) 
                                                + (0x00000007ffffffffULL 
                                                   & VL_EXTENDS_QQ(35,34, vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__accum))))
                                         : ((0x00000007ffffffffULL 
                                             & VL_MULS_QQQ(35, 
                                                           (0x00000007ffffffffULL 
                                                            & VL_EXTENDS_QI(35,17, 
                                                                            (((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__sign_a) 
                                                                              << 0x00000010U) 
                                                                             | (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__gen_mult_fast__DOT__mult_op_a)))), 
                                                           (0x00000007ffffffffULL 
                                                            & VL_EXTENDS_QI(35,17, 
                                                                            (((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__sign_b) 
                                                                              << 0x00000010U) 
                                                                             | (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__gen_mult_fast__DOT__mult_op_b)))))) 
                                            + (0x00000007ffffffffULL 
                                               & VL_EXTENDS_QQ(35,34, vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__accum))))));
    __Vtableidx6 = vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operator;
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_left 
        = Vtop_verilator__ConstPool__TABLE_h23304e2a_0
        [__Vtableidx6];
    __Vtableidx4 = vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operator;
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__cmp_signed 
        = Vtop_verilator__ConstPool__TABLE_h2608d7a5_0
        [__Vtableidx4];
    __Vtableidx3 = vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operator;
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__adder_op_a_shift1 
        = Vtop_verilator__ConstPool__TABLE_he65bff1b_0
        [__Vtableidx3];
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__adder_op_a_shift2 
        = Vtop_verilator__ConstPool__TABLE_he65bff1b_0
        [__Vtableidx3];
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__adder_op_a_shift3 
        = Vtop_verilator__ConstPool__TABLE_he65bff1b_0
        [__Vtableidx3];
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__adder_op_b_negate 
        = Vtop_verilator__ConstPool__TABLE_h053660a6_0
        [__Vtableidx3];
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_set 
        = ((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__fifo_incr_rptr) 
           & (0x7fU == (0x0000007fU & (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q))));
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_set 
        = ((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__fifo_incr_rptr) 
           & (0x7eU == (0x0000007fU & (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q))));
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_set 
        = ((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__gen_normal_fifo__DOT__fifo_incr_rptr) 
           & (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q));
    if (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__u_prim_sync_reqack__DOT__gen_rz_hs_protocol__DOT__src_fsm_q) {
        vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__u_prim_sync_reqack__DOT__gen_rz_hs_protocol__DOT__src_fsm_d = 1U;
        if ((1U & ((~ (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__src_req)) 
                   | (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__u_prim_sync_reqack__DOT__gen_rz_hs_protocol__DOT__src_ack)))) {
            vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__u_prim_sync_reqack__DOT__gen_rz_hs_protocol__DOT__src_fsm_d = 0U;
        }
    } else {
        vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__u_prim_sync_reqack__DOT__gen_rz_hs_protocol__DOT__src_fsm_d = 0U;
        if (((~ (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__u_prim_sync_reqack__DOT__gen_rz_hs_protocol__DOT__src_ack)) 
             & (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__src_req))) {
            vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__u_prim_sync_reqack__DOT__gen_rz_hs_protocol__DOT__src_fsm_d = 1U;
        }
    }
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__pending_d 
        = ((~ ((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__u_prim_sync_reqack__DOT__gen_rz_hs_protocol__DOT__src_ack) 
               & (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__u_prim_sync_reqack__DOT__gen_rz_hs_protocol__DOT__src_fsm_q))) 
           & ((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__wr_en) 
              | (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__pending_q)));
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_set 
        = ((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__gen_normal_fifo__DOT__fifo_incr_wptr) 
           & (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q));
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__lsu_rdata_valid_o 
        = ((0U == (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__ls_fsm_cs)) 
           & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__host_rvalid[0U] 
              & ((~ (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__data_or_pmp_err)) 
                 & (~ (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__data_we_q)))));
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__rdata_d__BRA__63__03a32__KET__ 
        = ((4U & (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_q))
            ? vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__rdata_q[2U]
            : vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__in_rdata_i);
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__rdata_d__BRA__31__03a0__KET__ 
        = ((2U & (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_q))
            ? vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__rdata_q[1U]
            : vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__in_rdata_i);
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__rdata 
        = ((1U & (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_q))
            ? vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__rdata_q[0U]
            : vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__in_rdata_i);
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_bus__DOT__device_rdata_i[0U] 
        = vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__device_rdata[0U];
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_bus__DOT__device_rdata_i[1U] 
        = vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__device_rdata[1U];
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_bus__DOT__device_rdata_i[2U] 
        = vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__device_rdata[2U];
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_bus__DOT__device_rdata_i[3U] 
        = vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__device_rdata[3U];
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_bus__DOT__device_rdata_i[4U] 
        = vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__device_rdata[4U];
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_bus__DOT__device_rdata_i[5U] 
        = vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__device_rdata[5U];
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_bus__DOT__device_rdata_i[6U] 
        = vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__device_rdata[6U];
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_bus__DOT__device_rdata_i[7U] 
        = vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__device_rdata[7U];
    if (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_bus__DOT__host_sel_resp) {
        vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__host_rdata[0U] = 0U;
        vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__host_rdata[1U] 
            = vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__device_rdata
            [vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_bus__DOT__device_sel_resp];
    } else {
        vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__host_rdata[0U] 
            = vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__device_rdata
            [vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_bus__DOT__device_sel_resp];
        vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__host_rdata[1U] = 0U;
    }
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__src_req 
        = ((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__dmi_req_valid) 
           | (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__pending_q));
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__dr_d 
        = vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__dr_q;
    if (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__jtag_dmi_cdc_clear_i) {
        vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__dr_d = 0ULL;
    } else {
        if (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_jtag_tap__DOT__capture_dr) {
            if (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__dmi_select) {
                if (((0U == (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__error_q)) 
                     & (~ (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__error_dmi_busy)))) {
                    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__dr_d 
                        = (((QData)((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__address_q)) 
                            << 0x00000022U) | ((QData)((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__data_q)) 
                                               << 2U));
                } else if (((3U == (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__error_q)) 
                            | (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__error_dmi_busy))) {
                    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__dr_d 
                        = (3ULL | (((QData)((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__address_q)) 
                                    << 0x00000022U) 
                                   | ((QData)((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__data_q)) 
                                      << 2U)));
                }
            }
        }
        if (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_jtag_tap__DOT__shift_dr) {
            if (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__dmi_select) {
                vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__dr_d 
                    = (0x000000ffffffffffULL & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__dr_q 
                                                >> 1U));
            }
        }
    }
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__halted_flat2 = 0U;
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__haltsum2 = 0U;
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__hartsel_idx2 
        = (0x0000001fU & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__dmcontrol_q 
                          >> 0x0000000bU));
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__halted_flat2 
        = ((0xfffffffeU & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__halted_flat2) 
           | (0U != vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__halted_reshaped1));
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__halted_reshaped2 
        = vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__halted_flat2;
    if ((1U > (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__hartsel_idx2))) {
        vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__haltsum2 
            = (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__halted_reshaped2 
               >> (0x0000001fU & VL_SHIFTL_III(5,32,32, (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__hartsel_idx2), 5U)));
    }
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_rdata_int = 0U;
    if ((vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
         >> 0x0000001fU)) {
        if ((0x40000000U & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id)) {
            if ((0x20000000U & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id)) {
                if ((0x10000000U & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id)) {
                    if ((1U & (~ (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                  >> 0x0000001bU)))) {
                        if ((1U & (~ (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                      >> 0x0000001aU)))) {
                            if ((1U & (~ (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                          >> 0x00000019U)))) {
                                if ((0x01000000U & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id)) {
                                    if ((1U & (~ (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                  >> 0x00000017U)))) {
                                        if ((0x00400000U 
                                             & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id)) {
                                            if ((1U 
                                                 & (~ 
                                                    (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                     >> 0x00000015U)))) {
                                                vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_rdata_int = 0U;
                                            }
                                        } else if (
                                                   (0x00200000U 
                                                    & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id)) {
                                            vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_rdata_int 
                                                = (
                                                   (0x00100000U 
                                                    & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id)
                                                    ? 0U
                                                    : 0x00000016U);
                                        } else if (
                                                   (0x00100000U 
                                                    & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id)) {
                                            vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_rdata_int = 0U;
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        } else if ((0x20000000U & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id)) {
            if ((0x10000000U & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id)) {
                if ((0x08000000U & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id)) {
                    if ((1U & (~ (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                  >> 0x0000001aU)))) {
                        if ((1U & (~ (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                      >> 0x00000019U)))) {
                            if ((0x01000000U & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id)) {
                                vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_rdata_int 
                                    = (IData)((vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter
                                               [(0x0000001fU 
                                                 & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                    >> 0x00000014U))] 
                                               >> 0x20U));
                            } else if ((0x00800000U 
                                        & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id)) {
                                vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_rdata_int 
                                    = (IData)((vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter
                                               [(0x0000001fU 
                                                 & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                    >> 0x00000014U))] 
                                               >> 0x20U));
                            } else if ((0x00400000U 
                                        & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id)) {
                                vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_rdata_int 
                                    = (IData)((vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter
                                               [(0x0000001fU 
                                                 & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                    >> 0x00000014U))] 
                                               >> 0x20U));
                            } else if ((0x00200000U 
                                        & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id)) {
                                vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_rdata_int 
                                    = (IData)((vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter
                                               [(0x0000001fU 
                                                 & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                    >> 0x00000014U))] 
                                               >> 0x20U));
                            } else if ((1U & (~ (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                 >> 0x00000014U)))) {
                                vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_rdata_int 
                                    = (IData)((vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter
                                               [(0x0000001fU 
                                                 & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                    >> 0x00000014U))] 
                                               >> 0x20U));
                            }
                        }
                    }
                } else if ((1U & (~ (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                     >> 0x0000001aU)))) {
                    if ((1U & (~ (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                  >> 0x00000019U)))) {
                        if ((0x01000000U & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id)) {
                            vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_rdata_int 
                                = (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter
                                          [(0x0000001fU 
                                            & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                               >> 0x00000014U))]);
                        } else if ((0x00800000U & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id)) {
                            vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_rdata_int 
                                = (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter
                                          [(0x0000001fU 
                                            & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                               >> 0x00000014U))]);
                        } else if ((0x00400000U & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id)) {
                            vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_rdata_int 
                                = (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter
                                          [(0x0000001fU 
                                            & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                               >> 0x00000014U))]);
                        } else if ((0x00200000U & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id)) {
                            vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_rdata_int 
                                = (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter
                                          [(0x0000001fU 
                                            & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                               >> 0x00000014U))]);
                        } else if ((1U & (~ (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                             >> 0x00000014U)))) {
                            vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_rdata_int 
                                = (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter
                                          [(0x0000001fU 
                                            & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                               >> 0x00000014U))]);
                        }
                    }
                }
            }
        }
    } else if ((0x40000000U & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id)) {
        if ((0x20000000U & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id)) {
            if ((0x10000000U & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id)) {
                if ((0x08000000U & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id)) {
                    if ((0x04000000U & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id)) {
                        if ((1U & (~ (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                      >> 0x00000019U)))) {
                            if ((1U & (~ (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                          >> 0x00000018U)))) {
                                if ((1U & (~ (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                              >> 0x00000017U)))) {
                                    if ((1U & (~ (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                  >> 0x00000016U)))) {
                                        if ((1U & (~ 
                                                   (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                    >> 0x00000015U)))) {
                                            vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_rdata_int 
                                                = (
                                                   (0x00100000U 
                                                    & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id)
                                                    ? 0U
                                                    : (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_cpuctrlsts_part_csr__DOT__rdata_q));
                                        }
                                    }
                                }
                            }
                        }
                    } else if ((0x02000000U & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id)) {
                        if ((0x01000000U & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id)) {
                            if ((1U & (~ (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                          >> 0x00000017U)))) {
                                if ((1U & (~ (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                              >> 0x00000016U)))) {
                                    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_rdata_int 
                                        = ((0x00200000U 
                                            & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id)
                                            ? ((0x00100000U 
                                                & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id)
                                                ? vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_dscratch1_csr__DOT__rdata_q
                                                : vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_dscratch0_csr__DOT__rdata_q)
                                            : ((0x00100000U 
                                                & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id)
                                                ? vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_depc_csr__DOT__rdata_q
                                                : vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_dcsr_csr__DOT__rdata_q));
                                }
                            }
                        } else if ((0x00800000U & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id)) {
                            if ((1U & (~ (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                          >> 0x00000016U)))) {
                                if ((0x00200000U & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id)) {
                                    if ((1U & (~ (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                  >> 0x00000014U)))) {
                                        vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_rdata_int = 0U;
                                    }
                                } else if ((1U & (~ 
                                                  (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                   >> 0x00000014U)))) {
                                    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_rdata_int = 0U;
                                }
                            }
                        } else if ((1U & (~ (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                             >> 0x00000016U)))) {
                            vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_rdata_int 
                                = ((0x00200000U & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id)
                                    ? ((0x00100000U 
                                        & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id)
                                        ? 0U : vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_trigger_regs__DOT__tmatch_value_q
                                       [vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_trigger_regs__DOT__u_tselect_csr__DOT__rdata_q])
                                    : ((0x00100000U 
                                        & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id)
                                        ? (0x28001048U 
                                           | (4U & 
                                              (((((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_trigger_regs__DOT__g_dbg_tmatch_reg__BRA__1__KET____DOT__u_tmatch_control_csr__DOT__rdata_q) 
                                                  << 1U) 
                                                 | (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_trigger_regs__DOT__g_dbg_tmatch_reg__BRA__0__KET____DOT__u_tmatch_control_csr__DOT__rdata_q)) 
                                                >> (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_trigger_regs__DOT__u_tselect_csr__DOT__rdata_q)) 
                                               << 2U)))
                                        : (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_trigger_regs__DOT__u_tselect_csr__DOT__rdata_q)));
                        }
                    }
                }
            }
        } else if ((0x10000000U & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id)) {
            if ((0x08000000U & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id)) {
                if ((1U & (~ (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                              >> 0x0000001aU)))) {
                    if ((0x02000000U & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id)) {
                        if ((1U & (~ (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                      >> 0x00000018U)))) {
                            if ((0x00800000U & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id)) {
                                if ((1U & (~ (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                              >> 0x00000016U)))) {
                                    if ((1U & (~ (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                  >> 0x00000015U)))) {
                                        if ((1U & (~ 
                                                   (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                    >> 0x00000014U)))) {
                                            vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_rdata_int = 0U;
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    } else if ((0x20000000U & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id)) {
        if ((0x10000000U & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id)) {
            if ((0x08000000U & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id)) {
                if ((1U & (~ (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                              >> 0x0000001aU)))) {
                    if ((0x02000000U & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id)) {
                        if ((0x01000000U & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id)) {
                            vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_rdata_int 
                                = ((0x00800000U & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id)
                                    ? ((0x00400000U 
                                        & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id)
                                        ? ((0x00200000U 
                                            & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id)
                                            ? ((0x00100000U 
                                                & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id)
                                                ? vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_addr_rdata[15U]
                                                : vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_addr_rdata[14U])
                                            : ((0x00100000U 
                                                & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id)
                                                ? vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_addr_rdata[13U]
                                                : vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_addr_rdata[12U]))
                                        : ((0x00200000U 
                                            & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id)
                                            ? ((0x00100000U 
                                                & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id)
                                                ? vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_addr_rdata[11U]
                                                : vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_addr_rdata[10U])
                                            : ((0x00100000U 
                                                & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id)
                                                ? vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_addr_rdata[9U]
                                                : vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_addr_rdata[8U])))
                                    : ((0x00400000U 
                                        & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id)
                                        ? ((0x00200000U 
                                            & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id)
                                            ? ((0x00100000U 
                                                & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id)
                                                ? vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_addr_rdata[7U]
                                                : vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_addr_rdata[6U])
                                            : ((0x00100000U 
                                                & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id)
                                                ? vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_addr_rdata[5U]
                                                : vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_addr_rdata[4U]))
                                        : ((0x00200000U 
                                            & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id)
                                            ? ((0x00100000U 
                                                & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id)
                                                ? vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_addr_rdata[3U]
                                                : vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_addr_rdata[2U])
                                            : ((0x00100000U 
                                                & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id)
                                                ? vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_addr_rdata[1U]
                                                : vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_addr_rdata[0U]))));
                        } else if ((1U & (~ (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                             >> 0x00000017U)))) {
                            if ((1U & (~ (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                          >> 0x00000016U)))) {
                                vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_rdata_int 
                                    = ((0x00200000U 
                                        & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id)
                                        ? ((0x00100000U 
                                            & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id)
                                            ? (((vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_cfg_rdata[15U] 
                                                 << 0x00000018U) 
                                                | (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_cfg_rdata[14U] 
                                                   << 0x00000010U)) 
                                               | ((vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_cfg_rdata[13U] 
                                                   << 8U) 
                                                  | vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_cfg_rdata[12U]))
                                            : (((vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_cfg_rdata[11U] 
                                                 << 0x00000018U) 
                                                | (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_cfg_rdata[10U] 
                                                   << 0x00000010U)) 
                                               | ((vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_cfg_rdata[9U] 
                                                   << 8U) 
                                                  | vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_cfg_rdata[8U])))
                                        : ((0x00100000U 
                                            & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id)
                                            ? (((vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_cfg_rdata[7U] 
                                                 << 0x00000018U) 
                                                | (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_cfg_rdata[6U] 
                                                   << 0x00000010U)) 
                                               | ((vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_cfg_rdata[5U] 
                                                   << 8U) 
                                                  | vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_cfg_rdata[4U]))
                                            : (((vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_cfg_rdata[3U] 
                                                 << 0x00000018U) 
                                                | (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_cfg_rdata[2U] 
                                                   << 0x00000010U)) 
                                               | ((vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_cfg_rdata[1U] 
                                                   << 8U) 
                                                  | vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_cfg_rdata[0U]))));
                            }
                        }
                    }
                }
            } else if ((0x04000000U & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id)) {
                if ((1U & (~ (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                              >> 0x00000019U)))) {
                    if ((1U & (~ (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                  >> 0x00000018U)))) {
                        if ((1U & (~ (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                      >> 0x00000017U)))) {
                            if ((0x00400000U & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id)) {
                                if ((1U & (~ (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                              >> 0x00000015U)))) {
                                    if ((1U & (~ (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                  >> 0x00000014U)))) {
                                        vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_rdata_int = 0U;
                                        vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_rdata_int 
                                            = ((0xfffffff7U 
                                                & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_rdata_int) 
                                               | (8U 
                                                  & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mip 
                                                     >> 0x0000000eU)));
                                        vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_rdata_int 
                                            = ((0xffffff7fU 
                                                & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_rdata_int) 
                                               | (0x00000080U 
                                                  & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mip 
                                                     >> 9U)));
                                        vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_rdata_int 
                                            = ((0xfffff7ffU 
                                                & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_rdata_int) 
                                               | (0x00000800U 
                                                  & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mip 
                                                     >> 4U)));
                                        vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_rdata_int 
                                            = ((0x8000ffffU 
                                                & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_rdata_int) 
                                               | (0x7fff0000U 
                                                  & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mip 
                                                     << 0x00000010U)));
                                    }
                                }
                            } else {
                                vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_rdata_int 
                                    = ((0x00200000U 
                                        & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id)
                                        ? ((0x00100000U 
                                            & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id)
                                            ? vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mtval_csr__DOT__rdata_q
                                            : vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT____VdfgExtracted_h8790b315__0)
                                        : ((0x00100000U 
                                            & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id)
                                            ? vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mepc_csr__DOT__rdata_q
                                            : vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mscratch_csr__DOT__rdata_q));
                            }
                        }
                    }
                }
            } else if ((0x02000000U & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id)) {
                if ((0x01000000U & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id)) {
                    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_rdata_int 
                        = vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent
                        [(0x0000001fU & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                         >> 0x00000014U))];
                } else if ((0x00800000U & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id)) {
                    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_rdata_int 
                        = vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent
                        [(0x0000001fU & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                         >> 0x00000014U))];
                } else if ((0x00400000U & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id)) {
                    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_rdata_int 
                        = vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent
                        [(0x0000001fU & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                         >> 0x00000014U))];
                } else if ((0x00200000U & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id)) {
                    if ((0x00100000U & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id)) {
                        vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_rdata_int 
                            = vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent
                            [(0x0000001fU & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                             >> 0x00000014U))];
                    }
                } else if ((1U & (~ (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                     >> 0x00000014U)))) {
                    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_rdata_int 
                        = vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mcountinhibit_q;
                }
            } else if ((0x01000000U & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id)) {
                if ((0x00800000U & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id)) {
                    if ((1U & (~ (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                  >> 0x00000016U)))) {
                        if ((0x00200000U & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id)) {
                            if ((1U & (~ (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                          >> 0x00000014U)))) {
                                vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_rdata_int = 0U;
                            }
                        }
                    }
                } else if ((1U & (~ (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                     >> 0x00000016U)))) {
                    if ((1U & (~ (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                  >> 0x00000015U)))) {
                        if ((1U & (~ (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                      >> 0x00000014U)))) {
                            vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_rdata_int = 0U;
                        }
                    }
                }
            } else if ((0x00800000U & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id)) {
                if ((1U & (~ (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                              >> 0x00000016U)))) {
                    if ((0x00200000U & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id)) {
                        if ((1U & (~ (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                      >> 0x00000014U)))) {
                            vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_rdata_int = 0U;
                        }
                    }
                }
            } else if ((0x00400000U & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id)) {
                if ((0x00200000U & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id)) {
                    if ((1U & (~ (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                  >> 0x00000014U)))) {
                        vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_rdata_int = 0U;
                    }
                } else if ((0x00100000U & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id)) {
                    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_rdata_int 
                        = vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mtvec_csr__DOT__rdata_q;
                } else {
                    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_rdata_int = 0U;
                    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_rdata_int 
                        = ((0xfffffff7U & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_rdata_int) 
                           | (8U & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mie_csr__DOT__rdata_q 
                                    >> 0x0000000eU)));
                    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_rdata_int 
                        = ((0xffffff7fU & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_rdata_int) 
                           | (0x00000080U & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mie_csr__DOT__rdata_q 
                                             >> 9U)));
                    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_rdata_int 
                        = ((0xfffff7ffU & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_rdata_int) 
                           | (0x00000800U & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mie_csr__DOT__rdata_q 
                                             >> 4U)));
                    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_rdata_int 
                        = ((0x8000ffffU & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_rdata_int) 
                           | (0x7fff0000U & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mie_csr__DOT__rdata_q 
                                             << 0x00000010U)));
                }
            } else if ((1U & (~ (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                 >> 0x00000015U)))) {
                if ((0x00100000U & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id)) {
                    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_rdata_int = 0x40101104U;
                } else {
                    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_rdata_int = 0U;
                    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_rdata_int 
                        = ((0xfffffff7U & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_rdata_int) 
                           | (8U & ((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mstatus_csr__DOT__rdata_q) 
                                    >> 2U)));
                    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_rdata_int 
                        = ((0xffffff7fU & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_rdata_int) 
                           | (0x00000080U & ((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mstatus_csr__DOT__rdata_q) 
                                             << 3U)));
                    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_rdata_int 
                        = ((0xffffe7ffU & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_rdata_int) 
                           | (0x00001800U & ((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mstatus_csr__DOT__rdata_q) 
                                             << 9U)));
                    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_rdata_int 
                        = ((0xfffdffffU & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_rdata_int) 
                           | (0x00020000U & ((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mstatus_csr__DOT__rdata_q) 
                                             << 0x00000010U)));
                    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_rdata_int 
                        = ((0xffdfffffU & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_rdata_int) 
                           | (0x00200000U & ((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mstatus_csr__DOT__rdata_q) 
                                             << 0x00000015U)));
                }
            }
        }
    }
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__irqs_i 
        = (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mip 
           & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mie_csr__DOT__rdata_q);
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__fcov_mis_2_en_d 
        = ((~ (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__fcov_mis_rvalid_2)) 
           & ((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__fcov_mis_rvalid_1) 
              | (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__fcov_mis_2_en_q)));
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__fcov_mis_bus_err_1_d 
        = ((~ (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__fcov_mis_rvalid_2)) 
           & (((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__fcov_mis_rvalid_1) 
               & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__host_err[0U]) 
              | (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__fcov_mis_bus_err_1_q)));
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__load_err_i 
        = ((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__data_or_pmp_err) 
           & ((~ (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__data_we_q)) 
              & (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__lsu_resp_valid_i)));
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__store_err_i 
        = ((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__data_or_pmp_err) 
           & ((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__data_we_q) 
              & (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__lsu_resp_valid_i)));
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_bus__DOT__host_we_i[0U] 
        = vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__host_we[0U];
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_bus__DOT__host_we_i[1U] 
        = vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__host_we[1U];
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_wr 
        = ((1U == (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_op_i)) 
           | ((2U == (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_op_i)) 
              | (3U == (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_op_i))));
    __Vtableidx2 = ((((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__load_err_q) 
                      << 5U) | (((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__store_err_q) 
                                 << 4U) | ((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ebrk_insn) 
                                           << 3U))) 
                    | (((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ecall_insn) 
                        << 2U) | (((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__illegal_insn_q) 
                                   << 1U) | (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__instr_fetch_err))));
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__instr_fetch_err_prio 
        = Vtop_verilator__ConstPool__TABLE_h139cf27b_0
        [__Vtableidx2];
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__illegal_insn_prio 
        = Vtop_verilator__ConstPool__TABLE_h611732e7_0
        [__Vtableidx2];
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ecall_insn_prio 
        = Vtop_verilator__ConstPool__TABLE_h7b340f8b_0
        [__Vtableidx2];
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ebrk_insn_prio 
        = Vtop_verilator__ConstPool__TABLE_h27e1e6b7_0
        [__Vtableidx2];
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__store_err_prio 
        = Vtop_verilator__ConstPool__TABLE_hac9147c9_0
        [__Vtableidx2];
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__load_err_prio 
        = Vtop_verilator__ConstPool__TABLE_h1e2ce85a_0
        [__Vtableidx2];
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__operand_b_i 
        = (((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_op_b_mux_sel_dec) 
            | (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__lsu_addr_incr_req))
            ? ((4U & (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__imm_b_mux_sel))
                ? ((2U & (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__imm_b_mux_sel))
                    ? 4U : ((1U & (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__imm_b_mux_sel))
                             ? ((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_is_compressed_id)
                                 ? 2U : 4U) : (((- (IData)(
                                                           (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                            >> 0x0000001fU))) 
                                                << 0x00000014U) 
                                               | ((((0x000001feU 
                                                     & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                        >> 0x0000000bU)) 
                                                    | (1U 
                                                       & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                          >> 0x00000014U))) 
                                                   << 0x0000000bU) 
                                                  | (0x000007feU 
                                                     & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                        >> 0x00000014U))))))
                : ((2U & (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__imm_b_mux_sel))
                    ? ((1U & (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__imm_b_mux_sel))
                        ? (0xfffff000U & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id)
                        : (((- (IData)((vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                        >> 0x0000001fU))) 
                            << 0x0000000dU) | ((((2U 
                                                  & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                     >> 0x0000001eU)) 
                                                 | (1U 
                                                    & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                       >> 7U))) 
                                                << 0x0000000bU) 
                                               | ((0x000007e0U 
                                                   & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                      >> 0x00000014U)) 
                                                  | (0x0000001eU 
                                                     & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                        >> 7U))))))
                    : ((1U & (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__imm_b_mux_sel))
                        ? (((- (IData)((vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                        >> 0x0000001fU))) 
                            << 0x0000000cU) | ((0x00000fe0U 
                                                & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                   >> 0x00000014U)) 
                                               | (0x0000001fU 
                                                  & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                     >> 7U))))
                        : (((- (IData)((vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                        >> 0x0000001fU))) 
                            << 0x0000000cU) | (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                               >> 0x00000014U)))))
            : vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_rf_rdata_b_ecc_buf__DOT__gen_generic__DOT__u_impl_generic__DOT__in_i);
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__operand_a_i 
        = ((2U & (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_op_a_mux_sel))
            ? ((1U & (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_op_a_mux_sel))
                ? ((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__imm_a_mux_sel)
                    ? 0U : (0x0000001fU & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                           >> 0x0000000fU)))
                : vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__pc_id)
            : ((1U & (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_op_a_mux_sel))
                ? vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__addr_last_q
                : vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_rf_rdata_a_ecc_buf__DOT__gen_generic__DOT__u_impl_generic__DOT__in_i));
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__multdiv_en_dec 
        = ((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__div_en_o) 
           | (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__mult_en_o));
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__ex_valid_o 
        = ((1U & (~ (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__multdiv_sel_i))) 
           || ((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_valid) 
               | (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__mult_valid)));
    if ((1U & (~ VL_ONEHOT_I((((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__adder_op_b_negate) 
                               << 1U) | (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__multdiv_sel_i)))))) {
        if ((0U != (((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__adder_op_b_negate) 
                     << 1U) | (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__multdiv_sel_i)))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: ibex_alu.sv:97: Assertion failed in %Ntop_verilator.u_ibex_demo_system.u_top.u_ibex_core.ex_block_i.alu_i: unique case, but multiple matches found for '1'h1'\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name());
                VL_STOP_MT("../src/lowrisc_ibex_ibex_core_0.1/rtl/ibex_alu.sv", 97, "");
            }
        }
    }
    if ((1U & (~ VL_ONEHOT_I(((((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__adder_op_a_shift3) 
                                << 3U) | ((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__adder_op_a_shift2) 
                                          << 2U)) | 
                              (((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__adder_op_a_shift1) 
                                << 1U) | (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__multdiv_sel_i))))))) {
        if ((0U != ((((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__adder_op_a_shift3) 
                      << 3U) | ((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__adder_op_a_shift2) 
                                << 2U)) | (((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__adder_op_a_shift1) 
                                            << 1U) 
                                           | (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__multdiv_sel_i))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: ibex_alu.sv:85: Assertion failed in %Ntop_verilator.u_ibex_demo_system.u_top.u_ibex_core.ex_block_i.alu_i: unique case, but multiple matches found for '1'h1'\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name());
                VL_STOP_MT("../src/lowrisc_ibex_ibex_core_0.1/rtl/ibex_alu.sv", 85, "");
            }
        }
    }
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__aligned_is_compressed 
        = ((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT____VdfgRegularize_hb899178c_0_2) 
           & (3U != (3U & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__rdata)));
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__unaligned_is_compressed 
        = ((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT____VdfgRegularize_hb899178c_0_2) 
           & (3U != (3U & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__rdata 
                           >> 0x00000010U))));
    if ((1U & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__instr_addr_q)) {
        if ((2U & (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_q))) {
            vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i 
                = ((vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__rdata_q[1U] 
                    << 0x00000010U) | (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__rdata 
                                       >> 0x00000010U));
            vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__out_err_o 
                = (((~ (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__unaligned_is_compressed)) 
                    & (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__err_q__BRA__1__KET__)) 
                   | (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__err_q__BRA__0__KET__));
        } else {
            vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i 
                = ((vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__in_rdata_i 
                    << 0x00000010U) | (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__rdata 
                                       >> 0x00000010U));
            vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__out_err_o 
                = vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__err;
        }
        if (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__unaligned_is_compressed) {
            vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__addr_incr_two = 1U;
            vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__out_valid_o 
                = (1U & (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid));
        } else {
            vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__addr_incr_two = 0U;
            vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__out_valid_o 
                = (1U & (((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_q) 
                          >> 1U) | ((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_q) 
                                    & (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__in_valid_i))));
        }
    } else {
        vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i 
            = vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__rdata;
        vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__out_err_o 
            = vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__err;
        vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__addr_incr_two 
            = vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__aligned_is_compressed;
        vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__out_valid_o 
            = (1U & (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid));
    }
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_bus__DOT__host_rdata_o[0U] 
        = vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__host_rdata[0U];
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_bus__DOT__host_rdata_o[1U] 
        = vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__host_rdata[1U];
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3 = ((0x0000ff00U 
                                                 & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__host_rdata[0U] 
                                                    << 8U)) 
                                                | (0x000000ffU 
                                                   & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__rdata_q 
                                                      >> 0x00000010U)));
    if (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__u_prim_sync_reqack__DOT__gen_rz_hs_protocol__DOT__src_fsm_q) {
        vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__u_prim_sync_reqack__DOT__gen_rz_hs_protocol__DOT__src_fsm_d = 1U;
        if ((1U & ((~ (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__src_req)) 
                   | (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__u_prim_sync_reqack__DOT__gen_rz_hs_protocol__DOT__src_ack)))) {
            vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__u_prim_sync_reqack__DOT__gen_rz_hs_protocol__DOT__src_fsm_d = 0U;
        }
    } else {
        vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__u_prim_sync_reqack__DOT__gen_rz_hs_protocol__DOT__src_fsm_d = 0U;
        if (((~ (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__u_prim_sync_reqack__DOT__gen_rz_hs_protocol__DOT__src_ack)) 
             & (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__src_req))) {
            vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__u_prim_sync_reqack__DOT__gen_rz_hs_protocol__DOT__src_fsm_d = 1U;
        }
    }
    if ((1U & (~ (IData)(vlSelfRef.clk_i)))) {
        vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__core_clock_gate_i__DOT__gen_generic__DOT__u_impl_generic__DOT__en_latch 
            = (1U & ((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__core_busy_q) 
                     | ((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__haltreq) 
                        | (0U != vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__irqs_i))));
    }
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__mfip_id = 0U;
    if ((0x00004000U & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__irqs_i)) {
        vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__mfip_id = 0x0eU;
    }
    if ((0x00002000U & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__irqs_i)) {
        vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__mfip_id = 0x0dU;
    }
    if ((0x00001000U & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__irqs_i)) {
        vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__mfip_id = 0x0cU;
    }
    if ((0x00000800U & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__irqs_i)) {
        vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__mfip_id = 0x0bU;
    }
    if ((0x00000400U & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__irqs_i)) {
        vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__mfip_id = 0x0aU;
    }
    if ((0x00000200U & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__irqs_i)) {
        vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__mfip_id = 9U;
    }
    if ((0x00000100U & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__irqs_i)) {
        vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__mfip_id = 8U;
    }
    if ((0x00000080U & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__irqs_i)) {
        vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__mfip_id = 7U;
    }
    if ((0x00000040U & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__irqs_i)) {
        vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__mfip_id = 6U;
    }
    if ((0x00000020U & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__irqs_i)) {
        vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__mfip_id = 5U;
    }
    if ((0x00000010U & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__irqs_i)) {
        vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__mfip_id = 4U;
    }
    if ((8U & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__irqs_i)) {
        vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__mfip_id = 3U;
    }
    if ((4U & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__irqs_i)) {
        vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__mfip_id = 2U;
    }
    if ((2U & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__irqs_i)) {
        vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__mfip_id = 1U;
    }
    if ((1U & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__irqs_i)) {
        vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__mfip_id = 0U;
    }
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__handle_irq 
        = ((~ (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q)) 
           & ((~ (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_dcsr_csr__DOT__rdata_q 
                  >> 2U)) & ((~ (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__nmi_mode_q)) 
                             & ((0U != vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__irqs_i) 
                                & (((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mstatus_csr__DOT__rdata_q) 
                                    >> 5U) | (0U == (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__priv_lvl_q)))))));
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__exc_req_lsu 
        = ((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__load_err_i) 
           | (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__store_err_i));
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__illegal_csr_insn_o 
        = ((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_access) 
           & ((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__illegal_csr) 
              | (((3U == (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                          >> 0x0000001eU)) & (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_wr)) 
                 | (((3U & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                            >> 0x0000001cU)) > (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__priv_lvl_q)) 
                    | ((~ (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q)) 
                       & (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__dbg_csr))))));
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__bwlogic_result 
        = (((3U == (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operator)) 
            | (6U == (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operator)))
            ? (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__operand_a_i 
               | vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__operand_b_i)
            : (((4U == (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operator)) 
                | (7U == (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operator)))
                ? (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__operand_a_i 
                   & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__operand_b_i)
                : (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__operand_a_i 
                   ^ vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__operand_b_i)));
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__operand_a_rev 
        = ((((((((2U & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__operand_a_i 
                        << 1U)) | (1U & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__operand_a_i 
                                         >> 1U))) << 6U) 
               | (((2U & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__operand_a_i 
                          >> 1U)) | (1U & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__operand_a_i 
                                           >> 3U))) 
                  << 4U)) | ((((2U & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__operand_a_i 
                                      >> 3U)) | (1U 
                                                 & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__operand_a_i 
                                                    >> 5U))) 
                              << 2U) | ((2U & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__operand_a_i 
                                               >> 5U)) 
                                        | (1U & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__operand_a_i 
                                                 >> 7U))))) 
             << 0x00000018U) | ((((((2U & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__operand_a_i 
                                           >> 7U)) 
                                    | (1U & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__operand_a_i 
                                             >> 9U))) 
                                   << 6U) | (((2U & 
                                               (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__operand_a_i 
                                                >> 9U)) 
                                              | (1U 
                                                 & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__operand_a_i 
                                                    >> 0x0000000bU))) 
                                             << 4U)) 
                                 | ((((2U & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__operand_a_i 
                                             >> 0x0000000bU)) 
                                      | (1U & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__operand_a_i 
                                               >> 0x0000000dU))) 
                                     << 2U) | ((2U 
                                                & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__operand_a_i 
                                                   >> 0x0000000dU)) 
                                               | (1U 
                                                  & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__operand_a_i 
                                                     >> 0x0000000fU))))) 
                                << 0x00000010U)) | 
           (((((((2U & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__operand_a_i 
                        >> 0x0000000fU)) | (1U & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__operand_a_i 
                                                  >> 0x00000011U))) 
                << 6U) | (((2U & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__operand_a_i 
                                  >> 0x00000011U)) 
                           | (1U & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__operand_a_i 
                                    >> 0x00000013U))) 
                          << 4U)) | ((((2U & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__operand_a_i 
                                              >> 0x00000013U)) 
                                       | (1U & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__operand_a_i 
                                                >> 0x00000015U))) 
                                      << 2U) | ((2U 
                                                 & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__operand_a_i 
                                                    >> 0x00000015U)) 
                                                | (1U 
                                                   & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__operand_a_i 
                                                      >> 0x00000017U))))) 
             << 8U) | (((((2U & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__operand_a_i 
                                 >> 0x00000017U)) | 
                          (1U & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__operand_a_i 
                                 >> 0x00000019U))) 
                         << 6U) | (((2U & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__operand_a_i 
                                           >> 0x00000019U)) 
                                    | (1U & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__operand_a_i 
                                             >> 0x0000001bU))) 
                                   << 4U)) | ((((2U 
                                                 & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__operand_a_i 
                                                    >> 0x0000001bU)) 
                                                | (1U 
                                                   & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__operand_a_i 
                                                      >> 0x0000001dU))) 
                                               << 2U) 
                                              | ((2U 
                                                  & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__operand_a_i 
                                                     >> 0x0000001dU)) 
                                                 | (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__operand_a_i 
                                                    >> 0x0000001fU))))));
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_wdata_int 
        = ((2U & (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_op_i))
            ? ((1U & (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_op_i))
                ? ((~ vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__operand_a_i) 
                   & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_rdata_int)
                : (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__operand_a_i 
                   | vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_rdata_int))
            : vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__operand_a_i);
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__adder_result_ext_o 
        = (0x00000003ffffffffULL & (((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__multdiv_sel_i)
                                      ? vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__multdiv_alu_operand_a
                                      : ((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__adder_op_a_shift1)
                                          ? (1ULL | 
                                             ((QData)((IData)(
                                                              (0x7fffffffU 
                                                               & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__operand_a_i))) 
                                              << 2U))
                                          : ((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__adder_op_a_shift2)
                                              ? (1ULL 
                                                 | ((QData)((IData)(
                                                                    (0x3fffffffU 
                                                                     & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__operand_a_i))) 
                                                    << 3U))
                                              : ((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__adder_op_a_shift3)
                                                  ? 
                                                 (1ULL 
                                                  | ((QData)((IData)(
                                                                     (0x1fffffffU 
                                                                      & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__operand_a_i))) 
                                                     << 4U))
                                                  : 
                                                 (1ULL 
                                                  | ((QData)((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__operand_a_i)) 
                                                     << 1U)))))) 
                                    + (0x00000001ffffffffULL 
                                       & ((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__multdiv_sel_i)
                                           ? vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__multdiv_alu_operand_b
                                           : ((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__adder_op_b_negate)
                                               ? (~ 
                                                  ((QData)((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__operand_b_i)) 
                                                   << 1U))
                                               : ((QData)((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__operand_b_i)) 
                                                  << 1U))))));
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__instr_decompressed 
        = vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i;
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__illegal_c_insn = 0U;
    if ((2U & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i)) {
        if ((1U & (~ vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i))) {
            if ((0x00008000U & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i)) {
                if ((0x00004000U & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i)) {
                    if ((1U & (~ (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i 
                                  >> 0x0000000dU)))) {
                        vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__instr_decompressed 
                            = (0x00012023U | ((((0x000000c0U 
                                                 & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i 
                                                    >> 1U)) 
                                                | ((0x00000020U 
                                                    & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i 
                                                       >> 7U)) 
                                                   | (0x0000001fU 
                                                      & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i 
                                                         >> 2U)))) 
                                               << 0x00000014U) 
                                              | (0x00000e00U 
                                                 & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i)));
                    }
                    if ((0x00002000U & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i)) {
                        vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__illegal_c_insn = 1U;
                    }
                } else {
                    if ((1U & (~ (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i 
                                  >> 0x0000000dU)))) {
                        vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__instr_decompressed 
                            = ((0x00001000U & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i)
                                ? ((0U != (0x0000001fU 
                                           & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i 
                                              >> 2U)))
                                    ? (0x33U | ((0x01f00000U 
                                                 & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i 
                                                    << 0x00000012U)) 
                                                | ((0x000f8000U 
                                                    & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i 
                                                       << 8U)) 
                                                   | (0x00000f80U 
                                                      & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i))))
                                    : ((0U == (0x0000001fU 
                                               & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i 
                                                  >> 7U)))
                                        ? 0x00100073U
                                        : (0x00e7U 
                                           | (0x000f8000U 
                                              & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i 
                                                 << 8U)))))
                                : ((0U != (0x0000001fU 
                                           & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i 
                                              >> 2U)))
                                    ? (0x33U | ((0x01f00000U 
                                                 & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i 
                                                    << 0x00000012U)) 
                                                | (0x00000f80U 
                                                   & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i)))
                                    : (0x0067U | (0x000f8000U 
                                                  & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i 
                                                     << 8U)))));
                    }
                    if ((0x00002000U & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i)) {
                        vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__illegal_c_insn = 1U;
                    } else if ((1U & (~ (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i 
                                         >> 0x0cU)))) {
                        if ((0U == (0x0000001fU & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i 
                                                   >> 2U)))) {
                            if ((0U == (0x0000001fU 
                                        & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i 
                                           >> 7U)))) {
                                vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__illegal_c_insn = 1U;
                            }
                        }
                    }
                }
            } else if ((0x00004000U & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i)) {
                if ((1U & (~ (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i 
                              >> 0x0000000dU)))) {
                    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__instr_decompressed 
                        = (0x00012003U | ((0x0c000000U 
                                           & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i 
                                              << 0x00000018U)) 
                                          | ((0x02000000U 
                                              & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i 
                                                 << 0x0000000dU)) 
                                             | ((0x01c00000U 
                                                 & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i 
                                                    << 0x00000012U)) 
                                                | (0x00000f80U 
                                                   & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i)))));
                }
                if ((0x00002000U & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i)) {
                    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__illegal_c_insn = 1U;
                } else if ((0U == (0x0000001fU & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i 
                                                  >> 7U)))) {
                    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__illegal_c_insn = 1U;
                }
            } else {
                if ((1U & (~ (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i 
                              >> 0x0000000dU)))) {
                    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__instr_decompressed 
                        = (0x00001013U | ((0x01f00000U 
                                           & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i 
                                              << 0x00000012U)) 
                                          | ((0x000f8000U 
                                              & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i 
                                                 << 8U)) 
                                             | (0x00000f80U 
                                                & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i))));
                }
                if ((0x00002000U & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i)) {
                    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__illegal_c_insn = 1U;
                } else if ((0x00001000U & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i)) {
                    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__illegal_c_insn = 1U;
                }
            }
        }
    } else if ((1U & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i)) {
        if ((0x00008000U & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i)) {
            if ((0x00004000U & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i)) {
                vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__instr_decompressed 
                    = (0x00040063U | (((- (IData)((1U 
                                                   & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i 
                                                      >> 0x0cU)))) 
                                       << 0x0000001cU) 
                                      | ((0x0c000000U 
                                          & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i 
                                             << 0x00000015U)) 
                                         | ((0x02000000U 
                                             & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i 
                                                << 0x00000017U)) 
                                            | ((0x00038000U 
                                                & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i 
                                                   << 8U)) 
                                               | ((((4U 
                                                     & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i 
                                                        >> 0x0000000bU)) 
                                                    | (3U 
                                                       & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i 
                                                          >> 0x0aU))) 
                                                   << 0x0000000aU) 
                                                  | ((0x00000300U 
                                                      & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i 
                                                         << 5U)) 
                                                     | (0x00000080U 
                                                        & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i 
                                                           >> 5U)))))))));
            } else if ((0x00002000U & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i)) {
                vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__instr_decompressed 
                    = (0x6fU | (((((((2U & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i 
                                            >> 0x0000000bU)) 
                                     | (1U & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i 
                                              >> 8U))) 
                                    << 9U) | (((0x0000000cU 
                                                & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i 
                                                   >> 7U)) 
                                               | ((2U 
                                                   & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i 
                                                      >> 5U)) 
                                                  | (1U 
                                                     & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i 
                                                        >> 7U)))) 
                                              << 5U)) 
                                  | ((0x00000010U & 
                                      (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i 
                                       << 2U)) | ((8U 
                                                   & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i 
                                                      >> 8U)) 
                                                  | (7U 
                                                     & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i 
                                                        >> 3U))))) 
                                 << 0x00000015U) | 
                                ((0x001ff000U & ((- (IData)(
                                                            (1U 
                                                             & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i 
                                                                >> 0x0cU)))) 
                                                 << 0x0000000cU)) 
                                 | (0x00000080U & (
                                                   (~ 
                                                    (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i 
                                                     >> 0x0fU)) 
                                                   << 7U)))));
            } else if ((0x00000800U & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i)) {
                if ((0x00000400U & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i)) {
                    if ((1U & (~ (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i 
                                  >> 0x0cU)))) {
                        vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__instr_decompressed 
                            = ((0x00000040U & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i)
                                ? ((0x00000020U & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i)
                                    ? (0x00847433U 
                                       | ((0x00700000U 
                                           & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i 
                                              << 0x00000012U)) 
                                          | ((0x00038000U 
                                              & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i 
                                                 << 8U)) 
                                             | (0x00000380U 
                                                & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i))))
                                    : (0x00846433U 
                                       | ((0x00700000U 
                                           & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i 
                                              << 0x00000012U)) 
                                          | ((0x00038000U 
                                              & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i 
                                                 << 8U)) 
                                             | (0x00000380U 
                                                & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i)))))
                                : ((0x00000020U & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i)
                                    ? (0x00844433U 
                                       | ((0x00700000U 
                                           & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i 
                                              << 0x00000012U)) 
                                          | ((0x00038000U 
                                              & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i 
                                                 << 8U)) 
                                             | (0x00000380U 
                                                & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i))))
                                    : (0x40840433U 
                                       | ((0x00700000U 
                                           & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i 
                                              << 0x00000012U)) 
                                          | ((0x00038000U 
                                              & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i 
                                                 << 8U)) 
                                             | (0x00000380U 
                                                & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i))))));
                    }
                } else {
                    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__instr_decompressed 
                        = (0x00047413U | (((((0x0000007eU 
                                              & ((- (IData)(
                                                            (1U 
                                                             & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i 
                                                                >> 0x0cU)))) 
                                                 << 1U)) 
                                             | (1U 
                                                & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i 
                                                   >> 0x0cU))) 
                                            << 0x00000019U) 
                                           | (0x01f00000U 
                                              & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i 
                                                 << 0x00000012U))) 
                                          | ((0x00038000U 
                                              & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i 
                                                 << 8U)) 
                                             | (0x00000380U 
                                                & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i))));
                }
            } else {
                vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__instr_decompressed 
                    = (0x00045413U | ((0x40000000U 
                                       & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i 
                                          << 0x00000014U)) 
                                      | ((((0x00001f00U 
                                            & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i 
                                               << 6U)) 
                                           | (0x00000038U 
                                              & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i 
                                                 >> 4U))) 
                                          << 0x0000000cU) 
                                         | (0x00000380U 
                                            & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i))));
            }
            if ((1U & (~ (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i 
                          >> 0x0000000eU)))) {
                if ((1U & (~ (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i 
                              >> 0x0000000dU)))) {
                    if ((0x00000800U & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i)) {
                        if ((0x00000400U & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i)) {
                            if ((0x00001000U & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i)) {
                                vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__illegal_c_insn = 1U;
                            }
                        }
                    } else if ((0x00001000U & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i)) {
                        vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__illegal_c_insn = 1U;
                    }
                }
            }
        } else if ((0x00004000U & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i)) {
            if ((0x00002000U & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i)) {
                vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__instr_decompressed 
                    = (0x37U | (((- (IData)((1U & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i 
                                                   >> 0x0cU)))) 
                                 << 0x00000011U) | 
                                ((0x0001f000U & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i 
                                                 << 0x0000000aU)) 
                                 | (0x00000f80U & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i))));
                if ((2U == (0x0000001fU & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i 
                                           >> 7U)))) {
                    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__instr_decompressed 
                        = (0x00010113U | (((- (IData)(
                                                      (1U 
                                                       & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i 
                                                          >> 0x0cU)))) 
                                           << 0x0000001dU) 
                                          | ((((6U 
                                                & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i 
                                                   >> 2U)) 
                                               | (1U 
                                                  & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i 
                                                     >> 5U))) 
                                              << 0x0000001aU) 
                                             | ((0x02000000U 
                                                 & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i 
                                                    << 0x00000017U)) 
                                                | (0x01000000U 
                                                   & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i 
                                                      << 0x00000012U))))));
                }
                if ((0U == ((0x00000020U & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i 
                                            >> 7U)) 
                            | (0x0000001fU & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i 
                                              >> 2U))))) {
                    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__illegal_c_insn = 1U;
                }
            } else {
                vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__instr_decompressed 
                    = (0x13U | (((- (IData)((1U & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i 
                                                   >> 0x0cU)))) 
                                 << 0x0000001aU) | 
                                ((0x02000000U & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i 
                                                 << 0x0000000dU)) 
                                 | ((0x01f00000U & 
                                     (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i 
                                      << 0x00000012U)) 
                                    | (0x00000f80U 
                                       & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i)))));
            }
        } else {
            vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__instr_decompressed 
                = ((0x00002000U & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i)
                    ? (0x6fU | (((((((2U & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i 
                                            >> 0x0000000bU)) 
                                     | (1U & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i 
                                              >> 8U))) 
                                    << 9U) | (((0x0000000cU 
                                                & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i 
                                                   >> 7U)) 
                                               | ((2U 
                                                   & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i 
                                                      >> 5U)) 
                                                  | (1U 
                                                     & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i 
                                                        >> 7U)))) 
                                              << 5U)) 
                                  | ((0x00000010U & 
                                      (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i 
                                       << 2U)) | ((8U 
                                                   & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i 
                                                      >> 8U)) 
                                                  | (7U 
                                                     & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i 
                                                        >> 3U))))) 
                                 << 0x00000015U) | 
                                ((0x001ff000U & ((- (IData)(
                                                            (1U 
                                                             & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i 
                                                                >> 0x0cU)))) 
                                                 << 0x0000000cU)) 
                                 | (0x00000080U & (
                                                   (~ 
                                                    (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i 
                                                     >> 0x0fU)) 
                                                   << 7U)))))
                    : (0x13U | ((((0x00000fc0U & ((- (IData)(
                                                             (1U 
                                                              & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i 
                                                                 >> 0x0cU)))) 
                                                  << 6U)) 
                                  | ((0x00000020U & 
                                      (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i 
                                       >> 7U)) | (0x0000001fU 
                                                  & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i 
                                                     >> 2U)))) 
                                 << 0x00000014U) | 
                                ((0x000f8000U & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i 
                                                 << 8U)) 
                                 | (0x00000f80U & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i)))));
        }
    } else if ((0x00008000U & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i)) {
        if ((0x00004000U & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i)) {
            if ((1U & (~ (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i 
                          >> 0x0000000dU)))) {
                vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__instr_decompressed 
                    = (0x00842023U | (((((2U & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i 
                                                >> 4U)) 
                                         | (1U & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i 
                                                  >> 0x0cU))) 
                                        << 0x00000019U) 
                                       | (0x00700000U 
                                          & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i 
                                             << 0x00000012U))) 
                                      | ((0x00038000U 
                                          & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i 
                                             << 8U)) 
                                         | ((0x00000c00U 
                                             & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i) 
                                            | (0x00000200U 
                                               & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i 
                                                  << 3U))))));
            }
            if ((0x00002000U & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i)) {
                vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__illegal_c_insn = 1U;
            }
        } else {
            vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__illegal_c_insn = 1U;
        }
    } else if ((0x00004000U & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i)) {
        if ((1U & (~ (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i 
                      >> 0x0000000dU)))) {
            vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__instr_decompressed 
                = (0x00042403U | ((0x04000000U & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i 
                                                  << 0x00000015U)) 
                                  | ((0x03800000U & 
                                      (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i 
                                       << 0x0000000dU)) 
                                     | ((0x00400000U 
                                         & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i 
                                            << 0x00000010U)) 
                                        | ((0x00038000U 
                                            & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i 
                                               << 8U)) 
                                           | (0x00000380U 
                                              & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i 
                                                 << 5U)))))));
        }
        if ((0x00002000U & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i)) {
            vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__illegal_c_insn = 1U;
        }
    } else {
        if ((1U & (~ (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i 
                      >> 0x0000000dU)))) {
            vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__instr_decompressed 
                = (0x00010413U | ((0x3c000000U & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i 
                                                  << 0x00000013U)) 
                                  | ((0x03000000U & 
                                      (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i 
                                       << 0x0000000dU)) 
                                     | ((0x00800000U 
                                         & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i 
                                            << 0x00000012U)) 
                                        | ((0x00400000U 
                                            & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i 
                                               << 0x00000010U)) 
                                           | (0x00000380U 
                                              & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i 
                                                 << 5U)))))));
        }
        if ((0x00002000U & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i)) {
            vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__illegal_c_insn = 1U;
        } else if ((0U == (0x000000ffU & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i 
                                          >> 5U)))) {
            vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__illegal_c_insn = 1U;
        }
    }
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__lsu_rdata_o 
        = ((2U & (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__data_type_q))
            ? ((2U & (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__rdata_offset_q))
                ? ((1U & (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__rdata_offset_q))
                    ? ((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__data_sign_ext_q)
                        ? (((- (IData)((vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__host_rdata[0U] 
                                        >> 0x0000001fU))) 
                            << 8U) | (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__host_rdata[0U] 
                                      >> 0x00000018U))
                        : VL_SHIFTR_III(32,32,32, vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__host_rdata[0U], 0x00000018U))
                    : ((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__data_sign_ext_q)
                        ? (((- (IData)((1U & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__host_rdata[0U] 
                                              >> 0x00000017U)))) 
                            << 8U) | (0x000000ffU & 
                                      (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__host_rdata[0U] 
                                       >> 0x00000010U)))
                        : (0x000000ffU & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__host_rdata[0U] 
                                          >> 0x00000010U))))
                : ((1U & (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__rdata_offset_q))
                    ? ((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__data_sign_ext_q)
                        ? (((- (IData)((1U & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__host_rdata[0U] 
                                              >> 0x0000000fU)))) 
                            << 8U) | (0x000000ffU & 
                                      (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__host_rdata[0U] 
                                       >> 8U))) : (0x000000ffU 
                                                   & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__host_rdata[0U] 
                                                      >> 8U)))
                    : ((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__data_sign_ext_q)
                        ? (((- (IData)((1U & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__host_rdata[0U] 
                                              >> 7U)))) 
                            << 8U) | (0x000000ffU & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__host_rdata[0U]))
                        : (0x000000ffU & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__host_rdata[0U]))))
            : ((1U & (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__data_type_q))
                ? ((2U & (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__rdata_offset_q))
                    ? ((1U & (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__rdata_offset_q))
                        ? ((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__data_sign_ext_q)
                            ? (((- (IData)((1U & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__host_rdata[0U] 
                                                  >> 7U)))) 
                                << 0x00000010U) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3))
                            : (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3))
                        : ((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__data_sign_ext_q)
                            ? (((- (IData)((vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__host_rdata[0U] 
                                            >> 0x0000001fU))) 
                                << 0x00000010U) | (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__host_rdata[0U] 
                                                   >> 0x00000010U))
                            : VL_SHIFTR_III(32,32,32, vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__host_rdata[0U], 0x00000010U)))
                    : ((1U & (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__rdata_offset_q))
                        ? ((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__data_sign_ext_q)
                            ? (((- (IData)((1U & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__host_rdata[0U] 
                                                  >> 0x00000017U)))) 
                                << 0x00000010U) | (0x0000ffffU 
                                                   & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__host_rdata[0U] 
                                                      >> 8U)))
                            : (0x0000ffffU & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__host_rdata[0U] 
                                              >> 8U)))
                        : ((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__data_sign_ext_q)
                            ? (((- (IData)((1U & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__host_rdata[0U] 
                                                  >> 0x0000000fU)))) 
                                << 0x00000010U) | (0x0000ffffU 
                                                   & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__host_rdata[0U]))
                            : (0x0000ffffU & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__host_rdata[0U]))))
                : ((2U & (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__rdata_offset_q))
                    ? ((1U & (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__rdata_offset_q))
                        ? ((vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__host_rdata[0U] 
                            << 8U) | (0x000000ffU & 
                                      (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__rdata_q 
                                       >> 0x00000010U)))
                        : ((vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__host_rdata[0U] 
                            << 0x00000010U) | (0x0000ffffU 
                                               & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__rdata_q 
                                                  >> 8U))))
                    : ((1U & (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__rdata_offset_q))
                        ? ((vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__host_rdata[0U] 
                            << 0x00000018U) | vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__rdata_q)
                        : vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__host_rdata[0U]))));
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__clk 
        = ((IData)(vlSelfRef.clk_i) & (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__core_clock_gate_i__DOT__gen_generic__DOT__u_impl_generic__DOT__en_latch));
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__illegal_insn_i 
        = ((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__instr_valid_id_q) 
           & ((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__illegal_csr_insn_o) 
              | ((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn) 
                 | (((~ (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q)) 
                     & (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__dret_insn_dec)) 
                    | ((3U != (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__priv_lvl_q)) 
                       & ((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__mret_insn_dec) 
                          | ((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mstatus_csr__DOT__rdata_q) 
                             & (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__wfi_insn_dec))))))));
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_by_zero_d 
        = vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_by_zero_q;
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__op_numerator_d 
        = vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__op_numerator_q;
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__split_misaligned_access 
        = (((0U == (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__lsu_type)) 
            & (0U != (3U & (IData)((vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__adder_result_ext_o 
                                    >> 1U))))) | (IData)(
                                                         ((1U 
                                                           == (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__lsu_type)) 
                                                          & (6ULL 
                                                             == 
                                                             (6ULL 
                                                              & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__adder_result_ext_o)))));
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__op_denominator_d 
        = (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__imd_val_q[1U]);
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__is_greater_equal 
        = (1U & ((1U & ((IData)((vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__imd_val_q_ex[0U] 
                                 >> 0x1fU)) ^ (IData)(
                                                      (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__imd_val_q[1U] 
                                                       >> 0x0000001fU))))
                  ? (IData)((vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__imd_val_q_ex[0U] 
                             >> 0x1fU)) : (~ (IData)(
                                                     (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__adder_result_ext_o 
                                                      >> 0x00000020U)))));
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__host_wdata[0U] 
        = ((1U & (IData)((vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__adder_result_ext_o 
                          >> 2U))) ? ((1U & (IData)(
                                                    (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__adder_result_ext_o 
                                                     >> 1U)))
                                       ? ((vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_rf_rdata_b_ecc_buf__DOT__gen_generic__DOT__u_impl_generic__DOT__in_i 
                                           << 0x00000018U) 
                                          | (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_rf_rdata_b_ecc_buf__DOT__gen_generic__DOT__u_impl_generic__DOT__in_i 
                                             >> 8U))
                                       : ((vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_rf_rdata_b_ecc_buf__DOT__gen_generic__DOT__u_impl_generic__DOT__in_i 
                                           << 0x00000010U) 
                                          | (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_rf_rdata_b_ecc_buf__DOT__gen_generic__DOT__u_impl_generic__DOT__in_i 
                                             >> 0x00000010U)))
            : ((1U & (IData)((vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__adder_result_ext_o 
                              >> 1U))) ? ((vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_rf_rdata_b_ecc_buf__DOT__gen_generic__DOT__u_impl_generic__DOT__in_i 
                                           << 8U) | 
                                          (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_rf_rdata_b_ecc_buf__DOT__gen_generic__DOT__u_impl_generic__DOT__in_i 
                                           >> 0x00000018U))
                : vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_rf_rdata_b_ecc_buf__DOT__gen_generic__DOT__u_impl_generic__DOT__in_i));
    __Vtableidx7 = (((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__handle_misaligned_q) 
                     << 4U) | ((0x0000000cU & ((IData)(
                                                       (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__adder_result_ext_o 
                                                        >> 1U)) 
                                               << 2U)) 
                               | (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__lsu_type)));
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__data_be 
        = Vtop_verilator__ConstPool__TABLE_h9816e50e_0
        [__Vtableidx7];
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__host_addr[0U] 
        = ((IData)((vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__adder_result_ext_o 
                    >> 3U)) << 2U);
    __Vtableidx5 = (((0U != (IData)((vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__adder_result_ext_o 
                                     >> 1U))) << 9U) 
                    | ((0x00000100U & ((((vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__operand_a_i 
                                          ^ vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__operand_b_i) 
                                         >> 0x0000001fU)
                                         ? ((vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__operand_a_i 
                                             >> 0x0000001fU) 
                                            ^ (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__cmp_signed))
                                         : (~ (IData)(
                                                      (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__adder_result_ext_o 
                                                       >> 0x00000020U)))) 
                                       << 8U)) | ((
                                                   (0U 
                                                    == (IData)(
                                                               (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__adder_result_ext_o 
                                                                >> 1U))) 
                                                   << 7U) 
                                                  | (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operator))));
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__cmp_result 
        = Vtop_verilator__ConstPool__TABLE_h0c298502_0
        [__Vtableidx5];
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__wb_stage_i__DOT__rf_wdata_wb_mux[1U] 
        = vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__lsu_rdata_o;
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT____VdfgRegularize_h68cd8b5a_0_6 
        = ((~ (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__illegal_insn_i)) 
           & (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT____VdfgRegularize_h68cd8b5a_0_7));
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__illegal_insn_d 
        = ((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__illegal_insn_i) 
           & (6U != (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs)));
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_operand 
        = ((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_left)
            ? vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__operand_a_rev
            : vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__operand_a_i);
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result_ext_signed 
        = (0x00000001ffffffffULL & VL_SHIFTRS_QQI(33,33,5, 
                                                  (((QData)((IData)(
                                                                    ((8U 
                                                                      == (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operator)) 
                                                                     & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_operand 
                                                                        >> 0x0000001fU)))) 
                                                    << 0x00000020U) 
                                                   | (QData)((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_operand))), 
                                                  (0x0000001fU 
                                                   & ((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__instr_first_cycle_i)
                                                       ? vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__operand_b_i
                                                       : 
                                                      (- vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__operand_b_i)))));
    if ((1U & (~ ((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__md_state_q) 
                  >> 2U)))) {
        if ((1U & (~ ((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__md_state_q) 
                      >> 1U)))) {
            if ((1U & (~ (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__md_state_q)))) {
                if ((2U == (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__multdiv_operator))) {
                    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_by_zero_d 
                        = (0U == (IData)((vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__adder_result_ext_o 
                                          >> 1U)));
                }
            }
            if ((1U & (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__md_state_q))) {
                vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__op_numerator_d 
                    = ((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_sign_a)
                        ? (IData)((vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__adder_result_ext_o 
                                   >> 1U)) : vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_rf_rdata_a_ecc_buf__DOT__gen_generic__DOT__u_impl_generic__DOT__in_i);
            }
        }
        if ((2U & (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__md_state_q))) {
            if ((1U & (~ (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__md_state_q)))) {
                vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__op_denominator_d 
                    = ((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_sign_b)
                        ? (IData)((vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__adder_result_ext_o 
                                   >> 1U)) : vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_rf_rdata_b_ecc_buf__DOT__gen_generic__DOT__u_impl_generic__DOT__in_i);
            }
        }
    }
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__multdiv_imd_val_d[1U] 
        = (QData)((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__op_denominator_d));
    if (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__is_greater_equal) {
        vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__next_remainder 
            = (IData)((vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__adder_result_ext_o 
                       >> 1U));
        vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__next_quotient 
            = ((QData)((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__op_quotient_q)) 
               | (QData)((IData)(((IData)(1U) << (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_counter_q)))));
    } else {
        vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__next_remainder 
            = (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__imd_val_q[0U]);
        vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__next_quotient 
            = (QData)((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__op_quotient_q));
    }
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_bus__DOT__host_wdata_i[0U] 
        = vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__host_wdata[0U];
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_bus__DOT__host_wdata_i[1U] 
        = vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__host_wdata[1U];
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__host_be[0U] 
        = vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__data_be;
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_bus__DOT__host_addr_i[0U] 
        = vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__host_addr[0U];
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_bus__DOT__host_addr_i[1U] 
        = vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__host_addr[1U];
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__exc_req_d 
        = (((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ecall_insn) 
            | ((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ebrk_insn) 
               | ((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__illegal_insn_d) 
                  | (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__instr_fetch_err)))) 
           & (6U != (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs)));
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result_rev 
        = ((((((((2U & ((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result_ext_signed) 
                        << 1U)) | (1U & (IData)((vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result_ext_signed 
                                                 >> 1U)))) 
                << 6U) | (((2U & ((IData)((vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result_ext_signed 
                                           >> 2U)) 
                                  << 1U)) | (1U & (IData)(
                                                          (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result_ext_signed 
                                                           >> 3U)))) 
                          << 4U)) | ((((2U & ((IData)(
                                                      (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result_ext_signed 
                                                       >> 4U)) 
                                              << 1U)) 
                                       | (1U & (IData)(
                                                       (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result_ext_signed 
                                                        >> 5U)))) 
                                      << 2U) | ((2U 
                                                 & ((IData)(
                                                            (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result_ext_signed 
                                                             >> 6U)) 
                                                    << 1U)) 
                                                | (1U 
                                                   & (IData)(
                                                             (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result_ext_signed 
                                                              >> 7U)))))) 
             << 0x00000018U) | ((((((2U & ((IData)(
                                                   (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result_ext_signed 
                                                    >> 8U)) 
                                           << 1U)) 
                                    | (1U & (IData)(
                                                    (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result_ext_signed 
                                                     >> 9U)))) 
                                   << 6U) | (((2U & 
                                               ((IData)(
                                                        (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result_ext_signed 
                                                         >> 0x0000000aU)) 
                                                << 1U)) 
                                              | (1U 
                                                 & (IData)(
                                                           (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result_ext_signed 
                                                            >> 0x0000000bU)))) 
                                             << 4U)) 
                                 | ((((2U & ((IData)(
                                                     (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result_ext_signed 
                                                      >> 0x0000000cU)) 
                                             << 1U)) 
                                      | (1U & (IData)(
                                                      (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result_ext_signed 
                                                       >> 0x0000000dU)))) 
                                     << 2U) | ((2U 
                                                & ((IData)(
                                                           (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result_ext_signed 
                                                            >> 0x0000000eU)) 
                                                   << 1U)) 
                                               | (1U 
                                                  & (IData)(
                                                            (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result_ext_signed 
                                                             >> 0x0000000fU)))))) 
                                << 0x00000010U)) | 
           (((((((2U & ((IData)((vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result_ext_signed 
                                 >> 0x00000010U)) << 1U)) 
                 | (1U & (IData)((vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result_ext_signed 
                                  >> 0x00000011U)))) 
                << 6U) | (((2U & ((IData)((vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result_ext_signed 
                                           >> 0x00000012U)) 
                                  << 1U)) | (1U & (IData)(
                                                          (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result_ext_signed 
                                                           >> 0x00000013U)))) 
                          << 4U)) | ((((2U & ((IData)(
                                                      (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result_ext_signed 
                                                       >> 0x00000014U)) 
                                              << 1U)) 
                                       | (1U & (IData)(
                                                       (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result_ext_signed 
                                                        >> 0x00000015U)))) 
                                      << 2U) | ((2U 
                                                 & ((IData)(
                                                            (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result_ext_signed 
                                                             >> 0x00000016U)) 
                                                    << 1U)) 
                                                | (1U 
                                                   & (IData)(
                                                             (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result_ext_signed 
                                                              >> 0x00000017U)))))) 
             << 8U) | (((((2U & ((IData)((vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result_ext_signed 
                                          >> 0x00000018U)) 
                                 << 1U)) | (1U & (IData)(
                                                         (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result_ext_signed 
                                                          >> 0x00000019U)))) 
                         << 6U) | (((2U & ((IData)(
                                                   (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result_ext_signed 
                                                    >> 0x0000001aU)) 
                                           << 1U)) 
                                    | (1U & (IData)(
                                                    (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result_ext_signed 
                                                     >> 0x0000001bU)))) 
                                   << 4U)) | ((((2U 
                                                 & ((IData)(
                                                            (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result_ext_signed 
                                                             >> 0x0000001cU)) 
                                                    << 1U)) 
                                                | (1U 
                                                   & (IData)(
                                                             (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result_ext_signed 
                                                              >> 0x0000001dU)))) 
                                               << 2U) 
                                              | ((2U 
                                                  & ((IData)(
                                                             (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result_ext_signed 
                                                              >> 0x0000001eU)) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (IData)(
                                                              (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result_ext_signed 
                                                               >> 0x0000001fU))))))));
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result 
        = ((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_left)
            ? vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result_rev
            : (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result_ext_signed));
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__op_quotient_d 
        = vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__op_quotient_q;
    if ((1U & (~ ((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__md_state_q) 
                  >> 2U)))) {
        if ((2U & (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__md_state_q))) {
            if ((1U & (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__md_state_q))) {
                vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__op_quotient_d 
                    = (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__next_quotient);
            }
        } else if ((1U & (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__md_state_q))) {
            vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__op_quotient_d = 0U;
        }
    }
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_counter_d 
        = (0x0000001fU & ((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_counter_q) 
                          - (IData)(1U)));
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__op_remainder_d 
        = vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__imd_val_q_ex[0U];
    if ((4U & (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__md_state_q))) {
        vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__md_state_d 
            = ((2U & (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__md_state_q))
                ? 0U : ((1U & (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__md_state_q))
                         ? 6U : 5U));
        if ((1U & (~ ((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__md_state_q) 
                      >> 1U)))) {
            vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__op_remainder_d 
                = ((1U & (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__md_state_q))
                    ? ((2U == (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__multdiv_operator))
                        ? (((~ (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_by_zero_q)) 
                            & ((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_sign_a) 
                               ^ (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_sign_b)))
                            ? (QData)((IData)((vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__adder_result_ext_o 
                                               >> 1U)))
                            : vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__imd_val_q_ex[0U])
                        : ((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_sign_a)
                            ? (QData)((IData)((vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__adder_result_ext_o 
                                               >> 1U)))
                            : vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__imd_val_q_ex[0U]))
                    : ((2U == (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__multdiv_operator))
                        ? vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__next_quotient
                        : (QData)((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__next_remainder))));
        }
    } else if ((2U & (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__md_state_q))) {
        if ((1U & (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__md_state_q))) {
            vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__md_state_d 
                = ((1U == (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_counter_q))
                    ? 4U : 3U);
            vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__op_remainder_d 
                = (((QData)((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__next_remainder)) 
                    << 1U) | (QData)((IData)((1U & 
                                              (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__op_numerator_q 
                                               >> (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_counter_d))))));
        } else {
            vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__md_state_d = 3U;
            vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__op_remainder_d 
                = (QData)((IData)((vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__op_numerator_q 
                                   >> 0x1fU)));
            vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_counter_d = 0x1fU;
        }
    } else if ((1U & (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__md_state_q))) {
        vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__md_state_d = 2U;
        vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_counter_d = 0x1fU;
    } else {
        if ((2U == (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__multdiv_operator))) {
            vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__md_state_d 
                = (((~ ((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_cpuctrlsts_part_csr__DOT__rdata_q) 
                        >> 1U)) & (0U == (IData)((vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__adder_result_ext_o 
                                                  >> 1U))))
                    ? 6U : 1U);
            vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__op_remainder_d = 0x00000003ffffffffULL;
        } else {
            vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__md_state_d 
                = (((~ ((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_cpuctrlsts_part_csr__DOT__rdata_q) 
                        >> 1U)) & (0U == (IData)((vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__adder_result_ext_o 
                                                  >> 1U))))
                    ? 6U : 1U);
            vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__op_remainder_d 
                = (QData)((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_rf_rdata_a_ecc_buf__DOT__gen_generic__DOT__u_impl_generic__DOT__in_i));
        }
        vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_counter_d = 0x1fU;
    }
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_bus__DOT__host_be_i[0U] 
        = vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__host_be[0U];
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_bus__DOT__host_be_i[1U] 
        = vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__host_be[1U];
    __VdfgRegularize_he50b618e_0_2 = ((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__div_sel_ex)
                                       ? vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__op_remainder_d
                                       : vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__mac_res_d);
    if (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__multdiv_sel_i) {
        vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__imd_val_d_ex[1U] 
            = (QData)((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__op_denominator_d));
        vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__imd_val_d_ex[0U] 
            = __VdfgRegularize_he50b618e_0_2;
    } else {
        vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__imd_val_d_ex[1U] 
            = (QData)((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_imd_val_d[1U]));
        vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__imd_val_d_ex[0U] 
            = (QData)((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_imd_val_d[0U]));
    }
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_result = 0U;
    if ((0x00000040U & (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operator))) {
        if ((1U & (~ ((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operator) 
                      >> 5U)))) {
            if ((1U & (~ ((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operator) 
                          >> 4U)))) {
                if ((1U & (~ ((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operator) 
                              >> 3U)))) {
                    if ((1U & (~ ((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operator) 
                                  >> 2U)))) {
                        if ((1U & (~ ((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operator) 
                                      >> 1U)))) {
                            if ((1U & (~ (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operator)))) {
                                vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_result = 0U;
                            }
                        }
                    }
                }
            }
        }
    } else {
        vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_result 
            = ((0x00000020U & (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operator))
                ? ((0x00000010U & (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operator))
                    ? 0U : ((8U & (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operator))
                             ? ((4U & (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operator))
                                 ? ((2U & (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operator))
                                     ? 0U : ((1U & (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operator))
                                              ? 0U : (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__cmp_result)))
                                 : ((2U & (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operator))
                                     ? ((1U & (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operator))
                                         ? (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__cmp_result)
                                         : 0U) : 0U))
                             : 0U)) : ((0x00000010U 
                                        & (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operator))
                                        ? ((8U & (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operator))
                                            ? ((4U 
                                                & (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operator))
                                                ? (
                                                   (2U 
                                                    & (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operator))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operator))
                                                     ? 0U
                                                     : (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__cmp_result))
                                                    : (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__cmp_result))
                                                : (
                                                   (2U 
                                                    & (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operator))
                                                    ? (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__cmp_result)
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operator))
                                                     ? (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__cmp_result)
                                                     : (IData)(
                                                               (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__adder_result_ext_o 
                                                                >> 1U)))))
                                            : ((4U 
                                                & (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operator))
                                                ? (
                                                   (2U 
                                                    & (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operator))
                                                    ? (IData)(
                                                              (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__adder_result_ext_o 
                                                               >> 1U))
                                                    : 0U)
                                                : 0U))
                                        : ((8U & (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operator))
                                            ? ((4U 
                                                & (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operator))
                                                ? (
                                                   (2U 
                                                    & (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operator))
                                                    ? 0U
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operator))
                                                     ? 0U
                                                     : vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result))
                                                : vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result)
                                            : ((4U 
                                                & (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operator))
                                                ? vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__bwlogic_result
                                                : (
                                                   (2U 
                                                    & (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operator))
                                                    ? vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__bwlogic_result
                                                    : (IData)(
                                                              (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__adder_result_ext_o 
                                                               >> 1U)))))));
    }
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__multdiv_imd_val_d[0U] 
        = __VdfgRegularize_he50b618e_0_2;
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__rf_wdata_id_o 
        = ((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__rf_wdata_sel)
            ? vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_rdata_int
            : ((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__multdiv_sel_i)
                ? ((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__div_sel_ex)
                    ? (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__imd_val_q[0U])
                    : (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__mac_res_d))
                : vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_result));
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__imd_val_d_o[0U] 
        = vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__multdiv_imd_val_d[0U];
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__imd_val_d_o[1U] 
        = vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__multdiv_imd_val_d[1U];
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__imd_val_d_ex_i[0U] 
        = vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__imd_val_d_ex[0U];
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__imd_val_d_ex_i[1U] 
        = vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__imd_val_d_ex[1U];
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__imd_val_d_o[0U] 
        = vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__imd_val_d_ex[0U];
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__imd_val_d_o[1U] 
        = vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__imd_val_d_ex[1U];
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__wb_stage_i__DOT__rf_wdata_wb_mux[0U] 
        = vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__rf_wdata_id_o;
}

void Vtop_verilator___024root___act_sequent__TOP__0(Vtop_verilator___024root* vlSelf);
void Vtop_verilator___024root___act_comb__TOP__0(Vtop_verilator___024root* vlSelf);
void Vtop_verilator___024root___act_comb__TOP__1(Vtop_verilator___024root* vlSelf);

VL_ATTR_COLD void Vtop_verilator___024root___eval_stl(Vtop_verilator___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_verilator___024root___eval_stl\n"); );
    Vtop_verilator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered[1U])) {
        Vtop_verilator___024root___stl_sequent__TOP__0(vlSelf);
        Vtop_verilator___024root____Vm_traceActivitySetAll(vlSelf);
    }
    if ((1ULL & (vlSelfRef.__VstlTriggered[1U] | vlSelfRef.__VstlTriggered[0U]))) {
        Vtop_verilator___024root___act_sequent__TOP__0(vlSelf);
        Vtop_verilator___024root____Vm_traceActivitySetAll(vlSelf);
    }
    if (((1ULL & vlSelfRef.__VstlTriggered[1U]) | (7ULL 
                                                   & vlSelfRef.__VstlTriggered[0U]))) {
        Vtop_verilator___024root___act_comb__TOP__0(vlSelf);
        Vtop_verilator___024root____Vm_traceActivitySetAll(vlSelf);
    }
    if (((1ULL & vlSelfRef.__VstlTriggered[1U]) | (0x000000000000000fULL 
                                                   & vlSelfRef.__VstlTriggered[0U]))) {
        Vtop_verilator___024root___act_comb__TOP__1(vlSelf);
        Vtop_verilator___024root____Vm_traceActivitySetAll(vlSelf);
    }
}

VL_ATTR_COLD bool Vtop_verilator___024root___eval_phase__stl(Vtop_verilator___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_verilator___024root___eval_phase__stl\n"); );
    Vtop_verilator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VstlExecute;
    // Body
    Vtop_verilator___024root___eval_triggers_vec__stl(vlSelf);
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtop_verilator___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
    }
#endif
    __VstlExecute = Vtop_verilator___024root___trigger_anySet__stl(vlSelfRef.__VstlTriggered);
    if (__VstlExecute) {
        Vtop_verilator___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

bool Vtop_verilator___024root___trigger_anySet__ico(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop_verilator___024root___dump_triggers__ico(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_verilator___024root___dump_triggers__ico\n"); );
    // Body
    if ((1U & (~ (IData)(Vtop_verilator___024root___trigger_anySet__ico(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: Internal 'ico' trigger - first iteration\n");
    }
    if ((1U & (IData)((triggers[0U] >> 1U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 1 is active: Internal 'ico' trigger - DPI export trigger\n");
    }
}
#endif  // VL_DEBUG

bool Vtop_verilator___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 2> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop_verilator___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 2> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_verilator___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(Vtop_verilator___024root___trigger_anySet__act(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: @([hybrid] top_verilator.u_ibex_demo_system.u_top.u_ibex_core.id_stage_i.instr_executing_spec)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 1U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 1 is active: @([hybrid] top_verilator.u_ibex_demo_system.u_top.u_ibex_core.id_stage_i.controller_i.special_req)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 2U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 2 is active: @([hybrid] top_verilator.u_ibex_demo_system.u_top.u_ibex_core.id_stage_i.controller_i.id_in_ready_o)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 3U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 3 is active: @([hybrid] top_verilator.u_ibex_demo_system.gen_dm_top.u_dm_top.clear_resumeack)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 4U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 4 is active: @(posedge clk_i)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 5U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 5 is active: @(negedge rst_ni)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 6U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 6 is active: @(negedge top_verilator.u_ibex_demo_system.rst_core_n)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 7U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 7 is active: @(posedge top_verilator.u_ibex_demo_system.u_top.clk)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 8U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 8 is active: @(negedge top_verilator.u_ibex_demo_system.u_top.clk)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 9U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 9 is active: @(negedge top_verilator.u_ibex_demo_system.gen_dm_top.u_dm_top.dap.i_dmi_cdc.combined_rstn_premux)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 0x0000000aU)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 10 is active: @(negedge top_verilator.u_ibex_demo_system.gen_dm_top.u_dm_top.dap.i_dmi_cdc.__Vcellinp__u_combined_rstn_sync__rst_ni)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 0x0000000bU)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 11 is active: @(negedge clk_i)\n");
    }
    if ((1U & (IData)(triggers[1U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 64 is active: Internal 'act' trigger - DPI export trigger\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtop_verilator___024root____Vm_traceActivitySetAll(Vtop_verilator___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_verilator___024root____Vm_traceActivitySetAll\n"); );
    Vtop_verilator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vm_traceActivity[0U] = 1U;
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
    vlSelfRef.__Vm_traceActivity[4U] = 1U;
    vlSelfRef.__Vm_traceActivity[5U] = 1U;
    vlSelfRef.__Vm_traceActivity[6U] = 1U;
    vlSelfRef.__Vm_traceActivity[7U] = 1U;
    vlSelfRef.__Vm_traceActivity[8U] = 1U;
    vlSelfRef.__Vm_traceActivity[9U] = 1U;
    vlSelfRef.__Vm_traceActivity[10U] = 1U;
    vlSelfRef.__Vm_traceActivity[11U] = 1U;
    vlSelfRef.__Vm_traceActivity[12U] = 1U;
    vlSelfRef.__Vm_traceActivity[13U] = 1U;
    vlSelfRef.__Vm_traceActivity[14U] = 1U;
    vlSelfRef.__Vm_traceActivity[15U] = 1U;
    vlSelfRef.__Vm_traceActivity[16U] = 1U;
    vlSelfRef.__Vm_traceActivity[17U] = 1U;
    vlSelfRef.__Vm_traceActivity[18U] = 1U;
    vlSelfRef.__Vm_traceActivity[19U] = 1U;
    vlSelfRef.__Vm_traceActivity[20U] = 1U;
    vlSelfRef.__Vm_traceActivity[21U] = 1U;
}

VL_ATTR_COLD void Vtop_verilator___024root___ctor_var_reset(Vtop_verilator___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_verilator___024root___ctor_var_reset\n"); );
    Vtop_verilator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->vlNamep);
    vlSelf->clk_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11908517815223722933ull);
    vlSelf->rst_ni = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3161515032326629241ull);
    vlSelf->top_verilator__DOT__uart_sys_rx = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7936071153241759285ull);
    vlSelf->top_verilator__DOT__uart_sys_tx = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13920264314853925574ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gp_o = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 2511093144602787850ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__spi_tx_o = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4645642187218033261ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__td_o = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7957048001997954650ull);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__host_req[__Vi0] = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3720873610348511897ull);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__host_gnt[__Vi0] = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5351485648011216402ull);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__host_addr[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11170548799737150206ull);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__host_we[__Vi0] = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11811298161875202764ull);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__host_be[__Vi0] = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 7379969947372570330ull);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__host_wdata[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2511423235681581132ull);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__host_rvalid[__Vi0] = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11642625924641473382ull);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__host_rdata[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11899589107784201521ull);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__host_err[__Vi0] = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1113187383689199258ull);
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_req[__Vi0] = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11876627835489686314ull);
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_addr[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6641240163228392252ull);
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_we[__Vi0] = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1245391278360300761ull);
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_be[__Vi0] = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 7929134643042213058ull);
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_wdata[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9080890396587392459ull);
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_rvalid[__Vi0] = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9350093054521405869ull);
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_rdata[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7080908623971482038ull);
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__device_err[__Vi0] = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12221613872439985518ull);
    }
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__core_instr_rvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18182415626444521307ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__core_instr_sel_dbg = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10042219927327108307ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__mem_instr_rdata = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17423468273692808410ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__dbg_instr_req = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6355820989949431095ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__dbg_device_rvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4734362904127874777ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__rst_core_n = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9263270961884352544ull);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__cfg_device_addr_base[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8004615747818809541ull);
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__cfg_device_addr_mask[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5085238518943270865ull);
    }
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT____Vcellout__u_ram__a_rdata_o = 0;
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT____Vcellout__u_ram__a_rvalid_o = 0;
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT____Vcellout__u_gpio__device_rvalid_o = 0;
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT____Vcellout__u_pwm__device_rvalid_o = 0;
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT____Vcellout__u_spi__device_rvalid_o = 0;
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT____Vcellout__u_simulator_ctrl__rvalid_o = 0;
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_bus__DOT__host_req_i[__Vi0] = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14607585302148515739ull);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_bus__DOT__host_gnt_o[__Vi0] = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2310165976451135861ull);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_bus__DOT__host_addr_i[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 13067346704723415360ull);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_bus__DOT__host_we_i[__Vi0] = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5095237173073363424ull);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_bus__DOT__host_be_i[__Vi0] = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 9664114743388753615ull);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_bus__DOT__host_wdata_i[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 15781621689515308238ull);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_bus__DOT__host_rvalid_o[__Vi0] = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17729846393239542398ull);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_bus__DOT__host_rdata_o[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17709587288132216752ull);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_bus__DOT__host_err_o[__Vi0] = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9024221507707347667ull);
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_bus__DOT__device_req_o[__Vi0] = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16115789122062824616ull);
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_bus__DOT__device_addr_o[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1202228594984235690ull);
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_bus__DOT__device_we_o[__Vi0] = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15829348410478980616ull);
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_bus__DOT__device_be_o[__Vi0] = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 1979492858068629850ull);
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_bus__DOT__device_wdata_o[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2720237600473615838ull);
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_bus__DOT__device_rvalid_i[__Vi0] = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10275452118087748665ull);
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_bus__DOT__device_rdata_i[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11495258858916704679ull);
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_bus__DOT__device_err_i[__Vi0] = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5884292543481088543ull);
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_bus__DOT__cfg_device_addr_base[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10828534840870918241ull);
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_bus__DOT__cfg_device_addr_mask[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17831375721025674280ull);
    }
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_bus__DOT__host_sel_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10442009583631098171ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_bus__DOT__device_sel_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13776038911116340329ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_bus__DOT__decode_err_resp = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12097948064155777222ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_bus__DOT__host_sel_req = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18225360187898712650ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_bus__DOT__host_sel_resp = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5380669902605577814ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_bus__DOT__device_sel_req = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 2723981466956132149ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_bus__DOT__device_sel_resp = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 9178648311055274693ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__double_fault_seen_o = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2459204400753488283ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11001776969763325428ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__core_busy_q = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 13757952757896203544ull);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__ic_tag_rdata[__Vi0] = VL_SCOPED_RAND_RESET_I(22, __VscopeHash, 9725152017946282146ull);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__ic_data_rdata[__Vi0] = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 10887375597327144489ull);
    }
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__core_clock_gate_i__DOT__gen_generic__DOT__u_impl_generic__DOT__en_latch = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8188085528509705133ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_rf_rdata_a_ecc_buf__DOT__gen_generic__DOT__u_impl_generic__DOT__in_i = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1405061764013907126ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_rf_rdata_b_ecc_buf__DOT__gen_generic__DOT__u_impl_generic__DOT__in_i = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4256113493665381126ull);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ic_tag_rdata_i[__Vi0] = VL_SCOPED_RAND_RESET_I(22, __VscopeHash, 14120838003967678081ull);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ic_data_rdata_i[__Vi0] = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 3123731745880240105ull);
    }
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7330918606529346709ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_c_id = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 11885240157361945723ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_is_compressed_id = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2083795107798089636ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_fetch_err = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13843011808864404832ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_fetch_err_plus2 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9125099126223044478ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__illegal_c_insn_id = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1010629504613837098ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__pc_id = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 446684746382321266ull);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__imd_val_d_ex[__Vi0] = VL_SCOPED_RAND_RESET_Q(34, __VscopeHash, 1769222075677104543ull);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__imd_val_q_ex[__Vi0] = VL_SCOPED_RAND_RESET_Q(34, __VscopeHash, 8447145819097934401ull);
    }
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__icache_inval = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15392172665411954107ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__pc_set = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4570167166302037020ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__pc_mux_id = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 1423261059001701407ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__exc_pc_mux_id = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 12372337997744796698ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__exc_cause = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 4403846893444504360ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__lsu_addr_incr_req = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15325341169375739111ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ctrl_busy = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4992521499708091613ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__mult_sel_ex = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15080480210448205191ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__div_sel_ex = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9536993165449263940ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_access = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11824965124521061413ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_req_int = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8227964996911886050ull);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_pmp_addr[__Vi0] = VL_SCOPED_RAND_RESET_Q(34, __VscopeHash, 2095841957174417272ull);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_pmp_cfg[__Vi0] = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 12426977505827807711ull);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__pmp_req_err[__Vi0] = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5407776058904830180ull);
    }
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__data_req_out = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4153670092776213587ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_save_if = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11904466596365220788ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_save_id = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13058760151946118260ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_restore_mret_id = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6380162394177964997ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_restore_dret_id = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13122917774774146289ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_save_cause = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6268074676693134648ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_mtval = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10613657915894254794ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__debug_mode_entering = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7332449335850625637ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__debug_csr_save = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17672355012341897461ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__perf_jump = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9912067288795014098ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__perf_branch = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 680766897128877242ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__perf_tbranch = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10876442217136733991ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__perf_load = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15253353622829641117ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__perf_store = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3517552349271483602ull);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__g_no_pmp__DOT__unused_csr_pmp_addr[__Vi0] = VL_SCOPED_RAND_RESET_Q(34, __VscopeHash, 2190404828231267346ull);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__g_no_pmp__DOT__unused_csr_pmp_cfg[__Vi0] = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 4070051024350455268ull);
    }
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__instr_req_o = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17666517424001495916ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__instr_gnt_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11303699531655266496ull);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__ic_tag_rdata_i[__Vi0] = VL_SCOPED_RAND_RESET_I(22, __VscopeHash, 16752071702805694757ull);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__ic_data_rdata_i[__Vi0] = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 17373007180820361740ull);
    }
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__instr_valid_id_d = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1983345007643080017ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__instr_valid_id_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12620869858088345798ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__instr_new_id_d = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5525394646819170827ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__instr_new_id_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 268116990060683171ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__instr_decompressed = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7535601928557256401ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__illegal_c_insn = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16099248856003994019ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__exc_pc = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4800054607456760617ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__irq_vec = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 12495061432831753502ull);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__unused_tag_ram_input[__Vi0] = VL_SCOPED_RAND_RESET_I(22, __VscopeHash, 14985608891784094949ull);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__unused_data_ram_input[__Vi0] = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 6128572507514911390ull);
    }
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5504146420853733312ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__valid_new_req = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3033886052835659905ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__valid_req_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2897750922719580330ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__discard_req_d = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16391960382434226635ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__discard_req_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5030999776408201063ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__rdata_outstanding_n = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 13459961496856488283ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__rdata_outstanding_q = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 18057587913666467977ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__branch_discard_n = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 2251191562506068214ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__branch_discard_q = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 14453988187316295027ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__stored_addr_d = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1613227721866899782ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__stored_addr_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 3327966589015015270ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fetch_addr_d = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10721276985200814118ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fetch_addr_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2562929722207477324ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT____VdfgRegularize_h78b13180_0_3 = 0;
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__in_valid_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17105065490762986072ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__in_addr_i = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12165155415648972578ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__in_rdata_i = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4367399678053988369ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__out_valid_o = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8041917209281826225ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__out_err_o = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2045110742959062017ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__rdata_d__BRA__63__03a32__KET__ = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14553048662653731911ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__rdata_d__BRA__31__03a0__KET__ = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14411160108280455935ull);
    VL_SCOPED_RAND_RESET_W(96, vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__rdata_q, __VscopeHash, 3349219959549389186ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__err_d__BRA__1__KET__ = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14900701521819408833ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__err_d__BRA__0__KET__ = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7783767323314390923ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__err_q__BRA__2__KET__ = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6803992374557206789ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__err_q__BRA__1__KET__ = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 481844532227373908ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__err_q__BRA__0__KET__ = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6124533169170187547ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_q = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 142586060727689346ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__lowest_free_entry__BRA__2__KET__ = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15362324784478968750ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__lowest_free_entry__BRA__1__KET__ = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11683140474166475093ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_pushed__BRA__2__KET__ = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12306591985479625735ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_pushed__BRA__1__KET__ = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6063855820438302997ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_pushed__BRA__0__KET__ = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8295161115090522637ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_popped__BRA__2__KET__ = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6001836235264339108ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_popped__BRA__1__KET__ = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 575129751615031401ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_popped__BRA__0__KET__ = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10874199829136725813ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__entry_en__BRA__2__KET__ = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4687317466015768481ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__entry_en__BRA__1__KET__ = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6702480744201563691ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__entry_en__BRA__0__KET__ = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14421091914749024996ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__pop_fifo = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11379972835114338006ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__rdata = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11672962315748643129ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__err = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15553922582428546569ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17969456677946490938ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__aligned_is_compressed = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7445296037946732720ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__unaligned_is_compressed = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9483475470891716528ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__addr_incr_two = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18192517116292055869ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__instr_addr_d = VL_SCOPED_RAND_RESET_I(31, __VscopeHash, 2097937322095599425ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__instr_addr_q = VL_SCOPED_RAND_RESET_I(31, __VscopeHash, 5338402024485637610ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT____VdfgRegularize_hb899178c_0_2 = 0;
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT____VdfgRegularize_hb899178c_0_3 = 0;
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT____VdfgRegularize_hb899178c_0_6 = 0;
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT____VdfgRegularize_hb899178c_0_7 = 0;
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__lsu_resp_valid_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9664025904986099736ull);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__imd_val_d_ex_i[__Vi0] = VL_SCOPED_RAND_RESET_Q(34, __VscopeHash, 7732610273733332381ull);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__imd_val_q_ex_o[__Vi0] = VL_SCOPED_RAND_RESET_Q(34, __VscopeHash, 7658822568986771650ull);
    }
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__lsu_req_o = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 600498800859859036ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__rf_wdata_id_o = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8504234765591559586ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__rf_we_id_o = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16487892792596362110ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__en_wb_o = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5910576787976350671ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__ebrk_insn = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1229942268324082197ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__mret_insn_dec = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9870218249563907288ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__dret_insn_dec = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10464107717234421016ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__ecall_insn_dec = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3629848883820587083ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__wfi_insn_dec = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7837732493506784150ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__branch_in_dec = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17935651581099108209ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__branch_set_raw_d = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 837631957626258742ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__branch_jump_set_done_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7070766209226150165ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__branch_jump_set_done_d = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17222481283359880256ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__jump_in_dec = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6273154423177181367ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__jump_set_dec = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10614972447513373429ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__jump_set_raw = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11007798245949696998ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__instr_executing_spec = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4622344122153191517ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_run = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17179680842004102902ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__stall_multdiv = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9518425873048935487ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__stall_branch = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 485866805656372053ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__stall_jump = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9334198982199572916ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__rf_wdata_sel = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2051375846312879644ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__rf_we_raw = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12989999501959333310ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__rf_ren_a_dec = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11124503751687625058ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__rf_ren_b_dec = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10903211874191375636ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operator = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 18081278421656434104ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_op_a_mux_sel = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 13631523973014233986ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_op_a_mux_sel_dec = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 3832198288094316927ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_op_b_mux_sel_dec = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17998260419083779674ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__stall_alu = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12896045837232663939ull);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__imd_val_q[__Vi0] = VL_SCOPED_RAND_RESET_Q(34, __VscopeHash, 16847255361028733461ull);
    }
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__imm_a_mux_sel = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6664846400240515686ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__imm_b_mux_sel = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 3076914688830383819ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__imm_b_mux_sel_dec = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 10744341820134872436ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__multdiv_en_dec = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6099256044955852655ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__multdiv_operator = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 16475664637872666576ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__multdiv_signed_mode = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 870960853358641836ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__lsu_we = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7987963836758224122ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__lsu_type = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 12245772690773527896ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__lsu_sign_ext = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13036591491415425855ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__lsu_req_dec = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3561707564832508048ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__id_fsm_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16618281036118547523ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__id_fsm_d = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18046211979978668832ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__g_branch_set_flop__DOT__branch_set_raw_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1407348726014214078ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT____VdfgRegularize_h68cd8b5a_0_4 = 0;
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT____VdfgRegularize_h68cd8b5a_0_5 = 0;
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT____VdfgRegularize_h68cd8b5a_0_6 = 0;
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT____VdfgRegularize_h68cd8b5a_0_7 = 0;
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__mult_en_o = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3258292641012409037ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__div_en_o = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14307534578293679901ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18300148236261520941ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__csr_illegal = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16560107923532687347ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__rf_we = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7131635493933236867ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__csr_op = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 12716170416804480734ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 10669268662031513465ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode_alu = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 10488851020780069391ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT____VdfgExtracted_h4ba40d0d__0 = 0;
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__illegal_insn_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11494455334506583906ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__instr_valid_clear_o = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2221718561095718417ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__id_in_ready_o = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8099458148533075688ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__load_err_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6548500440850561611ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__store_err_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10326778629509423328ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__branch_set_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15840983653769231593ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__jump_set_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8139481709392171848ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__irqs_i = VL_SCOPED_RAND_RESET_I(18, __VscopeHash, 8224831182536489175ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__stall_id_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15168203764663703609ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 339279831699253589ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_ns = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 3702183417356021816ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__nmi_mode_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2773232106712677613ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__nmi_mode_d = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9787848063358916937ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8114496724873806946ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_d = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8335796124484550817ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__debug_cause_q = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 2690896027152082864ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__load_err_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1432190769680041854ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__store_err_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11162318575864004428ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__exc_req_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16627632852108771154ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__exc_req_d = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4664518224373464237ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__illegal_insn_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 40187668732971950ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__illegal_insn_d = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16056019047613142814ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__instr_fetch_err_prio = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15292985904666149943ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__illegal_insn_prio = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1561618736655808501ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ecall_insn_prio = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9211252872085280438ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ebrk_insn_prio = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6604481977673977641ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__store_err_prio = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16630209226165471034ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__load_err_prio = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9231146858601294035ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__halt_if = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8450249376541298383ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__retain_id = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12254222744006957832ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__flush_id = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15516251353835147833ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__exc_req_lsu = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14279055220782480087ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__special_req = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4762739069475682659ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__do_single_step_d = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5655255784176033103ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__do_single_step_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7627452010432528989ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__enter_debug_mode_prio_d = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9421838721709291413ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__enter_debug_mode_prio_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10247040926281757000ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__enter_debug_mode = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5872332413203722247ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ebreak_into_debug = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8821023652066532462ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__handle_irq = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8534588590256799051ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__mfip_id = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 11024983732565229309ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ecall_insn = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4738505869434422044ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__mret_insn = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 568462938135849126ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__dret_insn = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2537175186326968066ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__wfi_insn = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10046877559604875233ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ebrk_insn = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12432814236425968020ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__instr_fetch_err = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1711098311811852297ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__imd_val_we_o = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 7029169100497294616ull);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__imd_val_d_o[__Vi0] = VL_SCOPED_RAND_RESET_Q(34, __VscopeHash, 10671523358097121088ull);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__imd_val_q_i[__Vi0] = VL_SCOPED_RAND_RESET_Q(34, __VscopeHash, 11495564658226527328ull);
    }
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__ex_valid_o = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7598844384156419421ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_result = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17404825034898021652ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__multdiv_alu_operand_b = VL_SCOPED_RAND_RESET_Q(33, __VscopeHash, 113194725116928529ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__multdiv_alu_operand_a = VL_SCOPED_RAND_RESET_Q(33, __VscopeHash, 15918155407275761839ull);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_imd_val_q[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7603032757220574991ull);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_imd_val_d[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16454148432483172272ull);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__multdiv_imd_val_d[__Vi0] = VL_SCOPED_RAND_RESET_Q(34, __VscopeHash, 14263589343750626106ull);
    }
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__operand_a_i = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6854549950268694527ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__operand_b_i = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 3142475249859360740ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__instr_first_cycle_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18077579598810663387ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__multdiv_sel_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12723735115124252771ull);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__imd_val_q_i[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7286709179292474524ull);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__imd_val_d_o[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17679429474543259386ull);
    }
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__adder_result_ext_o = VL_SCOPED_RAND_RESET_Q(34, __VscopeHash, 16787553423911315387ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__operand_a_rev = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10983772885429395300ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__adder_op_a_shift1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14239603202172041656ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__adder_op_a_shift2 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5166999388791478311ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__adder_op_a_shift3 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16432993529314588929ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__adder_op_b_negate = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14920569136756342529ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__cmp_signed = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1822947038529950486ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__cmp_result = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12402292706755928287ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_left = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10266062860826692642ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_operand = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 13420362682764437367ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result_ext_signed = VL_SCOPED_RAND_RESET_Q(33, __VscopeHash, 7464033223413040406ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16297292284877455401ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result_rev = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16348058371992841358ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__bwlogic_result = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 15857061105960801510ull);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__g_no_alu_rvb__DOT__unused_imd_val_q[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 3397264732323368585ull);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__imd_val_q_i[__Vi0] = VL_SCOPED_RAND_RESET_Q(34, __VscopeHash, 7874426447441954808ull);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__imd_val_d_o[__Vi0] = VL_SCOPED_RAND_RESET_Q(34, __VscopeHash, 8262121983606556886ull);
    }
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__accum = VL_SCOPED_RAND_RESET_Q(34, __VscopeHash, 14061808121766594574ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__sign_a = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17514149983421575223ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__sign_b = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2709971322140119999ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__mult_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16291047424266731522ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__mac_res_d = VL_SCOPED_RAND_RESET_Q(34, __VscopeHash, 13522445384373372174ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__op_remainder_d = VL_SCOPED_RAND_RESET_Q(34, __VscopeHash, 13946106104929295171ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_sign_a = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7602446809684868436ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_sign_b = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16593591128722009017ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__is_greater_equal = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15307093401049035146ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__op_numerator_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 591231086329193117ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__op_quotient_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11230622068390649517ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__op_denominator_d = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10662868329289459377ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__op_numerator_d = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6693303944283278457ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__op_quotient_d = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8935360257624526277ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__next_remainder = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4006244893977781720ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__next_quotient = VL_SCOPED_RAND_RESET_Q(33, __VscopeHash, 9457235161956003725ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3976348391429375875ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_counter_q = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 6236897887514401304ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_counter_d = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 8332002749467297725ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__mult_hold = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18302400895451466467ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_hold = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2138473536223812301ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_by_zero_d = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3751466953924548885ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_by_zero_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13264770432206895148ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__mult_en_internal = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5950971855052070186ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_en_internal = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4081789634507332643ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__md_state_q = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 3402690719466026681ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__md_state_d = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 8891248666888282336ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__gen_mult_fast__DOT__mult_op_a = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 1577068655853666424ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__gen_mult_fast__DOT__mult_op_b = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 11361715761677747635ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__gen_mult_fast__DOT__mult_state_q = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 15841955789554764752ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__gen_mult_fast__DOT__mult_state_d = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 16689423057219714354ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__lsu_rdata_o = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7561068838700566597ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__lsu_rdata_valid_o = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6676730655880076932ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__addr_last_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1409898964322655104ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__addr_update = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11646335543897238628ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__ctrl_update = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14984199184048533841ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__rdata_update = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14524261372117604066ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__rdata_q = VL_SCOPED_RAND_RESET_I(24, __VscopeHash, 169281425894538115ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__rdata_offset_q = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 5333941870943825662ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__data_type_q = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 13985722223706033281ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__data_sign_ext_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13119701917831475270ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__data_we_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8752912055138805959ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__data_be = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 17696411776947004225ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__split_misaligned_access = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9820964623826074982ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__handle_misaligned_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15208998464470498940ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__handle_misaligned_d = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12936536524785205317ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__pmp_err_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 981355120954590661ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__pmp_err_d = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 125854075795645561ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__lsu_err_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12319161828419427437ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__lsu_err_d = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8164751389974958651ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__data_or_pmp_err = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10943674065544936674ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__ls_fsm_cs = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 11903522210035264274ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__ls_fsm_ns = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 5365971292156319834ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__fcov_mis_2_en_d = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5083447460738203194ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__fcov_mis_2_en_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10777941567223075123ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__fcov_mis_rvalid_1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9342225774874736639ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__fcov_mis_rvalid_2 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12866974454789590766ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__fcov_mis_bus_err_1_d = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 181696209109701342ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__fcov_mis_bus_err_1_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4678924496957894862ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__wb_stage_i__DOT__rf_wdata_wb_o = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5247185918496516867ull);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__wb_stage_i__DOT__rf_wdata_wb_mux[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8317377604986001741ull);
    }
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__wb_stage_i__DOT__rf_wdata_wb_mux_we = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 12291465795846570101ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_mtvec_init_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13910086253058612609ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_op_i = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 4693186941136749386ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_op_en_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18157151549959040561ull);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_pmp_cfg_o[__Vi0] = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 4126106747597275153ull);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_pmp_addr_o[__Vi0] = VL_SCOPED_RAND_RESET_Q(34, __VscopeHash, 10078521120281660272ull);
    }
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__illegal_csr_insn_o = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7960965714940361251ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__instr_ret_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4607790906795159485ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__instr_ret_compressed_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4521056942471162875ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__iside_wait_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13680213807759065017ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__dside_wait_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15392559234589745395ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mul_wait_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16647396909765540861ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__div_wait_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14480537937739799580ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__exception_pc = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1119266852765256665ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__priv_lvl_q = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 2649168122428035692ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__priv_lvl_d = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 15607093376435797757ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mstatus_d = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 17981529462550108803ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mstatus_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 970344098276496417ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mie_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12805396906519264930ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mscratch_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1396769217567861403ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mepc_d = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1674818928779818282ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mepc_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4141904924583365914ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mcause_d = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 10800698195599249705ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mcause_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14730450606211449943ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mtval_d = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6205442701283721261ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mtval_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17065782355757711424ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mtvec_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9346333064299580793ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mip = VL_SCOPED_RAND_RESET_I(18, __VscopeHash, 4190708300548136558ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__dcsr_d = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 13020866428703011341ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__dcsr_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12573866722160273151ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__depc_d = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6949632035734345723ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__depc_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8567131317021599182ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__dscratch0_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11361669014428362688ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__dscratch1_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10518455845946027006ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mstack_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11192046860148334723ull);
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_addr_rdata[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4085896601779188366ull);
    }
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_cfg_rdata[__Vi0] = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 17985189537772278125ull);
    }
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mcountinhibit_d = VL_SCOPED_RAND_RESET_I(13, __VscopeHash, 3048088618266917957ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mcountinhibit_q = VL_SCOPED_RAND_RESET_I(13, __VscopeHash, 12884896385380679045ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mcountinhibit_we = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17728945489366664212ull);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter[__Vi0] = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 5274370669899612701ull);
    }
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_we = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5892348655305064303ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounterh_we = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5685942627671426888ull);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12319004700232521834ull);
    }
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__cpuctrlsts_part_d = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 5684001281718964945ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__cpuctrlsts_part_we = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5521321865267136225ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_wdata_int = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2352116461248258297ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_rdata_int = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14492295670270310840ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_we_int = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8711108990936782306ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_wr = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3025393411843581985ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__dbg_csr = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16895248898094754097ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__illegal_csr = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7394540205131704267ull);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_trigger_regs__DOT__tmatch_value_q[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 13564508716972459111ull);
    }
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_trigger_regs__DOT__tmatch_control_we__BRA__0__KET__ = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12876385810145264144ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_trigger_regs__DOT__tmatch_value_we__BRA__0__KET__ = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10637929976111537259ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_trigger_regs__DOT__trigger_match = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 12135816060370748342ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT____Vcellinp__gen_trigger_regs__DOT__g_dbg_tmatch_reg__BRA__1__KET____DOT__u_tmatch_control_csr__wr_en_i = 0;
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT____Vcellinp__gen_trigger_regs__DOT__g_dbg_tmatch_reg__BRA__1__KET____DOT__u_tmatch_value_csr__wr_en_i = 0;
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT____VdfgExtracted_h8790b315__0 = 0;
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT____VdfgRegularize_h871b2533_0_0 = 0;
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mstatus_csr__DOT__rdata_q = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 6075741346555493075ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mepc_csr__DOT__rdata_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 740511993554020179ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mie_csr__DOT__rdata_q = VL_SCOPED_RAND_RESET_I(18, __VscopeHash, 9072234642794436324ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mscratch_csr__DOT__rdata_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1226762468584660627ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mcause_csr__DOT__rdata_q = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 9930958512801203137ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mtval_csr__DOT__rdata_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14790935325834993819ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mtvec_csr__DOT__rdata_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14937785047254727634ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_dcsr_csr__DOT__rdata_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4886201363385892693ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_depc_csr__DOT__rdata_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12489159699430721069ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_dscratch0_csr__DOT__rdata_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16803500071592967857ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_dscratch1_csr__DOT__rdata_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2493518389265636172ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mstack_csr__DOT__rdata_q = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 6689917481651093454ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mstack_epc_csr__DOT__rdata_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 13690848856399876428ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mstack_cause_csr__DOT__rdata_q = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 8870430750713800092ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mcycle_counter_i__DOT__counter_load = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 11839692736440993351ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mcycle_counter_i__DOT__we = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15645979464339657807ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mcycle_counter_i__DOT__counter_d = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 10024545841624257027ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mcycle_counter_i__DOT__counter_q = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 11175825257688936178ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__minstret_counter_i__DOT__counter_load = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 4459183898734806192ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__minstret_counter_i__DOT__we = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1518959568634319057ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__minstret_counter_i__DOT__counter_d = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 3250660006538458720ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__minstret_counter_i__DOT__counter_q = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 9457412235749587341ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_cpuctrlsts_part_csr__DOT__rdata_q = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 13848479094593898785ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__0__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_load = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 15227555483472160796ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__0__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__we = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12315556485484379251ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__0__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_d = VL_SCOPED_RAND_RESET_Q(40, __VscopeHash, 17306430764564941923ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__0__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q = VL_SCOPED_RAND_RESET_Q(40, __VscopeHash, 260696174635368253ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__1__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_load = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 18090604734983213996ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__1__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__we = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16059439434269142560ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__1__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_d = VL_SCOPED_RAND_RESET_Q(40, __VscopeHash, 1168020295508808187ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__1__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q = VL_SCOPED_RAND_RESET_Q(40, __VscopeHash, 10306857604673932402ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__2__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_load = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 17914938780949396494ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__2__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__we = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16923949007581368975ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__2__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_d = VL_SCOPED_RAND_RESET_Q(40, __VscopeHash, 1907011800763526819ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__2__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q = VL_SCOPED_RAND_RESET_Q(40, __VscopeHash, 14065153357978044524ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__3__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_load = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 16827454442696749787ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__3__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__we = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5667697334577804839ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__3__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_d = VL_SCOPED_RAND_RESET_Q(40, __VscopeHash, 113738267748073462ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__3__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q = VL_SCOPED_RAND_RESET_Q(40, __VscopeHash, 7518856112434909932ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__4__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_load = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 7234778269660544571ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__4__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__we = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1424947042133459864ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__4__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_d = VL_SCOPED_RAND_RESET_Q(40, __VscopeHash, 543462857617864110ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__4__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q = VL_SCOPED_RAND_RESET_Q(40, __VscopeHash, 7887982001288966492ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__5__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_load = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 12393637344364170760ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__5__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__we = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5709092272686452774ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__5__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_d = VL_SCOPED_RAND_RESET_Q(40, __VscopeHash, 1339434123597266124ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__5__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q = VL_SCOPED_RAND_RESET_Q(40, __VscopeHash, 2982124279044273460ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__6__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_load = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 1716671519338806671ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__6__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__we = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8312437562547557421ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__6__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_d = VL_SCOPED_RAND_RESET_Q(40, __VscopeHash, 11366230322722464566ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__6__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q = VL_SCOPED_RAND_RESET_Q(40, __VscopeHash, 4674617738751265906ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__7__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_load = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 16528310505966275521ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__7__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__we = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3326128903211285992ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__7__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_d = VL_SCOPED_RAND_RESET_Q(40, __VscopeHash, 14753634670594899732ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__7__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q = VL_SCOPED_RAND_RESET_Q(40, __VscopeHash, 16810388873427944132ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__8__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_load = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 2394044005725871151ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__8__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__we = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2912411970425077900ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__8__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_d = VL_SCOPED_RAND_RESET_Q(40, __VscopeHash, 16185695338252598546ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__8__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q = VL_SCOPED_RAND_RESET_Q(40, __VscopeHash, 10367921351134328440ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__9__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_load = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 4570630543613889609ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__9__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__we = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15951675966410116545ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__9__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_d = VL_SCOPED_RAND_RESET_Q(40, __VscopeHash, 14257168566250283262ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__9__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q = VL_SCOPED_RAND_RESET_Q(40, __VscopeHash, 5130309184230136190ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_trigger_regs__DOT__u_tselect_csr__DOT__rdata_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12597073565339288497ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_trigger_regs__DOT__g_dbg_tmatch_reg__BRA__0__KET____DOT__u_tmatch_control_csr__DOT__rdata_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12374955436352835542ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_trigger_regs__DOT__g_dbg_tmatch_reg__BRA__0__KET____DOT__u_tmatch_value_csr__DOT__rdata_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17471790058425040177ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_trigger_regs__DOT__g_dbg_tmatch_reg__BRA__1__KET____DOT__u_tmatch_control_csr__DOT__rdata_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18333462840508818703ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_trigger_regs__DOT__g_dbg_tmatch_reg__BRA__1__KET____DOT__u_tmatch_value_csr__DOT__rdata_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5200995215213964095ull);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16803392161232704369ull);
    }
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__we_a_dec = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17949472392023651871ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__1__KET____DOT__rf_reg_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 13550834730828304403ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__2__KET____DOT__rf_reg_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12294225700167887144ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__3__KET____DOT__rf_reg_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4552551778905090290ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__4__KET____DOT__rf_reg_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12248538005962414093ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__5__KET____DOT__rf_reg_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 15872251498466150766ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__6__KET____DOT__rf_reg_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7304496712932279473ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__7__KET____DOT__rf_reg_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 3369139605198064105ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__8__KET____DOT__rf_reg_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 61770025937570304ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__9__KET____DOT__rf_reg_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 3761957262446199009ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__10__KET____DOT__rf_reg_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7174430489347788110ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__11__KET____DOT__rf_reg_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4809476363304679743ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__12__KET____DOT__rf_reg_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9429718102309462363ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__13__KET____DOT__rf_reg_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5550154554835051311ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__14__KET____DOT__rf_reg_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7658329197534997704ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__15__KET____DOT__rf_reg_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11485711289477894066ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__16__KET____DOT__rf_reg_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6397197115293565203ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__17__KET____DOT__rf_reg_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10952513689190751382ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__18__KET____DOT__rf_reg_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 15392491315721301496ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__19__KET____DOT__rf_reg_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2343071958364765816ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__20__KET____DOT__rf_reg_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8068469013213965876ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__21__KET____DOT__rf_reg_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 3527139396694190108ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__22__KET____DOT__rf_reg_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4358034173230656155ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__23__KET____DOT__rf_reg_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1189409344596882752ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__24__KET____DOT__rf_reg_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 3739318637032529127ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__25__KET____DOT__rf_reg_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1575121245433047604ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__26__KET____DOT__rf_reg_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2353724469666457273ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__27__KET____DOT__rf_reg_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9346472232245809954ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__28__KET____DOT__rf_reg_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1693383398170587136ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__29__KET____DOT__rf_reg_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14269923937505825925ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__30__KET____DOT__rf_reg_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4059603367025783606ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__31__KET____DOT__rf_reg_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 186612010593628491ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_ram__DOT__b_rvalid_o = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4766057476021942307ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_ram__DOT__u_ram__DOT__gen_generic__DOT__u_impl_generic__DOT__b_req_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17661893269790554410ull);
    for (int __Vi0 = 0; __Vi0 < 32768; ++__Vi0) {
        vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_ram__DOT__u_ram__DOT__gen_generic__DOT__u_impl_generic__DOT__mem[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9068739789254485264ull);
    }
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_ram__DOT__u_ram__DOT__gen_generic__DOT__u_impl_generic__DOT__a_wmask = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 6460712674363012932ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_gpio__DOT__gp_i_q = VL_SCOPED_RAND_RESET_I(24, __VscopeHash, 12301910534272550677ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_gpio__DOT__gp_o_d = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 1438152796533392886ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_gpio__DOT__gp_i_rd_en_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10313293455924465796ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_gpio__DOT__gp_i_dbnc_rd_en_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1509230498188298220ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_gpio__DOT____VdfgRegularize_hc9315579_0_0 = 0;
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_gpio__DOT__gen_debounce__BRA__0__KET____DOT__dbnc__DOT__cnt_d = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 5409233160929842491ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_gpio__DOT__gen_debounce__BRA__0__KET____DOT__dbnc__DOT__cnt_q = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 16367072221408097309ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_gpio__DOT__gen_debounce__BRA__0__KET____DOT__dbnc__DOT__btn_d = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3559948473297940983ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_gpio__DOT__gen_debounce__BRA__0__KET____DOT__dbnc__DOT__btn_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11016063506727200313ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_gpio__DOT__gen_debounce__BRA__1__KET____DOT__dbnc__DOT__cnt_d = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 8815534853126827547ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_gpio__DOT__gen_debounce__BRA__1__KET____DOT__dbnc__DOT__cnt_q = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 4749556509781103731ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_gpio__DOT__gen_debounce__BRA__1__KET____DOT__dbnc__DOT__btn_d = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3765708505627292802ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_gpio__DOT__gen_debounce__BRA__1__KET____DOT__dbnc__DOT__btn_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15445650057055616751ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_gpio__DOT__gen_debounce__BRA__2__KET____DOT__dbnc__DOT__cnt_d = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 8266424322482947787ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_gpio__DOT__gen_debounce__BRA__2__KET____DOT__dbnc__DOT__cnt_q = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 11439740662978561324ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_gpio__DOT__gen_debounce__BRA__2__KET____DOT__dbnc__DOT__btn_d = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2586813162688261381ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_gpio__DOT__gen_debounce__BRA__2__KET____DOT__dbnc__DOT__btn_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13042074016959931790ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_gpio__DOT__gen_debounce__BRA__3__KET____DOT__dbnc__DOT__cnt_d = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 17730232047550448866ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_gpio__DOT__gen_debounce__BRA__3__KET____DOT__dbnc__DOT__cnt_q = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 15548077004521860949ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_gpio__DOT__gen_debounce__BRA__3__KET____DOT__dbnc__DOT__btn_d = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3536206064803772180ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_gpio__DOT__gen_debounce__BRA__3__KET____DOT__dbnc__DOT__btn_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10659220030959231645ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_gpio__DOT__gen_debounce__BRA__4__KET____DOT__dbnc__DOT__cnt_d = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 6369544163420758958ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_gpio__DOT__gen_debounce__BRA__4__KET____DOT__dbnc__DOT__cnt_q = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 9031709578184111321ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_gpio__DOT__gen_debounce__BRA__4__KET____DOT__dbnc__DOT__btn_d = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14211681048897456804ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_gpio__DOT__gen_debounce__BRA__4__KET____DOT__dbnc__DOT__btn_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12702927515517032612ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_gpio__DOT__gen_debounce__BRA__5__KET____DOT__dbnc__DOT__cnt_d = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 14965210046133092396ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_gpio__DOT__gen_debounce__BRA__5__KET____DOT__dbnc__DOT__cnt_q = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 17955891751910495955ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_gpio__DOT__gen_debounce__BRA__5__KET____DOT__dbnc__DOT__btn_d = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10613131916816825086ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_gpio__DOT__gen_debounce__BRA__5__KET____DOT__dbnc__DOT__btn_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16409511506892832413ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_gpio__DOT__gen_debounce__BRA__6__KET____DOT__dbnc__DOT__cnt_d = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 7263074440331800101ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_gpio__DOT__gen_debounce__BRA__6__KET____DOT__dbnc__DOT__cnt_q = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 588717188566917957ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_gpio__DOT__gen_debounce__BRA__6__KET____DOT__dbnc__DOT__btn_d = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9917323384738817897ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_gpio__DOT__gen_debounce__BRA__6__KET____DOT__dbnc__DOT__btn_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17698324387045051579ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_gpio__DOT__gen_debounce__BRA__7__KET____DOT__dbnc__DOT__cnt_d = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 18027524721086535856ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_gpio__DOT__gen_debounce__BRA__7__KET____DOT__dbnc__DOT__cnt_q = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 17623440382761074865ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_gpio__DOT__gen_debounce__BRA__7__KET____DOT__dbnc__DOT__btn_d = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16759503378596177225ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_gpio__DOT__gen_debounce__BRA__7__KET____DOT__dbnc__DOT__btn_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13735475263240489212ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_pwm__DOT__gen_pwm__BRA__0__KET____DOT__counter_q = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 8685477609829238863ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_pwm__DOT__gen_pwm__BRA__0__KET____DOT__pulse_width_q = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 8876336885937827473ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_pwm__DOT____Vcellout__gen_pwm__BRA__0__KET____DOT__u_pwm__modulated_o = 0;
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_pwm__DOT__gen_pwm__BRA__1__KET____DOT__counter_q = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 11618813085447241504ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_pwm__DOT__gen_pwm__BRA__1__KET____DOT__pulse_width_q = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 16876878429093239732ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_pwm__DOT____Vcellout__gen_pwm__BRA__1__KET____DOT__u_pwm__modulated_o = 0;
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_pwm__DOT__gen_pwm__BRA__2__KET____DOT__counter_q = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 17704152003770303109ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_pwm__DOT__gen_pwm__BRA__2__KET____DOT__pulse_width_q = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 15260549837212431435ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_pwm__DOT____Vcellout__gen_pwm__BRA__2__KET____DOT__u_pwm__modulated_o = 0;
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_pwm__DOT__gen_pwm__BRA__3__KET____DOT__counter_q = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 11796074003705988623ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_pwm__DOT__gen_pwm__BRA__3__KET____DOT__pulse_width_q = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 1197112186929650932ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_pwm__DOT____Vcellout__gen_pwm__BRA__3__KET____DOT__u_pwm__modulated_o = 0;
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_pwm__DOT__gen_pwm__BRA__4__KET____DOT__counter_q = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 10078834414733786861ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_pwm__DOT__gen_pwm__BRA__4__KET____DOT__pulse_width_q = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 13515012191962098456ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_pwm__DOT____Vcellout__gen_pwm__BRA__4__KET____DOT__u_pwm__modulated_o = 0;
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_pwm__DOT__gen_pwm__BRA__5__KET____DOT__counter_q = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 13334896218814401685ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_pwm__DOT__gen_pwm__BRA__5__KET____DOT__pulse_width_q = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 7986208804620749794ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_pwm__DOT____Vcellout__gen_pwm__BRA__5__KET____DOT__u_pwm__modulated_o = 0;
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_pwm__DOT__gen_pwm__BRA__6__KET____DOT__counter_q = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 2419532927278096774ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_pwm__DOT__gen_pwm__BRA__6__KET____DOT__pulse_width_q = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 17032916977042190958ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_pwm__DOT____Vcellout__gen_pwm__BRA__6__KET____DOT__u_pwm__modulated_o = 0;
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_pwm__DOT__gen_pwm__BRA__7__KET____DOT__counter_q = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 244910027058757193ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_pwm__DOT__gen_pwm__BRA__7__KET____DOT__pulse_width_q = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 16477251717598093280ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_pwm__DOT____Vcellout__gen_pwm__BRA__7__KET____DOT__u_pwm__modulated_o = 0;
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_pwm__DOT__gen_pwm__BRA__8__KET____DOT__counter_q = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 18117771019464348382ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_pwm__DOT__gen_pwm__BRA__8__KET____DOT__pulse_width_q = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 10766497024504946347ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_pwm__DOT____Vcellout__gen_pwm__BRA__8__KET____DOT__u_pwm__modulated_o = 0;
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_pwm__DOT__gen_pwm__BRA__9__KET____DOT__counter_q = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 1138691527872685938ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_pwm__DOT__gen_pwm__BRA__9__KET____DOT__pulse_width_q = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 12585808217446166723ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_pwm__DOT____Vcellout__gen_pwm__BRA__9__KET____DOT__u_pwm__modulated_o = 0;
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_pwm__DOT__gen_pwm__BRA__10__KET____DOT__counter_q = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 5017313231089038197ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_pwm__DOT__gen_pwm__BRA__10__KET____DOT__pulse_width_q = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 8798824881363847640ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_pwm__DOT____Vcellout__gen_pwm__BRA__10__KET____DOT__u_pwm__modulated_o = 0;
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_pwm__DOT__gen_pwm__BRA__11__KET____DOT__counter_q = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 2122035633717089131ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_pwm__DOT__gen_pwm__BRA__11__KET____DOT__pulse_width_q = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 5994929321812645528ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_pwm__DOT____Vcellout__gen_pwm__BRA__11__KET____DOT__u_pwm__modulated_o = 0;
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_pwm__DOT____VdfgRegularize_hf75f81f8_0_1 = 0;
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_pwm__DOT____VdfgRegularize_hf75f81f8_0_3 = 0;
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_pwm__DOT____VdfgRegularize_hf75f81f8_0_4 = 0;
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_pwm__DOT____VdfgRegularize_hf75f81f8_0_5 = 0;
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_pwm__DOT____VdfgRegularize_hf75f81f8_0_6 = 0;
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_pwm__DOT____VdfgRegularize_hf75f81f8_0_7 = 0;
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_pwm__DOT____VdfgRegularize_hf75f81f8_0_8 = 0;
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_pwm__DOT____VdfgRegularize_hf75f81f8_0_9 = 0;
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_pwm__DOT____VdfgRegularize_hf75f81f8_0_10 = 0;
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_pwm__DOT____VdfgRegularize_hf75f81f8_0_11 = 0;
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_pwm__DOT____VdfgRegularize_hf75f81f8_0_12 = 0;
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_pwm__DOT____VdfgRegularize_hf75f81f8_0_13 = 0;
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_pwm__DOT__gen_pwm__BRA__0__KET____DOT__u_pwm__DOT__counter = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 17986072366711332783ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_pwm__DOT__gen_pwm__BRA__1__KET____DOT__u_pwm__DOT__counter = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 7680570483232975377ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_pwm__DOT__gen_pwm__BRA__2__KET____DOT__u_pwm__DOT__counter = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 13800051996994067737ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_pwm__DOT__gen_pwm__BRA__3__KET____DOT__u_pwm__DOT__counter = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 12480351279010701248ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_pwm__DOT__gen_pwm__BRA__4__KET____DOT__u_pwm__DOT__counter = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 12658939448851675435ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_pwm__DOT__gen_pwm__BRA__5__KET____DOT__u_pwm__DOT__counter = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 11026423343764147130ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_pwm__DOT__gen_pwm__BRA__6__KET____DOT__u_pwm__DOT__counter = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 11558047368215185740ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_pwm__DOT__gen_pwm__BRA__7__KET____DOT__u_pwm__DOT__counter = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 5126878486706030031ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_pwm__DOT__gen_pwm__BRA__8__KET____DOT__u_pwm__DOT__counter = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 18377701174234833246ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_pwm__DOT__gen_pwm__BRA__9__KET____DOT__u_pwm__DOT__counter = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 16648390089541324596ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_pwm__DOT__gen_pwm__BRA__10__KET____DOT__u_pwm__DOT__counter = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 13788347298573265323ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_pwm__DOT__gen_pwm__BRA__11__KET____DOT__u_pwm__DOT__counter = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 18096039086729650465ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__device_rdata_d = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9964375238091311113ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__device_rdata_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 13305438229314339307ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__device_rvalid_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 988620061981640274ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__rx_baud_counter_q = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 6641275439031582010ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__rx_baud_counter_d = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 6615997146940010533ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__rx_state_q = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 3123257001927915434ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__rx_state_d = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 12024167171321968817ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__rx_bit_counter_q = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 14158648488826581353ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__rx_bit_counter_d = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 1461946847590866929ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__rx_current_byte_q = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 14617578704471835111ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__rx_current_byte_d = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 3107445120064833099ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__rx_q = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 2677133902586920799ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__rx_start = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1886966020089509850ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__rx_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6893605110239323005ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__rx_fifo_rready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15225686253612873979ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__tx_baud_counter_q = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 1338947605060805457ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__tx_baud_counter_d = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 15885914982029961350ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__tx_state_q = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 5956713561011193103ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__tx_state_d = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 8543908948060240017ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__tx_bit_counter_q = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 18355132634697008297ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__tx_bit_counter_d = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 6005924452129955875ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__tx_current_byte_q = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 11243287078939995319ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__tx_current_byte_d = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 17340264337432080650ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__tx_next_byte = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8425657489606359442ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__rvalid_o = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11705133337624809225ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__full_o = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9337494920014755205ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__fifo_incr_wptr = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10881927465801313459ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__fifo_incr_rptr = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16135378173954116371ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__fifo_empty = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 758303511012366420ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__under_rst = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2476240446961287899ull);
    VL_SCOPED_RAND_RESET_W(1024, vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__storage, __VscopeHash, 5407875179798005790ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 16773699398566283507ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_set_cnt = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 17646074905562753711ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 6926123637254366059ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_set_cnt = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 958526886045681859ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_set = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6968970263735628443ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_set = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18126540831015321718ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__rvalid_o = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6808487435613703847ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__full_o = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 401914889939423452ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__fifo_incr_wptr = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7892774259909015230ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__fifo_incr_rptr = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3764987438717789994ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__fifo_empty = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 895621515314536871ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__under_rst = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4263455951688896099ull);
    VL_SCOPED_RAND_RESET_W(1024, vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage, __VscopeHash, 4790441888472285620ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 1063084441844013660ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_set_cnt = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 6945936060533935104ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 11971281609869844279ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_set_cnt = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 9885212624293759756ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_set = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13199184798924584423ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_set = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 711937933856725172ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__byte_data_o = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 17208810811859064135ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__read_status_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2040384966242259255ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__next_tx_byte_d = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15225388999051750414ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__next_tx_byte_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6575188643593846969ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT____Vlvbound_h9e21adb0__0 = 0;
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__rvalid_o = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9753867273370249652ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__full_o = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 211491161952497660ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__fifo_incr_wptr = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15488820486432242223ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__fifo_incr_rptr = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8274552040589997921ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__fifo_empty = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 986172259344295067ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__under_rst = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13216703330701468276ull);
    VL_SCOPED_RAND_RESET_W(1016, vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage, __VscopeHash, 9135954525868127410ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 2640355399835827758ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_set_cnt = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 13599942220159013343ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 12301187912464588592ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_set_cnt = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 14851437990936772819ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_set = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18400030779524871840ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_set = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6508311129739219016ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_spi_host__DOT__count = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1904643583810182543ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_spi_host__DOT__sck = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12381819329912145637ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_spi_host__DOT__count_at_limit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14462564072448276975ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_spi_host__DOT__sck_pos = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12493421936960559104ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_spi_host__DOT__sck_neg = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13446398500208393051ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_spi_host__DOT__state_q = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 9766349484248414092ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_spi_host__DOT__state_d = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 2000356436389169501ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_spi_host__DOT__bit_counter_q = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 12741010331932904963ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_spi_host__DOT__bit_counter_d = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 8831285495143664209ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_spi_host__DOT__current_byte_q = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 272252304641071154ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_spi_host__DOT__current_byte_d = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 16713668713630384072ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_spi_host__DOT__recieved_byte_d = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 11730133771972794427ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_spi_host__DOT__recieved_byte_q = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 12002576938309693568ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_simulator_ctrl__DOT__sim_finish = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 552271451627028142ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_simulator_ctrl__DOT__log_fd = 0;
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_timer__DOT__timer_we = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16451323289625678714ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_timer__DOT__mtimecmp_we = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9783232508508491741ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_timer__DOT__mtimecmph_we = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3509158369104170287ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_timer__DOT__mtime_q = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 7064953384115559805ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_timer__DOT__mtime_d = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 11027688929938332166ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_timer__DOT__mtimecmp_q = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 5402638723195263994ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_timer__DOT__mtimecmp_d = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 12929008707847008531ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_timer__DOT__interrupt_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8957323613399956914ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_timer__DOT__interrupt_d = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11832114744662385464ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_timer__DOT__error_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16412153131972151398ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_timer__DOT__error_d = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10584581898609467812ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_timer__DOT__rdata_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5901993481329328302ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_timer__DOT__rdata_d = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7566915447677695080ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__u_timer__DOT__rvalid_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7225614018279039978ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__haltreq = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10667364498443201253ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__resumereq = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10729577278411848394ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__clear_resumeack = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17991428906319815689ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__cmdbusy = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14685096466543517234ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__data_mem_csrs = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 8488144109686377663ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__data_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14479623545068512950ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__sbaddress_write_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6420346175626229357ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__sbdata_read_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 214429460863766201ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__sbdata_write_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16393337226857610296ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__sberror_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12535502415850107794ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__sberror = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 5625064619903221232ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT____Vlvbound_hb3fbfe00__0 = 0;
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT____Vlvbound_ha3173f0b__0 = 0;
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__hartsel_o = VL_SCOPED_RAND_RESET_I(20, __VscopeHash, 4717154340837809889ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__haltsum0 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11156039355511792000ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__haltsum1 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 966047062836575010ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__haltsum2 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12135889779169396638ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__halted = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 521218094474844323ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__halted_reshaped0 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 190210689222166905ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__halted_reshaped1 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7679317072436731260ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__halted_reshaped2 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8417723515446752473ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__halted_flat1 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11534578287970159276ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__halted_flat2 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1281023572106102144ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__hartsel_idx0 = VL_SCOPED_RAND_RESET_I(15, __VscopeHash, 2517139249927010076ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__hartsel_idx1 = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 13331096795858776615ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__hartsel_idx2 = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 16108572070460100634ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__dmstatus = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9433293473985773481ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__dmcontrol_d = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8111263587066340270ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__dmcontrol_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14303798760698352867ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__abstractcs = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 283455699307439029ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__cmderr_d = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 14313065338464576251ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__cmderr_q = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 14171421116786853399ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__command_d = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10727958656497759874ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__command_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11306780110966231566ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__cmd_valid_d = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16070685096769332631ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__cmd_valid_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3162342003129188088ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__abstractauto_d = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6973568112936829871ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__abstractauto_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 305414574036385889ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__sbcs_d = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1300908392784378390ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__sbcs_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17202295898080433311ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__sbaddr_d = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 1845486732545364619ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__sbaddr_q = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 14545356174652761067ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__sbdata_d = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 3162569574745852282ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__sbdata_q = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 14030437403229351035ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__havereset_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3458087573766035950ull);
    VL_SCOPED_RAND_RESET_W(256, vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__progbuf_d, __VscopeHash, 2446103021213552651ull);
    VL_SCOPED_RAND_RESET_W(256, vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__progbuf_q, __VscopeHash, 9320843382557032817ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__data_d = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 14323082650305206785ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__data_q = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 839679596990273052ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__selected_hart = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3547766321493024079ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__resp_queue_inp = VL_SCOPED_RAND_RESET_Q(34, __VscopeHash, 13245247876812513260ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__havereset_d_aligned = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 4113795462955630504ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__sbcs = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8661365058836284193ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__a_abstractcs = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10119285608129282690ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT____VdfgExtracted_h184edcfc__0 = 0;
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT____VdfgExtracted_h45a04ee3__0 = 0;
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT____VdfgRegularize_h6d1c0005_0_0 = 0;
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT____VdfgRegularize_h6d1c0005_0_1 = 0;
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT____Vlvbound_h47ef481d__0 = 0;
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__full_o = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11146725025336352055ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__gen_normal_fifo__DOT__fifo_incr_wptr = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17384217854272884898ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__gen_normal_fifo__DOT__fifo_incr_rptr = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9327203259670060131ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__gen_normal_fifo__DOT__fifo_empty = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11062031207151940498ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__gen_normal_fifo__DOT__under_rst = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4301027759069683333ull);
    VL_SCOPED_RAND_RESET_W(68, vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__gen_normal_fifo__DOT__storage, __VscopeHash, 7242160289893134453ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 14290604760131418858ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_set_cnt = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 5200822360145879770ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 7676420112433552422ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_set_cnt = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 1123278784721060000ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_set = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17166990901467022015ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_set = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7005108160002653031ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_sba__DOT__state_d = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 16296467882500161524ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_sba__DOT__state_q = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 3595758399207433240ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_sba__DOT__req = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9363177140268073548ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_sba__DOT__we = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4429230136331339447ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_sba__DOT__be = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 261880343095405431ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_sba__DOT__be_mask = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 3585572715235997422ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_sba__DOT__addr_incr_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1481539439804200780ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_sba__DOT__be_idx_masked = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 10385407014990831096ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__addr_i = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17538812096545538818ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__rdata_o = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9510333138856770699ull);
    VL_SCOPED_RAND_RESET_W(512, vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__abstract_cmd, __VscopeHash, 8383381909893106195ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__halted_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11897062366090921103ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__resuming_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17564334068590695442ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__resume = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13446441943337692155ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__go = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15696871156518200481ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__going = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12629340064707402535ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__exception = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2312514042733098102ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__unsupported_command = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3409713624705312469ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__rdata_d = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 6306386024509638578ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__rdata_q = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 3959761022865316969ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__word_enable32_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1337586558916296943ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__halted_d_aligned = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 2893986463789853406ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__halted_aligned = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 14129426811748276731ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__resuming_d_aligned = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 14015031682357840746ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__fwd_rom_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7036149887811388927ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__state_d = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 2216128421623268140ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__state_q = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 2276349539930412637ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__word_mux = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 17990892431292381114ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__data_bits = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 5496784597730677125ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__rdata = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 17460830516137710547ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT____VdfgExtracted_h2e4532f7__0 = 0;
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT____VdfgExtracted_h048ecfaa__0 = 0;
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__gen_rom_snd_scratch__DOT__i_debug_rom__DOT__req_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2536612908097899752ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__gen_rom_snd_scratch__DOT__i_debug_rom__DOT__addr_q = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 2541207038432500964ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__tdo_oe_o = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6256079392231796759ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__error_d = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 13349693232124296773ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__error_q = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 5334638461113755686ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__dtmcs_select = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12215425357554661723ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__dtmcs_d = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 13290936573817778065ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__dtmcs_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12317872094560689203ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__dmi_select = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6451025645258034279ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__dmi_req_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2540143061616407464ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__state_d = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 9564282741132104152ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__state_q = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 14787747745197950058ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__dr_d = VL_SCOPED_RAND_RESET_Q(41, __VscopeHash, 8000570490510075835ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__dr_q = VL_SCOPED_RAND_RESET_Q(41, __VscopeHash, 14158317252046104068ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__address_d = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 4837338447143769019ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__address_q = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 3744348036690928693ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__data_d = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5161231892334745807ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__data_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9769502337549518125ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__error_dmi_busy = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11403692537766580588ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__error_dmi_op_failed = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11203787585253875419ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_jtag_tap__DOT__tap_state_q = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 4587243873698995645ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_jtag_tap__DOT__tap_state_d = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 5855675575627189264ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_jtag_tap__DOT__update_dr = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6098157581957631475ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_jtag_tap__DOT__shift_dr = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10765116169917963275ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_jtag_tap__DOT__capture_dr = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17845477897834221715ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_jtag_tap__DOT__jtag_ir_shift_d = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 3125221053525520984ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_jtag_tap__DOT__jtag_ir_shift_q = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 10333255646293392450ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_jtag_tap__DOT__jtag_ir_d = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 17994907924451266611ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_jtag_tap__DOT__jtag_ir_q = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 9166619997202380683ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_jtag_tap__DOT__capture_ir = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10370253634050959504ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_jtag_tap__DOT__shift_ir = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14717403202273682168ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_jtag_tap__DOT__update_ir = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6500825737535657108ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_jtag_tap__DOT__test_logic_reset = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17356084713668430912ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_jtag_tap__DOT__idcode_d = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8415706472489240077ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_jtag_tap__DOT__idcode_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 443922758075414013ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_jtag_tap__DOT__idcode_select = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 316597881003409261ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_jtag_tap__DOT__bypass_select = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11344680795157222027ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_jtag_tap__DOT__bypass_d = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5767594180358072247ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_jtag_tap__DOT__bypass_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8688723770014815991ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_jtag_tap__DOT__tdo_mux = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18201496649668994254ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__jtag_dmi_cdc_clear_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13106521978824539745ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__jtag_combined_rstn = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15591242784969834286ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__combined_rstn_premux = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3073560981494465445ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT____Vcellinp__u_combined_rstn_sync__rst_ni = 0;
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__u_combined_rstn_sync__DOT__intq = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17901331172039939071ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__wready_o = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13556508732142740237ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__rready_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8525827218666649339ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__src_req = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2849326108059489123ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__pending_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6446114581004449392ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__not_in_reset_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9942665234397793665ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__dst_req = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17057694519968248639ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__data_q = VL_SCOPED_RAND_RESET_Q(41, __VscopeHash, 16879492732298617808ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__u_prim_sync_reqack__DOT__gen_rz_hs_protocol__DOT__src_fsm_d = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18214291582702008272ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__u_prim_sync_reqack__DOT__gen_rz_hs_protocol__DOT__src_fsm_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9370337016304516703ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__u_prim_sync_reqack__DOT__gen_rz_hs_protocol__DOT__dst_fsm_d = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6026315132126756916ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__u_prim_sync_reqack__DOT__gen_rz_hs_protocol__DOT__dst_fsm_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6882332707471325955ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__u_prim_sync_reqack__DOT__gen_rz_hs_protocol__DOT__src_ack = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7061758996396627691ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__u_prim_sync_reqack__DOT__gen_rz_hs_protocol__DOT__dst_req = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13671700161754163326ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__u_prim_sync_reqack__DOT__gen_rz_hs_protocol__DOT__ack_sync__DOT__intq = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8754025839512433971ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__u_prim_sync_reqack__DOT__gen_rz_hs_protocol__DOT__req_sync__DOT__intq = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13164729067198279115ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__wvalid_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10203532181022967505ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__wready_o = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9849231391372150848ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__wr_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12772388540914039780ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__src_req = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5562912492725264427ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__pending_d = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15776465663979061910ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__pending_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13592123584256764587ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__not_in_reset_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 223537417330659791ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__dst_req = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6712537238308975493ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__data_q = VL_SCOPED_RAND_RESET_Q(34, __VscopeHash, 14864925848742607639ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__u_prim_sync_reqack__DOT__gen_rz_hs_protocol__DOT__src_fsm_d = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11326304786307445775ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__u_prim_sync_reqack__DOT__gen_rz_hs_protocol__DOT__src_fsm_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11273783267077133922ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__u_prim_sync_reqack__DOT__gen_rz_hs_protocol__DOT__dst_fsm_d = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15285015472157903296ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__u_prim_sync_reqack__DOT__gen_rz_hs_protocol__DOT__dst_fsm_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11566872394070026695ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__u_prim_sync_reqack__DOT__gen_rz_hs_protocol__DOT__src_ack = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11639894173086818164ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__u_prim_sync_reqack__DOT__gen_rz_hs_protocol__DOT__dst_req = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14943728563043758229ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__u_prim_sync_reqack__DOT__gen_rz_hs_protocol__DOT__ack_sync__DOT__intq = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17361670766859552110ull);
    vlSelf->top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__u_prim_sync_reqack__DOT__gen_rz_hs_protocol__DOT__req_sync__DOT__intq = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1689554263595915491ull);
    vlSelf->top_verilator__DOT__u_uartdpi__DOT__ctx = 0;
    vlSelf->top_verilator__DOT__u_uartdpi__DOT__txactive = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14380231685974255246ull);
    vlSelf->top_verilator__DOT__u_uartdpi__DOT__txcount = 0;
    vlSelf->top_verilator__DOT__u_uartdpi__DOT__txcyccount = 0;
    vlSelf->top_verilator__DOT__u_uartdpi__DOT__txsymbol = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 603324047175170426ull);
    vlSelf->top_verilator__DOT__u_uartdpi__DOT__seen_reset = 0;
    vlSelf->top_verilator__DOT__u_uartdpi__DOT__rxactive = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17166850750391902358ull);
    vlSelf->top_verilator__DOT__u_uartdpi__DOT__rxcount = 0;
    vlSelf->top_verilator__DOT__u_uartdpi__DOT__rxcyccount = 0;
    vlSelf->top_verilator__DOT__u_uartdpi__DOT__rxsymbol = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 452571287341033330ull);
    vlSelf->__Vdpi_export_trigger = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_0 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_1 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_3 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_8 = 0;
    vlSelf->__Vdly__top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q = 0;
    vlSelf->__Vdly__top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q = 0;
    vlSelf->__Vdly__top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q = 0;
    vlSelf->__Vdly__top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q = 0;
    vlSelf->__Vdly__top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q = 0;
    vlSelf->__Vdly__top_verilator__DOT__u_uartdpi__DOT__txcyccount = 0;
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__VstlTriggered[__Vi0] = 0;
    }
    vlSelf->__Vtrigprevexpr___TOP__top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__instr_executing_spec__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__special_req__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__id_in_ready_o__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__clear_resumeack__0 = 0;
    vlSelf->__VstlDidInit = 0;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VicoTriggered[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__VactTriggered[__Vi0] = 0;
    }
    vlSelf->__Vtrigprevexpr___TOP__top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__instr_executing_spec__1 = 0;
    vlSelf->__Vtrigprevexpr___TOP__top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__special_req__1 = 0;
    vlSelf->__Vtrigprevexpr___TOP__top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__id_in_ready_o__1 = 0;
    vlSelf->__Vtrigprevexpr___TOP__top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__clear_resumeack__1 = 0;
    vlSelf->__Vtrigprevexpr___TOP__clk_i__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__rst_ni__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__top_verilator__DOT__u_ibex_demo_system__DOT__rst_core_n__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__clk__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__combined_rstn_premux__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT____Vcellinp__u_combined_rstn_sync__rst_ni__0 = 0;
    vlSelf->__VactDidInit = 0;
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__VnbaTriggered[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 22; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
