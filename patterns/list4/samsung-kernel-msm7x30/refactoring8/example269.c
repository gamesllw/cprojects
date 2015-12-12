struct dbg_reg_def_t dbg_reg_def[DBG_MAX_REG_NUM] =
{
#ifdef CONFIG_X86_32
	{ "ax", 4, offsetof(struct pt_regs, ax) },
	{ "cx", 4, offsetof(struct pt_regs, cx) },
	{ "dx", 4, offsetof(struct pt_regs, dx) },
	{ "bx", 4, offsetof(struct pt_regs, bx) },
	{ "sp", 4, offsetof(struct pt_regs, sp) },
	{ "bp", 4, offsetof(struct pt_regs, bp) },
	{ "si", 4, offsetof(struct pt_regs, si) },
	{ "di", 4, offsetof(struct pt_regs, di) },
	{ "ip", 4, offsetof(struct pt_regs, ip) },
	{ "flags", 4, offsetof(struct pt_regs, flags) },
	{ "cs", 4, offsetof(struct pt_regs, cs) },
	{ "ss", 4, offsetof(struct pt_regs, ss) },
	{ "ds", 4, offsetof(struct pt_regs, ds) },
	{ "es", 4, offsetof(struct pt_regs, es) },
#else
	{ "ax", 8, offsetof(struct pt_regs, ax) },
	{ "bx", 8, offsetof(struct pt_regs, bx) },
	{ "cx", 8, offsetof(struct pt_regs, cx) },
	{ "dx", 8, offsetof(struct pt_regs, dx) },
	{ "si", 8, offsetof(struct pt_regs, dx) },
	{ "di", 8, offsetof(struct pt_regs, di) },
	{ "bp", 8, offsetof(struct pt_regs, bp) },
	{ "sp", 8, offsetof(struct pt_regs, sp) },
	{ "r8", 8, offsetof(struct pt_regs, r8) },
	{ "r9", 8, offsetof(struct pt_regs, r9) },
	{ "r10", 8, offsetof(struct pt_regs, r10) },
	{ "r11", 8, offsetof(struct pt_regs, r11) },
	{ "r12", 8, offsetof(struct pt_regs, r12) },
	{ "r13", 8, offsetof(struct pt_regs, r13) },
	{ "r14", 8, offsetof(struct pt_regs, r14) },
	{ "r15", 8, offsetof(struct pt_regs, r15) },
	{ "ip", 8, offsetof(struct pt_regs, ip) },
	{ "flags", 4, offsetof(struct pt_regs, flags) },
	{ "cs", 4, offsetof(struct pt_regs, cs) },
	{ "ss", 4, offsetof(struct pt_regs, ss) },
	{ "ds", 4, -1 },
	{ "es", 4, -1 },
#endif
	{ "fs", 4, -1 },
	{ "gs", 4, -1 },
};
