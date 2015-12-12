static struct mfd_cell ab8500_devs[] = {
#ifdef CONFIG_DEBUG_FS
	{
		.name = "ab8500-debug",
		.of_compatible = "stericsson,ab8500-debug",
		.num_resources = ARRAY_SIZE(ab8500_debug_resources),
		.resources = ab8500_debug_resources,
	},
#endif
	{
		.name = "ab8500-sysctrl",
		.of_compatible = "stericsson,ab8500-sysctrl",
	},
	{
		.name = "ab8500-regulator",
		.of_compatible = "stericsson,ab8500-regulator",
	},
	{
		.name = "abx500-clk",
		.of_compatible = "stericsson,abx500-clk",
	},
	{
		.name = "ab8500-gpadc",
		.of_compatible = "stericsson,ab8500-gpadc",
		.num_resources = ARRAY_SIZE(ab8500_gpadc_resources),
		.resources = ab8500_gpadc_resources,
	},
	{
		.name = "ab8500-rtc",
		.of_compatible = "stericsson,ab8500-rtc",
		.num_resources = ARRAY_SIZE(ab8500_rtc_resources),
		.resources = ab8500_rtc_resources,
	},
	{
		.name = "ab8500-acc-det",
		.of_compatible = "stericsson,ab8500-acc-det",
		.num_resources = ARRAY_SIZE(ab8500_av_acc_detect_resources),
		.resources = ab8500_av_acc_detect_resources,
	},
	{

		.name = "ab8500-poweron-key",
		.of_compatible = "stericsson,ab8500-poweron-key",
		.num_resources = ARRAY_SIZE(ab8500_poweronkey_db_resources),
		.resources = ab8500_poweronkey_db_resources,
	},
	{
		.name = "ab8500-pwm",
		.of_compatible = "stericsson,ab8500-pwm",
		.id = 1,
	},
	{
		.name = "ab8500-pwm",
		.of_compatible = "stericsson,ab8500-pwm",
		.id = 2,
	},
	{
		.name = "ab8500-pwm",
		.of_compatible = "stericsson,ab8500-pwm",
		.id = 3,
	},
	{
		.name = "ab8500-leds",
		.of_compatible = "stericsson,ab8500-leds",
	},
	{
		.name = "ab8500-denc",
		.of_compatible = "stericsson,ab8500-denc",
	},
	{
		.name = "pinctrl-ab8500",
		.of_compatible = "stericsson,ab8500-gpio",
	},
	{
		.name = "abx500-temp",
		.of_compatible = "stericsson,abx500-temp",
		.num_resources = ARRAY_SIZE(ab8500_temp_resources),
		.resources = ab8500_temp_resources,
	},
	{
		.name = "ab8500-usb",
		.of_compatible = "stericsson,ab8500-usb",
		.num_resources = ARRAY_SIZE(ab8500_usb_resources),
		.resources = ab8500_usb_resources,
	},
	{
		.name = "ab8500-codec",
	},
};
