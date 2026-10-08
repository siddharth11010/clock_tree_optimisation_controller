// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop_verilator.h for the primary calling header

#include "Vtop_verilator__pch.h"

void Vtop_verilator___024root___nba_comb__TOP__2(Vtop_verilator___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_verilator___024root___nba_comb__TOP__2\n"); );
    Vtop_verilator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
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
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__data_or_pmp_err 
        = ((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__lsu_err_q) 
           | (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__host_err[0U] 
              | (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__pmp_err_q)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3 = ((0x0000ff00U 
                                                 & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__host_rdata[0U] 
                                                    << 8U)) 
                                                | (0x000000ffU 
                                                   & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__rdata_q 
                                                      >> 0x00000010U)));
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
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__lsu_resp_valid_i 
        = ((vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__host_rvalid[0U] 
            | (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__pmp_err_q)) 
           & (0U == (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__ls_fsm_cs)));
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__enter_debug_mode_prio_d 
        = ((~ (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q)) 
           & ((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__haltreq) 
              | (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__do_single_step_d)));
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_bus__DOT__host_we_i[0U] 
        = vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__host_we[0U];
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_bus__DOT__host_we_i[1U] 
        = vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__host_we[1U];
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_bus__DOT__host_wdata_i[0U] 
        = vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__host_wdata[0U];
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_bus__DOT__host_wdata_i[1U] 
        = vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__host_wdata[1U];
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_bus__DOT__host_addr_i[0U] 
        = vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__host_addr[0U];
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_bus__DOT__host_addr_i[1U] 
        = vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__host_addr[1U];
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_bus__DOT__host_be_i[0U] 
        = vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__host_be[0U];
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_bus__DOT__host_be_i[1U] 
        = vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__host_be[1U];
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_wdata_int 
        = ((2U & (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_op_i))
            ? ((1U & (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_op_i))
                ? ((~ vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__operand_a_i) 
                   & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_rdata_int)
                : (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__operand_a_i 
                   | vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_rdata_int))
            : vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__operand_a_i);
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__rf_wdata_id_o 
        = ((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__rf_wdata_sel)
            ? vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_rdata_int
            : ((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__multdiv_sel_i)
                ? ((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__div_sel_ex)
                    ? (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__imd_val_q[0U])
                    : (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__mac_res_d))
                : vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_result));
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
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__lsu_rdata_valid_o 
        = ((0U == (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__ls_fsm_cs)) 
           & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__host_rvalid[0U] 
              & ((~ (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__data_or_pmp_err)) 
                 & (~ (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__data_we_q)))));
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
        vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__addr_incr_two 
            = vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__unaligned_is_compressed;
    } else {
        vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i 
            = vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__rdata;
        vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__out_err_o 
            = vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__err;
        vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__addr_incr_two 
            = vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__aligned_is_compressed;
    }
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
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__enter_debug_mode 
        = ((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__enter_debug_mode_prio_d) 
           | ((~ (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q)) 
              & (0U != (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_trigger_regs__DOT__trigger_match))));
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__wb_stage_i__DOT__rf_wdata_wb_mux[0U] 
        = vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__rf_wdata_id_o;
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__clk 
        = ((IData)(vlSelfRef.clk_i) & (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__core_clock_gate_i__DOT__gen_generic__DOT__u_impl_generic__DOT__en_latch));
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__wb_stage_i__DOT__rf_wdata_wb_mux[1U] 
        = vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__lsu_rdata_o;
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
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__exc_req_lsu 
        = ((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__load_err_i) 
           | (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__store_err_i));
}

void Vtop_verilator___024root___nba_sequent__TOP__13(Vtop_verilator___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_verilator___024root___nba_sequent__TOP__13\n"); );
    Vtop_verilator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__rst_core_n 
        = ((~ (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__dmcontrol_q 
               >> 1U)) & (IData)(vlSelfRef.rst_ni));
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__core_instr_rvalid 
        = ((IData)(vlSelfRef.rst_ni) && (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__instr_gnt_i));
}

void Vtop_verilator___024root___nba_comb__TOP__3(Vtop_verilator___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_verilator___024root___nba_comb__TOP__3\n"); );
    Vtop_verilator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__lsu_req_o 
        = ((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__instr_executing_spec) 
           & ((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__instr_first_cycle_i) 
              & (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__lsu_req_dec)));
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__perf_store = 0U;
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__perf_load = 0U;
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__data_req_out = 0U;
    if ((1U & (~ ((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__ls_fsm_cs) 
                  >> 2U)))) {
        if ((1U & (~ ((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__ls_fsm_cs) 
                      >> 1U)))) {
            if ((1U & (~ (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__ls_fsm_cs)))) {
                if (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__lsu_req_o) {
                    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__perf_store 
                        = vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__lsu_we;
                    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__perf_load 
                        = (1U & (~ (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__lsu_we)));
                }
            }
        }
        if ((2U & (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__ls_fsm_cs))) {
            vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__data_req_out = 1U;
        } else if ((1U & (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__ls_fsm_cs))) {
            vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__data_req_out = 1U;
        } else if (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__lsu_req_o) {
            vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__data_req_out = 1U;
        }
    }
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__host_req[0U] 
        = vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__data_req_out;
}

