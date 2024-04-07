// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_fst_c.h"
#include "Vtop__Syms.h"


void Vtop___024root__trace_chg_sub_0(Vtop___024root* vlSelf, VerilatedFst::Buffer* bufp);

void Vtop___024root__trace_chg_top_0(void* voidSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_chg_top_0\n"); );
    // Init
    Vtop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vtop___024root__trace_chg_sub_0((&vlSymsp->TOP), bufp);
}

void Vtop___024root__trace_chg_sub_0(Vtop___024root* vlSelf, VerilatedFst::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_chg_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        bufp->chgIData(oldp+0,(vlSelf->top__DOT__dut__DOT__wr_data),24);
        bufp->chgCData(oldp+1,(vlSelf->top__DOT__dut__DOT__FIFOControl__DOT__ptr_wr),5);
        bufp->chgCData(oldp+2,(vlSelf->top__DOT__dut__DOT__FIFOControl__DOT__ptr_rd),5);
        bufp->chgCData(oldp+3,(vlSelf->top__DOT__dut__DOT__fifo_len),6);
        bufp->chgBit(oldp+4,((((0U != (IData)(vlSelf->top__DOT__dut__DOT__fifo_len)) 
                               & ((IData)(vlSelf->top__DOT__dut__DOT__FIFOControl__DOT__ptr_rd) 
                                  == (IData)(vlSelf->top__DOT__dut__DOT__FIFOControl__DOT__ptr_wr)))
                               ? 1U : 0U)));
        bufp->chgBit(oldp+5,(((0U == (IData)(vlSelf->top__DOT__dut__DOT__fifo_len))
                               ? 1U : 0U)));
        bufp->chgBit(oldp+6,((1U & (~ ((0U == (IData)(vlSelf->top__DOT__dut__DOT__fifo_len))
                                        ? 1U : 0U)))));
        bufp->chgIData(oldp+7,(vlSelf->top__DOT__dut__DOT__rd_data),24);
        bufp->chgIData(oldp+8,(vlSelf->top__DOT__dut__DOT__data_o),24);
        bufp->chgIData(oldp+9,(vlSelf->top__DOT__dut__DOT__Memory__DOT__mem[0]),24);
        bufp->chgIData(oldp+10,(vlSelf->top__DOT__dut__DOT__Memory__DOT__mem[1]),24);
        bufp->chgIData(oldp+11,(vlSelf->top__DOT__dut__DOT__Memory__DOT__mem[2]),24);
        bufp->chgIData(oldp+12,(vlSelf->top__DOT__dut__DOT__Memory__DOT__mem[3]),24);
        bufp->chgIData(oldp+13,(vlSelf->top__DOT__dut__DOT__Memory__DOT__mem[4]),24);
        bufp->chgIData(oldp+14,(vlSelf->top__DOT__dut__DOT__Memory__DOT__mem[5]),24);
        bufp->chgIData(oldp+15,(vlSelf->top__DOT__dut__DOT__Memory__DOT__mem[6]),24);
        bufp->chgIData(oldp+16,(vlSelf->top__DOT__dut__DOT__Memory__DOT__mem[7]),24);
        bufp->chgIData(oldp+17,(vlSelf->top__DOT__dut__DOT__Memory__DOT__mem[8]),24);
        bufp->chgIData(oldp+18,(vlSelf->top__DOT__dut__DOT__Memory__DOT__mem[9]),24);
        bufp->chgIData(oldp+19,(vlSelf->top__DOT__dut__DOT__Memory__DOT__mem[10]),24);
        bufp->chgIData(oldp+20,(vlSelf->top__DOT__dut__DOT__Memory__DOT__mem[11]),24);
        bufp->chgIData(oldp+21,(vlSelf->top__DOT__dut__DOT__Memory__DOT__mem[12]),24);
        bufp->chgIData(oldp+22,(vlSelf->top__DOT__dut__DOT__Memory__DOT__mem[13]),24);
        bufp->chgIData(oldp+23,(vlSelf->top__DOT__dut__DOT__Memory__DOT__mem[14]),24);
        bufp->chgIData(oldp+24,(vlSelf->top__DOT__dut__DOT__Memory__DOT__mem[15]),24);
        bufp->chgIData(oldp+25,(vlSelf->top__DOT__dut__DOT__Memory__DOT__mem[16]),24);
        bufp->chgIData(oldp+26,(vlSelf->top__DOT__dut__DOT__Memory__DOT__mem[17]),24);
        bufp->chgIData(oldp+27,(vlSelf->top__DOT__dut__DOT__Memory__DOT__mem[18]),24);
        bufp->chgIData(oldp+28,(vlSelf->top__DOT__dut__DOT__Memory__DOT__mem[19]),24);
        bufp->chgIData(oldp+29,(vlSelf->top__DOT__dut__DOT__Memory__DOT__mem[20]),24);
        bufp->chgIData(oldp+30,(vlSelf->top__DOT__dut__DOT__Memory__DOT__mem[21]),24);
        bufp->chgIData(oldp+31,(vlSelf->top__DOT__dut__DOT__Memory__DOT__mem[22]),24);
        bufp->chgIData(oldp+32,(vlSelf->top__DOT__dut__DOT__Memory__DOT__mem[23]),24);
        bufp->chgIData(oldp+33,(vlSelf->top__DOT__dut__DOT__Memory__DOT__mem[24]),24);
        bufp->chgIData(oldp+34,(vlSelf->top__DOT__dut__DOT__Memory__DOT__mem[25]),24);
        bufp->chgIData(oldp+35,(vlSelf->top__DOT__dut__DOT__Memory__DOT__mem[26]),24);
        bufp->chgIData(oldp+36,(vlSelf->top__DOT__dut__DOT__Memory__DOT__mem[27]),24);
        bufp->chgIData(oldp+37,(vlSelf->top__DOT__dut__DOT__Memory__DOT__mem[28]),24);
        bufp->chgIData(oldp+38,(vlSelf->top__DOT__dut__DOT__Memory__DOT__mem[29]),24);
        bufp->chgIData(oldp+39,(vlSelf->top__DOT__dut__DOT__Memory__DOT__mem[30]),24);
        bufp->chgIData(oldp+40,(vlSelf->top__DOT__dut__DOT__Memory__DOT__mem[31]),24);
        bufp->chgIData(oldp+41,(vlSelf->top__DOT__dut__DOT__fifo_len),24);
        bufp->chgIData(oldp+42,(vlSelf->top__DOT__dut__DOT__lfshr__DOT__init),24);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
        bufp->chgIData(oldp+43,(vlSelf->top__DOT__dut__DOT__out),24);
        bufp->chgCData(oldp+44,((0xfU & vlSelf->top__DOT__dut__DOT__out)),4);
        bufp->chgCData(oldp+45,((0xfU & (vlSelf->top__DOT__dut__DOT__out 
                                         >> 4U))),4);
        bufp->chgCData(oldp+46,((0xfU & (vlSelf->top__DOT__dut__DOT__out 
                                         >> 8U))),4);
        bufp->chgCData(oldp+47,((0xfU & (vlSelf->top__DOT__dut__DOT__out 
                                         >> 0xcU))),4);
        bufp->chgCData(oldp+48,((0xfU & (vlSelf->top__DOT__dut__DOT__out 
                                         >> 0x10U))),4);
        bufp->chgCData(oldp+49,((0xfU & (vlSelf->top__DOT__dut__DOT__out 
                                         >> 0x14U))),4);
    }
    bufp->chgBit(oldp+50,(vlSelf->clk_i));
    bufp->chgBit(oldp+51,(vlSelf->rst_ni));
    bufp->chgCData(oldp+52,(vlSelf->key),2);
    bufp->chgBit(oldp+53,(vlSelf->sw));
    bufp->chgCData(oldp+54,(vlSelf->HEX0),7);
    bufp->chgCData(oldp+55,(vlSelf->HEX1),7);
    bufp->chgCData(oldp+56,(vlSelf->HEX2),7);
    bufp->chgCData(oldp+57,(vlSelf->HEX3),7);
    bufp->chgCData(oldp+58,(vlSelf->HEX4),7);
    bufp->chgCData(oldp+59,(vlSelf->HEX5),7);
    bufp->chgBit(oldp+60,((1U & ((IData)(vlSelf->key) 
                                 >> 1U))));
    bufp->chgBit(oldp+61,((1U & (IData)(vlSelf->key))));
}

void Vtop___024root__trace_cleanup(void* voidSelf, VerilatedFst* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_cleanup\n"); );
    // Init
    Vtop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
}
