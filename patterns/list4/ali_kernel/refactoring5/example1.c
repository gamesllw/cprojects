#ifdef CONFIG_FAIR_GROUP_SCHED
if (tsk->sched_class->moved_group)
		tsk->sched_class->moved_group(tsk, on_rq);
	else
#endif
		set_task_rq(tsk, task_cpu(tsk));
