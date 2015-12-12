static struct device_attribute pa6t_attrs[] = {
	__ATTR(mmcr0, 0600, show_mmcr0, store_mmcr0),
	__ATTR(mmcr1, 0600, show_mmcr1, store_mmcr1),
	__ATTR(pmc0, 0600, show_pa6t_pmc0, store_pa6t_pmc0),
	__ATTR(pmc1, 0600, show_pa6t_pmc1, store_pa6t_pmc1),
	__ATTR(pmc2, 0600, show_pa6t_pmc2, store_pa6t_pmc2),
	__ATTR(pmc3, 0600, show_pa6t_pmc3, store_pa6t_pmc3),
	__ATTR(pmc4, 0600, show_pa6t_pmc4, store_pa6t_pmc4),
	__ATTR(pmc5, 0600, show_pa6t_pmc5, store_pa6t_pmc5),
#ifdef CONFIG_DEBUG_KERNEL
	__ATTR(hid0, 0600, show_hid0, store_hid0),
	__ATTR(hid1, 0600, show_hid1, store_hid1),
	__ATTR(hid4, 0600, show_hid4, store_hid4),
	__ATTR(hid5, 0600, show_hid5, store_hid5),
	__ATTR(ima0, 0600, show_ima0, store_ima0),
	__ATTR(ima1, 0600, show_ima1, store_ima1),
	__ATTR(ima2, 0600, show_ima2, store_ima2),
	__ATTR(ima3, 0600, show_ima3, store_ima3),
	__ATTR(ima4, 0600, show_ima4, store_ima4),
	__ATTR(ima5, 0600, show_ima5, store_ima5),
	__ATTR(ima6, 0600, show_ima6, store_ima6),
	__ATTR(ima7, 0600, show_ima7, store_ima7),
	__ATTR(ima8, 0600, show_ima8, store_ima8),
	__ATTR(ima9, 0600, show_ima9, store_ima9),
	__ATTR(imaat, 0600, show_imaat, store_imaat),
	__ATTR(btcr, 0600, show_btcr, store_btcr),
	__ATTR(pccr, 0600, show_pccr, store_pccr),
	__ATTR(rpccr, 0600, show_rpccr, store_rpccr),
	__ATTR(der, 0600, show_der, store_der),
	__ATTR(mer, 0600, show_mer, store_mer),
	__ATTR(ber, 0600, show_ber, store_ber),
	__ATTR(ier, 0600, show_ier, store_ier),
	__ATTR(sier, 0600, show_sier, store_sier),
	__ATTR(siar, 0600, show_siar, store_siar),
	__ATTR(tsr0, 0600, show_tsr0, store_tsr0),
	__ATTR(tsr1, 0600, show_tsr1, store_tsr1),
	__ATTR(tsr2, 0600, show_tsr2, store_tsr2),
	__ATTR(tsr3, 0600, show_tsr3, store_tsr3),
#endif /* CONFIG_DEBUG_KERNEL */
};
