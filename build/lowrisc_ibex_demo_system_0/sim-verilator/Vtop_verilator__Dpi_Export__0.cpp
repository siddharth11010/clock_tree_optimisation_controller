// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Implementation of DPI export functions.

#include "Vtop_verilator.h"
#include "Vtop_verilator__Syms.h"
#include "verilated_dpi.h"


unsigned int Vtop_verilator::mhpmcounter_num() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_verilator___024root::mhpmcounter_num\n"); );
    // Locals
    IData/*31:0*/ mhpmcounter_num__Vfuncrtn__Vcvt;
    mhpmcounter_num__Vfuncrtn__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) {
        __Vfuncnum = Verilated::exportFuncNum("mhpmcounter_num");
    }
    const VerilatedScope* const __Vscopep = Verilated::dpiScope();
    Vtop_verilator__Vcb_mhpmcounter_num_t __Vcb = reinterpret_cast<Vtop_verilator__Vcb_mhpmcounter_num_t>(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((Vtop_verilator__Syms*)(__Vscopep->symsp()), mhpmcounter_num__Vfuncrtn__Vcvt);
    unsigned int mhpmcounter_num__Vfuncrtn;
    mhpmcounter_num__Vfuncrtn = mhpmcounter_num__Vfuncrtn__Vcvt;
    return mhpmcounter_num__Vfuncrtn;
}

unsigned long long Vtop_verilator::mhpmcounter_get(int index) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_verilator___024root::mhpmcounter_get\n"); );
    // Locals
    IData/*31:0*/ index__Vcvt;
    index__Vcvt = 0;
    QData/*63:0*/ mhpmcounter_get__Vfuncrtn__Vcvt;
    mhpmcounter_get__Vfuncrtn__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) {
        __Vfuncnum = Verilated::exportFuncNum("mhpmcounter_get");
    }
    const VerilatedScope* const __Vscopep = Verilated::dpiScope();
    Vtop_verilator__Vcb_mhpmcounter_get_t __Vcb = reinterpret_cast<Vtop_verilator__Vcb_mhpmcounter_get_t>(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    index__Vcvt = (index);
    (*__Vcb)((Vtop_verilator__Syms*)(__Vscopep->symsp()), index__Vcvt, mhpmcounter_get__Vfuncrtn__Vcvt);
    unsigned long long mhpmcounter_get__Vfuncrtn;
    mhpmcounter_get__Vfuncrtn = mhpmcounter_get__Vfuncrtn__Vcvt;
    return mhpmcounter_get__Vfuncrtn;
}

int Vtop_verilator::simutil_get_scramble_key(svBitVecVal* val) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_verilator___024root::simutil_get_scramble_key\n"); );
    // Locals
    VlWide<4>/*127:0*/ val__Vcvt;
    VL_ZERO_W(128, val__Vcvt);
    IData/*31:0*/ simutil_get_scramble_key__Vfuncrtn__Vcvt;
    simutil_get_scramble_key__Vfuncrtn__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) {
        __Vfuncnum = Verilated::exportFuncNum("simutil_get_scramble_key");
    }
    const VerilatedScope* const __Vscopep = Verilated::dpiScope();
    Vtop_verilator__Vcb_simutil_get_scramble_key_t __Vcb = reinterpret_cast<Vtop_verilator__Vcb_simutil_get_scramble_key_t>(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((Vtop_verilator__Syms*)(__Vscopep->symsp()), val__Vcvt, simutil_get_scramble_key__Vfuncrtn__Vcvt);
    VL_SET_SVBV_W(128, val, val__Vcvt);
    int simutil_get_scramble_key__Vfuncrtn;
    simutil_get_scramble_key__Vfuncrtn = simutil_get_scramble_key__Vfuncrtn__Vcvt;
    return simutil_get_scramble_key__Vfuncrtn;
}

