/*++ 
Copyright (c) 2010 WonderMedia Technologies, Inc.

This program is free software: you can redistribute it and/or modify it under
the terms of the GNU General Public License as published by the Free Software 
Foundation, either version 2 of the License, or (at your option) any later version.

This program is distributed in the hope that it will be useful, but WITHOUT ANY
WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A
PARTICULAR PURPOSE.  See the GNU General Public License for more details. You
should have received a copy of the GNU General Public License along with this
program. If not, see http://www.gnu.org/licenses/>.

WonderMedia Technologies, Inc.
10F, 529, Chung-Cheng Road, Hsin-Tien, Taipei 231, R.O.C.
--*/

#ifndef __PMC_H_
#define __PMC_H_

typedef struct _PMC_REG_ {
        volatile unsigned int PM_Sts;                   // [Rx00-03] Power Management Status Register
        volatile unsigned int Resv4_7;                  // [Rx04-07] Reserved
        volatile unsigned char Idle;                    // [Rx08] IDEL Processor Request Register
        volatile unsigned char Resv9_0B[3];             // [Rx09 - 0B] Reserved
        volatile unsigned char PU_Time_Ctrl;            // [Rx0C] Power-up Tme Control Register
        volatile unsigned char Resv0D_0F[3];            // Reserved
        volatile unsigned short Hib_Val;                // [Rx10 - Rx11] Hibernation Value Register
        volatile unsigned char Hib_Ctrl;                // [Rx12] Hibernation Control Register
        volatile unsigned char Resv13;
        volatile unsigned short Wakeup_Sts;             // [Rx14-15]Wake up Status register
        volatile unsigned short Resv16_1B[3];
        volatile unsigned short Wakeup_Event_Enable;    // [Rx1C-1D] Wake-up Event Enable Register
        volatile unsigned short Resv1E_1F;
        volatile unsigned int Wakeup_Event_Type;        // [Rx20-23] Wake-up Event Type Register
        volatile unsigned int Resv24_2F[3];
        volatile unsigned int Hib_Scratch0;             // [Rx30-33] Hibernate Scratch Pad Register0
        volatile unsigned int Hib_Scratch1;             // [Rx34-37] Hibernate Scratch Pad Register1
        volatile unsigned int Hib_Scratch2;             // [Rx38-3B] Hibernate Scratch Pad Register2
        volatile unsigned int Hib_Scratch3;             // [Rx3c-3F] Hibernate Scratch Pad Register3    
        volatile unsigned int Resv40_4F[4];
        volatile unsigned int Reset_Sts;                // [Rx50-53] Reset Status Register
        volatile unsigned int PB_Control;               // [Rx54-57] Power Button Control Register;
        volatile unsigned int Resv58_5F[2];
        volatile unsigned int SW_Reset_Req;             // [Rx60-63] Software Reset Request Register
        volatile unsigned int Resv64_8F[0xB];
        volatile unsigned char IDE_IO_Drive_Strength;   // [Rx90]
        volatile unsigned char Resv91_FF[0x6F];
        volatile unsigned int OS_Timer_Match0;          // [Rx100-Rx103] OS Timer Match Register0
        volatile unsigned int OS_Timer_Match1;          // [Rx104-Rx107] OS Timer Match Registe1
        volatile unsigned int OS_Timer_Match2;          // [Rx108-Rx10B] OS Timer Match Register2
        volatile unsigned int OS_Timer_Match3;          // [Rx10C-Rx10F] OS Timer Match Register3
        volatile unsigned int OS_Timer_Count;           // [Rx110-113] OS Timer Counter Register
        volatile unsigned int OS_Timer_Sts;             // [Rx114-117] OS Timer Status Register
        volatile unsigned int OS_Timer_WatchDog_Enable; // [Rx118-Rx11B]
        volatile unsigned int OS_Timer_Int_Enable;      // [Rx11C-Rx11F]
        volatile unsigned int OS_Timer_Ctrl;            // [Rx120-Rx123] OS Timer Control Register
        volatile unsigned int OS_Timer_Access_Sts;      // [Rx124-Rx127] OS Timer Access Status Register
        volatile unsigned int Resv128_1FB[0x35];
        volatile unsigned int Misc_Clock_Ctrl;          // [Rx1FC -1FF] Misc Clock Control Register
        volatile unsigned int PLLA;                     // [Rx200-203] PLLA Multiplier and Range Values Register
        volatile unsigned int PLLB;                     // [Rx204-207] PLLB Multiplier and Range Values Register
        volatile unsigned int PLLC;                     // [Rx208-20B] PLLC Multiplier and Range Values Register
        volatile unsigned int PLLD;                     // [Rx20C-20F] PLLD Multiplier and Range Values Register
        volatile unsigned int Resv210_24F[0x10];
        volatile unsigned int Clock_Enable_Lower;       // [Rx250-253] Clock Enable Lower Register
        volatile unsigned int Clock_Enable_Upper;       // [Rx254-257] Clock Enable Upper Register
        volatile unsigned int Resv258_2FF[0x2A];
        volatile unsigned char ZAC2_Clock_Divisor;      // [Rx300] ZAC2 Clock Divisor Register
        volatile unsigned char ZAC2_Clock_HiPulse;      // [Rx301] ZAC2 Clock High Pulse is the Wide Pulse Register
        volatile unsigned char Resv302_303[2];
        volatile unsigned char AHB_Clock_Divisor;       // [Rx304] AHB Clock Divisor Value Register
        volatile unsigned char Resv305_307[3];
        volatile unsigned char Resv308_30F[8];
        volatile unsigned char DDR_Clock_Divisor;       // [Rx310] DDR Memory Controller Clock Divisor Value Register
        volatile unsigned char Resv311_313[3];
        volatile unsigned char SF_Clock_Divisor;        // [Rx314] Serial Flash Memory Controller Clock Divisor Value Register
        volatile unsigned char SF_Clock_HiPulse;        // [Rx315]
        volatile unsigned char Resv316_317[2];
        volatile unsigned char CF_Clock_Divisor;        // [Rx318] CF Clock Divisor Value Register
        volatile unsigned char CF_Clock_HiPulse;        // [Rx319]
        volatile unsigned char Resv31A_31B[2];
        volatile unsigned char Resv31C_327[0xC];
        volatile unsigned char SD_Clock_Divisor;        // [Rx328] SD/MMC Clock Divisor Value Reigster
        volatile unsigned char SD_Clock_HiPulse;        // [Rx329]
        volatile unsigned char Resv32A_32B[2];
        volatile unsigned char MS_Clock_Divisor;        // [Rx32C] MS(Pro) Clock Divisor Value Register
        volatile unsigned char MS_Clock_HiPulse;        // [Rx32D]
        volatile unsigned char Resv32E_32F[2];
        volatile unsigned char NF_Clock_Divisor;        // [Rx330] NF Clock Divisor Value Register
        volatile unsigned char NF_Clock_HiPulse;        // [Rx331]
        volatile unsigned char Resv332_337[6];
        volatile unsigned char LPC_Clock_Divisor;       // [Rx338]
        volatile unsigned char LPC_Clock_HiPulse;       // [Rx339]
        volatile unsigned char Resv33A_33B[2];
        volatile unsigned char SPI_Clock_Divisor;       // [Rx33C]
        volatile unsigned char SPI_Clock_HiPulse;       // [Rx33D]
}PMC_REG,*PPMC_REG;

