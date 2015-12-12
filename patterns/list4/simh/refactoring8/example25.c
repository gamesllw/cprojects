MTAB dmc_mod[] = {
    { MTAB_XTD|MTAB_VDV|MTAB_VALR, 0, "LINES", "LINES=n",
        &dmc_setnumdevices, &dmc_shownumdevices, (void *) &dmc_dev, "Display number of devices" },
    { MTAB_XTD|MTAB_VUN,          0, "PEER", "PEER=address:port",
        &dmc_setpeer, &dmc_showpeer, NULL, "Display destination/source" },
    { MTAB_XTD|MTAB_VUN,          0, "SPEED", "SPEED=bits/sec (0=unrestricted)" ,
        &dmc_setspeed, &dmc_showspeed, NULL, "Display rate limit" },
    { MTAB_XTD|MTAB_VUN,          0, "MICRODIAG", "MICRODIAG={ENABLE,DISABLE}" ,
        &dmc_set_microdiag, &dmc_show_microdiag, NULL, "MicroDiagnostic Enable" },
#if !defined (VM_PDP10)
    { MTAB_XTD|MTAB_VUN|MTAB_VALR,0, "TYPE", "TYPE={DMR,DMC}" ,&dmc_settype, &dmc_showtype, NULL, "Set/Display device type"  },
#endif
    { MTAB_XTD|MTAB_VUN|MTAB_NMO, 0, "STATS", "STATS",
        &dmc_setstats, &dmc_showstats, NULL, "Display/Clear statistics" },
    { MTAB_XTD|MTAB_VUN|MTAB_NMO, 0, "QUEUES", "QUEUES",
        NULL, &dmc_showqueues, NULL, "Display Queue state" },
    { MTAB_XTD|MTAB_VUN|MTAB_NMO, 0, "DDCMP", "DDCMP",
        NULL, &dmc_showddcmp, NULL, "Display DDCMP state information" },
    { MTAB_XTD|MTAB_VDV,          0, "CONNECTPOLL", "CONNECTPOLL=seconds",
        &dmc_setconnectpoll, &dmc_showconnectpoll, (void *) &dmc_connect_poll, "Display connection poll interval" },
    { MTAB_XTD|MTAB_VUN|MTAB_VALR|MTAB_NMO, 0, "CORRUPT", "CORRUPTION=factor (0=uncorrupted)" ,
      &dmc_setcorrupt, &dmc_showcorrupt, NULL, "Display corruption factor (0.1% of packets)" },
    { MTAB_XTD|MTAB_VDV|MTAB_VALR,        020, "ADDRESS", "ADDRESS",
        &set_addr, &show_addr, NULL, "Bus address" },
    { MTAB_XTD|MTAB_VDV|MTAB_VALR,          1, "VECTOR", "VECTOR",
        &set_vec,  &show_vec,  NULL, "Interrupt vector" },
    { 0 } };
