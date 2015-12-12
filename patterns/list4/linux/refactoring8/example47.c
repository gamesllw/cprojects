const struct sample_reg sample_reg_masks[] = {
	SMPL_REG(AX, PERF_REG_X86_AX),
	SMPL_REG(BX, PERF_REG_X86_BX),
	SMPL_REG(CX, PERF_REG_X86_CX),
	SMPL_REG(DX, PERF_REG_X86_DX),
	SMPL_REG(SI, PERF_REG_X86_SI),
	SMPL_REG(DI, PERF_REG_X86_DI),
	SMPL_REG(BP, PERF_REG_X86_BP),
	SMPL_REG(SP, PERF_REG_X86_SP),
	SMPL_REG(IP, PERF_REG_X86_IP),
	SMPL_REG(FLAGS, PERF_REG_X86_FLAGS),
	SMPL_REG(CS, PERF_REG_X86_CS),
	SMPL_REG(SS, PERF_REG_X86_SS),
#ifdef HAVE_ARCH_X86_64_SUPPORT
	SMPL_REG(R8, PERF_REG_X86_R8),
	SMPL_REG(R9, PERF_REG_X86_R9),
	SMPL_REG(R10, PERF_REG_X86_R10),
	SMPL_REG(R11, PERF_REG_X86_R11),
	SMPL_REG(R12, PERF_REG_X86_R12),
	SMPL_REG(R13, PERF_REG_X86_R13),
	SMPL_REG(R14, PERF_REG_X86_R14),
	SMPL_REG(R15, PERF_REG_X86_R15),
#endif
	SMPL_REG_END
};
