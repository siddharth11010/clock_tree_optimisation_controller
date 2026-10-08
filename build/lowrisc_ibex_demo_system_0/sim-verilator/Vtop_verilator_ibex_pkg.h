// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtop_verilator.h for the primary calling header

#ifndef VERILATED_VTOP_VERILATOR_IBEX_PKG_H_
#define VERILATED_VTOP_VERILATOR_IBEX_PKG_H_  // guard

#include "verilated.h"


class Vtop_verilator__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtop_verilator_ibex_pkg final {
  public:

    // INTERNAL VARIABLES
    Vtop_verilator__Syms* vlSymsp;
    const char* vlNamep;

    // PARAMETERS
    static constexpr VlUnpacked<QData/*33:0*/, 16> __PVT__PmpAddrRst = {{
        0ULL, 0ULL,
        0ULL, 0ULL,
        0ULL, 0ULL,
        0ULL, 0ULL,
        0ULL, 0ULL,
        0ULL, 0ULL,
        0ULL, 0ULL,
        0ULL, 0ULL
    }};

    // CONSTRUCTORS
    Vtop_verilator_ibex_pkg();
    ~Vtop_verilator_ibex_pkg();
    void ctor(Vtop_verilator__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vtop_verilator_ibex_pkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