void Vtop_verilator___024root___nba_comb__TOP__4(Vtop_verilator___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_verilator___024root___nba_comb__TOP__4\n"); );
    Vtop_verilator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ top_verilator__DOT__u_ibex_demo_system__DOT__u_pwm__DOT____VdfgRegularize_hf75f81f8_0_0;
    top_verilator__DOT__u_ibex_demo_system__DOT__u_pwm__DOT____VdfgRegularize_hf75f81f8_0_0 = 0;
    // Body
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__id_fsm_d 
        = vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__id_fsm_q;
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__stall_alu = 0U;
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__rf_we_raw 
        = vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__rf_we;
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__stall_multdiv = 0U;
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__stall_jump = 0U;
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__stall_branch = 0U;
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__branch_set_raw_d = 0U;
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__jump_set_raw = 0U;
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__perf_branch = 0U;
    if (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__instr_executing_spec) {
        if (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__id_fsm_q) {
            if (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__multdiv_en_dec) {
                vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__rf_we_raw 
                    = ((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__rf_we) 
                       & (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__ex_valid_o));
            }
            if (((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__lsu_req_dec)
                  ? (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__lsu_resp_valid_i)
                  : (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__ex_valid_o))) {
                vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__id_fsm_d = 0U;
            } else {
                vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__stall_multdiv 
                    = vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__multdiv_en_dec;
                vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__stall_branch 
                    = vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__branch_in_dec;
                vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__stall_jump 
                    = vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__jump_in_dec;
            }
        } else {
            if (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__lsu_req_dec) {
                vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__id_fsm_d = 1U;
            } else if (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__multdiv_en_dec) {
                if ((1U & (~ (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__ex_valid_o)))) {
                    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__id_fsm_d = 1U;
                    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__rf_we_raw = 0U;
                    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__stall_multdiv = 1U;
                }
            } else if (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__branch_in_dec) {
                vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__id_fsm_d 
                    = (1U & (((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_cpuctrlsts_part_csr__DOT__rdata_q) 
                              >> 1U) | (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__cmp_result)));
                vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__stall_branch 
                    = (1U & ((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__cmp_result) 
                             | ((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_cpuctrlsts_part_csr__DOT__rdata_q) 
                                >> 1U)));
                vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__branch_set_raw_d 
                    = (1U & ((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__cmp_result) 
                             | ((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_cpuctrlsts_part_csr__DOT__rdata_q) 
                                >> 1U)));
                vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__perf_branch = 1U;
            } else if (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__jump_in_dec) {
                vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__id_fsm_d = 1U;
                vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__stall_jump = 1U;
                vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__jump_set_raw 
                    = vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__jump_set_dec;
            } else {
                vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__id_fsm_d = 0U;
            }
            if ((1U & (~ VL_ONEHOT_I(((((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__jump_in_dec) 
                                        << 3U) | ((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__branch_in_dec) 
                                                  << 2U)) 
                                      | (((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__multdiv_en_dec) 
                                          << 1U) | (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__lsu_req_dec))))))) {
                if ((0U != ((((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__jump_in_dec) 
                              << 3U) | ((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__branch_in_dec) 
                                        << 2U)) | (
                                                   ((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__multdiv_en_dec) 
                                                    << 1U) 
                                                   | (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__lsu_req_dec))))) {
                    if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                        VL_WRITEF_NX("[%0t] %%Error: ibex_id_stage.sv:796: Assertion failed in %Ntop_verilator.u_ibex_demo_system.u_top.u_ibex_core.id_stage_i: unique case, but multiple matches found for '1'h1'\n",0,
                                     64,VL_TIME_UNITED_Q(1),
                                     -12,vlSymsp->name());
                        VL_STOP_MT("../src/lowrisc_ibex_ibex_core_0.1/rtl/ibex_id_stage.sv", 796, "");
                    }
                }
            }
        }
        if ((1U & (~ VL_ONEHOT_I((((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__id_fsm_q) 
                                   << 1U) | (1U & (~ (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__id_fsm_q)))))))) {
            if ((0U != (((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__id_fsm_q) 
                         << 1U) | (1U & (~ (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__id_fsm_q)))))) {
                if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                    VL_WRITEF_NX("[%0t] %%Error: ibex_id_stage.sv:794: Assertion failed in %Ntop_verilator.u_ibex_demo_system.u_top.u_ibex_core.id_stage_i: unique case, but multiple matches found for '1'h%x'\n",0,
                                 64,VL_TIME_UNITED_Q(1),
                                 -12,vlSymsp->name(),
                                 1,(IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__id_fsm_q));
                    VL_STOP_MT("../src/lowrisc_ibex_ibex_core_0.1/rtl/ibex_id_stage.sv", 794, "");
                }
            }
        }
    }
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__pmp_err_d 
        = vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__pmp_err_q;
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__lsu_err_d 
        = vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__lsu_err_q;
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_bus__DOT__host_req_i[0U] 
        = vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__host_req[0U];
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_bus__DOT__host_req_i[1U] 
        = vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__host_req[1U];
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_bus__DOT__host_sel_valid = 0U;
    if (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__host_req[1U]) {
        vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_bus__DOT__host_sel_valid = 1U;
        vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_bus__DOT__host_sel_req = 0U;
        vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_bus__DOT__host_sel_req = 1U;
    } else {
        vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_bus__DOT__host_sel_req = 0U;
    }
    if (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__host_req[0U]) {
        vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_bus__DOT__host_sel_valid = 1U;
        vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_bus__DOT__host_sel_req = 0U;
    }
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__jump_set_i 
        = ((~ (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__branch_jump_set_done_q)) 
           & (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__jump_set_raw));
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mul_wait_i 
        = ((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__mult_en_o) 
           & (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__stall_multdiv));
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__div_wait_i 
        = ((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__div_en_o) 
           & (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__stall_multdiv));
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__stall_id_i 
        = (((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__instr_valid_id_q) 
            & ((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__lsu_req_dec) 
               & ((~ (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__lsu_resp_valid_i)) 
                  | (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__instr_first_cycle_i)))) 
           | ((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__stall_jump) 
              | ((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__stall_multdiv) 
                 | (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__stall_branch))));
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__host_gnt[0U] = 0U;
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__host_gnt[1U] = 0U;
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__host_gnt[vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_bus__DOT__host_sel_req] 
        = vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__host_req
        [vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_bus__DOT__host_sel_req];
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_bus__DOT__device_sel_valid = 0U;
    if (((vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__host_addr
          [vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_bus__DOT__host_sel_req] 
          & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__cfg_device_addr_mask[0U]) 
         == vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__cfg_device_addr_base[0U])) {
        vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_bus__DOT__device_sel_valid = 1U;
    }
    if (((vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__host_addr
          [vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_bus__DOT__host_sel_req] 
          & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__cfg_device_addr_mask[1U]) 
         == vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__cfg_device_addr_base[1U])) {
        vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_bus__DOT__device_sel_valid = 1U;
    }
    if (((vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__host_addr
          [vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_bus__DOT__host_sel_req] 
          & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__cfg_device_addr_mask[2U]) 
         == vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__cfg_device_addr_base[2U])) {
        vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_bus__DOT__device_sel_valid = 1U;
    }
    if (((vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__host_addr
          [vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_bus__DOT__host_sel_req] 
          & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__cfg_device_addr_mask[3U]) 
         == vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__cfg_device_addr_base[3U])) {
        vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_bus__DOT__device_sel_valid = 1U;
    }
    if (((vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__host_addr
          [vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_bus__DOT__host_sel_req] 
          & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__cfg_device_addr_mask[4U]) 
         == vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__cfg_device_addr_base[4U])) {
        vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_bus__DOT__device_sel_valid = 1U;
    }
    if (((vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__host_addr
          [vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_bus__DOT__host_sel_req] 
          & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__cfg_device_addr_mask[5U]) 
         == vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__cfg_device_addr_base[5U])) {
        vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_bus__DOT__device_sel_valid = 1U;
    }
    if (((vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__host_addr
          [vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_bus__DOT__host_sel_req] 
          & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__cfg_device_addr_mask[6U]) 
         == vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__cfg_device_addr_base[6U])) {
        vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_bus__DOT__device_sel_valid = 1U;
    }
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_bus__DOT__device_sel_req = 0U;
    if (((vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__host_addr
          [vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_bus__DOT__host_sel_req] 
          & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__cfg_device_addr_mask[0U]) 
         == vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__cfg_device_addr_base[0U])) {
        vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_bus__DOT__device_sel_req = 0U;
    }
    if (((vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__host_addr
          [vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_bus__DOT__host_sel_req] 
          & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__cfg_device_addr_mask[1U]) 
         == vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__cfg_device_addr_base[1U])) {
        vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_bus__DOT__device_sel_req = 1U;
    }
    if (((vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__host_addr
          [vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_bus__DOT__host_sel_req] 
          & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__cfg_device_addr_mask[2U]) 
         == vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__cfg_device_addr_base[2U])) {
        vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_bus__DOT__device_sel_req = 2U;
    }
    if (((vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__host_addr
          [vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_bus__DOT__host_sel_req] 
          & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__cfg_device_addr_mask[3U]) 
         == vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__cfg_device_addr_base[3U])) {
        vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_bus__DOT__device_sel_req = 3U;
    }
    if (((vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__host_addr
          [vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_bus__DOT__host_sel_req] 
          & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__cfg_device_addr_mask[4U]) 
         == vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__cfg_device_addr_base[4U])) {
        vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_bus__DOT__device_sel_req = 4U;
    }
    if (((vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__host_addr
          [vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_bus__DOT__host_sel_req] 
          & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__cfg_device_addr_mask[5U]) 
         == vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__cfg_device_addr_base[5U])) {
        vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_bus__DOT__device_sel_req = 5U;
    }
    if (((vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__host_addr
          [vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_bus__DOT__host_sel_req] 
          & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__cfg_device_addr_mask[6U]) 
         == vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__cfg_device_addr_base[6U])) {
        vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_bus__DOT__device_sel_req = 6U;
    }
    if (((vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__host_addr
          [vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_bus__DOT__host_sel_req] 
          & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__cfg_device_addr_mask[7U]) 
         == vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__cfg_device_addr_base[7U])) {
        vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_bus__DOT__device_sel_valid = 1U;
        vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_bus__DOT__device_sel_req = 7U;
    }
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_bus__DOT__host_gnt_o[0U] 
        = vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__host_gnt[0U];
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_bus__DOT__host_gnt_o[1U] 
        = vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__host_gnt[1U];
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__ctrl_update = 0U;
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__ls_fsm_ns 
        = vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__ls_fsm_cs;
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__handle_misaligned_d 
        = vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__handle_misaligned_q;
    if ((1U & (~ ((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__ls_fsm_cs) 
                  >> 2U)))) {
        if ((2U & (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__ls_fsm_cs))) {
            if ((1U & (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__ls_fsm_cs))) {
                if ((vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__host_gnt[0U] 
                     | (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__pmp_err_q))) {
                    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__ctrl_update = 1U;
                    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__handle_misaligned_d = 0U;
                }
            } else if ((vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__host_rvalid[0U] 
                        | (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__pmp_err_q))) {
                vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__handle_misaligned_d 
                    = (1U & (~ vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__host_gnt[0U]));
            } else if (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__host_gnt[0U]) {
                vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__handle_misaligned_d = 0U;
            }
        } else if ((1U & (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__ls_fsm_cs))) {
            if ((vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__host_gnt[0U] 
                 | (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__pmp_err_q))) {
                vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__ctrl_update = 1U;
                vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__handle_misaligned_d = 1U;
            }
        } else if (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__lsu_req_o) {
            if (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__host_gnt[0U]) {
                vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__ctrl_update = 1U;
                vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__handle_misaligned_d 
                    = vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__split_misaligned_access;
            }
        }
    }
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__addr_update = 0U;
    if ((4U & (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__ls_fsm_cs))) {
        if ((1U & (~ ((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__ls_fsm_cs) 
                      >> 1U)))) {
            if ((1U & (~ (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__ls_fsm_cs)))) {
                if (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__host_rvalid[0U]) {
                    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__pmp_err_d = 0U;
                    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__lsu_err_d 
                        = vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__host_err[0U];
                    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__addr_update 
                        = (1U & (~ vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__host_err[0U]));
                }
            }
        }
        if ((2U & (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__ls_fsm_cs))) {
            vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__ls_fsm_ns = 0U;
        } else if ((1U & (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__ls_fsm_cs))) {
            vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__ls_fsm_ns = 0U;
        } else if (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__host_rvalid[0U]) {
            vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__ls_fsm_ns = 0U;
        }
    } else if ((2U & (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__ls_fsm_cs))) {
        if ((1U & (~ (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__ls_fsm_cs)))) {
            if ((vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__host_rvalid[0U] 
                 | (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__pmp_err_q))) {
                vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__pmp_err_d = 0U;
                vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__lsu_err_d 
                    = (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__host_err[0U] 
                       | (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__pmp_err_q));
            }
        }
        if ((1U & (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__ls_fsm_cs))) {
            if ((vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__host_gnt[0U] 
                 | (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__pmp_err_q))) {
                vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__ls_fsm_ns = 0U;
                vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__addr_update 
                    = (1U & (~ (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__lsu_err_q)));
            }
        } else if ((vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__host_rvalid[0U] 
                    | (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__pmp_err_q))) {
            if (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__host_gnt[0U]) {
                vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__ls_fsm_ns = 0U;
                vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__addr_update 
                    = (1U & (~ (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__host_err[0U] 
                                | (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__pmp_err_q))));
            } else {
                vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__ls_fsm_ns = 3U;
                vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__addr_update = 0U;
            }
        } else if (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__host_gnt[0U]) {
            vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__ls_fsm_ns = 4U;
        }
    } else {
        if ((1U & (~ (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__ls_fsm_cs)))) {
            vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__pmp_err_d = 0U;
            if (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__lsu_req_o) {
                vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__pmp_err_d = 0U;
                vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__lsu_err_d = 0U;
            }
        }
        if ((1U & (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__ls_fsm_cs))) {
            if ((vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__host_gnt[0U] 
                 | (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__pmp_err_q))) {
                vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__ls_fsm_ns = 2U;
                vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__addr_update = 1U;
            }
        } else if (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__lsu_req_o) {
            if (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__host_gnt[0U]) {
                vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__ls_fsm_ns 
                    = ((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__split_misaligned_access)
                        ? 2U : 0U);
                vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__addr_update = 1U;
            } else {
                vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__ls_fsm_ns 
                    = ((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__split_misaligned_access)
                        ? 1U : 3U);
            }
        }
    }
    if (((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_bus__DOT__device_sel_valid) 
         & (0U == (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_bus__DOT__device_sel_req)))) {
        vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__device_wdata[0U] 
            = vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__host_wdata
            [vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_bus__DOT__host_sel_req];
        vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__device_be[0U] 
            = vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__host_be
            [vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_bus__DOT__host_sel_req];
        vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__device_addr[0U] 
            = vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__host_addr
            [vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_bus__DOT__host_sel_req];
    } else {
        vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__device_wdata[0U] = 0U;
        vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__device_be[0U] = 0U;
        vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__device_addr[0U] = 0U;
    }
    if (((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_bus__DOT__device_sel_valid) 
         & (1U == (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_bus__DOT__device_sel_req)))) {
        vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__device_wdata[1U] 
            = vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__host_wdata
            [vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_bus__DOT__host_sel_req];
        vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__device_be[1U] 
            = vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__host_be
            [vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_bus__DOT__host_sel_req];
        vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__device_addr[1U] 
            = vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__host_addr
            [vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_bus__DOT__host_sel_req];
    } else {
        vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__device_wdata[1U] = 0U;
        vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__device_be[1U] = 0U;
        vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__device_addr[1U] = 0U;
    }
    if (((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_bus__DOT__device_sel_valid) 
         & (2U == (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_bus__DOT__device_sel_req)))) {
        vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__device_wdata[2U] 
            = vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__host_wdata
            [vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_bus__DOT__host_sel_req];
        vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__device_be[2U] 
            = vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__host_be
            [vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_bus__DOT__host_sel_req];
        vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__device_addr[2U] 
            = vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__host_addr
            [vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_bus__DOT__host_sel_req];
    } else {
        vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__device_wdata[2U] = 0U;
        vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__device_be[2U] = 0U;
        vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__device_addr[2U] = 0U;
    }
    if (((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_bus__DOT__device_sel_valid) 
         & (3U == (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_bus__DOT__device_sel_req)))) {
        vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__device_wdata[3U] 
            = vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__host_wdata
            [vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_bus__DOT__host_sel_req];
        vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__device_be[3U] 
            = vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__host_be
            [vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_bus__DOT__host_sel_req];
        vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__device_addr[3U] 
            = vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__host_addr
            [vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_bus__DOT__host_sel_req];
    } else {
        vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__device_wdata[3U] = 0U;
        vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__device_be[3U] = 0U;
        vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__device_addr[3U] = 0U;
    }
    if (((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_bus__DOT__device_sel_valid) 
         & (4U == (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_bus__DOT__device_sel_req)))) {
        vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__device_wdata[4U] 
            = vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__host_wdata
            [vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_bus__DOT__host_sel_req];
        vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__device_be[4U] 
            = vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__host_be
            [vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_bus__DOT__host_sel_req];
        vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__device_addr[4U] 
            = vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__host_addr
            [vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_bus__DOT__host_sel_req];
    } else {
        vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__device_wdata[4U] = 0U;
        vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__device_be[4U] = 0U;
        vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__device_addr[4U] = 0U;
    }
    if (((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_bus__DOT__device_sel_valid) 
         & (5U == (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_bus__DOT__device_sel_req)))) {
        vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__device_wdata[5U] 
            = vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__host_wdata
            [vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_bus__DOT__host_sel_req];
        vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__device_be[5U] 
            = vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__host_be
            [vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_bus__DOT__host_sel_req];
        vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__device_addr[5U] 
            = vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__host_addr
            [vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_bus__DOT__host_sel_req];
    } else {
        vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__device_wdata[5U] = 0U;
        vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__device_be[5U] = 0U;
        vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__device_addr[5U] = 0U;
    }
    if (((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_bus__DOT__device_sel_valid) 
         & (6U == (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_bus__DOT__device_sel_req)))) {
        vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__device_wdata[6U] 
            = vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__host_wdata
            [vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_bus__DOT__host_sel_req];
        vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__device_be[6U] 
            = vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__host_be
            [vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_bus__DOT__host_sel_req];
        vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__device_addr[6U] 
            = vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__host_addr
            [vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_bus__DOT__host_sel_req];
    } else {
        vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__device_wdata[6U] = 0U;
        vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__device_be[6U] = 0U;
        vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__device_addr[6U] = 0U;
    }
    if (((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_bus__DOT__device_sel_valid) 
         & (7U == (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_bus__DOT__device_sel_req)))) {
        vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__device_wdata[7U] 
            = vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__host_wdata
            [vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_bus__DOT__host_sel_req];
        vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__device_be[7U] 
            = vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__host_be
            [vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_bus__DOT__host_sel_req];
        vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__device_addr[7U] 
            = vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__host_addr
            [vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_bus__DOT__host_sel_req];
    } else {
        vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__device_wdata[7U] = 0U;
        vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__device_be[7U] = 0U;
        vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__device_addr[7U] = 0U;
    }
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__device_we[0U] 
        = (((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_bus__DOT__device_sel_valid) 
            & (0U == (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_bus__DOT__device_sel_req))) 
           && vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__host_we
           [vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_bus__DOT__host_sel_req]);
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__device_we[1U] 
        = (((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_bus__DOT__device_sel_valid) 
            & (1U == (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_bus__DOT__device_sel_req))) 
           && vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__host_we
           [vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_bus__DOT__host_sel_req]);
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__device_we[2U] 
        = (((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_bus__DOT__device_sel_valid) 
            & (2U == (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_bus__DOT__device_sel_req))) 
           && vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__host_we
           [vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_bus__DOT__host_sel_req]);
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__device_we[3U] 
        = (((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_bus__DOT__device_sel_valid) 
            & (3U == (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_bus__DOT__device_sel_req))) 
           && vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__host_we
           [vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_bus__DOT__host_sel_req]);
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__device_we[4U] 
        = (((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_bus__DOT__device_sel_valid) 
            & (4U == (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_bus__DOT__device_sel_req))) 
           && vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__host_we
           [vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_bus__DOT__host_sel_req]);
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__device_we[5U] 
        = (((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_bus__DOT__device_sel_valid) 
            & (5U == (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_bus__DOT__device_sel_req))) 
           && vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__host_we
           [vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_bus__DOT__host_sel_req]);
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__device_we[6U] 
        = (((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_bus__DOT__device_sel_valid) 
            & (6U == (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_bus__DOT__device_sel_req))) 
           && vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__host_we
           [vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_bus__DOT__host_sel_req]);
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__device_we[7U] 
        = (((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_bus__DOT__device_sel_valid) 
            & (7U == (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_bus__DOT__device_sel_req))) 
           && vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__host_we
           [vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_bus__DOT__host_sel_req]);
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__device_req[0U] 
        = (((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_bus__DOT__device_sel_valid) 
            & (0U == (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_bus__DOT__device_sel_req))) 
           && vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__host_req
           [vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_bus__DOT__host_sel_req]);
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__device_req[1U] 
        = (((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_bus__DOT__device_sel_valid) 
            & (1U == (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_bus__DOT__device_sel_req))) 
           && vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__host_req
           [vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_bus__DOT__host_sel_req]);
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__device_req[2U] 
        = (((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_bus__DOT__device_sel_valid) 
            & (2U == (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_bus__DOT__device_sel_req))) 
           && vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__host_req
           [vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_bus__DOT__host_sel_req]);
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__device_req[3U] 
        = (((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_bus__DOT__device_sel_valid) 
            & (3U == (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_bus__DOT__device_sel_req))) 
           && vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__host_req
           [vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_bus__DOT__host_sel_req]);
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__device_req[4U] 
        = (((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_bus__DOT__device_sel_valid) 
            & (4U == (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_bus__DOT__device_sel_req))) 
           && vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__host_req
           [vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_bus__DOT__host_sel_req]);
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__device_req[5U] 
        = (((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_bus__DOT__device_sel_valid) 
            & (5U == (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_bus__DOT__device_sel_req))) 
           && vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__host_req
           [vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_bus__DOT__host_sel_req]);
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__device_req[6U] 
        = (((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_bus__DOT__device_sel_valid) 
            & (6U == (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_bus__DOT__device_sel_req))) 
           && vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__host_req
           [vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_bus__DOT__host_sel_req]);
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__device_req[7U] 
        = (((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_bus__DOT__device_sel_valid) 
            & (7U == (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_bus__DOT__device_sel_req))) 
           && vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__host_req
           [vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_bus__DOT__host_sel_req]);
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_bus__DOT__device_wdata_o[0U] 
        = vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__device_wdata[0U];
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_bus__DOT__device_wdata_o[1U] 
        = vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__device_wdata[1U];
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_bus__DOT__device_wdata_o[2U] 
        = vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__device_wdata[2U];
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_bus__DOT__device_wdata_o[3U] 
        = vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__device_wdata[3U];
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_bus__DOT__device_wdata_o[4U] 
        = vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__device_wdata[4U];
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_bus__DOT__device_wdata_o[5U] 
        = vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__device_wdata[5U];
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_bus__DOT__device_wdata_o[6U] 
        = vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__device_wdata[6U];
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_bus__DOT__device_wdata_o[7U] 
        = vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__device_wdata[7U];
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_bus__DOT__device_be_o[0U] 
        = vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__device_be[0U];
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_bus__DOT__device_be_o[1U] 
        = vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__device_be[1U];
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_bus__DOT__device_be_o[2U] 
        = vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__device_be[2U];
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_bus__DOT__device_be_o[3U] 
        = vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__device_be[3U];
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_bus__DOT__device_be_o[4U] 
        = vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__device_be[4U];
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_bus__DOT__device_be_o[5U] 
        = vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__device_be[5U];
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_bus__DOT__device_be_o[6U] 
        = vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__device_be[6U];
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_bus__DOT__device_be_o[7U] 
        = vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__device_be[7U];
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_ram__DOT__u_ram__DOT__gen_generic__DOT__u_impl_generic__DOT__a_wmask 
        = ((((0x000000ffU == (0x000000ffU & (- (IData)(
                                                       (1U 
                                                        & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__device_be[0U] 
                                                           >> 3U)))))) 
             << 3U) | ((0x000000ffU == (0x000000ffU 
                                        & (- (IData)(
                                                     (1U 
                                                      & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__device_be[0U] 
                                                         >> 2U)))))) 
                       << 2U)) | (((0x000000ffU == 
                                    (0x000000ffU & 
                                     (- (IData)((1U 
                                                 & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__device_be[0U] 
                                                    >> 1U)))))) 
                                   << 1U) | (0x000000ffU 
                                             == (0x000000ffU 
                                                 & (- (IData)(
                                                              (1U 
                                                               & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__device_be[0U])))))));
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_gpio__DOT__gp_o_d 
        = ((0x0000ff00U & (((2U & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__device_be[1U])
                             ? (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__device_wdata[1U] 
                                >> 8U) : ((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gp_o) 
                                          >> 8U)) << 8U)) 
           | (0x000000ffU & ((1U & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__device_be[1U])
                              ? vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__device_wdata[1U]
                              : (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gp_o))));
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_bus__DOT__device_we_o[0U] 
        = vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__device_we[0U];
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_bus__DOT__device_we_o[1U] 
        = vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__device_we[1U];
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_bus__DOT__device_we_o[2U] 
        = vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__device_we[2U];
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_bus__DOT__device_we_o[3U] 
        = vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__device_we[3U];
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_bus__DOT__device_we_o[4U] 
        = vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__device_we[4U];
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_bus__DOT__device_we_o[5U] 
        = vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__device_we[5U];
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_bus__DOT__device_we_o[6U] 
        = vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__device_we[6U];
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_bus__DOT__device_we_o[7U] 
        = vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__device_we[7U];
    if ((1U & (~ VL_ONEHOT_I(((((0x000cU == (0x000003ffU 
                                             & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__device_addr[4U])) 
                                << 3U) | ((8U == (0x000003ffU 
                                                  & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__device_addr[4U])) 
                                          << 2U)) | 
                              (((4U == (0x000003ffU 
                                        & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__device_addr[4U])) 
                                << 1U) | (0U == (0x000003ffU 
                                                 & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__device_addr[4U])))))))) {
        if ((0U != ((((0x000cU == (0x000003ffU & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__device_addr[4U])) 
                      << 3U) | ((8U == (0x000003ffU 
                                        & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__device_addr[4U])) 
                                << 2U)) | (((4U == 
                                             (0x000003ffU 
                                              & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__device_addr[4U])) 
                                            << 1U) 
                                           | (0U == 
                                              (0x000003ffU 
                                               & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__device_addr[4U])))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: timer.sv:117: Assertion failed in %Ntop_verilator.u_ibex_demo_system.u_timer: unique case, but multiple matches found for '10'h%x'\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),10,
                             (0x000003ffU & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__device_addr[4U]));
                VL_STOP_MT("../src/lowrisc_ibex_sim_shared_0/./rtl/timer.sv", 117, "");
            }
        }
    }
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_bus__DOT__device_addr_o[0U] 
        = vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__device_addr[0U];
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_bus__DOT__device_addr_o[1U] 
        = vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__device_addr[1U];
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_bus__DOT__device_addr_o[2U] 
        = vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__device_addr[2U];
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_bus__DOT__device_addr_o[3U] 
        = vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__device_addr[3U];
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_bus__DOT__device_addr_o[4U] 
        = vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__device_addr[4U];
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_bus__DOT__device_addr_o[5U] 
        = vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__device_addr[5U];
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_bus__DOT__device_addr_o[6U] 
        = vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__device_addr[6U];
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_bus__DOT__device_addr_o[7U] 
        = vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__device_addr[7U];
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_timer__DOT__error_d = 0U;
    if ((0U != (0x000003ffU & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__device_addr[4U]))) {
        if ((4U != (0x000003ffU & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__device_addr[4U]))) {
            if ((8U != (0x000003ffU & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__device_addr[4U]))) {
                if ((0x000cU != (0x000003ffU & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__device_addr[4U]))) {
                    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_timer__DOT__error_d = 1U;
                }
            }
        }
    }
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_timer__DOT__rdata_d 
        = ((0U == (0x000003ffU & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__device_addr[4U]))
            ? (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_timer__DOT__mtime_q)
            : ((4U == (0x000003ffU & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__device_addr[4U]))
                ? (IData)((vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_timer__DOT__mtime_q 
                           >> 0x20U)) : ((8U == (0x000003ffU 
                                                 & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__device_addr[4U]))
                                          ? (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_timer__DOT__mtimecmp_q)
                                          : ((0x000cU 
                                              == (0x000003ffU 
                                                  & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__device_addr[4U]))
                                              ? (IData)(
                                                        (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_timer__DOT__mtimecmp_q 
                                                         >> 0x20U))
                                              : 0U))));
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_bus__DOT__device_req_o[0U] 
        = vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__device_req[0U];
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_bus__DOT__device_req_o[1U] 
        = vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__device_req[1U];
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_bus__DOT__device_req_o[2U] 
        = vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__device_req[2U];
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_bus__DOT__device_req_o[3U] 
        = vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__device_req[3U];
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_bus__DOT__device_req_o[4U] 
        = vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__device_req[4U];
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_bus__DOT__device_req_o[5U] 
        = vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__device_req[5U];
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_bus__DOT__device_req_o[6U] 
        = vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__device_req[6U];
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_bus__DOT__device_req_o[7U] 
        = vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__device_req[7U];
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_gpio__DOT____VdfgRegularize_hc9315579_0_0 
        = ((~ vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__device_we[1U]) 
           & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__device_req[1U]);
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__device_rdata_d = 0U;
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__fifo_incr_wptr 
        = (((~ (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__under_rst)) 
            & (~ (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__full_o))) 
           & ((((4U == (0x00000fffU & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__device_addr[3U])) 
                & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__device_req[3U]) 
               & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__device_be[3U]) 
              & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__device_we[3U]));
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__fifo_incr_wptr 
        = (((~ (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__under_rst)) 
            & (~ (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__full_o))) 
           & (((vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__device_req[5U] 
                & (0U == (0x00000fffU & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__device_addr[5U]))) 
               & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__device_we[5U]) 
              & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__device_be[5U]));
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__rx_fifo_rready = 0U;
    if (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__device_req[3U]) {
        if ((1U & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__device_be[3U] 
                   & (~ vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__device_we[3U])))) {
            if ((0U == (0x00000fffU & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__device_addr[3U]))) {
                vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__device_rdata_d 
                    = ((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__fifo_empty)
                        ? 0U : (0x000000ffU & (((0U 
                                                 == 
                                                 (0x00000018U 
                                                  & ((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q) 
                                                     << 3U)))
                                                 ? 0U
                                                 : 
                                                (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__storage
                                                 [(
                                                   ((IData)(7U) 
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
                                                  [
                                                  (0x0000001fU 
                                                   & ((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q) 
                                                      >> 2U))] 
                                                  >> 
                                                  (0x00000018U 
                                                   & ((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q) 
                                                      << 3U))))));
                vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__rx_fifo_rready = 1U;
            } else {
                vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__device_rdata_d 
                    = ((4U == (0x00000fffU & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__device_addr[3U]))
                        ? 0U : ((8U == (0x00000fffU 
                                        & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__device_addr[3U]))
                                 ? (((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__full_o) 
                                     << 1U) | (1U & 
                                               (~ (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__rvalid_o))))
                                 : 0U));
            }
        }
    }
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_timer__DOT__timer_we 
        = (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__device_req[4U] 
           & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__device_we[4U]);
    top_verilator__DOT__u_ibex_demo_system__DOT__u_pwm__DOT____VdfgRegularize_hf75f81f8_0_0 
        = (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__device_req[2U] 
           & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__device_we[2U]);
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_set 
        = ((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__fifo_incr_wptr) 
           & (0x7fU == (0x0000007fU & (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q))));
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_set 
        = ((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__fifo_incr_wptr) 
           & (0x7eU == (0x0000007fU & (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q))));
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__fifo_incr_rptr 
        = ((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__rvalid_o) 
           & ((~ (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__under_rst)) 
              & (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__rx_fifo_rready)));
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_timer__DOT__mtime_d 
        = (((QData)((IData)((((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_timer__DOT__timer_we) 
                              & (4U == (0x000003ffU 
                                        & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__device_addr[4U])))
                              ? ((((0x0000ff00U & (
                                                   ((8U 
                                                     & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__device_be[4U])
                                                     ? 
                                                    (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__device_wdata[4U] 
                                                     >> 0x00000018U)
                                                     : (IData)(
                                                               (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_timer__DOT__mtime_q 
                                                                >> 0x00000038U))) 
                                                   << 8U)) 
                                   | (0x000000ffU & 
                                      ((4U & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__device_be[4U])
                                        ? (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__device_wdata[4U] 
                                           >> 0x00000010U)
                                        : (IData)((vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_timer__DOT__mtime_q 
                                                   >> 0x00000030U))))) 
                                  << 0x00000010U) | 
                                 ((0x0000ff00U & ((
                                                   (2U 
                                                    & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__device_be[4U])
                                                    ? 
                                                   (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__device_wdata[4U] 
                                                    >> 8U)
                                                    : (IData)(
                                                              (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_timer__DOT__mtime_q 
                                                               >> 0x00000028U))) 
                                                  << 8U)) 
                                  | (0x000000ffU & 
                                     ((1U & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__device_be[4U])
                                       ? vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__device_wdata[4U]
                                       : (IData)((vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_timer__DOT__mtime_q 
                                                  >> 0x00000020U))))))
                              : (IData)(((1ULL + vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_timer__DOT__mtime_q) 
                                         >> 0x00000020U))))) 
            << 0x00000020U) | (QData)((IData)((((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_timer__DOT__timer_we) 
                                                & (0U 
                                                   == 
                                                   (0x000003ffU 
                                                    & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__device_addr[4U])))
                                                ? (
                                                   (((0x0000ff00U 
                                                      & (((8U 
                                                           & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__device_be[4U])
                                                           ? 
                                                          (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__device_wdata[4U] 
                                                           >> 0x00000018U)
                                                           : (IData)(
                                                                     (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_timer__DOT__mtime_q 
                                                                      >> 0x00000018U))) 
                                                         << 8U)) 
                                                     | (0x000000ffU 
                                                        & ((4U 
                                                            & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__device_be[4U])
                                                            ? 
                                                           (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__device_wdata[4U] 
                                                            >> 0x00000010U)
                                                            : (IData)(
                                                                      (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_timer__DOT__mtime_q 
                                                                       >> 0x00000010U))))) 
                                                    << 0x00000010U) 
                                                   | ((0x0000ff00U 
                                                       & (((2U 
                                                            & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__device_be[4U])
                                                            ? 
                                                           (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__device_wdata[4U] 
                                                            >> 8U)
                                                            : (IData)(
                                                                      (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_timer__DOT__mtime_q 
                                                                       >> 8U))) 
                                                          << 8U)) 
                                                      | (0x000000ffU 
                                                         & ((1U 
                                                             & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__device_be[4U])
                                                             ? vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__device_wdata[4U]
                                                             : (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_timer__DOT__mtime_q)))))
                                                : ((IData)(1U) 
                                                   + (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_timer__DOT__mtime_q))))));
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_timer__DOT__mtimecmp_we 
        = ((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_timer__DOT__timer_we) 
           & (8U == (0x000003ffU & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__device_addr[4U])));
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_timer__DOT__mtimecmph_we 
        = ((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_timer__DOT__timer_we) 
           & (0x000cU == (0x000003ffU & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__device_addr[4U])));
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_pwm__DOT____VdfgRegularize_hf75f81f8_0_1 
        = ((IData)(top_verilator__DOT__u_ibex_demo_system__DOT__u_pwm__DOT____VdfgRegularize_hf75f81f8_0_0) 
           & (0U == (0x0000007fU & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__device_addr[2U] 
                                    >> 3U))));
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_pwm__DOT____VdfgRegularize_hf75f81f8_0_3 
        = ((IData)(top_verilator__DOT__u_ibex_demo_system__DOT__u_pwm__DOT____VdfgRegularize_hf75f81f8_0_0) 
           & (1U == (0x0000007fU & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__device_addr[2U] 
                                    >> 3U))));
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_pwm__DOT____VdfgRegularize_hf75f81f8_0_4 
        = ((IData)(top_verilator__DOT__u_ibex_demo_system__DOT__u_pwm__DOT____VdfgRegularize_hf75f81f8_0_0) 
           & (2U == (0x0000007fU & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__device_addr[2U] 
                                    >> 3U))));
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_pwm__DOT____VdfgRegularize_hf75f81f8_0_5 
        = ((IData)(top_verilator__DOT__u_ibex_demo_system__DOT__u_pwm__DOT____VdfgRegularize_hf75f81f8_0_0) 
           & (3U == (0x0000007fU & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__device_addr[2U] 
                                    >> 3U))));
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_pwm__DOT____VdfgRegularize_hf75f81f8_0_6 
        = ((IData)(top_verilator__DOT__u_ibex_demo_system__DOT__u_pwm__DOT____VdfgRegularize_hf75f81f8_0_0) 
           & (4U == (0x0000007fU & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__device_addr[2U] 
                                    >> 3U))));
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_pwm__DOT____VdfgRegularize_hf75f81f8_0_7 
        = ((IData)(top_verilator__DOT__u_ibex_demo_system__DOT__u_pwm__DOT____VdfgRegularize_hf75f81f8_0_0) 
           & (5U == (0x0000007fU & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__device_addr[2U] 
                                    >> 3U))));
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_pwm__DOT____VdfgRegularize_hf75f81f8_0_8 
        = ((IData)(top_verilator__DOT__u_ibex_demo_system__DOT__u_pwm__DOT____VdfgRegularize_hf75f81f8_0_0) 
           & (6U == (0x0000007fU & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__device_addr[2U] 
                                    >> 3U))));
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_pwm__DOT____VdfgRegularize_hf75f81f8_0_9 
        = ((IData)(top_verilator__DOT__u_ibex_demo_system__DOT__u_pwm__DOT____VdfgRegularize_hf75f81f8_0_0) 
           & (7U == (0x0000007fU & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__device_addr[2U] 
                                    >> 3U))));
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_pwm__DOT____VdfgRegularize_hf75f81f8_0_10 
        = ((IData)(top_verilator__DOT__u_ibex_demo_system__DOT__u_pwm__DOT____VdfgRegularize_hf75f81f8_0_0) 
           & (8U == (0x0000007fU & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__device_addr[2U] 
                                    >> 3U))));
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_pwm__DOT____VdfgRegularize_hf75f81f8_0_11 
        = ((IData)(top_verilator__DOT__u_ibex_demo_system__DOT__u_pwm__DOT____VdfgRegularize_hf75f81f8_0_0) 
           & (9U == (0x0000007fU & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__device_addr[2U] 
                                    >> 3U))));
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_pwm__DOT____VdfgRegularize_hf75f81f8_0_12 
        = ((IData)(top_verilator__DOT__u_ibex_demo_system__DOT__u_pwm__DOT____VdfgRegularize_hf75f81f8_0_0) 
           & (0x0aU == (0x0000007fU & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__device_addr[2U] 
                                       >> 3U))));
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_pwm__DOT____VdfgRegularize_hf75f81f8_0_13 
        = ((IData)(top_verilator__DOT__u_ibex_demo_system__DOT__u_pwm__DOT____VdfgRegularize_hf75f81f8_0_0) 
           & (0x0bU == (0x0000007fU & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__device_addr[2U] 
                                       >> 3U))));
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_set 
        = ((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__fifo_incr_rptr) 
           & (0x7fU == (0x0000007fU & (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q))));
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_timer__DOT__mtimecmp_d 
        = (((QData)((IData)(((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_timer__DOT__mtimecmph_we)
                              ? ((((0x0000ff00U & (
                                                   ((8U 
                                                     & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__device_be[4U])
                                                     ? 
                                                    (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__device_wdata[4U] 
                                                     >> 0x00000018U)
                                                     : (IData)(
                                                               (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_timer__DOT__mtimecmp_q 
                                                                >> 0x00000038U))) 
                                                   << 8U)) 
                                   | (0x000000ffU & 
                                      ((4U & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__device_be[4U])
                                        ? (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__device_wdata[4U] 
                                           >> 0x00000010U)
                                        : (IData)((vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_timer__DOT__mtimecmp_q 
                                                   >> 0x00000030U))))) 
                                  << 0x00000010U) | 
                                 ((0x0000ff00U & ((
                                                   (2U 
                                                    & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__device_be[4U])
                                                    ? 
                                                   (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__device_wdata[4U] 
                                                    >> 8U)
                                                    : (IData)(
                                                              (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_timer__DOT__mtimecmp_q 
                                                               >> 0x00000028U))) 
                                                  << 8U)) 
                                  | (0x000000ffU & 
                                     ((1U & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__device_be[4U])
                                       ? vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__device_wdata[4U]
                                       : (IData)((vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_timer__DOT__mtimecmp_q 
                                                  >> 0x00000020U))))))
                              : (IData)((vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_timer__DOT__mtimecmp_q 
                                         >> 0x00000020U))))) 
            << 0x00000020U) | (QData)((IData)(((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_timer__DOT__mtimecmp_we)
                                                ? (
                                                   (((0x0000ff00U 
                                                      & (((8U 
                                                           & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__device_be[4U])
                                                           ? 
                                                          (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__device_wdata[4U] 
                                                           >> 0x00000018U)
                                                           : (IData)(
                                                                     (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_timer__DOT__mtimecmp_q 
                                                                      >> 0x00000018U))) 
                                                         << 8U)) 
                                                     | (0x000000ffU 
                                                        & ((4U 
                                                            & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__device_be[4U])
                                                            ? 
                                                           (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__device_wdata[4U] 
                                                            >> 0x00000010U)
                                                            : (IData)(
                                                                      (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_timer__DOT__mtimecmp_q 
                                                                       >> 0x00000010U))))) 
                                                    << 0x00000010U) 
                                                   | ((0x0000ff00U 
                                                       & (((2U 
                                                            & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__device_be[4U])
                                                            ? 
                                                           (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__device_wdata[4U] 
                                                            >> 8U)
                                                            : (IData)(
                                                                      (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_timer__DOT__mtimecmp_q 
                                                                       >> 8U))) 
                                                          << 8U)) 
                                                      | (0x000000ffU 
                                                         & ((1U 
                                                             & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__device_be[4U])
                                                             ? vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__device_wdata[4U]
                                                             : (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_timer__DOT__mtimecmp_q)))))
                                                : (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_timer__DOT__mtimecmp_q)))));
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_timer__DOT__interrupt_d 
        = ((~ ((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_timer__DOT__mtimecmp_we) 
               | (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_timer__DOT__mtimecmph_we))) 
           & ((vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_timer__DOT__mtime_q 
               >= vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_timer__DOT__mtimecmp_q) 
              | (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_timer__DOT__interrupt_q)));
}

