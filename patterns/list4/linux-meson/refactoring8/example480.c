static const struct mux_config pins[] = {
#ifdef CONFIG_DAVINCI_MUX
	MUX_CFG(TNETV107X, ASR_A00,		0, 0, 0x1f, 0x00, false)
	MUX_CFG(TNETV107X, GPIO32,		0, 0, 0x1f, 0x04, false)
	MUX_CFG(TNETV107X, ASR_A01,		0, 5, 0x1f, 0x00, false)
	MUX_CFG(TNETV107X, GPIO33,		0, 5, 0x1f, 0x04, false)
	MUX_CFG(TNETV107X, ASR_A02,		0, 10, 0x1f, 0x00, false)
	MUX_CFG(TNETV107X, GPIO34,		0, 10, 0x1f, 0x04, false)
	MUX_CFG(TNETV107X, ASR_A03,		0, 15, 0x1f, 0x00, false)
	MUX_CFG(TNETV107X, GPIO35,		0, 15, 0x1f, 0x04, false)
	MUX_CFG(TNETV107X, ASR_A04,		0, 20, 0x1f, 0x00, false)
	MUX_CFG(TNETV107X, GPIO36,		0, 20, 0x1f, 0x04, false)
	MUX_CFG(TNETV107X, ASR_A05,		0, 25, 0x1f, 0x00, false)
	MUX_CFG(TNETV107X, GPIO37,		0, 25, 0x1f, 0x04, false)
	MUX_CFG(TNETV107X, ASR_A06,		1, 0, 0x1f, 0x00, false)
	MUX_CFG(TNETV107X, GPIO38,		1, 0, 0x1f, 0x04, false)
	MUX_CFG(TNETV107X, ASR_A07,		1, 5, 0x1f, 0x00, false)
	MUX_CFG(TNETV107X, GPIO39,		1, 5, 0x1f, 0x04, false)
	MUX_CFG(TNETV107X, ASR_A08,		1, 10, 0x1f, 0x00, false)
	MUX_CFG(TNETV107X, GPIO40,		1, 10, 0x1f, 0x04, false)
	MUX_CFG(TNETV107X, ASR_A09,		1, 15, 0x1f, 0x00, false)
	MUX_CFG(TNETV107X, GPIO41,		1, 15, 0x1f, 0x04, false)
	MUX_CFG(TNETV107X, ASR_A10,		1, 20, 0x1f, 0x00, false)
	MUX_CFG(TNETV107X, GPIO42,		1, 20, 0x1f, 0x04, false)
	MUX_CFG(TNETV107X, ASR_A11,		1, 25, 0x1f, 0x00, false)
	MUX_CFG(TNETV107X, BOOT_STRP_0,		1, 25, 0x1f, 0x04, false)
	MUX_CFG(TNETV107X, ASR_A12,		2, 0, 0x1f, 0x00, false)
	MUX_CFG(TNETV107X, BOOT_STRP_1,		2, 0, 0x1f, 0x04, false)
	MUX_CFG(TNETV107X, ASR_A13,		2, 5, 0x1f, 0x00, false)
	MUX_CFG(TNETV107X, GPIO43,		2, 5, 0x1f, 0x04, false)
	MUX_CFG(TNETV107X, ASR_A14,		2, 10, 0x1f, 0x00, false)
	MUX_CFG(TNETV107X, GPIO44,		2, 10, 0x1f, 0x04, false)
	MUX_CFG(TNETV107X, ASR_A15,		2, 15, 0x1f, 0x00, false)
	MUX_CFG(TNETV107X, GPIO45,		2, 15, 0x1f, 0x04, false)
	MUX_CFG(TNETV107X, ASR_A16,		2, 20, 0x1f, 0x00, false)
	MUX_CFG(TNETV107X, GPIO46,		2, 20, 0x1f, 0x04, false)
	MUX_CFG(TNETV107X, ASR_A17,		2, 25, 0x1f, 0x00, false)
	MUX_CFG(TNETV107X, GPIO47,		2, 25, 0x1f, 0x04, false)
	MUX_CFG(TNETV107X, ASR_A18,		3, 0, 0x1f, 0x00, false)
	MUX_CFG(TNETV107X, GPIO48,		3, 0, 0x1f, 0x04, false)
	MUX_CFG(TNETV107X, SDIO1_DATA3_0,	3, 0, 0x1f, 0x1c, false)
	MUX_CFG(TNETV107X, ASR_A19,		3, 5, 0x1f, 0x00, false)
	MUX_CFG(TNETV107X, GPIO49,		3, 5, 0x1f, 0x04, false)
	MUX_CFG(TNETV107X, SDIO1_DATA2_0,	3, 5, 0x1f, 0x1c, false)
	MUX_CFG(TNETV107X, ASR_A20,		3, 10, 0x1f, 0x00, false)
	MUX_CFG(TNETV107X, GPIO50,		3, 10, 0x1f, 0x04, false)
	MUX_CFG(TNETV107X, SDIO1_DATA1_0,	3, 10, 0x1f, 0x1c, false)
	MUX_CFG(TNETV107X, ASR_A21,		3, 15, 0x1f, 0x00, false)
	MUX_CFG(TNETV107X, GPIO51,		3, 15, 0x1f, 0x04, false)
	MUX_CFG(TNETV107X, SDIO1_DATA0_0,	3, 15, 0x1f, 0x1c, false)
	MUX_CFG(TNETV107X, ASR_A22,		3, 20, 0x1f, 0x00, false)
	MUX_CFG(TNETV107X, GPIO52,		3, 20, 0x1f, 0x04, false)
	MUX_CFG(TNETV107X, SDIO1_CMD_0,		3, 20, 0x1f, 0x1c, false)
	MUX_CFG(TNETV107X, ASR_A23,		3, 25, 0x1f, 0x00, false)
	MUX_CFG(TNETV107X, GPIO53,		3, 25, 0x1f, 0x04, false)
	MUX_CFG(TNETV107X, SDIO1_CLK_0,		3, 25, 0x1f, 0x1c, false)
	MUX_CFG(TNETV107X, ASR_BA_1,		4, 0, 0x1f, 0x00, false)
	MUX_CFG(TNETV107X, GPIO54,		4, 0, 0x1f, 0x04, false)
	MUX_CFG(TNETV107X, SYS_PLL_CLK,		4, 0, 0x1f, 0x1c, false)
	MUX_CFG(TNETV107X, ASR_CS0,		4, 5, 0x1f, 0x00, false)
	MUX_CFG(TNETV107X, ASR_CS1,		4, 10, 0x1f, 0x00, false)
	MUX_CFG(TNETV107X, ASR_CS2,		4, 15, 0x1f, 0x00, false)
	MUX_CFG(TNETV107X, TDM_PLL_CLK,		4, 15, 0x1f, 0x1c, false)
	MUX_CFG(TNETV107X, ASR_CS3,		4, 20, 0x1f, 0x00, false)
	MUX_CFG(TNETV107X, ETH_PHY_CLK,		4, 20, 0x1f, 0x0c, false)
	MUX_CFG(TNETV107X, ASR_D00,		4, 25, 0x1f, 0x00, false)
	MUX_CFG(TNETV107X, GPIO55,		4, 25, 0x1f, 0x1c, false)
	MUX_CFG(TNETV107X, ASR_D01,		5, 0, 0x1f, 0x00, false)
	MUX_CFG(TNETV107X, GPIO56,		5, 0, 0x1f, 0x1c, false)
	MUX_CFG(TNETV107X, ASR_D02,		5, 5, 0x1f, 0x00, false)
	MUX_CFG(TNETV107X, GPIO57,		5, 5, 0x1f, 0x1c, false)
	MUX_CFG(TNETV107X, ASR_D03,		5, 10, 0x1f, 0x00, false)
	MUX_CFG(TNETV107X, GPIO58,		5, 10, 0x1f, 0x1c, false)
	MUX_CFG(TNETV107X, ASR_D04,		5, 15, 0x1f, 0x00, false)
	MUX_CFG(TNETV107X, GPIO59_0,		5, 15, 0x1f, 0x1c, false)
	MUX_CFG(TNETV107X, ASR_D05,		5, 20, 0x1f, 0x00, false)
	MUX_CFG(TNETV107X, GPIO60_0,		5, 20, 0x1f, 0x1c, false)
	MUX_CFG(TNETV107X, ASR_D06,		5, 25, 0x1f, 0x00, false)
	MUX_CFG(TNETV107X, GPIO61_0,		5, 25, 0x1f, 0x1c, false)
	MUX_CFG(TNETV107X, ASR_D07,		6, 0, 0x1f, 0x00, false)
	MUX_CFG(TNETV107X, GPIO62_0,		6, 0, 0x1f, 0x1c, false)
	MUX_CFG(TNETV107X, ASR_D08,		6, 5, 0x1f, 0x00, false)
	MUX_CFG(TNETV107X, GPIO63_0,		6, 5, 0x1f, 0x1c, false)
	MUX_CFG(TNETV107X, ASR_D09,		6, 10, 0x1f, 0x00, false)
	MUX_CFG(TNETV107X, GPIO64_0,		6, 10, 0x1f, 0x1c, false)
	MUX_CFG(TNETV107X, ASR_D10,		6, 15, 0x1f, 0x00, false)
	MUX_CFG(TNETV107X, SDIO1_DATA3_1,	6, 15, 0x1f, 0x1c, false)
	MUX_CFG(TNETV107X, ASR_D11,		6, 20, 0x1f, 0x00, false)
	MUX_CFG(TNETV107X, SDIO1_DATA2_1,	6, 20, 0x1f, 0x1c, false)
	MUX_CFG(TNETV107X, ASR_D12,		6, 25, 0x1f, 0x00, false)
	MUX_CFG(TNETV107X, SDIO1_DATA1_1,	6, 25, 0x1f, 0x1c, false)
	MUX_CFG(TNETV107X, ASR_D13,		7, 0, 0x1f, 0x00, false)
	MUX_CFG(TNETV107X, SDIO1_DATA0_1,	7, 0, 0x1f, 0x1c, false)
	MUX_CFG(TNETV107X, ASR_D14,		7, 5, 0x1f, 0x00, false)
	MUX_CFG(TNETV107X, SDIO1_CMD_1,		7, 5, 0x1f, 0x1c, false)
	MUX_CFG(TNETV107X, ASR_D15,		7, 10, 0x1f, 0x00, false)
	MUX_CFG(TNETV107X, SDIO1_CLK_1,		7, 10, 0x1f, 0x1c, false)
	MUX_CFG(TNETV107X, ASR_OE,		7, 15, 0x1f, 0x00, false)
	MUX_CFG(TNETV107X, BOOT_STRP_2,		7, 15, 0x1f, 0x04, false)
	MUX_CFG(TNETV107X, ASR_RNW,		7, 20, 0x1f, 0x00, false)
	MUX_CFG(TNETV107X, GPIO29_0,		7, 20, 0x1f, 0x04, false)
	MUX_CFG(TNETV107X, ASR_WAIT,		7, 25, 0x1f, 0x00, false)
	MUX_CFG(TNETV107X, GPIO30_0,		7, 25, 0x1f, 0x04, false)
	MUX_CFG(TNETV107X, ASR_WE,		8, 0, 0x1f, 0x00, false)
	MUX_CFG(TNETV107X, BOOT_STRP_3,		8, 0, 0x1f, 0x04, false)
	MUX_CFG(TNETV107X, ASR_WE_DQM0,		8, 5, 0x1f, 0x00, false)
	MUX_CFG(TNETV107X, GPIO31,		8, 5, 0x1f, 0x04, false)
	MUX_CFG(TNETV107X, LCD_PD17_0,		8, 5, 0x1f, 0x1c, false)
	MUX_CFG(TNETV107X, ASR_WE_DQM1,		8, 10, 0x1f, 0x00, false)
	MUX_CFG(TNETV107X, ASR_BA0_0,		8, 10, 0x1f, 0x04, false)
	MUX_CFG(TNETV107X, VLYNQ_CLK,		9, 0, 0x1f, 0x00, false)
	MUX_CFG(TNETV107X, GPIO14,		9, 0, 0x1f, 0x04, false)
	MUX_CFG(TNETV107X, LCD_PD19_0,		9, 0, 0x1f, 0x1c, false)
	MUX_CFG(TNETV107X, VLYNQ_RXD0,		9, 5, 0x1f, 0x00, false)
	MUX_CFG(TNETV107X, GPIO15,		9, 5, 0x1f, 0x04, false)
	MUX_CFG(TNETV107X, LCD_PD20_0,		9, 5, 0x1f, 0x1c, false)
	MUX_CFG(TNETV107X, VLYNQ_RXD1,		9, 10, 0x1f, 0x00, false)
	MUX_CFG(TNETV107X, GPIO16,		9, 10, 0x1f, 0x04, false)
	MUX_CFG(TNETV107X, LCD_PD21_0,		9, 10, 0x1f, 0x1c, false)
	MUX_CFG(TNETV107X, VLYNQ_TXD0,		9, 15, 0x1f, 0x00, false)
	MUX_CFG(TNETV107X, GPIO17,		9, 15, 0x1f, 0x04, false)
	MUX_CFG(TNETV107X, LCD_PD22_0,		9, 15, 0x1f, 0x1c, false)
	MUX_CFG(TNETV107X, VLYNQ_TXD1,		9, 20, 0x1f, 0x00, false)
	MUX_CFG(TNETV107X, GPIO18,		9, 20, 0x1f, 0x04, false)
	MUX_CFG(TNETV107X, LCD_PD23_0,		9, 20, 0x1f, 0x1c, false)
	MUX_CFG(TNETV107X, SDIO0_CLK,		10, 0, 0x1f, 0x00, false)
	MUX_CFG(TNETV107X, GPIO19,		10, 0, 0x1f, 0x04, false)
	MUX_CFG(TNETV107X, SDIO0_CMD,		10, 5, 0x1f, 0x00, false)
	MUX_CFG(TNETV107X, GPIO20,		10, 5, 0x1f, 0x04, false)
	MUX_CFG(TNETV107X, SDIO0_DATA0,		10, 10, 0x1f, 0x00, false)
	MUX_CFG(TNETV107X, GPIO21,		10, 10, 0x1f, 0x04, false)
	MUX_CFG(TNETV107X, SDIO0_DATA1,		10, 15, 0x1f, 0x00, false)
	MUX_CFG(TNETV107X, GPIO22,		10, 15, 0x1f, 0x04, false)
	MUX_CFG(TNETV107X, SDIO0_DATA2,		10, 20, 0x1f, 0x00, false)
	MUX_CFG(TNETV107X, GPIO23,		10, 20, 0x1f, 0x04, false)
	MUX_CFG(TNETV107X, SDIO0_DATA3,		10, 25, 0x1f, 0x00, false)
	MUX_CFG(TNETV107X, GPIO24,		10, 25, 0x1f, 0x04, false)
	MUX_CFG(TNETV107X, EMU0,		11, 0, 0x1f, 0x00, false)
	MUX_CFG(TNETV107X, EMU1,		11, 5, 0x1f, 0x00, false)
	MUX_CFG(TNETV107X, RTCK,		12, 0, 0x1f, 0x00, false)
	MUX_CFG(TNETV107X, TRST_N,		12, 5, 0x1f, 0x00, false)
	MUX_CFG(TNETV107X, TCK,			12, 10, 0x1f, 0x00, false)
	MUX_CFG(TNETV107X, TDI,			12, 15, 0x1f, 0x00, false)
	MUX_CFG(TNETV107X, TDO,			12, 20, 0x1f, 0x00, false)
	MUX_CFG(TNETV107X, TMS,			12, 25, 0x1f, 0x00, false)
	MUX_CFG(TNETV107X, TDM1_CLK,		13, 0, 0x1f, 0x00, false)
	MUX_CFG(TNETV107X, TDM1_RX,		13, 5, 0x1f, 0x00, false)
	MUX_CFG(TNETV107X, TDM1_TX,		13, 10, 0x1f, 0x00, false)
	MUX_CFG(TNETV107X, TDM1_FS,		13, 15, 0x1f, 0x00, false)
	MUX_CFG(TNETV107X, KEYPAD_R0,		14, 0, 0x1f, 0x00, false)
	MUX_CFG(TNETV107X, KEYPAD_R1,		14, 5, 0x1f, 0x00, false)
	MUX_CFG(TNETV107X, KEYPAD_R2,		14, 10, 0x1f, 0x00, false)
	MUX_CFG(TNETV107X, KEYPAD_R3,		14, 15, 0x1f, 0x00, false)
	MUX_CFG(TNETV107X, KEYPAD_R4,		14, 20, 0x1f, 0x00, false)
	MUX_CFG(TNETV107X, KEYPAD_R5,		14, 25, 0x1f, 0x00, false)
	MUX_CFG(TNETV107X, KEYPAD_R6,		15, 0, 0x1f, 0x00, false)
	MUX_CFG(TNETV107X, GPIO12,		15, 0, 0x1f, 0x04, false)
	MUX_CFG(TNETV107X, KEYPAD_R7,		15, 5, 0x1f, 0x00, false)
	MUX_CFG(TNETV107X, GPIO10,		15, 5, 0x1f, 0x04, false)
	MUX_CFG(TNETV107X, KEYPAD_C0,		15, 10, 0x1f, 0x00, false)
	MUX_CFG(TNETV107X, KEYPAD_C1,		15, 15, 0x1f, 0x00, false)
	MUX_CFG(TNETV107X, KEYPAD_C2,		15, 20, 0x1f, 0x00, false)
	MUX_CFG(TNETV107X, KEYPAD_C3,		15, 25, 0x1f, 0x00, false)
	MUX_CFG(TNETV107X, KEYPAD_C4,		16, 0, 0x1f, 0x00, false)
	MUX_CFG(TNETV107X, KEYPAD_C5,		16, 5, 0x1f, 0x00, false)
	MUX_CFG(TNETV107X, KEYPAD_C6,		16, 10, 0x1f, 0x00, false)
	MUX_CFG(TNETV107X, GPIO13,		16, 10, 0x1f, 0x04, false)
	MUX_CFG(TNETV107X, TEST_CLK_IN,		16, 10, 0x1f, 0x0c, false)
	MUX_CFG(TNETV107X, KEYPAD_C7,		16, 15, 0x1f, 0x00, false)
	MUX_CFG(TNETV107X, GPIO11,		16, 15, 0x1f, 0x04, false)
	MUX_CFG(TNETV107X, SSP0_0,		17, 0, 0x1f, 0x00, false)
	MUX_CFG(TNETV107X, SCC_DCLK,		17, 0, 0x1f, 0x04, false)
	MUX_CFG(TNETV107X, LCD_PD20_1,		17, 0, 0x1f, 0x0c, false)
	MUX_CFG(TNETV107X, SSP0_1,		17, 5, 0x1f, 0x00, false)
	MUX_CFG(TNETV107X, SCC_CS_N,		17, 5, 0x1f, 0x04, false)
	MUX_CFG(TNETV107X, LCD_PD21_1,		17, 5, 0x1f, 0x0c, false)
	MUX_CFG(TNETV107X, SSP0_2,		17, 10, 0x1f, 0x00, false)
	MUX_CFG(TNETV107X, SCC_D,		17, 10, 0x1f, 0x04, false)
	MUX_CFG(TNETV107X, LCD_PD22_1,		17, 10, 0x1f, 0x0c, false)
	MUX_CFG(TNETV107X, SSP0_3,		17, 15, 0x1f, 0x00, false)
	MUX_CFG(TNETV107X, SCC_RESETN,		17, 15, 0x1f, 0x04, false)
	MUX_CFG(TNETV107X, LCD_PD23_1,		17, 15, 0x1f, 0x0c, false)
	MUX_CFG(TNETV107X, SSP1_0,		18, 0, 0x1f, 0x00, false)
	MUX_CFG(TNETV107X, GPIO25,		18, 0, 0x1f, 0x04, false)
	MUX_CFG(TNETV107X, UART2_CTS,		18, 0, 0x1f, 0x0c, false)
	MUX_CFG(TNETV107X, SSP1_1,		18, 5, 0x1f, 0x00, false)
	MUX_CFG(TNETV107X, GPIO26,		18, 5, 0x1f, 0x04, false)
	MUX_CFG(TNETV107X, UART2_RD,		18, 5, 0x1f, 0x0c, false)
	MUX_CFG(TNETV107X, SSP1_2,		18, 10, 0x1f, 0x00, false)
	MUX_CFG(TNETV107X, GPIO27,		18, 10, 0x1f, 0x04, false)
	MUX_CFG(TNETV107X, UART2_RTS,		18, 10, 0x1f, 0x0c, false)
	MUX_CFG(TNETV107X, SSP1_3,		18, 15, 0x1f, 0x00, false)
	MUX_CFG(TNETV107X, GPIO28,		18, 15, 0x1f, 0x04, false)
	MUX_CFG(TNETV107X, UART2_TD,		18, 15, 0x1f, 0x0c, false)
	MUX_CFG(TNETV107X, UART0_CTS,		19, 0, 0x1f, 0x00, false)
	MUX_CFG(TNETV107X, UART0_RD,		19, 5, 0x1f, 0x00, false)
	MUX_CFG(TNETV107X, UART0_RTS,		19, 10, 0x1f, 0x00, false)
	MUX_CFG(TNETV107X, UART0_TD,		19, 15, 0x1f, 0x00, false)
	MUX_CFG(TNETV107X, UART1_RD,		19, 20, 0x1f, 0x00, false)
	MUX_CFG(TNETV107X, UART1_TD,		19, 25, 0x1f, 0x00, false)
	MUX_CFG(TNETV107X, LCD_AC_NCS,		20, 0, 0x1f, 0x00, false)
	MUX_CFG(TNETV107X, LCD_HSYNC_RNW,	20, 5, 0x1f, 0x00, false)
	MUX_CFG(TNETV107X, LCD_VSYNC_A0,	20, 10, 0x1f, 0x00, false)
	MUX_CFG(TNETV107X, LCD_MCLK,		20, 15, 0x1f, 0x00, false)
	MUX_CFG(TNETV107X, LCD_PD16_0,		20, 15, 0x1f, 0x0c, false)
	MUX_CFG(TNETV107X, LCD_PCLK_E,		20, 20, 0x1f, 0x00, false)
	MUX_CFG(TNETV107X, LCD_PD00,		20, 25, 0x1f, 0x00, false)
	MUX_CFG(TNETV107X, LCD_PD01,		21, 0, 0x1f, 0x00, false)
	MUX_CFG(TNETV107X, LCD_PD02,		21, 5, 0x1f, 0x00, false)
	MUX_CFG(TNETV107X, LCD_PD03,		21, 10, 0x1f, 0x00, false)
	MUX_CFG(TNETV107X, LCD_PD04,		21, 15, 0x1f, 0x00, false)
	MUX_CFG(TNETV107X, LCD_PD05,		21, 20, 0x1f, 0x00, false)
	MUX_CFG(TNETV107X, LCD_PD06,		21, 25, 0x1f, 0x00, false)
	MUX_CFG(TNETV107X, LCD_PD07,		22, 0, 0x1f, 0x00, false)
	MUX_CFG(TNETV107X, LCD_PD08,		22, 5, 0x1f, 0x00, false)
	MUX_CFG(TNETV107X, GPIO59_1,		22, 5, 0x1f, 0x0c, false)
	MUX_CFG(TNETV107X, LCD_PD09,		22, 10, 0x1f, 0x00, false)
	MUX_CFG(TNETV107X, GPIO60_1,		22, 10, 0x1f, 0x0c, false)
	MUX_CFG(TNETV107X, LCD_PD10,		22, 15, 0x1f, 0x00, false)
	MUX_CFG(TNETV107X, ASR_BA0_1,		22, 15, 0x1f, 0x04, false)
	MUX_CFG(TNETV107X, GPIO61_1,		22, 15, 0x1f, 0x0c, false)
	MUX_CFG(TNETV107X, LCD_PD11,		22, 20, 0x1f, 0x00, false)
	MUX_CFG(TNETV107X, GPIO62_1,		22, 20, 0x1f, 0x0c, false)
	MUX_CFG(TNETV107X, LCD_PD12,		22, 25, 0x1f, 0x00, false)
	MUX_CFG(TNETV107X, GPIO63_1,		22, 25, 0x1f, 0x0c, false)
	MUX_CFG(TNETV107X, LCD_PD13,		23, 0, 0x1f, 0x00, false)
	MUX_CFG(TNETV107X, GPIO64_1,		23, 0, 0x1f, 0x0c, false)
	MUX_CFG(TNETV107X, LCD_PD14,		23, 5, 0x1f, 0x00, false)
	MUX_CFG(TNETV107X, GPIO29_1,		23, 5, 0x1f, 0x0c, false)
	MUX_CFG(TNETV107X, LCD_PD15,		23, 10, 0x1f, 0x00, false)
	MUX_CFG(TNETV107X, GPIO30_1,		23, 10, 0x1f, 0x0c, false)
	MUX_CFG(TNETV107X, EINT0,		24, 0, 0x1f, 0x00, false)
	MUX_CFG(TNETV107X, GPIO08,		24, 0, 0x1f, 0x04, false)
	MUX_CFG(TNETV107X, EINT1,		24, 5, 0x1f, 0x00, false)
	MUX_CFG(TNETV107X, GPIO09,		24, 5, 0x1f, 0x04, false)
	MUX_CFG(TNETV107X, GPIO00,		24, 10, 0x1f, 0x00, false)
	MUX_CFG(TNETV107X, LCD_PD20_2,		24, 10, 0x1f, 0x04, false)
	MUX_CFG(TNETV107X, TDM_CLK_IN_2,	24, 10, 0x1f, 0x0c, false)
	MUX_CFG(TNETV107X, GPIO01,		24, 15, 0x1f, 0x00, false)
	MUX_CFG(TNETV107X, LCD_PD21_2,		24, 15, 0x1f, 0x04, false)
	MUX_CFG(TNETV107X, 24M_CLK_OUT_1,	24, 15, 0x1f, 0x0c, false)
	MUX_CFG(TNETV107X, GPIO02,		24, 20, 0x1f, 0x00, false)
	MUX_CFG(TNETV107X, LCD_PD22_2,		24, 20, 0x1f, 0x04, false)
	MUX_CFG(TNETV107X, GPIO03,		24, 25, 0x1f, 0x00, false)
	MUX_CFG(TNETV107X, LCD_PD23_2,		24, 25, 0x1f, 0x04, false)
	MUX_CFG(TNETV107X, GPIO04,		25, 0, 0x1f, 0x00, false)
	MUX_CFG(TNETV107X, LCD_PD16_1,		25, 0, 0x1f, 0x04, false)
	MUX_CFG(TNETV107X, USB0_RXERR,		25, 0, 0x1f, 0x0c, false)
	MUX_CFG(TNETV107X, GPIO05,		25, 5, 0x1f, 0x00, false)
	MUX_CFG(TNETV107X, LCD_PD17_1,		25, 5, 0x1f, 0x04, false)
	MUX_CFG(TNETV107X, TDM_CLK_IN_1,	25, 5, 0x1f, 0x0c, false)
	MUX_CFG(TNETV107X, GPIO06,		25, 10, 0x1f, 0x00, false)
	MUX_CFG(TNETV107X, LCD_PD18,		25, 10, 0x1f, 0x04, false)
	MUX_CFG(TNETV107X, 24M_CLK_OUT_2,	25, 10, 0x1f, 0x0c, false)
	MUX_CFG(TNETV107X, GPIO07,		25, 15, 0x1f, 0x00, false)
	MUX_CFG(TNETV107X, LCD_PD19_1,		25, 15, 0x1f, 0x04, false)
	MUX_CFG(TNETV107X, USB1_RXERR,		25, 15, 0x1f, 0x0c, false)
	MUX_CFG(TNETV107X, ETH_PLL_CLK,		25, 15, 0x1f, 0x1c, false)
	MUX_CFG(TNETV107X, MDIO,		26, 0, 0x1f, 0x00, false)
	MUX_CFG(TNETV107X, MDC,			26, 5, 0x1f, 0x00, false)
	MUX_CFG(TNETV107X, AIC_MUTE_STAT_N,	26, 10, 0x1f, 0x00, false)
	MUX_CFG(TNETV107X, TDM0_CLK,		26, 10, 0x1f, 0x04, false)
	MUX_CFG(TNETV107X, AIC_HNS_EN_N,	26, 15, 0x1f, 0x00, false)
	MUX_CFG(TNETV107X, TDM0_FS,		26, 15, 0x1f, 0x04, false)
	MUX_CFG(TNETV107X, AIC_HDS_EN_STAT_N,	26, 20, 0x1f, 0x00, false)
	MUX_CFG(TNETV107X, TDM0_TX,		26, 20, 0x1f, 0x04, false)
	MUX_CFG(TNETV107X, AIC_HNF_EN_STAT_N,	26, 25, 0x1f, 0x00, false)
	MUX_CFG(TNETV107X, TDM0_RX,		26, 25, 0x1f, 0x04, false)
#endif
};
