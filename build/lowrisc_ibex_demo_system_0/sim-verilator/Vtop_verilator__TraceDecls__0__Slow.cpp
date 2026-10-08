// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing declarations

#include "verilated_fst_c.h"


void Vtop_verilator___024root__traceDeclTypesSub0(VerilatedFst* tracep) {
    {
        const char* __VenumItemNames[]
        = {"RegFileFF", "RegFileFPGA", "RegFileLatch"};
        const char* __VenumItemValues[]
        = {"0", "1", "10"};
        tracep->declDTypeEnum(1, "ibex_pkg::regfile_e", 3, 32, __VenumItemNames, __VenumItemValues);
    }
    {
        const char* __VenumItemNames[]
        = {"AccessRegister", "QuickAccess", "AccessMemory"};
        const char* __VenumItemValues[]
        = {"0", "1", "10"};
        tracep->declDTypeEnum(2, "dm::cmd_e", 3, 8, __VenumItemNames, __VenumItemValues);
    }
    {
        const char* __VenumItemNames[]
        = {"CmdErrNone", "CmdErrBusy", "CmdErrNotSupported", 
                                "CmdErrorException", 
                                "CmdErrorHaltResume", 
                                "CmdErrorBus", "CmdErrorOther"};
        const char* __VenumItemValues[]
        = {"0", "1", "10", "11", "100", "101", "111"};
        tracep->declDTypeEnum(3, "dm::cmderr_e", 7, 3, __VenumItemNames, __VenumItemValues);
    }
    {
        const char* __VenumItemNames[]
        = {"DTM_NOP", "DTM_READ", "DTM_WRITE"};
        const char* __VenumItemValues[]
        = {"0", "1", "10"};
        tracep->declDTypeEnum(4, "dm::dtm_op_e", 3, 2, __VenumItemNames, __VenumItemValues);
    }
    {
        const char* __VenumItemNames[]
        = {"DMINoError", "DMIReservedError", "DMIOPFailed", 
                                "DMIBusy"};
        const char* __VenumItemValues[]
        = {"0", "1", "10", "11"};
        tracep->declDTypeEnum(5, "dmi_jtag.dmi_error_e", 4, 2, __VenumItemNames, __VenumItemValues);
    }
    {
        const char* __VenumItemNames[]
        = {"Idle", "Read", "WaitReadValid", "Write", 
                                "WaitWriteValid"};
        const char* __VenumItemValues[]
        = {"0", "1", "10", "11", "100"};
        tracep->declDTypeEnum(6, "dmi_jtag.state_e", 5, 3, __VenumItemNames, __VenumItemValues);
    }
    {
        const char* __VenumItemNames[]
        = {"LoSt", "HiSt"};
        const char* __VenumItemValues[]
        = {"0", "1"};
        tracep->declDTypeEnum(7, "prim_sync_reqack.rz_fsm_e", 2, 1, __VenumItemNames, __VenumItemValues);
    }
    {
        const char* __VenumItemNames[]
        = {"ImplGeneric", "ImplXilinx", "ImplBadbit"};
        const char* __VenumItemValues[]
        = {"0", "1", "10"};
        tracep->declDTypeEnum(8, "prim_pkg::impl_e", 3, 32, __VenumItemNames, __VenumItemValues);
    }
    {
        const char* __VenumItemNames[]
        = {"TestLogicReset", "RunTestIdle", "SelectDrScan", 
                                "CaptureDr", "ShiftDr", 
                                "Exit1Dr", "PauseDr", 
                                "Exit2Dr", "UpdateDr", 
                                "SelectIrScan", "CaptureIr", 
                                "ShiftIr", "Exit1Ir", 
                                "PauseIr", "Exit2Ir", 
                                "UpdateIr"};
        const char* __VenumItemValues[]
        = {"0", "1", "10", "11", "100", "101", "110", 
                                "111", "1000", "1001", 
                                "1010", "1011", "1100", 
                                "1101", "1110", "1111"};
        tracep->declDTypeEnum(9, "dmi_jtag_tap.tap_state_e", 16, 4, __VenumItemNames, __VenumItemValues);
    }
    {
        const char* __VenumItemNames[]
        = {"BYPASS0", "IDCODE", "DTMCSR", "DMIACCESS", 
                                "BYPASS1"};
        const char* __VenumItemValues[]
        = {"0", "1", "10000", "10001", "11111"};
        tracep->declDTypeEnum(10, "dmi_jtag_tap.ir_reg_e", 5, 5, __VenumItemNames, __VenumItemValues);
    }
    {
        const char* __VenumItemNames[]
        = {"Data0", "Data1", "Data2", "Data3", "Data4", 
                                "Data5", "Data6", "Data7", 
                                "Data8", "Data9", "Data10", 
                                "Data11", "DMControl", 
                                "DMStatus", "Hartinfo", 
                                "HaltSum1", "HAWindowSel", 
                                "HAWindow", "AbstractCS", 
                                "Command", "AbstractAuto", 
                                "DevTreeAddr0", "DevTreeAddr1", 
                                "DevTreeAddr2", "DevTreeAddr3", 
                                "NextDM", "ProgBuf0", 
                                "ProgBuf1", "ProgBuf2", 
                                "ProgBuf3", "ProgBuf4", 
                                "ProgBuf5", "ProgBuf6", 
                                "ProgBuf7", "ProgBuf8", 
                                "ProgBuf9", "ProgBuf10", 
                                "ProgBuf11", "ProgBuf12", 
                                "ProgBuf13", "ProgBuf14", 
                                "ProgBuf15", "AuthData", 
                                "HaltSum2", "HaltSum3", 
                                "SBAddress3", "SBCS", 
                                "SBAddress0", "SBAddress1", 
                                "SBAddress2", "SBData0", 
                                "SBData1", "SBData2", 
                                "SBData3", "HaltSum0"};
        const char* __VenumItemValues[]
        = {"100", "101", "110", "111", "1000", "1001", 
                                "1010", "1011", "1100", 
                                "1101", "1110", "1111", 
                                "10000", "10001", "10010", 
                                "10011", "10100", "10101", 
                                "10110", "10111", "11000", 
                                "11001", "11010", "11011", 
                                "11100", "11101", "100000", 
                                "100001", "100010", 
                                "100011", "100100", 
                                "100101", "100110", 
                                "100111", "101000", 
                                "101001", "101010", 
                                "101011", "101100", 
                                "101101", "101110", 
                                "101111", "110000", 
                                "110100", "110101", 
                                "110111", "111000", 
                                "111001", "111010", 
                                "111011", "111100", 
                                "111101", "111110", 
                                "111111", "1000000"};
        tracep->declDTypeEnum(11, "dm::dm_csr_e", 55, 8, __VenumItemNames, __VenumItemValues);
    }
    {
        const char* __VenumItemNames[]
        = {"Idle", "Go", "Resume", "CmdExecuting"};
        const char* __VenumItemValues[]
        = {"0", "1", "10", "11"};
        tracep->declDTypeEnum(12, "dm_mem.state_e", 4, 2, __VenumItemNames, __VenumItemValues);
    }
    {
        const char* __VenumItemNames[]
        = {"Idle", "Read", "Write", "WaitRead", "WaitWrite"};
        const char* __VenumItemValues[]
        = {"0", "1", "10", "11", "100"};
        tracep->declDTypeEnum(13, "dm::sba_state_e", 5, 3, __VenumItemNames, __VenumItemValues);
    }
    {
        const char* __VenumItemNames[]
        = {"IDLE", "START", "SEND", "STOP"};
        const char* __VenumItemValues[]
        = {"0", "1", "10", "11"};
        tracep->declDTypeEnum(14, "spi_host.spi_state_t", 4, 2, __VenumItemNames, __VenumItemValues);
    }
    {
        const char* __VenumItemNames[]
        = {"PMP_MODE_OFF", "PMP_MODE_TOR", "PMP_MODE_NA4", 
                                "PMP_MODE_NAPOT"};
        const char* __VenumItemValues[]
        = {"0", "1", "10", "11"};
        tracep->declDTypeEnum(15, "ibex_pkg::pmp_cfg_mode_e", 4, 2, __VenumItemNames, __VenumItemValues);
    }
    {
        const char* __VenumItemNames[]
        = {"RV32MNone", "RV32MSlow", "RV32MFast", "RV32MSingleCycle"};
        const char* __VenumItemValues[]
        = {"0", "1", "10", "11"};
        tracep->declDTypeEnum(16, "ibex_pkg::rv32m_e", 4, 32, __VenumItemNames, __VenumItemValues);
    }
    {
        const char* __VenumItemNames[]
        = {"RV32BNone", "RV32BBalanced", "RV32BOTEarlGrey", 
                                "RV32BFull"};
        const char* __VenumItemValues[]
        = {"0", "1", "10", "11"};
        tracep->declDTypeEnum(17, "ibex_pkg::rv32b_e", 4, 32, __VenumItemNames, __VenumItemValues);
    }
    {
        const char* __VenumItemNames[]
        = {"PC_BOOT", "PC_JUMP", "PC_EXC", "PC_ERET", 
                                "PC_DRET", "PC_BP"};
        const char* __VenumItemValues[]
        = {"0", "1", "10", "11", "100", "101"};
        tracep->declDTypeEnum(18, "ibex_pkg::pc_sel_e", 6, 3, __VenumItemNames, __VenumItemValues);
    }
    {
        const char* __VenumItemNames[]
        = {"EXC_PC_EXC", "EXC_PC_IRQ", "EXC_PC_DBD", 
                                "EXC_PC_DBG_EXC"};
        const char* __VenumItemValues[]
        = {"0", "1", "10", "11"};
        tracep->declDTypeEnum(19, "ibex_pkg::exc_pc_sel_e", 4, 2, __VenumItemNames, __VenumItemValues);
    }
    {
        const char* __VenumItemNames[]
        = {"ALU_ADD", "ALU_SUB", "ALU_XOR", "ALU_OR", 
                                "ALU_AND", "ALU_XNOR", 
                                "ALU_ORN", "ALU_ANDN", 
                                "ALU_SRA", "ALU_SRL", 
                                "ALU_SLL", "ALU_SRO", 
                                "ALU_SLO", "ALU_ROR", 
                                "ALU_ROL", "ALU_GREV", 
                                "ALU_GORC", "ALU_SHFL", 
                                "ALU_UNSHFL", "ALU_XPERM_N", 
                                "ALU_XPERM_B", "ALU_XPERM_H", 
                                "ALU_SH1ADD", "ALU_SH2ADD", 
                                "ALU_SH3ADD", "ALU_LT", 
                                "ALU_LTU", "ALU_GE", 
                                "ALU_GEU", "ALU_EQ", 
                                "ALU_NE", "ALU_MIN", 
                                "ALU_MINU", "ALU_MAX", 
                                "ALU_MAXU", "ALU_PACK", 
                                "ALU_PACKU", "ALU_PACKH", 
                                "ALU_SEXTB", "ALU_SEXTH", 
                                "ALU_CLZ", "ALU_CTZ", 
                                "ALU_CPOP", "ALU_SLT", 
                                "ALU_SLTU", "ALU_CMOV", 
                                "ALU_CMIX", "ALU_FSL", 
                                "ALU_FSR", "ALU_BSET", 
                                "ALU_BCLR", "ALU_BINV", 
                                "ALU_BEXT", "ALU_BCOMPRESS", 
                                "ALU_BDECOMPRESS", 
                                "ALU_BFP", "ALU_CLMUL", 
                                "ALU_CLMULR", "ALU_CLMULH", 
                                "ALU_CRC32_B", "ALU_CRC32C_B", 
                                "ALU_CRC32_H", "ALU_CRC32C_H", 
                                "ALU_CRC32_W", "ALU_CRC32C_W"};
        const char* __VenumItemValues[]
        = {"0", "1", "10", "11", "100", "101", "110", 
                                "111", "1000", "1001", 
                                "1010", "1011", "1100", 
                                "1101", "1110", "1111", 
                                "10000", "10001", "10010", 
                                "10011", "10100", "10101", 
                                "10110", "10111", "11000", 
                                "11001", "11010", "11011", 
                                "11100", "11101", "11110", 
                                "11111", "100000", 
                                "100001", "100010", 
                                "100011", "100100", 
                                "100101", "100110", 
                                "100111", "101000", 
                                "101001", "101010", 
                                "101011", "101100", 
                                "101101", "101110", 
                                "101111", "110000", 
                                "110001", "110010", 
                                "110011", "110100", 
                                "110101", "110110", 
                                "110111", "111000", 
                                "111001", "111010", 
                                "111011", "111100", 
                                "111101", "111110", 
                                "111111", "1000000"};
        tracep->declDTypeEnum(20, "ibex_pkg::alu_op_e", 65, 7, __VenumItemNames, __VenumItemValues);
    }
    {
        const char* __VenumItemNames[]
        = {"MD_OP_MULL", "MD_OP_MULH", "MD_OP_DIV", 
                                "MD_OP_REM"};
        const char* __VenumItemValues[]
        = {"0", "1", "10", "11"};
        tracep->declDTypeEnum(21, "ibex_pkg::md_op_e", 4, 2, __VenumItemNames, __VenumItemValues);
    }
    {
        const char* __VenumItemNames[]
        = {"CSR_OP_READ", "CSR_OP_WRITE", "CSR_OP_SET", 
                                "CSR_OP_CLEAR"};
        const char* __VenumItemValues[]
        = {"0", "1", "10", "11"};
        tracep->declDTypeEnum(22, "ibex_pkg::csr_op_e", 4, 2, __VenumItemNames, __VenumItemValues);
    }
    {
        const char* __VenumItemNames[]
        = {"CSR_MVENDORID", "CSR_MARCHID", "CSR_MIMPID", 
                                "CSR_MHARTID", "CSR_MCONFIGPTR", 
                                "CSR_MSTATUS", "CSR_MISA", 
                                "CSR_MIE", "CSR_MTVEC", 
                                "CSR_MCOUNTEREN", "CSR_MSTATUSH", 
                                "CSR_MENVCFG", "CSR_MENVCFGH", 
                                "CSR_MSCRATCH", "CSR_MEPC", 
                                "CSR_MCAUSE", "CSR_MTVAL", 
                                "CSR_MIP", "CSR_PMPCFG0", 
                                "CSR_PMPCFG1", "CSR_PMPCFG2", 
                                "CSR_PMPCFG3", "CSR_PMPADDR0", 
                                "CSR_PMPADDR1", "CSR_PMPADDR2", 
                                "CSR_PMPADDR3", "CSR_PMPADDR4", 
                                "CSR_PMPADDR5", "CSR_PMPADDR6", 
                                "CSR_PMPADDR7", "CSR_PMPADDR8", 
                                "CSR_PMPADDR9", "CSR_PMPADDR10", 
                                "CSR_PMPADDR11", "CSR_PMPADDR12", 
                                "CSR_PMPADDR13", "CSR_PMPADDR14", 
                                "CSR_PMPADDR15", "CSR_SCONTEXT", 
                                "CSR_MSECCFG", "CSR_MSECCFGH", 
                                "CSR_TSELECT", "CSR_TDATA1", 
                                "CSR_TDATA2", "CSR_TDATA3", 
                                "CSR_MCONTEXT", "CSR_MSCONTEXT", 
                                "CSR_DCSR", "CSR_DPC", 
                                "CSR_DSCRATCH0", "CSR_DSCRATCH1", 
                                "CSR_MCOUNTINHIBIT", 
                                "CSR_MHPMEVENT3", "CSR_MHPMEVENT4", 
                                "CSR_MHPMEVENT5", "CSR_MHPMEVENT6", 
                                "CSR_MHPMEVENT7", "CSR_MHPMEVENT8", 
                                "CSR_MHPMEVENT9", "CSR_MHPMEVENT10", 
                                "CSR_MHPMEVENT11", 
                                "CSR_MHPMEVENT12", 
                                "CSR_MHPMEVENT13", 
                                "CSR_MHPMEVENT14", 
                                "CSR_MHPMEVENT15", 
                                "CSR_MHPMEVENT16", 
                                "CSR_MHPMEVENT17", 
                                "CSR_MHPMEVENT18", 
                                "CSR_MHPMEVENT19", 
                                "CSR_MHPMEVENT20", 
                                "CSR_MHPMEVENT21", 
                                "CSR_MHPMEVENT22", 
                                "CSR_MHPMEVENT23", 
                                "CSR_MHPMEVENT24", 
                                "CSR_MHPMEVENT25", 
                                "CSR_MHPMEVENT26", 
                                "CSR_MHPMEVENT27", 
                                "CSR_MHPMEVENT28", 
                                "CSR_MHPMEVENT29", 
                                "CSR_MHPMEVENT30", 
                                "CSR_MHPMEVENT31", 
                                "CSR_MCYCLE", "CSR_MINSTRET", 
                                "CSR_MHPMCOUNTER3", 
                                "CSR_MHPMCOUNTER4", 
                                "CSR_MHPMCOUNTER5", 
                                "CSR_MHPMCOUNTER6", 
                                "CSR_MHPMCOUNTER7", 
                                "CSR_MHPMCOUNTER8", 
                                "CSR_MHPMCOUNTER9", 
                                "CSR_MHPMCOUNTER10", 
                                "CSR_MHPMCOUNTER11", 
                                "CSR_MHPMCOUNTER12", 
                                "CSR_MHPMCOUNTER13", 
                                "CSR_MHPMCOUNTER14", 
                                "CSR_MHPMCOUNTER15", 
                                "CSR_MHPMCOUNTER16", 
                                "CSR_MHPMCOUNTER17", 
                                "CSR_MHPMCOUNTER18", 
                                "CSR_MHPMCOUNTER19", 
                                "CSR_MHPMCOUNTER20", 
                                "CSR_MHPMCOUNTER21", 
                                "CSR_MHPMCOUNTER22", 
                                "CSR_MHPMCOUNTER23", 
                                "CSR_MHPMCOUNTER24", 
                                "CSR_MHPMCOUNTER25", 
                                "CSR_MHPMCOUNTER26", 
                                "CSR_MHPMCOUNTER27", 
                                "CSR_MHPMCOUNTER28", 
                                "CSR_MHPMCOUNTER29", 
                                "CSR_MHPMCOUNTER30", 
                                "CSR_MHPMCOUNTER31", 
                                "CSR_MCYCLEH", "CSR_MINSTRETH", 
                                "CSR_MHPMCOUNTER3H", 
                                "CSR_MHPMCOUNTER4H", 
                                "CSR_MHPMCOUNTER5H", 
                                "CSR_MHPMCOUNTER6H", 
                                "CSR_MHPMCOUNTER7H", 
                                "CSR_MHPMCOUNTER8H", 
                                "CSR_MHPMCOUNTER9H", 
                                "CSR_MHPMCOUNTER10H", 
                                "CSR_MHPMCOUNTER11H", 
                                "CSR_MHPMCOUNTER12H", 
                                "CSR_MHPMCOUNTER13H", 
                                "CSR_MHPMCOUNTER14H", 
                                "CSR_MHPMCOUNTER15H", 
                                "CSR_MHPMCOUNTER16H", 
                                "CSR_MHPMCOUNTER17H", 
                                "CSR_MHPMCOUNTER18H", 
                                "CSR_MHPMCOUNTER19H", 
                                "CSR_MHPMCOUNTER20H", 
                                "CSR_MHPMCOUNTER21H", 
                                "CSR_MHPMCOUNTER22H", 
                                "CSR_MHPMCOUNTER23H", 
                                "CSR_MHPMCOUNTER24H", 
                                "CSR_MHPMCOUNTER25H", 
                                "CSR_MHPMCOUNTER26H", 
                                "CSR_MHPMCOUNTER27H", 
                                "CSR_MHPMCOUNTER28H", 
                                "CSR_MHPMCOUNTER29H", 
                                "CSR_MHPMCOUNTER30H", 
                                "CSR_MHPMCOUNTER31H", 
                                "CSR_CPUCTRLSTS", "CSR_SECURESEED"};
        const char* __VenumItemValues[]
        = {"111100010001", "111100010010", "111100010011", 
                                "111100010100", "111100010101", 
                                "1100000000", "1100000001", 
                                "1100000100", "1100000101", 
                                "1100000110", "1100010000", 
                                "1100001010", "1100011010", 
                                "1101000000", "1101000001", 
                                "1101000010", "1101000011", 
                                "1101000100", "1110100000", 
                                "1110100001", "1110100010", 
                                "1110100011", "1110110000", 
                                "1110110001", "1110110010", 
                                "1110110011", "1110110100", 
                                "1110110101", "1110110110", 
                                "1110110111", "1110111000", 
                                "1110111001", "1110111010", 
                                "1110111011", "1110111100", 
                                "1110111101", "1110111110", 
                                "1110111111", "10110101000", 
                                "11101000111", "11101010111", 
                                "11110100000", "11110100001", 
                                "11110100010", "11110100011", 
                                "11110101000", "11110101010", 
                                "11110110000", "11110110001", 
                                "11110110010", "11110110011", 
                                "1100100000", "1100100011", 
                                "1100100100", "1100100101", 
                                "1100100110", "1100100111", 
                                "1100101000", "1100101001", 
                                "1100101010", "1100101011", 
                                "1100101100", "1100101101", 
                                "1100101110", "1100101111", 
                                "1100110000", "1100110001", 
                                "1100110010", "1100110011", 
                                "1100110100", "1100110101", 
                                "1100110110", "1100110111", 
                                "1100111000", "1100111001", 
                                "1100111010", "1100111011", 
                                "1100111100", "1100111101", 
                                "1100111110", "1100111111", 
                                "101100000000", "101100000010", 
                                "101100000011", "101100000100", 
                                "101100000101", "101100000110", 
                                "101100000111", "101100001000", 
                                "101100001001", "101100001010", 
                                "101100001011", "101100001100", 
                                "101100001101", "101100001110", 
                                "101100001111", "101100010000", 
                                "101100010001", "101100010010", 
                                "101100010011", "101100010100", 
                                "101100010101", "101100010110", 
                                "101100010111", "101100011000", 
                                "101100011001", "101100011010", 
                                "101100011011", "101100011100", 
                                "101100011101", "101100011110", 
                                "101100011111", "101110000000", 
                                "101110000010", "101110000011", 
                                "101110000100", "101110000101", 
                                "101110000110", "101110000111", 
                                "101110001000", "101110001001", 
                                "101110001010", "101110001011", 
                                "101110001100", "101110001101", 
                                "101110001110", "101110001111", 
                                "101110010000", "101110010001", 
                                "101110010010", "101110010011", 
                                "101110010100", "101110010101", 
                                "101110010110", "101110010111", 
                                "101110011000", "101110011001", 
                                "101110011010", "101110011011", 
                                "101110011100", "101110011101", 
                                "101110011110", "101110011111", 
                                "11111000000", "11111000001"};
        tracep->declDTypeEnum(23, "ibex_pkg::csr_num_e", 145, 12, __VenumItemNames, __VenumItemValues);
    }
    {
        const char* __VenumItemNames[]
        = {"WB_INSTR_LOAD", "WB_INSTR_STORE", "WB_INSTR_OTHER"};
        const char* __VenumItemValues[]
        = {"0", "1", "10"};
        tracep->declDTypeEnum(24, "ibex_pkg::wb_instr_type_e", 3, 2, __VenumItemNames, __VenumItemValues);
    }
    {
        const char* __VenumItemNames[]
        = {"PRIV_LVL_M", "PRIV_LVL_H", "PRIV_LVL_S", 
                                "PRIV_LVL_U"};
        const char* __VenumItemValues[]
        = {"11", "10", "1", "0"};
        tracep->declDTypeEnum(25, "ibex_pkg::priv_lvl_e", 4, 2, __VenumItemNames, __VenumItemValues);
    }
    {
        const char* __VenumItemNames[]
        = {"DBG_CAUSE_NONE", "DBG_CAUSE_EBREAK", "DBG_CAUSE_TRIGGER", 
                                "DBG_CAUSE_HALTREQ", 
                                "DBG_CAUSE_STEP"};
        const char* __VenumItemValues[]
        = {"0", "1", "10", "11", "100"};
        tracep->declDTypeEnum(26, "ibex_pkg::dbg_cause_e", 5, 3, __VenumItemNames, __VenumItemValues);
    }
    {
        const char* __VenumItemNames[]
        = {"XDEBUGVER_NO", "XDEBUGVER_STD", "XDEBUGVER_NONSTD"};
        const char* __VenumItemValues[]
        = {"0", "100", "1111"};
        tracep->declDTypeEnum(27, "ibex_pkg::x_debug_ver_e", 3, 4, __VenumItemNames, __VenumItemValues);
    }
    {
        const char* __VenumItemNames[]
        = {"MD_IDLE", "MD_ABS_A", "MD_ABS_B", "MD_COMP", 
                                "MD_LAST", "MD_CHANGE_SIGN", 
                                "MD_FINISH"};
        const char* __VenumItemValues[]
        = {"0", "1", "10", "11", "100", "101", "110"};
        tracep->declDTypeEnum(28, "ibex_multdiv_fast.md_fsm_e", 7, 3, __VenumItemNames, __VenumItemValues);
    }
    {
        const char* __VenumItemNames[]
        = {"ALBL", "ALBH", "AHBL", "AHBH"};
        const char* __VenumItemValues[]
        = {"0", "1", "10", "11"};
        tracep->declDTypeEnum(29, "ibex_multdiv_fast.mult_fsm_e", 4, 2, __VenumItemNames, __VenumItemValues);
    }
    {
        const char* __VenumItemNames[]
        = {"RF_WD_EX", "RF_WD_CSR"};
        const char* __VenumItemValues[]
        = {"0", "1"};
        tracep->declDTypeEnum(30, "ibex_pkg::rf_wd_sel_e", 2, 1, __VenumItemNames, __VenumItemValues);
    }
    {
        const char* __VenumItemNames[]
        = {"OP_A_REG_A", "OP_A_FWD", "OP_A_CURRPC", 
                                "OP_A_IMM"};
        const char* __VenumItemValues[]
        = {"0", "1", "10", "11"};
        tracep->declDTypeEnum(31, "ibex_pkg::op_a_sel_e", 4, 2, __VenumItemNames, __VenumItemValues);
    }
    {
        const char* __VenumItemNames[]
        = {"OP_B_REG_B", "OP_B_IMM"};
        const char* __VenumItemValues[]
        = {"0", "1"};
        tracep->declDTypeEnum(32, "ibex_pkg::op_b_sel_e", 2, 1, __VenumItemNames, __VenumItemValues);
    }
    {
        const char* __VenumItemNames[]
        = {"IMM_B_I", "IMM_B_S", "IMM_B_B", "IMM_B_U", 
                                "IMM_B_J", "IMM_B_INCR_PC", 
                                "IMM_B_INCR_ADDR"};
        const char* __VenumItemValues[]
        = {"0", "1", "10", "11", "100", "101", "110"};
        tracep->declDTypeEnum(33, "ibex_pkg::imm_b_sel_e", 7, 3, __VenumItemNames, __VenumItemValues);
    }
    {
        const char* __VenumItemNames[]
        = {"IMM_A_Z", "IMM_A_ZERO"};
        const char* __VenumItemValues[]
        = {"0", "1"};
        tracep->declDTypeEnum(34, "ibex_pkg::imm_a_sel_e", 2, 1, __VenumItemNames, __VenumItemValues);
    }
    {
        const char* __VenumItemNames[]
        = {"FIRST_CYCLE", "MULTI_CYCLE"};
        const char* __VenumItemValues[]
        = {"0", "1"};
        tracep->declDTypeEnum(35, "ibex_id_stage.id_fsm_e", 2, 1, __VenumItemNames, __VenumItemValues);
    }
    {
        const char* __VenumItemNames[]
        = {"RESET", "BOOT_SET", "WAIT_SLEEP", "SLEEP", 
                                "FIRST_FETCH", "DECODE", 
                                "FLUSH", "IRQ_TAKEN", 
                                "DBG_TAKEN_IF", "DBG_TAKEN_ID"};
        const char* __VenumItemValues[]
        = {"0", "1", "10", "11", "100", "101", "110", 
                                "111", "1000", "1001"};
        tracep->declDTypeEnum(36, "ibex_pkg::ctrl_fsm_e", 10, 4, __VenumItemNames, __VenumItemValues);
    }
    {
        const char* __VenumItemNames[]
        = {"NMI_INT_CAUSE_ECC"};
        const char* __VenumItemValues[]
        = {"0"};
        tracep->declDTypeEnum(37, "ibex_pkg::nmi_int_cause_e", 1, 5, __VenumItemNames, __VenumItemValues);
    }
    {
        const char* __VenumItemNames[]
        = {"OPCODE_LOAD", "OPCODE_MISC_MEM", "OPCODE_OP_IMM", 
                                "OPCODE_AUIPC", "OPCODE_STORE", 
                                "OPCODE_OP", "OPCODE_LUI", 
                                "OPCODE_BRANCH", "OPCODE_JALR", 
                                "OPCODE_JAL", "OPCODE_SYSTEM"};
        const char* __VenumItemValues[]
        = {"11", "1111", "10011", "10111", "100011", 
                                "110011", "110111", 
                                "1100011", "1100111", 
                                "1101111", "1110011"};
        tracep->declDTypeEnum(38, "ibex_pkg::opcode_e", 11, 7, __VenumItemNames, __VenumItemValues);
    }
    {
        const char* __VenumItemNames[]
        = {"IDLE", "WAIT_GNT_MIS", "WAIT_RVALID_MIS", 
                                "WAIT_GNT", "WAIT_RVALID_MIS_GNTS_DONE"};
        const char* __VenumItemValues[]
        = {"0", "1", "10", "11", "100"};
        tracep->declDTypeEnum(39, "ibex_load_store_unit.ls_fsm_e", 5, 3, __VenumItemNames, __VenumItemValues);
    }
    {
        const char* __VenumItemNames[]
        = {"IDLE", "START", "PROC", "STOP"};
        const char* __VenumItemValues[]
        = {"0", "1", "10", "11"};
        tracep->declDTypeEnum(40, "uart.uart_state_t", 4, 2, __VenumItemNames, __VenumItemValues);
    }
}

void Vtop_verilator___024root__trace_decl_types(VerilatedFst* tracep) {
    Vtop_verilator___024root__traceDeclTypesSub0(tracep);
}
