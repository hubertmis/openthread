/*
 *  Copyright (c) 2016, The OpenThread Authors.
 *  All rights reserved.
 *
 *  Redistribution and use in source and binary forms, with or without
 *  modification, are permitted provided that the following conditions are met:
 *  1. Redistributions of source code must retain the above copyright
 *     notice, this list of conditions and the following disclaimer.
 *  2. Redistributions in binary form must reproduce the above copyright
 *     notice, this list of conditions and the following disclaimer in the
 *     documentation and/or other materials provided with the distribution.
 *  3. Neither the name of the copyright holder nor the
 *     names of its contributors may be used to endorse or promote products
 *     derived from this software without specific prior written permission.
 *
 *  THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
 *  AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 *  IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
 *  ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE
 *  LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
 *  CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
 *  SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
 *  INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
 *  CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
 *  ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
 *  POSSIBILITY OF SUCH DAMAGE.
 */

/**
 * @file
 *   This file includes CC2538 register definitions.
 *
 */

#ifndef CC2538_REG_H_
#define CC2538_REG_H_

#include <stdint.h>

// clang-format off

#define HWREG(x)                                (*((volatile uint32_t *)(x)))

#define NVIC_ST_CTRL                            0xE000E010  // SysTick Control and Status
#define NVIC_ST_RELOAD                          0xE000E014  // SysTick Reload Value Register
#define NVIC_EN0                                0xE000E100  // Interrupt 0-31 Set Enable

#define NVIC_ST_CTRL_COUNT                      0x00010000  // Count Flag
#define NVIC_ST_CTRL_CLK_SRC                    0x00000004  // Clock Source
#define NVIC_ST_CTRL_INTEN                      0x00000002  // Interrupt Enable
#define NVIC_ST_CTRL_ENABLE                     0x00000001  // Enable

#define RFCORE_XREG_SRCMATCH_EN                 0x00000001  // SRCMATCH.SRC_MATCH_EN(1)
#define RFCORE_XREG_SRCMATCH_AUTOPEND           0x00000002  // SRCMATCH.AUTOPEND(1)
#define RFCORE_XREG_SRCMATCH_PEND_DATAREQ_ONLY  0x00000004  // SRCMATCH.PEND_DATAREQ_ONLY(1)

#define RFCORE_XREG_SRCMATCH_ENABLE_STATUS_SIZE 3           // Num of register for source match enable status
#define RFCORE_XREG_SRCMATCH_SHORT_ENTRIES      24          // 24 short address entries in maximum
#define RFCORE_XREG_SRCMATCH_EXT_ENTRIES        12          // 12 extended address entries in maximum
#define RFCORE_XREG_SRCMATCH_SHORT_ENTRY_OFFSET 4           // address offset for one short address entry
#define RFCORE_XREG_SRCMATCH_EXT_ENTRY_OFFSET   8           // address offset for one extended address entry

#define INT_UART0                               21          // UART0 Rx and Tx

#define IEEE_EUI64                              0x00280028  // Address of IEEE EUI-64 address

#define RFCORE_FFSM_SRCADDRESS_TABLE            0x40088400  // Source Address Table

#define RFCORE_FFSM_SRCEXTPENDEN0               0x40088590  // Enable/Disable automatic pending per extended address
#define RFCORE_FFSM_SRCSHORTPENDEN0             0x4008859C  // Enable/Disable automatic pending per short address
#define RFCORE_FFSM_EXT_ADDR0                   0x400885A8  // Local address information
#define RFCORE_FFSM_PAN_ID0                     0x400885C8  // Local address information
#define RFCORE_FFSM_PAN_ID1                     0x400885CC  // Local address information
#define RFCORE_FFSM_SHORT_ADDR0                 0x400885D0  // Local address information
#define RFCORE_FFSM_SHORT_ADDR1                 0x400885D4  // Local address information
#define RFCORE_XREG_FRMFILT0                    0x40088600  // The frame filtering function
#define RFCORE_XREG_SRCMATCH                    0x40088608  // Source address matching and pending bits
#define RFCORE_XREG_SRCSHORTEN0                 0x4008860C  // Short address matching
#define RFCORE_XREG_SRCEXTEN0                   0x40088618  // Extended address matching

