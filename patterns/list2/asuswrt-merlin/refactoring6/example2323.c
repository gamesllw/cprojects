if (
#ifdef SUPPORT_TAGS
		    !is_lun_busy( tmp, tmp->cmnd[0] != REQUEST_SENSE)
#else
		    !(hostdata->busy[tmp->device->id] & (1 << tmp->device->lun))
#endif
		    ) {
		    /* ++guenther: just to be sure, this must be atomic */
		    local_irq_disable();
		    if (prev) {
		        REMOVE(prev, NEXT(prev), tmp, NEXT(tmp));
			NEXT(prev) = NEXT(tmp);
		    } else {
		        REMOVE(-1, hostdata->issue_queue, tmp, NEXT(tmp));
			hostdata->issue_queue = NEXT(tmp);
		    }
		    NEXT(tmp) = NULL;
		    
		    /* reenable interrupts after finding one */
		    local_irq_restore(flags);
		    
		    /* 
		     * Attempt to establish an I_T_L nexus here. 
		     * On success, instance->hostdata->connected is set.
		     * On failure, we must add the command back to the
		     *   issue queue so we can keep trying.	
		     */
		    MAIN_PRINTK("scsi%d: main(): command for target %d "
				"lun %d removed from issue_queue\n",
				HOSTNO, tmp->target, tmp->lun);
		    /* 
		     * REQUEST SENSE commands are issued without tagged
		     * queueing, even on SCSI-II devices because the 
		     * contingent allegiance condition exists for the 
		     * entire unit.
		     */
		    /* ++roman: ...and the standard also requires that
		     * REQUEST SENSE command are untagged.
		     */
		    
#ifdef SUPPORT_TAGS
		    cmd_get_tag( tmp, tmp->cmnd[0] != REQUEST_SENSE );
#endif
		    if (!NCR5380_select(instance, tmp, 
			    (tmp->cmnd[0] == REQUEST_SENSE) ? TAG_NONE : 
			    TAG_NEXT)) {
			break;
		    } else {
			local_irq_disable();
			LIST(tmp, hostdata->issue_queue);
			NEXT(tmp) = hostdata->issue_queue;
			hostdata->issue_queue = tmp;
#ifdef SUPPORT_TAGS
			cmd_free_tag( tmp );
#endif
			local_irq_restore(flags);
			MAIN_PRINTK("scsi%d: main(): select() failed, "
				    "returned to issue_queue\n", HOSTNO);
			if (hostdata->connected)
			    break;
		    }
		}