//
// (URRDR) Receive Data Regiser Description
//
#define URRDR_PER               0x100   // Parity Error. This bit is the same as URISR[8]
#define URRDR_FER               0x200   // Frame Error. This bit is the same as URISR[9]

//=============================================================================
//
// PMCS_REG     PM (Current) Status Register bits definitions.
//
//=============================================================================
#define PMCS_NORTC              BIT0    /* RTC Clock Logic Disabled       */
#define PMCS_IDLE               BIT1    /* IDLE Operation Active          */
#define PMCS_HIBER              BIT2    /* Hibernation Operation Active   */
#define PMCS_ANY_CLK_DIV        BIT4    /* Updating Any Clock Divisor     */
#define PMCS_ANY_PLL_MUL        BIT5    /* Updating Any PLL Multiplier    */
#define PMCS_ZAC2               BIT8    /* Updating ZAC2_MA Clock Divisor */
#define PMCS_AHB                BIT9    /* Updating AHB Clock Divisor     */
#define PMCS_DSP                BIT10   /* Updating DSP Clock Divisor     */
#define PMCS_LCD                BIT11   /* Updating LCD Clock Divisor     */
#define PMCS_MC                 BIT12   /* Updating Memory Controller Clock Divisor */
#define PMCS_CFC                BIT13   /* Updating Compact Flash Controller Clock Divisor */
#define PMCS_USB                BIT14   /* Updating USB Clock Divisor     */
#define PMCS_PCM                BIT15   /* Updating Pulse Code Modulation Clock Divisor */
#define PMCS_PLLA               BIT16   /* Updating PLL A Multiplier Value */
#define PMCS_PLLB               BIT17   /* Updating PLL B Multiplier Value */
#define PMCS_PLLC               BIT18   /* Updating PLL C Multiplier Value */
#define PMCS_SF                 BIT19   /* Updating Serial Flash Memory Cntrlr Divisor */
#define PMCS_PATA               BIT21   /* Updating PATA Clock Divisor     */
#define PMCS_SDMMC              BIT22   /* Updating SD/MMC Clock Divisor   */
#define PMCS_MSC                BIT23   /* Updating MS/MSPRO Clock Divisor */
#define PMCS_LPC                BIT24   /* Updating LPC Memory Cntrlr Clock Divisor */
#define PMCS_NAND               BIT25   /* Updating NAND Clock Divisor     */
#define PMCS_SPI                BIT26   /* Updating SPI Clock Divisor      */
#define PMCS_PLLD               BIT27   /* Updating PLL D Multiplier Value */
#define PMCS_BUSY               0xfffffffe

