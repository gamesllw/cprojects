struct sym event_syms[] = {
#if defined(CONFIG_MSM_N_WAY_SMSM)
	{ DEM_SMSM_ISR, "SMSM_ISR" },
	{ DEM_STATE_CHANGE, "STATE_CHANGE" },
	{ DEM_STATE_MACHINE_ENTER, "STATE_MACHINE_ENTER" },
	{ DEM_ENTER_SLEEP, "ENTER_SLEEP" },
	{ DEM_END_SLEEP, "END_SLEEP" },
	{ DEM_SETUP_SLEEP, "SETUP_SLEEP" },
	{ DEM_SETUP_POWER_COLLAPSE, "SETUP_POWER_COLLAPSE" },
	{ DEM_SETUP_SUSPEND, "SETUP_SUSPEND" },
	{ DEM_EARLY_EXIT, "EARLY_EXIT" },
	{ DEM_WAKEUP_REASON, "WAKEUP_REASON" },
	{ DEM_DETECT_WAKEUP, "DETECT_WAKEUP" },
	{ DEM_DETECT_RESET, "DETECT_RESET" },
	{ DEM_DETECT_SLEEPEXIT, "DETECT_SLEEPEXIT" },
	{ DEM_DETECT_RUN, "DETECT_RUN" },
	{ DEM_APPS_SWFI, "APPS_SWFI" },
	{ DEM_SEND_WAKEUP, "SEND_WAKEUP" },
	{ DEM_ASSERT_OKTS, "ASSERT_OKTS" },
	{ DEM_NEGATE_OKTS, "NEGATE_OKTS" },
	{ DEM_PROC_COMM_CMD, "PROC_COMM_CMD" },
	{ DEM_REMOVE_PROC_PWR, "REMOVE_PROC_PWR" },
	{ DEM_RESTORE_PROC_PWR, "RESTORE_PROC_PWR" },
	{ DEM_SMI_CLK_DISABLED, "SMI_CLK_DISABLED" },
	{ DEM_SMI_CLK_ENABLED, "SMI_CLK_ENABLED" },
	{ DEM_MAO_INTS, "MAO_INTS" },
	{ DEM_APPS_WAKEUP_INT, "APPS_WAKEUP_INT" },
	{ DEM_PROC_WAKEUP, "PROC_WAKEUP" },
	{ DEM_PROC_POWERUP, "PROC_POWERUP" },
	{ DEM_TIMER_EXPIRED, "TIMER_EXPIRED" },
	{ DEM_SEND_BATTERY_INFO, "SEND_BATTERY_INFO" },
	{ DEM_REMOTE_PWR_CB, "REMOTE_PWR_CB" },
	{ DEM_TIME_SYNC_START, "TIME_SYNC_START" },
	{ DEM_TIME_SYNC_SEND_VALUE, "TIME_SYNC_SEND_VALUE" },
	{ DEM_TIME_SYNC_DONE, "TIME_SYNC_DONE" },
	{ DEM_TIME_SYNC_REQUEST, "TIME_SYNC_REQUEST" },
	{ DEM_TIME_SYNC_POLL, "TIME_SYNC_POLL" },
	{ DEM_TIME_SYNC_INIT, "TIME_SYNC_INIT" },
	{ DEM_INIT, "INIT" },
#else

	{ DEM_NO_SLEEP, "NO_SLEEP" },
	{ DEM_INSUF_TIME, "INSUF_TIME" },
	{ DEMAPPS_ENTER_SLEEP, "APPS_ENTER_SLEEP" },
	{ DEMAPPS_DETECT_WAKEUP, "APPS_DETECT_WAKEUP" },
	{ DEMAPPS_END_APPS_TCXO, "APPS_END_APPS_TCXO" },
	{ DEMAPPS_ENTER_SLEEPEXIT, "APPS_ENTER_SLEEPEXIT" },
	{ DEMAPPS_END_APPS_SLEEP, "APPS_END_APPS_SLEEP" },
	{ DEMAPPS_SETUP_APPS_PWRCLPS, "APPS_SETUP_APPS_PWRCLPS" },
	{ DEMAPPS_PWRCLPS_EARLY_EXIT, "APPS_PWRCLPS_EARLY_EXIT" },
	{ DEMMOD_SEND_WAKEUP, "MOD_SEND_WAKEUP" },
	{ DEMMOD_NO_APPS_VOTE, "MOD_NO_APPS_VOTE" },
	{ DEMMOD_NO_TCXO_SLEEP, "MOD_NO_TCXO_SLEEP" },
	{ DEMMOD_BT_CLOCK, "MOD_BT_CLOCK" },
	{ DEMMOD_UART_CLOCK, "MOD_UART_CLOCK" },
	{ DEMMOD_OKTS, "MOD_OKTS" },
	{ DEM_SLEEP_INFO, "SLEEP_INFO" },
	{ DEMMOD_TCXO_END, "MOD_TCXO_END" },
	{ DEMMOD_END_SLEEP_SIG, "MOD_END_SLEEP_SIG" },
	{ DEMMOD_SETUP_APPSSLEEP, "MOD_SETUP_APPSSLEEP" },
	{ DEMMOD_ENTER_TCXO, "MOD_ENTER_TCXO" },
	{ DEMMOD_WAKE_APPS, "MOD_WAKE_APPS" },
	{ DEMMOD_POWER_COLLAPSE_APPS, "MOD_POWER_COLLAPSE_APPS" },
	{ DEMMOD_RESTORE_APPS_PWR, "MOD_RESTORE_APPS_PWR" },
	{ DEMAPPS_ASSERT_OKTS, "APPS_ASSERT_OKTS" },
	{ DEMAPPS_RESTART_START_TIMER, "APPS_RESTART_START_TIMER" },
	{ DEMAPPS_ENTER_RUN, "APPS_ENTER_RUN" },
	{ DEMMOD_MAO_INTS, "MOD_MAO_INTS" },
	{ DEMMOD_POWERUP_APPS_CALLED, "MOD_POWERUP_APPS_CALLED" },
	{ DEMMOD_PC_TIMER_EXPIRED, "MOD_PC_TIMER_EXPIRED" },
	{ DEM_DETECT_SLEEPEXIT, "_DETECT_SLEEPEXIT" },
	{ DEM_DETECT_RUN, "DETECT_RUN" },
	{ DEM_SET_APPS_TIMER, "SET_APPS_TIMER" },
	{ DEM_NEGATE_OKTS, "NEGATE_OKTS" },
	{ DEMMOD_APPS_WAKEUP_INT, "MOD_APPS_WAKEUP_INT" },
	{ DEMMOD_APPS_SWFI, "MOD_APPS_SWFI" },
	{ DEM_SEND_BATTERY_INFO, "SEND_BATTERY_INFO" },
	{ DEM_SMI_CLK_DISABLED, "SMI_CLK_DISABLED" },
	{ DEM_SMI_CLK_ENABLED, "SMI_CLK_ENABLED" },
	{ DEMAPPS_SETUP_APPS_SUSPEND, "APPS_SETUP_APPS_SUSPEND" },
	{ DEM_RPC_EARLY_EXIT, "RPC_EARLY_EXIT" },
	{ DEMAPPS_WAKEUP_REASON, "APPS_WAKEUP_REASON" },
	{ DEM_INIT, "INIT" },
#endif
	{ DEMMOD_UMTS_BASE, "MOD_UMTS_BASE" },
	{ DEMMOD_GL1_GO_TO_SLEEP, "GL1_GO_TO_SLEEP" },
	{ DEMMOD_GL1_SLEEP_START, "GL1_SLEEP_START" },
	{ DEMMOD_GL1_AFTER_GSM_CLK_ON, "GL1_AFTER_GSM_CLK_ON" },
	{ DEMMOD_GL1_BEFORE_RF_ON, "GL1_BEFORE_RF_ON" },
	{ DEMMOD_GL1_AFTER_RF_ON, "GL1_AFTER_RF_ON" },
	{ DEMMOD_GL1_FRAME_TICK, "GL1_FRAME_TICK" },
	{ DEMMOD_GL1_WCDMA_START, "GL1_WCDMA_START" },
	{ DEMMOD_GL1_WCDMA_ENDING, "GL1_WCDMA_ENDING" },
	{ DEMMOD_UMTS_NOT_OKTS, "UMTS_NOT_OKTS" },
	{ DEMMOD_UMTS_START_TCXO_SHUTDOWN, "UMTS_START_TCXO_SHUTDOWN" },
	{ DEMMOD_UMTS_END_TCXO_SHUTDOWN, "UMTS_END_TCXO_SHUTDOWN" },
	{ DEMMOD_UMTS_START_ARM_HALT, "UMTS_START_ARM_HALT" },
	{ DEMMOD_UMTS_END_ARM_HALT, "UMTS_END_ARM_HALT" },
	{ DEMMOD_UMTS_NEXT_WAKEUP_SCLK, "UMTS_NEXT_WAKEUP_SCLK" },
	{ TIME_REMOTE_LOG_EVENT_START, "START" },
	{ TIME_REMOTE_LOG_EVENT_GOTO_WAIT,
	  "GOTO_WAIT" },
	{ TIME_REMOTE_LOG_EVENT_GOTO_INIT,
	  "GOTO_INIT" },
	{ ERR_ERROR_FATAL, "ERR_ERROR_FATAL" },
	{ ERR_ERROR_FATAL_TASK, "ERR_ERROR_FATAL_TASK" },
	{ DCVSAPPS_LOG_IDLE, "DCVSAPPS_LOG_IDLE" },
	{ DCVSAPPS_LOG_ERR, "DCVSAPPS_LOG_ERR" },
	{ DCVSAPPS_LOG_CHG, "DCVSAPPS_LOG_CHG" },
	{ DCVSAPPS_LOG_REG, "DCVSAPPS_LOG_REG" },
	{ DCVSAPPS_LOG_DEREG, "DCVSAPPS_LOG_DEREG" },
	{ SMEM_LOG_EVENT_CB, "CB" },
	{ SMEM_LOG_EVENT_START, "START" },
	{ SMEM_LOG_EVENT_INIT, "INIT" },
	{ SMEM_LOG_EVENT_RUNNING, "RUNNING" },
	{ SMEM_LOG_EVENT_STOP, "STOP" },
	{ SMEM_LOG_EVENT_RESTART, "RESTART" },
	{ SMEM_LOG_EVENT_SS, "SS" },
	{ SMEM_LOG_EVENT_READ, "READ" },
	{ SMEM_LOG_EVENT_WRITE, "WRITE" },
	{ SMEM_LOG_EVENT_SIGS1, "SIGS1" },
	{ SMEM_LOG_EVENT_SIGS2, "SIGS2" },
	{ SMEM_LOG_EVENT_WRITE_DM, "WRITE_DM" },
	{ SMEM_LOG_EVENT_READ_DM, "READ_DM" },
	{ SMEM_LOG_EVENT_SKIP_DM, "SKIP_DM" },
	{ SMEM_LOG_EVENT_STOP_DM, "STOP_DM" },
	{ SMEM_LOG_EVENT_ISR, "ISR" },
	{ SMEM_LOG_EVENT_TASK, "TASK" },
	{ SMEM_LOG_EVENT_RS, "RS" },
	{ ONCRPC_LOG_EVENT_SMD_WAIT, "SMD_WAIT" },
	{ ONCRPC_LOG_EVENT_RPC_WAIT, "RPC_WAIT" },
	{ ONCRPC_LOG_EVENT_RPC_BOTH_WAIT, "RPC_BOTH_WAIT" },
	{ ONCRPC_LOG_EVENT_RPC_INIT, "RPC_INIT" },
	{ ONCRPC_LOG_EVENT_RUNNING, "RUNNING" },
	{ ONCRPC_LOG_EVENT_APIS_INITED, "APIS_INITED" },
	{ ONCRPC_LOG_EVENT_AMSS_RESET, "AMSS_RESET" },
	{ ONCRPC_LOG_EVENT_SMD_RESET, "SMD_RESET" },
	{ ONCRPC_LOG_EVENT_ONCRPC_RESET, "ONCRPC_RESET" },
	{ ONCRPC_LOG_EVENT_CB, "CB" },
	{ ONCRPC_LOG_EVENT_STD_CALL, "STD_CALL" },
	{ ONCRPC_LOG_EVENT_STD_REPLY, "STD_REPLY" },
	{ ONCRPC_LOG_EVENT_STD_CALL_ASYNC, "STD_CALL_ASYNC" },
	{ NO_SLEEP_OLD, "NO_SLEEP_OLD" },
	{ INSUF_TIME, "INSUF_TIME" },
	{ MOD_UART_CLOCK, "MOD_UART_CLOCK" },
	{ SLEEP_INFO, "SLEEP_INFO" },
	{ MOD_TCXO_END, "MOD_TCXO_END" },
	{ MOD_ENTER_TCXO, "MOD_ENTER_TCXO" },
	{ NO_SLEEP_NEW, "NO_SLEEP_NEW" },
	{ RPC_ROUTER_LOG_EVENT_UNKNOWN, "UNKNOWN" },
	{ RPC_ROUTER_LOG_EVENT_MSG_READ, "MSG_READ" },
	{ RPC_ROUTER_LOG_EVENT_MSG_WRITTEN, "MSG_WRITTEN" },
	{ RPC_ROUTER_LOG_EVENT_MSG_CFM_REQ, "MSG_CFM_REQ" },
	{ RPC_ROUTER_LOG_EVENT_MSG_CFM_SNT, "MSG_CFM_SNT" },
	{ RPC_ROUTER_LOG_EVENT_MID_READ, "MID_READ" },
	{ RPC_ROUTER_LOG_EVENT_MID_WRITTEN, "MID_WRITTEN" },
	{ RPC_ROUTER_LOG_EVENT_MID_CFM_REQ, "MID_CFM_REQ" },
};
