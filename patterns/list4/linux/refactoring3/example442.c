switch (exit_nr) {
	case BOOKE_INTERRUPT_MACHINE_CHECK:
		printk("MACHINE CHECK: %lx\n", mfspr(SPRN_MCSR));
		kvmppc_dump_vcpu(vcpu);
		/* For debugging, send invalid exit reason to user space */
		run->hw.hardware_exit_reason = ~1ULL << 32;
		run->hw.hardware_exit_reason |= mfspr(SPRN_MCSR);
		r = RESUME_HOST;
		break;

	case BOOKE_INTERRUPT_EXTERNAL:
		kvmppc_account_exit(vcpu, EXT_INTR_EXITS);
		r = RESUME_GUEST;
		break;

	case BOOKE_INTERRUPT_DECREMENTER:
		kvmppc_account_exit(vcpu, DEC_EXITS);
		r = RESUME_GUEST;
		break;

	case BOOKE_INTERRUPT_WATCHDOG:
		r = RESUME_GUEST;
		break;

	case BOOKE_INTERRUPT_DOORBELL:
		kvmppc_account_exit(vcpu, DBELL_EXITS);
		r = RESUME_GUEST;
		break;

	case BOOKE_INTERRUPT_GUEST_DBELL_CRIT:
		kvmppc_account_exit(vcpu, GDBELL_EXITS);

		/*
		 * We are here because there is a pending guest interrupt
		 * which could not be delivered as MSR_CE or MSR_ME was not
		 * set.  Once we break from here we will retry delivery.
		 */
		r = RESUME_GUEST;
		break;

	case BOOKE_INTERRUPT_GUEST_DBELL:
		kvmppc_account_exit(vcpu, GDBELL_EXITS);

		/*
		 * We are here because there is a pending guest interrupt
		 * which could not be delivered as MSR_EE was not set.  Once
		 * we break from here we will retry delivery.
		 */
		r = RESUME_GUEST;
		break;

	case BOOKE_INTERRUPT_PERFORMANCE_MONITOR:
		r = RESUME_GUEST;
		break;

	case BOOKE_INTERRUPT_HV_PRIV:
		r = emulation_exit(run, vcpu);
		break;

	case BOOKE_INTERRUPT_PROGRAM:
		if ((vcpu->guest_debug & KVM_GUESTDBG_USE_SW_BP) &&
			(last_inst == KVMPPC_INST_SW_BREAKPOINT)) {
			/*
			 * We are here because of an SW breakpoint instr,
			 * so lets return to host to handle.
			 */
			r = kvmppc_handle_debug(run, vcpu);
			run->exit_reason = KVM_EXIT_DEBUG;
			kvmppc_account_exit(vcpu, DEBUG_EXITS);
			break;
		}

		if (vcpu->arch.shared->msr & (MSR_PR | MSR_GS)) {
			/*
			 * Program traps generated by user-level software must
			 * be handled by the guest kernel.
			 *
			 * In GS mode, hypervisor privileged instructions trap
			 * on BOOKE_INTERRUPT_HV_PRIV, not here, so these are
			 * actual program interrupts, handled by the guest.
			 */
			kvmppc_core_queue_program(vcpu, vcpu->arch.fault_esr);
			r = RESUME_GUEST;
			kvmppc_account_exit(vcpu, USR_PR_INST);
			break;
		}

		r = emulation_exit(run, vcpu);
		break;

	case BOOKE_INTERRUPT_FP_UNAVAIL:
		kvmppc_booke_queue_irqprio(vcpu, BOOKE_IRQPRIO_FP_UNAVAIL);
		kvmppc_account_exit(vcpu, FP_UNAVAIL);
		r = RESUME_GUEST;
		break;

#ifdef CONFIG_SPE
	case BOOKE_INTERRUPT_SPE_UNAVAIL: {
		if (vcpu->arch.shared->msr & MSR_SPE)
			kvmppc_vcpu_enable_spe(vcpu);
		else
			kvmppc_booke_queue_irqprio(vcpu,
						   BOOKE_IRQPRIO_SPE_UNAVAIL);
		r = RESUME_GUEST;
		break;
	}

	case BOOKE_INTERRUPT_SPE_FP_DATA:
		kvmppc_booke_queue_irqprio(vcpu, BOOKE_IRQPRIO_SPE_FP_DATA);
		r = RESUME_GUEST;
		break;

	case BOOKE_INTERRUPT_SPE_FP_ROUND:
		kvmppc_booke_queue_irqprio(vcpu, BOOKE_IRQPRIO_SPE_FP_ROUND);
		r = RESUME_GUEST;
		break;
#elif defined(CONFIG_SPE_POSSIBLE)
	case BOOKE_INTERRUPT_SPE_UNAVAIL:
		/*
		 * Guest wants SPE, but host kernel doesn't support it.  Send
		 * an "unimplemented operation" program check to the guest.
		 */
		kvmppc_core_queue_program(vcpu, ESR_PUO | ESR_SPV);
		r = RESUME_GUEST;
		break;

	/*
	 * These really should never happen without CONFIG_SPE,
	 * as we should never enable the real MSR[SPE] in the guest.
	 */
	case BOOKE_INTERRUPT_SPE_FP_DATA:
	case BOOKE_INTERRUPT_SPE_FP_ROUND:
		printk(KERN_CRIT "%s: unexpected SPE interrupt %u at %08lx\n",
		       __func__, exit_nr, vcpu->arch.pc);
		run->hw.hardware_exit_reason = exit_nr;
		r = RESUME_HOST;
		break;
#endif /* CONFIG_SPE_POSSIBLE */

/*
 * On cores with Vector category, KVM is loaded only if CONFIG_ALTIVEC,
 * see kvmppc_core_check_processor_compat().
 */
#ifdef CONFIG_ALTIVEC
	case BOOKE_INTERRUPT_ALTIVEC_UNAVAIL:
		kvmppc_booke_queue_irqprio(vcpu, BOOKE_IRQPRIO_ALTIVEC_UNAVAIL);
		r = RESUME_GUEST;
		break;

	case BOOKE_INTERRUPT_ALTIVEC_ASSIST:
		kvmppc_booke_queue_irqprio(vcpu, BOOKE_IRQPRIO_ALTIVEC_ASSIST);
		r = RESUME_GUEST;
		break;
#endif

	case BOOKE_INTERRUPT_DATA_STORAGE:
		kvmppc_core_queue_data_storage(vcpu, vcpu->arch.fault_dear,
		                               vcpu->arch.fault_esr);
		kvmppc_account_exit(vcpu, DSI_EXITS);
		r = RESUME_GUEST;
		break;

	case BOOKE_INTERRUPT_INST_STORAGE:
		kvmppc_core_queue_inst_storage(vcpu, vcpu->arch.fault_esr);
		kvmppc_account_exit(vcpu, ISI_EXITS);
		r = RESUME_GUEST;
		break;

	case BOOKE_INTERRUPT_ALIGNMENT:
		kvmppc_core_queue_alignment(vcpu, vcpu->arch.fault_dear,
		                            vcpu->arch.fault_esr);
		r = RESUME_GUEST;
		break;

#ifdef CONFIG_KVM_BOOKE_HV
	case BOOKE_INTERRUPT_HV_SYSCALL:
		if (!(vcpu->arch.shared->msr & MSR_PR)) {
			kvmppc_set_gpr(vcpu, 3, kvmppc_kvm_pv(vcpu));
		} else {
			/*
			 * hcall from guest userspace -- send privileged
			 * instruction program check.
			 */
			kvmppc_core_queue_program(vcpu, ESR_PPR);
		}

		r = RESUME_GUEST;
		break;
#else
	case BOOKE_INTERRUPT_SYSCALL:
		if (!(vcpu->arch.shared->msr & MSR_PR) &&
		    (((u32)kvmppc_get_gpr(vcpu, 0)) == KVM_SC_MAGIC_R0)) {
			/* KVM PV hypercalls */
			kvmppc_set_gpr(vcpu, 3, kvmppc_kvm_pv(vcpu));
			r = RESUME_GUEST;
		} else {
			/* Guest syscalls */
			kvmppc_booke_queue_irqprio(vcpu, BOOKE_IRQPRIO_SYSCALL);
		}
		kvmppc_account_exit(vcpu, SYSCALL_EXITS);
		r = RESUME_GUEST;
		break;
#endif

	case BOOKE_INTERRUPT_DTLB_MISS: {
		unsigned long eaddr = vcpu->arch.fault_dear;
		int gtlb_index;
		gpa_t gpaddr;
		gfn_t gfn;

#ifdef CONFIG_KVM_E500V2
		if (!(vcpu->arch.shared->msr & MSR_PR) &&
		    (eaddr & PAGE_MASK) == vcpu->arch.magic_page_ea) {
			kvmppc_map_magic(vcpu);
			kvmppc_account_exit(vcpu, DTLB_VIRT_MISS_EXITS);
			r = RESUME_GUEST;

			break;
		}
#endif

		/* Check the guest TLB. */
		gtlb_index = kvmppc_mmu_dtlb_index(vcpu, eaddr);
		if (gtlb_index < 0) {
			/* The guest didn't have a mapping for it. */
			kvmppc_core_queue_dtlb_miss(vcpu,
			                            vcpu->arch.fault_dear,
			                            vcpu->arch.fault_esr);
			kvmppc_mmu_dtlb_miss(vcpu);
			kvmppc_account_exit(vcpu, DTLB_REAL_MISS_EXITS);
			r = RESUME_GUEST;
			break;
		}

		idx = srcu_read_lock(&vcpu->kvm->srcu);

		gpaddr = kvmppc_mmu_xlate(vcpu, gtlb_index, eaddr);
		gfn = gpaddr >> PAGE_SHIFT;

		if (kvm_is_visible_gfn(vcpu->kvm, gfn)) {
			/* The guest TLB had a mapping, but the shadow TLB
			 * didn't, and it is RAM. This could be because:
			 * a) the entry is mapping the host kernel, or
			 * b) the guest used a large mapping which we're faking
			 * Either way, we need to satisfy the fault without
			 * invoking the guest. */
			kvmppc_mmu_map(vcpu, eaddr, gpaddr, gtlb_index);
			kvmppc_account_exit(vcpu, DTLB_VIRT_MISS_EXITS);
			r = RESUME_GUEST;
		} else {
			/* Guest has mapped and accessed a page which is not
			 * actually RAM. */
			vcpu->arch.paddr_accessed = gpaddr;
			vcpu->arch.vaddr_accessed = eaddr;
			r = kvmppc_emulate_mmio(run, vcpu);
			kvmppc_account_exit(vcpu, MMIO_EXITS);
		}

		srcu_read_unlock(&vcpu->kvm->srcu, idx);
		break;
	}

	case BOOKE_INTERRUPT_ITLB_MISS: {
		unsigned long eaddr = vcpu->arch.pc;
		gpa_t gpaddr;
		gfn_t gfn;
		int gtlb_index;

		r = RESUME_GUEST;

		/* Check the guest TLB. */
		gtlb_index = kvmppc_mmu_itlb_index(vcpu, eaddr);
		if (gtlb_index < 0) {
			/* The guest didn't have a mapping for it. */
			kvmppc_booke_queue_irqprio(vcpu, BOOKE_IRQPRIO_ITLB_MISS);
			kvmppc_mmu_itlb_miss(vcpu);
			kvmppc_account_exit(vcpu, ITLB_REAL_MISS_EXITS);
			break;
		}

		kvmppc_account_exit(vcpu, ITLB_VIRT_MISS_EXITS);

		idx = srcu_read_lock(&vcpu->kvm->srcu);

		gpaddr = kvmppc_mmu_xlate(vcpu, gtlb_index, eaddr);
		gfn = gpaddr >> PAGE_SHIFT;

		if (kvm_is_visible_gfn(vcpu->kvm, gfn)) {
			/* The guest TLB had a mapping, but the shadow TLB
			 * didn't. This could be because:
			 * a) the entry is mapping the host kernel, or
			 * b) the guest used a large mapping which we're faking
			 * Either way, we need to satisfy the fault without
			 * invoking the guest. */
			kvmppc_mmu_map(vcpu, eaddr, gpaddr, gtlb_index);
		} else {
			/* Guest mapped and leaped at non-RAM! */
			kvmppc_booke_queue_irqprio(vcpu, BOOKE_IRQPRIO_MACHINE_CHECK);
		}

		srcu_read_unlock(&vcpu->kvm->srcu, idx);
		break;
	}

	case BOOKE_INTERRUPT_DEBUG: {
		r = kvmppc_handle_debug(run, vcpu);
		if (r == RESUME_HOST)
			run->exit_reason = KVM_EXIT_DEBUG;
		kvmppc_account_exit(vcpu, DEBUG_EXITS);
		break;
	}

	default:
		printk(KERN_EMERG "exit_nr %d\n", exit_nr);
		BUG();
	}
