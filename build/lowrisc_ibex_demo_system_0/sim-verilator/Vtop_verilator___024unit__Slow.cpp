// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop_verilator.h for the primary calling header

#include "Vtop_verilator__pch.h"

void Vtop_verilator___024unit___ctor_var_reset(Vtop_verilator___024unit* vlSelf);

Vtop_verilator___024unit::Vtop_verilator___024unit() = default;
Vtop_verilator___024unit::~Vtop_verilator___024unit() = default;

void Vtop_verilator___024unit::ctor(Vtop_verilator__Syms* symsp, const char* namep) {
    vlSymsp = symsp;
    vlNamep = strdup(Verilated::catName(vlSymsp->name(), namep));
    // Reset structure values
    Vtop_verilator___024unit___ctor_var_reset(this);
}

void Vtop_verilator___024unit::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

void Vtop_verilator___024unit::dtor() {
    VL_DO_DANGLING(std::free(const_cast<char*>(vlNamep)), vlNamep);
}