#define RFCORE_XREG_FRMCTRL0                    0x40088624  // Frame handling
#define RFCORE_XREG_FRMCTRL1                    0x40088628  // Frame handling
#define RFCORE_XREG_RXENABLE                    0x4008862C  // RX enabling
#define RFCORE_XREG_FREQCTRL                    0x4008863C  // Controls the RF frequency
#define RFCORE_XREG_TXPOWER                     0x40088640  // Controls the output power
#define RFCORE_XREG_FSMSTAT1                    0x4008864C  // Radio status register
#define RFCORE_XREG_FIFOPCTRL                   0x40088650  // FIFOP threshold
#define RFCORE_XREG_CCACTRL0                    0x40088658  // CCA threshold
#define RFCORE_XREG_RSSISTAT                    0x40088664  // RSSI valid status register
#define RFCORE_XREG_AGCCTRL1                    0x400886C8  // AGC reference level
#define RFCORE_XREG_TXFILTCFG                   0x400887E8  // TX filter configuration
#define RFCORE_XREG_RFRND                       0x4008869C  // Random data
#define RFCORE_SFR_RFDATA                       0x40088828  // The TX FIFO and RX FIFO
#define RFCORE_SFR_RFERRF                       0x4008882C  // RF error interrupt flags
#define RFCORE_SFR_RFIRQF0                      0x40088834  // RF interrupt flags
#define RFCORE_SFR_RFST                         0x40088838  // RF CSMA-CA/strobe processor

#define RFCORE_XREG_FRMFILT0_FRAME_FILTER_EN    0x00000001  // Enables frame filtering

#define RFCORE_XREG_FRMCTRL0_AUTOACK            0x00000020
#define RFCORE_XREG_FRMCTRL0_AUTOCRC            0x00000040
#define RFCORE_XREG_FRMCTRL0_INFINITY_RX        0x00000008

#define RFCORE_XREG_FRMCTRL1_PENDING_OR         0x00000004

#define RFCORE_XREG_RFRND_IRND                  0x00000001

#define RFCORE_XREG_FSMSTAT1_TX_ACTIVE          0x00000002
#define RFCORE_XREG_FSMSTAT1_CCA                0x00000010  // Clear channel assessment
#define RFCORE_XREG_FSMSTAT1_SFD                0x00000020
#define RFCORE_XREG_FSMSTAT1_FIFOP              0x00000040
#define RFCORE_XREG_FSMSTAT1_FIFO               0x00000080

#define RFCORE_XREG_RSSISTAT_RSSI_VALID         0x00000001  // RSSI value is valid.

#define RFCORE_SFR_RFERRF_RXOVERF               0x00000004  // RX FIFO overflowed.

#define RFCORE_SFR_RFST_INSTR_RXON              0xE3        // Instruction set RX on
#define RFCORE_SFR_RFST_INSTR_TXON              0xE9        // Instruction set TX on
#define RFCORE_SFR_RFST_INSTR_RFOFF             0xEF        // Instruction set RF off
#define RFCORE_SFR_RFST_INSTR_FLUSHRX           0xED        // Instruction set flush rx buffer
#define RFCORE_SFR_RFST_INSTR_FLUSHTX           0xEE        // Instruction set flush tx buffer

#define ANA_REGS_BASE                           0x400D6000  // ANA_REGS
#define ANA_REGS_O_IVCTRL                       0x00000004  // Analog control register

#define SYS_CTRL_CLOCK_CTRL                     0x400D2000  // The clock control register
#define SYS_CTRL_SYSDIV_32MHZ                   0x00000000  // Sys_div for sysclk 32MHz
#define SYS_CTRL_CLOCK_CTRL_AMP_DET             0x00200000

#define SYS_CTRL_PWRDBG                         0x400D2074
#define SYS_CTRL_PWRDBG_FORCE_WARM_RESET        0x00000008

#define SYS_CTRL_RCGCUART                       0x400D2028
#define SYS_CTRL_SCGCUART                       0x400D202C
#define SYS_CTRL_DCGCUART                       0x400D2030
#define SYS_CTRL_I_MAP                          0x400D2098
#define SYS_CTRL_RCGCRFC                        0x400D20A8
#define SYS_CTRL_SCGCRFC                        0x400D20AC
#define SYS_CTRL_DCGCRFC                        0x400D20B0
#define SYS_CTRL_EMUOVR                         0x400D20B4

