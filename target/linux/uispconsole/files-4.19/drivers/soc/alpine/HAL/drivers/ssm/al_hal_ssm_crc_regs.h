/*******************************************************************************
Copyright (C) 2015 Annapurna Labs Ltd.

This file may be licensed under the terms of the Annapurna Labs Commercial
License Agreement.

Alternatively, this file can be distributed under the terms of the GNU General
Public License V2 as published by the Free Software Foundation and can be
found at http://www.gnu.org/licenses/gpl-2.0.html

Alternatively, redistribution and use in source and binary forms, with or
without modification, are permitted provided that the following conditions are
met:

    *     Redistributions of source code must retain the above copyright notice,
this list of conditions and the following disclaimer.

    *     Redistributions in binary form must reproduce the above copyright
notice, this list of conditions and the following disclaimer in
the documentation and/or other materials provided with the
distribution.

THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND
ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER OR CONTRIBUTORS BE LIABLE FOR
ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
(INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON
ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
(INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.

*******************************************************************************/

/**
 *  @{
 * @file   al_hal_ssm_crc_regs.h
 *
 * @brief CRYPTO_CRC_Accelerator registers
 *
 */

#ifndef __AL_HAL_CRYPTO_CRC_ACCELERATOR_REGS_H__
#define __AL_HAL_CRYPTO_CRC_ACCELERATOR_REGS_H__

#include "al_hal_plat_types.h"

