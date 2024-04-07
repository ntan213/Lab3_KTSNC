// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtop.h for the primary calling header

#ifndef VERILATED_VTOP___024ROOT_H_
#define VERILATED_VTOP___024ROOT_H_  // guard

#include "verilated.h"

class Vtop__Syms;

class Vtop___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk_i,0,0);
    VL_IN8(rst_ni,0,0);
    VL_IN8(key,1,0);
    VL_IN8(sw,0,0);
    VL_OUT8(HEX0,6,0);
    VL_OUT8(HEX1,6,0);
    VL_OUT8(HEX2,6,0);
    VL_OUT8(HEX3,6,0);
    VL_OUT8(HEX4,6,0);
    VL_OUT8(HEX5,6,0);
    CData/*5:0*/ top__DOT__dut__DOT__fifo_len;
    CData/*4:0*/ top__DOT__dut__DOT__FIFOControl__DOT__ptr_rd;
    CData/*4:0*/ top__DOT__dut__DOT__FIFOControl__DOT__ptr_wr;
    CData/*0:0*/ __Vclklast__TOP__clk_i;
    IData/*23:0*/ top__DOT__dut__DOT__wr_data;
    IData/*23:0*/ top__DOT__dut__DOT__rd_data;
    IData/*23:0*/ top__DOT__dut__DOT__data_o;
    IData/*23:0*/ top__DOT__dut__DOT__out;
    IData/*23:0*/ top__DOT__dut__DOT__lfshr__DOT__init;
    VlUnpacked<IData/*23:0*/, 32> top__DOT__dut__DOT__Memory__DOT__mem;
    VlUnpacked<CData/*0:0*/, 3> __Vm_traceActivity;

    // INTERNAL VARIABLES
    Vtop__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtop___024root(Vtop__Syms* symsp, const char* name);
    ~Vtop___024root();
    VL_UNCOPYABLE(Vtop___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
