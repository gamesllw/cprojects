TX_PWR_CFG TxPwrCfg[] = {
		{MODE_CCK, 0, 0, 4, 0x000000f0},
		{MODE_CCK, 1, 0, 0, 0x0000000f},
		{MODE_CCK, 2, 0, 12, 0x0000f000},
		{MODE_CCK, 3, 0, 8, 0x00000f00},

		{MODE_OFDM, 0, 0, 20, 0x00f00000},
		{MODE_OFDM, 1, 0, 16, 0x000f0000},
		{MODE_OFDM, 2, 0, 28, 0xf0000000},
		{MODE_OFDM, 3, 0, 24, 0x0f000000},
		{MODE_OFDM, 4, 1, 4, 0x000000f0},
		{MODE_OFDM, 5, 1, 0, 0x0000000f},
		{MODE_OFDM, 6, 1, 12, 0x0000f000},
		{MODE_OFDM, 7, 1, 8, 0x00000f00}
#ifdef DOT11_N_SUPPORT
		,{MODE_HTMIX, 0, 1, 20, 0x00f00000},
		{MODE_HTMIX, 1, 1, 16, 0x000f0000},
		{MODE_HTMIX, 2, 1, 28, 0xf0000000},
		{MODE_HTMIX, 3, 1, 24, 0x0f000000},
		{MODE_HTMIX, 4, 2, 4, 0x000000f0},
		{MODE_HTMIX, 5, 2, 0, 0x0000000f},
		{MODE_HTMIX, 6, 2, 12, 0x0000f000},
		{MODE_HTMIX, 7, 2, 8, 0x00000f00},
		{MODE_HTMIX, 8, 2, 20, 0x00f00000},
		{MODE_HTMIX, 9, 2, 16, 0x000f0000},
		{MODE_HTMIX, 10, 2, 28, 0xf0000000},
		{MODE_HTMIX, 11, 2, 24, 0x0f000000},
		{MODE_HTMIX, 12, 3, 4, 0x000000f0},
		{MODE_HTMIX, 13, 3, 0, 0x0000000f},
		{MODE_HTMIX, 14, 3, 12, 0x0000f000},
		{MODE_HTMIX, 15, 3, 8, 0x00000f00}
#endif // DOT11_N_SUPPORT //
	};
