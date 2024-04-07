// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"

#include "Vtop___024root.h"

VL_INLINE_OPT void Vtop___024root___sequent__TOP__0(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___sequent__TOP__0\n"); );
    // Init
    IData/*23:0*/ __Vdly__top__DOT__dut__DOT__lfshr__DOT__init;
    CData/*4:0*/ __Vdly__top__DOT__dut__DOT__FIFOControl__DOT__ptr_wr;
    CData/*4:0*/ __Vdlyvdim0__top__DOT__dut__DOT__Memory__DOT__mem__v0;
    IData/*23:0*/ __Vdlyvval__top__DOT__dut__DOT__Memory__DOT__mem__v0;
    CData/*0:0*/ __Vdlyvset__top__DOT__dut__DOT__Memory__DOT__mem__v0;
    CData/*4:0*/ __Vdly__top__DOT__dut__DOT__FIFOControl__DOT__ptr_rd;
    // Body
    __Vdly__top__DOT__dut__DOT__lfshr__DOT__init = vlSelf->top__DOT__dut__DOT__lfshr__DOT__init;
    __Vdly__top__DOT__dut__DOT__FIFOControl__DOT__ptr_rd 
        = vlSelf->top__DOT__dut__DOT__FIFOControl__DOT__ptr_rd;
    __Vdly__top__DOT__dut__DOT__FIFOControl__DOT__ptr_wr 
        = vlSelf->top__DOT__dut__DOT__FIFOControl__DOT__ptr_wr;
    __Vdlyvset__top__DOT__dut__DOT__Memory__DOT__mem__v0 = 0U;
    if ((1U & (~ (IData)(vlSelf->rst_ni)))) {
        if ((2U & (IData)(vlSelf->key))) {
            __Vdlyvval__top__DOT__dut__DOT__Memory__DOT__mem__v0 
                = vlSelf->top__DOT__dut__DOT__wr_data;
            __Vdlyvset__top__DOT__dut__DOT__Memory__DOT__mem__v0 = 1U;
            __Vdlyvdim0__top__DOT__dut__DOT__Memory__DOT__mem__v0 
                = vlSelf->top__DOT__dut__DOT__FIFOControl__DOT__ptr_wr;
        }
        vlSelf->top__DOT__dut__DOT__fifo_len = (0x3fU 
                                                & ((2U 
                                                    == 
                                                    ((2U 
                                                      & ((IData)(vlSelf->key) 
                                                         << 1U)) 
                                                     | (1U 
                                                        & ((IData)(vlSelf->key) 
                                                           >> 1U))))
                                                    ? 
                                                   ((IData)(vlSelf->top__DOT__dut__DOT__fifo_len) 
                                                    - (IData)(1U))
                                                    : 
                                                   ((1U 
                                                     == 
                                                     ((2U 
                                                       & ((IData)(vlSelf->key) 
                                                          << 1U)) 
                                                      | (1U 
                                                         & ((IData)(vlSelf->key) 
                                                            >> 1U))))
                                                     ? 
                                                    ((IData)(1U) 
                                                     + (IData)(vlSelf->top__DOT__dut__DOT__fifo_len))
                                                     : (IData)(vlSelf->top__DOT__dut__DOT__fifo_len))));
    }
    vlSelf->top__DOT__dut__DOT__data_o = ((1U & ((~ (IData)(vlSelf->rst_ni)) 
                                                 & (IData)(vlSelf->key)))
                                           ? vlSelf->top__DOT__dut__DOT__rd_data
                                           : 0U);
    if (vlSelf->rst_ni) {
        __Vdly__top__DOT__dut__DOT__FIFOControl__DOT__ptr_rd = 0U;
        __Vdly__top__DOT__dut__DOT__FIFOControl__DOT__ptr_wr = 0U;
        __Vdly__top__DOT__dut__DOT__lfshr__DOT__init = 0U;
        vlSelf->top__DOT__dut__DOT__rd_data = 0U;
    } else {
        if ((1U & (IData)(vlSelf->key))) {
            __Vdly__top__DOT__dut__DOT__FIFOControl__DOT__ptr_rd 
                = (0x1fU & ((IData)(1U) + (IData)(vlSelf->top__DOT__dut__DOT__FIFOControl__DOT__ptr_rd)));
        }
        if ((2U & (IData)(vlSelf->key))) {
            __Vdly__top__DOT__dut__DOT__FIFOControl__DOT__ptr_wr 
                = (0x1fU & ((IData)(1U) + (IData)(vlSelf->top__DOT__dut__DOT__FIFOControl__DOT__ptr_wr)));
        }
        __Vdly__top__DOT__dut__DOT__lfshr__DOT__init 
            = (0xffffffU & ((IData)(1U) + vlSelf->top__DOT__dut__DOT__lfshr__DOT__init));
        vlSelf->top__DOT__dut__DOT__wr_data = vlSelf->top__DOT__dut__DOT__lfshr__DOT__init;
    }
    vlSelf->top__DOT__dut__DOT__FIFOControl__DOT__ptr_wr 
        = __Vdly__top__DOT__dut__DOT__FIFOControl__DOT__ptr_wr;
    vlSelf->top__DOT__dut__DOT__rd_data = vlSelf->top__DOT__dut__DOT__Memory__DOT__mem
        [vlSelf->top__DOT__dut__DOT__FIFOControl__DOT__ptr_rd];
    vlSelf->top__DOT__dut__DOT__lfshr__DOT__init = __Vdly__top__DOT__dut__DOT__lfshr__DOT__init;
    vlSelf->top__DOT__dut__DOT__FIFOControl__DOT__ptr_rd 
        = __Vdly__top__DOT__dut__DOT__FIFOControl__DOT__ptr_rd;
    if (__Vdlyvset__top__DOT__dut__DOT__Memory__DOT__mem__v0) {
        vlSelf->top__DOT__dut__DOT__Memory__DOT__mem[__Vdlyvdim0__top__DOT__dut__DOT__Memory__DOT__mem__v0] 
            = __Vdlyvval__top__DOT__dut__DOT__Memory__DOT__mem__v0;
    }
}