int Vtop_verilator::simutil_get_scramble_nonce(svBitVecVal* nonce) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_verilator___024root::simutil_get_scramble_nonce\n"); );
    // Locals
    VlWide<10>/*319:0*/ nonce__Vcvt;
    VL_ZERO_W(320, nonce__Vcvt);
    IData/*31:0*/ simutil_get_scramble_nonce__Vfuncrtn__Vcvt;
    simutil_get_scramble_nonce__Vfuncrtn__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) {
        __Vfuncnum = Verilated::exportFuncNum("simutil_get_scramble_nonce");
    }
    const VerilatedScope* const __Vscopep = Verilated::dpiScope();
    Vtop_verilator__Vcb_simutil_get_scramble_nonce_t __Vcb = reinterpret_cast<Vtop_verilator__Vcb_simutil_get_scramble_nonce_t>(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((Vtop_verilator__Syms*)(__Vscopep->symsp()), nonce__Vcvt, simutil_get_scramble_nonce__Vfuncrtn__Vcvt);
    VL_SET_SVBV_W(320, nonce, nonce__Vcvt);
    int simutil_get_scramble_nonce__Vfuncrtn;
    simutil_get_scramble_nonce__Vfuncrtn = simutil_get_scramble_nonce__Vfuncrtn__Vcvt;
    return simutil_get_scramble_nonce__Vfuncrtn;
}

void Vtop_verilator::simutil_memload(const char* file) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_verilator___024root::simutil_memload\n"); );
    // Locals
    static thread_local std::string file__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) {
        __Vfuncnum = Verilated::exportFuncNum("simutil_memload");
    }
    const VerilatedScope* const __Vscopep = Verilated::dpiScope();
    Vtop_verilator__Vcb_simutil_memload_t __Vcb = reinterpret_cast<Vtop_verilator__Vcb_simutil_memload_t>(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    file__Vcvt = VL_CVT_N_CSTR(file);
    (*__Vcb)((Vtop_verilator__Syms*)(__Vscopep->symsp()), file__Vcvt);
}

int Vtop_verilator::simutil_set_mem(int index, const svBitVecVal* val) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_verilator___024root::simutil_set_mem\n"); );
    // Locals
    IData/*31:0*/ index__Vcvt;
    index__Vcvt = 0;
    VlWide<10>/*311:0*/ val__Vcvt;
    VL_ZERO_W(312, val__Vcvt);
    IData/*31:0*/ simutil_set_mem__Vfuncrtn__Vcvt;
    simutil_set_mem__Vfuncrtn__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) {
        __Vfuncnum = Verilated::exportFuncNum("simutil_set_mem");
    }
    const VerilatedScope* const __Vscopep = Verilated::dpiScope();
    Vtop_verilator__Vcb_simutil_set_mem_t __Vcb = reinterpret_cast<Vtop_verilator__Vcb_simutil_set_mem_t>(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    index__Vcvt = (index);
    VL_SET_W_SVBV(312, val__Vcvt, val + 0);
    (*__Vcb)((Vtop_verilator__Syms*)(__Vscopep->symsp()), index__Vcvt, val__Vcvt, simutil_set_mem__Vfuncrtn__Vcvt);
    int simutil_set_mem__Vfuncrtn;
    simutil_set_mem__Vfuncrtn = simutil_set_mem__Vfuncrtn__Vcvt;
    return simutil_set_mem__Vfuncrtn;
}

int Vtop_verilator::simutil_get_mem(int index, svBitVecVal* val) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_verilator___024root::simutil_get_mem\n"); );
    // Locals
    IData/*31:0*/ index__Vcvt;
    index__Vcvt = 0;
    VlWide<10>/*311:0*/ val__Vcvt;
    VL_ZERO_W(312, val__Vcvt);
    IData/*31:0*/ simutil_get_mem__Vfuncrtn__Vcvt;
    simutil_get_mem__Vfuncrtn__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) {
        __Vfuncnum = Verilated::exportFuncNum("simutil_get_mem");
    }
    const VerilatedScope* const __Vscopep = Verilated::dpiScope();
    Vtop_verilator__Vcb_simutil_get_mem_t __Vcb = reinterpret_cast<Vtop_verilator__Vcb_simutil_get_mem_t>(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    index__Vcvt = (index);
    (*__Vcb)((Vtop_verilator__Syms*)(__Vscopep->symsp()), index__Vcvt, val__Vcvt, simutil_get_mem__Vfuncrtn__Vcvt);
    VL_SET_SVBV_W(312, val, val__Vcvt);
    int simutil_get_mem__Vfuncrtn;
    simutil_get_mem__Vfuncrtn = simutil_get_mem__Vfuncrtn__Vcvt;
    return simutil_get_mem__Vfuncrtn;
}
