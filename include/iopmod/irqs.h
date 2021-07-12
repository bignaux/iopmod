// SPDX-License-Identifier: GPL-2.0

#ifndef IOPMOD_IRQS_H
#define IOPMOD_IRQS_H

enum {
	IRQ_IOP_VBLANK = 0,
	IRQ_IOP_SBUS,
	IRQ_IOP_CDVD,
	IRQ_IOP_DMA,
	IRQ_IOP_RTC0,
	IRQ_IOP_RTC1,
	IRQ_IOP_RTC2,
	IRQ_IOP_SIO0,
	IRQ_IOP_SIO1,
	IRQ_IOP_SPU,
	IRQ_IOP_PIO,
	IRQ_IOP_EVBLANK,
	IRQ_IOP_DVD,
	IRQ_IOP_DEV9,
	IRQ_IOP_RTC3,
	IRQ_IOP_RTC4,
	IRQ_IOP_RTC5,
	IRQ_IOP_SIO2,
	IRQ_IOP_HTR0,
	IRQ_IOP_HTR1,
	IRQ_IOP_HTR2,
	IRQ_IOP_HTR3,
	IRQ_IOP_USB,
	IRQ_IOP_EXTR,
	IRQ_IOP_ILINK,
	IRQ_IOP_ILNKDMA,

	IRQ_IOP_DMA_MDEC_IN = 0x20,	/* Ch0 */
	IRQ_IOP_DMA_MDEC_OUT,		/* Ch1 */
	IRQ_IOP_DMA_SIF2,		/* Ch2 */
	IRQ_IOP_DMA_CDVD,		/* Ch3 */
	IRQ_IOP_DMA_SPU,		/* Ch4 */
	IRQ_IOP_DMA_PIO,		/* Ch5 */
	IRQ_IOP_DMA_GPU_OTC,		/* Ch6 */
	IRQ_IOP_DMA_BE,			/* Bus error */
	IRQ_IOP_DMA_SPU2,		/* Ch7 */
	IRQ_IOP_DMA_DEV9,		/* Ch8 */
	IRQ_IOP_DMA_SIF0,		/* Ch9 */
	IRQ_IOP_DMA_SIF1,		/* Ch10 */
	IRQ_IOP_DMA_SIO2_IN,		/* Ch11 */
	IRQ_IOP_DMA_SIO2_OUT,		/* Ch12 */

	IRQ_IOP_SW1 = 0x3E,		/* R3000A software interrupt 1 */
	IRQ_IOP_SW2,			/* R3000A software interrupt 2 */

	IOP_IRQ_COUNT = 42
};

#endif /* IOPMOD_IRQS_H */