//=============================================================================
//
// PMIR_REG     PM Idle processor Request Register bit function.
//
//=============================================================================
#define PMIR_IDLE                       /* IDLE Processor Request Bit */


//=============================================================================
//
// PMHC_REG     PM Hibernation Control Register bits functions.
//
//=============================================================================
#define PMHC_SLEEP              0x03   /* A Power-on Hibernation Mode  */
#define PMHC_SUSPEND            0x01   /* A Power-off Hibernation Mode */
#define PMHC_SHUTDOWN           0x05   /* A Power-off Hibernation Mode */
#define PMHC_25M_OSCLR          BIT8    /* 25MHz Oscillator Enable      */

//=============================================================================
//
// PMWS_REG     PM Wake-up Status register bits definitions.
//
//=============================================================================
#define PMWS_WAKEMASK           0xFF    /* General Purpose Wake-up Status */
#define PMWS_PWRBUTTON          BIT14   /* Power Button Wake-up Status    */
#define PMWS_RTC                BIT15   /* RTC Wake-up Status             */

//=============================================================================
//
// PMWE_REG     PM Wake-up event Enable Register bits functions.
//
//=============================================================================
#define PMWE_WAKEMASK           0xFF                    /* General Purpose Wake-up Enable */
#define PMWE_WAKEUP(x)          (BIT0 << ((x) & 0x7))   /* Genaral Wake-up 0-7 Enable     */
#define PMWE_RTC                BIT15                   /* RTC Wake-up Enable             */

//=============================================================================
//
// PMWT_REG     PM Wake-up event Type Register bits functions.
//
//=============================================================================
#define PMWT_ZERO               0x00            /* Wake-up signal is a zero */
#define PMWT_ONE                0x01            /* Wake-up signal is a one  */
#define PMWT_FALLING            0x02            /* Wake-up signal generates a falling edge */
#define PMWT_RISING             0x03            /* Wake-up signal generates a rising edge  */
#define PMWT_EDGE               0x04            /* Wake-up signal generates an edge        */

#define PMWT_TYPEMASK           0xFF   /* Wake-up event Type Mask                 */

#define PMWT_WAKEUP0(x)         (((x) & PMWT_TYPEMASK) << 0)
                                                /* General Purpose Wake-up 0 Type bits     */
#define PMWT_WAKEUP1(x)         (((x) & PMWT_TYPEMASK) << 4)
                                                /* General Purpose Wake-up 1 Type bits     */
#define PMWT_WAKEUP2(x)         (((x) & PMWT_TYPEMASK) << 8)
                                                /* General Purpose Wake-up 2 Type bits     */
#define PMWT_WAKEUP3(x)         (((x) & PMWT_TYPEMASK) << 12)
                                                /* General Purpose Wake-up 3 Type bits     */
#define PMWT_WAKEUP4(x)         (((x) & PMWT_TYPEMASK) << 16)
                                                /* General Purpose Wake-up 4 Type bits     */
#define PMWT_WAKEUP5(x)         (((x) & PMWT_TYPEMASK) << 20)
                                                /* General Purpose Wake-up 5 Type bits     */
#define PMWT_WAKEUP6(x)         (((x) & PMWT_TYPEMASK) << 24)
                                                /* General Purpose Wake-up 6 Type bits     */
#define PMWT_WAKEUP7(x)         (((x) & PMWT_TYPEMASK) << 28)
                                                /* General Purpose Wake-up 7 Type bits     */
#define PMWT_WAKEUPMASK         0x07            /* Max wakeup source number                */

#define PMWT_WAKEUP(src, type)  ((type & PMWT_TYPEMASK) << ((src & PMWT_WAKEUPMASK) * 4))