extern const VlUnpacked<CData/*6:0*/, 16> Vtop__ConstPool__TABLE_h9003e6d8_0;

VL_INLINE_OPT void Vtop___024root___combo__TOP__0(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___combo__TOP__0\n"); );
    // Init
    CData/*3:0*/ __Vtableidx1;
    CData/*3:0*/ __Vtableidx2;
    CData/*3:0*/ __Vtableidx3;
    CData/*3:0*/ __Vtableidx4;
    CData/*3:0*/ __Vtableidx5;
    CData/*3:0*/ __Vtableidx6;
    // Body
    if (vlSelf->sw) {
        if (vlSelf->sw) {
            vlSelf->top__DOT__dut__DOT__out = vlSelf->top__DOT__dut__DOT__data_o;
        }
    } else {
        vlSelf->top__DOT__dut__DOT__out = vlSelf->top__DOT__dut__DOT__fifo_len;
    }
    __Vtableidx1 = (0xfU & (vlSelf->top__DOT__dut__DOT__out 
                            >> 0x14U));
    vlSelf->HEX5 = Vtop__ConstPool__TABLE_h9003e6d8_0
        [__Vtableidx1];
    __Vtableidx2 = (0xfU & (vlSelf->top__DOT__dut__DOT__out 
                            >> 0x10U));
    vlSelf->HEX4 = Vtop__ConstPool__TABLE_h9003e6d8_0
        [__Vtableidx2];
    __Vtableidx3 = (0xfU & (vlSelf->top__DOT__dut__DOT__out 
                            >> 0xcU));
    vlSelf->HEX3 = Vtop__ConstPool__TABLE_h9003e6d8_0
        [__Vtableidx3];
    __Vtableidx4 = (0xfU & (vlSelf->top__DOT__dut__DOT__out 
                            >> 8U));
    vlSelf->HEX2 = Vtop__ConstPool__TABLE_h9003e6d8_0
        [__Vtableidx4];
    __Vtableidx5 = (0xfU & (vlSelf->top__DOT__dut__DOT__out 
                            >> 4U));
    vlSelf->HEX1 = Vtop__ConstPool__TABLE_h9003e6d8_0
        [__Vtableidx5];
    __Vtableidx6 = (0xfU & vlSelf->top__DOT__dut__DOT__out);
    vlSelf->HEX0 = Vtop__ConstPool__TABLE_h9003e6d8_0
        [__Vtableidx6];
}

void Vtop___024root___eval(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval\n"); );
    // Body
    if (((IData)(vlSelf->clk_i) & (~ (IData)(vlSelf->__Vclklast__TOP__clk_i)))) {
        Vtop___024root___sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
    Vtop___024root___combo__TOP__0(vlSelf);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    // Final
    vlSelf->__Vclklast__TOP__clk_i = vlSelf->clk_i;
}

#ifdef VL_DEBUG
void Vtop___024root___eval_debug_assertions(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk_i & 0xfeU))) {
        Verilated::overWidthError("clk_i");}
    if (VL_UNLIKELY((vlSelf->rst_ni & 0xfeU))) {
        Verilated::overWidthError("rst_ni");}
    if (VL_UNLIKELY((vlSelf->key & 0xfcU))) {
        Verilated::overWidthError("key");}
    if (VL_UNLIKELY((vlSelf->sw & 0xfeU))) {
        Verilated::overWidthError("sw");}
}
#endif  // VL_DEBUG
