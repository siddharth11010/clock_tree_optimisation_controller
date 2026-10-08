// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Prototypes for DPI import and export functions.
//
// Verilator includes this file in all generated .cpp files that use DPI functions.
// Manually include this file where DPI .c import functions are declared to ensure
// the C functions match the expectations of the DPI imports.

#ifndef VERILATED_VTOP_VERILATOR__DPI_H_
#define VERILATED_VTOP_VERILATOR__DPI_H_  // guard

#include "svdpi.h"

#ifdef __cplusplus
extern "C" {
#endif


    // DPI EXPORTS
    // DPI export at ../src/lowrisc_ibex_demo_system_core_0/src/rtl/system/ibex_demo_system.sv:507:41
    extern unsigned long long mhpmcounter_get(int index);
    // DPI export at ../src/lowrisc_ibex_demo_system_core_0/src/rtl/system/ibex_demo_system.sv:501:37
    extern unsigned int mhpmcounter_num();
    // DPI export at ../src/lowrisc_prim_util_memload_0/rtl/prim_util_memload.svh:46:16
    extern int simutil_get_mem(int index, svBitVecVal* val);
    // DPI export at ../src/lowrisc_ibex_ibex_core_0.1/rtl/ibex_if_stage.sv:370:28
    extern int simutil_get_scramble_key(svBitVecVal* val);
    // DPI export at ../src/lowrisc_ibex_ibex_core_0.1/rtl/ibex_if_stage.sv:373:28
    extern int simutil_get_scramble_nonce(svBitVecVal* nonce);
    // DPI export at ../src/lowrisc_prim_util_memload_0/rtl/prim_util_memload.svh:27:8
    extern void simutil_memload(const char* file);
    // DPI export at ../src/lowrisc_prim_util_memload_0/rtl/prim_util_memload.svh:36:16
    extern int simutil_set_mem(int index, const svBitVecVal* val);

    // DPI IMPORTS
    // DPI import at ../src/lowrisc_dv_dpi_sv_uartdpi_0.1/uartdpi.sv:33:9
    extern int uartdpi_can_read(void* ctx);
    // DPI import at ../src/lowrisc_dv_dpi_sv_uartdpi_0.1/uartdpi.sv:27:10
    extern void uartdpi_close(void* ctx);
    // DPI import at ../src/lowrisc_dv_dpi_sv_uartdpi_0.1/uartdpi.sv:24:13
    extern void* uartdpi_create(const char* name, const char* log_file_path);
    // DPI import at ../src/lowrisc_dv_dpi_sv_uartdpi_0.1/uartdpi.sv:30:10
    extern char uartdpi_read(void* ctx);
    // DPI import at ../src/lowrisc_dv_dpi_sv_uartdpi_0.1/uartdpi.sv:36:10
    extern void uartdpi_write(void* ctx, int data);

#ifdef __cplusplus
}
#endif

#endif  // guard