void Vtop_verilator___024root___nba_comb__TOP__5(Vtop_verilator___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_verilator___024root___nba_comb__TOP__5\n"); );
    Vtop_verilator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__in_valid_i 
        = ((~ (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__branch_discard_q)) 
           & (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__core_instr_rvalid));
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
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__out_valid_o 
        = (1U & ((1U & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__instr_addr_q)
                  ? ((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__unaligned_is_compressed)
                      ? (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid)
                      : (((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_q) 
                          >> 1U) | ((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_q) 
                                    & (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__in_valid_i))))
                  : (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid)));
}

void Vtop_verilator___024root___nba_comb__TOP__7(Vtop_verilator___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_verilator___024root___nba_comb__TOP__7\n"); );
    Vtop_verilator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__halted_d_aligned 
        = vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__halted_q;
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__resuming_d_aligned 
        = vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__resuming_q;
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__rdata_d 
        = vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__rdata_q;
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__data_bits 
        = vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__data_q;
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__rdata = 0ULL;
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__data_valid = 0U;
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__exception = 0U;
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__halted_aligned = 0U;
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__going = 0U;
    if (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__clear_resumeack) {
        vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__resuming_d_aligned 
            = ((~ ((IData)(1U) << (1U & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__dmcontrol_q 
                                         >> 0x00000010U)))) 
               & (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__resuming_d_aligned));
    }
    if (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__gen_rom_snd_scratch__DOT__i_debug_rom__DOT__req_i) {
        if ((vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__device_req[7U] 
             & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__device_we[7U])) {
            if ((0x0100U == (0x00000fffU & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__addr_i))) {
                vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__halted_aligned 
                    = ((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__halted_aligned) 
                       | (3U & ((IData)(1U) << (1U 
                                                & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__device_wdata[7U]))));
                vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__halted_d_aligned 
                    = ((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__halted_d_aligned) 
                       | (3U & ((IData)(1U) << (1U 
                                                & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__device_wdata[7U]))));
            } else if ((0x0108U == (0x00000fffU & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__addr_i))) {
                vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__going = 1U;
            } else if ((0x0110U == (0x00000fffU & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__addr_i))) {
                vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__halted_d_aligned 
                    = ((~ ((IData)(1U) << (1U & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__device_wdata[7U]))) 
                       & (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__halted_d_aligned));
                vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__resuming_d_aligned 
                    = ((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__resuming_d_aligned) 
                       | (3U & ((IData)(1U) << (1U 
                                                & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__device_wdata[7U]))));
            } else if ((0x0118U == (0x00000fffU & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__addr_i))) {
                vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__exception = 1U;
            } else if (((0x0380U <= (0x00000fffU & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__addr_i)) 
                        && (0x0387U >= (0x00000fffU 
                                        & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__addr_i)))) {
                vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__data_valid = 1U;
                if ((0U == ((0x000003ffU & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__addr_i 
                                            >> 2U)) 
                            - (IData)(0x000000e0U)))) {
                    if ((1U & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__device_be[7U])) {
                        vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__data_bits 
                            = ((0xffffffffffffff00ULL 
                                & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__data_bits) 
                               | (IData)((IData)((0x000000ffU 
                                                  & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__device_wdata[7U]))));
                    }
                    if ((2U & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__device_be[7U])) {
                        vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__data_bits 
                            = ((0xffffffffffff00ffULL 
                                & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__data_bits) 
                               | ((QData)((IData)((0x000000ffU 
                                                   & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__device_wdata[7U] 
                                                      >> 8U)))) 
                                  << 8U));
                    }
                    if ((4U & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__device_be[7U])) {
                        vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__data_bits 
                            = ((0xffffffffff00ffffULL 
                                & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__data_bits) 
                               | ((QData)((IData)((0x000000ffU 
                                                   & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__device_wdata[7U] 
                                                      >> 0x10U)))) 
                                  << 0x00000010U));
                    }
                    if ((8U & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__device_be[7U])) {
                        vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__data_bits 
                            = ((0xffffffff00ffffffULL 
                                & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__data_bits) 
                               | ((QData)((IData)((vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__device_wdata[7U] 
                                                   >> 0x18U))) 
                                  << 0x00000018U));
                    }
                }
                if ((1U == ((0x000003ffU & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__addr_i 
                                            >> 2U)) 
                            - (IData)(0x000000e0U)))) {
                    if ((1U & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__device_be[7U])) {
                        vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__data_bits 
                            = ((0xffffff00ffffffffULL 
                                & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__data_bits) 
                               | ((QData)((IData)((0x000000ffU 
                                                   & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__device_wdata[7U]))) 
                                  << 0x00000020U));
                    }
                    if ((2U & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__device_be[7U])) {
                        vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__data_bits 
                            = ((0xffff00ffffffffffULL 
                                & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__data_bits) 
                               | ((QData)((IData)((0x000000ffU 
                                                   & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__device_wdata[7U] 
                                                      >> 8U)))) 
                                  << 0x00000028U));
                    }
                    if ((4U & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__device_be[7U])) {
                        vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__data_bits 
                            = ((0xff00ffffffffffffULL 
                                & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__data_bits) 
                               | ((QData)((IData)((0x000000ffU 
                                                   & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__device_wdata[7U] 
                                                      >> 0x10U)))) 
                                  << 0x00000030U));
                    }
                    if ((8U & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__device_be[7U])) {
                        vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__data_bits 
                            = ((0x00ffffffffffffffULL 
                                & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__data_bits) 
                               | ((QData)((IData)((vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__device_wdata[7U] 
                                                   >> 0x18U))) 
                                  << 0x00000038U));
                    }
                }
            }
            if ((1U & (~ VL_ONEHOT_I((((((0x0380U <= 
                                          (0x00000fffU 
                                           & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__addr_i)) 
                                         & (0x0387U 
                                            >= (0x00000fffU 
                                                & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__addr_i))) 
                                        << 4U) | ((
                                                   (0x0118U 
                                                    == 
                                                    (0x00000fffU 
                                                     & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__addr_i)) 
                                                   << 3U) 
                                                  | ((0x0110U 
                                                      == 
                                                      (0x00000fffU 
                                                       & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__addr_i)) 
                                                     << 2U))) 
                                      | (((0x0108U 
                                           == (0x00000fffU 
                                               & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__addr_i)) 
                                          << 1U) | 
                                         (0x0100U == 
                                          (0x00000fffU 
                                           & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__addr_i)))))))) {
                if ((0U != (((((0x0380U <= (0x00000fffU 
                                            & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__addr_i)) 
                               & (0x0387U >= (0x00000fffU 
                                              & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__addr_i))) 
                              << 4U) | (((0x0118U == 
                                          (0x00000fffU 
                                           & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__addr_i)) 
                                         << 3U) | (
                                                   (0x0110U 
                                                    == 
                                                    (0x00000fffU 
                                                     & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__addr_i)) 
                                                   << 2U))) 
                            | (((0x0108U == (0x00000fffU 
                                             & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__addr_i)) 
                                << 1U) | (0x0100U == 
                                          (0x00000fffU 
                                           & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__addr_i)))))) {
                    if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                        VL_WRITEF_NX("[%0t] %%Error: dm_mem.sv:249: Assertion failed in %Ntop_verilator.u_ibex_demo_system.gen_dm_top.u_dm_top.i_dm_mem.p_rw_logic: unique case, but multiple matches found for '12'h%x'\n",0,
                                     64,VL_TIME_UNITED_Q(1),
                                     -12,vlSymsp->name(),
                                     12,(0x00000fffU 
                                         & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__addr_i));
                        VL_STOP_MT("../src/pulp_riscv_debug_module_0/src/vendor/pulp_riscv_dbg/src/dm_mem.sv", 249, "");
                    }
                }
            }
        } else {
            if ((0x0300U == (0x00000fffU & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__addr_i))) {
                if ((1U & ((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__resumereq) 
                           >> (1U & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__device_wdata[7U])))) {
                    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__rdata_d = 0x000000005080006fULL;
                }
                if (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__cmdbusy) {
                    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__rdata_d 
                        = ((IData)((0x00040000U == 
                                    (0xff060000U & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__command_q)))
                            ? 0x000000000600006fULL
                            : 0x000000000380006fULL);
                }
            } else if (((0x0380U <= (0x00000fffU & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__addr_i)) 
                        && (0x0387U >= (0x00000fffU 
                                        & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__addr_i)))) {
                vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__rdata_d 
                    = (((QData)((IData)((vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__data_q 
                                         >> (0x0000003fU 
                                             & VL_SHIFTL_III(6,32,32, 
                                                             (1U 
                                                              & ((IData)(1U) 
                                                                 + 
                                                                 (0x000001ffU 
                                                                  & VL_SHIFTL_III(9,9,32, 
                                                                                ((vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__addr_i 
                                                                                >> 3U) 
                                                                                - (IData)(0x0070U)), 1U)))), 5U))))) 
                        << 0x00000020U) | (QData)((IData)(
                                                          (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__data_q 
                                                           >> 
                                                           (0x0000003fU 
                                                            & VL_SHIFTL_III(6,32,32, 
                                                                            (1U 
                                                                             & VL_SHIFTL_III(9,9,32, 
                                                                                ((vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__addr_i 
                                                                                >> 3U) 
                                                                                - (IData)(0x0070U)), 1U)), 5U))))));
            } else if (((0x0360U <= (0x00000fffU & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__addr_i)) 
                        && (0x037fU >= (0x00000fffU 
                                        & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__addr_i)))) {
                vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__rdata_d 
                    = (((QData)((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__progbuf_q
                                        [(((IData)(0x0000003fU) 
                                           + (0x000000ffU 
                                              & VL_SHIFTL_III(8,32,32, 
                                                              (7U 
                                                               & ((vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__addr_i 
                                                                   >> 3U) 
                                                                  - (IData)(4U))), 6U))) 
                                          >> 5U)])) 
                        << ((0U == (0x0000001fU & VL_SHIFTL_III(8,32,32, 
                                                                (7U 
                                                                 & ((vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__addr_i 
                                                                     >> 3U) 
                                                                    - (IData)(4U))), 6U)))
                             ? 0x00000020U : ((IData)(0x00000040U) 
                                              - (0x0000001fU 
                                                 & VL_SHIFTL_III(8,32,32, 
                                                                 (7U 
                                                                  & ((vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__addr_i 
                                                                      >> 3U) 
                                                                     - (IData)(4U))), 6U))))) 
                       | (((0U == (0x0000001fU & VL_SHIFTL_III(8,32,32, 
                                                               (7U 
                                                                & ((vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__addr_i 
                                                                    >> 3U) 
                                                                   - (IData)(4U))), 6U)))
                            ? 0ULL : ((QData)((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__progbuf_q
                                                      [
                                                      (((IData)(0x0000001fU) 
                                                        + 
                                                        (0x000000ffU 
                                                         & VL_SHIFTL_III(8,32,32, 
                                                                         (7U 
                                                                          & ((vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__addr_i 
                                                                              >> 3U) 
                                                                             - (IData)(4U))), 6U))) 
                                                       >> 5U)])) 
                                      << ((IData)(0x00000020U) 
                                          - (0x0000001fU 
                                             & VL_SHIFTL_III(8,32,32, 
                                                             (7U 
                                                              & ((vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__addr_i 
                                                                  >> 3U) 
                                                                 - (IData)(4U))), 6U))))) 
                          | ((QData)((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__progbuf_q
                                             [(7U & 
                                               (VL_SHIFTL_III(8,32,32, 
                                                              (7U 
                                                               & ((vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__addr_i 
                                                                   >> 3U) 
                                                                  - (IData)(4U))), 6U) 
                                                >> 5U))])) 
                             >> (0x0000001fU & VL_SHIFTL_III(8,32,32, 
                                                             (7U 
                                                              & ((vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__addr_i 
                                                                  >> 3U) 
                                                                 - (IData)(4U))), 6U)))));
            } else if (((0x0338U <= (0x00000fffU & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__addr_i)) 
                        && (0x035fU >= (0x00000fffU 
                                        & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__addr_i)))) {
                vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__rdata_d 
                    = (((QData)((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__abstract_cmd
                                        [(((IData)(0x0000003fU) 
                                           + (0x000001ffU 
                                              & VL_SHIFTL_III(9,32,32, 
                                                              (7U 
                                                               & ((vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__addr_i 
                                                                   >> 3U) 
                                                                  - (IData)(7U))), 6U))) 
                                          >> 5U)])) 
                        << ((0U == (0x0000001fU & VL_SHIFTL_III(9,32,32, 
                                                                (7U 
                                                                 & ((vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__addr_i 
                                                                     >> 3U) 
                                                                    - (IData)(7U))), 6U)))
                             ? 0x00000020U : ((IData)(0x00000040U) 
                                              - (0x0000001fU 
                                                 & VL_SHIFTL_III(9,32,32, 
                                                                 (7U 
                                                                  & ((vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__addr_i 
                                                                      >> 3U) 
                                                                     - (IData)(7U))), 6U))))) 
                       | (((0U == (0x0000001fU & VL_SHIFTL_III(9,32,32, 
                                                               (7U 
                                                                & ((vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__addr_i 
                                                                    >> 3U) 
                                                                   - (IData)(7U))), 6U)))
                            ? 0ULL : ((QData)((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__abstract_cmd
                                                      [
                                                      (((IData)(0x0000001fU) 
                                                        + 
                                                        (0x000001ffU 
                                                         & VL_SHIFTL_III(9,32,32, 
                                                                         (7U 
                                                                          & ((vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__addr_i 
                                                                              >> 3U) 
                                                                             - (IData)(7U))), 6U))) 
                                                       >> 5U)])) 
                                      << ((IData)(0x00000020U) 
                                          - (0x0000001fU 
                                             & VL_SHIFTL_III(9,32,32, 
                                                             (7U 
                                                              & ((vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__addr_i 
                                                                  >> 3U) 
                                                                 - (IData)(7U))), 6U))))) 
                          | ((QData)((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__abstract_cmd
                                             [(0x0000000fU 
                                               & (VL_SHIFTL_III(9,32,32, 
                                                                (7U 
                                                                 & ((vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__addr_i 
                                                                     >> 3U) 
                                                                    - (IData)(7U))), 6U) 
                                                  >> 5U))])) 
                             >> (0x0000001fU & VL_SHIFTL_III(9,32,32, 
                                                             (7U 
                                                              & ((vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__addr_i 
                                                                  >> 3U) 
                                                                 - (IData)(7U))), 6U)))));
            } else if (((0x0400U <= (0x00000fffU & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__addr_i)) 
                        && (0x07ffU >= (0x00000fffU 
                                        & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__addr_i)))) {
                if ((0U == (0x00000fffU & ((0x00000ff8U 
                                            & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__addr_i) 
                                           - (IData)(0x0400U))))) {
                    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__rdata 
                        = (((~ (0x00000000000000ffULL 
                                << (0x0000003fU & VL_SHIFTL_III(6,32,32, 
                                                                (1U 
                                                                 & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__dmcontrol_q 
                                                                    >> 0x00000010U)), 3U)))) 
                            & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__rdata) 
                           | ((QData)((IData)((((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__resume) 
                                                << 1U) 
                                               | (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__go)))) 
                              << (0x0000003fU & VL_SHIFTL_III(6,32,32, 
                                                              (1U 
                                                               & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__dmcontrol_q 
                                                                  >> 0x00000010U)), 3U))));
                }
                vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__rdata_d 
                    = vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__rdata;
            }
            if ((1U & (~ VL_ONEHOT_I((((((0x0400U <= 
                                          (0x00000fffU 
                                           & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__addr_i)) 
                                         & (0x07ffU 
                                            >= (0x00000fffU 
                                                & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__addr_i))) 
                                        << 4U) | ((
                                                   ((0x0338U 
                                                     <= 
                                                     (0x00000fffU 
                                                      & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__addr_i)) 
                                                    & (0x035fU 
                                                       >= 
                                                       (0x00000fffU 
                                                        & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__addr_i))) 
                                                   << 3U) 
                                                  | (((0x0360U 
                                                       <= 
                                                       (0x00000fffU 
                                                        & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__addr_i)) 
                                                      & (0x037fU 
                                                         >= 
                                                         (0x00000fffU 
                                                          & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__addr_i))) 
                                                     << 2U))) 
                                      | ((((0x0380U 
                                            <= (0x00000fffU 
                                                & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__addr_i)) 
                                           & (0x0387U 
                                              >= (0x00000fffU 
                                                  & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__addr_i))) 
                                          << 1U) | 
                                         (0x0300U == 
                                          (0x00000fffU 
                                           & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__addr_i)))))))) {
                if ((0U != (((((0x0400U <= (0x00000fffU 
                                            & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__addr_i)) 
                               & (0x07ffU >= (0x00000fffU 
                                              & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__addr_i))) 
                              << 4U) | ((((0x0338U 
                                           <= (0x00000fffU 
                                               & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__addr_i)) 
                                          & (0x035fU 
                                             >= (0x00000fffU 
                                                 & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__addr_i))) 
                                         << 3U) | (
                                                   ((0x0360U 
                                                     <= 
                                                     (0x00000fffU 
                                                      & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__addr_i)) 
                                                    & (0x037fU 
                                                       >= 
                                                       (0x00000fffU 
                                                        & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__addr_i))) 
                                                   << 2U))) 
                            | ((((0x0380U <= (0x00000fffU 
                                              & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__addr_i)) 
                                 & (0x0387U >= (0x00000fffU 
                                                & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__addr_i))) 
                                << 1U) | (0x0300U == 
                                          (0x00000fffU 
                                           & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__addr_i)))))) {
                    if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                        VL_WRITEF_NX("[%0t] %%Error: dm_mem.sv:289: Assertion failed in %Ntop_verilator.u_ibex_demo_system.gen_dm_top.u_dm_top.i_dm_mem.p_rw_logic: unique case, but multiple matches found for '12'h%x'\n",0,
                                     64,VL_TIME_UNITED_Q(1),
                                     -12,vlSymsp->name(),
                                     12,(0x00000fffU 
                                         & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__addr_i));
                        VL_STOP_MT("../src/pulp_riscv_debug_module_0/src/vendor/pulp_riscv_dbg/src/dm_mem.sv", 289, "");
                    }
                }
            }
        }
    }
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__data_mem_csrs 
        = vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__data_bits;
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__state_d 
        = vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__state_q;
    if ((2U & (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__state_q))) {
        if ((1U & (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__state_q))) {
            if ((1U & ((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__halted_aligned) 
                       >> (1U & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__dmcontrol_q 
                                 >> 0x00000010U))))) {
                vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__state_d = 0U;
            }
        } else if (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT____VdfgExtracted_h048ecfaa__0) {
            vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__state_d = 0U;
        }
    } else if ((1U & (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__state_q))) {
        if (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__going) {
            vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__state_d = 3U;
        }
    } else {
        if ((((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__cmd_valid_q) 
              & ((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__halted_q) 
                 >> (1U & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__dmcontrol_q 
                           >> 0x00000010U)))) & (~ (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__unsupported_command)))) {
            vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__state_d = 1U;
        }
        if (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT____VdfgExtracted_h2e4532f7__0) {
            vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__state_d = 2U;
        }
    }
    if ((2U & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__dmcontrol_q)) {
        vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__halted_d_aligned = 0U;
        vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__resuming_d_aligned = 0U;
        vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__state_d = 0U;
    }
}

