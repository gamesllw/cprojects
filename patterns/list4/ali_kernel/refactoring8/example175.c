static struct insn opcode_b3[] = {
#ifdef CONFIG_64BIT
	{ "maylr", 0x38, INSTR_RRF_F0FF },
	{ "mylr", 0x39, INSTR_RRF_F0FF },
	{ "mayr", 0x3a, INSTR_RRF_F0FF },
	{ "myr", 0x3b, INSTR_RRF_F0FF },
	{ "mayhr", 0x3c, INSTR_RRF_F0FF },
	{ "myhr", 0x3d, INSTR_RRF_F0FF },
	{ "cegbr", 0xa4, INSTR_RRE_RR },
	{ "cdgbr", 0xa5, INSTR_RRE_RR },
	{ "cxgbr", 0xa6, INSTR_RRE_RR },
	{ "cgebr", 0xa8, INSTR_RRF_U0RF },
	{ "cgdbr", 0xa9, INSTR_RRF_U0RF },
	{ "cgxbr", 0xaa, INSTR_RRF_U0RF },
	{ "cfer", 0xb8, INSTR_RRF_U0RF },
	{ "cfdr", 0xb9, INSTR_RRF_U0RF },
	{ "cfxr", 0xba, INSTR_RRF_U0RF },
	{ "cegr", 0xc4, INSTR_RRE_RR },
	{ "cdgr", 0xc5, INSTR_RRE_RR },
	{ "cxgr", 0xc6, INSTR_RRE_RR },
	{ "cger", 0xc8, INSTR_RRF_U0RF },
	{ "cgdr", 0xc9, INSTR_RRF_U0RF },
	{ "cgxr", 0xca, INSTR_RRF_U0RF },
#endif
	{ "lpebr", 0x00, INSTR_RRE_FF },
	{ "lnebr", 0x01, INSTR_RRE_FF },
	{ "ltebr", 0x02, INSTR_RRE_FF },
	{ "lcebr", 0x03, INSTR_RRE_FF },
	{ "ldebr", 0x04, INSTR_RRE_FF },
	{ "lxdbr", 0x05, INSTR_RRE_FF },
	{ "lxebr", 0x06, INSTR_RRE_FF },
	{ "mxdbr", 0x07, INSTR_RRE_FF },
	{ "kebr", 0x08, INSTR_RRE_FF },
	{ "cebr", 0x09, INSTR_RRE_FF },
	{ "aebr", 0x0a, INSTR_RRE_FF },
	{ "sebr", 0x0b, INSTR_RRE_FF },
	{ "mdebr", 0x0c, INSTR_RRE_FF },
	{ "debr", 0x0d, INSTR_RRE_FF },
	{ "maebr", 0x0e, INSTR_RRF_F0FF },
	{ "msebr", 0x0f, INSTR_RRF_F0FF },
	{ "lpdbr", 0x10, INSTR_RRE_FF },
	{ "lndbr", 0x11, INSTR_RRE_FF },
	{ "ltdbr", 0x12, INSTR_RRE_FF },
	{ "lcdbr", 0x13, INSTR_RRE_FF },
	{ "sqebr", 0x14, INSTR_RRE_FF },
	{ "sqdbr", 0x15, INSTR_RRE_FF },
	{ "sqxbr", 0x16, INSTR_RRE_FF },
	{ "meebr", 0x17, INSTR_RRE_FF },
	{ "kdbr", 0x18, INSTR_RRE_FF },
	{ "cdbr", 0x19, INSTR_RRE_FF },
	{ "adbr", 0x1a, INSTR_RRE_FF },
	{ "sdbr", 0x1b, INSTR_RRE_FF },
	{ "mdbr", 0x1c, INSTR_RRE_FF },
	{ "ddbr", 0x1d, INSTR_RRE_FF },
	{ "madbr", 0x1e, INSTR_RRF_F0FF },
	{ "msdbr", 0x1f, INSTR_RRF_F0FF },
	{ "lder", 0x24, INSTR_RRE_FF },
	{ "lxdr", 0x25, INSTR_RRE_FF },
	{ "lxer", 0x26, INSTR_RRE_FF },
	{ "maer", 0x2e, INSTR_RRF_F0FF },
	{ "mser", 0x2f, INSTR_RRF_F0FF },
	{ "sqxr", 0x36, INSTR_RRE_FF },
	{ "meer", 0x37, INSTR_RRE_FF },
	{ "madr", 0x3e, INSTR_RRF_F0FF },
	{ "msdr", 0x3f, INSTR_RRF_F0FF },
	{ "lpxbr", 0x40, INSTR_RRE_FF },
	{ "lnxbr", 0x41, INSTR_RRE_FF },
	{ "ltxbr", 0x42, INSTR_RRE_FF },
	{ "lcxbr", 0x43, INSTR_RRE_FF },
	{ "ledbr", 0x44, INSTR_RRE_FF },
	{ "ldxbr", 0x45, INSTR_RRE_FF },
	{ "lexbr", 0x46, INSTR_RRE_FF },
	{ "fixbr", 0x47, INSTR_RRF_U0FF },
	{ "kxbr", 0x48, INSTR_RRE_FF },
	{ "cxbr", 0x49, INSTR_RRE_FF },
	{ "axbr", 0x4a, INSTR_RRE_FF },
	{ "sxbr", 0x4b, INSTR_RRE_FF },
	{ "mxbr", 0x4c, INSTR_RRE_FF },
	{ "dxbr", 0x4d, INSTR_RRE_FF },
	{ "tbedr", 0x50, INSTR_RRF_U0FF },
	{ "tbdr", 0x51, INSTR_RRF_U0FF },
	{ "diebr", 0x53, INSTR_RRF_FUFF },
	{ "fiebr", 0x57, INSTR_RRF_U0FF },
	{ "thder", 0x58, INSTR_RRE_RR },
	{ "thdr", 0x59, INSTR_RRE_RR },
	{ "didbr", 0x5b, INSTR_RRF_FUFF },
	{ "fidbr", 0x5f, INSTR_RRF_U0FF },
	{ "lpxr", 0x60, INSTR_RRE_FF },
	{ "lnxr", 0x61, INSTR_RRE_FF },
	{ "ltxr", 0x62, INSTR_RRE_FF },
	{ "lcxr", 0x63, INSTR_RRE_FF },
	{ "lxr", 0x65, INSTR_RRE_RR },
	{ "lexr", 0x66, INSTR_RRE_FF },
	{ "fixr", 0x67, INSTR_RRF_U0FF },
	{ "cxr", 0x69, INSTR_RRE_FF },
	{ "lzer", 0x74, INSTR_RRE_R0 },
	{ "lzdr", 0x75, INSTR_RRE_R0 },
	{ "lzxr", 0x76, INSTR_RRE_R0 },
	{ "fier", 0x77, INSTR_RRF_U0FF },
	{ "fidr", 0x7f, INSTR_RRF_U0FF },
	{ "sfpc", 0x84, INSTR_RRE_RR_OPT },
	{ "efpc", 0x8c, INSTR_RRE_RR_OPT },
	{ "cefbr", 0x94, INSTR_RRE_RF },
	{ "cdfbr", 0x95, INSTR_RRE_RF },
	{ "cxfbr", 0x96, INSTR_RRE_RF },
	{ "cfebr", 0x98, INSTR_RRF_U0RF },
	{ "cfdbr", 0x99, INSTR_RRF_U0RF },
	{ "cfxbr", 0x9a, INSTR_RRF_U0RF },
	{ "cefr", 0xb4, INSTR_RRE_RF },
	{ "cdfr", 0xb5, INSTR_RRE_RF },
	{ "cxfr", 0xb6, INSTR_RRE_RF },
	{ "", 0, INSTR_INVALID }
};