#ifdef __cplusplus
extern "C" {
#endif
/*
* Unit Registers
*/



struct crc_configuration {
	/* [0x0] Unit configuration register */
	uint32_t unit_conf;
	uint32_t rsrvd[3];
};
struct crc_log {
	/*
	 * [0x0] Descriptor word 0.
	 * When Fatal error happens this register reflect the descriptor of the command caused the
	 * fatal error
	 */
	uint32_t desc_word0;
	/*
	 * [0x4] Descriptor word 1.
	 * When Fatal error happens this register reflect the descriptor of the command caused the
	 * fatal error
	 */
	uint32_t desc_word1;
	/*
	 * [0x8] Transaction Information of the command that trigger the error. When Fatal error
	 * happens this register reflect the transaction info of the command caused the fatal error
	 */
	uint32_t trans_info_1;
	/*
	 * [0xc] Transaction Information of the command that trigger the error. When Fatal error
	 * happens this register reflect the transaction info of the command caused the fatal error
	 */
	uint32_t trans_info_2;
	uint32_t rsrvd[4];
};
struct crc_crc_perf_counter {
	/*
	 * [0x0] The execution cycle counter Measure number of cycles that the CRC accelerator is
	 * active. (meaning that there is at least one valid command from the M2S or the pipe is not
	 * empty).
	 */
	uint32_t exec_cnt;
	/*
	 * [0x4] M2S active cycles counter
	 * Measure number of cycles M2S sends commad(s) to CRC engien.
	 */
	uint32_t m2s_active_cnt;
	/*
	 * [0x8] M2S idle cycles counter
	 * Measure number of idle cycles on M2S while CRC accelerator waits for data (the
	 * M2S_active_cnt is counting)
	 */
	uint32_t m2s_idle_cnt;
	/*
	 * [0xc] M2S back prussure cycles counter
	 * Measure number of cycles the crc engien can not accept data from the M2S while M2S is
	 * ready to rtanfer data.
	 */
	uint32_t m2s_backp_cnt;
	/*
	 * [0x10] S2M active cycles counter
	 * Measure number of cycles crc engien sends commad(s) to S2M. In cycles which more than one
	 * GDMA S2M are active, the counter is incremented by the number of the S2M interfaces that
	 * are active.
	 */
	uint32_t s2m_active_cnt;
	/*
	 * [0x14] S2M idle cycles counter
	 * Measure number of idle cycles on S2M while S2M waits for data (the S2M_active_cnt is
	 * counting). In cycles which more than one GDMA wait for data from the CRC, the counter is
	 * incremented by the number of S2M interfaces that are idle.
	 */
	uint32_t s2m_idle_cnt;
	/*
	 * [0x18] S2M backpressure Counter
	 * S2M backpressure cycles counter: Measure number of cycles where the CRC had data to send
	 * to the S2M but was not sent due to backpressure. In cycles which more than one S2M do
	 * back pressure to the CRC, the counter is incremented by the number of S2M interfaces that
	 * do backpressure.
	 */
	uint32_t s2m_backp_cnt;
	/*
	 * [0x1c] CRC Command Done Counter
	 * Total Number of CRC commands executed
	 */
	uint32_t cmd_dn_cnt;
	/*
	 * [0x20] CRC Source Blocks Counter
	 * Total Number of Source Blocks read In CRC commands
	 */
	uint32_t src_blocks_cnt;
	/*
	 * [0x24] CRC Destination Blocks Counter
	 * Total Number of Destination Blocks written in CRC commands
	 */
	uint32_t dst_blocks_cnt;
	/* [0x28] Count the MEM copy commands */
	uint32_t mem_cmd_dn_cnt;
	/*
	 * [0x2c] Recoverable Errors counter
	 * Total Number of recoverable errors
	 */
	uint32_t recover_err_cnt;
	/* [0x30] Count the number of the data beats enter to CRC */
	uint32_t src_data_beats;
	/* [0x34] Count the number of the data beats get out from CRC */
	uint32_t dst_data_beats;
	uint32_t rsrvd[6];
};
struct crc_perfm_cnt_cntl {
	/* [0x0] Performance counter control */
	uint32_t conf;
};
struct crc_crc_status {
	/* [0x0] Performance counter control */
	uint32_t status;
};
struct crc_unit_id {
	/* [0x0] unit_id */
	uint32_t unit_id;
};
struct crc_interrupt_grp_a {
	/*
	 * [0x0] Interrupt Cause Register
	 * Set by hardware.
	 * - If MSI-X is enabled, and auto_clear control bit =TRUE, automatically cleared after
	 * MSI-X message associate to this specific interrupt bit is sent (MSI-X acknowledge is
	 * received).
	 * - SW may set a bit in this register by writing 1 to the associate bit in the Interrupt
	 * Cause Set Register
	 * Write-0 clears a bit. Write-1 has no effect.
	 * - On CPU Read – If clear_on_read control bit =TRUE, automatically cleared (all bits are
	 * cleared)
	 * When there is a conflict and on the same clock cycle, HW tries to set a bit in the
	 * interrupt cause register, the specific bit is set to ensure the interrupt indication is
	 * not lost indication is not lost
	 */
	uint32_t int_cause_grp_a;
	uint32_t rsrvd_0;
	/*
	 * [0x8] Interrupt Cause Set Register
	 * Writing 1 to a bit in this register sets its corresponding cause bit, enable SW to
	 * generate HW interrupt. Write 0 has no effect
	 */
	uint32_t int_cause_set_grp_a;
	uint32_t rsrvd_1;
	/*
	 * [0x10] Interrupt Mask Register
	 * If Auto-mask control bit =TRUE, automatically set to 1 after MSI-X message associate to
	 * the associate interrupt bit is sent (AXI write acknowledge is received)
	 */
	uint32_t int_mask_grp_a;
	uint32_t rsrvd_2;
	/*
	 * [0x18] Interrupt Mask Clear Register
	 * Used when auto-mask control bit=True. It enables CPU to clear specific bit. It prevents
	 * scenario in which CPU override another bit with 1 (old value) that HW just clears it to
	 * 0.
	 * Write 0 to this register clears its corresponding mask bit. Write 1 has no effect
	 */
	uint32_t int_mask_clear_grp_a;
	uint32_t rsrvd_3;
	/*
	 * [0x20] Interrupt status Register
	 * This register latch the status of the interrupt source
	 */
	uint32_t int_status_grp_a;
	uint32_t rsrvd_4;
	/* [0x28] Interrupt Control Register */
	uint32_t int_control_grp_a;
	uint32_t rsrvd_5;
	/*
	 * [0x30] Interrupt Mask Register
	 * Each bit in this register mask the corresponding cause bit for generating Abort signal.
	 * It’s default value is determined by unit instantiation
	 * Abort = Wire-OR of Cause & !Interrupt_Abort_Mask).
	 * This registers provides error handling configuration for error interrupts
	 */
	uint32_t int_abort_msk_grp_a;
	uint32_t rsrvd_6;
	/*
	 * [0x38] Interrupt Log Register
	 * Each bit in this register mask the corresponding cause bit for capturing the log
	 * registerts It’s default value is determined by unit instantiation
	 * Log_capture = Wire-OR of Cause & !Interrupt_Log_Mask).
	 * This registers provides error handling configuration for error interrupts
	 */
	uint32_t int_log_msk_grp_a;
	uint32_t rsrvd;
};

struct crc_regs {
	struct crc_configuration configuration; /* [0x0] */
	uint32_t rsrvd_0[4];
	struct crc_log log;               /* [0x20] */
	struct crc_crc_perf_counter crc_perf_counter; /* [0x40] */
	struct crc_perfm_cnt_cntl perfm_cnt_cntl; /* [0x90] */
	struct crc_crc_status crc_status; /* [0x94] */
	struct crc_unit_id unit_id;       /* [0x98] */
	uint32_t rsrvd_1[985];
	struct crc_interrupt_grp_a interrupt_grp_a; /* [0x1000] */
};


/*
* Registers Fields
*/


/**** unit_conf register ****/
/*
 * When this bit is set to 1, the crc engine accept new commands if possible before previous command
 * completion
 */
#define CRYPTO_CRC_ACCELERATOR_CONFIGURATION_UNIT_CONF_MUL_CMD_EN (1 << 0)
/* When this bit is set to 1, when error occure the pipe will hold. */
#define CRYPTO_CRC_ACCELERATOR_CONFIGURATION_UNIT_CONF_HOLD_PIPE_WHEN_ERROR (1 << 1)
/* When this bit is set to 1, Reset the ack fifo. */
#define CRYPTO_CRC_ACCELERATOR_CONFIGURATION_UNIT_CONF_FIFO_ACK_ENABLE_MASK 0x0000007C
#define CRYPTO_CRC_ACCELERATOR_CONFIGURATION_UNIT_CONF_FIFO_ACK_ENABLE_SHIFT 2

/**** trans_info_1 register ****/
/* Transaction length in bytes */
#define CRYPTO_CRC_ACCELERATOR_LOG_TRANS_INFO_1_TRANS_LEN_MASK 0x000FFFFF
#define CRYPTO_CRC_ACCELERATOR_LOG_TRANS_INFO_1_TRANS_LEN_SHIFT 0
/* Number of descriptors in the transaction */
#define CRYPTO_CRC_ACCELERATOR_LOG_TRANS_INFO_1_NUM_OF_DESC_MASK 0x00F00000
#define CRYPTO_CRC_ACCELERATOR_LOG_TRANS_INFO_1_NUM_OF_DESC_SHIFT 20
/* Reserved */
#define CRYPTO_CRC_ACCELERATOR_LOG_TRANS_INFO_1_RESERVED_MASK 0xFF000000
#define CRYPTO_CRC_ACCELERATOR_LOG_TRANS_INFO_1_RESERVED_SHIFT 24

/**** trans_info_2 register ****/
/* Queue Number of the transaction */
#define CRYPTO_CRC_ACCELERATOR_LOG_TRANS_INFO_2_Q_NUM_MASK 0x00000FFF
#define CRYPTO_CRC_ACCELERATOR_LOG_TRANS_INFO_2_Q_NUM_SHIFT 0
/* GDMA ID of the transaction */
#define CRYPTO_CRC_ACCELERATOR_LOG_TRANS_INFO_2_DMA_ID_MASK 0x0000F000
#define CRYPTO_CRC_ACCELERATOR_LOG_TRANS_INFO_2_DMA_ID_SHIFT 12
/* Internal Serial Number of the transaction */
#define CRYPTO_CRC_ACCELERATOR_LOG_TRANS_INFO_2_SERIAL_NUM_MASK 0x03FF0000
#define CRYPTO_CRC_ACCELERATOR_LOG_TRANS_INFO_2_SERIAL_NUM_SHIFT 16
/* Reserved */
#define CRYPTO_CRC_ACCELERATOR_LOG_TRANS_INFO_2_RESERVED_MASK 0xFC000000
#define CRYPTO_CRC_ACCELERATOR_LOG_TRANS_INFO_2_RESERVED_SHIFT 26

/**** conf register ****/
/*
 * Not effect the recover_err_cnt          0: clear perfromance counter
 * 1: Stop performace counter
 * 2: Active performace counter
 */
#define CRYPTO_CRC_ACCELERATOR_PERFM_CNT_CNTL_CONF_CONT_PERFORM_MASK 0x00000003
#define CRYPTO_CRC_ACCELERATOR_PERFM_CNT_CNTL_CONF_CONT_PERFORM_SHIFT 0

/**** status register ****/
/* indicate when CRC is empty. */
#define CRYPTO_CRC_ACCELERATOR_CRC_STATUS_STATUS_CRC_EMPTY (1 << 0)

/**** unit_id register ****/
/* unit_rev_id */
#define CRYPTO_CRC_ACCELERATOR_UNIT_ID_UNIT_ID_UNIT_REV_ID_MASK 0x0000FFFF
#define CRYPTO_CRC_ACCELERATOR_UNIT_ID_UNIT_ID_UNIT_REV_ID_SHIFT 0
/* unit_id */
#define CRYPTO_CRC_ACCELERATOR_UNIT_ID_UNIT_ID_UNIT_ID_MASK 0xFFFF0000
#define CRYPTO_CRC_ACCELERATOR_UNIT_ID_UNIT_ID_UNIT_ID_SHIFT 16

/**** int_cause_grp_A register ****/
/* Timeout on S2M. Command is not completed in the predefined time period */
#define CRYPTO_CRC_ACCELERATOR_INTERRUPT_GRP_A_INT_CAUSE_GRP_A_S2M_TOUT (1 << 0)
/* Timeout on M2S. Command is not completed in the predefined time period */
#define CRYPTO_CRC_ACCELERATOR_INTERRUPT_GRP_A_INT_CAUSE_GRP_A_M2S_TOUT (1 << 1)
/* Wrong/Unknown Command */
#define CRYPTO_CRC_ACCELERATOR_INTERRUPT_GRP_A_INT_CAUSE_GRP_A_CMD_DECODE_ERR (1 << 2)

#define CRYPTO_CRC_ACCELERATOR_INTERRUPT_GRP_A_INT_CAUSE_GRP_A_RESERVED_4 (1 << 3)
/* Wrong and illegal software configuration of the descriptors */
#define CRYPTO_CRC_ACCELERATOR_INTERRUPT_GRP_A_INT_CAUSE_GRP_A_ILLEGAL_CONF (1 << 4)

#define CRYPTO_CRC_ACCELERATOR_INTERRUPT_GRP_A_INT_CAUSE_GRP_A_RESERVED_5 (1 << 5)

#define CRYPTO_CRC_ACCELERATOR_INTERRUPT_GRP_A_INT_CAUSE_GRP_A_RESERVED_6 (1 << 6)

#define CRYPTO_CRC_ACCELERATOR_INTERRUPT_GRP_A_INT_CAUSE_GRP_A_RESERVED_7 (1 << 7)
/* Error received from M2S interface */
#define CRYPTO_CRC_ACCELERATOR_INTERRUPT_GRP_A_INT_CAUSE_GRP_A_M2S_ERR (1 << 8)
/* Completion acknoledge Fifo overrun */
#define CRYPTO_CRC_ACCELERATOR_INTERRUPT_GRP_A_INT_CAUSE_GRP_A_ACK_FIFO_OVR_MASK 0x00003E00
#define CRYPTO_CRC_ACCELERATOR_INTERRUPT_GRP_A_INT_CAUSE_GRP_A_ACK_FIFO_OVR_SHIFT 9
/* Data FIFO (used in Q operation)  overrun */
#define CRYPTO_CRC_ACCELERATOR_INTERRUPT_GRP_A_INT_CAUSE_GRP_A_Q_FIFO_OVR (1 << 14)
/* EOP without SOP */
#define CRYPTO_CRC_ACCELERATOR_INTERRUPT_GRP_A_INT_CAUSE_GRP_A_EOP_WO_SOP (1 << 15)
/* SOP without EOP */
#define CRYPTO_CRC_ACCELERATOR_INTERRUPT_GRP_A_INT_CAUSE_GRP_A_SOP_WO_EOP (1 << 16)
/* SOP and EOP in the same cycle */
#define CRYPTO_CRC_ACCELERATOR_INTERRUPT_GRP_A_INT_CAUSE_GRP_A_SOP_EOP_SAME_CYCLE (1 << 17)
/* Request from strem without SOP */
#define CRYPTO_CRC_ACCELERATOR_INTERRUPT_GRP_A_INT_CAUSE_GRP_A_REQ_VALID_WO_SOP (1 << 18)

/**** int_control_grp_A register ****/
/* When Clear_on_Read =1, All bits of  Cause register are cleared on read */
#define CRYPTO_CRC_ACCELERATOR_INTERRUPT_GRP_A_INT_CONTROL_GRP_A_CLEAR_ON_READ (1 << 0)
/*
 * (must be set only when MSIX is enabled)
 * When Auto-Mask =1 and an MSI-X ack for this bit is received, its corresponding bit in the mask
 * register is set, masking future interrupts
 */
#define CRYPTO_CRC_ACCELERATOR_INTERRUPT_GRP_A_INT_CONTROL_GRP_A_AUTO_MASK (1 << 1)
/*
 * Auto_Clear (RW)
 * When Auto-Clear =1, the bits in the interrupt cause register are auto cleared after MSI-X is
 * acknowledged. Must be used only if MSI-X is enabled
 */
#define CRYPTO_CRC_ACCELERATOR_INTERRUPT_GRP_A_INT_CONTROL_GRP_A_AUTO_CLEAR (1 << 2)
/*
 * When Set_on_Posedge =1, the bits in the interrupt cause register are set on the posedge of the
 * interrupt source, i.e. when interrupt source =1 and Interrupt Status = 0
 * When Set_on_Posedge =0, the bits in the interrupt cause register are set when interrupt source
 * =1.
 */
#define CRYPTO_CRC_ACCELERATOR_INTERRUPT_GRP_A_INT_CONTROL_GRP_A_SET_ON_POSEDGE (1 << 3)
/*
 * When Moderation_Reset =1, all Moderation timers associate to the interrupt cause bits are cleared
 * to 0, enabled immediate interrupt assertion if any unmasked cause bit is set to 1. This bit is
 * self-negated
 */
#define CRYPTO_CRC_ACCELERATOR_INTERRUPT_GRP_A_INT_CONTROL_GRP_A_MOD_RST (1 << 4)
/*
 * When mask_msi_x =1, No MSI-X from this group is send. This bit should be set to 1 when the
 * associate summary bit in this group is used to generate single MSI-X for this group
 */
#define CRYPTO_CRC_ACCELERATOR_INTERRUPT_GRP_A_INT_CONTROL_GRP_A_MASK_MSI_X (1 << 5)
/* MSI-X AWID value, same ID for all cause bits */
#define CRYPTO_CRC_ACCELERATOR_INTERRUPT_GRP_A_INT_CONTROL_GRP_A_AWID_MASK 0x00000F00
#define CRYPTO_CRC_ACCELERATOR_INTERRUPT_GRP_A_INT_CONTROL_GRP_A_AWID_SHIFT 8
/* This value determines the interval between interrupts, writing ZERO disable Moderation */
#define CRYPTO_CRC_ACCELERATOR_INTERRUPT_GRP_A_INT_CONTROL_GRP_A_MOD_INTV_MASK 0x00FF0000
#define CRYPTO_CRC_ACCELERATOR_INTERRUPT_GRP_A_INT_CONTROL_GRP_A_MOD_INTV_SHIFT 16
/*
 * This value determines the Moderation_Timer_Clock speed
 * 0- Moderation-timer is decremented every 1x256 SB clock cycles ~1uS
 * 1- Moderation-timer is decremented every 2x256 SB clock cycles ~2uS
 * N- Moderation-timer is decremented every Nx256 SB clock cycles ~(N+1) uS
 */
#define CRYPTO_CRC_ACCELERATOR_INTERRUPT_GRP_A_INT_CONTROL_GRP_A_MOD_RES_MASK 0x0F000000
#define CRYPTO_CRC_ACCELERATOR_INTERRUPT_GRP_A_INT_CONTROL_GRP_A_MOD_RES_SHIFT 24

#ifdef __cplusplus
}
#endif

#endif

/** @} */


