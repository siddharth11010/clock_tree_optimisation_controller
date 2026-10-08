// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VTOP_VERILATOR__SYMS_H_
#define VERILATED_VTOP_VERILATOR__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Vtop_verilator.h"

// INCLUDE MODULE CLASSES
#include "Vtop_verilator___024root.h"
#include "Vtop_verilator___024unit.h"
#include "Vtop_verilator_ibex_pkg.h"

// DPI TYPES for DPI Export callbacks (Internal use)
using Vtop_verilator__Vcb_mhpmcounter_get_t = void (*) (Vtop_verilator__Syms* __restrict vlSymsp, IData/*31:0*/ index, QData/*63:0*/ &mhpmcounter_get__Vfuncrtn);
using Vtop_verilator__Vcb_mhpmcounter_num_t = void (*) (Vtop_verilator__Syms* __restrict vlSymsp, IData/*31:0*/ &mhpmcounter_num__Vfuncrtn);
using Vtop_verilator__Vcb_simutil_get_mem_t = void (*) (Vtop_verilator__Syms* __restrict vlSymsp, IData/*31:0*/ index, VlWide<10>/*311:0*/ &val, IData/*31:0*/ &simutil_get_mem__Vfuncrtn);
using Vtop_verilator__Vcb_simutil_get_scramble_key_t = void (*) (Vtop_verilator__Syms* __restrict vlSymsp, VlWide<4>/*127:0*/ &val, IData/*31:0*/ &simutil_get_scramble_key__Vfuncrtn);
using Vtop_verilator__Vcb_simutil_get_scramble_nonce_t = void (*) (Vtop_verilator__Syms* __restrict vlSymsp, VlWide<10>/*319:0*/ &nonce, IData/*31:0*/ &simutil_get_scramble_nonce__Vfuncrtn);
using Vtop_verilator__Vcb_simutil_memload_t = void (*) (Vtop_verilator__Syms* __restrict vlSymsp, std::string file);
using Vtop_verilator__Vcb_simutil_set_mem_t = void (*) (Vtop_verilator__Syms* __restrict vlSymsp, IData/*31:0*/ index, VlWide<10>/*311:0*/ val, IData/*31:0*/ &simutil_set_mem__Vfuncrtn);

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES) Vtop_verilator__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vtop_verilator* const __Vm_modelp;
    bool __Vm_activity = false;  ///< Used by trace routines to determine change occurred
    uint32_t __Vm_baseCode = 0;  ///< Used by trace routines when tracing multiple models
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vtop_verilator___024root       TOP;
    Vtop_verilator_ibex_pkg        TOP__ibex_pkg;

    // SCOPE NAMES
    VerilatedScope* __Vscopep_top_verilator__u_ibex_demo_system;
    VerilatedScope* __Vscopep_top_verilator__u_ibex_demo_system__gen_dm_top__u_dm_top__dap;
    VerilatedScope* __Vscopep_top_verilator__u_ibex_demo_system__gen_dm_top__u_dm_top__dap__i_dmi_cdc__i_cdc_req__u_prim_sync_reqack;
    VerilatedScope* __Vscopep_top_verilator__u_ibex_demo_system__gen_dm_top__u_dm_top__dap__i_dmi_cdc__i_cdc_req__u_prim_sync_reqack__gen_rz_hs_protocol__dst_fsm;
    VerilatedScope* __Vscopep_top_verilator__u_ibex_demo_system__gen_dm_top__u_dm_top__dap__i_dmi_cdc__i_cdc_req__u_prim_sync_reqack__gen_rz_hs_protocol__src_fsm;
    VerilatedScope* __Vscopep_top_verilator__u_ibex_demo_system__gen_dm_top__u_dm_top__dap__i_dmi_cdc__i_cdc_resp__u_prim_sync_reqack;
    VerilatedScope* __Vscopep_top_verilator__u_ibex_demo_system__gen_dm_top__u_dm_top__dap__i_dmi_cdc__i_cdc_resp__u_prim_sync_reqack__gen_rz_hs_protocol__dst_fsm;
    VerilatedScope* __Vscopep_top_verilator__u_ibex_demo_system__gen_dm_top__u_dm_top__dap__i_dmi_cdc__i_cdc_resp__u_prim_sync_reqack__gen_rz_hs_protocol__src_fsm;
    VerilatedScope* __Vscopep_top_verilator__u_ibex_demo_system__gen_dm_top__u_dm_top__dap__i_dmi_jtag_tap;
    VerilatedScope* __Vscopep_top_verilator__u_ibex_demo_system__gen_dm_top__u_dm_top__dap__i_dmi_jtag_tap__p_out_sel;
    VerilatedScope* __Vscopep_top_verilator__u_ibex_demo_system__gen_dm_top__u_dm_top__dap__p_fsm;
    VerilatedScope* __Vscopep_top_verilator__u_ibex_demo_system__gen_dm_top__u_dm_top__i_dm_csrs;
    VerilatedScope* __Vscopep_top_verilator__u_ibex_demo_system__gen_dm_top__u_dm_top__i_dm_csrs__csr_read_write;
    VerilatedScope* __Vscopep_top_verilator__u_ibex_demo_system__gen_dm_top__u_dm_top__i_dm_mem;
    VerilatedScope* __Vscopep_top_verilator__u_ibex_demo_system__gen_dm_top__u_dm_top__i_dm_mem__p_abstract_cmd_rom;
    VerilatedScope* __Vscopep_top_verilator__u_ibex_demo_system__gen_dm_top__u_dm_top__i_dm_mem__p_rw_logic;
    VerilatedScope* __Vscopep_top_verilator__u_ibex_demo_system__u_ram__u_ram__gen_generic__u_impl_generic;
    VerilatedScope* __Vscopep_top_verilator__u_ibex_demo_system__u_ram__u_ram__gen_generic__u_impl_generic__unnamedblk3;
    VerilatedScope* __Vscopep_top_verilator__u_ibex_demo_system__u_timer;
    VerilatedScope* __Vscopep_top_verilator__u_ibex_demo_system__u_top__u_ibex_core__cs_registers_i;
    VerilatedScope* __Vscopep_top_verilator__u_ibex_demo_system__u_top__u_ibex_core__ex_block_i__alu_i;
    VerilatedScope* __Vscopep_top_verilator__u_ibex_demo_system__u_top__u_ibex_core__id_stage_i;
    VerilatedScope* __Vscopep_top_verilator__u_ibex_demo_system__u_top__u_ibex_core__id_stage_i__controller_i;
    VerilatedScope* __Vscopep_top_verilator__u_ibex_demo_system__u_top__u_ibex_core__id_stage_i__decoder_i;
    VerilatedScope* __Vscopep_top_verilator__u_ibex_demo_system__u_top__u_ibex_core__id_stage_i__rf_wdata_id_mux;
    VerilatedScope* __Vscopep_top_verilator__u_ibex_demo_system__u_top__u_ibex_core__if_stage_i;

    // CONSTRUCTORS
    Vtop_verilator__Syms(VerilatedContext* contextp, const char* namep, Vtop_verilator* modelp);
    ~Vtop_verilator__Syms();

    // METHODS
    const char* name() const { return TOP.vlNamep; }
};

#endif  // guard
