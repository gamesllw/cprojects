#ifdef CONFIG_PXA27x
if (cpu_is_pxa27x())
		pxa_ac97_warm_pxa27x();
	else
#endif
#ifdef CONFIG_PXA3xx
	if (cpu_is_pxa3xx())
		pxa_ac97_warm_pxa3xx();
	else
#endif
		snd_BUG();
