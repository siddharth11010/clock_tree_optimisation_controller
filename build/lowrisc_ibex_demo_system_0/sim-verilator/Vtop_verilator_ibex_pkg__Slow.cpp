// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop_verilator.h for the primary calling header

#include "Vtop_verilator__pch.h"

// Parameter definitions for Vtop_verilator_ibex_pkg
constexpr VlUnpacked<QData/*33:0*/, 16> Vtop_verilator_ibex_pkg::__PVT__PmpAddrRst;


void Vtop_verilator_ibex_pkg___ctor_var_reset(Vtop_verilator_ibex_pkg* vlSelf);

Vtop_verilator_ibex_pkg::Vtop_verilator_ibex_pkg() = default;
Vtop_verilator_ibex_pkg::~Vtop_verilator_ibex_pkg() = default;

void Vtop_verilator_ibex_pkg::ctor(Vtop_verilator__Syms* symsp, const char* namep) {
    vlSymsp = symsp;
    vlNamep = strdup(Verilated::catName(vlSymsp->name(), namep));
    // Reset structure values
    Vtop_verilator_ibex_pkg___ctor_var_reset(this);
}

void Vtop_verilator_ibex_pkg::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

void Vtop_verilator_ibex_pkg::dtor() {
    VL_DO_DANGLING(std::free(const_cast<char*>(vlNamep)), vlNamep);
}
