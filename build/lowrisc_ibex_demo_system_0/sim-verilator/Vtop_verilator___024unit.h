// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtop_verilator.h for the primary calling header

#ifndef VERILATED_VTOP_VERILATOR___024UNIT_H_
#define VERILATED_VTOP_VERILATOR___024UNIT_H_  // guard

#include "verilated.h"


class Vtop_verilator__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtop_verilator___024unit final {
  public:

    // INTERNAL VARIABLES
    Vtop_verilator__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vtop_verilator___024unit();
    ~Vtop_verilator___024unit();
    void ctor(Vtop_verilator__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vtop_verilator___024unit);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