void Vtop_verilator___024root___nba_comb__TOP__8(Vtop_verilator___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_verilator___024root___nba_comb__TOP__8\n"); );
    Vtop_verilator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__dmstatus = 0U;
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__dmstatus 
        = (2U | (0xfffffff0U & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__dmstatus));
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__dmstatus 
        = (0x00000080U | vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__dmstatus);
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__dmstatus 
        = (0xffffffdfU & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__dmstatus);
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__dmstatus 
        = ((0xfff1ffffU & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__dmstatus) 
           | (((4U & (((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__havereset_q) 
                       >> (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__selected_hart)) 
                      << 2U)) | ((2U & (((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__havereset_q) 
                                         >> (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__selected_hart)) 
                                        << 1U)) | (1U 
                                                   & ((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__resuming_q) 
                                                      >> (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__selected_hart))))) 
              << 0x00000011U));
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__dmstatus 
        = ((0xfffeffffU & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__dmstatus) 
           | (0x00010000U & (((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__resuming_q) 
                              >> (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__selected_hart)) 
                             << 0x00000010U)));
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__dmstatus 
        = ((0xffff0fffU & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__dmstatus) 
           | (0x0000c000U & ((- (IData)((0U < vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__hartsel_o))) 
                             << 0x0000000eU)));
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__dmstatus 
        = ((0xfffffdffU & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__dmstatus) 
           | (0x00000200U & (((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__halted_q) 
                              >> (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__selected_hart)) 
                             << 9U)));
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__dmstatus 
        = ((0xfffffeffU & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__dmstatus) 
           | (0x00000100U & (((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__halted_q) 
                              >> (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__selected_hart)) 
                             << 8U)));
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__dmstatus 
        = ((0xfffff7ffU & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__dmstatus) 
           | (0x00000800U & ((~ ((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__halted_q) 
                                 >> (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__selected_hart))) 
                             << 0x0000000bU)));
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__dmstatus 
        = ((0xfffffbffU & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__dmstatus) 
           | (0x00000400U & ((~ ((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__halted_q) 
                                 >> (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__selected_hart))) 
                             << 0x0000000aU)));
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__abstractcs = 0U;
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__abstractcs 
        = (2U | (0xfffffff0U & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__abstractcs));
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__abstractcs 
        = (0x08000000U | (0xe0ffffffU & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__abstractcs));
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__abstractcs 
        = ((0xffffefffU & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__abstractcs) 
           | ((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__cmdbusy) 
              << 0x0000000cU));
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__abstractcs 
        = ((0xfffff8ffU & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__abstractcs) 
           | ((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__cmderr_q) 
              << 8U));
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__abstractauto_d 
        = vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__abstractauto_q;
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__abstractauto_d 
        = (0xffff0fffU & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__abstractauto_d);
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__havereset_d_aligned 
        = vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__havereset_q;
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__dmcontrol_d 
        = vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__dmcontrol_q;
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__cmderr_d 
        = vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__cmderr_q;
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__command_d 
        = vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__command_q;
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__progbuf_d[0U] 
        = vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__progbuf_q[0U];
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__progbuf_d[1U] 
        = vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__progbuf_q[1U];
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__progbuf_d[2U] 
        = vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__progbuf_q[2U];
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__progbuf_d[3U] 
        = vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__progbuf_q[3U];
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__progbuf_d[4U] 
        = vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__progbuf_q[4U];
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__progbuf_d[5U] 
        = vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__progbuf_q[5U];
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__progbuf_d[6U] 
        = vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__progbuf_q[6U];
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__progbuf_d[7U] 
        = vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__progbuf_q[7U];
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__data_d 
        = vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__data_q;
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__sbcs_d 
        = vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__sbcs_q;
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__sbaddr_d 
        = (QData)((IData)(((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__sbaddr_q) 
                           + ((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_sba__DOT__addr_incr_en)
                               ? ((IData)(1U) << (7U 
                                                  & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__sbcs_q 
                                                     >> 0x00000011U)))
                               : 0U))));
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__sbdata_d 
        = vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__sbdata_q;
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__resp_queue_inp = 0ULL;
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__cmd_valid_d = 0U;
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__sbaddress_write_valid = 0U;
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__sbdata_read_valid = 0U;
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__sbdata_write_valid = 0U;
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__clear_resumeack = 0U;
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__sbcs = 0U;
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__a_abstractcs = 0U;
    if ((((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__rready_i) 
          & (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__dst_req)) 
         & (0x0000000100000000ULL == (0x0000000300000000ULL 
                                      & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__data_q)))) {
        if ((((((((((4U <= (0x0000007fU & (IData)((vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__data_q 
                                                   >> 0x00000022U)))) 
                    && (5U >= (0x0000007fU & (IData)(
                                                     (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__data_q 
                                                      >> 0x00000022U))))) 
                   | (0x10U == (0x0000007fU & (IData)(
                                                      (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__data_q 
                                                       >> 0x00000022U))))) 
                  | (0x11U == (0x0000007fU & (IData)(
                                                     (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__data_q 
                                                      >> 0x00000022U))))) 
                 | (0x12U == (0x0000007fU & (IData)(
                                                    (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__data_q 
                                                     >> 0x00000022U))))) 
                | (0x16U == (0x0000007fU & (IData)(
                                                   (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__data_q 
                                                    >> 0x00000022U))))) 
               | (0x18U == (0x0000007fU & (IData)((vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__data_q 
                                                   >> 0x00000022U))))) 
              | (0x17U == (0x0000007fU & (IData)((vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__data_q 
                                                  >> 0x00000022U))))) 
             | ((0x20U <= (0x0000007fU & (IData)((vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__data_q 
                                                  >> 0x00000022U)))) 
                && (0x27U >= (0x0000007fU & (IData)(
                                                    (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__data_q 
                                                     >> 0x00000022U))))))) {
            if (((4U <= (0x0000007fU & (IData)((vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__data_q 
                                                >> 0x00000022U)))) 
                 && (5U >= (0x0000007fU & (IData)((vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__data_q 
                                                   >> 0x00000022U)))))) {
                vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__resp_queue_inp 
                    = ((3ULL & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__resp_queue_inp) 
                       | ((QData)((IData)((IData)((vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__data_q 
                                                   >> 
                                                   (0x0000003fU 
                                                    & VL_SHIFTL_III(6,32,32, 
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__data_q 
                                                                                >> 0x00000022U))), 5U)))))) 
                          << 2U));
                if (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__cmdbusy) {
                    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__resp_queue_inp 
                        = (3ULL | vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__resp_queue_inp);
                    if ((0U == (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__cmderr_q))) {
                        vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__cmderr_d = 1U;
                    }
                } else {
                    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__cmd_valid_d 
                        = (1U & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__abstractauto_q 
                                 >> (0x0000000fU & 
                                     ((IData)((vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__data_q 
                                               >> 0x00000022U)) 
                                      - (IData)(4U)))));
                }
            } else if ((0x10U == (0x0000007fU & (IData)(
                                                        (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__data_q 
                                                         >> 0x00000022U))))) {
                vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__resp_queue_inp 
                    = ((3ULL & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__resp_queue_inp) 
                       | ((QData)((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__dmcontrol_q)) 
                          << 2U));
            } else if ((0x11U == (0x0000007fU & (IData)(
                                                        (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__data_q 
                                                         >> 0x00000022U))))) {
                vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__resp_queue_inp 
                    = ((3ULL & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__resp_queue_inp) 
                       | ((QData)((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__dmstatus)) 
                          << 2U));
            } else if ((0x12U == (0x0000007fU & (IData)(
                                                        (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__data_q 
                                                         >> 0x00000022U))))) {
                vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__resp_queue_inp 
                    = ((3ULL & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__resp_queue_inp) 
                       | ((QData)((IData)((IData)((0x0000000000212380ULL 
                                                   >> 
                                                   (0x0000003fU 
                                                    & VL_SHIFTL_III(6,32,32, (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__selected_hart), 5U)))))) 
                          << 2U));
            } else if ((0x16U == (0x0000007fU & (IData)(
                                                        (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__data_q 
                                                         >> 0x00000022U))))) {
                vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__resp_queue_inp 
                    = ((3ULL & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__resp_queue_inp) 
                       | ((QData)((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__abstractcs)) 
                          << 2U));
            } else if ((0x18U == (0x0000007fU & (IData)(
                                                        (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__data_q 
                                                         >> 0x00000022U))))) {
                vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__resp_queue_inp 
                    = ((3ULL & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__resp_queue_inp) 
                       | ((QData)((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__abstractauto_q)) 
                          << 2U));
            } else if ((0x17U == (0x0000007fU & (IData)(
                                                        (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__data_q 
                                                         >> 0x00000022U))))) {
                vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__resp_queue_inp 
                    = (3ULL & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__resp_queue_inp);
            } else {
                vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__resp_queue_inp 
                    = ((3ULL & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__resp_queue_inp) 
                       | ((QData)((IData)((((0U == 
                                             (0x0000001fU 
                                              & VL_SHIFTL_III(8,32,32, 
                                                              (7U 
                                                               & (IData)(
                                                                         (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__data_q 
                                                                          >> 0x00000022U))), 5U)))
                                             ? 0U : 
                                            (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__progbuf_q
                                             [(((IData)(0x0000001fU) 
                                                + (0x000000ffU 
                                                   & VL_SHIFTL_III(8,32,32, 
                                                                   (7U 
                                                                    & (IData)(
                                                                              (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__data_q 
                                                                               >> 0x00000022U))), 5U))) 
                                               >> 5U)] 
                                             << ((IData)(0x00000020U) 
                                                 - 
                                                 (0x0000001fU 
                                                  & VL_SHIFTL_III(8,32,32, 
                                                                  (7U 
                                                                   & (IData)(
                                                                             (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__data_q 
                                                                              >> 0x00000022U))), 5U))))) 
                                           | (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__progbuf_q
                                              [(7U 
                                                & (VL_SHIFTL_III(8,32,32, 
                                                                 (7U 
                                                                  & (IData)(
                                                                            (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__data_q 
                                                                             >> 0x00000022U))), 5U) 
                                                   >> 5U))] 
                                              >> (0x0000001fU 
                                                  & VL_SHIFTL_III(8,32,32, 
                                                                  (7U 
                                                                   & (IData)(
                                                                             (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__data_q 
                                                                              >> 0x00000022U))), 5U)))))) 
                          << 2U));
                if (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__cmdbusy) {
                    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__resp_queue_inp 
                        = (3ULL | vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__resp_queue_inp);
                    if ((0U == (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__cmderr_q))) {
                        vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__cmderr_d = 1U;
                    }
                } else {
                    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__cmd_valid_d 
                        = (1U & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__abstractauto_q 
                                 >> ((IData)(0x00000010U) 
                                     + (0x0000001fU 
                                        & ((0x00000010U 
                                            | (0x0000000fU 
                                               & (IData)(
                                                         (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__data_q 
                                                          >> 0x00000022U)))) 
                                           - (IData)(0x10U))))));
                }
            }
        } else if (((((((((0x40U == (0x0000007fU & (IData)(
                                                           (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__data_q 
                                                            >> 0x00000022U)))) 
                          | (0x13U == (0x0000007fU 
                                       & (IData)((vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__data_q 
                                                  >> 0x00000022U))))) 
                         | (0x34U == (0x0000007fU & (IData)(
                                                            (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__data_q 
                                                             >> 0x00000022U))))) 
                        | (0x35U == (0x0000007fU & (IData)(
                                                           (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__data_q 
                                                            >> 0x00000022U))))) 
                       | (0x38U == (0x0000007fU & (IData)(
                                                          (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__data_q 
                                                           >> 0x00000022U))))) 
                      | (0x39U == (0x0000007fU & (IData)(
                                                         (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__data_q 
                                                          >> 0x00000022U))))) 
                     | (0x3aU == (0x0000007fU & (IData)(
                                                        (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__data_q 
                                                         >> 0x00000022U))))) 
                    | (0x3cU == (0x0000007fU & (IData)(
                                                       (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__data_q 
                                                        >> 0x00000022U)))))) {
            if ((0x40U == (0x0000007fU & (IData)((vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__data_q 
                                                  >> 0x00000022U))))) {
                vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__resp_queue_inp 
                    = ((3ULL & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__resp_queue_inp) 
                       | ((QData)((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__haltsum0)) 
                          << 2U));
            } else if ((0x13U == (0x0000007fU & (IData)(
                                                        (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__data_q 
                                                         >> 0x00000022U))))) {
                vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__resp_queue_inp 
                    = ((3ULL & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__resp_queue_inp) 
                       | ((QData)((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__haltsum1)) 
                          << 2U));
            } else if ((0x34U == (0x0000007fU & (IData)(
                                                        (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__data_q 
                                                         >> 0x00000022U))))) {
                vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__resp_queue_inp 
                    = ((3ULL & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__resp_queue_inp) 
                       | ((QData)((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__haltsum2)) 
                          << 2U));
            } else if ((0x35U == (0x0000007fU & (IData)(
                                                        (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__data_q 
                                                         >> 0x00000022U))))) {
                vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__resp_queue_inp 
                    = ((3ULL & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__resp_queue_inp) 
                       | ((QData)((IData)((0U != vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__halted_reshaped2))) 
                          << 2U));
            } else if ((0x38U == (0x0000007fU & (IData)(
                                                        (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__data_q 
                                                         >> 0x00000022U))))) {
                vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__resp_queue_inp 
                    = ((3ULL & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__resp_queue_inp) 
                       | ((QData)((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__sbcs_q)) 
                          << 2U));
            } else if ((0x39U == (0x0000007fU & (IData)(
                                                        (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__data_q 
                                                         >> 0x00000022U))))) {
                vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__resp_queue_inp 
                    = ((3ULL & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__resp_queue_inp) 
                       | ((QData)((IData)((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__sbaddr_q))) 
                          << 2U));
            } else if ((0x3aU == (0x0000007fU & (IData)(
                                                        (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__data_q 
                                                         >> 0x00000022U))))) {
                vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__resp_queue_inp 
                    = ((3ULL & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__resp_queue_inp) 
                       | ((QData)((IData)((IData)((vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__sbaddr_q 
                                                   >> 0x20U)))) 
                          << 2U));
            } else if ((1U & ((0U != (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_sba__DOT__state_q)) 
                              | (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__sbcs_q 
                                 >> 0x00000016U)))) {
                vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__sbcs_d 
                    = (0x00400000U | vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__sbcs_d);
                vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__resp_queue_inp 
                    = (3ULL | vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__resp_queue_inp);
            } else {
                vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__sbdata_read_valid 
                    = (0U == (7U & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__sbcs_q 
                                    >> 0x0000000cU)));
                vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__resp_queue_inp 
                    = ((3ULL & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__resp_queue_inp) 
                       | ((QData)((IData)((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__sbdata_q))) 
                          << 2U));
            }
        } else if ((0x3dU == (0x0000007fU & (IData)(
                                                    (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__data_q 
                                                     >> 0x00000022U))))) {
            if ((1U & ((0U != (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_sba__DOT__state_q)) 
                       | (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__sbcs_q 
                          >> 0x00000016U)))) {
                vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__sbcs_d 
                    = (0x00400000U | vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__sbcs_d);
                vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__resp_queue_inp 
                    = (3ULL | vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__resp_queue_inp);
            } else {
                vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__resp_queue_inp 
                    = ((3ULL & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__resp_queue_inp) 
                       | ((QData)((IData)((IData)((vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__sbdata_q 
                                                   >> 0x20U)))) 
                          << 2U));
            }
        }
        if (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT____VdfgExtracted_h184edcfc__0) {
            if ((0U != (((((((0x3dU == (0x0000007fU 
                                        & (IData)((vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__data_q 
                                                   >> 0x00000022U)))) 
                             << 4U) | (((0x3cU == (0x0000007fU 
                                                   & (IData)(
                                                             (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__data_q 
                                                              >> 0x00000022U)))) 
                                        << 3U) | ((0x3aU 
                                                   == 
                                                   (0x0000007fU 
                                                    & (IData)(
                                                              (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__data_q 
                                                               >> 0x00000022U)))) 
                                                  << 2U))) 
                           | (((0x39U == (0x0000007fU 
                                          & (IData)(
                                                    (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__data_q 
                                                     >> 0x00000022U)))) 
                               << 1U) | (0x38U == (0x0000007fU 
                                                   & (IData)(
                                                             (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__data_q 
                                                              >> 0x00000022U)))))) 
                          << 0x0000000cU) | (((((0x35U 
                                                 == 
                                                 (0x0000007fU 
                                                  & (IData)(
                                                            (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__data_q 
                                                             >> 0x00000022U)))) 
                                                << 3U) 
                                               | ((0x34U 
                                                   == 
                                                   (0x0000007fU 
                                                    & (IData)(
                                                              (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__data_q 
                                                               >> 0x00000022U)))) 
                                                  << 2U)) 
                                              | (((0x13U 
                                                   == 
                                                   (0x0000007fU 
                                                    & (IData)(
                                                              (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__data_q 
                                                               >> 0x00000022U)))) 
                                                  << 1U) 
                                                 | (0x40U 
                                                    == 
                                                    (0x0000007fU 
                                                     & (IData)(
                                                               (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__data_q 
                                                                >> 0x00000022U)))))) 
                                             << 8U)) 
                        | (((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT____VdfgRegularize_h6d1c0005_0_0) 
                            << 7U) | (((0x17U == (0x0000007fU 
                                                  & (IData)(
                                                            (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__data_q 
                                                             >> 0x00000022U)))) 
                                       << 6U) | (((0x18U 
                                                   == 
                                                   (0x0000007fU 
                                                    & (IData)(
                                                              (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__data_q 
                                                               >> 0x00000022U)))) 
                                                  << 5U) 
                                                 | (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT____VdfgRegularize_h6d1c0005_0_1))))))) {
                if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                    VL_WRITEF_NX("[%0t] %%Error: dm_csrs.sv:289: Assertion failed in %Ntop_verilator.u_ibex_demo_system.gen_dm_top.u_dm_top.i_dm_csrs.csr_read_write: unique case, but multiple matches found for '8'h%x'\n",0,
                                 64,VL_TIME_UNITED_Q(1),
                                 -12,vlSymsp->name(),
                                 8,(0x0000007fU & (IData)(
                                                          (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__data_q 
                                                           >> 0x00000022U))));
                    VL_STOP_MT("../src/pulp_riscv_debug_module_0/src/vendor/pulp_riscv_dbg/src/dm_csrs.sv", 289, "");
                }
            }
        }
    }
    if ((((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__rready_i) 
          & (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__dst_req)) 
         & (0x0000000200000000ULL == (0x0000000300000000ULL 
                                      & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__data_q)))) {
        if ((((((((((4U <= (0x0000007fU & (IData)((vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__data_q 
                                                   >> 0x00000022U)))) 
                    && (5U >= (0x0000007fU & (IData)(
                                                     (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__data_q 
                                                      >> 0x00000022U))))) 
                   | (0x10U == (0x0000007fU & (IData)(
                                                      (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__data_q 
                                                       >> 0x00000022U))))) 
                  | (0x11U == (0x0000007fU & (IData)(
                                                     (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__data_q 
                                                      >> 0x00000022U))))) 
                 | (0x12U == (0x0000007fU & (IData)(
                                                    (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__data_q 
                                                     >> 0x00000022U))))) 
                | (0x16U == (0x0000007fU & (IData)(
                                                   (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__data_q 
                                                    >> 0x00000022U))))) 
               | (0x17U == (0x0000007fU & (IData)((vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__data_q 
                                                   >> 0x00000022U))))) 
              | (0x18U == (0x0000007fU & (IData)((vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__data_q 
                                                  >> 0x00000022U))))) 
             | ((0x20U <= (0x0000007fU & (IData)((vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__data_q 
                                                  >> 0x00000022U)))) 
                && (0x27U >= (0x0000007fU & (IData)(
                                                    (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__data_q 
                                                     >> 0x00000022U))))))) {
            if (((4U <= (0x0000007fU & (IData)((vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__data_q 
                                                >> 0x00000022U)))) 
                 && (5U >= (0x0000007fU & (IData)((vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__data_q 
                                                   >> 0x00000022U)))))) {
                if (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__cmdbusy) {
                    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__resp_queue_inp 
                        = (3ULL | vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__resp_queue_inp);
                    if ((0U == (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__cmderr_q))) {
                        vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__cmderr_d = 1U;
                    }
                } else {
                    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__data_d 
                        = (((~ (0x00000000ffffffffULL 
                                << (0x0000003fU & VL_SHIFTL_III(6,32,32, 
                                                                (1U 
                                                                 & (IData)(
                                                                           (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__data_q 
                                                                            >> 0x00000022U))), 5U)))) 
                            & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__data_d) 
                           | ((QData)((IData)((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__data_q))) 
                              << (0x0000003fU & VL_SHIFTL_III(6,32,32, 
                                                              (1U 
                                                               & (IData)(
                                                                         (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__data_q 
                                                                          >> 0x00000022U))), 5U))));
                    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__cmd_valid_d 
                        = (1U & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__abstractauto_q 
                                 >> (0x0000000fU & 
                                     ((IData)((vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__data_q 
                                               >> 0x00000022U)) 
                                      - (IData)(4U)))));
                }
            } else if ((0x10U == (0x0000007fU & (IData)(
                                                        (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__data_q 
                                                         >> 0x00000022U))))) {
                vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__dmcontrol_d 
                    = (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__data_q);
                if ((0x10000000U & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__dmcontrol_d)) {
                    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__havereset_d_aligned 
                        = ((~ ((IData)(1U) << (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__selected_hart))) 
                           & (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__havereset_d_aligned));
                }
            } else if ((0x11U != (0x0000007fU & (IData)(
                                                        (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__data_q 
                                                         >> 0x00000022U))))) {
                if ((0x12U != (0x0000007fU & (IData)(
                                                     (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__data_q 
                                                      >> 0x00000022U))))) {
                    if ((0x16U == (0x0000007fU & (IData)(
                                                         (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__data_q 
                                                          >> 0x00000022U))))) {
                        vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__a_abstractcs 
                            = (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__data_q);
                        if (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__cmdbusy) {
                            vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__resp_queue_inp 
                                = (3ULL | vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__resp_queue_inp);
                            if ((0U == (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__cmderr_q))) {
                                vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__cmderr_d = 1U;
                            }
                        } else {
                            vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__cmderr_d 
                                = ((~ (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__a_abstractcs 
                                       >> 8U)) & (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__cmderr_q));
                        }
                    } else if ((0x17U == (0x0000007fU 
                                          & (IData)(
                                                    (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__data_q 
                                                     >> 0x00000022U))))) {
                        if (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__cmdbusy) {
                            vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__resp_queue_inp 
                                = (3ULL | vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__resp_queue_inp);
                            if ((0U == (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__cmderr_q))) {
                                vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__cmderr_d = 1U;
                            }
                        } else {
                            vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__cmd_valid_d = 1U;
                            vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__command_d 
                                = (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__data_q);
                        }
                    } else if ((0x18U == (0x0000007fU 
                                          & (IData)(
                                                    (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__data_q 
                                                     >> 0x00000022U))))) {
                        if (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__cmdbusy) {
                            vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__resp_queue_inp 
                                = (3ULL | vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__resp_queue_inp);
                            if ((0U == (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__cmderr_q))) {
                                vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__cmderr_d = 1U;
                            }
                        } else {
                            vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__abstractauto_d = 0U;
                            vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__abstractauto_d 
                                = ((0xfffff000U & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__abstractauto_d) 
                                   | (3U & (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__data_q)));
                            vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__abstractauto_d 
                                = ((0x0000ffffU & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__abstractauto_d) 
                                   | (0x00ff0000U & 
                                      ((IData)((vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__data_q 
                                                >> 0x00000010U)) 
                                       << 0x00000010U)));
                        }
                    } else if (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__cmdbusy) {
                        vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__resp_queue_inp 
                            = (3ULL | vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__resp_queue_inp);
                        if ((0U == (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__cmderr_q))) {
                            vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__cmderr_d = 1U;
                        }
                    } else {
                        VL_ASSIGNSEL_WI(256, 32, (0x000000ffU 
                                                  & VL_SHIFTL_III(8,32,32, 
                                                                  (7U 
                                                                   & (IData)(
                                                                             (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__data_q 
                                                                              >> 0x00000022U))), 5U)), vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__progbuf_d, (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__data_q));
                        vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__cmd_valid_d 
                            = (1U & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__abstractauto_q 
                                     >> ((IData)(0x00000010U) 
                                         + (0x0000001fU 
                                            & ((0x00000010U 
                                                | (0x0000000fU 
                                                   & (IData)(
                                                             (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__data_q 
                                                              >> 0x00000022U)))) 
                                               - (IData)(0x10U))))));
                    }
                }
            }
        } else if ((0x38U == (0x0000007fU & (IData)(
                                                    (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__data_q 
                                                     >> 0x00000022U))))) {
            if ((0U != (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_sba__DOT__state_q))) {
                vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__sbcs_d 
                    = (0x00400000U | vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__sbcs_d);
                vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__resp_queue_inp 
                    = (3ULL | vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__resp_queue_inp);
            } else {
                vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__sbcs 
                    = (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__data_q);
                vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__sbcs_d 
                    = vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__sbcs;
                vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__sbcs_d 
                    = ((0xffbfffffU & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__sbcs_d) 
                       | (0x00400000U & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__sbcs_q 
                                         & ((~ (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__sbcs 
                                                >> 0x00000016U)) 
                                            << 0x00000016U))));
                vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__sbcs_d 
                    = ((0xffff8fffU & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__sbcs_d) 
                       | (((0U != (7U & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__sbcs 
                                         >> 0x0000000cU)))
                            ? 0U : (7U & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__sbcs_q 
                                          >> 0x0000000cU))) 
                          << 0x0000000cU));
            }
        } else if ((0x39U == (0x0000007fU & (IData)(
                                                    (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__data_q 
                                                     >> 0x00000022U))))) {
            if ((1U & ((0U != (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_sba__DOT__state_q)) 
                       | (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__sbcs_q 
                          >> 0x00000016U)))) {
                vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__sbcs_d 
                    = (0x00400000U | vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__sbcs_d);
                vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__resp_queue_inp 
                    = (3ULL | vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__resp_queue_inp);
            } else {
                vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__sbaddr_d 
                    = ((0xffffffff00000000ULL & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__sbaddr_d) 
                       | (IData)((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__data_q)));
                vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__sbaddress_write_valid 
                    = (0U == (7U & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__sbcs_q 
                                    >> 0x0000000cU)));
            }
        } else if ((0x3aU == (0x0000007fU & (IData)(
                                                    (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__data_q 
                                                     >> 0x00000022U))))) {
            if ((1U & ((0U != (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_sba__DOT__state_q)) 
                       | (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__sbcs_q 
                          >> 0x00000016U)))) {
                vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__sbcs_d 
                    = (0x00400000U | vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__sbcs_d);
                vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__resp_queue_inp 
                    = (3ULL | vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__resp_queue_inp);
            } else {
                vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__sbaddr_d 
                    = ((0x00000000ffffffffULL & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__sbaddr_d) 
                       | ((QData)((IData)((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__data_q))) 
                          << 0x00000020U));
            }
        } else if ((0x3cU == (0x0000007fU & (IData)(
                                                    (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__data_q 
                                                     >> 0x00000022U))))) {
            if ((1U & ((0U != (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_sba__DOT__state_q)) 
                       | (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__sbcs_q 
                          >> 0x00000016U)))) {
                vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__sbcs_d 
                    = (0x00400000U | vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__sbcs_d);
                vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__resp_queue_inp 
                    = (3ULL | vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__resp_queue_inp);
            } else {
                vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__sbdata_d 
                    = ((0xffffffff00000000ULL & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__sbdata_d) 
                       | (IData)((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__data_q)));
                vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__sbdata_write_valid 
                    = (0U == (7U & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__sbcs_q 
                                    >> 0x0000000cU)));
            }
        } else if ((0x3dU == (0x0000007fU & (IData)(
                                                    (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__data_q 
                                                     >> 0x00000022U))))) {
            if ((1U & ((0U != (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_sba__DOT__state_q)) 
                       | (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__sbcs_q 
                          >> 0x00000016U)))) {
                vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__sbcs_d 
                    = (0x00400000U | vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__sbcs_d);
                vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__resp_queue_inp 
                    = (3ULL | vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__resp_queue_inp);
            } else {
                vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__sbdata_d 
                    = ((0x00000000ffffffffULL & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__sbdata_d) 
                       | ((QData)((IData)((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__data_q))) 
                          << 0x00000020U));
            }
        }
        if (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT____VdfgExtracted_h45a04ee3__0) {
            if ((0U != (((((((0x3dU == (0x0000007fU 
                                        & (IData)((vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__data_q 
                                                   >> 0x00000022U)))) 
                             << 3U) | ((0x3cU == (0x0000007fU 
                                                  & (IData)(
                                                            (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__data_q 
                                                             >> 0x00000022U)))) 
                                       << 2U)) | ((
                                                   (0x3aU 
                                                    == 
                                                    (0x0000007fU 
                                                     & (IData)(
                                                               (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__data_q 
                                                                >> 0x00000022U)))) 
                                                   << 1U) 
                                                  | (0x39U 
                                                     == 
                                                     (0x0000007fU 
                                                      & (IData)(
                                                                (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__data_q 
                                                                 >> 0x00000022U)))))) 
                          << 9U) | (((0x38U == (0x0000007fU 
                                                & (IData)(
                                                          (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__data_q 
                                                           >> 0x00000022U)))) 
                                     << 8U) | (((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT____VdfgRegularize_h6d1c0005_0_0) 
                                                << 7U) 
                                               | ((0x18U 
                                                   == 
                                                   (0x0000007fU 
                                                    & (IData)(
                                                              (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__data_q 
                                                               >> 0x00000022U)))) 
                                                  << 6U)))) 
                        | (((0x17U == (0x0000007fU 
                                       & (IData)((vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__data_q 
                                                  >> 0x00000022U)))) 
                            << 5U) | (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT____VdfgRegularize_h6d1c0005_0_1))))) {
                if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                    VL_WRITEF_NX("[%0t] %%Error: dm_csrs.sv:363: Assertion failed in %Ntop_verilator.u_ibex_demo_system.gen_dm_top.u_dm_top.i_dm_csrs.csr_read_write: unique case, but multiple matches found for '8'h%x'\n",0,
                                 64,VL_TIME_UNITED_Q(1),
                                 -12,vlSymsp->name(),
                                 8,(0x0000007fU & (IData)(
                                                          (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__data_q 
                                                           >> 0x00000022U))));
                    VL_STOP_MT("../src/pulp_riscv_debug_module_0/src/vendor/pulp_riscv_dbg/src/dm_csrs.sv", 363, "");
                }
            }
        }
    }
    if (((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__exception) 
         | ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0) 
            | (IData)((((0U == (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__state_q)) 
                        & (~ (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1))) 
                       & (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__cmd_valid_q)))))) {
        vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__cmderr_d 
            = ((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__exception)
                ? 3U : ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0)
                         ? 2U : ((2U & (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__state_q))
                                  ? 0U : ((1U & (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__state_q))
                                           ? 0U : ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1)
                                                    ? 0U
                                                    : 
                                                   ((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__cmd_valid_q)
                                                     ? 4U
                                                     : 0U))))));
    }
    if (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__data_valid) {
        vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__data_d 
            = vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__data_mem_csrs;
    }
    if ((2U & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__dmcontrol_q)) {
        vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__havereset_d_aligned 
            = (1U | (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__havereset_d_aligned));
    }
    if (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__sberror_valid) {
        vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__sbcs_d 
            = ((0xffff8fffU & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__sbcs_d) 
               | ((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__sberror) 
                  << 0x0000000cU));
    }
    if (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__host_rvalid[1U]) {
        vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__sbdata_d 
            = (QData)((IData)(VL_SHIFTR_III(32,32,32, vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__host_rdata[1U], 
                                            VL_SHIFTL_III(32,32,32, (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_sba__DOT__be_idx_masked), 3U))));
    }
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__dmcontrol_d 
        = (0xfbffffffU & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__dmcontrol_d);
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__dmcontrol_d 
        = (0xdfffffffU & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__dmcontrol_d);
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__dmcontrol_d 
        = (0xfffffff3U & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__dmcontrol_d);
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__dmcontrol_d 
        = (0xf7ffffffU & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__dmcontrol_d);
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__dmcontrol_d 
        = (0xffffffcfU & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__dmcontrol_d);
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__dmcontrol_d 
        = (0xefffffffU & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__dmcontrol_d);
    if ((1U & ((~ (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__dmcontrol_q 
                   >> 0x0000001eU)) & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__dmcontrol_d 
                                       >> 0x0000001eU)))) {
        vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__clear_resumeack = 1U;
    }
    if (((vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__dmcontrol_q 
          >> 0x0000001eU) & (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__resuming_q))) {
        vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__dmcontrol_d 
            = (0xbfffffffU & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__dmcontrol_d);
    }
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__sbcs_d 
        = (0x20000000U | (0x1fffffffU & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__sbcs_d));
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__sbcs_d 
        = ((0xffdfffffU & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__sbcs_d) 
           | ((0U != (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_sba__DOT__state_q)) 
              << 0x00000015U));
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__sbcs_d 
        = (0x00000407U | (0xfffff000U & vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__sbcs_d));
    vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_sba__DOT__state_d 
        = vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_sba__DOT__state_q;
    if ((4U & (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_sba__DOT__state_q))) {
        if ((2U & (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_sba__DOT__state_q))) {
            vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_sba__DOT__state_d = 0U;
        } else if ((1U & (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_sba__DOT__state_q))) {
            vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_sba__DOT__state_d = 0U;
        } else if (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__host_rvalid[1U]) {
            vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_sba__DOT__state_d = 0U;
        }
    } else if ((2U & (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_sba__DOT__state_q))) {
        if ((1U & (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_sba__DOT__state_q))) {
            if (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__host_rvalid[1U]) {
                vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_sba__DOT__state_d = 0U;
            }
        } else if (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__host_gnt[1U]) {
            vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_sba__DOT__state_d = 4U;
        }
    } else if ((1U & (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_sba__DOT__state_q))) {
        if (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__host_gnt[1U]) {
            vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_sba__DOT__state_d = 3U;
        }
    } else {
        if (((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__sbaddress_write_valid) 
             & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__sbcs_q 
                >> 0x00000014U))) {
            vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_sba__DOT__state_d = 1U;
        }
        if (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__sbdata_write_valid) {
            vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_sba__DOT__state_d = 2U;
        }
        if (((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__sbdata_read_valid) 
             & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__sbcs_q 
                >> 0x0000000fU))) {
            vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_sba__DOT__state_d = 1U;
        }
    }
    if (((2U < (7U & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__sbcs_q 
                      >> 0x00000011U))) & (0U != (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_sba__DOT__state_q)))) {
        vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_sba__DOT__state_d = 0U;
    }
    if (((0U != ((IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__sbaddr_q) 
                 & (~ ((IData)(0xffffffffU) << (7U 
                                                & (vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__sbcs_q 
                                                   >> 0x00000011U)))))) 
         & (0U != (IData)(vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_sba__DOT__state_q)))) {
        vlSelfRef.top_verilator__DOT__u_ibex_demo_system__DOT__gen_dm_top__DOT__u_dm_top__DOT__i_dm_sba__DOT__state_d = 0U;
    }
}

