static const char *syms[] = {
		"rm_set_serial",
#ifdef HAVE_BGP
		"rm_get_BG",
		"rm_free_BG",
		"rm_new_ionode",
		"rm_free_ionode",
#else
		"rm_get_BGL",
		"rm_free_BGL",
#endif
		"rm_add_partition",
		"rm_get_partition",
		"rm_get_partition_info",
		"rm_modify_partition",
		"rm_set_part_owner",
		"rm_add_part_user",
		"rm_remove_part_user",
		"rm_remove_partition",
		"rm_get_partitions",
		"rm_get_partitions_info",
		"rm_get_job",
		"rm_get_jobs",
		"rm_get_nodecards",
		"rm_new_nodecard",
		"rm_free_nodecard",
		"rm_new_partition",
		"rm_free_partition",
		"rm_free_job",
		"rm_free_partition_list",
		"rm_free_job_list",
		"rm_free_nodecard_list",
		"rm_get_data",
		"rm_set_data",
		"jm_signal_job",
		"pm_create_partition",
		"pm_destroy_partition",
		"setSayMessageParams"
	};
