// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2016.3
// Copyright (C) 1986-2016 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

#ifndef _paralleltest_HH_
#define _paralleltest_HH_

#include "systemc.h"
#include "AESL_pkg.h"

#include "paralleltest_buffbkb.h"

namespace ap_rtl {

struct paralleltest : public sc_module {
    // Port declarations 13
    sc_in_clk ap_clk;
    sc_in< sc_logic > ap_rst;
    sc_in< sc_logic > ap_start;
    sc_out< sc_logic > ap_done;
    sc_out< sc_logic > ap_idle;
    sc_out< sc_logic > ap_ready;
    sc_in< sc_logic > p_doWrite;
    sc_in< sc_lv<32> > p_writeAddr;
    sc_in< sc_lv<32> > p_writeData;
    sc_in< sc_logic > p_doRead;
    sc_in< sc_lv<32> > p_readAddr;
    sc_out< sc_lv<32> > p_readData;
    sc_out< sc_logic > p_readData_ap_vld;


    // Module declarations
    paralleltest(sc_module_name name);
    SC_HAS_PROCESS(paralleltest);

    ~paralleltest();

    sc_trace_file* mVcdFile;

    ofstream mHdltvinHandle;
    ofstream mHdltvoutHandle;
    paralleltest_buffbkb* buffer_r_U;
    sc_signal< sc_lv<3> > ap_CS_fsm;
    sc_signal< sc_lv<1> > ap_CS_fsm_state1;
    sc_signal< sc_lv<10> > buffer_r_address0;
    sc_signal< sc_logic > buffer_r_ce0;
    sc_signal< sc_logic > buffer_r_we0;
    sc_signal< sc_lv<32> > buffer_r_q0;
    sc_signal< sc_lv<1> > p_doRead_read_read_fu_44_p2;
    sc_signal< sc_lv<1> > tmp_6_reg_207;
    sc_signal< sc_lv<10> > tmp_7_fu_158_p1;
    sc_signal< sc_lv<10> > tmp_7_reg_212;
    sc_signal< sc_lv<10> > tmp_8_fu_162_p1;
    sc_signal< sc_lv<10> > tmp_8_reg_217;
    sc_signal< sc_lv<1> > ap_CS_fsm_state2;
    sc_signal< sc_lv<32> > tmp_fu_141_p3;
    sc_signal< sc_lv<1> > p_doWrite_read_read_fu_62_p2;
    sc_signal< sc_lv<32> > tmp_1_fu_192_p3;
    sc_signal< sc_lv<1> > ap_CS_fsm_state3;
    sc_signal< sc_lv<10> > tmp_3_fu_105_p1;
    sc_signal< sc_lv<10> > tmp_4_fu_117_p1;
    sc_signal< sc_lv<10> > tmp_5_fu_121_p2;
    sc_signal< sc_lv<32> > p_and_t_fu_127_p3;
    sc_signal< sc_lv<1> > tmp_2_fu_97_p3;
    sc_signal< sc_lv<32> > p_neg_t_fu_135_p2;
    sc_signal< sc_lv<32> > p_and_f_fu_109_p3;
    sc_signal< sc_lv<10> > tmp_9_fu_173_p2;
    sc_signal< sc_lv<32> > p_and_t5_fu_178_p3;
    sc_signal< sc_lv<32> > p_neg_t6_fu_186_p2;
    sc_signal< sc_lv<32> > p_and_f3_fu_166_p3;
    sc_signal< sc_lv<3> > ap_NS_fsm;
    static const sc_logic ap_const_logic_1;
    static const sc_logic ap_const_logic_0;
    static const sc_lv<3> ap_ST_fsm_state1;
    static const sc_lv<3> ap_ST_fsm_state2;
    static const sc_lv<3> ap_ST_fsm_state3;
    static const sc_lv<32> ap_const_lv32_0;
    static const sc_lv<1> ap_const_lv1_1;
    static const sc_lv<1> ap_const_lv1_0;
    static const sc_lv<32> ap_const_lv32_1;
    static const sc_lv<32> ap_const_lv32_2;
    static const sc_lv<32> ap_const_lv32_1F;
    static const sc_lv<22> ap_const_lv22_0;
    static const sc_lv<10> ap_const_lv10_0;
    // Thread declarations
    void thread_ap_clk_no_reset_();
    void thread_ap_CS_fsm_state1();
    void thread_ap_CS_fsm_state2();
    void thread_ap_CS_fsm_state3();
    void thread_ap_done();
    void thread_ap_idle();
    void thread_ap_ready();
    void thread_buffer_r_address0();
    void thread_buffer_r_ce0();
    void thread_buffer_r_we0();
    void thread_p_and_f3_fu_166_p3();
    void thread_p_and_f_fu_109_p3();
    void thread_p_and_t5_fu_178_p3();
    void thread_p_and_t_fu_127_p3();
    void thread_p_doRead_read_read_fu_44_p2();
    void thread_p_doWrite_read_read_fu_62_p2();
    void thread_p_neg_t6_fu_186_p2();
    void thread_p_neg_t_fu_135_p2();
    void thread_p_readData();
    void thread_p_readData_ap_vld();
    void thread_tmp_1_fu_192_p3();
    void thread_tmp_2_fu_97_p3();
    void thread_tmp_3_fu_105_p1();
    void thread_tmp_4_fu_117_p1();
    void thread_tmp_5_fu_121_p2();
    void thread_tmp_7_fu_158_p1();
    void thread_tmp_8_fu_162_p1();
    void thread_tmp_9_fu_173_p2();
    void thread_tmp_fu_141_p3();
    void thread_ap_NS_fsm();
    void thread_hdltv_gen();
};

}

using namespace ap_rtl;

#endif