void Vtop_verilator___024root___nba_sequent__TOP__0(Vtop_verilator___024root* vlSelf);
void Vtop_verilator___024root___nba_sequent__TOP__1(Vtop_verilator___024root* vlSelf);
void Vtop_verilator___024root___nba_sequent__TOP__2(Vtop_verilator___024root* vlSelf);
void Vtop_verilator___024root___nba_sequent__TOP__3(Vtop_verilator___024root* vlSelf);
void Vtop_verilator___024root___nba_sequent__TOP__4(Vtop_verilator___024root* vlSelf);
void Vtop_verilator___024root___nba_sequent__TOP__5(Vtop_verilator___024root* vlSelf);
void Vtop_verilator___024root___nba_sequent__TOP__6(Vtop_verilator___024root* vlSelf);
void Vtop_verilator___024root___nba_sequent__TOP__7(Vtop_verilator___024root* vlSelf);
void Vtop_verilator___024root___nba_sequent__TOP__8(Vtop_verilator___024root* vlSelf);
void Vtop_verilator___024root___nba_sequent__TOP__9(Vtop_verilator___024root* vlSelf);
void Vtop_verilator___024root___nba_sequent__TOP__10(Vtop_verilator___024root* vlSelf);
void Vtop_verilator___024root___nba_sequent__TOP__11(Vtop_verilator___024root* vlSelf);
void Vtop_verilator___024root___nba_comb__TOP__0(Vtop_verilator___024root* vlSelf);
void Vtop_verilator___024root___nba_sequent__TOP__12(Vtop_verilator___024root* vlSelf);
void Vtop_verilator___024root___nba_comb__TOP__1(Vtop_verilator___024root* vlSelf);
void Vtop_verilator___024root___act_comb__TOP__0(Vtop_verilator___024root* vlSelf);

