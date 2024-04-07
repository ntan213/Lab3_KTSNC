// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_fst_c.h"
#include "Vtop__Syms.h"


VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__0(Vtop___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+51,"clk_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+52,"rst_ni",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+53,"key",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->declBit(c+54,"sw",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+55,"HEX0",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 6,0);
    tracep->declBus(c+56,"HEX1",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 6,0);
    tracep->declBus(c+57,"HEX2",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 6,0);
    tracep->declBus(c+58,"HEX3",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 6,0);
    tracep->declBus(c+59,"HEX4",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 6,0);
    tracep->declBus(c+60,"HEX5",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 6,0);
    tracep->pushNamePrefix("top ");
    tracep->declBit(c+51,"clk_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+52,"rst_ni",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+53,"key",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->declBit(c+54,"sw",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+55,"HEX0",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 6,0);
    tracep->declBus(c+56,"HEX1",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 6,0);
    tracep->declBus(c+57,"HEX2",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 6,0);
    tracep->declBus(c+58,"HEX3",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 6,0);
    tracep->declBus(c+59,"HEX4",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 6,0);
    tracep->declBus(c+60,"HEX5",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 6,0);
    tracep->pushNamePrefix("dut ");
    tracep->declBit(c+51,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+52,"rst",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+53,"key",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->declBit(c+54,"sw",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+55,"HEX0",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 6,0);
    tracep->declBus(c+56,"HEX1",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 6,0);
    tracep->declBus(c+57,"HEX2",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 6,0);
    tracep->declBus(c+58,"HEX3",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 6,0);
    tracep->declBus(c+59,"HEX4",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 6,0);
    tracep->declBus(c+60,"HEX5",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 6,0);
    tracep->declBit(c+51,"clkw",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+51,"clkr",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+1,"wr_data",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 23,0);
    tracep->declBit(c+61,"write",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+62,"read",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+2,"wr_addr",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
    tracep->declBus(c+3,"rd_addr",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
    tracep->declBus(c+4,"fifo_len",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 5,0);
    tracep->declBit(c+5,"fifo_full",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+6,"fifo_empty",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+7,"fifo_notempty",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+8,"rd_data",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 23,0);
    tracep->declBus(c+9,"data_o",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 23,0);
    tracep->declBus(c+44,"out",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 23,0);
    tracep->pushNamePrefix("FIFOControl ");
    tracep->declBit(c+51,"clkw",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+51,"clkr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+52,"rst",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+62,"fifo_rd",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+61,"fifo_wr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+61,"write",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+62,"read",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+2,"wr_addr",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+3,"rd_addr",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+4,"fifo_len",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 5,0);
    tracep->declBit(c+5,"fifo_full",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+7,"fifo_notempty",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+6,"fifo_empty",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+3,"ptr_rd",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
    tracep->declBus(c+2,"ptr_wr",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("HEX_0 ");
    tracep->declBus(c+45,"bcd",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+55,"segment",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 6,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("HEX_1 ");
    tracep->declBus(c+46,"bcd",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+56,"segment",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 6,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("HEX_2 ");
    tracep->declBus(c+47,"bcd",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+57,"segment",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 6,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("HEX_3 ");
    tracep->declBus(c+48,"bcd",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+58,"segment",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 6,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("HEX_4 ");
    tracep->declBus(c+49,"bcd",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+59,"segment",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 6,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("HEX_5 ");
    tracep->declBus(c+50,"bcd",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+60,"segment",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 6,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("Memory ");
    tracep->declBit(c+51,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+52,"rst",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+61,"wr_m",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+1,"wr_data",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 23,0);
    tracep->declBus(c+2,"wr_addr_m",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+3,"rd_addr_m",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+8,"data_m",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 23,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+10+i*1,"mem",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, true,(i+0), 23,0);
    }
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("Mux ");
    tracep->declBus(c+42,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 23,0);
    tracep->declBus(c+9,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 23,0);
    tracep->declBit(c+54,"sel",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+44,"c",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 23,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("Read_data ");
    tracep->declBit(c+51,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+52,"rst",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+62,"en",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+8,"D",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 23,0);
    tracep->declBus(c+9,"Q",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 23,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("lfshr ");
    tracep->declBit(c+51,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+52,"rst",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+63,"seed",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 23,0);
    tracep->declBus(c+1,"out",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 23,0);
    tracep->declBus(c+43,"init",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 23,0);
    tracep->popNamePrefix(3);
}

VL_ATTR_COLD void Vtop___024root__trace_init_top(Vtop___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_top\n"); );
    // Body
    Vtop___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vtop___024root__trace_full_top_0(void* voidSelf, VerilatedFst::Buffer* bufp);
void Vtop___024root__trace_chg_top_0(void* voidSelf, VerilatedFst::Buffer* bufp);
void Vtop___024root__trace_cleanup(void* voidSelf, VerilatedFst* /*unused*/);

VL_ATTR_COLD void Vtop___024root__trace_register(Vtop___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&Vtop___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&Vtop___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&Vtop___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vtop___024root__trace_full_sub_0(Vtop___024root* vlSelf, VerilatedFst::Buffer* bufp);

VL_ATTR_COLD void Vtop___024root__trace_full_top_0(void* voidSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_full_top_0\n"); );
    // Init
    Vtop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vtop___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vtop___024root__trace_full_sub_0(Vtop___024root* vlSelf, VerilatedFst::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullIData(oldp+1,(vlSelf->top__DOT__dut__DOT__wr_data),24);
    bufp->fullCData(oldp+2,(vlSelf->top__DOT__dut__DOT__FIFOControl__DOT__ptr_wr),5);
    bufp->fullCData(oldp+3,(vlSelf->top__DOT__dut__DOT__FIFOControl__DOT__ptr_rd),5);
    bufp->fullCData(oldp+4,(vlSelf->top__DOT__dut__DOT__fifo_len),6);
    bufp->fullBit(oldp+5,((((0U != (IData)(vlSelf->top__DOT__dut__DOT__fifo_len)) 
                            & ((IData)(vlSelf->top__DOT__dut__DOT__FIFOControl__DOT__ptr_rd) 
                               == (IData)(vlSelf->top__DOT__dut__DOT__FIFOControl__DOT__ptr_wr)))
                            ? 1U : 0U)));
    bufp->fullBit(oldp+6,(((0U == (IData)(vlSelf->top__DOT__dut__DOT__fifo_len))
                            ? 1U : 0U)));
    bufp->fullBit(oldp+7,((1U & (~ ((0U == (IData)(vlSelf->top__DOT__dut__DOT__fifo_len))
                                     ? 1U : 0U)))));
    bufp->fullIData(oldp+8,(vlSelf->top__DOT__dut__DOT__rd_data),24);
    bufp->fullIData(oldp+9,(vlSelf->top__DOT__dut__DOT__data_o),24);
    bufp->fullIData(oldp+10,(vlSelf->top__DOT__dut__DOT__Memory__DOT__mem[0]),24);
    bufp->fullIData(oldp+11,(vlSelf->top__DOT__dut__DOT__Memory__DOT__mem[1]),24);
    bufp->fullIData(oldp+12,(vlSelf->top__DOT__dut__DOT__Memory__DOT__mem[2]),24);
    bufp->fullIData(oldp+13,(vlSelf->top__DOT__dut__DOT__Memory__DOT__mem[3]),24);
    bufp->fullIData(oldp+14,(vlSelf->top__DOT__dut__DOT__Memory__DOT__mem[4]),24);
    bufp->fullIData(oldp+15,(vlSelf->top__DOT__dut__DOT__Memory__DOT__mem[5]),24);
    bufp->fullIData(oldp+16,(vlSelf->top__DOT__dut__DOT__Memory__DOT__mem[6]),24);
    bufp->fullIData(oldp+17,(vlSelf->top__DOT__dut__DOT__Memory__DOT__mem[7]),24);
    bufp->fullIData(oldp+18,(vlSelf->top__DOT__dut__DOT__Memory__DOT__mem[8]),24);
    bufp->fullIData(oldp+19,(vlSelf->top__DOT__dut__DOT__Memory__DOT__mem[9]),24);
    bufp->fullIData(oldp+20,(vlSelf->top__DOT__dut__DOT__Memory__DOT__mem[10]),24);
    bufp->fullIData(oldp+21,(vlSelf->top__DOT__dut__DOT__Memory__DOT__mem[11]),24);
    bufp->fullIData(oldp+22,(vlSelf->top__DOT__dut__DOT__Memory__DOT__mem[12]),24);
    bufp->fullIData(oldp+23,(vlSelf->top__DOT__dut__DOT__Memory__DOT__mem[13]),24);
    bufp->fullIData(oldp+24,(vlSelf->top__DOT__dut__DOT__Memory__DOT__mem[14]),24);
    bufp->fullIData(oldp+25,(vlSelf->top__DOT__dut__DOT__Memory__DOT__mem[15]),24);
    bufp->fullIData(oldp+26,(vlSelf->top__DOT__dut__DOT__Memory__DOT__mem[16]),24);
    bufp->fullIData(oldp+27,(vlSelf->top__DOT__dut__DOT__Memory__DOT__mem[17]),24);
    bufp->fullIData(oldp+28,(vlSelf->top__DOT__dut__DOT__Memory__DOT__mem[18]),24);
    bufp->fullIData(oldp+29,(vlSelf->top__DOT__dut__DOT__Memory__DOT__mem[19]),24);
    bufp->fullIData(oldp+30,(vlSelf->top__DOT__dut__DOT__Memory__DOT__mem[20]),24);
    bufp->fullIData(oldp+31,(vlSelf->top__DOT__dut__DOT__Memory__DOT__mem[21]),24);
    bufp->fullIData(oldp+32,(vlSelf->top__DOT__dut__DOT__Memory__DOT__mem[22]),24);
    bufp->fullIData(oldp+33,(vlSelf->top__DOT__dut__DOT__Memory__DOT__mem[23]),24);
    bufp->fullIData(oldp+34,(vlSelf->top__DOT__dut__DOT__Memory__DOT__mem[24]),24);
    bufp->fullIData(oldp+35,(vlSelf->top__DOT__dut__DOT__Memory__DOT__mem[25]),24);
    bufp->fullIData(oldp+36,(vlSelf->top__DOT__dut__DOT__Memory__DOT__mem[26]),24);
    bufp->fullIData(oldp+37,(vlSelf->top__DOT__dut__DOT__Memory__DOT__mem[27]),24);
    bufp->fullIData(oldp+38,(vlSelf->top__DOT__dut__DOT__Memory__DOT__mem[28]),24);
    bufp->fullIData(oldp+39,(vlSelf->top__DOT__dut__DOT__Memory__DOT__mem[29]),24);
    bufp->fullIData(oldp+40,(vlSelf->top__DOT__dut__DOT__Memory__DOT__mem[30]),24);
    bufp->fullIData(oldp+41,(vlSelf->top__DOT__dut__DOT__Memory__DOT__mem[31]),24);
    bufp->fullIData(oldp+42,(vlSelf->top__DOT__dut__DOT__fifo_len),24);
    bufp->fullIData(oldp+43,(vlSelf->top__DOT__dut__DOT__lfshr__DOT__init),24);
    bufp->fullIData(oldp+44,(vlSelf->top__DOT__dut__DOT__out),24);
    bufp->fullCData(oldp+45,((0xfU & vlSelf->top__DOT__dut__DOT__out)),4);
    bufp->fullCData(oldp+46,((0xfU & (vlSelf->top__DOT__dut__DOT__out 
                                      >> 4U))),4);
    bufp->fullCData(oldp+47,((0xfU & (vlSelf->top__DOT__dut__DOT__out 
                                      >> 8U))),4);
    bufp->fullCData(oldp+48,((0xfU & (vlSelf->top__DOT__dut__DOT__out 
                                      >> 0xcU))),4);
    bufp->fullCData(oldp+49,((0xfU & (vlSelf->top__DOT__dut__DOT__out 
                                      >> 0x10U))),4);
    bufp->fullCData(oldp+50,((0xfU & (vlSelf->top__DOT__dut__DOT__out 
                                      >> 0x14U))),4);
    bufp->fullBit(oldp+51,(vlSelf->clk_i));
    bufp->fullBit(oldp+52,(vlSelf->rst_ni));
    bufp->fullCData(oldp+53,(vlSelf->key),2);
    bufp->fullBit(oldp+54,(vlSelf->sw));
    bufp->fullCData(oldp+55,(vlSelf->HEX0),7);
    bufp->fullCData(oldp+56,(vlSelf->HEX1),7);
    bufp->fullCData(oldp+57,(vlSelf->HEX2),7);
    bufp->fullCData(oldp+58,(vlSelf->HEX3),7);
    bufp->fullCData(oldp+59,(vlSelf->HEX4),7);
    bufp->fullCData(oldp+60,(vlSelf->HEX5),7);
    bufp->fullBit(oldp+61,((1U & ((IData)(vlSelf->key) 
                                  >> 1U))));
    bufp->fullBit(oldp+62,((1U & (IData)(vlSelf->key))));
    bufp->fullIData(oldp+63,(0U),24);
}
