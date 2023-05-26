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
 * @addtogroup groupddr
 *
 *  @{
 * @file   al_hal_ddr_ctrl_regs_alpine_v2.h
 *
 * @brief  DDR controller registers for alpine V2
 *
 */

#ifndef __AL_HAL_DDR_CTRL_REGS_ALPINE_V2_H__
#define __AL_HAL_DDR_CTRL_REGS_ALPINE_V2_H__

#include "al_hal_plat_types.h"

#ifdef __cplusplus
extern "C" {
#endif
/*
* Unit Registers
*/

struct al_dwc_ddr_umctl2_regs_alpine_v2 {
	/* [0x0] Master Register */
	uint32_t mstr;
	/* [0x4] Operating Mode Status Register */
	uint32_t stat;
	uint32_t rsrvd_0[2];
	/* [0x10] Mode Register Read/Write Control Register 0 */
	uint32_t mrctrl0;
	/* [0x14] Mode Register Read/Write Control Register 1 */
	uint32_t mrctrl1;
	/* [0x18] Mode Register Read/Write Status Register */
	uint32_t mrstat;
	/* [0x1c] Mode Register Read/Write Control Register 2 */
	uint32_t mrctrl2;
	uint32_t rsrvd_1[4];
	/* [0x30] Low Power Control Register */
	uint32_t pwrctl;
	/* [0x34] Low Power Timing Register */
	uint32_t pwrtmg;
	/* [0x38] Hardware Low Power Control Register */
	uint32_t hwlpctl;
	uint32_t rsrvd_2[5];
	/* [0x50] Refresh Control Register 0 */
	uint32_t rfshctl0;
	/* [0x54] Refresh Control Register 1 */
	uint32_t rfshctl1;
	/* [0x58] Refresh Control Register 2 */
	uint32_t rfshctl2;
	uint32_t rsrvd_3;
	/* [0x60] Refresh Control Register 0 */
	uint32_t rfshctl3;
	/* [0x64] Refresh Timing Register */
	uint32_t rfshtmg;
	uint32_t rsrvd_4[2];
	/* [0x70] ECC Configuration Register */
	uint32_t ecccfg0;
	/* [0x74] ECC Configuration Register */
	uint32_t ecccfg1;
	/* [0x78] ECC Status Register */
	uint32_t eccstat;
	/* [0x7c] ECC Clear Register */
	uint32_t eccclr;
	/* [0x80] ECC Error Counter Register */
	uint32_t eccerrcnt;
	/* [0x84] ECC Corrected Error Address Register 0 */
	uint32_t ecccaddr0;
	/* [0x88] ECC Corrected Error Address Register 1 */
	uint32_t ecccaddr1;
	/* [0x8c] ECC Corrected Syndrome Register 0 */
	uint32_t ecccsyn0;
	/* [0x90] ECC Corrected Syndrome Register 1 */
	uint32_t ecccsyn1;
	/* [0x94] ECC Corrected Syndrome Register 2 */
	uint32_t ecccsyn2;
	/* [0x98] ECC Corrected Data Bit Mask Register 0 */
	uint32_t eccbitmask0;
	/* [0x9c] ECC Corrected Data Bit Mask Register 1 */
	uint32_t eccbitmask1;
	/* [0xa0] ECC Corrected Data Bit Mask Register 2 */
	uint32_t eccbitmask2;
	/* [0xa4] ECC Uncorrected Error Address Register 0 */
	uint32_t eccuaddr0;
	/* [0xa8] ECC Uncorrected Error Address Register 1 */
	uint32_t eccuaddr1;
	/* [0xac] ECC Uncorrected Syndrome Register 0 */
	uint32_t eccusyn0;
	/* [0xb0] ECC Uncorrected Syndrome Register 1 */
	uint32_t eccusyn1;
	/* [0xb4] ECC Uncorrected Syndrome Register 2 */
	uint32_t eccusyn2;
	/* [0xb8] ECC Data Poisoning Address Register 0 */
	uint32_t eccpoisonaddr0;
	/* [0xbc] ECC Data Poisoning Address Register 1 */
	uint32_t eccpoisonaddr1;
	/* [0xc0] CRC Parity Control Register0 */
	uint32_t crcparctl0;
	/* [0xc4] CRC Parity Control Register1 */
	uint32_t crcparctl1;
	/* [0xc8] CRC Parity Control Register2 */
	uint32_t crcparctl2;
	/* [0xcc] CRC Parity Status Register */
	uint32_t crcparstat;
	/* [0xd0] SDRAM Initialization Register 0 */
	uint32_t init0;
	/* [0xd4] SDRAM Initialization Register 1 */
	uint32_t init1;
	uint32_t rsrvd_5;
	/* [0xdc] SDRAM Initialization Register 3 */
	uint32_t init3;
	/* [0xe0] SDRAM Initialization Register 4 */
	uint32_t init4;
	/* [0xe4] SDRAM Initialization Register 5 */
	uint32_t init5;
	/* [0xe8] SDRAM Initialization Register 6 */
	uint32_t init6;
	/* [0xec] SDRAM Initialization Register 7 */
	uint32_t init7;
	/* [0xf0] DIMM Control Register */
	uint32_t dimmctl;
	/* [0xf4] Rank Control Register */
	uint32_t rankctl;
	uint32_t rsrvd_6[2];
	/* [0x100] SDRAM Timing Register 0 */
	uint32_t dramtmg0;
	/* [0x104] SDRAM Timing Register 1 */
	uint32_t dramtmg1;
	/* [0x108] SDRAM Timing Register 2 */
	uint32_t dramtmg2;
	/* [0x10c] SDRAM Timing Register 3 */
	uint32_t dramtmg3;
	/* [0x110] SDRAM Timing Register 4 */
	uint32_t dramtmg4;
	/* [0x114] SDRAM Timing Register 5 */
	uint32_t dramtmg5;
	uint32_t rsrvd_7[2];
	/* [0x120] SDRAM Timing Register 8 */
	uint32_t dramtmg8;
	/* [0x124] SDRAM Timing Register 9 */
	uint32_t dramtmg9;
	/* [0x128] SDRAM Timing Register 10 */
	uint32_t dramtmg10;
	/* [0x12c] SDRAM Timing Register 11 */
	uint32_t dramtmg11;
	/* [0x130] SDRAM Timing Register 12 */
	uint32_t dramtmg12;
	uint32_t rsrvd_8[19];
	/* [0x180] ZQ Control Register 0 */
	uint32_t zqctl0;
	/* [0x184] ZQ Control Register 1 */
	uint32_t zqctl1;
	uint32_t rsrvd_9[2];
	/* [0x190] DFI Timing Register 0 */
	uint32_t dfitmg0;
	/* [0x194] DFI Timing Register 1 */
	uint32_t dfitmg1;
	/* [0x198] DFI Low Power Configuration Register 0 */
	uint32_t dfilpcfg0;
	/* [0x19c] DFI Low Power Configuration Register 1 */
	uint32_t dfilpcfg1;
	/* [0x1a0] DFI Update Register 0 */
	uint32_t dfiupd0;
	/* [0x1a4] DFI Update Register 1 */
	uint32_t dfiupd1;
	/* [0x1a8] DFI Update Register 2 */
	uint32_t dfiupd2;
	/* [0x1ac] DFI Update Register 3 */
	uint32_t dfiupd3;
	/* [0x1b0] DFI Miscellaneous Control Register */
	uint32_t dfimisc;
	uint32_t rsrvd_10;
	/* [0x1b8] DFI Update Register 4 */
	uint32_t dfiupd4;
	uint32_t rsrvd_11;
	/* [0x1c0] DM/DBI Control Register */
	uint32_t dbictl;
	uint32_t rsrvd_12[15];
	/* [0x200] Address Map Register 0 */
	uint32_t addrmap0;
	/* [0x204] Address Map Register 1 */
	uint32_t addrmap1;
	/* [0x208] Address Map Register 2 */
	uint32_t addrmap2;
	/* [0x20c] Address Map Register 3 */
	uint32_t addrmap3;
	/* [0x210] Address Map Register 4 */
	uint32_t addrmap4;
	/* [0x214] Address Map Register 5 */
	uint32_t addrmap5;
	/* [0x218] Address Map Register 6 */
	uint32_t addrmap6;
	/* [0x21c] Address Map Register 7 */
	uint32_t addrmap7;
	/* [0x220] Address Map Register 8 */
	uint32_t addrmap8;
	uint32_t rsrvd_13[7];
	/* [0x240] ODT Configuration Register */
	uint32_t odtcfg;
	/* [0x244] ODT/Rank Map Register */
	uint32_t odtmap;
	uint32_t rsrvd_14[2];
	/* [0x250] Scheduler Control Register */
	uint32_t sched;
	/* [0x254] Scheduler Control Register 1 */
	uint32_t sched1;
	uint32_t rsrvd_15;
	/* [0x25c] High Priority Read CAM Register 1 */
	uint32_t perfhpr1;
	uint32_t rsrvd_16;
	/* [0x264] Low Priority Read CAM Register 1 */
	uint32_t perflpr1;
	uint32_t rsrvd_17;
	/* [0x26c] Write CAM Register 1 */
	uint32_t perfwr1;
	uint32_t rsrvd_18[4];
	/* [0x280] DQ Map Register 0 */
	uint32_t dqmap0;
	/* [0x284] DQ Map Register 1 */
	uint32_t dqmap1;
	/* [0x288] DQ Map Register 2 */
	uint32_t dqmap2;
	/* [0x28c] DQ Map Register 3 */
	uint32_t dqmap3;
	/* [0x290] DQ Map Register 4 */
	uint32_t dqmap4;
	/* [0x294] DQ Map Register 5 */
	uint32_t dqmap5;
	uint32_t rsrvd_19[26];
	/* [0x300] Debug Register 0 */
	uint32_t dbg0;
	/* [0x304] Debug Register 1 */
	uint32_t dbg1;
	/* [0x308] CAM Debug Register */
	uint32_t dbgcam;
	/* [0x30c] Command Debug Register */
	uint32_t dbgcmd;
	/* [0x310] Status Debug Register */
	uint32_t dbgstat;
	uint32_t rsrvd_20[3];
	/* [0x320] Software register programming control enable */
	uint32_t swctl;
	/* [0x324] Software register programming control status */
	uint32_t swstat;
	uint32_t rsrvd_21[2];
	/* [0x330] On-Chip Parity configuration register 0 */
	uint32_t ocparcfg0;
	/* [0x334] On-Chip Parity configuration register 1 */
	uint32_t ocparcfg1;
	/* [0x338] On-Chip Parity configuration register 2 */
	uint32_t ocparcfg2;
	/* [0x33c] On-Chip Parity configuration register 3 */
	uint32_t ocparcfg3;
	/* [0x340] On-Chip Parity status register 0 */
	uint32_t ocparstat0;
	/* [0x344] On-Chip Parity status register 1 */
	uint32_t ocparstat1;
	/* [0x348] On-Chip Parity write data log register 0 */
	uint32_t ocparwlog0;
	/* [0x34c] On-Chip Parity write data log register 1 */
	uint32_t ocparwlog1;
	/* [0x350] On-Chip Parity Write Data log register 2 */
	uint32_t ocparwlog2;
	/* [0x354] On-Chip Parity Write Address log 0 register */
	uint32_t ocparawlog0;
	/* [0x358] On-Chip Parity Write Address log 1 register */
	uint32_t ocparawlog1;
	/* [0x35c] On-Chip Parity Read Data log 0 register */
	uint32_t ocparrlog0;
	/* [0x360] On-Chip Parity Read Data log 1 register */
	uint32_t ocparrlog1;
	/* [0x364] On-Chip Parity Read Address log 0 register */
	uint32_t ocpararlog0;
	/* [0x368] On-Chip Parity Read Address log 1 register */
	uint32_t ocpararlog1;
	uint32_t rsrvd[35];
};


struct al_dwc_ddr_umctl2_mp_alpine_v2 {
	uint32_t rsrvd_0;
	/* [0x4] Port Status Register */
	uint32_t pstat;
	/* [0x8] Port Common Configuration Register */
	uint32_t pccfg;
	/* [0xc] Port n Configuration Read Register */
	uint32_t pcfgr_0;
	/* [0x10] Port n Configuration Write Register */
	uint32_t pcfgw_0;
	uint32_t rsrvd_1;
	/* [0x18] Port n Channel m Configuration ID Mask Register */
	uint32_t pcfgidmaskch0_0;
	/* [0x1c] Port n Channel m Configuration ID Value Register */
	uint32_t pcfgidvaluech0_0;
	uint32_t rsrvd_2[30];
	/* [0x98] Port n Control Register */
	uint32_t pctrl_0;
	/* [0x9c] Port n Read QoS Configuration Register 0 */
	uint32_t pcfgqos0_0;
	uint32_t rsrvd[1754];
};

struct al_ddr_ctrl_regs_alpine_v2 {
	struct al_dwc_ddr_umctl2_regs_alpine_v2 umctl2_regs;       /* [0x0] */
	struct al_dwc_ddr_umctl2_mp_alpine_v2 umctl2_mp;           /* [0x3f8] */
};


#ifdef __cplusplus
}
#endif

#endif /* __AL_HAL_DDR_CTRL_REGS_ALPINE_V2_H__ */

/** @} end of DDR group */