void Vtop_verilator___024root___eval_nba(Vtop_verilator___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_verilator___024root___eval_nba\n"); );
    Vtop_verilator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0x0000000000000820ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtop_verilator___024root___nba_sequent__TOP__0(vlSelf);
        vlSelfRef.__Vm_traceActivity[4U] = 1U;
    }
    if ((0x0000000000000030ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtop_verilator___024root___nba_sequent__TOP__1(vlSelf);
        vlSelfRef.__Vm_traceActivity[5U] = 1U;
    }
    if ((0x0000000000000210ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtop_verilator___024root___nba_sequent__TOP__2(vlSelf);
        vlSelfRef.__Vm_traceActivity[6U] = 1U;
    }
    if ((0x0000000000000010ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtop_verilator___024root___nba_sequent__TOP__3(vlSelf);
        vlSelfRef.__Vm_traceActivity[7U] = 1U;
    }
    if ((0x00000000000000c0ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtop_verilator___024root___nba_sequent__TOP__4(vlSelf);
        vlSelfRef.__Vm_traceActivity[8U] = 1U;
    }
    if ((0x0000000000000100ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtop_verilator___024root___nba_sequent__TOP__5(vlSelf);
    }
    if ((0x0000000000000080ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtop_verilator___024root___nba_sequent__TOP__6(vlSelf);
        vlSelfRef.__Vm_traceActivity[9U] = 1U;
    }
    if ((0x0000000000000050ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtop_verilator___024root___nba_sequent__TOP__7(vlSelf);
    }
    if ((0x0000000000000820ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtop_verilator___024root___nba_sequent__TOP__8(vlSelf);
        vlSelfRef.__Vm_traceActivity[10U] = 1U;
    }
    if ((0x0000000000000410ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtop_verilator___024root___nba_sequent__TOP__9(vlSelf);
    }
    if ((0x0000000000000030ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtop_verilator___024root___nba_sequent__TOP__10(vlSelf);
        vlSelfRef.__Vm_traceActivity[11U] = 1U;
    }
    if ((0x0000000000000210ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtop_verilator___024root___nba_sequent__TOP__11(vlSelf);
        vlSelfRef.__Vm_traceActivity[12U] = 1U;
    }
    if ((0x0000000000000030ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtop_verilator___024root___nba_comb__TOP__0(vlSelf);
        vlSelfRef.__Vm_traceActivity[13U] = 1U;
    }
    if ((0x00000000000000c0ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtop_verilator___024root___nba_sequent__TOP__12(vlSelf);
        vlSelfRef.__Vm_traceActivity[14U] = 1U;
    }
    if ((0x00000000000000c0ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtop_verilator___024root___nba_comb__TOP__1(vlSelf);
        vlSelfRef.__Vm_traceActivity[15U] = 1U;
    }
    if ((0x00000000000000f0ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtop_verilator___024root___nba_comb__TOP__2(vlSelf);
        vlSelfRef.__Vm_traceActivity[16U] = 1U;
    }
    if ((0x0000000000000030ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtop_verilator___024root___nba_sequent__TOP__13(vlSelf);
    }
    if ((0x00000000000000c1ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtop_verilator___024root___nba_comb__TOP__3(vlSelf);
    }
    if ((0x00000000000000f1ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtop_verilator___024root___nba_comb__TOP__4(vlSelf);
        vlSelfRef.__Vm_traceActivity[17U] = 1U;
    }
    if ((0x00000000000000f0ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtop_verilator___024root___nba_comb__TOP__5(vlSelf);
        vlSelfRef.__Vm_traceActivity[18U] = 1U;
    }
    if ((0x00000000000000f7ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtop_verilator___024root___act_comb__TOP__0(vlSelf);
        vlSelfRef.__Vm_traceActivity[19U] = 1U;
    }
    if ((0x00000000000000ffULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtop_verilator___024root___nba_comb__TOP__7(vlSelf);
        vlSelfRef.__Vm_traceActivity[20U] = 1U;
    }
    if ((0x00000000000002ffULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtop_verilator___024root___nba_comb__TOP__8(vlSelf);
        vlSelfRef.__Vm_traceActivity[21U] = 1U;
    }
}

void Vtop_verilator___024root___trigger_orInto__act_vec_vec(VlUnpacked<QData/*63:0*/, 2> &out, const VlUnpacked<QData/*63:0*/, 2> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_verilator___024root___trigger_orInto__act_vec_vec\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = (out[n] | in[n]);
        n = ((IData)(1U) + n);
    } while ((1U >= n));
}

void Vtop_verilator___024root___eval_triggers_vec__act(Vtop_verilator___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop_verilator___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 2> &triggers, const std::string &tag);
#endif  // VL_DEBUG
bool Vtop_verilator___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 2> &in);
void Vtop_verilator___024root___eval_act(Vtop_verilator___024root* vlSelf);

bool Vtop_verilator___024root___eval_phase__act(Vtop_verilator___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_verilator___024root___eval_phase__act\n"); );
    Vtop_verilator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VactExecute;
    // Body
    Vtop_verilator___024root___eval_triggers_vec__act(vlSelf);
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtop_verilator___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
    }
#endif
    Vtop_verilator___024root___trigger_orInto__act_vec_vec(vlSelfRef.__VnbaTriggered, vlSelfRef.__VactTriggered);
    __VactExecute = Vtop_verilator___024root___trigger_anySet__act(vlSelfRef.__VactTriggered);
    if (__VactExecute) {
        Vtop_verilator___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

void Vtop_verilator___024root___trigger_clear__act(VlUnpacked<QData/*63:0*/, 2> &out) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_verilator___024root___trigger_clear__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = 0ULL;
        n = ((IData)(1U) + n);
    } while ((2U > n));
}

bool Vtop_verilator___024root___eval_phase__nba(Vtop_verilator___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_verilator___024root___eval_phase__nba\n"); );
    Vtop_verilator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = Vtop_verilator___024root___trigger_anySet__act(vlSelfRef.__VnbaTriggered);
    if (__VnbaExecute) {
        Vtop_verilator___024root___eval_nba(vlSelf);
        Vtop_verilator___024root___trigger_clear__act(vlSelfRef.__VnbaTriggered);
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop_verilator___024root___dump_triggers__ico(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG
bool Vtop_verilator___024root___eval_phase__ico(Vtop_verilator___024root* vlSelf);

void Vtop_verilator___024root___eval(Vtop_verilator___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_verilator___024root___eval\n"); );
    Vtop_verilator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VicoIterCount;
    IData/*31:0*/ __VnbaIterCount;
    // Body
    __VicoIterCount = 0U;
    vlSelfRef.__VicoFirstIteration = 1U;
    do {
        if (VL_UNLIKELY(((0x00000064U < __VicoIterCount)))) {
#ifdef VL_DEBUG
            Vtop_verilator___024root___dump_triggers__ico(vlSelfRef.__VicoTriggered, "ico"s);
#endif
            VL_FATAL_MT("../src/lowrisc_ibex_demo_system_0/src/dv/verilator/top_verilator.sv", 6, "", "DIDNOTCONVERGE: Input combinational region did not converge after '--converge-limit' of 100 tries");
        }
        __VicoIterCount = ((IData)(1U) + __VicoIterCount);
        vlSelfRef.__VicoPhaseResult = Vtop_verilator___024root___eval_phase__ico(vlSelf);
        vlSelfRef.__VicoFirstIteration = 0U;
    } while (vlSelfRef.__VicoPhaseResult);
    __VnbaIterCount = 0U;
    do {
        if (VL_UNLIKELY(((0x00000064U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            Vtop_verilator___024root___dump_triggers__act(vlSelfRef.__VnbaTriggered, "nba"s);
#endif
            VL_FATAL_MT("../src/lowrisc_ibex_demo_system_0/src/dv/verilator/top_verilator.sv", 6, "", "DIDNOTCONVERGE: NBA region did not converge after '--converge-limit' of 100 tries");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        vlSelfRef.__VactIterCount = 0U;
        do {
            if (VL_UNLIKELY(((0x00000064U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                Vtop_verilator___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
#endif
                VL_FATAL_MT("../src/lowrisc_ibex_demo_system_0/src/dv/verilator/top_verilator.sv", 6, "", "DIDNOTCONVERGE: Active region did not converge after '--converge-limit' of 100 tries");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactPhaseResult = Vtop_verilator___024root___eval_phase__act(vlSelf);
        } while (vlSelfRef.__VactPhaseResult);
        vlSelfRef.__VnbaPhaseResult = Vtop_verilator___024root___eval_phase__nba(vlSelf);
    } while (vlSelfRef.__VnbaPhaseResult);
}

#ifdef VL_DEBUG
void Vtop_verilator___024root___eval_debug_assertions(Vtop_verilator___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_verilator___024root___eval_debug_assertions\n"); );
    Vtop_verilator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (VL_UNLIKELY(((vlSelfRef.clk_i & 0xfeU)))) {
        Verilated::overWidthError("clk_i");
    }
    if (VL_UNLIKELY(((vlSelfRef.rst_ni & 0xfeU)))) {
        Verilated::overWidthError("rst_ni");
    }
}
#endif  // VL_DEBUG
