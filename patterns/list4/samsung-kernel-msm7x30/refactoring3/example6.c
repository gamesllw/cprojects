switch (type) {
	case TRACE_REG_REGISTER:
		return reg_event_syscall_enter(event);
	case TRACE_REG_UNREGISTER:
		unreg_event_syscall_enter(event);
		return 0;

#ifdef CONFIG_PERF_EVENTS
	case TRACE_REG_PERF_REGISTER:
		return perf_sysenter_enable(event);
	case TRACE_REG_PERF_UNREGISTER:
		perf_sysenter_disable(event);
		return 0;
	case TRACE_REG_PERF_OPEN:
	case TRACE_REG_PERF_CLOSE:
	case TRACE_REG_PERF_ADD:
	case TRACE_REG_PERF_DEL:
		return 0;
#endif
	}
