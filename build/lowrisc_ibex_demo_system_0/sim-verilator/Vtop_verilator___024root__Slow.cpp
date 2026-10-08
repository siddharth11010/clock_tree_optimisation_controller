// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop_verilator.h for the primary calling header

#include "Vtop_verilator__pch.h"

// Parameter definitions for Vtop_verilator___024root
constexpr VlUnpacked<QData/*33:0*/, 16> Vtop_verilator___024root::top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__PMPRstAddr;
constexpr VlUnpacked<QData/*33:0*/, 16> Vtop_verilator___024root::top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__PMPRstAddr;
constexpr VlUnpacked<QData/*33:0*/, 16> Vtop_verilator___024root::top_verilator__DOT__u_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__PMPRstAddr;


void Vtop_verilator___024root___ctor_var_reset(Vtop_verilator___024root* vlSelf);

Vtop_verilator___024root::Vtop_verilator___024root(Vtop_verilator__Syms* symsp, const char* namep)
 {
    vlSymsp = symsp;
    vlNamep = strdup(namep);
    // Reset structure values
    Vtop_verilator___024root___ctor_var_reset(this);
}

void Vtop_verilator___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vtop_verilator___024root::~Vtop_verilator___024root() {
    VL_DO_DANGLING(std::free(const_cast<char*>(vlNamep)), vlNamep);
}
