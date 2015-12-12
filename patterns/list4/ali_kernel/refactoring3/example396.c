switch (action) {
	case CPU_ONLINE:
	case CPU_ONLINE_FROZEN:
		pr_devel("MMU: Allocating stale context map for CPU %d\n", cpu);
		stale_map[cpu] = kzalloc(CTX_MAP_SIZE, GFP_KERNEL);
		break;
#ifdef CONFIG_HOTPLUG_CPU
	case CPU_DEAD:
	case CPU_DEAD_FROZEN:
		pr_devel("MMU: Freeing stale context map for CPU %d\n", cpu);
		kfree(stale_map[cpu]);
		stale_map[cpu] = NULL;

		/* We also clear the cpu_vm_mask bits of CPUs going away */
		read_lock(&tasklist_lock);
		for_each_process(p) {
			if (p->mm)
				cpu_mask_clear_cpu(cpu, mm_cpumask(p->mm));
		}
		read_unlock(&tasklist_lock);
	break;
#endif /* CONFIG_HOTPLUG_CPU */
	}
