static char *__env[] = {
#if defined(CONFIG_SMP)
 "PROMPT=[%d]kdb> ",
#else
 "PROMPT=kdb> ",
#endif
 "MOREPROMPT=more> ",
 "RADIX=16",
 "MDCOUNT=8",			/* lines of md output */
 KDB_PLATFORM_ENV,
 "DTABCOUNT=30",
 "NOSECT=1",
 (char *)0,
 (char *)0,
 (char *)0,
 (char *)0,
 (char *)0,
 (char *)0,
 (char *)0,
 (char *)0,
 (char *)0,
 (char *)0,
 (char *)0,
 (char *)0,
 (char *)0,
 (char *)0,
 (char *)0,
 (char *)0,
 (char *)0,
 (char *)0,
 (char *)0,
 (char *)0,
 (char *)0,
 (char *)0,
 (char *)0,
 (char *)0,
};
