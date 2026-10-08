// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals

#include "verilated_fst_c.h"
#include "Vtop_verilator__Syms.h"


void Vtop_verilator___024root__trace_chg_0_sub_0(Vtop_verilator___024root* vlSelf, VerilatedFst::Buffer* bufp);

void Vtop_verilator___024root__trace_chg_0(void* voidSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_verilator___024root__trace_chg_0\n"); );
    // Body
    Vtop_verilator___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop_verilator___024root*>(voidSelf);
    Vtop_verilator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    Vtop_verilator___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

extern const VlWide<40>/*1279:0*/ Vtop_verilator__ConstPool__CONST_h9127903b_0;

void Vtop_verilator___024root__trace_chg_0_sub_0(Vtop_verilator___024root* vlSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_verilator___024root__trace_chg_0_sub_0\n"); );
    Vtop_verilator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 0);
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[0U]))) {
        bufp->chgIData(oldp+0,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__cfg_device_addr_base[0]),32);
        bufp->chgIData(oldp+1,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__cfg_device_addr_base[1]),32);
        bufp->chgIData(oldp+2,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__cfg_device_addr_base[2]),32);
        bufp->chgIData(oldp+3,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__cfg_device_addr_base[3]),32);
        bufp->chgIData(oldp+4,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__cfg_device_addr_base[4]),32);
        bufp->chgIData(oldp+5,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__cfg_device_addr_base[5]),32);
        bufp->chgIData(oldp+6,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__cfg_device_addr_base[6]),32);
        bufp->chgIData(oldp+7,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__cfg_device_addr_base[7]),32);
        bufp->chgIData(oldp+8,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__cfg_device_addr_mask[0]),32);
        bufp->chgIData(oldp+9,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__cfg_device_addr_mask[1]),32);
        bufp->chgIData(oldp+10,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__cfg_device_addr_mask[2]),32);
        bufp->chgIData(oldp+11,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__cfg_device_addr_mask[3]),32);
        bufp->chgIData(oldp+12,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__cfg_device_addr_mask[4]),32);
        bufp->chgIData(oldp+13,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__cfg_device_addr_mask[5]),32);
        bufp->chgIData(oldp+14,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__cfg_device_addr_mask[6]),32);
        bufp->chgIData(oldp+15,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__cfg_device_addr_mask[7]),32);
        bufp->chgBit(oldp+16,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_jtag_tap__DOT__test_logic_reset));
        bufp->chgBit(oldp+17,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__jtag_dmi_cdc_clear_i));
        bufp->chgBit(oldp+18,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_jtag_tap__DOT__update_dr));
        bufp->chgBit(oldp+19,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_jtag_tap__DOT__capture_dr));
        bufp->chgBit(oldp+20,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_jtag_tap__DOT__shift_dr));
        bufp->chgBit(oldp+21,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__dtmcs_select));
        bufp->chgSData(oldp+22,((vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__dtmcs_d 
                                 >> 0x00000012U)),14);
        bufp->chgBit(oldp+23,((1U & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__dtmcs_d 
                                     >> 0x00000011U))));
        bufp->chgBit(oldp+24,((1U & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__dtmcs_d 
                                     >> 0x00000010U))));
        bufp->chgBit(oldp+25,((1U & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__dtmcs_d 
                                     >> 0x0000000fU))));
        bufp->chgCData(oldp+26,((7U & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__dtmcs_d 
                                       >> 0x0000000cU))),3);
        bufp->chgCData(oldp+27,((3U & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__dtmcs_d 
                                       >> 0x0000000aU))),2);
        bufp->chgCData(oldp+28,((0x0000003fU & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__dtmcs_d 
                                                >> 4U))),6);
        bufp->chgCData(oldp+29,((0x0000000fU & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__dtmcs_d)),4);
        bufp->chgBit(oldp+30,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__dmi_select));
        bufp->chgBit(oldp+31,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__wready_o));
        bufp->chgBit(oldp+32,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__dst_req));
        bufp->chgBit(oldp+33,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__u_prim_sync_reqack__DOT__gen_rz_hs_protocol__DOT__dst_fsm_d));
        bufp->chgCData(oldp+34,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_jtag_tap__DOT__tap_state_d),4);
        bufp->chgCData(oldp+35,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_jtag_tap__DOT__jtag_ir_shift_d),5);
        bufp->chgCData(oldp+36,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_jtag_tap__DOT__jtag_ir_d),5);
        bufp->chgBit(oldp+37,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_jtag_tap__DOT__capture_ir));
        bufp->chgBit(oldp+38,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_jtag_tap__DOT__shift_ir));
        bufp->chgBit(oldp+39,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_jtag_tap__DOT__update_ir));
        bufp->chgIData(oldp+40,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_jtag_tap__DOT__idcode_d),32);
        bufp->chgBit(oldp+41,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_jtag_tap__DOT__idcode_select));
        bufp->chgBit(oldp+42,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_jtag_tap__DOT__bypass_select));
        bufp->chgBit(oldp+43,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_jtag_tap__DOT__bypass_d));
        bufp->chgBit(oldp+44,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_jtag_tap__DOT__tdo_mux));
        bufp->chgIData(oldp+45,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_bus__DOT__cfg_device_addr_base[0]),32);
        bufp->chgIData(oldp+46,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_bus__DOT__cfg_device_addr_base[1]),32);
        bufp->chgIData(oldp+47,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_bus__DOT__cfg_device_addr_base[2]),32);
        bufp->chgIData(oldp+48,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_bus__DOT__cfg_device_addr_base[3]),32);
        bufp->chgIData(oldp+49,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_bus__DOT__cfg_device_addr_base[4]),32);
        bufp->chgIData(oldp+50,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_bus__DOT__cfg_device_addr_base[5]),32);
        bufp->chgIData(oldp+51,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_bus__DOT__cfg_device_addr_base[6]),32);
        bufp->chgIData(oldp+52,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_bus__DOT__cfg_device_addr_base[7]),32);
        bufp->chgIData(oldp+53,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_bus__DOT__cfg_device_addr_mask[0]),32);
        bufp->chgIData(oldp+54,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_bus__DOT__cfg_device_addr_mask[1]),32);
        bufp->chgIData(oldp+55,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_bus__DOT__cfg_device_addr_mask[2]),32);
        bufp->chgIData(oldp+56,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_bus__DOT__cfg_device_addr_mask[3]),32);
        bufp->chgIData(oldp+57,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_bus__DOT__cfg_device_addr_mask[4]),32);
        bufp->chgIData(oldp+58,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_bus__DOT__cfg_device_addr_mask[5]),32);
        bufp->chgIData(oldp+59,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_bus__DOT__cfg_device_addr_mask[6]),32);
        bufp->chgIData(oldp+60,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_bus__DOT__cfg_device_addr_mask[7]),32);
        bufp->chgBit(oldp+61,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_ram__DOT__u_ram__DOT__gen_generic__DOT__u_impl_generic__DOT__unnamedblk3__DOT__show_mem_paths));
        bufp->chgIData(oldp+62,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_simulator_ctrl__DOT__log_fd),32);
        bufp->chgIData(oldp+63,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__ic_tag_rdata[0]),22);
        bufp->chgIData(oldp+64,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__ic_tag_rdata[1]),22);
        bufp->chgQData(oldp+65,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__ic_data_rdata[0]),64);
        bufp->chgQData(oldp+67,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__ic_data_rdata[1]),64);
        bufp->chgIData(oldp+69,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ic_tag_rdata_i[0]),22);
        bufp->chgIData(oldp+70,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ic_tag_rdata_i[1]),22);
        bufp->chgQData(oldp+71,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ic_data_rdata_i[0]),64);
        bufp->chgQData(oldp+73,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ic_data_rdata_i[1]),64);
        bufp->chgQData(oldp+75,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_pmp_addr[0]),34);
        bufp->chgQData(oldp+77,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_pmp_addr[1]),34);
        bufp->chgQData(oldp+79,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_pmp_addr[2]),34);
        bufp->chgQData(oldp+81,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_pmp_addr[3]),34);
        bufp->chgBit(oldp+83,((1U & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_pmp_cfg[0U] 
                                     >> 5U))));
        bufp->chgCData(oldp+84,((3U & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_pmp_cfg[0U] 
                                       >> 3U))),2);
        bufp->chgBit(oldp+85,((1U & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_pmp_cfg[0U] 
                                     >> 2U))));
        bufp->chgBit(oldp+86,((1U & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_pmp_cfg[0U] 
                                     >> 1U))));
        bufp->chgBit(oldp+87,((1U & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_pmp_cfg[0U])));
        bufp->chgBit(oldp+88,((1U & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_pmp_cfg[1U] 
                                     >> 5U))));
        bufp->chgCData(oldp+89,((3U & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_pmp_cfg[1U] 
                                       >> 3U))),2);
        bufp->chgBit(oldp+90,((1U & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_pmp_cfg[1U] 
                                     >> 2U))));
        bufp->chgBit(oldp+91,((1U & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_pmp_cfg[1U] 
                                     >> 1U))));
        bufp->chgBit(oldp+92,((1U & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_pmp_cfg[1U])));
        bufp->chgBit(oldp+93,((1U & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_pmp_cfg[2U] 
                                     >> 5U))));
        bufp->chgCData(oldp+94,((3U & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_pmp_cfg[2U] 
                                       >> 3U))),2);
        bufp->chgBit(oldp+95,((1U & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_pmp_cfg[2U] 
                                     >> 2U))));
        bufp->chgBit(oldp+96,((1U & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_pmp_cfg[2U] 
                                     >> 1U))));
        bufp->chgBit(oldp+97,((1U & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_pmp_cfg[2U])));
        bufp->chgBit(oldp+98,((1U & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_pmp_cfg[3U] 
                                     >> 5U))));
        bufp->chgCData(oldp+99,((3U & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_pmp_cfg[3U] 
                                       >> 3U))),2);
        bufp->chgBit(oldp+100,((1U & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_pmp_cfg[3U] 
                                      >> 2U))));
        bufp->chgBit(oldp+101,((1U & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_pmp_cfg[3U] 
                                      >> 1U))));
        bufp->chgBit(oldp+102,((1U & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_pmp_cfg[3U])));
        bufp->chgBit(oldp+103,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__pmp_req_err[0]));
        bufp->chgBit(oldp+104,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__pmp_req_err[1]));
        bufp->chgBit(oldp+105,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__pmp_req_err[2]));
        bufp->chgBit(oldp+106,((1U & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_pmp_cfg_o[0U] 
                                      >> 5U))));
        bufp->chgCData(oldp+107,((3U & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_pmp_cfg_o[0U] 
                                        >> 3U))),2);
        bufp->chgBit(oldp+108,((1U & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_pmp_cfg_o[0U] 
                                      >> 2U))));
        bufp->chgBit(oldp+109,((1U & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_pmp_cfg_o[0U] 
                                      >> 1U))));
        bufp->chgBit(oldp+110,((1U & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_pmp_cfg_o[0U])));
        bufp->chgBit(oldp+111,((1U & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_pmp_cfg_o[1U] 
                                      >> 5U))));
        bufp->chgCData(oldp+112,((3U & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_pmp_cfg_o[1U] 
                                        >> 3U))),2);
        bufp->chgBit(oldp+113,((1U & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_pmp_cfg_o[1U] 
                                      >> 2U))));
        bufp->chgBit(oldp+114,((1U & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_pmp_cfg_o[1U] 
                                      >> 1U))));
        bufp->chgBit(oldp+115,((1U & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_pmp_cfg_o[1U])));
        bufp->chgBit(oldp+116,((1U & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_pmp_cfg_o[2U] 
                                      >> 5U))));
        bufp->chgCData(oldp+117,((3U & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_pmp_cfg_o[2U] 
                                        >> 3U))),2);
        bufp->chgBit(oldp+118,((1U & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_pmp_cfg_o[2U] 
                                      >> 2U))));
        bufp->chgBit(oldp+119,((1U & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_pmp_cfg_o[2U] 
                                      >> 1U))));
        bufp->chgBit(oldp+120,((1U & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_pmp_cfg_o[2U])));
        bufp->chgBit(oldp+121,((1U & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_pmp_cfg_o[3U] 
                                      >> 5U))));
        bufp->chgCData(oldp+122,((3U & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_pmp_cfg_o[3U] 
                                        >> 3U))),2);
        bufp->chgBit(oldp+123,((1U & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_pmp_cfg_o[3U] 
                                      >> 2U))));
        bufp->chgBit(oldp+124,((1U & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_pmp_cfg_o[3U] 
                                      >> 1U))));
        bufp->chgBit(oldp+125,((1U & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_pmp_cfg_o[3U])));
        bufp->chgQData(oldp+126,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_pmp_addr_o[0]),34);
        bufp->chgQData(oldp+128,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_pmp_addr_o[1]),34);
        bufp->chgQData(oldp+130,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_pmp_addr_o[2]),34);
        bufp->chgQData(oldp+132,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_pmp_addr_o[3]),34);
        bufp->chgIData(oldp+134,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_addr_rdata[0]),32);
        bufp->chgIData(oldp+135,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_addr_rdata[1]),32);
        bufp->chgIData(oldp+136,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_addr_rdata[2]),32);
        bufp->chgIData(oldp+137,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_addr_rdata[3]),32);
        bufp->chgIData(oldp+138,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_addr_rdata[4]),32);
        bufp->chgIData(oldp+139,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_addr_rdata[5]),32);
        bufp->chgIData(oldp+140,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_addr_rdata[6]),32);
        bufp->chgIData(oldp+141,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_addr_rdata[7]),32);
        bufp->chgIData(oldp+142,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_addr_rdata[8]),32);
        bufp->chgIData(oldp+143,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_addr_rdata[9]),32);
        bufp->chgIData(oldp+144,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_addr_rdata[10]),32);
        bufp->chgIData(oldp+145,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_addr_rdata[11]),32);
        bufp->chgIData(oldp+146,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_addr_rdata[12]),32);
        bufp->chgIData(oldp+147,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_addr_rdata[13]),32);
        bufp->chgIData(oldp+148,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_addr_rdata[14]),32);
        bufp->chgIData(oldp+149,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_addr_rdata[15]),32);
        bufp->chgCData(oldp+150,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_cfg_rdata[0]),8);
        bufp->chgCData(oldp+151,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_cfg_rdata[1]),8);
        bufp->chgCData(oldp+152,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_cfg_rdata[2]),8);
        bufp->chgCData(oldp+153,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_cfg_rdata[3]),8);
        bufp->chgCData(oldp+154,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_cfg_rdata[4]),8);
        bufp->chgCData(oldp+155,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_cfg_rdata[5]),8);
        bufp->chgCData(oldp+156,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_cfg_rdata[6]),8);
        bufp->chgCData(oldp+157,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_cfg_rdata[7]),8);
        bufp->chgCData(oldp+158,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_cfg_rdata[8]),8);
        bufp->chgCData(oldp+159,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_cfg_rdata[9]),8);
        bufp->chgCData(oldp+160,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_cfg_rdata[10]),8);
        bufp->chgCData(oldp+161,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_cfg_rdata[11]),8);
        bufp->chgCData(oldp+162,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_cfg_rdata[12]),8);
        bufp->chgCData(oldp+163,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_cfg_rdata[13]),8);
        bufp->chgCData(oldp+164,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_cfg_rdata[14]),8);
        bufp->chgCData(oldp+165,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_cfg_rdata[15]),8);
        bufp->chgIData(oldp+166,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent[0]),32);
        bufp->chgIData(oldp+167,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent[1]),32);
        bufp->chgIData(oldp+168,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent[2]),32);
        bufp->chgIData(oldp+169,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent[3]),32);
        bufp->chgIData(oldp+170,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent[4]),32);
        bufp->chgIData(oldp+171,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent[5]),32);
        bufp->chgIData(oldp+172,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent[6]),32);
        bufp->chgIData(oldp+173,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent[7]),32);
        bufp->chgIData(oldp+174,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent[8]),32);
        bufp->chgIData(oldp+175,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent[9]),32);
        bufp->chgIData(oldp+176,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent[10]),32);
        bufp->chgIData(oldp+177,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent[11]),32);
        bufp->chgIData(oldp+178,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent[12]),32);
        bufp->chgIData(oldp+179,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent[13]),32);
        bufp->chgIData(oldp+180,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent[14]),32);
        bufp->chgIData(oldp+181,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent[15]),32);
        bufp->chgIData(oldp+182,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent[16]),32);
        bufp->chgIData(oldp+183,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent[17]),32);
        bufp->chgIData(oldp+184,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent[18]),32);
        bufp->chgIData(oldp+185,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent[19]),32);
        bufp->chgIData(oldp+186,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent[20]),32);
        bufp->chgIData(oldp+187,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent[21]),32);
        bufp->chgIData(oldp+188,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent[22]),32);
        bufp->chgIData(oldp+189,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent[23]),32);
        bufp->chgIData(oldp+190,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent[24]),32);
        bufp->chgIData(oldp+191,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent[25]),32);
        bufp->chgIData(oldp+192,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent[26]),32);
        bufp->chgIData(oldp+193,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent[27]),32);
        bufp->chgIData(oldp+194,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent[28]),32);
        bufp->chgIData(oldp+195,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent[29]),32);
        bufp->chgIData(oldp+196,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent[30]),32);
        bufp->chgIData(oldp+197,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent[31]),32);
        bufp->chgIData(oldp+198,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_imd_val_d[0]),32);
        bufp->chgIData(oldp+199,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_imd_val_d[1]),32);
        bufp->chgIData(oldp+200,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__imd_val_d_o[0]),32);
        bufp->chgIData(oldp+201,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__imd_val_d_o[1]),32);
        bufp->chgQData(oldp+202,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__g_no_pmp__DOT__unused_csr_pmp_addr[0]),34);
        bufp->chgQData(oldp+204,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__g_no_pmp__DOT__unused_csr_pmp_addr[1]),34);
        bufp->chgQData(oldp+206,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__g_no_pmp__DOT__unused_csr_pmp_addr[2]),34);
        bufp->chgQData(oldp+208,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__g_no_pmp__DOT__unused_csr_pmp_addr[3]),34);
        bufp->chgBit(oldp+210,((1U & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__g_no_pmp__DOT__unused_csr_pmp_cfg[0U] 
                                      >> 5U))));
        bufp->chgCData(oldp+211,((3U & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__g_no_pmp__DOT__unused_csr_pmp_cfg[0U] 
                                        >> 3U))),2);
        bufp->chgBit(oldp+212,((1U & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__g_no_pmp__DOT__unused_csr_pmp_cfg[0U] 
                                      >> 2U))));
        bufp->chgBit(oldp+213,((1U & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__g_no_pmp__DOT__unused_csr_pmp_cfg[0U] 
                                      >> 1U))));
        bufp->chgBit(oldp+214,((1U & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__g_no_pmp__DOT__unused_csr_pmp_cfg[0U])));
        bufp->chgBit(oldp+215,((1U & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__g_no_pmp__DOT__unused_csr_pmp_cfg[1U] 
                                      >> 5U))));
        bufp->chgCData(oldp+216,((3U & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__g_no_pmp__DOT__unused_csr_pmp_cfg[1U] 
                                        >> 3U))),2);
        bufp->chgBit(oldp+217,((1U & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__g_no_pmp__DOT__unused_csr_pmp_cfg[1U] 
                                      >> 2U))));
        bufp->chgBit(oldp+218,((1U & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__g_no_pmp__DOT__unused_csr_pmp_cfg[1U] 
                                      >> 1U))));
        bufp->chgBit(oldp+219,((1U & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__g_no_pmp__DOT__unused_csr_pmp_cfg[1U])));
        bufp->chgBit(oldp+220,((1U & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__g_no_pmp__DOT__unused_csr_pmp_cfg[2U] 
                                      >> 5U))));
        bufp->chgCData(oldp+221,((3U & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__g_no_pmp__DOT__unused_csr_pmp_cfg[2U] 
                                        >> 3U))),2);
        bufp->chgBit(oldp+222,((1U & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__g_no_pmp__DOT__unused_csr_pmp_cfg[2U] 
                                      >> 2U))));
        bufp->chgBit(oldp+223,((1U & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__g_no_pmp__DOT__unused_csr_pmp_cfg[2U] 
                                      >> 1U))));
        bufp->chgBit(oldp+224,((1U & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__g_no_pmp__DOT__unused_csr_pmp_cfg[2U])));
        bufp->chgBit(oldp+225,((1U & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__g_no_pmp__DOT__unused_csr_pmp_cfg[3U] 
                                      >> 5U))));
        bufp->chgCData(oldp+226,((3U & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__g_no_pmp__DOT__unused_csr_pmp_cfg[3U] 
                                        >> 3U))),2);
        bufp->chgBit(oldp+227,((1U & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__g_no_pmp__DOT__unused_csr_pmp_cfg[3U] 
                                      >> 2U))));
        bufp->chgBit(oldp+228,((1U & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__g_no_pmp__DOT__unused_csr_pmp_cfg[3U] 
                                      >> 1U))));
        bufp->chgBit(oldp+229,((1U & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__g_no_pmp__DOT__unused_csr_pmp_cfg[3U])));
        bufp->chgIData(oldp+230,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__ic_tag_rdata_i[0]),22);
        bufp->chgIData(oldp+231,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__ic_tag_rdata_i[1]),22);
        bufp->chgQData(oldp+232,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__ic_data_rdata_i[0]),64);
        bufp->chgQData(oldp+234,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__ic_data_rdata_i[1]),64);
        bufp->chgIData(oldp+236,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__unused_tag_ram_input[0]),22);
        bufp->chgIData(oldp+237,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__unused_tag_ram_input[1]),22);
        bufp->chgQData(oldp+238,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__unused_data_ram_input[0]),64);
        bufp->chgQData(oldp+240,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__unused_data_ram_input[1]),64);
        bufp->chgQData(oldp+242,(vlSelfRef.top_verilator__DOT__u_uartdpi__DOT__ctx),64);
    }
    if (VL_UNLIKELY((((vlSelfRef.__Vm_traceActivity[1U] 
                       | vlSelfRef.__Vm_traceActivity[5U]) 
                      | vlSelfRef.__Vm_traceActivity[17U])))) {
        bufp->chgSData(oldp+244,(((0x0000ff00U & ((
                                                   (2U 
                                                    & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__device_be[1U])
                                                    ? 
                                                   (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__device_wdata[1U] 
                                                    >> 8U)
                                                    : 
                                                   ((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gp_o) 
                                                    >> 8U)) 
                                                  << 8U)) 
                                  | (0x000000ffU & 
                                     ((1U & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__device_be[1U])
                                       ? vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__device_wdata[1U]
                                       : (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gp_o))))),16);
        bufp->chgIData(oldp+245,(((((0x0000ff00U & 
                                     (((8U & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__device_be[4U])
                                        ? (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__device_wdata[4U] 
                                           >> 0x00000018U)
                                        : (IData)((vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_timer__DOT__mtime_q 
                                                   >> 0x00000018U))) 
                                      << 8U)) | (0x000000ffU 
                                                 & ((4U 
                                                     & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__device_be[4U])
                                                     ? 
                                                    (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__device_wdata[4U] 
                                                     >> 0x00000010U)
                                                     : (IData)(
                                                               (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_timer__DOT__mtime_q 
                                                                >> 0x00000010U))))) 
                                   << 0x00000010U) 
                                  | ((0x0000ff00U & 
                                      (((2U & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__device_be[4U])
                                         ? (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__device_wdata[4U] 
                                            >> 8U) : (IData)(
                                                             (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_timer__DOT__mtime_q 
                                                              >> 8U))) 
                                       << 8U)) | (0x000000ffU 
                                                  & ((1U 
                                                      & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__device_be[4U])
                                                      ? vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__device_wdata[4U]
                                                      : (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_timer__DOT__mtime_q)))))),32);
        bufp->chgIData(oldp+246,(((((0x0000ff00U & 
                                     (((8U & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__device_be[4U])
                                        ? (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__device_wdata[4U] 
                                           >> 0x00000018U)
                                        : (IData)((vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_timer__DOT__mtime_q 
                                                   >> 0x00000038U))) 
                                      << 8U)) | (0x000000ffU 
                                                 & ((4U 
                                                     & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__device_be[4U])
                                                     ? 
                                                    (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__device_wdata[4U] 
                                                     >> 0x00000010U)
                                                     : (IData)(
                                                               (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_timer__DOT__mtime_q 
                                                                >> 0x00000030U))))) 
                                   << 0x00000010U) 
                                  | ((0x0000ff00U & 
                                      (((2U & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__device_be[4U])
                                         ? (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__device_wdata[4U] 
                                            >> 8U) : (IData)(
                                                             (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_timer__DOT__mtime_q 
                                                              >> 0x00000028U))) 
                                       << 8U)) | (0x000000ffU 
                                                  & ((1U 
                                                      & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__device_be[4U])
                                                      ? vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__device_wdata[4U]
                                                      : (IData)(
                                                                (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_timer__DOT__mtime_q 
                                                                 >> 0x00000020U))))))),32);
        bufp->chgIData(oldp+247,(((((0x0000ff00U & 
                                     (((8U & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__device_be[4U])
                                        ? (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__device_wdata[4U] 
                                           >> 0x00000018U)
                                        : (IData)((vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_timer__DOT__mtimecmp_q 
                                                   >> 0x00000018U))) 
                                      << 8U)) | (0x000000ffU 
                                                 & ((4U 
                                                     & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__device_be[4U])
                                                     ? 
                                                    (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__device_wdata[4U] 
                                                     >> 0x00000010U)
                                                     : (IData)(
                                                               (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_timer__DOT__mtimecmp_q 
                                                                >> 0x00000010U))))) 
                                   << 0x00000010U) 
                                  | ((0x0000ff00U & 
                                      (((2U & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__device_be[4U])
                                         ? (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__device_wdata[4U] 
                                            >> 8U) : (IData)(
                                                             (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_timer__DOT__mtimecmp_q 
                                                              >> 8U))) 
                                       << 8U)) | (0x000000ffU 
                                                  & ((1U 
                                                      & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__device_be[4U])
                                                      ? vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__device_wdata[4U]
                                                      : (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_timer__DOT__mtimecmp_q)))))),32);
        bufp->chgIData(oldp+248,(((((0x0000ff00U & 
                                     (((8U & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__device_be[4U])
                                        ? (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__device_wdata[4U] 
                                           >> 0x00000018U)
                                        : (IData)((vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_timer__DOT__mtimecmp_q 
                                                   >> 0x00000038U))) 
                                      << 8U)) | (0x000000ffU 
                                                 & ((4U 
                                                     & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__device_be[4U])
                                                     ? 
                                                    (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__device_wdata[4U] 
                                                     >> 0x00000010U)
                                                     : (IData)(
                                                               (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_timer__DOT__mtimecmp_q 
                                                                >> 0x00000030U))))) 
                                   << 0x00000010U) 
                                  | ((0x0000ff00U & 
                                      (((2U & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__device_be[4U])
                                         ? (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__device_wdata[4U] 
                                            >> 8U) : (IData)(
                                                             (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_timer__DOT__mtimecmp_q 
                                                              >> 0x00000028U))) 
                                       << 8U)) | (0x000000ffU 
                                                  & ((1U 
                                                      & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__device_be[4U])
                                                      ? vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__device_wdata[4U]
                                                      : (IData)(
                                                                (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_timer__DOT__mtimecmp_q 
                                                                 >> 0x00000020U))))))),32);
        bufp->chgBit(oldp+249,(((~ ((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_timer__DOT__mtimecmp_we) 
                                    | (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_timer__DOT__mtimecmph_we))) 
                                & ((vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_timer__DOT__mtime_q 
                                    >= vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_timer__DOT__mtimecmp_q) 
                                   | (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_timer__DOT__interrupt_q)))));
        bufp->chgBit(oldp+250,(((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__fifo_incr_rptr) 
                                & (0x7fU == (0x0000007fU 
                                             & (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q))))));
    }
    if (VL_UNLIKELY(((vlSelfRef.__Vm_traceActivity[1U] 
                      | vlSelfRef.__Vm_traceActivity[17U])))) {
        bufp->chgBit(oldp+251,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__host_gnt[0]));
        bufp->chgBit(oldp+252,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__host_gnt[1]));
        bufp->chgBit(oldp+253,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__device_req[0]));
        bufp->chgBit(oldp+254,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__device_req[1]));
        bufp->chgBit(oldp+255,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__device_req[2]));
        bufp->chgBit(oldp+256,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__device_req[3]));
        bufp->chgBit(oldp+257,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__device_req[4]));
        bufp->chgBit(oldp+258,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__device_req[5]));
        bufp->chgBit(oldp+259,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__device_req[6]));
        bufp->chgBit(oldp+260,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__device_req[7]));
        bufp->chgIData(oldp+261,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__device_addr[0]),32);
        bufp->chgIData(oldp+262,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__device_addr[1]),32);
        bufp->chgIData(oldp+263,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__device_addr[2]),32);
        bufp->chgIData(oldp+264,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__device_addr[3]),32);
        bufp->chgIData(oldp+265,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__device_addr[4]),32);
        bufp->chgIData(oldp+266,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__device_addr[5]),32);
        bufp->chgIData(oldp+267,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__device_addr[6]),32);
        bufp->chgIData(oldp+268,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__device_addr[7]),32);
        bufp->chgBit(oldp+269,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__device_we[0]));
        bufp->chgBit(oldp+270,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__device_we[1]));
        bufp->chgBit(oldp+271,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__device_we[2]));
        bufp->chgBit(oldp+272,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__device_we[3]));
        bufp->chgBit(oldp+273,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__device_we[4]));
        bufp->chgBit(oldp+274,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__device_we[5]));
        bufp->chgBit(oldp+275,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__device_we[6]));
        bufp->chgBit(oldp+276,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__device_we[7]));
        bufp->chgCData(oldp+277,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__device_be[0]),4);
        bufp->chgCData(oldp+278,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__device_be[1]),4);
        bufp->chgCData(oldp+279,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__device_be[2]),4);
        bufp->chgCData(oldp+280,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__device_be[3]),4);
        bufp->chgCData(oldp+281,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__device_be[4]),4);
        bufp->chgCData(oldp+282,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__device_be[5]),4);
        bufp->chgCData(oldp+283,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__device_be[6]),4);
        bufp->chgCData(oldp+284,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__device_be[7]),4);
        bufp->chgIData(oldp+285,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__device_wdata[0]),32);
        bufp->chgIData(oldp+286,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__device_wdata[1]),32);
        bufp->chgIData(oldp+287,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__device_wdata[2]),32);
        bufp->chgIData(oldp+288,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__device_wdata[3]),32);
        bufp->chgIData(oldp+289,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__device_wdata[4]),32);
        bufp->chgIData(oldp+290,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__device_wdata[5]),32);
        bufp->chgIData(oldp+291,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__device_wdata[6]),32);
        bufp->chgIData(oldp+292,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__device_wdata[7]),32);
        bufp->chgBit(oldp+293,((vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__device_req[7U] 
                                & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__device_we[7U])));
        bufp->chgCData(oldp+294,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__device_be[7U]),4);
        bufp->chgIData(oldp+295,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__device_wdata[7U]),32);
        bufp->chgBit(oldp+296,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__host_gnt[1U]));
        bufp->chgBit(oldp+297,((1U & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__device_wdata[7U])));
        bufp->chgBit(oldp+298,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_bus__DOT__host_req_i[0]));
        bufp->chgBit(oldp+299,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_bus__DOT__host_req_i[1]));
        bufp->chgBit(oldp+300,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_bus__DOT__host_gnt_o[0]));
        bufp->chgBit(oldp+301,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_bus__DOT__host_gnt_o[1]));
        bufp->chgBit(oldp+302,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_bus__DOT__device_req_o[0]));
        bufp->chgBit(oldp+303,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_bus__DOT__device_req_o[1]));
        bufp->chgBit(oldp+304,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_bus__DOT__device_req_o[2]));
        bufp->chgBit(oldp+305,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_bus__DOT__device_req_o[3]));
        bufp->chgBit(oldp+306,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_bus__DOT__device_req_o[4]));
        bufp->chgBit(oldp+307,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_bus__DOT__device_req_o[5]));
        bufp->chgBit(oldp+308,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_bus__DOT__device_req_o[6]));
        bufp->chgBit(oldp+309,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_bus__DOT__device_req_o[7]));
        bufp->chgIData(oldp+310,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_bus__DOT__device_addr_o[0]),32);
        bufp->chgIData(oldp+311,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_bus__DOT__device_addr_o[1]),32);
        bufp->chgIData(oldp+312,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_bus__DOT__device_addr_o[2]),32);
        bufp->chgIData(oldp+313,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_bus__DOT__device_addr_o[3]),32);
        bufp->chgIData(oldp+314,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_bus__DOT__device_addr_o[4]),32);
        bufp->chgIData(oldp+315,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_bus__DOT__device_addr_o[5]),32);
        bufp->chgIData(oldp+316,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_bus__DOT__device_addr_o[6]),32);
        bufp->chgIData(oldp+317,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_bus__DOT__device_addr_o[7]),32);
        bufp->chgBit(oldp+318,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_bus__DOT__device_we_o[0]));
        bufp->chgBit(oldp+319,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_bus__DOT__device_we_o[1]));
        bufp->chgBit(oldp+320,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_bus__DOT__device_we_o[2]));
        bufp->chgBit(oldp+321,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_bus__DOT__device_we_o[3]));
        bufp->chgBit(oldp+322,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_bus__DOT__device_we_o[4]));
        bufp->chgBit(oldp+323,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_bus__DOT__device_we_o[5]));
        bufp->chgBit(oldp+324,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_bus__DOT__device_we_o[6]));
        bufp->chgBit(oldp+325,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_bus__DOT__device_we_o[7]));
        bufp->chgCData(oldp+326,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_bus__DOT__device_be_o[0]),4);
        bufp->chgCData(oldp+327,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_bus__DOT__device_be_o[1]),4);
        bufp->chgCData(oldp+328,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_bus__DOT__device_be_o[2]),4);
        bufp->chgCData(oldp+329,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_bus__DOT__device_be_o[3]),4);
        bufp->chgCData(oldp+330,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_bus__DOT__device_be_o[4]),4);
        bufp->chgCData(oldp+331,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_bus__DOT__device_be_o[5]),4);
        bufp->chgCData(oldp+332,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_bus__DOT__device_be_o[6]),4);
        bufp->chgCData(oldp+333,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_bus__DOT__device_be_o[7]),4);
        bufp->chgIData(oldp+334,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_bus__DOT__device_wdata_o[0]),32);
        bufp->chgIData(oldp+335,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_bus__DOT__device_wdata_o[1]),32);
        bufp->chgIData(oldp+336,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_bus__DOT__device_wdata_o[2]),32);
        bufp->chgIData(oldp+337,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_bus__DOT__device_wdata_o[3]),32);
        bufp->chgIData(oldp+338,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_bus__DOT__device_wdata_o[4]),32);
        bufp->chgIData(oldp+339,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_bus__DOT__device_wdata_o[5]),32);
        bufp->chgIData(oldp+340,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_bus__DOT__device_wdata_o[6]),32);
        bufp->chgIData(oldp+341,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_bus__DOT__device_wdata_o[7]),32);
        bufp->chgBit(oldp+342,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_bus__DOT__host_sel_valid));
        bufp->chgBit(oldp+343,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_bus__DOT__device_sel_valid));
        bufp->chgBit(oldp+344,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_bus__DOT__host_sel_req));
        bufp->chgCData(oldp+345,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_bus__DOT__device_sel_req),3);
        bufp->chgBit(oldp+346,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__device_req[1U]));
        bufp->chgIData(oldp+347,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__device_addr[1U]),32);
        bufp->chgBit(oldp+348,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__device_we[1U]));
        bufp->chgCData(oldp+349,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__device_be[1U]),4);
        bufp->chgIData(oldp+350,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__device_wdata[1U]),32);
        bufp->chgSData(oldp+351,((0x00000fffU & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__device_addr[1U])),12);
        bufp->chgBit(oldp+352,((vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__device_req[1U] 
                                & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__device_we[1U] 
                                   & (0U == (0x00000fffU 
                                             & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__device_addr[1U]))))));
        bufp->chgBit(oldp+353,(((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_gpio__DOT____VdfgRegularize_hc9315579_0_0) 
                                & (4U == (0x00000fffU 
                                          & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__device_addr[1U])))));
        bufp->chgBit(oldp+354,(((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_gpio__DOT____VdfgRegularize_hc9315579_0_0) 
                                & (8U == (0x00000fffU 
                                          & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__device_addr[1U])))));
        bufp->chgCData(oldp+355,((0x0000000cU & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__device_be[1U])),4);
        bufp->chgIData(oldp+356,((vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__device_addr[1U] 
                                  >> 0x0000000cU)),20);
        bufp->chgSData(oldp+357,((vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__device_wdata[1U] 
                                  >> 0x00000010U)),16);
        bufp->chgBit(oldp+358,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__device_req[2U]));
        bufp->chgIData(oldp+359,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__device_addr[2U]),32);
        bufp->chgBit(oldp+360,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__device_we[2U]));
        bufp->chgCData(oldp+361,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__device_be[2U]),4);
        bufp->chgIData(oldp+362,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__device_wdata[2U]),32);
        bufp->chgCData(oldp+363,((0x000000ffU & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__device_wdata[2U])),8);
        bufp->chgBit(oldp+364,(((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_pwm__DOT____VdfgRegularize_hf75f81f8_0_1) 
                                & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__device_addr[2U] 
                                   >> 2U))));
        bufp->chgBit(oldp+365,(((~ (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__device_addr[2U] 
                                    >> 2U)) & (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_pwm__DOT____VdfgRegularize_hf75f81f8_0_1))));
        bufp->chgBit(oldp+366,(((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_pwm__DOT____VdfgRegularize_hf75f81f8_0_12) 
                                & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__device_addr[2U] 
                                   >> 2U))));
        bufp->chgBit(oldp+367,(((~ (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__device_addr[2U] 
                                    >> 2U)) & (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_pwm__DOT____VdfgRegularize_hf75f81f8_0_12))));
        bufp->chgBit(oldp+368,(((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_pwm__DOT____VdfgRegularize_hf75f81f8_0_13) 
                                & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__device_addr[2U] 
                                   >> 2U))));
        bufp->chgBit(oldp+369,(((~ (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__device_addr[2U] 
                                    >> 2U)) & (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_pwm__DOT____VdfgRegularize_hf75f81f8_0_13))));
        bufp->chgBit(oldp+370,(((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_pwm__DOT____VdfgRegularize_hf75f81f8_0_3) 
                                & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__device_addr[2U] 
                                   >> 2U))));
        bufp->chgBit(oldp+371,(((~ (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__device_addr[2U] 
                                    >> 2U)) & (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_pwm__DOT____VdfgRegularize_hf75f81f8_0_3))));
        bufp->chgBit(oldp+372,(((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_pwm__DOT____VdfgRegularize_hf75f81f8_0_4) 
                                & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__device_addr[2U] 
                                   >> 2U))));
        bufp->chgBit(oldp+373,(((~ (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__device_addr[2U] 
                                    >> 2U)) & (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_pwm__DOT____VdfgRegularize_hf75f81f8_0_4))));
        bufp->chgBit(oldp+374,(((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_pwm__DOT____VdfgRegularize_hf75f81f8_0_5) 
                                & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__device_addr[2U] 
                                   >> 2U))));
        bufp->chgBit(oldp+375,(((~ (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__device_addr[2U] 
                                    >> 2U)) & (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_pwm__DOT____VdfgRegularize_hf75f81f8_0_5))));
        bufp->chgBit(oldp+376,(((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_pwm__DOT____VdfgRegularize_hf75f81f8_0_6) 
                                & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__device_addr[2U] 
                                   >> 2U))));
        bufp->chgBit(oldp+377,(((~ (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__device_addr[2U] 
                                    >> 2U)) & (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_pwm__DOT____VdfgRegularize_hf75f81f8_0_6))));
        bufp->chgBit(oldp+378,(((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_pwm__DOT____VdfgRegularize_hf75f81f8_0_7) 
                                & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__device_addr[2U] 
                                   >> 2U))));
        bufp->chgBit(oldp+379,(((~ (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__device_addr[2U] 
                                    >> 2U)) & (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_pwm__DOT____VdfgRegularize_hf75f81f8_0_7))));
        bufp->chgBit(oldp+380,(((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_pwm__DOT____VdfgRegularize_hf75f81f8_0_8) 
                                & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__device_addr[2U] 
                                   >> 2U))));
        bufp->chgBit(oldp+381,(((~ (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__device_addr[2U] 
                                    >> 2U)) & (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_pwm__DOT____VdfgRegularize_hf75f81f8_0_8))));
        bufp->chgBit(oldp+382,(((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_pwm__DOT____VdfgRegularize_hf75f81f8_0_9) 
                                & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__device_addr[2U] 
                                   >> 2U))));
        bufp->chgBit(oldp+383,(((~ (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__device_addr[2U] 
                                    >> 2U)) & (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_pwm__DOT____VdfgRegularize_hf75f81f8_0_9))));
        bufp->chgBit(oldp+384,(((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_pwm__DOT____VdfgRegularize_hf75f81f8_0_10) 
                                & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__device_addr[2U] 
                                   >> 2U))));
        bufp->chgBit(oldp+385,(((~ (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__device_addr[2U] 
                                    >> 2U)) & (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_pwm__DOT____VdfgRegularize_hf75f81f8_0_10))));
        bufp->chgBit(oldp+386,(((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_pwm__DOT____VdfgRegularize_hf75f81f8_0_11) 
                                & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__device_addr[2U] 
                                   >> 2U))));
        bufp->chgBit(oldp+387,(((~ (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__device_addr[2U] 
                                    >> 2U)) & (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_pwm__DOT____VdfgRegularize_hf75f81f8_0_11))));
        bufp->chgBit(oldp+388,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__device_req[0U]));
        bufp->chgBit(oldp+389,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__device_we[0U]));
        bufp->chgCData(oldp+390,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__device_be[0U]),4);
        bufp->chgIData(oldp+391,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__device_addr[0U]),32);
        bufp->chgIData(oldp+392,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__device_wdata[0U]),32);
        bufp->chgSData(oldp+393,((0x00007fffU & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__device_addr[0U] 
                                                 >> 2U))),15);
        bufp->chgIData(oldp+394,(((0x0001fffcU & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__device_addr[0U] 
                                                  >> 0x0000000fU)) 
                                  | (3U & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__device_addr[0U]))),17);
        bufp->chgIData(oldp+395,(((((0x0000ff00U & 
                                     ((- (IData)((1U 
                                                  & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__device_be[0U] 
                                                     >> 3U)))) 
                                      << 8U)) | (0x000000ffU 
                                                 & (- (IData)(
                                                              (1U 
                                                               & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__device_be[0U] 
                                                                  >> 2U)))))) 
                                   << 0x00000010U) 
                                  | ((0x0000ff00U & 
                                      ((- (IData)((1U 
                                                   & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__device_be[0U] 
                                                      >> 1U)))) 
                                       << 8U)) | (0x000000ffU 
                                                  & (- (IData)(
                                                               (1U 
                                                                & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__device_be[0U]))))))),32);
        bufp->chgCData(oldp+396,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_ram__DOT__u_ram__DOT__gen_generic__DOT__u_impl_generic__DOT__a_wmask),4);
        bufp->chgBit(oldp+397,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__device_req[6U]));
        bufp->chgBit(oldp+398,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__device_we[6U]));
        bufp->chgCData(oldp+399,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__device_be[6U]),4);
        bufp->chgIData(oldp+400,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__device_addr[6U]),32);
        bufp->chgIData(oldp+401,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__device_wdata[6U]),32);
        bufp->chgCData(oldp+402,((0x000000ffU & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__device_addr[6U] 
                                                 >> 2U))),8);
        bufp->chgBit(oldp+403,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__device_req[5U]));
        bufp->chgIData(oldp+404,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__device_addr[5U]),32);
        bufp->chgBit(oldp+405,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__device_we[5U]));
        bufp->chgCData(oldp+406,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__device_be[5U]),4);
        bufp->chgIData(oldp+407,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__device_wdata[5U]),32);
        bufp->chgSData(oldp+408,((0x00000fffU & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__device_addr[5U])),12);
        bufp->chgBit(oldp+409,((vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__device_req[5U] 
                                & ((~ vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__device_we[5U]) 
                                   & (4U == (0x00000fffU 
                                             & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__device_addr[5U]))))));
        bufp->chgBit(oldp+410,((vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__device_req[5U] 
                                & ((0U == (0x00000fffU 
                                           & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__device_addr[5U])) 
                                   & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__device_we[5U] 
                                      & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__device_be[5U])))));
        bufp->chgIData(oldp+411,((vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__device_addr[5U] 
                                  >> 0x0000000cU)),20);
        bufp->chgCData(oldp+412,((7U & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__device_be[5U] 
                                        >> 1U))),3);
        bufp->chgIData(oldp+413,((vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__device_wdata[5U] 
                                  >> 8U)),24);
        bufp->chgCData(oldp+414,((0x000000ffU & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__device_wdata[5U])),8);
        bufp->chgBit(oldp+415,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__fifo_incr_wptr));
        bufp->chgBit(oldp+416,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__device_req[4U]));
        bufp->chgIData(oldp+417,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__device_addr[4U]),32);
        bufp->chgBit(oldp+418,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__device_we[4U]));
        bufp->chgCData(oldp+419,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__device_be[4U]),4);
        bufp->chgIData(oldp+420,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__device_wdata[4U]),32);
        bufp->chgBit(oldp+421,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_timer__DOT__timer_we));
        bufp->chgBit(oldp+422,(((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_timer__DOT__timer_we) 
                                & (0U == (0x000003ffU 
                                          & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__device_addr[4U])))));
        bufp->chgBit(oldp+423,(((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_timer__DOT__timer_we) 
                                & (4U == (0x000003ffU 
                                          & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__device_addr[4U])))));
        bufp->chgBit(oldp+424,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_timer__DOT__mtimecmp_we));
        bufp->chgBit(oldp+425,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_timer__DOT__mtimecmph_we));
        bufp->chgQData(oldp+426,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_timer__DOT__mtime_d),64);
        bufp->chgQData(oldp+428,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_timer__DOT__mtimecmp_d),64);
        bufp->chgBit(oldp+430,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_timer__DOT__error_d));
        bufp->chgIData(oldp+431,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_timer__DOT__rdata_d),32);
        bufp->chgBit(oldp+432,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__host_gnt[0U]));
        bufp->chgBit(oldp+433,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mul_wait_i));
        bufp->chgBit(oldp+434,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__div_wait_i));
        bufp->chgBit(oldp+435,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__perf_branch));
        bufp->chgBit(oldp+436,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__branch_set_raw_d));
        bufp->chgBit(oldp+437,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__jump_set_i));
        bufp->chgBit(oldp+438,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__jump_set_raw));
        bufp->chgBit(oldp+439,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__stall_multdiv));
        bufp->chgBit(oldp+440,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__stall_branch));
        bufp->chgBit(oldp+441,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__stall_jump));
        bufp->chgBit(oldp+442,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__stall_id_i));
        bufp->chgBit(oldp+443,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__rf_we_raw));
        bufp->chgBit(oldp+444,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__stall_alu));
        bufp->chgBit(oldp+445,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__id_fsm_d));
        bufp->chgBit(oldp+446,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__addr_update));
        bufp->chgBit(oldp+447,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__ctrl_update));
        bufp->chgBit(oldp+448,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__handle_misaligned_d));
        bufp->chgBit(oldp+449,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__pmp_err_d));
        bufp->chgBit(oldp+450,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__lsu_err_d));
        bufp->chgCData(oldp+451,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__ls_fsm_ns),3);
        bufp->chgBit(oldp+452,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__device_req[3U]));
        bufp->chgIData(oldp+453,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__device_addr[3U]),32);
        bufp->chgBit(oldp+454,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__device_we[3U]));
        bufp->chgCData(oldp+455,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__device_be[3U]),4);
        bufp->chgIData(oldp+456,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__device_wdata[3U]),32);
        bufp->chgIData(oldp+457,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__device_rdata_d),32);
        bufp->chgSData(oldp+458,((0x00000fffU & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__device_addr[3U])),12);
        bufp->chgBit(oldp+459,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__rx_fifo_rready));
        bufp->chgBit(oldp+460,((vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__device_req[3U] 
                                & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__device_be[3U] 
                                   & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__device_we[3U]))));
        bufp->chgBit(oldp+461,(((4U == (0x00000fffU 
                                        & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__device_addr[3U])) 
                                & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__device_req[3U] 
                                   & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__device_be[3U] 
                                      & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__device_we[3U])))));
        bufp->chgIData(oldp+462,((vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__device_addr[3U] 
                                  >> 0x0000000cU)),20);
        bufp->chgCData(oldp+463,((7U & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__device_be[3U] 
                                        >> 1U))),3);
        bufp->chgIData(oldp+464,((vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__device_wdata[3U] 
                                  >> 8U)),24);
        bufp->chgBit(oldp+465,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__fifo_incr_rptr));
        bufp->chgCData(oldp+466,((0x000000ffU & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__device_wdata[3U])),8);
        bufp->chgBit(oldp+467,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__fifo_incr_wptr));
    }
    if (VL_UNLIKELY((((vlSelfRef.__Vm_traceActivity[2U] 
                       | vlSelfRef.__Vm_traceActivity[8U]) 
                      | vlSelfRef.__Vm_traceActivity[19U])))) {
        bufp->chgBit(oldp+468,((1U & ((~ ((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__debug_mode_entering) 
                                          | (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q))) 
                                      & (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_cpuctrlsts_part_csr__DOT__rdata_q)))));
        bufp->chgBit(oldp+469,(((~ ((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mcountinhibit_q) 
                                    >> 3U)) & (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__dside_wait_i))));
        bufp->chgBit(oldp+470,(((~ ((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mcountinhibit_q) 
                                    >> 4U)) & (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__iside_wait_i))));
        bufp->chgBit(oldp+471,(((~ ((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mcountinhibit_q) 
                                    >> 7U)) & (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__perf_jump))));
        bufp->chgBit(oldp+472,(((~ ((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mcountinhibit_q) 
                                    >> 9U)) & (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__perf_tbranch))));
        bufp->chgBit(oldp+473,(((~ ((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mcountinhibit_q) 
                                    >> 0x0000000aU)) 
                                & (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__instr_ret_compressed_i))));
        bufp->chgBit(oldp+474,(((~ ((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mcountinhibit_q) 
                                    >> 2U)) & (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__instr_ret_i))));
    }
    if (VL_UNLIKELY((((vlSelfRef.__Vm_traceActivity[2U] 
                       | vlSelfRef.__Vm_traceActivity[14U]) 
                      | vlSelfRef.__Vm_traceActivity[19U])))) {
        bufp->chgCData(oldp+475,((((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ctrl_busy) 
                                   | (((0U != (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__rdata_outstanding_q)) 
                                       | (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__instr_req_o)) 
                                      | (0U != (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__ls_fsm_cs))))
                                   ? 5U : 0x0aU)),4);
        bufp->chgBit(oldp+476,(((0U != (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__rdata_outstanding_q)) 
                                | (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__instr_req_o))));
        bufp->chgBit(oldp+477,(((7U != (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs)) 
                                & (7U == (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_ns)))));
        bufp->chgBit(oldp+478,(((8U != (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs)) 
                                & (8U == (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_ns)))));
        bufp->chgBit(oldp+479,(((9U != (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs)) 
                                & (9U == (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_ns)))));
        bufp->chgBit(oldp+480,(((6U != (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs)) 
                                & (6U == (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_ns)))));
        bufp->chgBit(oldp+481,((((~ (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__pc_set)) 
                                 & (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__instr_new_id_d)) 
                                | ((~ (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__instr_valid_clear_o)) 
                                   & (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__instr_valid_id_q)))));
    }
    if (VL_UNLIKELY(((vlSelfRef.__Vm_traceActivity[2U] 
                      | vlSelfRef.__Vm_traceActivity[19U])))) {
        bufp->chgBit(oldp+482,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__instr_req_o));
        bufp->chgBit(oldp+483,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__instr_gnt_i));
        bufp->chgIData(oldp+484,((0xfffffffcU & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__stored_addr_d)),32);
        bufp->chgBit(oldp+485,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_ram__DOT__u_ram__DOT__gen_generic__DOT__u_impl_generic__DOT__b_req_i));
        bufp->chgBit(oldp+486,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__dbg_instr_req));
        bufp->chgBit(oldp+487,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__gen_rom_snd_scratch__DOT__i_debug_rom__DOT__req_i));
        bufp->chgIData(oldp+488,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__addr_i),32);
        bufp->chgBit(oldp+489,((0x0800U <= (0x00000fffU 
                                            & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__addr_i))));
        bufp->chgQData(oldp+490,((QData)((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__addr_i))),64);
        bufp->chgSData(oldp+492,((0x00007fffU & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__stored_addr_d 
                                                 >> 2U))),15);
        bufp->chgIData(oldp+493,((0x0001fffcU & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__stored_addr_d 
                                                 >> 0x0000000fU))),17);
        bufp->chgBit(oldp+494,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__double_fault_seen_o));
        bufp->chgBit(oldp+495,((0U != (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__wb_stage_i__DOT__rf_wdata_wb_mux_we))));
        bufp->chgIData(oldp+496,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__wb_stage_i__DOT__rf_wdata_wb_o),32);
        bufp->chgIData(oldp+497,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__we_a_dec),32);
        bufp->chgCData(oldp+498,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__imd_val_we_o),2);
        bufp->chgBit(oldp+499,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__instr_valid_clear_o));
        bufp->chgBit(oldp+500,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__pc_set));
        bufp->chgCData(oldp+501,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__pc_mux_id),3);
        bufp->chgCData(oldp+502,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__exc_pc_mux_id),2);
        bufp->chgBit(oldp+503,((1U & ((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__exc_cause) 
                                      >> 6U))));
        bufp->chgBit(oldp+504,((1U & ((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__exc_cause) 
                                      >> 5U))));
        bufp->chgCData(oldp+505,((0x0000001fU & (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__exc_cause))),5);
        bufp->chgBit(oldp+506,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ctrl_busy));
        bufp->chgBit(oldp+507,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__rf_we_id_o));
        bufp->chgBit(oldp+508,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_op_en_i));
        bufp->chgBit(oldp+509,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__id_in_ready_o));
        bufp->chgBit(oldp+510,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_req_int));
        bufp->chgBit(oldp+511,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__en_wb_o));
        bufp->chgBit(oldp+512,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_save_if));
        bufp->chgBit(oldp+513,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_save_id));
        bufp->chgBit(oldp+514,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_restore_mret_id));
        bufp->chgBit(oldp+515,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_restore_dret_id));
        bufp->chgBit(oldp+516,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_save_cause));
        bufp->chgBit(oldp+517,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_mtvec_init_i));
        bufp->chgIData(oldp+518,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_mtval),32);
        bufp->chgBit(oldp+519,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__debug_mode_entering));
        bufp->chgBit(oldp+520,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__debug_csr_save));
        bufp->chgBit(oldp+521,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__instr_ret_i));
        bufp->chgBit(oldp+522,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__instr_ret_compressed_i));
        bufp->chgBit(oldp+523,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__iside_wait_i));
        bufp->chgBit(oldp+524,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__dside_wait_i));
        bufp->chgBit(oldp+525,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__perf_jump));
        bufp->chgBit(oldp+526,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__perf_tbranch));
        bufp->chgIData(oldp+527,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__exception_pc),32);
        bufp->chgCData(oldp+528,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__priv_lvl_d),2);
        bufp->chgBit(oldp+529,((1U & ((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mstatus_d) 
                                      >> 5U))));
        bufp->chgBit(oldp+530,((1U & ((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mstatus_d) 
                                      >> 4U))));
        bufp->chgCData(oldp+531,((3U & ((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mstatus_d) 
                                        >> 2U))),2);
        bufp->chgBit(oldp+532,((1U & ((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mstatus_d) 
                                      >> 1U))));
        bufp->chgBit(oldp+533,((1U & (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mstatus_d))));
        bufp->chgBit(oldp+534,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mstatus_en));
        bufp->chgBit(oldp+535,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mie_en));
        bufp->chgBit(oldp+536,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mscratch_en));
        bufp->chgIData(oldp+537,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mepc_d),32);
        bufp->chgBit(oldp+538,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mepc_en));
        bufp->chgBit(oldp+539,((1U & ((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mcause_d) 
                                      >> 6U))));
        bufp->chgBit(oldp+540,((1U & ((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mcause_d) 
                                      >> 5U))));
        bufp->chgCData(oldp+541,((0x0000001fU & (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mcause_d))),5);
        bufp->chgBit(oldp+542,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mcause_en));
        bufp->chgIData(oldp+543,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mtval_d),32);
        bufp->chgBit(oldp+544,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mtval_en));
        bufp->chgBit(oldp+545,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mtvec_en));
        bufp->chgCData(oldp+546,((vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__dcsr_d 
                                  >> 0x0000001cU)),4);
        bufp->chgSData(oldp+547,((0x00000fffU & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__dcsr_d 
                                                 >> 0x00000010U))),12);
        bufp->chgBit(oldp+548,((1U & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__dcsr_d 
                                      >> 0x0000000fU))));
        bufp->chgBit(oldp+549,((1U & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__dcsr_d 
                                      >> 0x0000000eU))));
        bufp->chgBit(oldp+550,((1U & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__dcsr_d 
                                      >> 0x0000000dU))));
        bufp->chgBit(oldp+551,((1U & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__dcsr_d 
                                      >> 0x0000000cU))));
        bufp->chgBit(oldp+552,((1U & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__dcsr_d 
                                      >> 0x0000000bU))));
        bufp->chgBit(oldp+553,((1U & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__dcsr_d 
                                      >> 0x0000000aU))));
        bufp->chgBit(oldp+554,((1U & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__dcsr_d 
                                      >> 9U))));
        bufp->chgCData(oldp+555,((7U & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__dcsr_d 
                                        >> 6U))),3);
        bufp->chgBit(oldp+556,((1U & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__dcsr_d 
                                      >> 5U))));
        bufp->chgBit(oldp+557,((1U & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__dcsr_d 
                                      >> 4U))));
        bufp->chgBit(oldp+558,((1U & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__dcsr_d 
                                      >> 3U))));
        bufp->chgBit(oldp+559,((1U & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__dcsr_d 
                                      >> 2U))));
        bufp->chgCData(oldp+560,((3U & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__dcsr_d)),2);
        bufp->chgBit(oldp+561,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__dcsr_en));
        bufp->chgIData(oldp+562,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__depc_d),32);
        bufp->chgBit(oldp+563,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__depc_en));
        bufp->chgBit(oldp+564,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__dscratch0_en));
        bufp->chgBit(oldp+565,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__dscratch1_en));
        bufp->chgBit(oldp+566,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mstack_en));
        bufp->chgBit(oldp+567,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mcountinhibit_we));
        bufp->chgIData(oldp+568,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_we),32);
        bufp->chgIData(oldp+569,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounterh_we),32);
        bufp->chgBit(oldp+570,((1U & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_we 
                                      >> 1U))));
        bufp->chgBit(oldp+571,((1U & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounterh_we 
                                      >> 1U))));
        bufp->chgBit(oldp+572,((1U & ((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__cpuctrlsts_part_d) 
                                      >> 7U))));
        bufp->chgBit(oldp+573,((1U & ((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__cpuctrlsts_part_d) 
                                      >> 6U))));
        bufp->chgCData(oldp+574,((7U & ((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__cpuctrlsts_part_d) 
                                        >> 3U))),3);
        bufp->chgBit(oldp+575,((1U & ((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__cpuctrlsts_part_d) 
                                      >> 2U))));
        bufp->chgBit(oldp+576,((1U & ((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__cpuctrlsts_part_d) 
                                      >> 1U))));
        bufp->chgBit(oldp+577,((1U & (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__cpuctrlsts_part_d))));
        bufp->chgBit(oldp+578,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__cpuctrlsts_part_we));
        bufp->chgBit(oldp+579,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_we_int));
        bufp->chgIData(oldp+580,((vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_we 
                                  >> 0x0000000dU)),19);
        bufp->chgIData(oldp+581,((vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounterh_we 
                                  >> 0x0000000dU)),19);
        bufp->chgBit(oldp+582,((1U & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounterh_we 
                                      >> 3U))));
        bufp->chgBit(oldp+583,((1U & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_we 
                                      >> 3U))));
        bufp->chgQData(oldp+584,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__0__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_load),64);
        bufp->chgBit(oldp+586,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__0__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__we));
        bufp->chgQData(oldp+587,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__0__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_d),40);
        bufp->chgIData(oldp+589,((0x00ffffffU & (IData)(
                                                        (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__0__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_load 
                                                         >> 0x00000028U)))),24);
        bufp->chgBit(oldp+590,((1U & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounterh_we 
                                      >> 4U))));
        bufp->chgBit(oldp+591,((1U & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_we 
                                      >> 4U))));
        bufp->chgQData(oldp+592,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__1__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_load),64);
        bufp->chgBit(oldp+594,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__1__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__we));
        bufp->chgQData(oldp+595,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__1__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_d),40);
        bufp->chgIData(oldp+597,((0x00ffffffU & (IData)(
                                                        (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__1__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_load 
                                                         >> 0x00000028U)))),24);
        bufp->chgBit(oldp+598,((1U & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounterh_we 
                                      >> 5U))));
        bufp->chgBit(oldp+599,((1U & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_we 
                                      >> 5U))));
        bufp->chgQData(oldp+600,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__2__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_load),64);
        bufp->chgBit(oldp+602,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__2__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__we));
        bufp->chgQData(oldp+603,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__2__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_d),40);
        bufp->chgIData(oldp+605,((0x00ffffffU & (IData)(
                                                        (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__2__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_load 
                                                         >> 0x00000028U)))),24);
        bufp->chgBit(oldp+606,((1U & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounterh_we 
                                      >> 6U))));
        bufp->chgBit(oldp+607,((1U & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_we 
                                      >> 6U))));
        bufp->chgQData(oldp+608,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__3__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_load),64);
        bufp->chgBit(oldp+610,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__3__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__we));
        bufp->chgQData(oldp+611,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__3__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_d),40);
        bufp->chgIData(oldp+613,((0x00ffffffU & (IData)(
                                                        (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__3__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_load 
                                                         >> 0x00000028U)))),24);
        bufp->chgBit(oldp+614,((1U & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounterh_we 
                                      >> 7U))));
        bufp->chgBit(oldp+615,((1U & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_we 
                                      >> 7U))));
        bufp->chgQData(oldp+616,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__4__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_load),64);
        bufp->chgBit(oldp+618,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__4__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__we));
        bufp->chgQData(oldp+619,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__4__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_d),40);
        bufp->chgIData(oldp+621,((0x00ffffffU & (IData)(
                                                        (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__4__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_load 
                                                         >> 0x00000028U)))),24);
        bufp->chgBit(oldp+622,((1U & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounterh_we 
                                      >> 8U))));
        bufp->chgBit(oldp+623,((1U & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_we 
                                      >> 8U))));
        bufp->chgQData(oldp+624,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__5__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_load),64);
        bufp->chgBit(oldp+626,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__5__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__we));
        bufp->chgQData(oldp+627,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__5__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_d),40);
        bufp->chgIData(oldp+629,((0x00ffffffU & (IData)(
                                                        (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__5__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_load 
                                                         >> 0x00000028U)))),24);
        bufp->chgBit(oldp+630,((1U & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounterh_we 
                                      >> 9U))));
        bufp->chgBit(oldp+631,((1U & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_we 
                                      >> 9U))));
        bufp->chgQData(oldp+632,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__6__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_load),64);
        bufp->chgBit(oldp+634,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__6__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__we));
        bufp->chgQData(oldp+635,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__6__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_d),40);
        bufp->chgIData(oldp+637,((0x00ffffffU & (IData)(
                                                        (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__6__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_load 
                                                         >> 0x00000028U)))),24);
        bufp->chgBit(oldp+638,((1U & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounterh_we 
                                      >> 0x0000000aU))));
        bufp->chgBit(oldp+639,((1U & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_we 
                                      >> 0x0000000aU))));
        bufp->chgQData(oldp+640,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__7__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_load),64);
        bufp->chgBit(oldp+642,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__7__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__we));
        bufp->chgQData(oldp+643,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__7__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_d),40);
        bufp->chgIData(oldp+645,((0x00ffffffU & (IData)(
                                                        (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__7__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_load 
                                                         >> 0x00000028U)))),24);
        bufp->chgBit(oldp+646,((1U & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounterh_we 
                                      >> 0x0000000bU))));
        bufp->chgBit(oldp+647,((1U & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_we 
                                      >> 0x0000000bU))));
        bufp->chgQData(oldp+648,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__8__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_load),64);
        bufp->chgBit(oldp+650,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__8__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__we));
        bufp->chgQData(oldp+651,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__8__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_d),40);
        bufp->chgIData(oldp+653,((0x00ffffffU & (IData)(
                                                        (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__8__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_load 
                                                         >> 0x00000028U)))),24);
        bufp->chgBit(oldp+654,((1U & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounterh_we 
                                      >> 0x0000000cU))));
        bufp->chgBit(oldp+655,((1U & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_we 
                                      >> 0x0000000cU))));
        bufp->chgQData(oldp+656,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__9__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_load),64);
        bufp->chgBit(oldp+658,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__9__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__we));
        bufp->chgQData(oldp+659,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__9__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_d),40);
        bufp->chgIData(oldp+661,((0x00ffffffU & (IData)(
                                                        (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__9__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_load 
                                                         >> 0x00000028U)))),24);
        bufp->chgCData(oldp+662,((((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT____Vcellinp__gen_trigger_regs__DOT__g_dbg_tmatch_reg__BRA__1__KET____DOT__u_tmatch_control_csr__wr_en_i) 
                                   << 1U) | (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_trigger_regs__DOT__tmatch_control_we__BRA__0__KET__))),2);
        bufp->chgCData(oldp+663,((((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT____Vcellinp__gen_trigger_regs__DOT__g_dbg_tmatch_reg__BRA__1__KET____DOT__u_tmatch_value_csr__wr_en_i) 
                                   << 1U) | (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_trigger_regs__DOT__tmatch_value_we__BRA__0__KET__))),2);
        bufp->chgBit(oldp+664,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_trigger_regs__DOT__tmatch_control_we__BRA__0__KET__));
        bufp->chgBit(oldp+665,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_trigger_regs__DOT__tmatch_value_we__BRA__0__KET__));
        bufp->chgBit(oldp+666,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT____Vcellinp__gen_trigger_regs__DOT__g_dbg_tmatch_reg__BRA__1__KET____DOT__u_tmatch_control_csr__wr_en_i));
        bufp->chgBit(oldp+667,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT____Vcellinp__gen_trigger_regs__DOT__g_dbg_tmatch_reg__BRA__1__KET____DOT__u_tmatch_value_csr__wr_en_i));
        bufp->chgBit(oldp+668,((1U & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounterh_we)));
        bufp->chgBit(oldp+669,((1U & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_we)));
        bufp->chgQData(oldp+670,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mcycle_counter_i__DOT__counter_load),64);
        bufp->chgBit(oldp+672,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mcycle_counter_i__DOT__we));
        bufp->chgQData(oldp+673,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mcycle_counter_i__DOT__counter_d),64);
        bufp->chgBit(oldp+675,((1U & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounterh_we 
                                      >> 2U))));
        bufp->chgBit(oldp+676,((1U & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_we 
                                      >> 2U))));
        bufp->chgQData(oldp+677,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__minstret_counter_i__DOT__counter_load),64);
        bufp->chgBit(oldp+679,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__minstret_counter_i__DOT__we));
        bufp->chgQData(oldp+680,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__minstret_counter_i__DOT__counter_d),64);
        bufp->chgCData(oldp+682,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__cpuctrlsts_part_d),8);
        bufp->chgIData(oldp+683,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__dcsr_d),32);
        bufp->chgCData(oldp+684,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mcause_d),7);
        bufp->chgCData(oldp+685,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mstatus_d),6);
        bufp->chgCData(oldp+686,((((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_en_internal) 
                                   << 1U) | ((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__mult_en_internal) 
                                             | (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_en_internal)))),2);
        bufp->chgBit(oldp+687,(((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__mult_en_internal) 
                                | (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_en_internal))));
        bufp->chgBit(oldp+688,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__mult_en_internal));
        bufp->chgBit(oldp+689,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_en_internal));
        bufp->chgBit(oldp+690,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__instr_executing_spec));
        bufp->chgBit(oldp+691,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_run));
        bufp->chgBit(oldp+692,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__flush_id));
        bufp->chgCData(oldp+693,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_ns),4);
        bufp->chgBit(oldp+694,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__nmi_mode_d));
        bufp->chgBit(oldp+695,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_d));
        bufp->chgBit(oldp+696,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__halt_if));
        bufp->chgBit(oldp+697,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__retain_id));
        bufp->chgBit(oldp+698,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__special_req));
        bufp->chgBit(oldp+699,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__instr_new_id_d));
        bufp->chgIData(oldp+700,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__in_addr_i),32);
        bufp->chgIData(oldp+701,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__exc_pc),32);
        bufp->chgCData(oldp+702,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__irq_vec),5);
        bufp->chgBit(oldp+703,((IData)((0U != (0x60U 
                                               & (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__exc_cause))))));
        bufp->chgBit(oldp+704,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__valid_new_req));
        bufp->chgBit(oldp+705,(((~ (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__instr_gnt_i)) 
                                & (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__instr_req_o))));
        bufp->chgBit(oldp+706,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__discard_req_d));
        bufp->chgCData(oldp+707,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__rdata_outstanding_n),2);
        bufp->chgCData(oldp+708,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__branch_discard_n),2);
        bufp->chgIData(oldp+709,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__stored_addr_d),32);
        bufp->chgBit(oldp+710,(((~ (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__instr_gnt_i)) 
                                & (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT____VdfgRegularize_h78b13180_0_3))));
        bufp->chgBit(oldp+711,(((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__pc_set) 
                                | (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT____VdfgRegularize_h78b13180_0_3))));
        bufp->chgCData(oldp+712,(((((~ (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__pc_set)) 
                                    & (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_popped__BRA__2__KET__)) 
                                   << 2U) | ((((~ (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__pc_set)) 
                                               & (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_popped__BRA__1__KET__)) 
                                              << 1U) 
                                             | ((~ (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__pc_set)) 
                                                & (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_popped__BRA__0__KET__))))),3);
        bufp->chgCData(oldp+713,((((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_popped__BRA__2__KET__) 
                                   << 2U) | (((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_popped__BRA__1__KET__) 
                                              << 1U) 
                                             | (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_popped__BRA__0__KET__)))),3);
        bufp->chgBit(oldp+714,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__pop_fifo));
        bufp->chgBit(oldp+715,(((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__pc_set) 
                                | (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT____VdfgRegularize_hb899178c_0_3))));
        bufp->chgBit(oldp+716,((1U & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__in_addr_i)));
        bufp->chgCData(oldp+717,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__wb_stage_i__DOT__rf_wdata_wb_mux_we),2);
    }
    if (VL_UNLIKELY(((vlSelfRef.__Vm_traceActivity[3U] 
                      | vlSelfRef.__Vm_traceActivity[20U])))) {
        bufp->chgIData(oldp+718,((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__data_mem_csrs)),32);
        bufp->chgIData(oldp+719,((IData)((vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__data_mem_csrs 
                                          >> 0x00000020U))),32);
        bufp->chgBit(oldp+720,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__data_valid));
        bufp->chgBit(oldp+721,((1U & (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__halted_d_aligned))));
        bufp->chgBit(oldp+722,((1U & (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__resuming_d_aligned))));
        bufp->chgBit(oldp+723,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__going));
        bufp->chgBit(oldp+724,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__exception));
        bufp->chgQData(oldp+725,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__rdata_d),64);
        bufp->chgCData(oldp+727,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__halted_d_aligned),2);
        bufp->chgCData(oldp+728,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__halted_aligned),2);
        bufp->chgCData(oldp+729,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__resuming_d_aligned),2);
        bufp->chgCData(oldp+730,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__state_d),2);
        bufp->chgIData(oldp+731,((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__data_bits)),32);
        bufp->chgIData(oldp+732,((IData)((vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__data_bits 
                                          >> 0x00000020U))),32);
        bufp->chgCData(oldp+733,((0x000000ffU & (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__rdata))),8);
        bufp->chgCData(oldp+734,((0x000000ffU & (IData)(
                                                        (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__rdata 
                                                         >> 8U)))),8);
        bufp->chgCData(oldp+735,((0x000000ffU & (IData)(
                                                        (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__rdata 
                                                         >> 0x00000010U)))),8);
        bufp->chgCData(oldp+736,((0x000000ffU & (IData)(
                                                        (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__rdata 
                                                         >> 0x00000018U)))),8);
        bufp->chgCData(oldp+737,((0x000000ffU & (IData)(
                                                        (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__rdata 
                                                         >> 0x00000020U)))),8);
        bufp->chgCData(oldp+738,((0x000000ffU & (IData)(
                                                        (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__rdata 
                                                         >> 0x00000028U)))),8);
        bufp->chgCData(oldp+739,((0x000000ffU & (IData)(
                                                        (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__rdata 
                                                         >> 0x00000030U)))),8);
        bufp->chgCData(oldp+740,((0x000000ffU & (IData)(
                                                        (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__rdata 
                                                         >> 0x00000038U)))),8);
    }
    if (VL_UNLIKELY(((vlSelfRef.__Vm_traceActivity[3U] 
                      | vlSelfRef.__Vm_traceActivity[21U])))) {
        bufp->chgBit(oldp+741,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__clear_resumeack));
        bufp->chgBit(oldp+742,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__sbaddress_write_valid));
        bufp->chgBit(oldp+743,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__sbdata_read_valid));
        bufp->chgBit(oldp+744,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__sbdata_write_valid));
        bufp->chgSData(oldp+745,((vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__dmstatus 
                                  >> 0x00000017U)),9);
        bufp->chgBit(oldp+746,((1U & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__dmstatus 
                                      >> 0x00000016U))));
        bufp->chgCData(oldp+747,((3U & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__dmstatus 
                                        >> 0x00000014U))),2);
        bufp->chgBit(oldp+748,((1U & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__dmstatus 
                                      >> 0x00000013U))));
        bufp->chgBit(oldp+749,((1U & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__dmstatus 
                                      >> 0x00000012U))));
        bufp->chgBit(oldp+750,((1U & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__dmstatus 
                                      >> 0x00000011U))));
        bufp->chgBit(oldp+751,((1U & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__dmstatus 
                                      >> 0x00000010U))));
        bufp->chgBit(oldp+752,((1U & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__dmstatus 
                                      >> 0x0000000fU))));
        bufp->chgBit(oldp+753,((1U & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__dmstatus 
                                      >> 0x0000000eU))));
        bufp->chgBit(oldp+754,((1U & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__dmstatus 
                                      >> 0x0000000dU))));
        bufp->chgBit(oldp+755,((1U & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__dmstatus 
                                      >> 0x0000000cU))));
        bufp->chgBit(oldp+756,((1U & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__dmstatus 
                                      >> 0x0000000bU))));
        bufp->chgBit(oldp+757,((1U & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__dmstatus 
                                      >> 0x0000000aU))));
        bufp->chgBit(oldp+758,((1U & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__dmstatus 
                                      >> 9U))));
        bufp->chgBit(oldp+759,((1U & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__dmstatus 
                                      >> 8U))));
        bufp->chgBit(oldp+760,((1U & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__dmstatus 
                                      >> 7U))));
        bufp->chgBit(oldp+761,((1U & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__dmstatus 
                                      >> 6U))));
        bufp->chgBit(oldp+762,((1U & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__dmstatus 
                                      >> 5U))));
        bufp->chgBit(oldp+763,((1U & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__dmstatus 
                                      >> 4U))));
        bufp->chgCData(oldp+764,((0x0000000fU & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__dmstatus)),4);
        bufp->chgBit(oldp+765,((vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__dmcontrol_d 
                                >> 0x0000001fU)));
        bufp->chgBit(oldp+766,((1U & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__dmcontrol_d 
                                      >> 0x0000001eU))));
        bufp->chgBit(oldp+767,((1U & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__dmcontrol_d 
                                      >> 0x0000001dU))));
        bufp->chgBit(oldp+768,((1U & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__dmcontrol_d 
                                      >> 0x0000001cU))));
        bufp->chgBit(oldp+769,((1U & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__dmcontrol_d 
                                      >> 0x0000001bU))));
        bufp->chgBit(oldp+770,((1U & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__dmcontrol_d 
                                      >> 0x0000001aU))));
        bufp->chgSData(oldp+771,((0x000003ffU & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__dmcontrol_d 
                                                 >> 0x00000010U))),10);
        bufp->chgSData(oldp+772,((0x000003ffU & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__dmcontrol_d 
                                                 >> 6U))),10);
        bufp->chgCData(oldp+773,((3U & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__dmcontrol_d 
                                        >> 4U))),2);
        bufp->chgBit(oldp+774,((1U & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__dmcontrol_d 
                                      >> 3U))));
        bufp->chgBit(oldp+775,((1U & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__dmcontrol_d 
                                      >> 2U))));
        bufp->chgBit(oldp+776,((1U & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__dmcontrol_d 
                                      >> 1U))));
        bufp->chgBit(oldp+777,((1U & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__dmcontrol_d)));
        bufp->chgCData(oldp+778,((vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__abstractcs 
                                  >> 0x0000001dU)),3);
        bufp->chgCData(oldp+779,((0x0000001fU & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__abstractcs 
                                                 >> 0x00000018U))),5);
        bufp->chgSData(oldp+780,((0x000007ffU & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__abstractcs 
                                                 >> 0x0000000dU))),11);
        bufp->chgBit(oldp+781,((1U & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__abstractcs 
                                      >> 0x0000000cU))));
        bufp->chgBit(oldp+782,((1U & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__abstractcs 
                                      >> 0x0000000bU))));
        bufp->chgCData(oldp+783,((7U & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__abstractcs 
                                        >> 8U))),3);
        bufp->chgCData(oldp+784,((0x0000000fU & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__abstractcs 
                                                 >> 4U))),4);
        bufp->chgCData(oldp+785,((0x0000000fU & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__abstractcs)),4);
        bufp->chgCData(oldp+786,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__cmderr_d),3);
        bufp->chgCData(oldp+787,((vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__command_d 
                                  >> 0x00000018U)),8);
        bufp->chgIData(oldp+788,((0x00ffffffU & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__command_d)),24);
        bufp->chgBit(oldp+789,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__cmd_valid_d));
        bufp->chgSData(oldp+790,((vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__abstractauto_d 
                                  >> 0x00000010U)),16);
        bufp->chgCData(oldp+791,((0x0000000fU & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__abstractauto_d 
                                                 >> 0x0000000cU))),4);
        bufp->chgSData(oldp+792,((0x00000fffU & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__abstractauto_d)),12);
        bufp->chgCData(oldp+793,((vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__sbcs_d 
                                  >> 0x0000001dU)),3);
        bufp->chgCData(oldp+794,((0x0000003fU & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__sbcs_d 
                                                 >> 0x00000017U))),6);
        bufp->chgBit(oldp+795,((1U & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__sbcs_d 
                                      >> 0x00000016U))));
        bufp->chgBit(oldp+796,((1U & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__sbcs_d 
                                      >> 0x00000015U))));
        bufp->chgBit(oldp+797,((1U & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__sbcs_d 
                                      >> 0x00000014U))));
        bufp->chgCData(oldp+798,((7U & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__sbcs_d 
                                        >> 0x00000011U))),3);
        bufp->chgBit(oldp+799,((1U & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__sbcs_d 
                                      >> 0x00000010U))));
        bufp->chgBit(oldp+800,((1U & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__sbcs_d 
                                      >> 0x0000000fU))));
        bufp->chgCData(oldp+801,((7U & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__sbcs_d 
                                        >> 0x0000000cU))),3);
        bufp->chgCData(oldp+802,((0x0000007fU & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__sbcs_d 
                                                 >> 5U))),7);
        bufp->chgBit(oldp+803,((1U & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__sbcs_d 
                                      >> 4U))));
        bufp->chgBit(oldp+804,((1U & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__sbcs_d 
                                      >> 3U))));
        bufp->chgBit(oldp+805,((1U & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__sbcs_d 
                                      >> 2U))));
        bufp->chgBit(oldp+806,((1U & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__sbcs_d 
                                      >> 1U))));
        bufp->chgBit(oldp+807,((1U & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__sbcs_d)));
        bufp->chgQData(oldp+808,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__sbaddr_d),64);
        bufp->chgQData(oldp+810,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__sbdata_d),64);
        bufp->chgBit(oldp+812,((1U & (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__havereset_d_aligned))));
        bufp->chgIData(oldp+813,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__progbuf_d[0U]),32);
        bufp->chgIData(oldp+814,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__progbuf_d[1U]),32);
        bufp->chgIData(oldp+815,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__progbuf_d[2U]),32);
        bufp->chgIData(oldp+816,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__progbuf_d[3U]),32);
        bufp->chgIData(oldp+817,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__progbuf_d[4U]),32);
        bufp->chgIData(oldp+818,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__progbuf_d[5U]),32);
        bufp->chgIData(oldp+819,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__progbuf_d[6U]),32);
        bufp->chgIData(oldp+820,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__progbuf_d[7U]),32);
        bufp->chgIData(oldp+821,((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__data_d)),32);
        bufp->chgIData(oldp+822,((IData)((vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__data_d 
                                          >> 0x00000020U))),32);
        bufp->chgIData(oldp+823,((IData)((vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__resp_queue_inp 
                                          >> 2U))),32);
        bufp->chgCData(oldp+824,((3U & (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__resp_queue_inp))),2);
        bufp->chgCData(oldp+825,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__havereset_d_aligned),2);
        bufp->chgCData(oldp+826,((vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__sbcs 
                                  >> 0x0000001dU)),3);
        bufp->chgCData(oldp+827,((0x0000003fU & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__sbcs 
                                                 >> 0x00000017U))),6);
        bufp->chgBit(oldp+828,((1U & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__sbcs 
                                      >> 0x00000016U))));
        bufp->chgBit(oldp+829,((1U & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__sbcs 
                                      >> 0x00000015U))));
        bufp->chgBit(oldp+830,((1U & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__sbcs 
                                      >> 0x00000014U))));
        bufp->chgCData(oldp+831,((7U & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__sbcs 
                                        >> 0x00000011U))),3);
        bufp->chgBit(oldp+832,((1U & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__sbcs 
                                      >> 0x00000010U))));
        bufp->chgBit(oldp+833,((1U & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__sbcs 
                                      >> 0x0000000fU))));
        bufp->chgCData(oldp+834,((7U & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__sbcs 
                                        >> 0x0000000cU))),3);
        bufp->chgCData(oldp+835,((0x0000007fU & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__sbcs 
                                                 >> 5U))),7);
        bufp->chgBit(oldp+836,((1U & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__sbcs 
                                      >> 4U))));
        bufp->chgBit(oldp+837,((1U & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__sbcs 
                                      >> 3U))));
        bufp->chgBit(oldp+838,((1U & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__sbcs 
                                      >> 2U))));
        bufp->chgBit(oldp+839,((1U & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__sbcs 
                                      >> 1U))));
        bufp->chgBit(oldp+840,((1U & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__sbcs)));
        bufp->chgCData(oldp+841,((vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__a_abstractcs 
                                  >> 0x0000001dU)),3);
        bufp->chgCData(oldp+842,((0x0000001fU & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__a_abstractcs 
                                                 >> 0x00000018U))),5);
        bufp->chgSData(oldp+843,((0x000007ffU & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__a_abstractcs 
                                                 >> 0x0000000dU))),11);
        bufp->chgBit(oldp+844,((1U & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__a_abstractcs 
                                      >> 0x0000000cU))));
        bufp->chgBit(oldp+845,((1U & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__a_abstractcs 
                                      >> 0x0000000bU))));
        bufp->chgCData(oldp+846,((7U & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__a_abstractcs 
                                        >> 8U))),3);
        bufp->chgCData(oldp+847,((0x0000000fU & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__a_abstractcs 
                                                 >> 4U))),4);
        bufp->chgCData(oldp+848,((0x0000000fU & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__a_abstractcs)),4);
        bufp->chgQData(oldp+849,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__resp_queue_inp),34);
        bufp->chgCData(oldp+851,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_sba__DOT__state_d),3);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[4U]))) {
        bufp->chgBit(oldp+852,(vlSelfRef.top_verilator__DOT__u_uartdpi__DOT__seen_reset));
        bufp->chgBit(oldp+853,(vlSelfRef.top_verilator__DOT__u_uartdpi__DOT__rxactive));
        bufp->chgIData(oldp+854,(vlSelfRef.top_verilator__DOT__u_uartdpi__DOT__rxcount),32);
        bufp->chgIData(oldp+855,(vlSelfRef.top_verilator__DOT__u_uartdpi__DOT__rxcyccount),32);
        bufp->chgCData(oldp+856,(vlSelfRef.top_verilator__DOT__u_uartdpi__DOT__rxsymbol),8);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[5U]))) {
        bufp->chgBit(oldp+857,(vlSelfRef.top_verilator__DOT__uart_sys_tx));
        bufp->chgSData(oldp+858,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gp_o),16);
        bufp->chgSData(oldp+859,(((((((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_pwm__DOT____Vcellout__gen_pwm__BRA__11__KET____DOT__u_pwm__modulated_o) 
                                      << 5U) | (((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_pwm__DOT____Vcellout__gen_pwm__BRA__10__KET____DOT__u_pwm__modulated_o) 
                                                 << 4U) 
                                                | ((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_pwm__DOT____Vcellout__gen_pwm__BRA__9__KET____DOT__u_pwm__modulated_o) 
                                                   << 3U))) 
                                    | (((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_pwm__DOT____Vcellout__gen_pwm__BRA__8__KET____DOT__u_pwm__modulated_o) 
                                        << 2U) | (((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_pwm__DOT____Vcellout__gen_pwm__BRA__7__KET____DOT__u_pwm__modulated_o) 
                                                   << 1U) 
                                                  | (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_pwm__DOT____Vcellout__gen_pwm__BRA__6__KET____DOT__u_pwm__modulated_o)))) 
                                   << 6U) | ((((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_pwm__DOT____Vcellout__gen_pwm__BRA__5__KET____DOT__u_pwm__modulated_o) 
                                               << 5U) 
                                              | (((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_pwm__DOT____Vcellout__gen_pwm__BRA__4__KET____DOT__u_pwm__modulated_o) 
                                                  << 4U) 
                                                 | ((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_pwm__DOT____Vcellout__gen_pwm__BRA__3__KET____DOT__u_pwm__modulated_o) 
                                                    << 3U))) 
                                             | (((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_pwm__DOT____Vcellout__gen_pwm__BRA__2__KET____DOT__u_pwm__modulated_o) 
                                                 << 2U) 
                                                | (((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_pwm__DOT____Vcellout__gen_pwm__BRA__1__KET____DOT__u_pwm__modulated_o) 
                                                    << 1U) 
                                                   | (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_pwm__DOT____Vcellout__gen_pwm__BRA__0__KET____DOT__u_pwm__modulated_o)))))),12);
        bufp->chgBit(oldp+860,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__spi_tx_o));
        bufp->chgBit(oldp+861,(((2U == (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_spi_host__DOT__state_q)) 
                                & (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_spi_host__DOT__sck))));
        bufp->chgBit(oldp+862,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_timer__DOT__interrupt_q));
        bufp->chgBit(oldp+863,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__host_rvalid[0]));
        bufp->chgBit(oldp+864,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__host_rvalid[1]));
        bufp->chgBit(oldp+865,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__device_rvalid[0]));
        bufp->chgBit(oldp+866,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__device_rvalid[1]));
        bufp->chgBit(oldp+867,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__device_rvalid[2]));
        bufp->chgBit(oldp+868,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__device_rvalid[3]));
        bufp->chgBit(oldp+869,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__device_rvalid[4]));
        bufp->chgBit(oldp+870,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__device_rvalid[5]));
        bufp->chgBit(oldp+871,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__device_rvalid[6]));
        bufp->chgBit(oldp+872,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__device_rvalid[7]));
        bufp->chgBit(oldp+873,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__core_instr_sel_dbg));
        bufp->chgBit(oldp+874,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__dbg_device_rvalid));
        bufp->chgBit(oldp+875,((1U & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__dmcontrol_q 
                                      >> 1U))));
        bufp->chgBit(oldp+876,((1U & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__dmcontrol_q)));
        bufp->chgBit(oldp+877,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_sba__DOT__req));
        bufp->chgIData(oldp+878,((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__sbaddr_q)),32);
        bufp->chgBit(oldp+879,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_sba__DOT__we));
        bufp->chgIData(oldp+880,(VL_SHIFTL_III(32,32,32, (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__sbdata_q), 
                                               VL_SHIFTL_III(32,32,32, (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_sba__DOT__be_idx_masked), 3U))),32);
        bufp->chgCData(oldp+881,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_sba__DOT__be),4);
        bufp->chgBit(oldp+882,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__host_rvalid[1U]));
        bufp->chgBit(oldp+883,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__halted_q));
        bufp->chgBit(oldp+884,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__resuming_q));
        bufp->chgBit(oldp+885,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__cmd_valid_q));
        bufp->chgCData(oldp+886,((vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__command_q 
                                  >> 0x00000018U)),8);
        bufp->chgIData(oldp+887,((0x00ffffffU & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__command_q)),24);
        bufp->chgBit(oldp+888,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__cmdbusy));
        bufp->chgIData(oldp+889,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__progbuf_q[0U]),32);
        bufp->chgIData(oldp+890,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__progbuf_q[1U]),32);
        bufp->chgIData(oldp+891,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__progbuf_q[2U]),32);
        bufp->chgIData(oldp+892,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__progbuf_q[3U]),32);
        bufp->chgIData(oldp+893,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__progbuf_q[4U]),32);
        bufp->chgIData(oldp+894,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__progbuf_q[5U]),32);
        bufp->chgIData(oldp+895,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__progbuf_q[6U]),32);
        bufp->chgIData(oldp+896,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__progbuf_q[7U]),32);
        bufp->chgIData(oldp+897,((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__data_q)),32);
        bufp->chgIData(oldp+898,((IData)((vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__data_q 
                                          >> 0x00000020U))),32);
        bufp->chgIData(oldp+899,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__hartsel_o),20);
        bufp->chgIData(oldp+900,(((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__sbaddr_q) 
                                  + ((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_sba__DOT__addr_incr_en)
                                      ? ((IData)(1U) 
                                         << (7U & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__sbcs_q 
                                                   >> 0x00000011U)))
                                      : 0U))),32);
        bufp->chgBit(oldp+901,((1U & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__sbcs_q 
                                      >> 0x00000014U))));
        bufp->chgBit(oldp+902,((1U & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__sbcs_q 
                                      >> 0x00000010U))));
        bufp->chgCData(oldp+903,((7U & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__sbcs_q 
                                        >> 0x00000011U))),3);
        bufp->chgBit(oldp+904,((1U & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__sbcs_q 
                                      >> 0x0000000fU))));
        bufp->chgIData(oldp+905,((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__sbdata_q)),32);
        bufp->chgBit(oldp+906,((0U != (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_sba__DOT__state_q))));
        bufp->chgBit(oldp+907,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__sberror_valid));
        bufp->chgCData(oldp+908,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__sberror),3);
        bufp->chgIData(oldp+909,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__haltsum0),32);
        bufp->chgIData(oldp+910,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__haltsum1),32);
        bufp->chgIData(oldp+911,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__haltsum2),32);
        bufp->chgIData(oldp+912,((0U != vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__halted_reshaped2)),32);
        bufp->chgIData(oldp+913,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__halted),32);
        bufp->chgIData(oldp+914,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__halted_reshaped0),32);
        bufp->chgIData(oldp+915,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__halted_reshaped1),32);
        bufp->chgIData(oldp+916,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__halted_reshaped2),32);
        bufp->chgIData(oldp+917,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__halted_flat1),32);
        bufp->chgIData(oldp+918,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__halted_flat2),32);
        bufp->chgSData(oldp+919,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__hartsel_idx0),15);
        bufp->chgSData(oldp+920,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__hartsel_idx1),10);
        bufp->chgCData(oldp+921,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__hartsel_idx2),5);
        bufp->chgBit(oldp+922,((vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__dmcontrol_q 
                                >> 0x0000001fU)));
        bufp->chgBit(oldp+923,((1U & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__dmcontrol_q 
                                      >> 0x0000001eU))));
        bufp->chgBit(oldp+924,((1U & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__dmcontrol_q 
                                      >> 0x0000001dU))));
        bufp->chgBit(oldp+925,((1U & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__dmcontrol_q 
                                      >> 0x0000001cU))));
        bufp->chgBit(oldp+926,((1U & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__dmcontrol_q 
                                      >> 0x0000001bU))));
        bufp->chgBit(oldp+927,((1U & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__dmcontrol_q 
                                      >> 0x0000001aU))));
        bufp->chgSData(oldp+928,((0x000003ffU & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__dmcontrol_q 
                                                 >> 0x00000010U))),10);
        bufp->chgSData(oldp+929,((0x000003ffU & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__dmcontrol_q 
                                                 >> 6U))),10);
        bufp->chgCData(oldp+930,((3U & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__dmcontrol_q 
                                        >> 4U))),2);
        bufp->chgBit(oldp+931,((1U & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__dmcontrol_q 
                                      >> 3U))));
        bufp->chgBit(oldp+932,((1U & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__dmcontrol_q 
                                      >> 2U))));
        bufp->chgCData(oldp+933,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__cmderr_q),3);
        bufp->chgSData(oldp+934,((vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__abstractauto_q 
                                  >> 0x00000010U)),16);
        bufp->chgCData(oldp+935,((0x0000000fU & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__abstractauto_q 
                                                 >> 0x0000000cU))),4);
        bufp->chgSData(oldp+936,((0x00000fffU & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__abstractauto_q)),12);
        bufp->chgCData(oldp+937,((vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__sbcs_q 
                                  >> 0x0000001dU)),3);
        bufp->chgCData(oldp+938,((0x0000003fU & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__sbcs_q 
                                                 >> 0x00000017U))),6);
        bufp->chgBit(oldp+939,((1U & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__sbcs_q 
                                      >> 0x00000016U))));
        bufp->chgBit(oldp+940,((1U & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__sbcs_q 
                                      >> 0x00000015U))));
        bufp->chgCData(oldp+941,((7U & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__sbcs_q 
                                        >> 0x00000011U))),3);
        bufp->chgCData(oldp+942,((7U & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__sbcs_q 
                                        >> 0x0000000cU))),3);
        bufp->chgCData(oldp+943,((0x0000007fU & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__sbcs_q 
                                                 >> 5U))),7);
        bufp->chgBit(oldp+944,((1U & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__sbcs_q 
                                      >> 4U))));
        bufp->chgBit(oldp+945,((1U & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__sbcs_q 
                                      >> 3U))));
        bufp->chgBit(oldp+946,((1U & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__sbcs_q 
                                      >> 2U))));
        bufp->chgBit(oldp+947,((1U & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__sbcs_q 
                                      >> 1U))));
        bufp->chgBit(oldp+948,((1U & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__sbcs_q)));
        bufp->chgQData(oldp+949,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__sbaddr_q),64);
        bufp->chgQData(oldp+951,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__sbdata_q),64);
        bufp->chgBit(oldp+953,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__havereset_q));
        bufp->chgCData(oldp+954,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__havereset_q),2);
        bufp->chgCData(oldp+955,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__resuming_q),2);
        bufp->chgCData(oldp+956,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__halted_q),2);
        bufp->chgQData(oldp+957,((((QData)((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__progbuf_q[1U])) 
                                   << 0x00000020U) 
                                  | (QData)((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__progbuf_q[0U])))),64);
        bufp->chgQData(oldp+959,((((QData)((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__progbuf_q[3U])) 
                                   << 0x00000020U) 
                                  | (QData)((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__progbuf_q[2U])))),64);
        bufp->chgQData(oldp+961,((((QData)((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__progbuf_q[5U])) 
                                   << 0x00000020U) 
                                  | (QData)((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__progbuf_q[4U])))),64);
        bufp->chgQData(oldp+963,((((QData)((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__progbuf_q[7U])) 
                                   << 0x00000020U) 
                                  | (QData)((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__progbuf_q[6U])))),64);
        bufp->chgQData(oldp+965,((((QData)((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__abstract_cmd[1U])) 
                                   << 0x00000020U) 
                                  | (QData)((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__abstract_cmd[0U])))),64);
        bufp->chgQData(oldp+967,((((QData)((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__abstract_cmd[3U])) 
                                   << 0x00000020U) 
                                  | (QData)((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__abstract_cmd[2U])))),64);
        bufp->chgQData(oldp+969,((((QData)((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__abstract_cmd[5U])) 
                                   << 0x00000020U) 
                                  | (QData)((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__abstract_cmd[4U])))),64);
        bufp->chgQData(oldp+971,((((QData)((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__abstract_cmd[7U])) 
                                   << 0x00000020U) 
                                  | (QData)((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__abstract_cmd[6U])))),64);
        bufp->chgQData(oldp+973,((((QData)((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__abstract_cmd[9U])) 
                                   << 0x00000020U) 
                                  | (QData)((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__abstract_cmd[8U])))),64);
        bufp->chgQData(oldp+975,((((QData)((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__abstract_cmd[11U])) 
                                   << 0x00000020U) 
                                  | (QData)((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__abstract_cmd[10U])))),64);
        bufp->chgQData(oldp+977,((((QData)((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__abstract_cmd[13U])) 
                                   << 0x00000020U) 
                                  | (QData)((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__abstract_cmd[12U])))),64);
        bufp->chgQData(oldp+979,((((QData)((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__abstract_cmd[15U])) 
                                   << 0x00000020U) 
                                  | (QData)((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__abstract_cmd[14U])))),64);
        bufp->chgBit(oldp+981,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__resume));
        bufp->chgBit(oldp+982,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__go));
        bufp->chgBit(oldp+983,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__unsupported_command));
        bufp->chgQData(oldp+984,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__rdata_q),64);
        bufp->chgBit(oldp+986,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__word_enable32_q));
        bufp->chgBit(oldp+987,((1U & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__dmcontrol_q 
                                      >> 0x00000010U))));
        bufp->chgBit(oldp+988,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__fwd_rom_q));
        bufp->chgBit(oldp+989,((1U & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__command_q 
                                      >> 0x00000017U))));
        bufp->chgCData(oldp+990,((7U & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__command_q 
                                        >> 0x00000014U))),3);
        bufp->chgBit(oldp+991,((1U & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__command_q 
                                      >> 0x00000013U))));
        bufp->chgBit(oldp+992,((1U & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__command_q 
                                      >> 0x00000012U))));
        bufp->chgBit(oldp+993,((1U & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__command_q 
                                      >> 0x00000011U))));
        bufp->chgBit(oldp+994,((1U & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__command_q 
                                      >> 0x00000010U))));
        bufp->chgSData(oldp+995,((0x0000ffffU & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__command_q)),16);
        bufp->chgCData(oldp+996,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__state_q),2);
        bufp->chgCData(oldp+997,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_sba__DOT__state_q),3);
        bufp->chgCData(oldp+998,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_sba__DOT__be_mask),4);
        bufp->chgCData(oldp+999,((3U & (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__sbaddr_q))),2);
        bufp->chgIData(oldp+1000,(((IData)(0xffffffffU) 
                                   << (7U & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__sbcs_q 
                                             >> 0x00000011U)))),32);
        bufp->chgBit(oldp+1001,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_sba__DOT__addr_incr_en));
        bufp->chgIData(oldp+1002,(((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_sba__DOT__addr_incr_en)
                                    ? ((IData)(1U) 
                                       << (7U & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__sbcs_q 
                                                 >> 0x00000011U)))
                                    : 0U)),32);
        bufp->chgCData(oldp+1003,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_sba__DOT__be_idx_masked),2);
        bufp->chgBit(oldp+1004,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_bus__DOT__host_rvalid_o[0]));
        bufp->chgBit(oldp+1005,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_bus__DOT__host_rvalid_o[1]));
        bufp->chgBit(oldp+1006,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_bus__DOT__device_rvalid_i[0]));
        bufp->chgBit(oldp+1007,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_bus__DOT__device_rvalid_i[1]));
        bufp->chgBit(oldp+1008,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_bus__DOT__device_rvalid_i[2]));
        bufp->chgBit(oldp+1009,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_bus__DOT__device_rvalid_i[3]));
        bufp->chgBit(oldp+1010,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_bus__DOT__device_rvalid_i[4]));
        bufp->chgBit(oldp+1011,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_bus__DOT__device_rvalid_i[5]));
        bufp->chgBit(oldp+1012,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_bus__DOT__device_rvalid_i[6]));
        bufp->chgBit(oldp+1013,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_bus__DOT__device_rvalid_i[7]));
        bufp->chgBit(oldp+1014,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_bus__DOT__decode_err_resp));
        bufp->chgBit(oldp+1015,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_bus__DOT__host_sel_resp));
        bufp->chgCData(oldp+1016,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_bus__DOT__device_sel_resp),3);
        bufp->chgBit(oldp+1017,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT____Vcellout__u_gpio__device_rvalid_o));
        bufp->chgIData(oldp+1018,(((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_gpio__DOT__gp_i_dbnc_rd_en_q)
                                    ? ((((((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_gpio__DOT__gen_debounce__BRA__7__KET____DOT__dbnc__DOT__btn_q) 
                                           << 3U) | 
                                          ((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_gpio__DOT__gen_debounce__BRA__6__KET____DOT__dbnc__DOT__btn_q) 
                                           << 2U)) 
                                         | (((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_gpio__DOT__gen_debounce__BRA__5__KET____DOT__dbnc__DOT__btn_q) 
                                             << 1U) 
                                            | (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_gpio__DOT__gen_debounce__BRA__4__KET____DOT__dbnc__DOT__btn_q))) 
                                        << 4U) | ((
                                                   ((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_gpio__DOT__gen_debounce__BRA__3__KET____DOT__dbnc__DOT__btn_q) 
                                                    << 3U) 
                                                   | ((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_gpio__DOT__gen_debounce__BRA__2__KET____DOT__dbnc__DOT__btn_q) 
                                                      << 2U)) 
                                                  | (((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_gpio__DOT__gen_debounce__BRA__1__KET____DOT__dbnc__DOT__btn_q) 
                                                      << 1U) 
                                                     | (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_gpio__DOT__gen_debounce__BRA__0__KET____DOT__dbnc__DOT__btn_q))))
                                    : ((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_gpio__DOT__gp_i_rd_en_q)
                                        ? (0x000000ffU 
                                           & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_gpio__DOT__gp_i_q 
                                              >> 0x00000010U))
                                        : (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gp_o)))),32);
        bufp->chgCData(oldp+1019,((0x000000ffU & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_gpio__DOT__gp_i_q)),8);
        bufp->chgCData(oldp+1020,((0x000000ffU & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_gpio__DOT__gp_i_q 
                                                  >> 8U))),8);
        bufp->chgCData(oldp+1021,((0x000000ffU & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_gpio__DOT__gp_i_q 
                                                  >> 0x00000010U))),8);
        bufp->chgCData(oldp+1022,(((((((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_gpio__DOT__gen_debounce__BRA__7__KET____DOT__dbnc__DOT__btn_q) 
                                       << 3U) | ((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_gpio__DOT__gen_debounce__BRA__6__KET____DOT__dbnc__DOT__btn_q) 
                                                 << 2U)) 
                                     | (((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_gpio__DOT__gen_debounce__BRA__5__KET____DOT__dbnc__DOT__btn_q) 
                                         << 1U) | (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_gpio__DOT__gen_debounce__BRA__4__KET____DOT__dbnc__DOT__btn_q))) 
                                    << 4U) | ((((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_gpio__DOT__gen_debounce__BRA__3__KET____DOT__dbnc__DOT__btn_q) 
                                                << 3U) 
                                               | ((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_gpio__DOT__gen_debounce__BRA__2__KET____DOT__dbnc__DOT__btn_q) 
                                                  << 2U)) 
                                              | (((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_gpio__DOT__gen_debounce__BRA__1__KET____DOT__dbnc__DOT__btn_q) 
                                                  << 1U) 
                                                 | (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_gpio__DOT__gen_debounce__BRA__0__KET____DOT__dbnc__DOT__btn_q))))),8);
        bufp->chgBit(oldp+1023,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_gpio__DOT__gp_i_rd_en_q));
        bufp->chgBit(oldp+1024,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_gpio__DOT__gp_i_dbnc_rd_en_q));
        bufp->chgBit(oldp+1025,((1U & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_gpio__DOT__gp_i_q 
                                       >> 0x00000010U))));
        bufp->chgBit(oldp+1026,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_gpio__DOT__gen_debounce__BRA__0__KET____DOT__dbnc__DOT__btn_q));
        bufp->chgSData(oldp+1027,(((((1U & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_gpio__DOT__gp_i_q 
                                            >> 0x00000010U)) 
                                     == (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_gpio__DOT__gen_debounce__BRA__0__KET____DOT__dbnc__DOT__btn_q)) 
                                    | (0x01f4U <= (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_gpio__DOT__gen_debounce__BRA__0__KET____DOT__dbnc__DOT__cnt_q)))
                                    ? 0U : (0x000001ffU 
                                            & ((IData)(1U) 
                                               + (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_gpio__DOT__gen_debounce__BRA__0__KET____DOT__dbnc__DOT__cnt_q))))),9);
        bufp->chgSData(oldp+1028,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_gpio__DOT__gen_debounce__BRA__0__KET____DOT__dbnc__DOT__cnt_q),9);
        bufp->chgBit(oldp+1029,((1U & ((0x01f4U <= (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_gpio__DOT__gen_debounce__BRA__0__KET____DOT__dbnc__DOT__cnt_q))
                                        ? (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_gpio__DOT__gp_i_q 
                                           >> 0x00000010U)
                                        : (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_gpio__DOT__gen_debounce__BRA__0__KET____DOT__dbnc__DOT__btn_q)))));
        bufp->chgBit(oldp+1030,((1U & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_gpio__DOT__gp_i_q 
                                       >> 0x00000011U))));
        bufp->chgBit(oldp+1031,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_gpio__DOT__gen_debounce__BRA__1__KET____DOT__dbnc__DOT__btn_q));
        bufp->chgSData(oldp+1032,(((((1U & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_gpio__DOT__gp_i_q 
                                            >> 0x00000011U)) 
                                     == (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_gpio__DOT__gen_debounce__BRA__1__KET____DOT__dbnc__DOT__btn_q)) 
                                    | (0x01f4U <= (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_gpio__DOT__gen_debounce__BRA__1__KET____DOT__dbnc__DOT__cnt_q)))
                                    ? 0U : (0x000001ffU 
                                            & ((IData)(1U) 
                                               + (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_gpio__DOT__gen_debounce__BRA__1__KET____DOT__dbnc__DOT__cnt_q))))),9);
        bufp->chgSData(oldp+1033,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_gpio__DOT__gen_debounce__BRA__1__KET____DOT__dbnc__DOT__cnt_q),9);
        bufp->chgBit(oldp+1034,((1U & ((0x01f4U <= (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_gpio__DOT__gen_debounce__BRA__1__KET____DOT__dbnc__DOT__cnt_q))
                                        ? (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_gpio__DOT__gp_i_q 
                                           >> 0x00000011U)
                                        : (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_gpio__DOT__gen_debounce__BRA__1__KET____DOT__dbnc__DOT__btn_q)))));
        bufp->chgBit(oldp+1035,((1U & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_gpio__DOT__gp_i_q 
                                       >> 0x00000012U))));
        bufp->chgBit(oldp+1036,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_gpio__DOT__gen_debounce__BRA__2__KET____DOT__dbnc__DOT__btn_q));
        bufp->chgSData(oldp+1037,(((((1U & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_gpio__DOT__gp_i_q 
                                            >> 0x00000012U)) 
                                     == (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_gpio__DOT__gen_debounce__BRA__2__KET____DOT__dbnc__DOT__btn_q)) 
                                    | (0x01f4U <= (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_gpio__DOT__gen_debounce__BRA__2__KET____DOT__dbnc__DOT__cnt_q)))
                                    ? 0U : (0x000001ffU 
                                            & ((IData)(1U) 
                                               + (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_gpio__DOT__gen_debounce__BRA__2__KET____DOT__dbnc__DOT__cnt_q))))),9);
        bufp->chgSData(oldp+1038,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_gpio__DOT__gen_debounce__BRA__2__KET____DOT__dbnc__DOT__cnt_q),9);
        bufp->chgBit(oldp+1039,((1U & ((0x01f4U <= (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_gpio__DOT__gen_debounce__BRA__2__KET____DOT__dbnc__DOT__cnt_q))
                                        ? (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_gpio__DOT__gp_i_q 
                                           >> 0x00000012U)
                                        : (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_gpio__DOT__gen_debounce__BRA__2__KET____DOT__dbnc__DOT__btn_q)))));
        bufp->chgBit(oldp+1040,((1U & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_gpio__DOT__gp_i_q 
                                       >> 0x00000013U))));
        bufp->chgBit(oldp+1041,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_gpio__DOT__gen_debounce__BRA__3__KET____DOT__dbnc__DOT__btn_q));
        bufp->chgSData(oldp+1042,(((((1U & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_gpio__DOT__gp_i_q 
                                            >> 0x00000013U)) 
                                     == (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_gpio__DOT__gen_debounce__BRA__3__KET____DOT__dbnc__DOT__btn_q)) 
                                    | (0x01f4U <= (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_gpio__DOT__gen_debounce__BRA__3__KET____DOT__dbnc__DOT__cnt_q)))
                                    ? 0U : (0x000001ffU 
                                            & ((IData)(1U) 
                                               + (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_gpio__DOT__gen_debounce__BRA__3__KET____DOT__dbnc__DOT__cnt_q))))),9);
        bufp->chgSData(oldp+1043,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_gpio__DOT__gen_debounce__BRA__3__KET____DOT__dbnc__DOT__cnt_q),9);
        bufp->chgBit(oldp+1044,((1U & ((0x01f4U <= (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_gpio__DOT__gen_debounce__BRA__3__KET____DOT__dbnc__DOT__cnt_q))
                                        ? (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_gpio__DOT__gp_i_q 
                                           >> 0x00000013U)
                                        : (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_gpio__DOT__gen_debounce__BRA__3__KET____DOT__dbnc__DOT__btn_q)))));
        bufp->chgBit(oldp+1045,((1U & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_gpio__DOT__gp_i_q 
                                       >> 0x00000014U))));
        bufp->chgBit(oldp+1046,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_gpio__DOT__gen_debounce__BRA__4__KET____DOT__dbnc__DOT__btn_q));
        bufp->chgSData(oldp+1047,(((((1U & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_gpio__DOT__gp_i_q 
                                            >> 0x00000014U)) 
                                     == (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_gpio__DOT__gen_debounce__BRA__4__KET____DOT__dbnc__DOT__btn_q)) 
                                    | (0x01f4U <= (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_gpio__DOT__gen_debounce__BRA__4__KET____DOT__dbnc__DOT__cnt_q)))
                                    ? 0U : (0x000001ffU 
                                            & ((IData)(1U) 
                                               + (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_gpio__DOT__gen_debounce__BRA__4__KET____DOT__dbnc__DOT__cnt_q))))),9);
        bufp->chgSData(oldp+1048,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_gpio__DOT__gen_debounce__BRA__4__KET____DOT__dbnc__DOT__cnt_q),9);
        bufp->chgBit(oldp+1049,((1U & ((0x01f4U <= (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_gpio__DOT__gen_debounce__BRA__4__KET____DOT__dbnc__DOT__cnt_q))
                                        ? (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_gpio__DOT__gp_i_q 
                                           >> 0x00000014U)
                                        : (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_gpio__DOT__gen_debounce__BRA__4__KET____DOT__dbnc__DOT__btn_q)))));
        bufp->chgBit(oldp+1050,((1U & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_gpio__DOT__gp_i_q 
                                       >> 0x00000015U))));
        bufp->chgBit(oldp+1051,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_gpio__DOT__gen_debounce__BRA__5__KET____DOT__dbnc__DOT__btn_q));
        bufp->chgSData(oldp+1052,(((((1U & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_gpio__DOT__gp_i_q 
                                            >> 0x00000015U)) 
                                     == (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_gpio__DOT__gen_debounce__BRA__5__KET____DOT__dbnc__DOT__btn_q)) 
                                    | (0x01f4U <= (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_gpio__DOT__gen_debounce__BRA__5__KET____DOT__dbnc__DOT__cnt_q)))
                                    ? 0U : (0x000001ffU 
                                            & ((IData)(1U) 
                                               + (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_gpio__DOT__gen_debounce__BRA__5__KET____DOT__dbnc__DOT__cnt_q))))),9);
        bufp->chgSData(oldp+1053,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_gpio__DOT__gen_debounce__BRA__5__KET____DOT__dbnc__DOT__cnt_q),9);
        bufp->chgBit(oldp+1054,((1U & ((0x01f4U <= (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_gpio__DOT__gen_debounce__BRA__5__KET____DOT__dbnc__DOT__cnt_q))
                                        ? (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_gpio__DOT__gp_i_q 
                                           >> 0x00000015U)
                                        : (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_gpio__DOT__gen_debounce__BRA__5__KET____DOT__dbnc__DOT__btn_q)))));
        bufp->chgBit(oldp+1055,((1U & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_gpio__DOT__gp_i_q 
                                       >> 0x00000016U))));
        bufp->chgBit(oldp+1056,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_gpio__DOT__gen_debounce__BRA__6__KET____DOT__dbnc__DOT__btn_q));
        bufp->chgSData(oldp+1057,(((((1U & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_gpio__DOT__gp_i_q 
                                            >> 0x00000016U)) 
                                     == (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_gpio__DOT__gen_debounce__BRA__6__KET____DOT__dbnc__DOT__btn_q)) 
                                    | (0x01f4U <= (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_gpio__DOT__gen_debounce__BRA__6__KET____DOT__dbnc__DOT__cnt_q)))
                                    ? 0U : (0x000001ffU 
                                            & ((IData)(1U) 
                                               + (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_gpio__DOT__gen_debounce__BRA__6__KET____DOT__dbnc__DOT__cnt_q))))),9);
        bufp->chgSData(oldp+1058,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_gpio__DOT__gen_debounce__BRA__6__KET____DOT__dbnc__DOT__cnt_q),9);
        bufp->chgBit(oldp+1059,((1U & ((0x01f4U <= (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_gpio__DOT__gen_debounce__BRA__6__KET____DOT__dbnc__DOT__cnt_q))
                                        ? (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_gpio__DOT__gp_i_q 
                                           >> 0x00000016U)
                                        : (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_gpio__DOT__gen_debounce__BRA__6__KET____DOT__dbnc__DOT__btn_q)))));
        bufp->chgBit(oldp+1060,((1U & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_gpio__DOT__gp_i_q 
                                       >> 0x00000017U))));
        bufp->chgBit(oldp+1061,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_gpio__DOT__gen_debounce__BRA__7__KET____DOT__dbnc__DOT__btn_q));
        bufp->chgSData(oldp+1062,(((((1U & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_gpio__DOT__gp_i_q 
                                            >> 0x00000017U)) 
                                     == (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_gpio__DOT__gen_debounce__BRA__7__KET____DOT__dbnc__DOT__btn_q)) 
                                    | (0x01f4U <= (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_gpio__DOT__gen_debounce__BRA__7__KET____DOT__dbnc__DOT__cnt_q)))
                                    ? 0U : (0x000001ffU 
                                            & ((IData)(1U) 
                                               + (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_gpio__DOT__gen_debounce__BRA__7__KET____DOT__dbnc__DOT__cnt_q))))),9);
        bufp->chgSData(oldp+1063,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_gpio__DOT__gen_debounce__BRA__7__KET____DOT__dbnc__DOT__cnt_q),9);
        bufp->chgBit(oldp+1064,((1U & ((0x01f4U <= (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_gpio__DOT__gen_debounce__BRA__7__KET____DOT__dbnc__DOT__cnt_q))
                                        ? (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_gpio__DOT__gp_i_q 
                                           >> 0x00000017U)
                                        : (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_gpio__DOT__gen_debounce__BRA__7__KET____DOT__dbnc__DOT__btn_q)))));
        bufp->chgBit(oldp+1065,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT____Vcellout__u_pwm__device_rvalid_o));
        bufp->chgCData(oldp+1066,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_pwm__DOT__gen_pwm__BRA__0__KET____DOT__counter_q),8);
        bufp->chgCData(oldp+1067,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_pwm__DOT__gen_pwm__BRA__0__KET____DOT__pulse_width_q),8);
        bufp->chgBit(oldp+1068,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_pwm__DOT____Vcellout__gen_pwm__BRA__0__KET____DOT__u_pwm__modulated_o));
        bufp->chgCData(oldp+1069,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_pwm__DOT__gen_pwm__BRA__0__KET____DOT__u_pwm__DOT__counter),8);
        bufp->chgCData(oldp+1070,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_pwm__DOT__gen_pwm__BRA__10__KET____DOT__counter_q),8);
        bufp->chgCData(oldp+1071,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_pwm__DOT__gen_pwm__BRA__10__KET____DOT__pulse_width_q),8);
        bufp->chgBit(oldp+1072,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_pwm__DOT____Vcellout__gen_pwm__BRA__10__KET____DOT__u_pwm__modulated_o));
        bufp->chgCData(oldp+1073,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_pwm__DOT__gen_pwm__BRA__10__KET____DOT__u_pwm__DOT__counter),8);
        bufp->chgCData(oldp+1074,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_pwm__DOT__gen_pwm__BRA__11__KET____DOT__counter_q),8);
        bufp->chgCData(oldp+1075,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_pwm__DOT__gen_pwm__BRA__11__KET____DOT__pulse_width_q),8);
        bufp->chgBit(oldp+1076,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_pwm__DOT____Vcellout__gen_pwm__BRA__11__KET____DOT__u_pwm__modulated_o));
        bufp->chgCData(oldp+1077,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_pwm__DOT__gen_pwm__BRA__11__KET____DOT__u_pwm__DOT__counter),8);
        bufp->chgCData(oldp+1078,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_pwm__DOT__gen_pwm__BRA__1__KET____DOT__counter_q),8);
        bufp->chgCData(oldp+1079,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_pwm__DOT__gen_pwm__BRA__1__KET____DOT__pulse_width_q),8);
        bufp->chgBit(oldp+1080,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_pwm__DOT____Vcellout__gen_pwm__BRA__1__KET____DOT__u_pwm__modulated_o));
        bufp->chgCData(oldp+1081,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_pwm__DOT__gen_pwm__BRA__1__KET____DOT__u_pwm__DOT__counter),8);
        bufp->chgCData(oldp+1082,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_pwm__DOT__gen_pwm__BRA__2__KET____DOT__counter_q),8);
        bufp->chgCData(oldp+1083,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_pwm__DOT__gen_pwm__BRA__2__KET____DOT__pulse_width_q),8);
        bufp->chgBit(oldp+1084,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_pwm__DOT____Vcellout__gen_pwm__BRA__2__KET____DOT__u_pwm__modulated_o));
        bufp->chgCData(oldp+1085,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_pwm__DOT__gen_pwm__BRA__2__KET____DOT__u_pwm__DOT__counter),8);
        bufp->chgCData(oldp+1086,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_pwm__DOT__gen_pwm__BRA__3__KET____DOT__counter_q),8);
        bufp->chgCData(oldp+1087,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_pwm__DOT__gen_pwm__BRA__3__KET____DOT__pulse_width_q),8);
        bufp->chgBit(oldp+1088,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_pwm__DOT____Vcellout__gen_pwm__BRA__3__KET____DOT__u_pwm__modulated_o));
        bufp->chgCData(oldp+1089,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_pwm__DOT__gen_pwm__BRA__3__KET____DOT__u_pwm__DOT__counter),8);
        bufp->chgCData(oldp+1090,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_pwm__DOT__gen_pwm__BRA__4__KET____DOT__counter_q),8);
        bufp->chgCData(oldp+1091,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_pwm__DOT__gen_pwm__BRA__4__KET____DOT__pulse_width_q),8);
        bufp->chgBit(oldp+1092,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_pwm__DOT____Vcellout__gen_pwm__BRA__4__KET____DOT__u_pwm__modulated_o));
        bufp->chgCData(oldp+1093,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_pwm__DOT__gen_pwm__BRA__4__KET____DOT__u_pwm__DOT__counter),8);
        bufp->chgCData(oldp+1094,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_pwm__DOT__gen_pwm__BRA__5__KET____DOT__counter_q),8);
        bufp->chgCData(oldp+1095,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_pwm__DOT__gen_pwm__BRA__5__KET____DOT__pulse_width_q),8);
        bufp->chgBit(oldp+1096,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_pwm__DOT____Vcellout__gen_pwm__BRA__5__KET____DOT__u_pwm__modulated_o));
        bufp->chgCData(oldp+1097,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_pwm__DOT__gen_pwm__BRA__5__KET____DOT__u_pwm__DOT__counter),8);
        bufp->chgCData(oldp+1098,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_pwm__DOT__gen_pwm__BRA__6__KET____DOT__counter_q),8);
        bufp->chgCData(oldp+1099,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_pwm__DOT__gen_pwm__BRA__6__KET____DOT__pulse_width_q),8);
        bufp->chgBit(oldp+1100,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_pwm__DOT____Vcellout__gen_pwm__BRA__6__KET____DOT__u_pwm__modulated_o));
        bufp->chgCData(oldp+1101,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_pwm__DOT__gen_pwm__BRA__6__KET____DOT__u_pwm__DOT__counter),8);
        bufp->chgCData(oldp+1102,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_pwm__DOT__gen_pwm__BRA__7__KET____DOT__counter_q),8);
        bufp->chgCData(oldp+1103,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_pwm__DOT__gen_pwm__BRA__7__KET____DOT__pulse_width_q),8);
        bufp->chgBit(oldp+1104,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_pwm__DOT____Vcellout__gen_pwm__BRA__7__KET____DOT__u_pwm__modulated_o));
        bufp->chgCData(oldp+1105,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_pwm__DOT__gen_pwm__BRA__7__KET____DOT__u_pwm__DOT__counter),8);
        bufp->chgCData(oldp+1106,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_pwm__DOT__gen_pwm__BRA__8__KET____DOT__counter_q),8);
        bufp->chgCData(oldp+1107,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_pwm__DOT__gen_pwm__BRA__8__KET____DOT__pulse_width_q),8);
        bufp->chgBit(oldp+1108,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_pwm__DOT____Vcellout__gen_pwm__BRA__8__KET____DOT__u_pwm__modulated_o));
        bufp->chgCData(oldp+1109,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_pwm__DOT__gen_pwm__BRA__8__KET____DOT__u_pwm__DOT__counter),8);
        bufp->chgCData(oldp+1110,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_pwm__DOT__gen_pwm__BRA__9__KET____DOT__counter_q),8);
        bufp->chgCData(oldp+1111,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_pwm__DOT__gen_pwm__BRA__9__KET____DOT__pulse_width_q),8);
        bufp->chgBit(oldp+1112,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_pwm__DOT____Vcellout__gen_pwm__BRA__9__KET____DOT__u_pwm__modulated_o));
        bufp->chgCData(oldp+1113,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_pwm__DOT__gen_pwm__BRA__9__KET____DOT__u_pwm__DOT__counter),8);
        bufp->chgBit(oldp+1114,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT____Vcellout__u_ram__a_rvalid_o));
        bufp->chgBit(oldp+1115,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_ram__DOT__b_rvalid_o));
        bufp->chgBit(oldp+1116,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT____Vcellout__u_simulator_ctrl__rvalid_o));
        bufp->chgCData(oldp+1117,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_simulator_ctrl__DOT__sim_finish),3);
        bufp->chgBit(oldp+1118,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT____Vcellout__u_spi__device_rvalid_o));
        bufp->chgCData(oldp+1119,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__byte_data_o),8);
        bufp->chgBit(oldp+1120,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__read_status_q));
        bufp->chgBit(oldp+1121,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__next_tx_byte_d));
        bufp->chgBit(oldp+1122,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__next_tx_byte_q));
        bufp->chgBit(oldp+1123,(((~ (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__next_tx_byte_q)) 
                                 & (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__next_tx_byte_d))));
        bufp->chgBit(oldp+1124,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_spi_host__DOT__count));
        bufp->chgBit(oldp+1125,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_spi_host__DOT__sck));
        bufp->chgBit(oldp+1126,((1U <= (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_spi_host__DOT__count))));
        bufp->chgBit(oldp+1127,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_spi_host__DOT__sck_pos));
        bufp->chgBit(oldp+1128,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_spi_host__DOT__sck_neg));
        bufp->chgCData(oldp+1129,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_spi_host__DOT__state_q),2);
        bufp->chgBit(oldp+1130,((2U == (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_spi_host__DOT__state_q))));
        bufp->chgCData(oldp+1131,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_spi_host__DOT__bit_counter_q),3);
        bufp->chgCData(oldp+1132,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_spi_host__DOT__bit_counter_d),3);
        bufp->chgCData(oldp+1133,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_spi_host__DOT__current_byte_q),8);
        bufp->chgCData(oldp+1134,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_spi_host__DOT__recieved_byte_d),8);
        bufp->chgCData(oldp+1135,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_spi_host__DOT__recieved_byte_q),8);
        bufp->chgCData(oldp+1136,((0x0000007fU & (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q))),7);
        bufp->chgBit(oldp+1137,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__under_rst));
        bufp->chgCData(oldp+1138,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q),8);
        bufp->chgCData(oldp+1139,((0x00000080U & ((~ 
                                                   ((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q) 
                                                    >> 7U)) 
                                                  << 7U))),8);
        bufp->chgBit(oldp+1140,((1U & ((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q) 
                                       >> 7U))));
        bufp->chgBit(oldp+1141,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_timer__DOT__rvalid_q));
        bufp->chgQData(oldp+1142,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_timer__DOT__mtime_q),64);
        bufp->chgQData(oldp+1144,((1ULL + vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_timer__DOT__mtime_q)),64);
        bufp->chgQData(oldp+1146,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_timer__DOT__mtimecmp_q),64);
        bufp->chgBit(oldp+1148,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__host_rvalid[0U]));
        bufp->chgBit(oldp+1149,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__device_rvalid_q));
        bufp->chgIData(oldp+1150,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__device_rdata_q),32);
        bufp->chgCData(oldp+1151,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__rx_state_q),2);
        bufp->chgCData(oldp+1152,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__rx_bit_counter_q),3);
        bufp->chgCData(oldp+1153,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__rx_bit_counter_d),3);
        bufp->chgCData(oldp+1154,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__rx_q),3);
        bufp->chgBit(oldp+1155,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__rx_valid));
        bufp->chgSData(oldp+1156,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__tx_baud_counter_q),9);
        bufp->chgSData(oldp+1157,(((0x01b1U == (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__tx_baud_counter_q))
                                    ? 0U : (0x000001ffU 
                                            & ((IData)(1U) 
                                               + (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__tx_baud_counter_q))))),9);
        bufp->chgBit(oldp+1158,((0x01b1U == (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__tx_baud_counter_q))));
        bufp->chgCData(oldp+1159,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__tx_state_q),2);
        bufp->chgCData(oldp+1160,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__tx_bit_counter_q),3);
        bufp->chgCData(oldp+1161,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__tx_bit_counter_d),3);
        bufp->chgCData(oldp+1162,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__tx_current_byte_q),8);
        bufp->chgBit(oldp+1163,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__tx_next_byte));
        bufp->chgBit(oldp+1164,(((0x01b1U == (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__tx_baud_counter_q)) 
                                 & (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__tx_next_byte))));
        bufp->chgCData(oldp+1165,((0x0000007fU & (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q))),7);
        bufp->chgBit(oldp+1166,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__under_rst));
        bufp->chgCData(oldp+1167,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q),8);
        bufp->chgCData(oldp+1168,((0x00000080U & ((~ 
                                                   ((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q) 
                                                    >> 7U)) 
                                                  << 7U))),8);
        bufp->chgBit(oldp+1169,((1U & ((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q) 
                                       >> 7U))));
        bufp->chgCData(oldp+1170,((0x0000007fU & (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q))),7);
        bufp->chgBit(oldp+1171,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__under_rst));
        bufp->chgCData(oldp+1172,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q),8);
        bufp->chgCData(oldp+1173,((0x00000080U & ((~ 
                                                   ((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q) 
                                                    >> 7U)) 
                                                  << 7U))),8);
        bufp->chgBit(oldp+1174,((1U & ((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q) 
                                       >> 7U))));
    }
    if (VL_UNLIKELY(((vlSelfRef.__Vm_traceActivity[5U] 
                      | vlSelfRef.__Vm_traceActivity[11U])))) {
        bufp->chgIData(oldp+1175,(((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__read_status_q)
                                    ? (((0U == ((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__full_o)
                                                 ? 0x0000007fU
                                                 : 
                                                (0x0000007fU 
                                                 & (((1U 
                                                      & ((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q) 
                                                         >> 7U)) 
                                                     == 
                                                     (1U 
                                                      & ((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q) 
                                                         >> 7U)))
                                                     ? 
                                                    ((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q) 
                                                     - (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q))
                                                     : 
                                                    (((IData)(0x7fU) 
                                                      - (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q)) 
                                                     + (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q)))))) 
                                        << 1U) | (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__full_o))
                                    : 0U)),32);
        bufp->chgBit(oldp+1176,((0U == ((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__full_o)
                                         ? 0x0000007fU
                                         : (0x0000007fU 
                                            & (((1U 
                                                 & ((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q) 
                                                    >> 7U)) 
                                                == 
                                                (1U 
                                                 & ((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q) 
                                                    >> 7U)))
                                                ? ((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q) 
                                                   - (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q))
                                                : (
                                                   ((IData)(0x7fU) 
                                                    - (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q)) 
                                                   + (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q))))))));
        bufp->chgCData(oldp+1177,(((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__full_o)
                                    ? 0x0000007fU : 
                                   (0x0000007fU & (
                                                   ((1U 
                                                     & ((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q) 
                                                        >> 7U)) 
                                                    == 
                                                    (1U 
                                                     & ((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q) 
                                                        >> 7U)))
                                                    ? 
                                                   ((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q) 
                                                    - (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q))
                                                    : 
                                                   (((IData)(0x7fU) 
                                                     - (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q)) 
                                                    + (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q)))))),7);
        bufp->chgBit(oldp+1178,((1U & ((~ (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__full_o)) 
                                       & (~ (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__under_rst))))));
        bufp->chgBit(oldp+1179,(((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__fifo_incr_rptr) 
                                 & (0x7eU == (0x0000007fU 
                                              & (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q))))));
        bufp->chgBit(oldp+1180,(((0x01b1U == (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__rx_baud_counter_q)) 
                                 & (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__rx_valid))));
        bufp->chgBit(oldp+1181,((1U & ((~ (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__full_o)) 
                                       & (~ (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__under_rst))))));
        bufp->chgCData(oldp+1182,(((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__full_o)
                                    ? 0x00000080U : 
                                   (0x000000ffU & (
                                                   ((1U 
                                                     & ((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q) 
                                                        >> 7U)) 
                                                    == 
                                                    (1U 
                                                     & ((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q) 
                                                        >> 7U)))
                                                    ? 
                                                   ((0x0000007fU 
                                                     & (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q)) 
                                                    - 
                                                    (0x0000007fU 
                                                     & (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q)))
                                                    : 
                                                   (((IData)(0x80U) 
                                                     - 
                                                     (0x0000007fU 
                                                      & (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q))) 
                                                    + 
                                                    (0x0000007fU 
                                                     & (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q))))))),8);
        bufp->chgBit(oldp+1183,((1U & ((~ (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__full_o)) 
                                       & (~ (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__under_rst))))));
        bufp->chgCData(oldp+1184,(((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__full_o)
                                    ? 0x00000080U : 
                                   (0x000000ffU & (
                                                   ((1U 
                                                     & ((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q) 
                                                        >> 7U)) 
                                                    == 
                                                    (1U 
                                                     & ((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q) 
                                                        >> 7U)))
                                                    ? 
                                                   ((0x0000007fU 
                                                     & (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q)) 
                                                    - 
                                                    (0x0000007fU 
                                                     & (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q)))
                                                    : 
                                                   (((IData)(0x80U) 
                                                     - 
                                                     (0x0000007fU 
                                                      & (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q))) 
                                                    + 
                                                    (0x0000007fU 
                                                     & (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q))))))),8);
        bufp->chgBit(oldp+1185,(((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__fifo_incr_rptr) 
                                 & (0x7fU == (0x0000007fU 
                                              & (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q))))));
    }
    if (VL_UNLIKELY(((vlSelfRef.__Vm_traceActivity[5U] 
                      | vlSelfRef.__Vm_traceActivity[15U])))) {
        bufp->chgIData(oldp+1186,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__host_addr[0]),32);
        bufp->chgIData(oldp+1187,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__host_addr[1]),32);
        bufp->chgBit(oldp+1188,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__host_we[0]));
        bufp->chgBit(oldp+1189,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__host_we[1]));
        bufp->chgCData(oldp+1190,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__host_be[0]),4);
        bufp->chgCData(oldp+1191,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__host_be[1]),4);
        bufp->chgIData(oldp+1192,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__host_wdata[0]),32);
        bufp->chgIData(oldp+1193,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__host_wdata[1]),32);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[6U]))) {
        bufp->chgBit(oldp+1194,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__dst_req));
        bufp->chgBit(oldp+1195,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__wready_o));
        bufp->chgBit(oldp+1196,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__u_prim_sync_reqack__DOT__gen_rz_hs_protocol__DOT__dst_fsm_q));
        bufp->chgBit(oldp+1197,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__u_prim_sync_reqack__DOT__gen_rz_hs_protocol__DOT__dst_req));
        bufp->chgBit(oldp+1198,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__u_prim_sync_reqack__DOT__gen_rz_hs_protocol__DOT__req_sync__DOT__intq));
        bufp->chgBit(oldp+1199,(((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__u_prim_sync_reqack__DOT__gen_rz_hs_protocol__DOT__src_ack) 
                                 & (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__u_prim_sync_reqack__DOT__gen_rz_hs_protocol__DOT__src_fsm_q))));
        bufp->chgBit(oldp+1200,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__pending_q));
        bufp->chgBit(oldp+1201,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__not_in_reset_q));
        bufp->chgBit(oldp+1202,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__u_prim_sync_reqack__DOT__gen_rz_hs_protocol__DOT__src_fsm_q));
        bufp->chgBit(oldp+1203,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__u_prim_sync_reqack__DOT__gen_rz_hs_protocol__DOT__src_ack));
        bufp->chgBit(oldp+1204,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__u_prim_sync_reqack__DOT__gen_rz_hs_protocol__DOT__ack_sync__DOT__intq));
        bufp->chgBit(oldp+1205,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__gen_normal_fifo__DOT__under_rst));
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[7U]))) {
        bufp->chgBit(oldp+1206,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__device_err[0]));
        bufp->chgBit(oldp+1207,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__device_err[1]));
        bufp->chgBit(oldp+1208,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__device_err[2]));
        bufp->chgBit(oldp+1209,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__device_err[3]));
        bufp->chgBit(oldp+1210,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__device_err[4]));
        bufp->chgBit(oldp+1211,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__device_err[5]));
        bufp->chgBit(oldp+1212,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__device_err[6]));
        bufp->chgBit(oldp+1213,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__device_err[7]));
        bufp->chgIData(oldp+1214,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__mem_instr_rdata),32);
        bufp->chgCData(oldp+1215,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__error_d),2);
        bufp->chgBit(oldp+1216,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__dmi_req_valid));
        bufp->chgIData(oldp+1217,((IData)((vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__data_q 
                                           >> 2U))),32);
        bufp->chgCData(oldp+1218,((3U & (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__data_q))),2);
        bufp->chgCData(oldp+1219,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__state_d),3);
        bufp->chgQData(oldp+1220,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__dr_d),41);
        bufp->chgCData(oldp+1222,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__address_d),7);
        bufp->chgIData(oldp+1223,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__data_d),32);
        bufp->chgBit(oldp+1224,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__error_dmi_busy));
        bufp->chgBit(oldp+1225,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__error_dmi_op_failed));
        bufp->chgBit(oldp+1226,(((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__dmi_req_valid) 
                                 & (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__wready_o))));
        bufp->chgBit(oldp+1227,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__src_req));
        bufp->chgBit(oldp+1228,(((~ ((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__u_prim_sync_reqack__DOT__gen_rz_hs_protocol__DOT__src_ack) 
                                     & (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__u_prim_sync_reqack__DOT__gen_rz_hs_protocol__DOT__src_fsm_q))) 
                                 & (((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__dmi_req_valid) 
                                     & (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__wready_o)) 
                                    | (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__pending_q)))));
        bufp->chgBit(oldp+1229,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__u_prim_sync_reqack__DOT__gen_rz_hs_protocol__DOT__src_fsm_d));
        bufp->chgQData(oldp+1230,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__data_q),34);
        bufp->chgQData(oldp+1232,((0x00000003ffffffffULL 
                                   & (((QData)((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__gen_normal_fifo__DOT__storage[1U])) 
                                       << 0x00000020U) 
                                      | (QData)((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__gen_normal_fifo__DOT__storage[0U]))))),34);
        bufp->chgQData(oldp+1234,((0x00000003ffffffffULL 
                                   & (((QData)((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__gen_normal_fifo__DOT__storage[2U])) 
                                       << 0x0000001eU) 
                                      | ((QData)((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__gen_normal_fifo__DOT__storage[1U])) 
                                         >> 2U)))),34);
        bufp->chgQData(oldp+1236,(((0x14U > (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__gen_rom_snd_scratch__DOT__i_debug_rom__DOT__addr_q))
                                    ? ((0x04ffU >= 
                                        ((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__gen_rom_snd_scratch__DOT__i_debug_rom__DOT__addr_q) 
                                         << 6U)) ? 
                                       (((QData)((IData)(Vtop_verilator__ConstPool__CONST_h9127903b_0
                                                         [
                                                         (((IData)(0x0000003fU) 
                                                           + 
                                                           ((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__gen_rom_snd_scratch__DOT__i_debug_rom__DOT__addr_q) 
                                                            << 6U)) 
                                                          >> 5U)])) 
                                         << ((0U == 
                                              (0x0000001fU 
                                               & ((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__gen_rom_snd_scratch__DOT__i_debug_rom__DOT__addr_q) 
                                                  << 6U)))
                                              ? 0x00000020U
                                              : ((IData)(0x00000040U) 
                                                 - 
                                                 (0x0000001fU 
                                                  & ((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__gen_rom_snd_scratch__DOT__i_debug_rom__DOT__addr_q) 
                                                     << 6U))))) 
                                        | (((0U == 
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
                                              >> (0x0000001fU 
                                                  & ((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__gen_rom_snd_scratch__DOT__i_debug_rom__DOT__addr_q) 
                                                     << 6U)))))
                                        : 0ULL) : 0ULL)),64);
        bufp->chgCData(oldp+1238,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__gen_rom_snd_scratch__DOT__i_debug_rom__DOT__addr_q),5);
        bufp->chgBit(oldp+1239,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_bus__DOT__device_err_i[0]));
        bufp->chgBit(oldp+1240,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_bus__DOT__device_err_i[1]));
        bufp->chgBit(oldp+1241,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_bus__DOT__device_err_i[2]));
        bufp->chgBit(oldp+1242,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_bus__DOT__device_err_i[3]));
        bufp->chgBit(oldp+1243,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_bus__DOT__device_err_i[4]));
        bufp->chgBit(oldp+1244,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_bus__DOT__device_err_i[5]));
        bufp->chgBit(oldp+1245,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_bus__DOT__device_err_i[6]));
        bufp->chgBit(oldp+1246,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_bus__DOT__device_err_i[7]));
        bufp->chgIData(oldp+1247,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT____Vcellout__u_ram__a_rdata_o),32);
        bufp->chgCData(oldp+1248,((0x000000ffU & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0U])),8);
        bufp->chgCData(oldp+1249,((0x000000ffU & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0U] 
                                                  >> 8U))),8);
        bufp->chgCData(oldp+1250,((0x000000ffU & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0U] 
                                                  >> 0x00000010U))),8);
        bufp->chgCData(oldp+1251,((vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0U] 
                                   >> 0x00000018U)),8);
        bufp->chgCData(oldp+1252,((0x000000ffU & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[1U])),8);
        bufp->chgCData(oldp+1253,((0x000000ffU & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[1U] 
                                                  >> 8U))),8);
        bufp->chgCData(oldp+1254,((0x000000ffU & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[1U] 
                                                  >> 0x00000010U))),8);
        bufp->chgCData(oldp+1255,((vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[1U] 
                                   >> 0x00000018U)),8);
        bufp->chgCData(oldp+1256,((0x000000ffU & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[2U])),8);
        bufp->chgCData(oldp+1257,((0x000000ffU & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[2U] 
                                                  >> 8U))),8);
        bufp->chgCData(oldp+1258,((0x000000ffU & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[2U] 
                                                  >> 0x00000010U))),8);
        bufp->chgCData(oldp+1259,((vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[2U] 
                                   >> 0x00000018U)),8);
        bufp->chgCData(oldp+1260,((0x000000ffU & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[3U])),8);
        bufp->chgCData(oldp+1261,((0x000000ffU & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[3U] 
                                                  >> 8U))),8);
        bufp->chgCData(oldp+1262,((0x000000ffU & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[3U] 
                                                  >> 0x00000010U))),8);
        bufp->chgCData(oldp+1263,((vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[3U] 
                                   >> 0x00000018U)),8);
        bufp->chgCData(oldp+1264,((0x000000ffU & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[4U])),8);
        bufp->chgCData(oldp+1265,((0x000000ffU & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[4U] 
                                                  >> 8U))),8);
        bufp->chgCData(oldp+1266,((0x000000ffU & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[4U] 
                                                  >> 0x00000010U))),8);
        bufp->chgCData(oldp+1267,((vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[4U] 
                                   >> 0x00000018U)),8);
        bufp->chgCData(oldp+1268,((0x000000ffU & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[5U])),8);
        bufp->chgCData(oldp+1269,((0x000000ffU & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[5U] 
                                                  >> 8U))),8);
        bufp->chgCData(oldp+1270,((0x000000ffU & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[5U] 
                                                  >> 0x00000010U))),8);
        bufp->chgCData(oldp+1271,((vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[5U] 
                                   >> 0x00000018U)),8);
        bufp->chgCData(oldp+1272,((0x000000ffU & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[6U])),8);
        bufp->chgCData(oldp+1273,((0x000000ffU & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[6U] 
                                                  >> 8U))),8);
        bufp->chgCData(oldp+1274,((0x000000ffU & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[6U] 
                                                  >> 0x00000010U))),8);
        bufp->chgCData(oldp+1275,((vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[6U] 
                                   >> 0x00000018U)),8);
        bufp->chgCData(oldp+1276,((0x000000ffU & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[7U])),8);
        bufp->chgCData(oldp+1277,((0x000000ffU & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[7U] 
                                                  >> 8U))),8);
        bufp->chgCData(oldp+1278,((0x000000ffU & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[7U] 
                                                  >> 0x00000010U))),8);
        bufp->chgCData(oldp+1279,((vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[7U] 
                                   >> 0x00000018U)),8);
        bufp->chgCData(oldp+1280,((0x000000ffU & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[8U])),8);
        bufp->chgCData(oldp+1281,((0x000000ffU & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[8U] 
                                                  >> 8U))),8);
        bufp->chgCData(oldp+1282,((0x000000ffU & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[8U] 
                                                  >> 0x00000010U))),8);
        bufp->chgCData(oldp+1283,((vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[8U] 
                                   >> 0x00000018U)),8);
        bufp->chgCData(oldp+1284,((0x000000ffU & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[9U])),8);
        bufp->chgCData(oldp+1285,((0x000000ffU & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[9U] 
                                                  >> 8U))),8);
        bufp->chgCData(oldp+1286,((0x000000ffU & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[9U] 
                                                  >> 0x00000010U))),8);
        bufp->chgCData(oldp+1287,((vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[9U] 
                                   >> 0x00000018U)),8);
        bufp->chgCData(oldp+1288,((0x000000ffU & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[10U])),8);
        bufp->chgCData(oldp+1289,((0x000000ffU & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[10U] 
                                                  >> 8U))),8);
        bufp->chgCData(oldp+1290,((0x000000ffU & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[10U] 
                                                  >> 0x00000010U))),8);
        bufp->chgCData(oldp+1291,((vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[10U] 
                                   >> 0x00000018U)),8);
        bufp->chgCData(oldp+1292,((0x000000ffU & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[11U])),8);
        bufp->chgCData(oldp+1293,((0x000000ffU & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[11U] 
                                                  >> 8U))),8);
        bufp->chgCData(oldp+1294,((0x000000ffU & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[11U] 
                                                  >> 0x00000010U))),8);
        bufp->chgCData(oldp+1295,((vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[11U] 
                                   >> 0x00000018U)),8);
        bufp->chgCData(oldp+1296,((0x000000ffU & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[12U])),8);
        bufp->chgCData(oldp+1297,((0x000000ffU & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[12U] 
                                                  >> 8U))),8);
        bufp->chgCData(oldp+1298,((0x000000ffU & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[12U] 
                                                  >> 0x00000010U))),8);
        bufp->chgCData(oldp+1299,((vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[12U] 
                                   >> 0x00000018U)),8);
        bufp->chgCData(oldp+1300,((0x000000ffU & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[13U])),8);
        bufp->chgCData(oldp+1301,((0x000000ffU & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[13U] 
                                                  >> 8U))),8);
        bufp->chgCData(oldp+1302,((0x000000ffU & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[13U] 
                                                  >> 0x00000010U))),8);
        bufp->chgCData(oldp+1303,((vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[13U] 
                                   >> 0x00000018U)),8);
        bufp->chgCData(oldp+1304,((0x000000ffU & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[14U])),8);
        bufp->chgCData(oldp+1305,((0x000000ffU & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[14U] 
                                                  >> 8U))),8);
        bufp->chgCData(oldp+1306,((0x000000ffU & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[14U] 
                                                  >> 0x00000010U))),8);
        bufp->chgCData(oldp+1307,((vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[14U] 
                                   >> 0x00000018U)),8);
        bufp->chgCData(oldp+1308,((0x000000ffU & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[15U])),8);
        bufp->chgCData(oldp+1309,((0x000000ffU & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[15U] 
                                                  >> 8U))),8);
        bufp->chgCData(oldp+1310,((0x000000ffU & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[15U] 
                                                  >> 0x00000010U))),8);
        bufp->chgCData(oldp+1311,((vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[15U] 
                                   >> 0x00000018U)),8);
        bufp->chgCData(oldp+1312,((0x000000ffU & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[16U])),8);
        bufp->chgCData(oldp+1313,((0x000000ffU & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[16U] 
                                                  >> 8U))),8);
        bufp->chgCData(oldp+1314,((0x000000ffU & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[16U] 
                                                  >> 0x00000010U))),8);
        bufp->chgCData(oldp+1315,((vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[16U] 
                                   >> 0x00000018U)),8);
        bufp->chgCData(oldp+1316,((0x000000ffU & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[17U])),8);
        bufp->chgCData(oldp+1317,((0x000000ffU & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[17U] 
                                                  >> 8U))),8);
        bufp->chgCData(oldp+1318,((0x000000ffU & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[17U] 
                                                  >> 0x00000010U))),8);
        bufp->chgCData(oldp+1319,((vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[17U] 
                                   >> 0x00000018U)),8);
        bufp->chgCData(oldp+1320,((0x000000ffU & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[18U])),8);
        bufp->chgCData(oldp+1321,((0x000000ffU & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[18U] 
                                                  >> 8U))),8);
        bufp->chgCData(oldp+1322,((0x000000ffU & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[18U] 
                                                  >> 0x00000010U))),8);
        bufp->chgCData(oldp+1323,((vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[18U] 
                                   >> 0x00000018U)),8);
        bufp->chgCData(oldp+1324,((0x000000ffU & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[19U])),8);
        bufp->chgCData(oldp+1325,((0x000000ffU & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[19U] 
                                                  >> 8U))),8);
        bufp->chgCData(oldp+1326,((0x000000ffU & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[19U] 
                                                  >> 0x00000010U))),8);
        bufp->chgCData(oldp+1327,((vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[19U] 
                                   >> 0x00000018U)),8);
        bufp->chgCData(oldp+1328,((0x000000ffU & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[20U])),8);
        bufp->chgCData(oldp+1329,((0x000000ffU & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[20U] 
                                                  >> 8U))),8);
        bufp->chgCData(oldp+1330,((0x000000ffU & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[20U] 
                                                  >> 0x00000010U))),8);
        bufp->chgCData(oldp+1331,((vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[20U] 
                                   >> 0x00000018U)),8);
        bufp->chgCData(oldp+1332,((0x000000ffU & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[21U])),8);
        bufp->chgCData(oldp+1333,((0x000000ffU & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[21U] 
                                                  >> 8U))),8);
        bufp->chgCData(oldp+1334,((0x000000ffU & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[21U] 
                                                  >> 0x00000010U))),8);
        bufp->chgCData(oldp+1335,((vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[21U] 
                                   >> 0x00000018U)),8);
        bufp->chgCData(oldp+1336,((0x000000ffU & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[22U])),8);
        bufp->chgCData(oldp+1337,((0x000000ffU & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[22U] 
                                                  >> 8U))),8);
        bufp->chgCData(oldp+1338,((0x000000ffU & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[22U] 
                                                  >> 0x00000010U))),8);
        bufp->chgCData(oldp+1339,((vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[22U] 
                                   >> 0x00000018U)),8);
        bufp->chgCData(oldp+1340,((0x000000ffU & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[23U])),8);
        bufp->chgCData(oldp+1341,((0x000000ffU & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[23U] 
                                                  >> 8U))),8);
        bufp->chgCData(oldp+1342,((0x000000ffU & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[23U] 
                                                  >> 0x00000010U))),8);
        bufp->chgCData(oldp+1343,((vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[23U] 
                                   >> 0x00000018U)),8);
        bufp->chgCData(oldp+1344,((0x000000ffU & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[24U])),8);
        bufp->chgCData(oldp+1345,((0x000000ffU & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[24U] 
                                                  >> 8U))),8);
        bufp->chgCData(oldp+1346,((0x000000ffU & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[24U] 
                                                  >> 0x00000010U))),8);
        bufp->chgCData(oldp+1347,((vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[24U] 
                                   >> 0x00000018U)),8);
        bufp->chgCData(oldp+1348,((0x000000ffU & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[25U])),8);
        bufp->chgCData(oldp+1349,((0x000000ffU & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[25U] 
                                                  >> 8U))),8);
        bufp->chgCData(oldp+1350,((0x000000ffU & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[25U] 
                                                  >> 0x00000010U))),8);
        bufp->chgCData(oldp+1351,((vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[25U] 
                                   >> 0x00000018U)),8);
        bufp->chgCData(oldp+1352,((0x000000ffU & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[26U])),8);
        bufp->chgCData(oldp+1353,((0x000000ffU & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[26U] 
                                                  >> 8U))),8);
        bufp->chgCData(oldp+1354,((0x000000ffU & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[26U] 
                                                  >> 0x00000010U))),8);
        bufp->chgCData(oldp+1355,((vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[26U] 
                                   >> 0x00000018U)),8);
        bufp->chgCData(oldp+1356,((0x000000ffU & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[27U])),8);
        bufp->chgCData(oldp+1357,((0x000000ffU & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[27U] 
                                                  >> 8U))),8);
        bufp->chgCData(oldp+1358,((0x000000ffU & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[27U] 
                                                  >> 0x00000010U))),8);
        bufp->chgCData(oldp+1359,((vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[27U] 
                                   >> 0x00000018U)),8);
        bufp->chgCData(oldp+1360,((0x000000ffU & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[28U])),8);
        bufp->chgCData(oldp+1361,((0x000000ffU & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[28U] 
                                                  >> 8U))),8);
        bufp->chgCData(oldp+1362,((0x000000ffU & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[28U] 
                                                  >> 0x00000010U))),8);
        bufp->chgCData(oldp+1363,((vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[28U] 
                                   >> 0x00000018U)),8);
        bufp->chgCData(oldp+1364,((0x000000ffU & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[29U])),8);
        bufp->chgCData(oldp+1365,((0x000000ffU & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[29U] 
                                                  >> 8U))),8);
        bufp->chgCData(oldp+1366,((0x000000ffU & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[29U] 
                                                  >> 0x00000010U))),8);
        bufp->chgCData(oldp+1367,((vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[29U] 
                                   >> 0x00000018U)),8);
        bufp->chgCData(oldp+1368,((0x000000ffU & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[30U])),8);
        bufp->chgCData(oldp+1369,((0x000000ffU & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[30U] 
                                                  >> 8U))),8);
        bufp->chgCData(oldp+1370,((0x000000ffU & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[30U] 
                                                  >> 0x00000010U))),8);
        bufp->chgCData(oldp+1371,((vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[30U] 
                                   >> 0x00000018U)),8);
        bufp->chgCData(oldp+1372,((0x000000ffU & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[31U])),8);
        bufp->chgCData(oldp+1373,((0x000000ffU & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[31U] 
                                                  >> 8U))),8);
        bufp->chgCData(oldp+1374,((0x000000ffU & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[31U] 
                                                  >> 0x00000010U))),8);
        bufp->chgIData(oldp+1375,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_timer__DOT__rdata_q),32);
        bufp->chgBit(oldp+1376,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_timer__DOT__error_q));
        bufp->chgCData(oldp+1377,((0x000000ffU & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__storage[0U])),8);
        bufp->chgCData(oldp+1378,((0x000000ffU & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__storage[0U] 
                                                  >> 8U))),8);
        bufp->chgCData(oldp+1379,((0x000000ffU & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__storage[0U] 
                                                  >> 0x00000010U))),8);
        bufp->chgCData(oldp+1380,((vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__storage[0U] 
                                   >> 0x00000018U)),8);
        bufp->chgCData(oldp+1381,((0x000000ffU & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__storage[1U])),8);
        bufp->chgCData(oldp+1382,((0x000000ffU & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__storage[1U] 
                                                  >> 8U))),8);
        bufp->chgCData(oldp+1383,((0x000000ffU & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__storage[1U] 
                                                  >> 0x00000010U))),8);
        bufp->chgCData(oldp+1384,((vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__storage[1U] 
                                   >> 0x00000018U)),8);
        bufp->chgCData(oldp+1385,((0x000000ffU & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__storage[2U])),8);
        bufp->chgCData(oldp+1386,((0x000000ffU & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__storage[2U] 
                                                  >> 8U))),8);
        bufp->chgCData(oldp+1387,((0x000000ffU & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__storage[2U] 
                                                  >> 0x00000010U))),8);
        bufp->chgCData(oldp+1388,((vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__storage[2U] 
                                   >> 0x00000018U)),8);
        bufp->chgCData(oldp+1389,((0x000000ffU & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__storage[3U])),8);
        bufp->chgCData(oldp+1390,((0x000000ffU & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__storage[3U] 
                                                  >> 8U))),8);
        bufp->chgCData(oldp+1391,((0x000000ffU & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__storage[3U] 
                                                  >> 0x00000010U))),8);
        bufp->chgCData(oldp+1392,((vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__storage[3U] 
                                   >> 0x00000018U)),8);
        bufp->chgCData(oldp+1393,((0x000000ffU & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__storage[4U])),8);
        bufp->chgCData(oldp+1394,((0x000000ffU & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__storage[4U] 
                                                  >> 8U))),8);
        bufp->chgCData(oldp+1395,((0x000000ffU & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__storage[4U] 
                                                  >> 0x00000010U))),8);
        bufp->chgCData(oldp+1396,((vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__storage[4U] 
                                   >> 0x00000018U)),8);
        bufp->chgCData(oldp+1397,((0x000000ffU & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__storage[5U])),8);
        bufp->chgCData(oldp+1398,((0x000000ffU & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__storage[5U] 
                                                  >> 8U))),8);
        bufp->chgCData(oldp+1399,((0x000000ffU & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__storage[5U] 
                                                  >> 0x00000010U))),8);
        bufp->chgCData(oldp+1400,((vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__storage[5U] 
                                   >> 0x00000018U)),8);
        bufp->chgCData(oldp+1401,((0x000000ffU & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__storage[6U])),8);
        bufp->chgCData(oldp+1402,((0x000000ffU & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__storage[6U] 
                                                  >> 8U))),8);
        bufp->chgCData(oldp+1403,((0x000000ffU & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__storage[6U] 
                                                  >> 0x00000010U))),8);
        bufp->chgCData(oldp+1404,((vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__storage[6U] 
                                   >> 0x00000018U)),8);
        bufp->chgCData(oldp+1405,((0x000000ffU & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__storage[7U])),8);
        bufp->chgCData(oldp+1406,((0x000000ffU & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__storage[7U] 
                                                  >> 8U))),8);
        bufp->chgCData(oldp+1407,((0x000000ffU & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__storage[7U] 
                                                  >> 0x00000010U))),8);
        bufp->chgCData(oldp+1408,((vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__storage[7U] 
                                   >> 0x00000018U)),8);
        bufp->chgCData(oldp+1409,((0x000000ffU & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__storage[8U])),8);
        bufp->chgCData(oldp+1410,((0x000000ffU & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__storage[8U] 
                                                  >> 8U))),8);
        bufp->chgCData(oldp+1411,((0x000000ffU & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__storage[8U] 
                                                  >> 0x00000010U))),8);
        bufp->chgCData(oldp+1412,((vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__storage[8U] 
                                   >> 0x00000018U)),8);
        bufp->chgCData(oldp+1413,((0x000000ffU & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__storage[9U])),8);
        bufp->chgCData(oldp+1414,((0x000000ffU & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__storage[9U] 
                                                  >> 8U))),8);
        bufp->chgCData(oldp+1415,((0x000000ffU & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__storage[9U] 
                                                  >> 0x00000010U))),8);
        bufp->chgCData(oldp+1416,((vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__storage[9U] 
                                   >> 0x00000018U)),8);
        bufp->chgCData(oldp+1417,((0x000000ffU & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__storage[10U])),8);
        bufp->chgCData(oldp+1418,((0x000000ffU & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__storage[10U] 
                                                  >> 8U))),8);
        bufp->chgCData(oldp+1419,((0x000000ffU & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__storage[10U] 
                                                  >> 0x00000010U))),8);
        bufp->chgCData(oldp+1420,((vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__storage[10U] 
                                   >> 0x00000018U)),8);
        bufp->chgCData(oldp+1421,((0x000000ffU & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__storage[11U])),8);
        bufp->chgCData(oldp+1422,((0x000000ffU & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__storage[11U] 
                                                  >> 8U))),8);
        bufp->chgCData(oldp+1423,((0x000000ffU & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__storage[11U] 
                                                  >> 0x00000010U))),8);
        bufp->chgCData(oldp+1424,((vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__storage[11U] 
                                   >> 0x00000018U)),8);
        bufp->chgCData(oldp+1425,((0x000000ffU & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__storage[12U])),8);
        bufp->chgCData(oldp+1426,((0x000000ffU & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__storage[12U] 
                                                  >> 8U))),8);
        bufp->chgCData(oldp+1427,((0x000000ffU & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__storage[12U] 
                                                  >> 0x00000010U))),8);
        bufp->chgCData(oldp+1428,((vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__storage[12U] 
                                   >> 0x00000018U)),8);
        bufp->chgCData(oldp+1429,((0x000000ffU & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__storage[13U])),8);
        bufp->chgCData(oldp+1430,((0x000000ffU & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__storage[13U] 
                                                  >> 8U))),8);
        bufp->chgCData(oldp+1431,((0x000000ffU & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__storage[13U] 
                                                  >> 0x00000010U))),8);
        bufp->chgCData(oldp+1432,((vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__storage[13U] 
                                   >> 0x00000018U)),8);
        bufp->chgCData(oldp+1433,((0x000000ffU & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__storage[14U])),8);
        bufp->chgCData(oldp+1434,((0x000000ffU & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__storage[14U] 
                                                  >> 8U))),8);
        bufp->chgCData(oldp+1435,((0x000000ffU & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__storage[14U] 
                                                  >> 0x00000010U))),8);
        bufp->chgCData(oldp+1436,((vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__storage[14U] 
                                   >> 0x00000018U)),8);
        bufp->chgCData(oldp+1437,((0x000000ffU & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__storage[15U])),8);
        bufp->chgCData(oldp+1438,((0x000000ffU & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__storage[15U] 
                                                  >> 8U))),8);
        bufp->chgCData(oldp+1439,((0x000000ffU & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__storage[15U] 
                                                  >> 0x00000010U))),8);
        bufp->chgCData(oldp+1440,((vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__storage[15U] 
                                   >> 0x00000018U)),8);
        bufp->chgCData(oldp+1441,((0x000000ffU & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__storage[16U])),8);
        bufp->chgCData(oldp+1442,((0x000000ffU & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__storage[16U] 
                                                  >> 8U))),8);
        bufp->chgCData(oldp+1443,((0x000000ffU & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__storage[16U] 
                                                  >> 0x00000010U))),8);
        bufp->chgCData(oldp+1444,((vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__storage[16U] 
                                   >> 0x00000018U)),8);
        bufp->chgCData(oldp+1445,((0x000000ffU & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__storage[17U])),8);
        bufp->chgCData(oldp+1446,((0x000000ffU & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__storage[17U] 
                                                  >> 8U))),8);
        bufp->chgCData(oldp+1447,((0x000000ffU & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__storage[17U] 
                                                  >> 0x00000010U))),8);
        bufp->chgCData(oldp+1448,((vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__storage[17U] 
                                   >> 0x00000018U)),8);
        bufp->chgCData(oldp+1449,((0x000000ffU & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__storage[18U])),8);
        bufp->chgCData(oldp+1450,((0x000000ffU & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__storage[18U] 
                                                  >> 8U))),8);
        bufp->chgCData(oldp+1451,((0x000000ffU & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__storage[18U] 
                                                  >> 0x00000010U))),8);
        bufp->chgCData(oldp+1452,((vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__storage[18U] 
                                   >> 0x00000018U)),8);
        bufp->chgCData(oldp+1453,((0x000000ffU & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__storage[19U])),8);
        bufp->chgCData(oldp+1454,((0x000000ffU & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__storage[19U] 
                                                  >> 8U))),8);
        bufp->chgCData(oldp+1455,((0x000000ffU & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__storage[19U] 
                                                  >> 0x00000010U))),8);
        bufp->chgCData(oldp+1456,((vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__storage[19U] 
                                   >> 0x00000018U)),8);
        bufp->chgCData(oldp+1457,((0x000000ffU & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__storage[20U])),8);
        bufp->chgCData(oldp+1458,((0x000000ffU & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__storage[20U] 
                                                  >> 8U))),8);
        bufp->chgCData(oldp+1459,((0x000000ffU & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__storage[20U] 
                                                  >> 0x00000010U))),8);
        bufp->chgCData(oldp+1460,((vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__storage[20U] 
                                   >> 0x00000018U)),8);
        bufp->chgCData(oldp+1461,((0x000000ffU & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__storage[21U])),8);
        bufp->chgCData(oldp+1462,((0x000000ffU & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__storage[21U] 
                                                  >> 8U))),8);
        bufp->chgCData(oldp+1463,((0x000000ffU & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__storage[21U] 
                                                  >> 0x00000010U))),8);
        bufp->chgCData(oldp+1464,((vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__storage[21U] 
                                   >> 0x00000018U)),8);
        bufp->chgCData(oldp+1465,((0x000000ffU & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__storage[22U])),8);
        bufp->chgCData(oldp+1466,((0x000000ffU & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__storage[22U] 
                                                  >> 8U))),8);
        bufp->chgCData(oldp+1467,((0x000000ffU & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__storage[22U] 
                                                  >> 0x00000010U))),8);
        bufp->chgCData(oldp+1468,((vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__storage[22U] 
                                   >> 0x00000018U)),8);
        bufp->chgCData(oldp+1469,((0x000000ffU & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__storage[23U])),8);
        bufp->chgCData(oldp+1470,((0x000000ffU & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__storage[23U] 
                                                  >> 8U))),8);
        bufp->chgCData(oldp+1471,((0x000000ffU & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__storage[23U] 
                                                  >> 0x00000010U))),8);
        bufp->chgCData(oldp+1472,((vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__storage[23U] 
                                   >> 0x00000018U)),8);
        bufp->chgCData(oldp+1473,((0x000000ffU & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__storage[24U])),8);
        bufp->chgCData(oldp+1474,((0x000000ffU & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__storage[24U] 
                                                  >> 8U))),8);
        bufp->chgCData(oldp+1475,((0x000000ffU & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__storage[24U] 
                                                  >> 0x00000010U))),8);
        bufp->chgCData(oldp+1476,((vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__storage[24U] 
                                   >> 0x00000018U)),8);
        bufp->chgCData(oldp+1477,((0x000000ffU & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__storage[25U])),8);
        bufp->chgCData(oldp+1478,((0x000000ffU & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__storage[25U] 
                                                  >> 8U))),8);
        bufp->chgCData(oldp+1479,((0x000000ffU & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__storage[25U] 
                                                  >> 0x00000010U))),8);
        bufp->chgCData(oldp+1480,((vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__storage[25U] 
                                   >> 0x00000018U)),8);
        bufp->chgCData(oldp+1481,((0x000000ffU & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__storage[26U])),8);
        bufp->chgCData(oldp+1482,((0x000000ffU & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__storage[26U] 
                                                  >> 8U))),8);
        bufp->chgCData(oldp+1483,((0x000000ffU & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__storage[26U] 
                                                  >> 0x00000010U))),8);
        bufp->chgCData(oldp+1484,((vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__storage[26U] 
                                   >> 0x00000018U)),8);
        bufp->chgCData(oldp+1485,((0x000000ffU & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__storage[27U])),8);
        bufp->chgCData(oldp+1486,((0x000000ffU & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__storage[27U] 
                                                  >> 8U))),8);
        bufp->chgCData(oldp+1487,((0x000000ffU & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__storage[27U] 
                                                  >> 0x00000010U))),8);
        bufp->chgCData(oldp+1488,((vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__storage[27U] 
                                   >> 0x00000018U)),8);
        bufp->chgCData(oldp+1489,((0x000000ffU & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__storage[28U])),8);
        bufp->chgCData(oldp+1490,((0x000000ffU & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__storage[28U] 
                                                  >> 8U))),8);
        bufp->chgCData(oldp+1491,((0x000000ffU & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__storage[28U] 
                                                  >> 0x00000010U))),8);
        bufp->chgCData(oldp+1492,((vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__storage[28U] 
                                   >> 0x00000018U)),8);
        bufp->chgCData(oldp+1493,((0x000000ffU & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__storage[29U])),8);
        bufp->chgCData(oldp+1494,((0x000000ffU & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__storage[29U] 
                                                  >> 8U))),8);
        bufp->chgCData(oldp+1495,((0x000000ffU & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__storage[29U] 
                                                  >> 0x00000010U))),8);
        bufp->chgCData(oldp+1496,((vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__storage[29U] 
                                   >> 0x00000018U)),8);
        bufp->chgCData(oldp+1497,((0x000000ffU & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__storage[30U])),8);
        bufp->chgCData(oldp+1498,((0x000000ffU & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__storage[30U] 
                                                  >> 8U))),8);
        bufp->chgCData(oldp+1499,((0x000000ffU & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__storage[30U] 
                                                  >> 0x00000010U))),8);
        bufp->chgCData(oldp+1500,((vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__storage[30U] 
                                   >> 0x00000018U)),8);
        bufp->chgCData(oldp+1501,((0x000000ffU & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__storage[31U])),8);
        bufp->chgCData(oldp+1502,((0x000000ffU & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__storage[31U] 
                                                  >> 8U))),8);
        bufp->chgCData(oldp+1503,((0x000000ffU & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__storage[31U] 
                                                  >> 0x00000010U))),8);
        bufp->chgCData(oldp+1504,((vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__storage[31U] 
                                   >> 0x00000018U)),8);
        bufp->chgCData(oldp+1505,((0x000000ffU & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0U])),8);
        bufp->chgCData(oldp+1506,((0x000000ffU & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0U] 
                                                  >> 8U))),8);
        bufp->chgCData(oldp+1507,((0x000000ffU & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0U] 
                                                  >> 0x00000010U))),8);
        bufp->chgCData(oldp+1508,((vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0U] 
                                   >> 0x00000018U)),8);
        bufp->chgCData(oldp+1509,((0x000000ffU & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[1U])),8);
        bufp->chgCData(oldp+1510,((0x000000ffU & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[1U] 
                                                  >> 8U))),8);
        bufp->chgCData(oldp+1511,((0x000000ffU & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[1U] 
                                                  >> 0x00000010U))),8);
        bufp->chgCData(oldp+1512,((vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[1U] 
                                   >> 0x00000018U)),8);
        bufp->chgCData(oldp+1513,((0x000000ffU & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[2U])),8);
        bufp->chgCData(oldp+1514,((0x000000ffU & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[2U] 
                                                  >> 8U))),8);
        bufp->chgCData(oldp+1515,((0x000000ffU & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[2U] 
                                                  >> 0x00000010U))),8);
        bufp->chgCData(oldp+1516,((vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[2U] 
                                   >> 0x00000018U)),8);
        bufp->chgCData(oldp+1517,((0x000000ffU & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[3U])),8);
        bufp->chgCData(oldp+1518,((0x000000ffU & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[3U] 
                                                  >> 8U))),8);
        bufp->chgCData(oldp+1519,((0x000000ffU & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[3U] 
                                                  >> 0x00000010U))),8);
        bufp->chgCData(oldp+1520,((vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[3U] 
                                   >> 0x00000018U)),8);
        bufp->chgCData(oldp+1521,((0x000000ffU & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[4U])),8);
        bufp->chgCData(oldp+1522,((0x000000ffU & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[4U] 
                                                  >> 8U))),8);
        bufp->chgCData(oldp+1523,((0x000000ffU & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[4U] 
                                                  >> 0x00000010U))),8);
        bufp->chgCData(oldp+1524,((vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[4U] 
                                   >> 0x00000018U)),8);
        bufp->chgCData(oldp+1525,((0x000000ffU & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[5U])),8);
        bufp->chgCData(oldp+1526,((0x000000ffU & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[5U] 
                                                  >> 8U))),8);
        bufp->chgCData(oldp+1527,((0x000000ffU & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[5U] 
                                                  >> 0x00000010U))),8);
        bufp->chgCData(oldp+1528,((vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[5U] 
                                   >> 0x00000018U)),8);
        bufp->chgCData(oldp+1529,((0x000000ffU & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[6U])),8);
        bufp->chgCData(oldp+1530,((0x000000ffU & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[6U] 
                                                  >> 8U))),8);
        bufp->chgCData(oldp+1531,((0x000000ffU & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[6U] 
                                                  >> 0x00000010U))),8);
        bufp->chgCData(oldp+1532,((vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[6U] 
                                   >> 0x00000018U)),8);
        bufp->chgCData(oldp+1533,((0x000000ffU & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[7U])),8);
        bufp->chgCData(oldp+1534,((0x000000ffU & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[7U] 
                                                  >> 8U))),8);
        bufp->chgCData(oldp+1535,((0x000000ffU & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[7U] 
                                                  >> 0x00000010U))),8);
        bufp->chgCData(oldp+1536,((vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[7U] 
                                   >> 0x00000018U)),8);
        bufp->chgCData(oldp+1537,((0x000000ffU & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[8U])),8);
        bufp->chgCData(oldp+1538,((0x000000ffU & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[8U] 
                                                  >> 8U))),8);
        bufp->chgCData(oldp+1539,((0x000000ffU & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[8U] 
                                                  >> 0x00000010U))),8);
        bufp->chgCData(oldp+1540,((vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[8U] 
                                   >> 0x00000018U)),8);
        bufp->chgCData(oldp+1541,((0x000000ffU & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[9U])),8);
        bufp->chgCData(oldp+1542,((0x000000ffU & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[9U] 
                                                  >> 8U))),8);
        bufp->chgCData(oldp+1543,((0x000000ffU & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[9U] 
                                                  >> 0x00000010U))),8);
        bufp->chgCData(oldp+1544,((vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[9U] 
                                   >> 0x00000018U)),8);
        bufp->chgCData(oldp+1545,((0x000000ffU & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[10U])),8);
        bufp->chgCData(oldp+1546,((0x000000ffU & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[10U] 
                                                  >> 8U))),8);
        bufp->chgCData(oldp+1547,((0x000000ffU & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[10U] 
                                                  >> 0x00000010U))),8);
        bufp->chgCData(oldp+1548,((vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[10U] 
                                   >> 0x00000018U)),8);
        bufp->chgCData(oldp+1549,((0x000000ffU & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[11U])),8);
        bufp->chgCData(oldp+1550,((0x000000ffU & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[11U] 
                                                  >> 8U))),8);
        bufp->chgCData(oldp+1551,((0x000000ffU & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[11U] 
                                                  >> 0x00000010U))),8);
        bufp->chgCData(oldp+1552,((vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[11U] 
                                   >> 0x00000018U)),8);
        bufp->chgCData(oldp+1553,((0x000000ffU & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[12U])),8);
        bufp->chgCData(oldp+1554,((0x000000ffU & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[12U] 
                                                  >> 8U))),8);
        bufp->chgCData(oldp+1555,((0x000000ffU & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[12U] 
                                                  >> 0x00000010U))),8);
        bufp->chgCData(oldp+1556,((vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[12U] 
                                   >> 0x00000018U)),8);
        bufp->chgCData(oldp+1557,((0x000000ffU & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[13U])),8);
        bufp->chgCData(oldp+1558,((0x000000ffU & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[13U] 
                                                  >> 8U))),8);
        bufp->chgCData(oldp+1559,((0x000000ffU & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[13U] 
                                                  >> 0x00000010U))),8);
        bufp->chgCData(oldp+1560,((vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[13U] 
                                   >> 0x00000018U)),8);
        bufp->chgCData(oldp+1561,((0x000000ffU & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[14U])),8);
        bufp->chgCData(oldp+1562,((0x000000ffU & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[14U] 
                                                  >> 8U))),8);
        bufp->chgCData(oldp+1563,((0x000000ffU & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[14U] 
                                                  >> 0x00000010U))),8);
        bufp->chgCData(oldp+1564,((vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[14U] 
                                   >> 0x00000018U)),8);
        bufp->chgCData(oldp+1565,((0x000000ffU & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[15U])),8);
        bufp->chgCData(oldp+1566,((0x000000ffU & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[15U] 
                                                  >> 8U))),8);
        bufp->chgCData(oldp+1567,((0x000000ffU & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[15U] 
                                                  >> 0x00000010U))),8);
        bufp->chgCData(oldp+1568,((vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[15U] 
                                   >> 0x00000018U)),8);
        bufp->chgCData(oldp+1569,((0x000000ffU & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[16U])),8);
        bufp->chgCData(oldp+1570,((0x000000ffU & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[16U] 
                                                  >> 8U))),8);
        bufp->chgCData(oldp+1571,((0x000000ffU & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[16U] 
                                                  >> 0x00000010U))),8);
        bufp->chgCData(oldp+1572,((vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[16U] 
                                   >> 0x00000018U)),8);
        bufp->chgCData(oldp+1573,((0x000000ffU & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[17U])),8);
        bufp->chgCData(oldp+1574,((0x000000ffU & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[17U] 
                                                  >> 8U))),8);
        bufp->chgCData(oldp+1575,((0x000000ffU & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[17U] 
                                                  >> 0x00000010U))),8);
        bufp->chgCData(oldp+1576,((vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[17U] 
                                   >> 0x00000018U)),8);
        bufp->chgCData(oldp+1577,((0x000000ffU & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[18U])),8);
        bufp->chgCData(oldp+1578,((0x000000ffU & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[18U] 
                                                  >> 8U))),8);
        bufp->chgCData(oldp+1579,((0x000000ffU & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[18U] 
                                                  >> 0x00000010U))),8);
        bufp->chgCData(oldp+1580,((vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[18U] 
                                   >> 0x00000018U)),8);
        bufp->chgCData(oldp+1581,((0x000000ffU & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[19U])),8);
        bufp->chgCData(oldp+1582,((0x000000ffU & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[19U] 
                                                  >> 8U))),8);
        bufp->chgCData(oldp+1583,((0x000000ffU & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[19U] 
                                                  >> 0x00000010U))),8);
        bufp->chgCData(oldp+1584,((vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[19U] 
                                   >> 0x00000018U)),8);
        bufp->chgCData(oldp+1585,((0x000000ffU & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[20U])),8);
        bufp->chgCData(oldp+1586,((0x000000ffU & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[20U] 
                                                  >> 8U))),8);
        bufp->chgCData(oldp+1587,((0x000000ffU & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[20U] 
                                                  >> 0x00000010U))),8);
        bufp->chgCData(oldp+1588,((vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[20U] 
                                   >> 0x00000018U)),8);
        bufp->chgCData(oldp+1589,((0x000000ffU & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[21U])),8);
        bufp->chgCData(oldp+1590,((0x000000ffU & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[21U] 
                                                  >> 8U))),8);
        bufp->chgCData(oldp+1591,((0x000000ffU & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[21U] 
                                                  >> 0x00000010U))),8);
        bufp->chgCData(oldp+1592,((vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[21U] 
                                   >> 0x00000018U)),8);
        bufp->chgCData(oldp+1593,((0x000000ffU & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[22U])),8);
        bufp->chgCData(oldp+1594,((0x000000ffU & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[22U] 
                                                  >> 8U))),8);
        bufp->chgCData(oldp+1595,((0x000000ffU & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[22U] 
                                                  >> 0x00000010U))),8);
        bufp->chgCData(oldp+1596,((vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[22U] 
                                   >> 0x00000018U)),8);
        bufp->chgCData(oldp+1597,((0x000000ffU & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[23U])),8);
        bufp->chgCData(oldp+1598,((0x000000ffU & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[23U] 
                                                  >> 8U))),8);
        bufp->chgCData(oldp+1599,((0x000000ffU & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[23U] 
                                                  >> 0x00000010U))),8);
        bufp->chgCData(oldp+1600,((vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[23U] 
                                   >> 0x00000018U)),8);
        bufp->chgCData(oldp+1601,((0x000000ffU & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[24U])),8);
        bufp->chgCData(oldp+1602,((0x000000ffU & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[24U] 
                                                  >> 8U))),8);
        bufp->chgCData(oldp+1603,((0x000000ffU & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[24U] 
                                                  >> 0x00000010U))),8);
        bufp->chgCData(oldp+1604,((vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[24U] 
                                   >> 0x00000018U)),8);
        bufp->chgCData(oldp+1605,((0x000000ffU & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[25U])),8);
        bufp->chgCData(oldp+1606,((0x000000ffU & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[25U] 
                                                  >> 8U))),8);
        bufp->chgCData(oldp+1607,((0x000000ffU & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[25U] 
                                                  >> 0x00000010U))),8);
        bufp->chgCData(oldp+1608,((vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[25U] 
                                   >> 0x00000018U)),8);
        bufp->chgCData(oldp+1609,((0x000000ffU & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[26U])),8);
        bufp->chgCData(oldp+1610,((0x000000ffU & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[26U] 
                                                  >> 8U))),8);
        bufp->chgCData(oldp+1611,((0x000000ffU & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[26U] 
                                                  >> 0x00000010U))),8);
        bufp->chgCData(oldp+1612,((vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[26U] 
                                   >> 0x00000018U)),8);
        bufp->chgCData(oldp+1613,((0x000000ffU & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[27U])),8);
        bufp->chgCData(oldp+1614,((0x000000ffU & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[27U] 
                                                  >> 8U))),8);
        bufp->chgCData(oldp+1615,((0x000000ffU & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[27U] 
                                                  >> 0x00000010U))),8);
        bufp->chgCData(oldp+1616,((vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[27U] 
                                   >> 0x00000018U)),8);
        bufp->chgCData(oldp+1617,((0x000000ffU & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[28U])),8);
        bufp->chgCData(oldp+1618,((0x000000ffU & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[28U] 
                                                  >> 8U))),8);
        bufp->chgCData(oldp+1619,((0x000000ffU & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[28U] 
                                                  >> 0x00000010U))),8);
        bufp->chgCData(oldp+1620,((vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[28U] 
                                   >> 0x00000018U)),8);
        bufp->chgCData(oldp+1621,((0x000000ffU & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[29U])),8);
        bufp->chgCData(oldp+1622,((0x000000ffU & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[29U] 
                                                  >> 8U))),8);
        bufp->chgCData(oldp+1623,((0x000000ffU & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[29U] 
                                                  >> 0x00000010U))),8);
        bufp->chgCData(oldp+1624,((vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[29U] 
                                   >> 0x00000018U)),8);
        bufp->chgCData(oldp+1625,((0x000000ffU & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[30U])),8);
        bufp->chgCData(oldp+1626,((0x000000ffU & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[30U] 
                                                  >> 8U))),8);
        bufp->chgCData(oldp+1627,((0x000000ffU & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[30U] 
                                                  >> 0x00000010U))),8);
        bufp->chgCData(oldp+1628,((vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[30U] 
                                   >> 0x00000018U)),8);
        bufp->chgCData(oldp+1629,((0x000000ffU & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[31U])),8);
        bufp->chgCData(oldp+1630,((0x000000ffU & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[31U] 
                                                  >> 8U))),8);
        bufp->chgCData(oldp+1631,((0x000000ffU & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[31U] 
                                                  >> 0x00000010U))),8);
        bufp->chgCData(oldp+1632,((vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[31U] 
                                   >> 0x00000018U)),8);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[8U]))) {
        bufp->chgIData(oldp+1633,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__addr_last_q),32);
        bufp->chgIData(oldp+1634,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mepc_csr__DOT__rdata_q),32);
        bufp->chgIData(oldp+1635,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mtval_csr__DOT__rdata_q),32);
        bufp->chgIData(oldp+1636,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[0]),32);
        bufp->chgIData(oldp+1637,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[1]),32);
        bufp->chgIData(oldp+1638,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[2]),32);
        bufp->chgIData(oldp+1639,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[3]),32);
        bufp->chgIData(oldp+1640,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[4]),32);
        bufp->chgIData(oldp+1641,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[5]),32);
        bufp->chgIData(oldp+1642,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[6]),32);
        bufp->chgIData(oldp+1643,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[7]),32);
        bufp->chgIData(oldp+1644,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[8]),32);
        bufp->chgIData(oldp+1645,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[9]),32);
        bufp->chgIData(oldp+1646,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[10]),32);
        bufp->chgIData(oldp+1647,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[11]),32);
        bufp->chgIData(oldp+1648,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[12]),32);
        bufp->chgIData(oldp+1649,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[13]),32);
        bufp->chgIData(oldp+1650,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[14]),32);
        bufp->chgIData(oldp+1651,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[15]),32);
        bufp->chgIData(oldp+1652,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[16]),32);
        bufp->chgIData(oldp+1653,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[17]),32);
        bufp->chgIData(oldp+1654,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[18]),32);
        bufp->chgIData(oldp+1655,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[19]),32);
        bufp->chgIData(oldp+1656,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[20]),32);
        bufp->chgIData(oldp+1657,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[21]),32);
        bufp->chgIData(oldp+1658,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[22]),32);
        bufp->chgIData(oldp+1659,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[23]),32);
        bufp->chgIData(oldp+1660,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[24]),32);
        bufp->chgIData(oldp+1661,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[25]),32);
        bufp->chgIData(oldp+1662,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[26]),32);
        bufp->chgIData(oldp+1663,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[27]),32);
        bufp->chgIData(oldp+1664,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[28]),32);
        bufp->chgIData(oldp+1665,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[29]),32);
        bufp->chgIData(oldp+1666,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[30]),32);
        bufp->chgIData(oldp+1667,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[31]),32);
        bufp->chgIData(oldp+1668,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__10__KET____DOT__rf_reg_q),32);
        bufp->chgIData(oldp+1669,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__11__KET____DOT__rf_reg_q),32);
        bufp->chgIData(oldp+1670,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__12__KET____DOT__rf_reg_q),32);
        bufp->chgIData(oldp+1671,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__13__KET____DOT__rf_reg_q),32);
        bufp->chgIData(oldp+1672,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__14__KET____DOT__rf_reg_q),32);
        bufp->chgIData(oldp+1673,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__15__KET____DOT__rf_reg_q),32);
        bufp->chgIData(oldp+1674,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__16__KET____DOT__rf_reg_q),32);
        bufp->chgIData(oldp+1675,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__17__KET____DOT__rf_reg_q),32);
        bufp->chgIData(oldp+1676,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__18__KET____DOT__rf_reg_q),32);
        bufp->chgIData(oldp+1677,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__19__KET____DOT__rf_reg_q),32);
        bufp->chgIData(oldp+1678,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__1__KET____DOT__rf_reg_q),32);
        bufp->chgIData(oldp+1679,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__20__KET____DOT__rf_reg_q),32);
        bufp->chgIData(oldp+1680,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__21__KET____DOT__rf_reg_q),32);
        bufp->chgIData(oldp+1681,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__22__KET____DOT__rf_reg_q),32);
        bufp->chgIData(oldp+1682,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__23__KET____DOT__rf_reg_q),32);
        bufp->chgIData(oldp+1683,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__24__KET____DOT__rf_reg_q),32);
        bufp->chgIData(oldp+1684,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__25__KET____DOT__rf_reg_q),32);
        bufp->chgIData(oldp+1685,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__26__KET____DOT__rf_reg_q),32);
        bufp->chgIData(oldp+1686,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__27__KET____DOT__rf_reg_q),32);
        bufp->chgIData(oldp+1687,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__28__KET____DOT__rf_reg_q),32);
        bufp->chgIData(oldp+1688,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__29__KET____DOT__rf_reg_q),32);
        bufp->chgIData(oldp+1689,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__2__KET____DOT__rf_reg_q),32);
        bufp->chgIData(oldp+1690,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__30__KET____DOT__rf_reg_q),32);
        bufp->chgIData(oldp+1691,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__31__KET____DOT__rf_reg_q),32);
        bufp->chgIData(oldp+1692,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__3__KET____DOT__rf_reg_q),32);
        bufp->chgIData(oldp+1693,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__4__KET____DOT__rf_reg_q),32);
        bufp->chgIData(oldp+1694,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__5__KET____DOT__rf_reg_q),32);
        bufp->chgIData(oldp+1695,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__6__KET____DOT__rf_reg_q),32);
        bufp->chgIData(oldp+1696,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__7__KET____DOT__rf_reg_q),32);
        bufp->chgIData(oldp+1697,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__8__KET____DOT__rf_reg_q),32);
        bufp->chgIData(oldp+1698,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__9__KET____DOT__rf_reg_q),32);
        bufp->chgBit(oldp+1699,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__instr_new_id_q));
        bufp->chgQData(oldp+1700,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__imd_val_q_ex[0]),34);
        bufp->chgQData(oldp+1702,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__imd_val_q_ex[1]),34);
        bufp->chgBit(oldp+1704,((1U & ((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_cpuctrlsts_part_csr__DOT__rdata_q) 
                                       >> 1U))));
        bufp->chgBit(oldp+1705,((1U & ((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_cpuctrlsts_part_csr__DOT__rdata_q) 
                                       >> 2U))));
        bufp->chgCData(oldp+1706,((7U & ((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_cpuctrlsts_part_csr__DOT__rdata_q) 
                                         >> 3U))),3);
        bufp->chgBit(oldp+1707,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__nmi_mode_q));
        bufp->chgBit(oldp+1708,((1U & ((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mstatus_csr__DOT__rdata_q) 
                                       >> 5U))));
        bufp->chgIData(oldp+1709,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_depc_csr__DOT__rdata_q),32);
        bufp->chgIData(oldp+1710,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mtvec_csr__DOT__rdata_q),32);
        bufp->chgBit(oldp+1711,((1U & (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mstatus_csr__DOT__rdata_q))));
        bufp->chgCData(oldp+1712,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__priv_lvl_q),2);
        bufp->chgCData(oldp+1713,((3U & ((2U & (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mstatus_csr__DOT__rdata_q))
                                          ? ((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mstatus_csr__DOT__rdata_q) 
                                             >> 2U)
                                          : (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__priv_lvl_q)))),2);
        bufp->chgBit(oldp+1714,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q));
        bufp->chgCData(oldp+1715,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__debug_cause_q),3);
        bufp->chgBit(oldp+1716,((1U & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_dcsr_csr__DOT__rdata_q 
                                       >> 2U))));
        bufp->chgBit(oldp+1717,((1U & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_dcsr_csr__DOT__rdata_q 
                                       >> 0x0000000fU))));
        bufp->chgBit(oldp+1718,((1U & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_dcsr_csr__DOT__rdata_q 
                                       >> 0x0000000cU))));
        bufp->chgBit(oldp+1719,((1U & ((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mstatus_csr__DOT__rdata_q) 
                                       >> 4U))));
        bufp->chgCData(oldp+1720,((3U & ((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mstatus_csr__DOT__rdata_q) 
                                         >> 2U))),2);
        bufp->chgBit(oldp+1721,((1U & ((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mstatus_csr__DOT__rdata_q) 
                                       >> 1U))));
        bufp->chgBit(oldp+1722,((1U & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mie_csr__DOT__rdata_q 
                                       >> 0x00000011U))));
        bufp->chgBit(oldp+1723,((1U & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mie_csr__DOT__rdata_q 
                                       >> 0x00000010U))));
        bufp->chgBit(oldp+1724,((1U & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mie_csr__DOT__rdata_q 
                                       >> 0x0000000fU))));
        bufp->chgSData(oldp+1725,((0x00007fffU & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mie_csr__DOT__rdata_q)),15);
        bufp->chgIData(oldp+1726,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mscratch_csr__DOT__rdata_q),32);
        bufp->chgBit(oldp+1727,((1U & ((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mcause_csr__DOT__rdata_q) 
                                       >> 6U))));
        bufp->chgBit(oldp+1728,((1U & ((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mcause_csr__DOT__rdata_q) 
                                       >> 5U))));
        bufp->chgCData(oldp+1729,((0x0000001fU & (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mcause_csr__DOT__rdata_q))),5);
        bufp->chgCData(oldp+1730,((vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_dcsr_csr__DOT__rdata_q 
                                   >> 0x0000001cU)),4);
        bufp->chgSData(oldp+1731,((0x00000fffU & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_dcsr_csr__DOT__rdata_q 
                                                  >> 0x00000010U))),12);
        bufp->chgBit(oldp+1732,((1U & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_dcsr_csr__DOT__rdata_q 
                                       >> 0x0000000eU))));
        bufp->chgBit(oldp+1733,((1U & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_dcsr_csr__DOT__rdata_q 
                                       >> 0x0000000dU))));
        bufp->chgBit(oldp+1734,((1U & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_dcsr_csr__DOT__rdata_q 
                                       >> 0x0000000bU))));
        bufp->chgBit(oldp+1735,((1U & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_dcsr_csr__DOT__rdata_q 
                                       >> 0x0000000aU))));
        bufp->chgBit(oldp+1736,((1U & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_dcsr_csr__DOT__rdata_q 
                                       >> 9U))));
        bufp->chgCData(oldp+1737,((7U & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_dcsr_csr__DOT__rdata_q 
                                         >> 6U))),3);
        bufp->chgBit(oldp+1738,((1U & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_dcsr_csr__DOT__rdata_q 
                                       >> 5U))));
        bufp->chgBit(oldp+1739,((1U & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_dcsr_csr__DOT__rdata_q 
                                       >> 4U))));
        bufp->chgBit(oldp+1740,((1U & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_dcsr_csr__DOT__rdata_q 
                                       >> 3U))));
        bufp->chgCData(oldp+1741,((3U & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_dcsr_csr__DOT__rdata_q)),2);
        bufp->chgIData(oldp+1742,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_dscratch0_csr__DOT__rdata_q),32);
        bufp->chgIData(oldp+1743,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_dscratch1_csr__DOT__rdata_q),32);
        bufp->chgBit(oldp+1744,((1U & ((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mstack_csr__DOT__rdata_q) 
                                       >> 2U))));
        bufp->chgCData(oldp+1745,((3U & (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mstack_csr__DOT__rdata_q))),2);
        bufp->chgIData(oldp+1746,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mstack_epc_csr__DOT__rdata_q),32);
        bufp->chgBit(oldp+1747,((1U & ((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mstack_cause_csr__DOT__rdata_q) 
                                       >> 6U))));
        bufp->chgBit(oldp+1748,((1U & ((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mstack_cause_csr__DOT__rdata_q) 
                                       >> 5U))));
        bufp->chgCData(oldp+1749,((0x0000001fU & (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mstack_cause_csr__DOT__rdata_q))),5);
        bufp->chgIData(oldp+1750,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mcountinhibit_q),32);
        bufp->chgSData(oldp+1751,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mcountinhibit_q),13);
        bufp->chgQData(oldp+1752,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter[0]),64);
        bufp->chgQData(oldp+1754,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter[1]),64);
        bufp->chgQData(oldp+1756,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter[2]),64);
        bufp->chgQData(oldp+1758,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter[3]),64);
        bufp->chgQData(oldp+1760,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter[4]),64);
        bufp->chgQData(oldp+1762,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter[5]),64);
        bufp->chgQData(oldp+1764,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter[6]),64);
        bufp->chgQData(oldp+1766,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter[7]),64);
        bufp->chgQData(oldp+1768,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter[8]),64);
        bufp->chgQData(oldp+1770,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter[9]),64);
        bufp->chgQData(oldp+1772,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter[10]),64);
        bufp->chgQData(oldp+1774,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter[11]),64);
        bufp->chgQData(oldp+1776,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter[12]),64);
        bufp->chgQData(oldp+1778,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter[13]),64);
        bufp->chgQData(oldp+1780,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter[14]),64);
        bufp->chgQData(oldp+1782,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter[15]),64);
        bufp->chgQData(oldp+1784,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter[16]),64);
        bufp->chgQData(oldp+1786,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter[17]),64);
        bufp->chgQData(oldp+1788,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter[18]),64);
        bufp->chgQData(oldp+1790,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter[19]),64);
        bufp->chgQData(oldp+1792,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter[20]),64);
        bufp->chgQData(oldp+1794,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter[21]),64);
        bufp->chgQData(oldp+1796,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter[22]),64);
        bufp->chgQData(oldp+1798,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter[23]),64);
        bufp->chgQData(oldp+1800,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter[24]),64);
        bufp->chgQData(oldp+1802,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter[25]),64);
        bufp->chgQData(oldp+1804,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter[26]),64);
        bufp->chgQData(oldp+1806,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter[27]),64);
        bufp->chgQData(oldp+1808,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter[28]),64);
        bufp->chgQData(oldp+1810,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter[29]),64);
        bufp->chgQData(oldp+1812,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter[30]),64);
        bufp->chgQData(oldp+1814,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter[31]),64);
        bufp->chgQData(oldp+1816,((1ULL + vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__minstret_counter_i__DOT__counter_q)),64);
        bufp->chgQData(oldp+1818,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__minstret_counter_i__DOT__counter_q),64);
        bufp->chgIData(oldp+1820,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_trigger_regs__DOT__u_tselect_csr__DOT__rdata_q),32);
        bufp->chgIData(oldp+1821,((0x28001048U | (4U 
                                                  & (((((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_trigger_regs__DOT__g_dbg_tmatch_reg__BRA__1__KET____DOT__u_tmatch_control_csr__DOT__rdata_q) 
                                                        << 1U) 
                                                       | (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_trigger_regs__DOT__g_dbg_tmatch_reg__BRA__0__KET____DOT__u_tmatch_control_csr__DOT__rdata_q)) 
                                                      >> (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_trigger_regs__DOT__u_tselect_csr__DOT__rdata_q)) 
                                                     << 2U)))),32);
        bufp->chgIData(oldp+1822,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_trigger_regs__DOT__tmatch_value_q
                                  [vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_trigger_regs__DOT__u_tselect_csr__DOT__rdata_q]),32);
        bufp->chgBit(oldp+1823,((1U & ((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_cpuctrlsts_part_csr__DOT__rdata_q) 
                                       >> 7U))));
        bufp->chgBit(oldp+1824,((1U & ((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_cpuctrlsts_part_csr__DOT__rdata_q) 
                                       >> 6U))));
        bufp->chgBit(oldp+1825,((1U & (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_cpuctrlsts_part_csr__DOT__rdata_q))));
        bufp->chgQData(oldp+1826,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__0__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q),64);
        bufp->chgQData(oldp+1828,((0x000000ffffffffffULL 
                                   & (1ULL + vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__0__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q))),40);
        bufp->chgQData(oldp+1830,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__0__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q),40);
        bufp->chgQData(oldp+1832,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__1__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q),64);
        bufp->chgQData(oldp+1834,((0x000000ffffffffffULL 
                                   & (1ULL + vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__1__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q))),40);
        bufp->chgQData(oldp+1836,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__1__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q),40);
        bufp->chgQData(oldp+1838,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__2__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q),64);
        bufp->chgQData(oldp+1840,((0x000000ffffffffffULL 
                                   & (1ULL + vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__2__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q))),40);
        bufp->chgQData(oldp+1842,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__2__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q),40);
        bufp->chgQData(oldp+1844,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__3__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q),64);
        bufp->chgQData(oldp+1846,((0x000000ffffffffffULL 
                                   & (1ULL + vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__3__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q))),40);
        bufp->chgQData(oldp+1848,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__3__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q),40);
        bufp->chgQData(oldp+1850,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__4__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q),64);
        bufp->chgQData(oldp+1852,((0x000000ffffffffffULL 
                                   & (1ULL + vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__4__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q))),40);
        bufp->chgQData(oldp+1854,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__4__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q),40);
        bufp->chgQData(oldp+1856,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__5__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q),64);
        bufp->chgQData(oldp+1858,((0x000000ffffffffffULL 
                                   & (1ULL + vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__5__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q))),40);
        bufp->chgQData(oldp+1860,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__5__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q),40);
        bufp->chgQData(oldp+1862,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__6__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q),64);
        bufp->chgQData(oldp+1864,((0x000000ffffffffffULL 
                                   & (1ULL + vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__6__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q))),40);
        bufp->chgQData(oldp+1866,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__6__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q),40);
        bufp->chgQData(oldp+1868,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__7__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q),64);
        bufp->chgQData(oldp+1870,((0x000000ffffffffffULL 
                                   & (1ULL + vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__7__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q))),64);
        bufp->chgQData(oldp+1872,((0x000000ffffffffffULL 
                                   & (1ULL + vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__7__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q))),40);
        bufp->chgQData(oldp+1874,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__7__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q),40);
        bufp->chgQData(oldp+1876,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__8__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q),64);
        bufp->chgQData(oldp+1878,((0x000000ffffffffffULL 
                                   & (1ULL + vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__8__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q))),40);
        bufp->chgQData(oldp+1880,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__8__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q),40);
        bufp->chgQData(oldp+1882,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__9__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q),64);
        bufp->chgQData(oldp+1884,((0x000000ffffffffffULL 
                                   & (1ULL + vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__9__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q))),40);
        bufp->chgQData(oldp+1886,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__9__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q),40);
        bufp->chgBit(oldp+1888,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_trigger_regs__DOT__u_tselect_csr__DOT__rdata_q));
        bufp->chgCData(oldp+1889,((((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_trigger_regs__DOT__g_dbg_tmatch_reg__BRA__1__KET____DOT__u_tmatch_control_csr__DOT__rdata_q) 
                                    << 1U) | (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_trigger_regs__DOT__g_dbg_tmatch_reg__BRA__0__KET____DOT__u_tmatch_control_csr__DOT__rdata_q))),2);
        bufp->chgIData(oldp+1890,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_trigger_regs__DOT__tmatch_value_q[0]),32);
        bufp->chgIData(oldp+1891,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_trigger_regs__DOT__tmatch_value_q[1]),32);
        bufp->chgBit(oldp+1892,((1U & ((((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_trigger_regs__DOT__g_dbg_tmatch_reg__BRA__1__KET____DOT__u_tmatch_control_csr__DOT__rdata_q) 
                                         << 1U) | (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_trigger_regs__DOT__g_dbg_tmatch_reg__BRA__0__KET____DOT__u_tmatch_control_csr__DOT__rdata_q)) 
                                       >> (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_trigger_regs__DOT__u_tselect_csr__DOT__rdata_q)))));
        bufp->chgBit(oldp+1893,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_trigger_regs__DOT__g_dbg_tmatch_reg__BRA__0__KET____DOT__u_tmatch_control_csr__DOT__rdata_q));
        bufp->chgIData(oldp+1894,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_trigger_regs__DOT__g_dbg_tmatch_reg__BRA__0__KET____DOT__u_tmatch_value_csr__DOT__rdata_q),32);
        bufp->chgBit(oldp+1895,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_trigger_regs__DOT__g_dbg_tmatch_reg__BRA__1__KET____DOT__u_tmatch_control_csr__DOT__rdata_q));
        bufp->chgIData(oldp+1896,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_trigger_regs__DOT__g_dbg_tmatch_reg__BRA__1__KET____DOT__u_tmatch_value_csr__DOT__rdata_q),32);
        bufp->chgBit(oldp+1897,((1U & (~ (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mcountinhibit_q)))));
        bufp->chgQData(oldp+1898,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mcycle_counter_i__DOT__counter_q),64);
        bufp->chgQData(oldp+1900,((1ULL + vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mcycle_counter_i__DOT__counter_q)),64);
        bufp->chgCData(oldp+1902,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_cpuctrlsts_part_csr__DOT__rdata_q),8);
        bufp->chgIData(oldp+1903,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_dcsr_csr__DOT__rdata_q),32);
        bufp->chgCData(oldp+1904,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mcause_csr__DOT__rdata_q),7);
        bufp->chgIData(oldp+1905,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mie_csr__DOT__rdata_q),18);
        bufp->chgCData(oldp+1906,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mstack_cause_csr__DOT__rdata_q),7);
        bufp->chgCData(oldp+1907,((7U & ((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mstatus_csr__DOT__rdata_q) 
                                         >> 2U))),3);
        bufp->chgCData(oldp+1908,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mstack_csr__DOT__rdata_q),3);
        bufp->chgCData(oldp+1909,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mstatus_csr__DOT__rdata_q),6);
        bufp->chgQData(oldp+1910,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__imd_val_q_i[0]),34);
        bufp->chgQData(oldp+1912,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__imd_val_q_i[1]),34);
        bufp->chgQData(oldp+1914,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__multdiv_alu_operand_a),33);
        bufp->chgIData(oldp+1916,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_imd_val_q[0]),32);
        bufp->chgIData(oldp+1917,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_imd_val_q[1]),32);
        bufp->chgIData(oldp+1918,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__imd_val_q_i[0]),32);
        bufp->chgIData(oldp+1919,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__imd_val_q_i[1]),32);
        bufp->chgIData(oldp+1920,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__g_no_alu_rvb__DOT__unused_imd_val_q[0]),32);
        bufp->chgIData(oldp+1921,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__g_no_alu_rvb__DOT__unused_imd_val_q[1]),32);
        bufp->chgQData(oldp+1922,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__imd_val_q_i[0]),34);
        bufp->chgQData(oldp+1924,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__imd_val_q_i[1]),34);
        bufp->chgIData(oldp+1926,(((IData)(1U) << (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_counter_q))),32);
        bufp->chgIData(oldp+1927,((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__imd_val_q[1U])),32);
        bufp->chgIData(oldp+1928,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__op_numerator_q),32);
        bufp->chgIData(oldp+1929,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__op_quotient_q),32);
        bufp->chgBit(oldp+1930,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_valid));
        bufp->chgCData(oldp+1931,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_counter_q),5);
        bufp->chgBit(oldp+1932,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_hold));
        bufp->chgBit(oldp+1933,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_by_zero_q));
        bufp->chgBit(oldp+1934,((0U == (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__gen_mult_fast__DOT__mult_state_q))));
        bufp->chgCData(oldp+1935,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__md_state_q),3);
        bufp->chgCData(oldp+1936,((3U & (IData)((vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__imd_val_q[1U] 
                                                 >> 0x00000020U)))),2);
        bufp->chgCData(oldp+1937,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__gen_mult_fast__DOT__mult_state_q),2);
        bufp->chgQData(oldp+1938,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__imd_val_q_ex_o[0]),34);
        bufp->chgQData(oldp+1940,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__imd_val_q_ex_o[1]),34);
        bufp->chgBit(oldp+1942,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__branch_set_i));
        bufp->chgBit(oldp+1943,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__g_branch_set_flop__DOT__branch_set_raw_q));
        bufp->chgBit(oldp+1944,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__branch_jump_set_done_q));
        bufp->chgQData(oldp+1945,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__imd_val_q[0]),34);
        bufp->chgQData(oldp+1947,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__imd_val_q[1]),34);
        bufp->chgBit(oldp+1949,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__id_fsm_q));
        bufp->chgBit(oldp+1950,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__load_err_q));
        bufp->chgBit(oldp+1951,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__store_err_q));
        bufp->chgBit(oldp+1952,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__exc_req_q));
        bufp->chgBit(oldp+1953,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__illegal_insn_q));
        bufp->chgBit(oldp+1954,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__do_single_step_q));
        bufp->chgBit(oldp+1955,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__enter_debug_mode_prio_q));
        bufp->chgBit(oldp+1956,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ebreak_into_debug));
        bufp->chgBit(oldp+1957,((IData)((((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mstatus_csr__DOT__rdata_q) 
                                          >> 5U) | 
                                         (0U == (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__priv_lvl_q))))));
        bufp->chgCData(oldp+1958,((0x000000ffU & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mtvec_csr__DOT__rdata_q)),8);
        bufp->chgBit(oldp+1959,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__valid_req_q));
        bufp->chgBit(oldp+1960,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__discard_req_q));
        bufp->chgCData(oldp+1961,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__branch_discard_q),2);
        bufp->chgIData(oldp+1962,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__rdata_q),24);
        bufp->chgCData(oldp+1963,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__rdata_offset_q),2);
        bufp->chgCData(oldp+1964,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__data_type_q),2);
        bufp->chgBit(oldp+1965,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__data_sign_ext_q));
        bufp->chgBit(oldp+1966,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__data_we_q));
        bufp->chgBit(oldp+1967,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__handle_misaligned_q));
        bufp->chgBit(oldp+1968,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__pmp_err_q));
        bufp->chgBit(oldp+1969,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__lsu_err_q));
        bufp->chgBit(oldp+1970,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__fcov_mis_2_en_q));
        bufp->chgBit(oldp+1971,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__fcov_mis_bus_err_1_q));
    }
    if (VL_UNLIKELY(((vlSelfRef.__Vm_traceActivity[8U] 
                      | vlSelfRef.__Vm_traceActivity[15U])))) {
        bufp->chgIData(oldp+1972,(((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__multdiv_sel_i)
                                    ? ((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__div_sel_ex)
                                        ? (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__imd_val_q[0U])
                                        : (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__mac_res_d))
                                    : vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_result)),32);
        bufp->chgIData(oldp+1973,(((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__div_sel_ex)
                                    ? (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__imd_val_q[0U])
                                    : (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__mac_res_d))),32);
        bufp->chgBit(oldp+1974,(((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_valid) 
                                 | (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__mult_valid))));
        bufp->chgQData(oldp+1975,(((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__multdiv_sel_i)
                                    ? vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__multdiv_alu_operand_a
                                    : ((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__adder_op_a_shift1)
                                        ? (1ULL | ((QData)((IData)(
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
                                                ? (1ULL 
                                                   | ((QData)((IData)(
                                                                      (0x1fffffffU 
                                                                       & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__operand_a_i))) 
                                                      << 4U))
                                                : (1ULL 
                                                   | ((QData)((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__operand_a_i)) 
                                                      << 1U))))))),33);
        bufp->chgBit(oldp+1977,(((~ (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_by_zero_q)) 
                                 & ((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_sign_a) 
                                    ^ (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_sign_b)))));
        bufp->chgBit(oldp+1978,(((~ (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q)) 
                                 & (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__dret_insn_dec))));
        bufp->chgBit(oldp+1979,(((3U != (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__priv_lvl_q)) 
                                 & ((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__mret_insn_dec) 
                                    | ((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mstatus_csr__DOT__rdata_q) 
                                       & (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__wfi_insn_dec))))));
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[9U]))) {
        bufp->chgIData(oldp+1980,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__pc_id),32);
        bufp->chgIData(oldp+1981,((vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__instr_addr_q 
                                   << 1U)),32);
        bufp->chgCData(oldp+1982,((0x0000001fU & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                  >> 0x0000000fU))),5);
        bufp->chgCData(oldp+1983,((0x0000001fU & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                  >> 0x00000014U))),5);
        bufp->chgCData(oldp+1984,((0x0000001fU & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                  >> 7U))),5);
        bufp->chgIData(oldp+1985,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id),32);
        bufp->chgSData(oldp+1986,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_c_id),16);
        bufp->chgBit(oldp+1987,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_is_compressed_id));
        bufp->chgBit(oldp+1988,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_fetch_err));
        bufp->chgBit(oldp+1989,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_fetch_err_plus2));
        bufp->chgBit(oldp+1990,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__illegal_c_insn_id));
        bufp->chgSData(oldp+1991,((vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                   >> 0x00000014U)),12);
        bufp->chgBit(oldp+1992,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__dbg_csr));
        bufp->chgBit(oldp+1993,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__illegal_csr));
        bufp->chgCData(oldp+1994,((7U & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                         >> 0x00000019U))),3);
        bufp->chgIData(oldp+1995,((((- (IData)((vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                >> 0x0000001fU))) 
                                    << 0x0000000cU) 
                                   | (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                      >> 0x00000014U))),32);
        bufp->chgIData(oldp+1996,((((- (IData)((vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                >> 0x0000001fU))) 
                                    << 0x0000000cU) 
                                   | ((0x00000fe0U 
                                       & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                          >> 0x00000014U)) 
                                      | (0x0000001fU 
                                         & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                            >> 7U))))),32);
        bufp->chgIData(oldp+1997,((((- (IData)((vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                >> 0x0000001fU))) 
                                    << 0x0000000dU) 
                                   | ((((2U & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                               >> 0x0000001eU)) 
                                        | (1U & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                 >> 7U))) 
                                       << 0x0000000bU) 
                                      | ((0x000007e0U 
                                          & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                             >> 0x00000014U)) 
                                         | (0x0000001eU 
                                            & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                               >> 7U)))))),32);
        bufp->chgIData(oldp+1998,((0xfffff000U & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id)),32);
        bufp->chgIData(oldp+1999,((((- (IData)((vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                >> 0x0000001fU))) 
                                    << 0x00000014U) 
                                   | ((((0x000001feU 
                                         & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                            >> 0x0000000bU)) 
                                        | (1U & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                 >> 0x00000014U))) 
                                       << 0x0000000bU) 
                                      | (0x000007feU 
                                         & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                            >> 0x00000014U))))),32);
        bufp->chgIData(oldp+2000,((0x0000001fU & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                  >> 0x0000000fU))),32);
        bufp->chgBit(oldp+2001,(((0x0340U == (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                              >> 0x00000014U)) 
                                 | (0x0341U == (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                >> 0x00000014U)))));
        bufp->chgSData(oldp+2002,(((0x000003e0U & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                   >> 0x0000000aU)) 
                                   | (0x0000001fU & 
                                      (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                       >> 7U)))),10);
        bufp->chgCData(oldp+2003,((vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                   >> 0x0000001bU)),5);
        bufp->chgIData(oldp+2004,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__stored_addr_q),32);
        bufp->chgIData(oldp+2005,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fetch_addr_q),32);
        bufp->chgIData(oldp+2006,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__rdata_q[0U]),32);
        bufp->chgIData(oldp+2007,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__rdata_q[1U]),32);
        bufp->chgIData(oldp+2008,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__rdata_q[2U]),32);
        bufp->chgCData(oldp+2009,((((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__err_q__BRA__2__KET__) 
                                    << 2U) | (((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__err_q__BRA__1__KET__) 
                                               << 1U) 
                                              | (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__err_q__BRA__0__KET__)))),3);
        bufp->chgIData(oldp+2010,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__instr_addr_q),31);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[10U]))) {
        bufp->chgBit(oldp+2011,(vlSelfRef.top_verilator__DOT__uart_sys_rx));
        bufp->chgBit(oldp+2012,(vlSelfRef.top_verilator__DOT__u_uartdpi__DOT__txactive));
        bufp->chgIData(oldp+2013,(vlSelfRef.top_verilator__DOT__u_uartdpi__DOT__txcount),32);
        bufp->chgIData(oldp+2014,(vlSelfRef.top_verilator__DOT__u_uartdpi__DOT__txcyccount),32);
        bufp->chgSData(oldp+2015,(vlSelfRef.top_verilator__DOT__u_uartdpi__DOT__txsymbol),10);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[11U]))) {
        bufp->chgBit(oldp+2016,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__rvalid_o));
        bufp->chgBit(oldp+2017,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__haltreq));
        bufp->chgBit(oldp+2018,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__resumereq));
        bufp->chgBit(oldp+2019,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__selected_hart));
        bufp->chgCData(oldp+2020,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__resumereq),2);
        bufp->chgCData(oldp+2021,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__haltreq),2);
        bufp->chgBit(oldp+2022,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__rvalid_o));
        bufp->chgBit(oldp+2023,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__full_o));
        bufp->chgCData(oldp+2024,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_spi_host__DOT__state_d),2);
        bufp->chgCData(oldp+2025,((0x0000007fU & (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q))),7);
        bufp->chgBit(oldp+2026,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__fifo_incr_rptr));
        bufp->chgBit(oldp+2027,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__fifo_empty));
        bufp->chgCData(oldp+2028,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q),8);
        bufp->chgCData(oldp+2029,((0x00000080U & ((~ 
                                                   ((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q) 
                                                    >> 7U)) 
                                                  << 7U))),8);
        bufp->chgBit(oldp+2030,((1U & ((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q) 
                                       >> 7U))));
        bufp->chgSData(oldp+2031,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__rvalid_o),15);
        bufp->chgBit(oldp+2032,((1U & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mip 
                                       >> 0x00000011U))));
        bufp->chgBit(oldp+2033,((1U & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mip 
                                       >> 0x00000010U))));
        bufp->chgBit(oldp+2034,((1U & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mip 
                                       >> 0x0000000fU))));
        bufp->chgSData(oldp+2035,((0x00007fffU & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mip)),15);
        bufp->chgSData(oldp+2036,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__rx_baud_counter_q),9);
        bufp->chgSData(oldp+2037,(((0x01b1U == (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__rx_baud_counter_q))
                                    ? 0U : ((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__rx_start)
                                             ? 0x000000d9U
                                             : (0x000001ffU 
                                                & ((IData)(1U) 
                                                   + (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__rx_baud_counter_q)))))),9);
        bufp->chgBit(oldp+2038,((0x01b1U == (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__rx_baud_counter_q))));
        bufp->chgCData(oldp+2039,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__rx_state_d),2);
        bufp->chgCData(oldp+2040,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__rx_current_byte_q),8);
        bufp->chgCData(oldp+2041,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__rx_current_byte_d),8);
        bufp->chgBit(oldp+2042,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__rx_start));
        bufp->chgBit(oldp+2043,((1U & (~ (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__rvalid_o)))));
        bufp->chgCData(oldp+2044,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__tx_state_d),2);
        bufp->chgBit(oldp+2045,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__rvalid_o));
        bufp->chgBit(oldp+2046,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__full_o));
        bufp->chgBit(oldp+2047,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__full_o));
        bufp->chgCData(oldp+2048,((0x0000007fU & (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q))),7);
        bufp->chgBit(oldp+2049,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__fifo_incr_wptr));
        bufp->chgBit(oldp+2050,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__fifo_empty));
        bufp->chgCData(oldp+2051,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q),8);
        bufp->chgCData(oldp+2052,((0x00000080U & ((~ 
                                                   ((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q) 
                                                    >> 7U)) 
                                                  << 7U))),8);
        bufp->chgBit(oldp+2053,((1U & ((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q) 
                                       >> 7U))));
        bufp->chgBit(oldp+2054,(((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__fifo_incr_wptr) 
                                 & (0x7fU == (0x0000007fU 
                                              & (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q))))));
        bufp->chgCData(oldp+2055,((0x0000007fU & (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q))),7);
        bufp->chgBit(oldp+2056,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__fifo_incr_rptr));
        bufp->chgBit(oldp+2057,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__fifo_empty));
        bufp->chgCData(oldp+2058,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q),8);
        bufp->chgCData(oldp+2059,((0x00000080U & ((~ 
                                                   ((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q) 
                                                    >> 7U)) 
                                                  << 7U))),8);
        bufp->chgBit(oldp+2060,((1U & ((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q) 
                                       >> 7U))));
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[12U]))) {
        bufp->chgBit(oldp+2061,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__rready_i));
        bufp->chgBit(oldp+2062,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__wvalid_i));
        bufp->chgBit(oldp+2063,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__u_prim_sync_reqack__DOT__gen_rz_hs_protocol__DOT__dst_fsm_d));
        bufp->chgBit(oldp+2064,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__wr_en));
        bufp->chgBit(oldp+2065,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__src_req));
        bufp->chgBit(oldp+2066,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__u_prim_sync_reqack__DOT__gen_rz_hs_protocol__DOT__src_fsm_d));
        bufp->chgBit(oldp+2067,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__full_o));
        bufp->chgCData(oldp+2068,(((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__full_o)
                                    ? 2U : (3U & ((
                                                   (1U 
                                                    & ((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q) 
                                                       >> 1U)) 
                                                   == 
                                                   (1U 
                                                    & ((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q) 
                                                       >> 1U)))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q)) 
                                                   - 
                                                   (1U 
                                                    & (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q)))
                                                   : 
                                                  (((IData)(2U) 
                                                    - 
                                                    (1U 
                                                     & (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q))) 
                                                   + 
                                                   (1U 
                                                    & (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q))))))),2);
        bufp->chgBit(oldp+2069,((1U & (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q))));
        bufp->chgBit(oldp+2070,((1U & (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q))));
        bufp->chgBit(oldp+2071,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__gen_normal_fifo__DOT__fifo_incr_wptr));
        bufp->chgBit(oldp+2072,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__gen_normal_fifo__DOT__fifo_incr_rptr));
        bufp->chgBit(oldp+2073,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__gen_normal_fifo__DOT__fifo_empty));
        bufp->chgCData(oldp+2074,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q),2);
        bufp->chgCData(oldp+2075,((2U & ((~ ((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q) 
                                             >> 1U)) 
                                         << 1U))),2);
        bufp->chgCData(oldp+2076,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q),2);
        bufp->chgCData(oldp+2077,((2U & ((~ ((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q) 
                                             >> 1U)) 
                                         << 1U))),2);
        bufp->chgBit(oldp+2078,((1U & ((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q) 
                                       >> 1U))));
        bufp->chgBit(oldp+2079,((1U & ((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q) 
                                       >> 1U))));
        bufp->chgBit(oldp+2080,(((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__gen_normal_fifo__DOT__fifo_incr_wptr) 
                                 & (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q))));
        bufp->chgBit(oldp+2081,(((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__gen_normal_fifo__DOT__fifo_incr_rptr) 
                                 & (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q))));
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[13U]))) {
        bufp->chgIData(oldp+2082,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__host_rdata[0]),32);
        bufp->chgIData(oldp+2083,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__host_rdata[1]),32);
        bufp->chgBit(oldp+2084,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__host_err[0]));
        bufp->chgBit(oldp+2085,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__host_err[1]));
        bufp->chgIData(oldp+2086,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__in_rdata_i),32);
        bufp->chgIData(oldp+2087,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__rdata_o),32);
        bufp->chgIData(oldp+2088,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__host_rdata[1U]),32);
        bufp->chgQData(oldp+2089,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__word_mux),64);
        bufp->chgIData(oldp+2091,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_bus__DOT__host_rdata_o[0]),32);
        bufp->chgIData(oldp+2092,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_bus__DOT__host_rdata_o[1]),32);
        bufp->chgBit(oldp+2093,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_bus__DOT__host_err_o[0]));
        bufp->chgBit(oldp+2094,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_bus__DOT__host_err_o[1]));
        bufp->chgIData(oldp+2095,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_bus__DOT__device_rdata_i[0]),32);
        bufp->chgIData(oldp+2096,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_bus__DOT__device_rdata_i[1]),32);
        bufp->chgIData(oldp+2097,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_bus__DOT__device_rdata_i[2]),32);
        bufp->chgIData(oldp+2098,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_bus__DOT__device_rdata_i[3]),32);
        bufp->chgIData(oldp+2099,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_bus__DOT__device_rdata_i[4]),32);
        bufp->chgIData(oldp+2100,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_bus__DOT__device_rdata_i[5]),32);
        bufp->chgIData(oldp+2101,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_bus__DOT__device_rdata_i[6]),32);
        bufp->chgIData(oldp+2102,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_bus__DOT__device_rdata_i[7]),32);
        bufp->chgCData(oldp+2103,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_spi_host__DOT__current_byte_d),8);
        bufp->chgIData(oldp+2104,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__host_rdata[0U]),32);
        bufp->chgBit(oldp+2105,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__host_err[0U]));
        bufp->chgCData(oldp+2106,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__tx_current_byte_d),8);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[14U]))) {
        bufp->chgBit(oldp+2107,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__instr_valid_id_q));
        bufp->chgBit(oldp+2108,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__instr_first_cycle_i));
        bufp->chgBit(oldp+2109,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__lsu_addr_incr_req));
        bufp->chgBit(oldp+2110,((0U != (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__ls_fsm_cs))));
        bufp->chgCData(oldp+2111,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs),4);
        bufp->chgBit(oldp+2112,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__do_single_step_d));
        bufp->chgCData(oldp+2113,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__rdata_outstanding_q),2);
        bufp->chgCData(oldp+2114,(((2U & ((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__rdata_outstanding_q) 
                                          << 1U)) | 
                                   (1U & ((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__rdata_outstanding_q) 
                                          >> 1U)))),2);
        bufp->chgBit(oldp+2115,((1U & (~ (3U == (3U 
                                                 & (((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_q) 
                                                     >> 1U) 
                                                    | ((2U 
                                                        & ((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__rdata_outstanding_q) 
                                                           << 1U)) 
                                                       | (1U 
                                                          & ((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__rdata_outstanding_q) 
                                                             >> 1U))))))))));
        bufp->chgCData(oldp+2116,((3U & ((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_q) 
                                         >> 1U))),2);
        bufp->chgCData(oldp+2117,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_q),3);
        bufp->chgCData(oldp+2118,((((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__lowest_free_entry__BRA__2__KET__) 
                                    << 2U) | (((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__lowest_free_entry__BRA__1__KET__) 
                                               << 1U) 
                                              | (1U 
                                                 & (~ (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_q)))))),3);
        bufp->chgCData(oldp+2119,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__ls_fsm_cs),3);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[15U]))) {
        bufp->chgBit(oldp+2120,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__lsu_we));
        bufp->chgCData(oldp+2121,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__data_be),4);
        bufp->chgIData(oldp+2122,(((IData)((vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__adder_result_ext_o 
                                            >> 3U)) 
                                   << 2U)),32);
        bufp->chgIData(oldp+2123,(((1U & (IData)((vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__adder_result_ext_o 
                                                  >> 2U)))
                                    ? ((1U & (IData)(
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
                                    : ((1U & (IData)(
                                                     (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__adder_result_ext_o 
                                                      >> 1U)))
                                        ? ((vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_rf_rdata_b_ecc_buf__DOT__gen_generic__DOT__u_impl_generic__DOT__in_i 
                                            << 8U) 
                                           | (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_rf_rdata_b_ecc_buf__DOT__gen_generic__DOT__u_impl_generic__DOT__in_i 
                                              >> 0x00000018U))
                                        : vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_rf_rdata_b_ecc_buf__DOT__gen_generic__DOT__u_impl_generic__DOT__in_i))),32);
        bufp->chgIData(oldp+2124,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_rf_rdata_a_ecc_buf__DOT__gen_generic__DOT__u_impl_generic__DOT__in_i),32);
        bufp->chgIData(oldp+2125,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_rf_rdata_b_ecc_buf__DOT__gen_generic__DOT__u_impl_generic__DOT__in_i),32);
        bufp->chgQData(oldp+2126,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__imd_val_d_ex[0]),34);
        bufp->chgQData(oldp+2128,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__imd_val_d_ex[1]),34);
        bufp->chgBit(oldp+2130,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__icache_inval));
        bufp->chgBit(oldp+2131,(((~ (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__lsu_we)) 
                                 & (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT____VdfgRegularize_h68cd8b5a_0_5))));
        bufp->chgBit(oldp+2132,(((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT____VdfgRegularize_h68cd8b5a_0_5) 
                                 & (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__lsu_we))));
        bufp->chgIData(oldp+2133,((IData)((vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__adder_result_ext_o 
                                           >> 1U))),32);
        bufp->chgBit(oldp+2134,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__cmp_result));
        bufp->chgBit(oldp+2135,(((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT____VdfgRegularize_h68cd8b5a_0_6) 
                                 & (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__rf_ren_a_dec))));
        bufp->chgBit(oldp+2136,(((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT____VdfgRegularize_h68cd8b5a_0_6) 
                                 & (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__rf_ren_b_dec))));
        bufp->chgCData(oldp+2137,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operator),7);
        bufp->chgIData(oldp+2138,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__operand_a_i),32);
        bufp->chgIData(oldp+2139,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__operand_b_i),32);
        bufp->chgBit(oldp+2140,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__mult_sel_ex));
        bufp->chgBit(oldp+2141,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__div_sel_ex));
        bufp->chgCData(oldp+2142,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__multdiv_operator),2);
        bufp->chgCData(oldp+2143,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__multdiv_signed_mode),2);
        bufp->chgBit(oldp+2144,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_access));
        bufp->chgCData(oldp+2145,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_op_i),2);
        bufp->chgBit(oldp+2146,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__illegal_csr_insn_o));
        bufp->chgCData(oldp+2147,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__lsu_type),2);
        bufp->chgBit(oldp+2148,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__lsu_sign_ext));
        bufp->chgBit(oldp+2149,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__ex_valid_o));
        bufp->chgBit(oldp+2150,((0U != (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_trigger_regs__DOT__trigger_match))));
        bufp->chgBit(oldp+2151,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__illegal_insn_i));
        bufp->chgBit(oldp+2152,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_wr));
        bufp->chgCData(oldp+2153,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_trigger_regs__DOT__trigger_match),2);
        bufp->chgQData(oldp+2154,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__imd_val_d_o[0]),34);
        bufp->chgQData(oldp+2156,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__imd_val_d_o[1]),34);
        bufp->chgIData(oldp+2158,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_result),32);
        bufp->chgQData(oldp+2159,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__multdiv_alu_operand_b),33);
        bufp->chgQData(oldp+2161,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__adder_result_ext_o),34);
        bufp->chgBit(oldp+2163,((0U == (IData)((vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__adder_result_ext_o 
                                                >> 1U)))));
        bufp->chgBit(oldp+2164,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__multdiv_sel_i));
        bufp->chgQData(oldp+2165,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__multdiv_imd_val_d[0]),34);
        bufp->chgQData(oldp+2167,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__multdiv_imd_val_d[1]),34);
        bufp->chgIData(oldp+2169,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__operand_a_rev),32);
        bufp->chgQData(oldp+2170,((0x00000001ffffffffULL 
                                   & (~ ((QData)((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__operand_b_i)) 
                                         << 1U)))),33);
        bufp->chgBit(oldp+2172,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__adder_op_a_shift1));
        bufp->chgBit(oldp+2173,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__adder_op_a_shift2));
        bufp->chgBit(oldp+2174,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__adder_op_a_shift3));
        bufp->chgBit(oldp+2175,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__adder_op_b_negate));
        bufp->chgQData(oldp+2176,((0x00000001ffffffffULL 
                                   & ((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__multdiv_sel_i)
                                       ? vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__multdiv_alu_operand_b
                                       : ((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__adder_op_b_negate)
                                           ? (~ ((QData)((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__operand_b_i)) 
                                                 << 1U))
                                           : ((QData)((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__operand_b_i)) 
                                              << 1U))))),33);
        bufp->chgBit(oldp+2178,((1U & (((vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__operand_a_i 
                                         ^ vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__operand_b_i) 
                                        >> 0x0000001fU)
                                        ? ((vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__operand_a_i 
                                            >> 0x0000001fU) 
                                           ^ (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__cmp_signed))
                                        : (~ (IData)(
                                                     (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__adder_result_ext_o 
                                                      >> 0x00000020U)))))));
        bufp->chgBit(oldp+2179,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__cmp_signed));
        bufp->chgBit(oldp+2180,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_left));
        bufp->chgBit(oldp+2181,((8U == (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operator))));
        bufp->chgCData(oldp+2182,((0x0000003fU & ((IData)(0x20U) 
                                                  - 
                                                  (0x0000001fU 
                                                   & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__operand_b_i)))),6);
        bufp->chgIData(oldp+2183,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_operand),32);
        bufp->chgQData(oldp+2184,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result_ext_signed),33);
        bufp->chgBit(oldp+2186,((1U & (IData)((vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result_ext_signed 
                                               >> 0x00000020U)))));
        bufp->chgIData(oldp+2187,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result),32);
        bufp->chgIData(oldp+2188,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result_rev),32);
        bufp->chgCData(oldp+2189,(((0x00000010U & (
                                                   (~ 
                                                    (0U 
                                                     != 
                                                     (0x0000000fU 
                                                      & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__operand_b_i 
                                                         >> 0x00000018U)))) 
                                                   << 4U)) 
                                   | (0x0000000fU & 
                                      (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__operand_b_i 
                                       >> 0x00000018U)))),5);
        bufp->chgCData(oldp+2190,((0x0000001fU & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__operand_b_i 
                                                  >> 0x00000010U))),5);
        bufp->chgBit(oldp+2191,(((3U == (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operator)) 
                                 | (6U == (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operator)))));
        bufp->chgBit(oldp+2192,(((4U == (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operator)) 
                                 | (7U == (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operator)))));
        bufp->chgIData(oldp+2193,((vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__operand_a_i 
                                   | vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__operand_b_i)),32);
        bufp->chgIData(oldp+2194,((vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__operand_a_i 
                                   & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__operand_b_i)),32);
        bufp->chgIData(oldp+2195,((vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__operand_a_i 
                                   ^ vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__operand_b_i)),32);
        bufp->chgIData(oldp+2196,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__bwlogic_result),32);
        bufp->chgBit(oldp+2197,((1U & (((IData)(0x20U) 
                                        - (0x0000001fU 
                                           & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__operand_b_i)) 
                                       >> 5U))));
        bufp->chgQData(oldp+2198,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__imd_val_d_o[0]),34);
        bufp->chgQData(oldp+2200,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__imd_val_d_o[1]),34);
        bufp->chgQData(oldp+2202,((0x00000007ffffffffULL 
                                   & (VL_MULS_QQQ(35, 
                                                  (0x00000007ffffffffULL 
                                                   & VL_EXTENDS_QI(35,17, 
                                                                   (((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__sign_a) 
                                                                     << 0x00000010U) 
                                                                    | (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__gen_mult_fast__DOT__mult_op_a)))), 
                                                  (0x00000007ffffffffULL 
                                                   & VL_EXTENDS_QI(35,17, 
                                                                   (((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__sign_b) 
                                                                     << 0x00000010U) 
                                                                    | (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__gen_mult_fast__DOT__mult_op_b))))) 
                                      + VL_EXTENDS_QQ(35,34, vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__accum)))),35);
        bufp->chgQData(oldp+2204,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__accum),34);
        bufp->chgBit(oldp+2206,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__sign_a));
        bufp->chgBit(oldp+2207,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__sign_b));
        bufp->chgBit(oldp+2208,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__mult_valid));
        bufp->chgBit(oldp+2209,((0U != (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__multdiv_signed_mode))));
        bufp->chgQData(oldp+2210,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__mac_res_d),34);
        bufp->chgQData(oldp+2212,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__op_remainder_d),34);
        bufp->chgQData(oldp+2214,((0x00000003ffffffffULL 
                                   & ((0x00000007ffffffffULL 
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
                                         & VL_EXTENDS_QQ(35,34, vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__accum))))),34);
        bufp->chgBit(oldp+2216,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_sign_a));
        bufp->chgBit(oldp+2217,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_sign_b));
        bufp->chgBit(oldp+2218,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__is_greater_equal));
        bufp->chgIData(oldp+2219,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__op_denominator_d),32);
        bufp->chgIData(oldp+2220,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__op_numerator_d),32);
        bufp->chgIData(oldp+2221,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__op_quotient_d),32);
        bufp->chgIData(oldp+2222,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__next_remainder),32);
        bufp->chgQData(oldp+2223,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__next_quotient),33);
        bufp->chgCData(oldp+2225,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_counter_d),5);
        bufp->chgBit(oldp+2226,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__mult_hold));
        bufp->chgBit(oldp+2227,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_by_zero_d));
        bufp->chgCData(oldp+2228,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__md_state_d),3);
        bufp->chgBit(oldp+2229,((1U & (IData)((1ULL 
                                               & ((VL_MULS_QQQ(35, 
                                                               (0x00000007ffffffffULL 
                                                                & VL_EXTENDS_QI(35,17, 
                                                                                (((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__sign_a) 
                                                                                << 0x00000010U) 
                                                                                | (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__gen_mult_fast__DOT__mult_op_a)))), 
                                                               (0x00000007ffffffffULL 
                                                                & VL_EXTENDS_QI(35,17, 
                                                                                (((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__sign_b) 
                                                                                << 0x00000010U) 
                                                                                | (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__gen_mult_fast__DOT__mult_op_b))))) 
                                                   + 
                                                   VL_EXTENDS_QQ(35,34, vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__accum)) 
                                                  >> 0x00000022U))))));
        bufp->chgCData(oldp+2230,(((2U & ((IData)((vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__adder_result_ext_o 
                                                   >> 0x00000021U)) 
                                          << 1U)) | 
                                   (1U & (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__adder_result_ext_o)))),2);
        bufp->chgSData(oldp+2231,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__gen_mult_fast__DOT__mult_op_a),16);
        bufp->chgSData(oldp+2232,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__gen_mult_fast__DOT__mult_op_b),16);
        bufp->chgCData(oldp+2233,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__gen_mult_fast__DOT__mult_state_d),2);
        bufp->chgQData(oldp+2234,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__imd_val_d_ex_i[0]),34);
        bufp->chgQData(oldp+2236,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__imd_val_d_ex_i[1]),34);
        bufp->chgBit(oldp+2238,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn));
        bufp->chgBit(oldp+2239,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__ebrk_insn));
        bufp->chgBit(oldp+2240,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__mret_insn_dec));
        bufp->chgBit(oldp+2241,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__dret_insn_dec));
        bufp->chgBit(oldp+2242,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__ecall_insn_dec));
        bufp->chgBit(oldp+2243,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__wfi_insn_dec));
        bufp->chgBit(oldp+2244,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__exc_req_d));
        bufp->chgBit(oldp+2245,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__branch_in_dec));
        bufp->chgBit(oldp+2246,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__jump_in_dec));
        bufp->chgBit(oldp+2247,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__jump_set_dec));
        bufp->chgBit(oldp+2248,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__rf_wdata_sel));
        bufp->chgBit(oldp+2249,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__rf_we));
        bufp->chgBit(oldp+2250,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__rf_ren_a_dec));
        bufp->chgBit(oldp+2251,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__rf_ren_b_dec));
        bufp->chgCData(oldp+2252,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_op_a_mux_sel),2);
        bufp->chgCData(oldp+2253,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_op_a_mux_sel_dec),2);
        bufp->chgBit(oldp+2254,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_op_b_mux_sel_dec));
        bufp->chgBit(oldp+2255,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__imm_a_mux_sel));
        bufp->chgCData(oldp+2256,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__imm_b_mux_sel),3);
        bufp->chgCData(oldp+2257,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__imm_b_mux_sel_dec),3);
        bufp->chgBit(oldp+2258,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__mult_en_o));
        bufp->chgBit(oldp+2259,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__div_en_o));
        bufp->chgBit(oldp+2260,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__multdiv_en_dec));
        bufp->chgBit(oldp+2261,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__lsu_req_dec));
        bufp->chgBit(oldp+2262,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__illegal_insn_d));
        bufp->chgBit(oldp+2263,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__instr_fetch_err_prio));
        bufp->chgBit(oldp+2264,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__illegal_insn_prio));
        bufp->chgBit(oldp+2265,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ecall_insn_prio));
        bufp->chgBit(oldp+2266,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ebrk_insn_prio));
        bufp->chgBit(oldp+2267,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__store_err_prio));
        bufp->chgBit(oldp+2268,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__load_err_prio));
        bufp->chgBit(oldp+2269,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ecall_insn));
        bufp->chgBit(oldp+2270,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__mret_insn));
        bufp->chgBit(oldp+2271,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__dret_insn));
        bufp->chgBit(oldp+2272,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__wfi_insn));
        bufp->chgBit(oldp+2273,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ebrk_insn));
        bufp->chgBit(oldp+2274,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__instr_fetch_err));
        bufp->chgBit(oldp+2275,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__csr_illegal));
        bufp->chgCData(oldp+2276,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__csr_op),2);
        bufp->chgCData(oldp+2277,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode),7);
        bufp->chgCData(oldp+2278,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode_alu),7);
        bufp->chgCData(oldp+2279,((((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__err_d__BRA__1__KET__) 
                                    << 1U) | (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__err_d__BRA__0__KET__))),3);
        bufp->chgBit(oldp+2280,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__err));
        bufp->chgCData(oldp+2281,((3U & (IData)((vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__adder_result_ext_o 
                                                 >> 1U)))),2);
        bufp->chgBit(oldp+2282,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__split_misaligned_access));
        bufp->chgIData(oldp+2283,((~ vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_rf_rdata_a_ecc_buf__DOT__gen_generic__DOT__u_impl_generic__DOT__in_i)),32);
        bufp->chgIData(oldp+2284,((~ vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_rf_rdata_b_ecc_buf__DOT__gen_generic__DOT__u_impl_generic__DOT__in_i)),32);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[16U]))) {
        bufp->chgIData(oldp+2285,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_bus__DOT__host_addr_i[0]),32);
        bufp->chgIData(oldp+2286,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_bus__DOT__host_addr_i[1]),32);
        bufp->chgBit(oldp+2287,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_bus__DOT__host_we_i[0]));
        bufp->chgBit(oldp+2288,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_bus__DOT__host_we_i[1]));
        bufp->chgCData(oldp+2289,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_bus__DOT__host_be_i[0]),4);
        bufp->chgCData(oldp+2290,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_bus__DOT__host_be_i[1]),4);
        bufp->chgIData(oldp+2291,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_bus__DOT__host_wdata_i[0]),32);
        bufp->chgIData(oldp+2292,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_bus__DOT__host_wdata_i[1]),32);
        bufp->chgBit(oldp+2293,((0U != vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__irqs_i)));
        bufp->chgBit(oldp+2294,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__load_err_i));
        bufp->chgBit(oldp+2295,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__store_err_i));
        bufp->chgIData(oldp+2296,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__lsu_rdata_o),32);
        bufp->chgBit(oldp+2297,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__lsu_rdata_valid_o));
        bufp->chgIData(oldp+2298,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__rf_wdata_id_o),32);
        bufp->chgIData(oldp+2299,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_rdata_int),32);
        bufp->chgBit(oldp+2300,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__lsu_resp_valid_i));
        bufp->chgBit(oldp+2301,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__exc_req_lsu));
        bufp->chgBit(oldp+2302,((1U & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__irqs_i 
                                       >> 0x00000011U))));
        bufp->chgBit(oldp+2303,((1U & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__irqs_i 
                                       >> 0x00000010U))));
        bufp->chgBit(oldp+2304,((1U & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__irqs_i 
                                       >> 0x0000000fU))));
        bufp->chgSData(oldp+2305,((0x00007fffU & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__irqs_i)),15);
        bufp->chgBit(oldp+2306,((1U & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_wdata_int 
                                       >> 3U))));
        bufp->chgBit(oldp+2307,((1U & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_wdata_int 
                                       >> 7U))));
        bufp->chgBit(oldp+2308,((1U & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_wdata_int 
                                       >> 0x0000000bU))));
        bufp->chgSData(oldp+2309,((0x00007fffU & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_wdata_int 
                                                  >> 0x00000010U))),15);
        bufp->chgBit(oldp+2310,((1U & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_wdata_int 
                                       >> 6U))));
        bufp->chgCData(oldp+2311,((7U & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_wdata_int 
                                         >> 3U))),3);
        bufp->chgBit(oldp+2312,((1U & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_wdata_int 
                                       >> 2U))));
        bufp->chgBit(oldp+2313,((1U & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_wdata_int 
                                       >> 1U))));
        bufp->chgBit(oldp+2314,((1U & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_wdata_int)));
        bufp->chgIData(oldp+2315,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_wdata_int),32);
        bufp->chgBit(oldp+2316,((1U & ((2U <= vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_wdata_int) 
                                       | vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_wdata_int))));
        bufp->chgIData(oldp+2317,(((0x00020000U & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_wdata_int 
                                                   << 0x0000000eU)) 
                                   | ((0x00010000U 
                                       & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_wdata_int 
                                          << 9U)) | 
                                      ((0x00008000U 
                                        & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_wdata_int 
                                           << 4U)) 
                                       | (0x00007fffU 
                                          & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_wdata_int 
                                             >> 0x00000010U)))))),18);
        bufp->chgBit(oldp+2318,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__enter_debug_mode_prio_d));
        bufp->chgBit(oldp+2319,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__enter_debug_mode));
        bufp->chgBit(oldp+2320,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__handle_irq));
        bufp->chgCData(oldp+2321,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__mfip_id),4);
        bufp->chgIData(oldp+2322,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i),32);
        bufp->chgBit(oldp+2323,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__out_err_o));
        bufp->chgIData(oldp+2324,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__instr_decompressed),32);
        bufp->chgBit(oldp+2325,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__illegal_c_insn));
        bufp->chgBit(oldp+2326,((3U != (3U & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i))));
        bufp->chgIData(oldp+2327,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__rdata_d__BRA__31__03a0__KET__),32);
        bufp->chgIData(oldp+2328,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__rdata_d__BRA__63__03a32__KET__),32);
        bufp->chgIData(oldp+2329,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__rdata),32);
        bufp->chgBit(oldp+2330,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__aligned_is_compressed));
        bufp->chgBit(oldp+2331,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__unaligned_is_compressed));
        bufp->chgBit(oldp+2332,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__addr_incr_two));
        bufp->chgBit(oldp+2333,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__rdata_update));
        bufp->chgBit(oldp+2334,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__data_or_pmp_err));
        bufp->chgBit(oldp+2335,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__fcov_mis_rvalid_1));
        bufp->chgBit(oldp+2336,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__fcov_mis_rvalid_2));
        bufp->chgIData(oldp+2337,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__wb_stage_i__DOT__rf_wdata_wb_mux[0]),32);
        bufp->chgIData(oldp+2338,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__wb_stage_i__DOT__rf_wdata_wb_mux[1]),32);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[18U]))) {
        bufp->chgBit(oldp+2339,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__out_valid_o));
        bufp->chgBit(oldp+2340,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__in_valid_i));
        bufp->chgCData(oldp+2341,((((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_pushed__BRA__2__KET__) 
                                    << 2U) | (((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_pushed__BRA__1__KET__) 
                                               << 1U) 
                                              | (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_pushed__BRA__0__KET__)))),3);
        bufp->chgBit(oldp+2342,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid));
    }
    bufp->chgBit(oldp+2343,(vlSelfRef.clk_i));
    bufp->chgBit(oldp+2344,(vlSelfRef.rst_ni));
    bufp->chgBit(oldp+2345,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__host_req[0]));
    bufp->chgBit(oldp+2346,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__host_req[1]));
    bufp->chgIData(oldp+2347,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__device_rdata[0]),32);
    bufp->chgIData(oldp+2348,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__device_rdata[1]),32);
    bufp->chgIData(oldp+2349,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__device_rdata[2]),32);
    bufp->chgIData(oldp+2350,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__device_rdata[3]),32);
    bufp->chgIData(oldp+2351,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__device_rdata[4]),32);
    bufp->chgIData(oldp+2352,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__device_rdata[5]),32);
    bufp->chgIData(oldp+2353,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__device_rdata[6]),32);
    bufp->chgIData(oldp+2354,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__device_rdata[7]),32);
    bufp->chgBit(oldp+2355,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__core_instr_rvalid));
    bufp->chgBit(oldp+2356,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__rst_core_n));
    bufp->chgBit(oldp+2357,(((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__exception) 
                             | ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0) 
                                | (IData)((((0U == (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__state_q)) 
                                            & (~ (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1))) 
                                           & (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__cmd_valid_q)))))));
    bufp->chgCData(oldp+2358,(((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__exception)
                                ? 3U : ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0)
                                         ? 2U : ((2U 
                                                  & (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__state_q))
                                                  ? 0U
                                                  : 
                                                 ((1U 
                                                   & (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__state_q))
                                                   ? 0U
                                                   : 
                                                  ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1)
                                                    ? 0U
                                                    : 
                                                   ((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__cmd_valid_q)
                                                     ? 4U
                                                     : 0U))))))),3);
    bufp->chgIData(oldp+2359,(VL_SHIFTR_III(32,32,32, vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__host_rdata[1U], 
                                            VL_SHIFTL_III(32,32,32, (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_sba__DOT__be_idx_masked), 3U))),32);
    bufp->chgIData(oldp+2360,((IData)((((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__gen_normal_fifo__DOT__fifo_empty)
                                         ? 0ULL : (
                                                   (0x43U 
                                                    >= 
                                                    (0x0000007fU 
                                                     & ((IData)(0x00000022U) 
                                                        * 
                                                        (1U 
                                                         & (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q)))))
                                                    ? 
                                                   (0x00000003ffffffffULL 
                                                    & (((QData)((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__gen_normal_fifo__DOT__storage
                                                                        [
                                                                        (((IData)(0x00000021U) 
                                                                          + 
                                                                          (0x0000007fU 
                                                                           & ((IData)(0x00000022U) 
                                                                              * 
                                                                              (1U 
                                                                               & (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q))))) 
                                                                         >> 5U)])) 
                                                        << 
                                                        ((0U 
                                                          == 
                                                          (0x0000001fU 
                                                           & ((IData)(0x00000022U) 
                                                              * 
                                                              (1U 
                                                               & (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q)))))
                                                          ? 0x00000020U
                                                          : 
                                                         ((IData)(0x00000040U) 
                                                          - 
                                                          (0x0000001fU 
                                                           & ((IData)(0x00000022U) 
                                                              * 
                                                              (1U 
                                                               & (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q))))))) 
                                                       | (((0U 
                                                            == 
                                                            (0x0000001fU 
                                                             & ((IData)(0x00000022U) 
                                                                * 
                                                                (1U 
                                                                 & (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q)))))
                                                            ? 0ULL
                                                            : 
                                                           ((QData)((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__gen_normal_fifo__DOT__storage
                                                                            [
                                                                            (((IData)(0x0000001fU) 
                                                                              + 
                                                                              (0x0000007fU 
                                                                               & ((IData)(0x00000022U) 
                                                                                * 
                                                                                (1U 
                                                                                & (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q))))) 
                                                                             >> 5U)])) 
                                                            << 
                                                            ((IData)(0x00000020U) 
                                                             - 
                                                             (0x0000001fU 
                                                              & ((IData)(0x00000022U) 
                                                                 * 
                                                                 (1U 
                                                                  & (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q))))))) 
                                                          | ((QData)((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__gen_normal_fifo__DOT__storage
                                                                             [
                                                                             (3U 
                                                                              & (((IData)(0x00000022U) 
                                                                                * 
                                                                                (1U 
                                                                                & (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q))) 
                                                                                >> 5U))])) 
                                                             >> 
                                                             (0x0000001fU 
                                                              & ((IData)(0x00000022U) 
                                                                 * 
                                                                 (1U 
                                                                  & (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q))))))))
                                                    : 0ULL)) 
                                       >> 2U))),32);
    bufp->chgCData(oldp+2361,((3U & (IData)(((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__gen_normal_fifo__DOT__fifo_empty)
                                              ? 0ULL
                                              : ((0x43U 
                                                  >= 
                                                  (0x0000007fU 
                                                   & ((IData)(0x00000022U) 
                                                      * 
                                                      (1U 
                                                       & (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q)))))
                                                  ? 
                                                 (0x00000003ffffffffULL 
                                                  & (((QData)((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__gen_normal_fifo__DOT__storage
                                                                      [
                                                                      (((IData)(0x00000021U) 
                                                                        + 
                                                                        (0x0000007fU 
                                                                         & ((IData)(0x00000022U) 
                                                                            * 
                                                                            (1U 
                                                                             & (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q))))) 
                                                                       >> 5U)])) 
                                                      << 
                                                      ((0U 
                                                        == 
                                                        (0x0000001fU 
                                                         & ((IData)(0x00000022U) 
                                                            * 
                                                            (1U 
                                                             & (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q)))))
                                                        ? 0x00000020U
                                                        : 
                                                       ((IData)(0x00000040U) 
                                                        - 
                                                        (0x0000001fU 
                                                         & ((IData)(0x00000022U) 
                                                            * 
                                                            (1U 
                                                             & (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q))))))) 
                                                     | (((0U 
                                                          == 
                                                          (0x0000001fU 
                                                           & ((IData)(0x00000022U) 
                                                              * 
                                                              (1U 
                                                               & (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q)))))
                                                          ? 0ULL
                                                          : 
                                                         ((QData)((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__gen_normal_fifo__DOT__storage
                                                                          [
                                                                          (((IData)(0x0000001fU) 
                                                                            + 
                                                                            (0x0000007fU 
                                                                             & ((IData)(0x00000022U) 
                                                                                * 
                                                                                (1U 
                                                                                & (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q))))) 
                                                                           >> 5U)])) 
                                                          << 
                                                          ((IData)(0x00000020U) 
                                                           - 
                                                           (0x0000001fU 
                                                            & ((IData)(0x00000022U) 
                                                               * 
                                                               (1U 
                                                                & (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q))))))) 
                                                        | ((QData)((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__gen_normal_fifo__DOT__storage
                                                                           [
                                                                           (3U 
                                                                            & (((IData)(0x00000022U) 
                                                                                * 
                                                                                (1U 
                                                                                & (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q))) 
                                                                               >> 5U))])) 
                                                           >> 
                                                           (0x0000001fU 
                                                            & ((IData)(0x00000022U) 
                                                               * 
                                                               (1U 
                                                                & (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q))))))))
                                                  : 0ULL))))),2);
    bufp->chgBit(oldp+2362,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__combined_rstn_premux));
    bufp->chgBit(oldp+2363,(((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__dst_req) 
                             & (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__rready_i))));
    bufp->chgQData(oldp+2364,(((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__gen_normal_fifo__DOT__fifo_empty)
                                ? 0ULL : ((0x43U >= 
                                           (0x0000007fU 
                                            & ((IData)(0x00000022U) 
                                               * (1U 
                                                  & (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q)))))
                                           ? (0x00000003ffffffffULL 
                                              & (((QData)((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__gen_normal_fifo__DOT__storage
                                                                  [
                                                                  (((IData)(0x00000021U) 
                                                                    + 
                                                                    (0x0000007fU 
                                                                     & ((IData)(0x00000022U) 
                                                                        * 
                                                                        (1U 
                                                                         & (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q))))) 
                                                                   >> 5U)])) 
                                                  << 
                                                  ((0U 
                                                    == 
                                                    (0x0000001fU 
                                                     & ((IData)(0x00000022U) 
                                                        * 
                                                        (1U 
                                                         & (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q)))))
                                                    ? 0x00000020U
                                                    : 
                                                   ((IData)(0x00000040U) 
                                                    - 
                                                    (0x0000001fU 
                                                     & ((IData)(0x00000022U) 
                                                        * 
                                                        (1U 
                                                         & (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q))))))) 
                                                 | (((0U 
                                                      == 
                                                      (0x0000001fU 
                                                       & ((IData)(0x00000022U) 
                                                          * 
                                                          (1U 
                                                           & (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q)))))
                                                      ? 0ULL
                                                      : 
                                                     ((QData)((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__gen_normal_fifo__DOT__storage
                                                                      [
                                                                      (((IData)(0x0000001fU) 
                                                                        + 
                                                                        (0x0000007fU 
                                                                         & ((IData)(0x00000022U) 
                                                                            * 
                                                                            (1U 
                                                                             & (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q))))) 
                                                                       >> 5U)])) 
                                                      << 
                                                      ((IData)(0x00000020U) 
                                                       - 
                                                       (0x0000001fU 
                                                        & ((IData)(0x00000022U) 
                                                           * 
                                                           (1U 
                                                            & (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q))))))) 
                                                    | ((QData)((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__gen_normal_fifo__DOT__storage
                                                                       [
                                                                       (3U 
                                                                        & (((IData)(0x00000022U) 
                                                                            * 
                                                                            (1U 
                                                                             & (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q))) 
                                                                           >> 5U))])) 
                                                       >> 
                                                       (0x0000001fU 
                                                        & ((IData)(0x00000022U) 
                                                           * 
                                                           (1U 
                                                            & (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q))))))))
                                           : 0ULL))),34);
    bufp->chgBit(oldp+2366,(((~ ((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__u_prim_sync_reqack__DOT__gen_rz_hs_protocol__DOT__src_ack) 
                                 & (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__u_prim_sync_reqack__DOT__gen_rz_hs_protocol__DOT__src_fsm_q))) 
                             & ((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__wr_en) 
                                | (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__pending_q)))));
    bufp->chgBit(oldp+2367,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT____Vcellinp__u_combined_rstn_sync__rst_ni));
    bufp->chgBit(oldp+2368,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__u_combined_rstn_sync__DOT__intq));
    bufp->chgQData(oldp+2369,(((0x43U >= (0x0000007fU 
                                          & ((IData)(0x00000022U) 
                                             * (1U 
                                                & (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q)))))
                                ? (0x00000003ffffffffULL 
                                   & (((QData)((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__gen_normal_fifo__DOT__storage
                                                       [
                                                       (((IData)(0x00000021U) 
                                                         + 
                                                         (0x0000007fU 
                                                          & ((IData)(0x00000022U) 
                                                             * 
                                                             (1U 
                                                              & (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q))))) 
                                                        >> 5U)])) 
                                       << ((0U == (0x0000001fU 
                                                   & ((IData)(0x00000022U) 
                                                      * 
                                                      (1U 
                                                       & (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q)))))
                                            ? 0x00000020U
                                            : ((IData)(0x00000040U) 
                                               - (0x0000001fU 
                                                  & ((IData)(0x00000022U) 
                                                     * 
                                                     (1U 
                                                      & (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q))))))) 
                                      | (((0U == (0x0000001fU 
                                                  & ((IData)(0x00000022U) 
                                                     * 
                                                     (1U 
                                                      & (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q)))))
                                           ? 0ULL : 
                                          ((QData)((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__gen_normal_fifo__DOT__storage
                                                           [
                                                           (((IData)(0x0000001fU) 
                                                             + 
                                                             (0x0000007fU 
                                                              & ((IData)(0x00000022U) 
                                                                 * 
                                                                 (1U 
                                                                  & (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q))))) 
                                                            >> 5U)])) 
                                           << ((IData)(0x00000020U) 
                                               - (0x0000001fU 
                                                  & ((IData)(0x00000022U) 
                                                     * 
                                                     (1U 
                                                      & (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q))))))) 
                                         | ((QData)((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__gen_normal_fifo__DOT__storage
                                                            [
                                                            (3U 
                                                             & (((IData)(0x00000022U) 
                                                                 * 
                                                                 (1U 
                                                                  & (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q))) 
                                                                >> 5U))])) 
                                            >> (0x0000001fU 
                                                & ((IData)(0x00000022U) 
                                                   * 
                                                   (1U 
                                                    & (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q))))))))
                                : 0ULL)),34);
    bufp->chgIData(oldp+2371,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_ram__DOT__u_ram__DOT__gen_generic__DOT__u_impl_generic__DOT__simutil_set_mem__Vstatic__valid),32);
    bufp->chgIData(oldp+2372,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_ram__DOT__u_ram__DOT__gen_generic__DOT__u_impl_generic__DOT__simutil_get_mem__Vstatic__valid),32);
    bufp->chgCData(oldp+2373,(((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__fifo_empty)
                                ? 0U : ((0x03f7U >= 
                                         (0x000003f8U 
                                          & ((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q) 
                                             << 3U)))
                                         ? (0x000000ffU 
                                            & (((0U 
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
                                         : 0U))),8);
    bufp->chgCData(oldp+2374,(((0x03f7U >= (0x000003f8U 
                                            & ((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q) 
                                               << 3U)))
                                ? (0x000000ffU & ((
                                                   (0U 
                                                    == 
                                                    (0x00000018U 
                                                     & ((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q) 
                                                        << 3U)))
                                                    ? 0U
                                                    : 
                                                   (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage
                                                    [
                                                    (((IData)(7U) 
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
                                : 0U)),8);
    bufp->chgBit(oldp+2375,(((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__fifo_incr_wptr) 
                             & (0x7eU == (0x0000007fU 
                                          & (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q))))));
    bufp->chgBit(oldp+2376,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__data_req_out));
    bufp->chgBit(oldp+2377,((1U & (~ ((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__core_busy_q) 
                                      | ((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__haltreq) 
                                         | (0U != vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__irqs_i)))))));
    bufp->chgBit(oldp+2378,(((IData)(vlSelfRef.clk_i) 
                             & (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__core_clock_gate_i__DOT__gen_generic__DOT__u_impl_generic__DOT__en_latch))));
    bufp->chgCData(oldp+2379,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__core_busy_q),4);
    bufp->chgBit(oldp+2380,((1U & ((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__core_busy_q) 
                                   | ((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__haltreq) 
                                      | (0U != vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__irqs_i))))));
    bufp->chgBit(oldp+2381,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__core_clock_gate_i__DOT__gen_generic__DOT__u_impl_generic__DOT__en_latch));
    bufp->chgBit(oldp+2382,((1U & VL_REDXOR_32((7U 
                                                & ((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__core_busy_q) 
                                                   >> 1U))))));
    bufp->chgBit(oldp+2383,((IData)(((0U == (0x00000f80U 
                                             & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id)) 
                                     & (0U != (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__wb_stage_i__DOT__rf_wdata_wb_mux_we))))));
    bufp->chgBit(oldp+2384,((1U & ((~ (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__ebrk_insn)) 
                                   & ((~ (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__ecall_insn_dec)) 
                                      & ((~ (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn)) 
                                         & ((~ (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__illegal_csr_insn_o)) 
                                            & (~ (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_fetch_err)))))))));
    bufp->chgBit(oldp+2385,(((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__instr_executing_spec) 
                             & (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__mult_en_o))));
    bufp->chgBit(oldp+2386,(((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__instr_executing_spec) 
                             & (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__div_en_o))));
    bufp->chgBit(oldp+2387,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__lsu_req_o));
    bufp->chgBit(oldp+2388,((((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__lsu_req_o) 
                              | (0U != (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__ls_fsm_cs))) 
                             & (0U == (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__ls_fsm_ns)))));
    bufp->chgBit(oldp+2389,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__perf_load));
    bufp->chgBit(oldp+2390,(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__perf_store));
    bufp->chgBit(oldp+2391,(((0U == (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_op_i)) 
                             & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_8))));
    bufp->chgBit(oldp+2392,(((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_wr) 
                             & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_8))));
    bufp->chgIData(oldp+2393,(((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_mtvec_init_i)
                                ? 0x00100001U : (1U 
                                                 | (0xffffff00U 
                                                    & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_wdata_int)))),32);
    bufp->chgSData(oldp+2394,(((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mcountinhibit_we)
                                ? (0x00001ffdU & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_wdata_int)
                                : (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mcountinhibit_q))),13);
    bufp->chgIData(oldp+2395,((1U | (((((((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__div_wait_i) 
                                          << 3U) | 
                                         ((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mul_wait_i) 
                                          << 2U)) | 
                                        (((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__instr_ret_compressed_i) 
                                          << 1U) | (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__perf_tbranch))) 
                                       << 9U) | (((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__perf_branch) 
                                                  << 8U) 
                                                 | (((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__perf_jump) 
                                                     << 7U) 
                                                    | ((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__perf_store) 
                                                       << 6U)))) 
                                     | ((((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__perf_load) 
                                          << 5U) | 
                                         (((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__iside_wait_i) 
                                           << 4U) | 
                                          ((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__dside_wait_i) 
                                           << 3U))) 
                                        | ((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__instr_ret_i) 
                                           << 2U))))),32);
    bufp->chgBit(oldp+2396,(((3U & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                    >> 0x0000001cU)) 
                             > (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__priv_lvl_q))));
    bufp->chgBit(oldp+2397,(((~ (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q)) 
                             & (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__dbg_csr))));
    bufp->chgBit(oldp+2398,(((3U == (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                     >> 0x0000001eU)) 
                             & (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_wr))));
    bufp->chgBit(oldp+2399,(((~ ((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mcountinhibit_q) 
                                 >> 5U)) & (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__perf_load))));
    bufp->chgBit(oldp+2400,(((~ ((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mcountinhibit_q) 
                                 >> 6U)) & (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__perf_store))));
    bufp->chgBit(oldp+2401,(((~ ((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mcountinhibit_q) 
                                 >> 8U)) & (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__perf_branch))));
    bufp->chgBit(oldp+2402,(((~ ((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mcountinhibit_q) 
                                 >> 0x0000000bU)) & (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mul_wait_i))));
    bufp->chgBit(oldp+2403,(((~ ((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mcountinhibit_q) 
                                 >> 0x0000000cU)) & (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__div_wait_i))));
    bufp->chgBit(oldp+2404,(((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT____VdfgRegularize_h871b2533_0_0) 
                             & (0x07a0U == (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                            >> 0x00000014U)))));
    bufp->chgCData(oldp+2405,((0x0000001fU & ((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__instr_first_cycle_i)
                                               ? vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__operand_b_i
                                               : (- vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__operand_b_i)))),6);
    bufp->chgBit(oldp+2406,(((~ (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__instr_valid_clear_o)) 
                             & ((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__g_branch_set_flop__DOT__branch_set_raw_q) 
                                | ((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__branch_jump_set_done_q) 
                                   | (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__jump_set_raw))))));
    bufp->chgBit(oldp+2407,(((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__instr_valid_id_q) 
                             & ((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__lsu_req_dec) 
                                & ((~ (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__lsu_resp_valid_i)) 
                                   | (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__instr_first_cycle_i))))));
    bufp->chgBit(oldp+2408,(((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__lsu_req_dec)
                              ? (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__lsu_resp_valid_i)
                              : (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__ex_valid_o))));
    bufp->chgIData(oldp+2409,(((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__imm_a_mux_sel)
                                ? 0U : (0x0000001fU 
                                        & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                           >> 0x0000000fU)))),32);
    bufp->chgIData(oldp+2410,(((4U & (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__imm_b_mux_sel))
                                ? ((2U & (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__imm_b_mux_sel))
                                    ? 4U : ((1U & (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__imm_b_mux_sel))
                                             ? ((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_is_compressed_id)
                                                 ? 2U
                                                 : 4U)
                                             : (((- (IData)(
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
                                        ? (0xfffff000U 
                                           & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id)
                                        : (((- (IData)(
                                                       (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                        >> 0x0000001fU))) 
                                            << 0x0000000dU) 
                                           | ((((2U 
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
                                        ? (((- (IData)(
                                                       (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                        >> 0x0000001fU))) 
                                            << 0x0000000cU) 
                                           | ((0x00000fe0U 
                                               & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                  >> 0x00000014U)) 
                                              | (0x0000001fU 
                                                 & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                    >> 7U))))
                                        : (((- (IData)(
                                                       (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                        >> 0x0000001fU))) 
                                            << 0x0000000cU) 
                                           | (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                              >> 0x00000014U)))))),32);
    bufp->chgBit(oldp+2411,(((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_op_b_mux_sel_dec) 
                             | (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__lsu_addr_incr_req))));
    bufp->chgBit(oldp+2412,(((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_op_en_i) 
                             & ((~ ((0x0340U == (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                 >> 0x00000014U)) 
                                    | (0x0341U == (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                   >> 0x00000014U)))) 
                                & (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_wr)))));
    bufp->chgBit(oldp+2413,(((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT____VdfgRegularize_h68cd8b5a_0_4) 
                             & (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__cmp_result))));
    bufp->chgBit(oldp+2414,(((~ (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__cmp_result)) 
                             & (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT____VdfgRegularize_h68cd8b5a_0_4))));
    bufp->chgCData(oldp+2415,(((0U != (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_trigger_regs__DOT__trigger_match))
                                ? 2U : (((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ebrk_insn_prio) 
                                         & (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ebreak_into_debug))
                                         ? 1U : ((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__haltreq)
                                                  ? 3U
                                                  : 
                                                 ((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__do_single_step_d)
                                                   ? 4U
                                                   : 0U))))),3);
    bufp->chgBit(oldp+2416,(((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__mret_insn) 
                             | ((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__dret_insn) 
                                | ((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__exc_req_d) 
                                   | (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__exc_req_lsu))))));
    bufp->chgBit(oldp+2417,(((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__wfi_insn) 
                             | (((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_op_en_i) 
                                 & ((~ ((0x0340U == 
                                         (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                          >> 0x00000014U)) 
                                        | (0x0341U 
                                           == (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                               >> 0x00000014U)))) 
                                    & (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_wr))) 
                                & (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__instr_valid_id_q)))));
    bufp->chgBit(oldp+2418,((((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_op_en_i) 
                              & ((~ ((0x0340U == (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                  >> 0x00000014U)) 
                                     | (0x0341U == 
                                        (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                         >> 0x00000014U)))) 
                                 & (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_wr))) 
                             & (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__instr_valid_id_q))));
    bufp->chgBit(oldp+2419,((1U & ((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__haltreq) 
                                   | ((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q) 
                                      | (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_dcsr_csr__DOT__rdata_q 
                                         >> 2U))))));
    bufp->chgBit(oldp+2420,(((3U == (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs)) 
                             & ((4U == (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_ns)) 
                                & ((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__haltreq) 
                                   | ((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q) 
                                      | (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_dcsr_csr__DOT__rdata_q 
                                         >> 2U)))))));
    bufp->chgBit(oldp+2421,(((~ (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q)) 
                             & (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__haltreq))));
    bufp->chgBit(oldp+2422,(((~ (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__do_single_step_q)) 
                             & (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__do_single_step_d))));
    bufp->chgIData(oldp+2423,(((4U & (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__pc_mux_id))
                                ? ((2U & (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__pc_mux_id))
                                    ? 0x00100080U : 
                                   ((1U & (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__pc_mux_id))
                                     ? 0x00100080U : vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_depc_csr__DOT__rdata_q))
                                : ((2U & (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__pc_mux_id))
                                    ? ((1U & (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__pc_mux_id))
                                        ? vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mepc_csr__DOT__rdata_q
                                        : vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__exc_pc)
                                    : ((1U & (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__pc_mux_id))
                                        ? (IData)((vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__adder_result_ext_o 
                                                   >> 1U))
                                        : 0x00100080U)))),32);
    bufp->chgBit(oldp+2424,((1U & ((4U & (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__pc_mux_id))
                                    ? ((2U & (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__pc_mux_id))
                                        ? 0x00100080U
                                        : ((1U & (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__pc_mux_id))
                                            ? 0x00100080U
                                            : vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_depc_csr__DOT__rdata_q))
                                    : ((2U & (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__pc_mux_id))
                                        ? ((1U & (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__pc_mux_id))
                                            ? vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mepc_csr__DOT__rdata_q
                                            : vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__exc_pc)
                                        : ((1U & (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__pc_mux_id))
                                            ? (IData)(
                                                      (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__adder_result_ext_o 
                                                       >> 1U))
                                            : 0x00100080U))))));
    bufp->chgBit(oldp+2425,((vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__instr_addr_q 
                             & (((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_q) 
                                 >> 1U) & ((~ (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__err_q__BRA__0__KET__)) 
                                           & (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__err_q__BRA__1__KET__))))));
    bufp->chgBit(oldp+2426,(((~ (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__out_err_o)) 
                             & (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__out_valid_o))));
    bufp->chgCData(oldp+2427,(((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__core_instr_rvalid)
                                ? VL_SHIFTR_III(2,2,32, (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__rdata_outstanding_n), 1U)
                                : (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__rdata_outstanding_n))),2);
    bufp->chgCData(oldp+2428,(((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__core_instr_rvalid)
                                ? VL_SHIFTR_III(2,2,32, (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__branch_discard_n), 1U)
                                : (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__branch_discard_n))),2);
    bufp->chgIData(oldp+2429,((((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__pc_set)
                                 ? vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__in_addr_i
                                 : (0xfffffffcU & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fetch_addr_q)) 
                               + ((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT____VdfgRegularize_h78b13180_0_3) 
                                  << 2U))),32);
    bufp->chgCData(oldp+2430,((((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__entry_en__BRA__2__KET__) 
                                << 2U) | (((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__entry_en__BRA__1__KET__) 
                                           << 1U) | (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__entry_en__BRA__0__KET__)))),3);
    bufp->chgIData(oldp+2431,(((2U & (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_q))
                                ? ((vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__rdata_q[1U] 
                                    << 0x00000010U) 
                                   | (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__rdata 
                                      >> 0x00000010U))
                                : ((vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__in_rdata_i 
                                    << 0x00000010U) 
                                   | (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__rdata 
                                      >> 0x00000010U)))),32);
    bufp->chgBit(oldp+2432,(((2U & (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_q))
                              ? (((~ (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__unaligned_is_compressed)) 
                                  & (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__err_q__BRA__1__KET__)) 
                                 | (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__err_q__BRA__0__KET__))
                              : (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__err))));
    bufp->chgBit(oldp+2433,((((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_q) 
                              >> 1U) & ((~ (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__err_q__BRA__0__KET__)) 
                                        & (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__err_q__BRA__1__KET__)))));
    bufp->chgBit(oldp+2434,((1U & (((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_q) 
                                    >> 1U) | ((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_q) 
                                              & (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__in_valid_i))))));
    bufp->chgIData(oldp+2435,((0x7fffffffU & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__instr_addr_q 
                                              + ((2U 
                                                  & ((~ (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__addr_incr_two)) 
                                                     << 1U)) 
                                                 | (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__addr_incr_two))))),31);
    bufp->chgIData(oldp+2436,((0x7fffffffU & ((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__pc_set)
                                               ? (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__in_addr_i 
                                                  >> 1U)
                                               : (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__instr_addr_q 
                                                  + 
                                                  ((2U 
                                                    & ((~ (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__addr_incr_two)) 
                                                       << 1U)) 
                                                   | (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__addr_incr_two)))))),31);
    bufp->chgIData(oldp+2437,(((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__lsu_addr_incr_req)
                                ? ((IData)((vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__adder_result_ext_o 
                                            >> 3U)) 
                                   << 2U) : (IData)(
                                                    (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__adder_result_ext_o 
                                                     >> 1U)))),32);
    bufp->chgIData(oldp+2438,(((2U & (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__rdata_offset_q))
                                ? ((1U & (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__rdata_offset_q))
                                    ? ((vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__host_rdata[0U] 
                                        << 8U) | (0x000000ffU 
                                                  & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__rdata_q 
                                                     >> 0x00000010U)))
                                    : ((vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__host_rdata[0U] 
                                        << 0x00000010U) 
                                       | (0x0000ffffU 
                                          & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__rdata_q 
                                             >> 8U))))
                                : ((1U & (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__rdata_offset_q))
                                    ? ((vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__host_rdata[0U] 
                                        << 0x00000018U) 
                                       | vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__rdata_q)
                                    : vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__host_rdata[0U]))),32);
    bufp->chgIData(oldp+2439,(((2U & (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__rdata_offset_q))
                                ? ((1U & (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__rdata_offset_q))
                                    ? ((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__data_sign_ext_q)
                                        ? (((- (IData)(
                                                       (1U 
                                                        & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__host_rdata[0U] 
                                                           >> 7U)))) 
                                            << 0x00000010U) 
                                           | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3))
                                        : (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3))
                                    : ((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__data_sign_ext_q)
                                        ? (((- (IData)(
                                                       (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__host_rdata[0U] 
                                                        >> 0x0000001fU))) 
                                            << 0x00000010U) 
                                           | (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__host_rdata[0U] 
                                              >> 0x00000010U))
                                        : VL_SHIFTR_III(32,32,32, vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__host_rdata[0U], 0x00000010U)))
                                : ((1U & (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__rdata_offset_q))
                                    ? ((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__data_sign_ext_q)
                                        ? (((- (IData)(
                                                       (1U 
                                                        & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__host_rdata[0U] 
                                                           >> 0x00000017U)))) 
                                            << 0x00000010U) 
                                           | (0x0000ffffU 
                                              & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__host_rdata[0U] 
                                                 >> 8U)))
                                        : (0x0000ffffU 
                                           & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__host_rdata[0U] 
                                              >> 8U)))
                                    : ((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__data_sign_ext_q)
                                        ? (((- (IData)(
                                                       (1U 
                                                        & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__host_rdata[0U] 
                                                           >> 0x0000000fU)))) 
                                            << 0x00000010U) 
                                           | (0x0000ffffU 
                                              & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__host_rdata[0U]))
                                        : (0x0000ffffU 
                                           & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__host_rdata[0U]))))),32);
    bufp->chgIData(oldp+2440,(((2U & (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__rdata_offset_q))
                                ? ((1U & (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__rdata_offset_q))
                                    ? ((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__data_sign_ext_q)
                                        ? (((- (IData)(
                                                       (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__host_rdata[0U] 
                                                        >> 0x0000001fU))) 
                                            << 8U) 
                                           | (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__host_rdata[0U] 
                                              >> 0x00000018U))
                                        : VL_SHIFTR_III(32,32,32, vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__host_rdata[0U], 0x00000018U))
                                    : ((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__data_sign_ext_q)
                                        ? (((- (IData)(
                                                       (1U 
                                                        & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__host_rdata[0U] 
                                                           >> 0x00000017U)))) 
                                            << 8U) 
                                           | (0x000000ffU 
                                              & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__host_rdata[0U] 
                                                 >> 0x00000010U)))
                                        : (0x000000ffU 
                                           & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__host_rdata[0U] 
                                              >> 0x00000010U))))
                                : ((1U & (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__rdata_offset_q))
                                    ? ((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__data_sign_ext_q)
                                        ? (((- (IData)(
                                                       (1U 
                                                        & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__host_rdata[0U] 
                                                           >> 0x0000000fU)))) 
                                            << 8U) 
                                           | (0x000000ffU 
                                              & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__host_rdata[0U] 
                                                 >> 8U)))
                                        : (0x000000ffU 
                                           & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__host_rdata[0U] 
                                              >> 8U)))
                                    : ((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__data_sign_ext_q)
                                        ? (((- (IData)(
                                                       (1U 
                                                        & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__host_rdata[0U] 
                                                           >> 7U)))) 
                                            << 8U) 
                                           | (0x000000ffU 
                                              & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__host_rdata[0U]))
                                        : (0x000000ffU 
                                           & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__host_rdata[0U]))))),32);
    bufp->chgBit(oldp+2441,(((~ (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__fcov_mis_rvalid_2)) 
                             & ((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__fcov_mis_rvalid_1) 
                                | (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__fcov_mis_2_en_q)))));
    bufp->chgBit(oldp+2442,(((~ (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__fcov_mis_rvalid_2)) 
                             & (((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__fcov_mis_rvalid_1) 
                                 & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__host_err[0U]) 
                                | (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__fcov_mis_bus_err_1_q)))));
    bufp->chgBit(oldp+2443,(((~ (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__pmp_err_q)) 
                             & (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__exc_req_lsu))));
    bufp->chgBit(oldp+2444,(((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__exc_req_lsu) 
                             & (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__pmp_err_q))));
    bufp->chgBit(oldp+2445,(((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__lsu_req_o) 
                             & (0U == (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__ls_fsm_cs)))));
    bufp->chgBit(oldp+2446,(((2U == (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__ls_fsm_cs)) 
                             & ((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__data_req_out) 
                                & (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__lsu_addr_incr_req)))));
    bufp->chgBit(oldp+2447,((((2U == (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__ls_fsm_cs)) 
                              | (1U == (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__ls_fsm_cs))) 
                             & (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__pmp_err_q))));
    bufp->chgCData(oldp+2448,(((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__fifo_empty)
                                ? 0U : (0x000000ffU 
                                        & (((0U == 
                                             (0x00000018U 
                                              & ((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q) 
                                                 << 3U)))
                                             ? 0U : 
                                            (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__storage
                                             [(((IData)(7U) 
                                                + (0x000003f8U 
                                                   & ((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q) 
                                                      << 3U))) 
                                               >> 5U)] 
                                             << ((IData)(0x00000020U) 
                                                 - 
                                                 (0x00000018U 
                                                  & ((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q) 
                                                     << 3U))))) 
                                           | (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__storage
                                              [(0x0000001fU 
                                                & ((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q) 
                                                   >> 2U))] 
                                              >> (0x00000018U 
                                                  & ((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q) 
                                                     << 3U))))))),8);
    bufp->chgCData(oldp+2449,(((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__fifo_empty)
                                ? 0U : (0x000000ffU 
                                        & (((0U == 
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
                                                     << 3U))))))),8);
    bufp->chgCData(oldp+2450,((0x000000ffU & (((0U 
                                                == 
                                                (0x00000018U 
                                                 & ((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q) 
                                                    << 3U)))
                                                ? 0U
                                                : (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__storage
                                                   [
                                                   (((IData)(7U) 
                                                     + 
                                                     (0x000003f8U 
                                                      & ((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q) 
                                                         << 3U))) 
                                                    >> 5U)] 
                                                   << 
                                                   ((IData)(0x00000020U) 
                                                    - 
                                                    (0x00000018U 
                                                     & ((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q) 
                                                        << 3U))))) 
                                              | (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__storage
                                                 [(0x0000001fU 
                                                   & ((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q) 
                                                      >> 2U))] 
                                                 >> 
                                                 (0x00000018U 
                                                  & ((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q) 
                                                     << 3U)))))),8);
    bufp->chgCData(oldp+2451,((0x000000ffU & (((0U 
                                                == 
                                                (0x00000018U 
                                                 & ((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q) 
                                                    << 3U)))
                                                ? 0U
                                                : (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage
                                                   [
                                                   (((IData)(7U) 
                                                     + 
                                                     (0x000003f8U 
                                                      & ((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q) 
                                                         << 3U))) 
                                                    >> 5U)] 
                                                   << 
                                                   ((IData)(0x00000020U) 
                                                    - 
                                                    (0x00000018U 
                                                     & ((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q) 
                                                        << 3U))))) 
                                              | (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage
                                                 [(0x0000001fU 
                                                   & ((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q) 
                                                      >> 2U))] 
                                                 >> 
                                                 (0x00000018U 
                                                  & ((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q) 
                                                     << 3U)))))),8);
    bufp->chgBit(oldp+2452,(((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__fifo_incr_wptr) 
                             & (0x7fU == (0x0000007fU 
                                          & (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q))))));
}

void Vtop_verilator___024root__trace_cleanup(void* voidSelf, VerilatedFst* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_verilator___024root__trace_cleanup\n"); );
    // Body
    Vtop_verilator___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop_verilator___024root*>(voidSelf);
    Vtop_verilator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[3U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[4U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[5U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[6U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[7U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[8U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[9U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[10U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[11U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[12U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[13U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[14U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[15U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[16U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[17U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[18U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[19U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[20U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[21U] = 0U;
}
