// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"

#include "Vtop___024root.h"

VL_ATTR_COLD void Vtop___024root___initial__TOP__0(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___initial__TOP__0\n"); );
    // Body
    vlSelf->top__DOT__dut__DOT__FIFOControl__DOT__ptr_wr = 0U;
}

VL_ATTR_COLD void Vtop___024root___eval_initial(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vclklast__TOP__clk_i = vlSelf->clk_i;
    Vtop___024root___initial__TOP__0(vlSelf);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
}

void Vtop___024root___combo__TOP__0(Vtop___024root* vlSelf);

VL_ATTR_COLD void Vtop___024root___eval_settle(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_settle\n"); );
    // Body
    Vtop___024root___combo__TOP__0(vlSelf);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
}

VL_ATTR_COLD void Vtop___024root___final(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___final\n"); );
}

VL_ATTR_COLD void Vtop___024root___ctor_var_reset(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clk_i = VL_RAND_RESET_I(1);
    vlSelf->rst_ni = VL_RAND_RESET_I(1);
    vlSelf->key = VL_RAND_RESET_I(2);
    vlSelf->sw = VL_RAND_RESET_I(1);
    vlSelf->HEX0 = VL_RAND_RESET_I(7);
    vlSelf->HEX1 = VL_RAND_RESET_I(7);
    vlSelf->HEX2 = VL_RAND_RESET_I(7);
    vlSelf->HEX3 = VL_RAND_RESET_I(7);
    vlSelf->HEX4 = VL_RAND_RESET_I(7);
    vlSelf->HEX5 = VL_RAND_RESET_I(7);
    vlSelf->top__DOT__dut__DOT__wr_data = VL_RAND_RESET_I(24);
    vlSelf->top__DOT__dut__DOT__fifo_len = VL_RAND_RESET_I(6);
    vlSelf->top__DOT__dut__DOT__rd_data = VL_RAND_RESET_I(24);
    vlSelf->top__DOT__dut__DOT__data_o = VL_RAND_RESET_I(24);
    vlSelf->top__DOT__dut__DOT__out = VL_RAND_RESET_I(24);
    vlSelf->top__DOT__dut__DOT__lfshr__DOT__init = VL_RAND_RESET_I(24);
    vlSelf->top__DOT__dut__DOT__FIFOControl__DOT__ptr_rd = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__dut__DOT__FIFOControl__DOT__ptr_wr = VL_RAND_RESET_I(5);
    for (int __Vi0=0; __Vi0<32; ++__Vi0) {
        vlSelf->top__DOT__dut__DOT__Memory__DOT__mem[__Vi0] = VL_RAND_RESET_I(24);
    }
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }
}