#define SYS_CTRL_RCGCRFC_RFC0                   0x00000001
#define SYS_CTRL_SCGCRFC_RFC0                   0x00000001
#define SYS_CTRL_DCGCRFC_RFC0                   0x00000001

#define SYS_CTRL_I_MAP_ALTMAP                   0x00000001

#define SYS_CTRL_RCGCUART_UART0                 0x00000001
#define SYS_CTRL_SCGCUART_UART0                 0x00000001
#define SYS_CTRL_DCGCUART_UART0                 0x00000001

#define SYS_CTRL_RCGCUART_UART1                 0x00000002
#define SYS_CTRL_SCGCUART_UART1                 0x00000002
#define SYS_CTRL_DCGCUART_UART1                 0x00000002

#define IOC_PA0_SEL                             0x400D4000  // Peripheral select control
#define IOC_PA1_SEL                             0x400D4004  // Peripheral select control
#define IOC_PA2_SEL                             0x400D4008
#define IOC_PA3_SEL                             0x400D400C
#define IOC_UARTRXD_UART0                       0x400D4100
#define IOC_UARTRXD_UART1                       0x400D4108

#define IOC_PA0_OVER                            0x400D4080
#define IOC_PA1_OVER                            0x400D4084
#define IOC_PA2_OVER                            0x400D4088
#define IOC_PA3_OVER                            0x400D408C

#define IOC_MUX_OUT_SEL_UART0_TXD               0x00000000
#define IOC_MUX_OUT_SEL_UART1_TXD               0x00000002

#define IOC_OVERRIDE_OE                         0x00000008  // PAD Config Override Output Enable
#define IOC_OVERRIDE_DIS                        0x00000000  // PAD Config Override Disabled

#define UART0_BASE                              0x4000C000
#define UART1_BASE                              0x4000D000
#define GPIO_A_BASE                             0x400D9000  // GPIO

#define GPIO_O_DIR                              0x00000400
#define GPIO_O_AFSEL                            0x00000420

#define GPIO_PIN_0                              0x00000001  // GPIO pin 0
#define GPIO_PIN_1                              0x00000002  // GPIO pin 1
#define GPIO_PIN_2                              0x00000004  // GPIO pin 2
#define GPIO_PIN_3                              0x00000008  // GPIO pin 3

#define UART_O_DR                               0x00000000  // UART data
#define UART_O_FR                               0x00000018  // UART flag
#define UART_O_IBRD                             0x00000024
#define UART_O_FBRD                             0x00000028
#define UART_O_LCRH                             0x0000002C
#define UART_O_CTL                              0x00000030  // UART control
#define UART_O_IM                               0x00000038  // UART interrupt mask
#define UART_O_MIS                              0x00000040  // UART masked interrupt status
#define UART_O_ICR                              0x00000044  // UART interrupt clear
#define UART_O_CC                               0x00000FC8  // UART clock configuration

#define UART_FR_RXFE                            0x00000010  // UART receive FIFO empty
#define UART_FR_TXFF                            0x00000020  // UART transmit FIFO full
#define UART_FR_RXFF                            0x00000040  // UART receive FIFO full

#define UART_CONFIG_WLEN_8                      0x00000060  // 8 bit data
#define UART_CONFIG_STOP_ONE                    0x00000000  // One stop bit
#define UART_CONFIG_PAR_NONE                    0x00000000  // No parity

#define UART_CTL_UARTEN                         0x00000001  // UART enable
#define UART_CTL_TXE                            0x00000100  // UART transmit enable
#define UART_CTL_RXE                            0x00000200  // UART receive enable

#define UART_IM_RXIM                            0x00000010  // UART receive interrupt mask
#define UART_IM_RTIM                            0x00000040  // UART receive time-out interrupt

#define SOC_ADC_ADCCON1                         0x400D7000  // ADC Control
#define SOC_ADC_RNDL                            0x400D7014  // RNG low data
#define SOC_ADC_RNDH                            0x400D7018  // RNG high data

#define SOC_ADC_ADCCON1_RCTRL0                  0x00000004  // ADCCON1 RCTRL bit 0
#define SOC_ADC_ADCCON1_RCTRL1                  0x00000008  // ADCCON1 RCTRL bit 1

#define FLASH_CTRL_FCTL                         0x400D3008  // Flash control
#define FLASH_CTRL_DIECFG0                      0x400D3014  // Flash information

// clang-format on

#endif