//=============================================================================
//
// PMRS_REG     PM Reset Status Register bits definitions.
//
//=============================================================================
#define PMRS_PMR                BIT0    /* Power Managment Reset  */
#define PMRS_IOR                BIT1    /* I/O normal power Reset */
#define PMRS_HBR                BIT2    /* HiBernation Reset      */
#define PMRS_WDR                BIT3    /* WatchDog Reset         */
#define PMRS_SWR                BIT4    /* SoftWare Reset         */
#define PMRS_SHR                BIT5    /* Shutdown Reset         */
#define PMRS_PGR                BIT6    /* Power good reset       */
/* Bits 7-31: Reserved */

//=============================================================================
//
// PMPB_REG     PM Power Button Control Register
//
//=============================================================================
#define PMPB_SOFTPWR            BIT0    /* Soft Power Enable      */
/* Bits 1-31: Reserved */

//=============================================================================
//
// PMSR_REG     PM Software Reset request Register bit function.
//
//=============================================================================
#define PMSR_SWR                BIT0    /* SoftWare Reset request */
/* Bits 1-31: Reserved */

//=============================================================================
//
// PMPATA_REG   PM PATA Interface Drive Strength Register (8-bit Register)
//
//=============================================================================
#define PMPATA_ONETHIRD         0x00    /* One-third Drive Strength */
#define PMPATA_ONEHALF          0x01    /* One-half Drive Strength  */
#define PMPATA_TWOTHIRD         0x02    /* Two-third Drive Strength */
#define PMPATA_FULL             0x03    /* Full Drive Strength      */
#define PMSR_SWR                BIT0    /* SoftWare Reset request */
/* Bits 2-7: Reserved */

//=============================================================================
//
// OSTS_REG     OS Timer Status Register bits definitions.
//
//=============================================================================
#define OSTS_M0                 BIT0    /* OS Timer 0 Match detected */
#define OSTS_M1                 BIT1    /* OS Timer 1 Match detected */
#define OSTS_M2                 BIT2    /* OS Timer 2 Match detected */
#define OSTS_M3                 BIT3    /* OS Timer 3 Match detected */
/* Bits 4-31: Reserved */

//=============================================================================
//
// OSTW_REG     OS Timer Watchdog enable Register bit function.
//
//=============================================================================
#define OSTW_WE                 BIT0    /* OS Timer Channel 0 Watchdog Enable */
/* Bits 1-31: Reserved */

//=============================================================================
//
// OSTI_REG     OS Timer Interrupt enable Register bits functions.
//
//=============================================================================
#define OSTI_E0                 BIT0    /* OS Timer Channel 0 Interrupt Enable */
#define OSTI_E1                 BIT1    /* OS Timer Channel 0 Interrupt Enable */
#define OSTI_E2                 BIT2    /* OS Timer Channel 0 Interrupt Enable */
#define OSTI_E3                 BIT3    /* OS Timer Channel 0 Interrupt Enable */
/* Bits 4-31: Reserved */
//=============================================================================
//
// OSTC_REG     OS Timer Control Register bits functions.
//
//=============================================================================
#define OSTC_ENABLE             BIT0    /* OS Timer Enable bit             */
#define OSTC_RDREQ              BIT1    /* OS Timer Read Count Request bit */
/* Bits 2-31: Reserved */

//=============================================================================
//
// OSTA_REG     OS Timer Access status Register bits definitions.
//
//=============================================================================
#define OSTA_MWA0               BIT0    /* OS Timer Match 0 Write Active */
#define OSTA_MWA1               BIT1    /* OS Timer Match 1 Write Active */
#define OSTA_MWA2               BIT2    /* OS Timer Match 2 Write Active */
#define OSTA_MWA3               BIT3    /* OS Timer Match 3 Write Active */
#define OSTA_CWA                BIT4    /* OS Timer Count Write Active   */
#define OSTA_RCA                BIT5    /* OS Timer Read Count Active    */
/* Bits 6-31: Reserved */

//=============================================================================
//
// PMMISC_REG   PM Miscellaneous Clock Controls Register
//
//=============================================================================
#define PMMISC_24MHZ            BIT0    /* 24MHz Clock Source            */
/* Bits 1-31: Reserved */

//=============================================================================
//
// Miscellaneous definitions
//
//=============================================================================
#define __OST_BASE              0xD8130100      /* OS Timers base address */
#define OST_MAX_CHANNEL         4               /* Four channels OS Timer */
//#define PMC_MAX_WAKEUP          9               /* Wakeup source number
//                                                 * 8 general purpose + 1 RTC
//                                                 */

#endif //__PMC_H_
