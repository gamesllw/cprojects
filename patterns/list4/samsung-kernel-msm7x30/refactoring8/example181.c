static struct iio_chan_spec iio_dummy_channels[] = {
	/* indexed ADC channel in_voltage0_raw etc */
	{
		.type = IIO_VOLTAGE,
		/* Channel has a numeric index of 0 */
		.indexed = 1,
		.channel = 0,
		/* What other information is available? */
		.info_mask =
		/*
		 * in_voltage0_offset
		 * Offset for userspace to apply prior to scale
		 * when converting to standard units (microvolts)
		 */
		IIO_CHAN_INFO_OFFSET_SEPARATE_BIT |
		/*
		 * in_voltage0_scale
		 * Multipler for userspace to apply post offset
		 * when converting to standard units (microvolts)
		 */
		IIO_CHAN_INFO_SCALE_SEPARATE_BIT,
		/* The ordering of elements in the buffer via an enum */
		.scan_index = voltage0,
		.scan_type = { /* Description of storage in buffer */
			.sign = 'u', /* unsigned */
			.realbits = 13, /* 13 bits */
			.storagebits = 16, /* 16 bits used for storage */
			.shift = 0, /* zero shift */
		},
#ifdef CONFIG_IIO_SIMPLE_DUMMY_EVENTS
		/*
		 * simple event - triggered when value rises above
		 * a threshold
		 */
		.event_mask = IIO_EV_BIT(IIO_EV_TYPE_THRESH,
					 IIO_EV_DIR_RISING),
#endif /* CONFIG_IIO_SIMPLE_DUMMY_EVENTS */
	},
	/* Differential ADC channel in_voltage1-voltage2_raw etc*/
	{
		.type = IIO_VOLTAGE,
		.differential = 1,
		/*
		 * Indexing for differential channels uses channel
		 * for the positive part, channel2 for the negative.
		 */
		.indexed = 1,
		.channel = 1,
		.channel2 = 2,
		.info_mask =
		/*
		 * in_voltage-voltage_scale
		 * Shared version of scale - shared by differential
		 * input channels of type IIO_VOLTAGE.
		 */
		IIO_CHAN_INFO_SCALE_SHARED_BIT,
		.scan_index = diffvoltage1m2,
		.scan_type = { /* Description of storage in buffer */
			.sign = 's', /* signed */
			.realbits = 12, /* 12 bits */
			.storagebits = 16, /* 16 bits used for storage */
			.shift = 0, /* zero shift */
		},
	},
	/* Differential ADC channel in_voltage3-voltage4_raw etc*/
	{
		.type = IIO_VOLTAGE,
		.differential = 1,
		.indexed = 1,
		.channel = 3,
		.channel2 = 4,
		.info_mask =
		IIO_CHAN_INFO_SCALE_SHARED_BIT,
		.scan_index = diffvoltage3m4,
		.scan_type = {
			.sign = 's',
			.realbits = 11,
			.storagebits = 16,
			.shift = 0,
		},
	},
	/*
	 * 'modified' (i.e. axis specified) acceleration channel
	 * in_accel_z_raw
	 */
	{
		.type = IIO_ACCEL,
		.modified = 1,
		/* Channel 2 is use for modifiers */
		.channel2 = IIO_MOD_X,
		.info_mask =
		/*
		 * Internal bias correction value. Applied
		 * by the hardware or driver prior to userspace
		 * seeing the readings. Typically part of hardware
		 * calibration.
		 */
		IIO_CHAN_INFO_CALIBBIAS_SEPARATE_BIT,
		.scan_index = accelx,
		.scan_type = { /* Description of storage in buffer */
			.sign = 's', /* signed */
			.realbits = 16, /* 12 bits */
			.storagebits = 16, /* 16 bits used for storage */
			.shift = 0, /* zero shift */
		},
	},
	/*
	 * Convenience macro for timestamps. 4 is the index in
	 * the buffer.
	 */
	IIO_CHAN_SOFT_TIMESTAMP(4),
	/* DAC channel out_voltage0_raw */
	{
		.type = IIO_VOLTAGE,
		.output = 1,
		.indexed = 1,
		.channel = 0,
	},
};
