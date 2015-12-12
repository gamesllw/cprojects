static struct intc_vect vectors[] __initdata = {
	INTC_IRQ(IRQ0, 64), INTC_IRQ(IRQ1, 65),
	INTC_IRQ(IRQ2, 66), INTC_IRQ(IRQ3, 67),
	INTC_IRQ(IRQ4, 68), INTC_IRQ(IRQ5, 69),
	INTC_IRQ(IRQ6, 70), INTC_IRQ(IRQ7, 71),
	INTC_IRQ(PINT0, 80), INTC_IRQ(PINT1, 81),
	INTC_IRQ(PINT2, 82), INTC_IRQ(PINT3, 83),
	INTC_IRQ(PINT4, 84), INTC_IRQ(PINT5, 85),
	INTC_IRQ(PINT6, 86), INTC_IRQ(PINT7, 87),
	INTC_IRQ(DMAC0, 108), INTC_IRQ(DMAC0, 109),
	INTC_IRQ(DMAC1, 112), INTC_IRQ(DMAC1, 113),
	INTC_IRQ(DMAC2, 116), INTC_IRQ(DMAC2, 117),
	INTC_IRQ(DMAC3, 120), INTC_IRQ(DMAC3, 121),
	INTC_IRQ(DMAC4, 124), INTC_IRQ(DMAC4, 125),
	INTC_IRQ(DMAC5, 128), INTC_IRQ(DMAC5, 129),
	INTC_IRQ(DMAC6, 132), INTC_IRQ(DMAC6, 133),
	INTC_IRQ(DMAC7, 136), INTC_IRQ(DMAC7, 137),
	INTC_IRQ(USB, 140), INTC_IRQ(LCDC, 141),
	INTC_IRQ(CMT0, 142), INTC_IRQ(CMT1, 143),
	INTC_IRQ(BSC, 144), INTC_IRQ(WDT, 145),
	INTC_IRQ(MTU0_ABCD, 146), INTC_IRQ(MTU0_ABCD, 147),
	INTC_IRQ(MTU0_ABCD, 148), INTC_IRQ(MTU0_ABCD, 149),
	INTC_IRQ(MTU0_VEF, 150),
	INTC_IRQ(MTU0_VEF, 151), INTC_IRQ(MTU0_VEF, 152),
	INTC_IRQ(MTU1_AB, 153), INTC_IRQ(MTU1_AB, 154),
	INTC_IRQ(MTU1_VU, 155), INTC_IRQ(MTU1_VU, 156),
	INTC_IRQ(MTU2_AB, 157), INTC_IRQ(MTU2_AB, 158),
	INTC_IRQ(MTU2_VU, 159), INTC_IRQ(MTU2_VU, 160),
	INTC_IRQ(MTU3_ABCD, 161), INTC_IRQ(MTU3_ABCD, 162),
	INTC_IRQ(MTU3_ABCD, 163), INTC_IRQ(MTU3_ABCD, 164),
	INTC_IRQ(MTU2_TCI3V, 165),
	INTC_IRQ(MTU4_ABCD, 166), INTC_IRQ(MTU4_ABCD, 167),
	INTC_IRQ(MTU4_ABCD, 168), INTC_IRQ(MTU4_ABCD, 169),
	INTC_IRQ(MTU2_TCI4V, 170),
	INTC_IRQ(ADC_ADI, 171),
	INTC_IRQ(IIC30, 172), INTC_IRQ(IIC30, 173),
	INTC_IRQ(IIC30, 174), INTC_IRQ(IIC30, 175),
	INTC_IRQ(IIC30, 176),
	INTC_IRQ(IIC31, 177), INTC_IRQ(IIC31, 178),
	INTC_IRQ(IIC31, 179), INTC_IRQ(IIC31, 180),
	INTC_IRQ(IIC31, 181),
	INTC_IRQ(IIC32, 182), INTC_IRQ(IIC32, 183),
	INTC_IRQ(IIC32, 184), INTC_IRQ(IIC32, 185),
	INTC_IRQ(IIC32, 186),
	INTC_IRQ(IIC33, 187), INTC_IRQ(IIC33, 188),
	INTC_IRQ(IIC33, 189), INTC_IRQ(IIC33, 190),
	INTC_IRQ(IIC33, 191),
	INTC_IRQ(SCIF0, 192), INTC_IRQ(SCIF0, 193),
	INTC_IRQ(SCIF0, 194), INTC_IRQ(SCIF0, 195),
	INTC_IRQ(SCIF1, 196), INTC_IRQ(SCIF1, 197),
	INTC_IRQ(SCIF1, 198), INTC_IRQ(SCIF1, 199),
	INTC_IRQ(SCIF2, 200), INTC_IRQ(SCIF2, 201),
	INTC_IRQ(SCIF2, 202), INTC_IRQ(SCIF2, 203),
	INTC_IRQ(SCIF3, 204), INTC_IRQ(SCIF3, 205),
	INTC_IRQ(SCIF3, 206), INTC_IRQ(SCIF3, 207),
	INTC_IRQ(SSU0, 208), INTC_IRQ(SSU0, 209),
	INTC_IRQ(SSU0, 210),
	INTC_IRQ(SSU1, 211), INTC_IRQ(SSU1, 212),
	INTC_IRQ(SSU1, 213),
	INTC_IRQ(SSI0_SSII, 214), INTC_IRQ(SSI1_SSII, 215),
	INTC_IRQ(SSI2_SSII, 216), INTC_IRQ(SSI3_SSII, 217),
	INTC_IRQ(FLCTL, 224), INTC_IRQ(FLCTL, 225),
	INTC_IRQ(FLCTL, 226), INTC_IRQ(FLCTL, 227),
	INTC_IRQ(RTC, 231), INTC_IRQ(RTC, 232),
	INTC_IRQ(RTC, 233),
	INTC_IRQ(RCAN0, 234), INTC_IRQ(RCAN0, 235),
	INTC_IRQ(RCAN0, 236), INTC_IRQ(RCAN0, 237),
	INTC_IRQ(RCAN0, 238),
	INTC_IRQ(RCAN1, 239), INTC_IRQ(RCAN1, 240),
	INTC_IRQ(RCAN1, 241), INTC_IRQ(RCAN1, 242),
	INTC_IRQ(RCAN1, 243),

	/* SH7263-specific trash */
#ifdef CONFIG_CPU_SUBTYPE_SH7263
	INTC_IRQ(ROMDEC, 218), INTC_IRQ(ROMDEC, 219),
	INTC_IRQ(ROMDEC, 220), INTC_IRQ(ROMDEC, 221),
	INTC_IRQ(ROMDEC, 222), INTC_IRQ(ROMDEC, 223),

	INTC_IRQ(SDHI, 228), INTC_IRQ(SDHI, 229),
	INTC_IRQ(SDHI, 230),

	INTC_IRQ(SRC, 244), INTC_IRQ(SRC, 245),
	INTC_IRQ(SRC, 246),

	INTC_IRQ(IEBI, 247),
#endif
};
