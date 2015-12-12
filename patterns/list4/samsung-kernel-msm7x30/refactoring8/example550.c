static struct mcf_gpio_chip mcf_gpio_chips[] = {
#if defined(CONFIG_M5271)
	{
		.gpio_chip			= {
			.label			= "PIRQ",
			.request		= mcf_gpio_request,
			.free			= mcf_gpio_free,
			.direction_input	= mcf_gpio_direction_input,
			.direction_output	= mcf_gpio_direction_output,
			.get			= mcf_gpio_get_value,
			.set			= mcf_gpio_set_value,
			.base			= 1,
			.ngpio			= 7,
		},
		.pddr				= (void __iomem *) MCFEPORT_EPDDR,
		.podr				= (void __iomem *) MCFEPORT_EPDR,
		.ppdr				= (void __iomem *) MCFEPORT_EPPDR,
	},
	{
		.gpio_chip			= {
			.label			= "ADDR",
			.request		= mcf_gpio_request,
			.free			= mcf_gpio_free,
			.direction_input	= mcf_gpio_direction_input,
			.direction_output	= mcf_gpio_direction_output,
			.get			= mcf_gpio_get_value,
			.set			= mcf_gpio_set_value_fast,
			.base			= 13,
			.ngpio			= 3,
		},
		.pddr				= (void __iomem *) MCFGPIO_PDDR_ADDR,
		.podr				= (void __iomem *) MCFGPIO_PODR_ADDR,
		.ppdr				= (void __iomem *) MCFGPIO_PPDSDR_ADDR,
		.setr				= (void __iomem *) MCFGPIO_PPDSDR_ADDR,
		.clrr				= (void __iomem *) MCFGPIO_PCLRR_ADDR,
	},
	{
		.gpio_chip			= {
			.label			= "DATAH",
			.request		= mcf_gpio_request,
			.free			= mcf_gpio_free,
			.direction_input	= mcf_gpio_direction_input,
			.direction_output	= mcf_gpio_direction_output,
			.get			= mcf_gpio_get_value,
			.set			= mcf_gpio_set_value_fast,
			.base			= 16,
			.ngpio			= 8,
		},
		.pddr				= (void __iomem *) MCFGPIO_PDDR_DATAH,
		.podr				= (void __iomem *) MCFGPIO_PODR_DATAH,
		.ppdr				= (void __iomem *) MCFGPIO_PPDSDR_DATAH,
		.setr				= (void __iomem *) MCFGPIO_PPDSDR_DATAH,
		.clrr				= (void __iomem *) MCFGPIO_PCLRR_DATAH,
	},
	{
		.gpio_chip			= {
			.label			= "DATAL",
			.request		= mcf_gpio_request,
			.free			= mcf_gpio_free,
			.direction_input	= mcf_gpio_direction_input,
			.direction_output	= mcf_gpio_direction_output,
			.get			= mcf_gpio_get_value,
			.set			= mcf_gpio_set_value_fast,
			.base			= 24,
			.ngpio			= 8,
		},
		.pddr				= (void __iomem *) MCFGPIO_PDDR_DATAL,
		.podr				= (void __iomem *) MCFGPIO_PODR_DATAL,
		.ppdr				= (void __iomem *) MCFGPIO_PPDSDR_DATAL,
		.setr				= (void __iomem *) MCFGPIO_PPDSDR_DATAL,
		.clrr				= (void __iomem *) MCFGPIO_PCLRR_DATAL,
	},
	{
		.gpio_chip			= {
			.label			= "BUSCTL",
			.request		= mcf_gpio_request,
			.free			= mcf_gpio_free,
			.direction_input	= mcf_gpio_direction_input,
			.direction_output	= mcf_gpio_direction_output,
			.get			= mcf_gpio_get_value,
			.set			= mcf_gpio_set_value_fast,
			.base			= 32,
			.ngpio			= 8,
		},
		.pddr				= (void __iomem *) MCFGPIO_PDDR_BUSCTL,
		.podr				= (void __iomem *) MCFGPIO_PODR_BUSCTL,
		.ppdr				= (void __iomem *) MCFGPIO_PPDSDR_BUSCTL,
		.setr				= (void __iomem *) MCFGPIO_PPDSDR_BUSCTL,
		.clrr				= (void __iomem *) MCFGPIO_PCLRR_BUSCTL,
	},
	{
		.gpio_chip			= {
			.label			= "BS",
			.request		= mcf_gpio_request,
			.free			= mcf_gpio_free,
			.direction_input	= mcf_gpio_direction_input,
			.direction_output	= mcf_gpio_direction_output,
			.get			= mcf_gpio_get_value,
			.set			= mcf_gpio_set_value_fast,
			.base			= 40,
			.ngpio			= 4,
		},
		.pddr				= (void __iomem *) MCFGPIO_PDDR_BS,
		.podr				= (void __iomem *) MCFGPIO_PODR_BS,
		.ppdr				= (void __iomem *) MCFGPIO_PPDSDR_BS,
		.setr				= (void __iomem *) MCFGPIO_PPDSDR_BS,
		.clrr				= (void __iomem *) MCFGPIO_PCLRR_BS,
	},
	{
		.gpio_chip			= {
			.label			= "CS",
			.request		= mcf_gpio_request,
			.free			= mcf_gpio_free,
			.direction_input	= mcf_gpio_direction_input,
			.direction_output	= mcf_gpio_direction_output,
			.get			= mcf_gpio_get_value,
			.set			= mcf_gpio_set_value_fast,
			.base			= 49,
			.ngpio			= 7,
		},
		.pddr				= (void __iomem *) MCFGPIO_PDDR_CS,
		.podr				= (void __iomem *) MCFGPIO_PODR_CS,
		.ppdr				= (void __iomem *) MCFGPIO_PPDSDR_CS,
		.setr				= (void __iomem *) MCFGPIO_PPDSDR_CS,
		.clrr				= (void __iomem *) MCFGPIO_PCLRR_CS,
	},
	{
		.gpio_chip			= {
			.label			= "SDRAM",
			.request		= mcf_gpio_request,
			.free			= mcf_gpio_free,
			.direction_input	= mcf_gpio_direction_input,
			.direction_output	= mcf_gpio_direction_output,
			.get			= mcf_gpio_get_value,
			.set			= mcf_gpio_set_value_fast,
			.base			= 56,
			.ngpio			= 6,
		},
		.pddr				= (void __iomem *) MCFGPIO_PDDR_SDRAM,
		.podr				= (void __iomem *) MCFGPIO_PODR_SDRAM,
		.ppdr				= (void __iomem *) MCFGPIO_PPDSDR_SDRAM,
		.setr				= (void __iomem *) MCFGPIO_PPDSDR_SDRAM,
		.clrr				= (void __iomem *) MCFGPIO_PCLRR_SDRAM,
	},
	{
		.gpio_chip			= {
			.label			= "FECI2C",
			.request		= mcf_gpio_request,
			.free			= mcf_gpio_free,
			.direction_input	= mcf_gpio_direction_input,
			.direction_output	= mcf_gpio_direction_output,
			.get			= mcf_gpio_get_value,
			.set			= mcf_gpio_set_value_fast,
			.base			= 64,
			.ngpio			= 4,
		},
		.pddr				= (void __iomem *) MCFGPIO_PDDR_FECI2C,
		.podr				= (void __iomem *) MCFGPIO_PODR_FECI2C,
		.ppdr				= (void __iomem *) MCFGPIO_PPDSDR_FECI2C,
		.setr				= (void __iomem *) MCFGPIO_PPDSDR_FECI2C,
		.clrr				= (void __iomem *) MCFGPIO_PCLRR_FECI2C,
	},
	{
		.gpio_chip			= {
			.label			= "UARTH",
			.request		= mcf_gpio_request,
			.free			= mcf_gpio_free,
			.direction_input	= mcf_gpio_direction_input,
			.direction_output	= mcf_gpio_direction_output,
			.get			= mcf_gpio_get_value,
			.set			= mcf_gpio_set_value_fast,
			.base			= 72,
			.ngpio			= 2,
		},
		.pddr				= (void __iomem *) MCFGPIO_PDDR_UARTH,
		.podr				= (void __iomem *) MCFGPIO_PODR_UARTH,
		.ppdr				= (void __iomem *) MCFGPIO_PPDSDR_UARTH,
		.setr				= (void __iomem *) MCFGPIO_PPDSDR_UARTH,
		.clrr				= (void __iomem *) MCFGPIO_PCLRR_UARTH,
	},
	{
		.gpio_chip			= {
			.label			= "UARTL",
			.request		= mcf_gpio_request,
			.free			= mcf_gpio_free,
			.direction_input	= mcf_gpio_direction_input,
			.direction_output	= mcf_gpio_direction_output,
			.get			= mcf_gpio_get_value,
			.set			= mcf_gpio_set_value_fast,
			.base			= 80,
			.ngpio			= 8,
		},
		.pddr				= (void __iomem *) MCFGPIO_PDDR_UARTL,
		.podr				= (void __iomem *) MCFGPIO_PODR_UARTL,
		.ppdr				= (void __iomem *) MCFGPIO_PPDSDR_UARTL,
		.setr				= (void __iomem *) MCFGPIO_PPDSDR_UARTL,
		.clrr				= (void __iomem *) MCFGPIO_PCLRR_UARTL,
	},
	{
		.gpio_chip			= {
			.label			= "QSPI",
			.request		= mcf_gpio_request,
			.free			= mcf_gpio_free,
			.direction_input	= mcf_gpio_direction_input,
			.direction_output	= mcf_gpio_direction_output,
			.get			= mcf_gpio_get_value,
			.set			= mcf_gpio_set_value_fast,
			.base			= 88,
			.ngpio			= 5,
		},
		.pddr				= (void __iomem *) MCFGPIO_PDDR_QSPI,
		.podr				= (void __iomem *) MCFGPIO_PODR_QSPI,
		.ppdr				= (void __iomem *) MCFGPIO_PPDSDR_QSPI,
		.setr				= (void __iomem *) MCFGPIO_PPDSDR_QSPI,
		.clrr				= (void __iomem *) MCFGPIO_PCLRR_QSPI,
	},
	{
		.gpio_chip			= {
			.label			= "TIMER",
			.request		= mcf_gpio_request,
			.free			= mcf_gpio_free,
			.direction_input	= mcf_gpio_direction_input,
			.direction_output	= mcf_gpio_direction_output,
			.get			= mcf_gpio_get_value,
			.set			= mcf_gpio_set_value_fast,
			.base			= 96,
			.ngpio			= 8,
		},
		.pddr				= (void __iomem *) MCFGPIO_PDDR_TIMER,
		.podr				= (void __iomem *) MCFGPIO_PODR_TIMER,
		.ppdr				= (void __iomem *) MCFGPIO_PPDSDR_TIMER,
		.setr				= (void __iomem *) MCFGPIO_PPDSDR_TIMER,
		.clrr				= (void __iomem *) MCFGPIO_PCLRR_TIMER,
	},
#elif defined(CONFIG_M5275)
	{
		.gpio_chip			= {
			.label			= "PIRQ",
			.request		= mcf_gpio_request,
			.free			= mcf_gpio_free,
			.direction_input	= mcf_gpio_direction_input,
			.direction_output	= mcf_gpio_direction_output,
			.get			= mcf_gpio_get_value,
			.set			= mcf_gpio_set_value,
			.base			= 1,
			.ngpio			= 7,
		},
		.pddr				= (void __iomem *) MCFEPORT_EPDDR,
		.podr				= (void __iomem *) MCFEPORT_EPDR,
		.ppdr				= (void __iomem *) MCFEPORT_EPPDR,
	},
	{
		.gpio_chip			= {
			.label			= "BUSCTL",
			.request		= mcf_gpio_request,
			.free			= mcf_gpio_free,
			.direction_input	= mcf_gpio_direction_input,
			.direction_output	= mcf_gpio_direction_output,
			.get			= mcf_gpio_get_value,
			.set			= mcf_gpio_set_value_fast,
			.base			= 8,
			.ngpio			= 8,
		},
		.pddr				= (void __iomem *) MCFGPIO_PDDR_BUSCTL,
		.podr				= (void __iomem *) MCFGPIO_PODR_BUSCTL,
		.ppdr				= (void __iomem *) MCFGPIO_PPDSDR_BUSCTL,
		.setr				= (void __iomem *) MCFGPIO_PPDSDR_BUSCTL,
		.clrr				= (void __iomem *) MCFGPIO_PCLRR_BUSCTL,
	},
	{
		.gpio_chip			= {
			.label			= "ADDR",
			.request		= mcf_gpio_request,
			.free			= mcf_gpio_free,
			.direction_input	= mcf_gpio_direction_input,
			.direction_output	= mcf_gpio_direction_output,
			.get			= mcf_gpio_get_value,
			.set			= mcf_gpio_set_value_fast,
			.base			= 21,
			.ngpio			= 3,
		},
		.pddr				= (void __iomem *) MCFGPIO_PDDR_ADDR,
		.podr				= (void __iomem *) MCFGPIO_PODR_ADDR,
		.ppdr				= (void __iomem *) MCFGPIO_PPDSDR_ADDR,
		.setr				= (void __iomem *) MCFGPIO_PPDSDR_ADDR,
		.clrr				= (void __iomem *) MCFGPIO_PCLRR_ADDR,
	},
	{
		.gpio_chip			= {
			.label			= "CS",
			.request		= mcf_gpio_request,
			.free			= mcf_gpio_free,
			.direction_input	= mcf_gpio_direction_input,
			.direction_output	= mcf_gpio_direction_output,
			.get			= mcf_gpio_get_value,
			.set			= mcf_gpio_set_value_fast,
			.base			= 25,
			.ngpio			= 7,
		},
		.pddr				= (void __iomem *) MCFGPIO_PDDR_CS,
		.podr				= (void __iomem *) MCFGPIO_PODR_CS,
		.ppdr				= (void __iomem *) MCFGPIO_PPDSDR_CS,
		.setr				= (void __iomem *) MCFGPIO_PPDSDR_CS,
		.clrr				= (void __iomem *) MCFGPIO_PCLRR_CS,
	},
	{
		.gpio_chip			= {
			.label			= "FEC0H",
			.request		= mcf_gpio_request,
			.free			= mcf_gpio_free,
			.direction_input	= mcf_gpio_direction_input,
			.direction_output	= mcf_gpio_direction_output,
			.get			= mcf_gpio_get_value,
			.set			= mcf_gpio_set_value_fast,
			.base			= 32,
			.ngpio			= 8,
		},
		.pddr				= (void __iomem *) MCFGPIO_PDDR_FEC0H,
		.podr				= (void __iomem *) MCFGPIO_PODR_FEC0H,
		.ppdr				= (void __iomem *) MCFGPIO_PPDSDR_FEC0H,
		.setr				= (void __iomem *) MCFGPIO_PPDSDR_FEC0H,
		.clrr				= (void __iomem *) MCFGPIO_PCLRR_FEC0H,
	},
	{
		.gpio_chip			= {
			.label			= "FEC0L",
			.request		= mcf_gpio_request,
			.free			= mcf_gpio_free,
			.direction_input	= mcf_gpio_direction_input,
			.direction_output	= mcf_gpio_direction_output,
			.get			= mcf_gpio_get_value,
			.set			= mcf_gpio_set_value_fast,
			.base			= 40,
			.ngpio			= 8,
		},
		.pddr				= (void __iomem *) MCFGPIO_PDDR_FEC0L,
		.podr				= (void __iomem *) MCFGPIO_PODR_FEC0L,
		.ppdr				= (void __iomem *) MCFGPIO_PPDSDR_FEC0L,
		.setr				= (void __iomem *) MCFGPIO_PPDSDR_FEC0L,
		.clrr				= (void __iomem *) MCFGPIO_PCLRR_FEC0L,
	},
	{
		.gpio_chip			= {
			.label			= "FECI2C",
			.request		= mcf_gpio_request,
			.free			= mcf_gpio_free,
			.direction_input	= mcf_gpio_direction_input,
			.direction_output	= mcf_gpio_direction_output,
			.get			= mcf_gpio_get_value,
			.set			= mcf_gpio_set_value_fast,
			.base			= 48,
			.ngpio			= 6,
		},
		.pddr				= (void __iomem *) MCFGPIO_PDDR_FECI2C,
		.podr				= (void __iomem *) MCFGPIO_PODR_FECI2C,
		.ppdr				= (void __iomem *) MCFGPIO_PPDSDR_FECI2C,
		.setr				= (void __iomem *) MCFGPIO_PPDSDR_FECI2C,
		.clrr				= (void __iomem *) MCFGPIO_PCLRR_FECI2C,
	},
	{
		.gpio_chip			= {
			.label			= "QSPI",
			.request		= mcf_gpio_request,
			.free			= mcf_gpio_free,
			.direction_input	= mcf_gpio_direction_input,
			.direction_output	= mcf_gpio_direction_output,
			.get			= mcf_gpio_get_value,
			.set			= mcf_gpio_set_value_fast,
			.base			= 56,
			.ngpio			= 7,
		},
		.pddr				= (void __iomem *) MCFGPIO_PDDR_QSPI,
		.podr				= (void __iomem *) MCFGPIO_PODR_QSPI,
		.ppdr				= (void __iomem *) MCFGPIO_PPDSDR_QSPI,
		.setr				= (void __iomem *) MCFGPIO_PPDSDR_QSPI,
		.clrr				= (void __iomem *) MCFGPIO_PCLRR_QSPI,
	},
	{
		.gpio_chip			= {
			.label			= "SDRAM",
			.request		= mcf_gpio_request,
			.free			= mcf_gpio_free,
			.direction_input	= mcf_gpio_direction_input,
			.direction_output	= mcf_gpio_direction_output,
			.get			= mcf_gpio_get_value,
			.set			= mcf_gpio_set_value_fast,
			.base			= 64,
			.ngpio			= 8,
		},
		.pddr				= (void __iomem *) MCFGPIO_PDDR_SDRAM,
		.podr				= (void __iomem *) MCFGPIO_PODR_SDRAM,
		.ppdr				= (void __iomem *) MCFGPIO_PPDSDR_SDRAM,
		.setr				= (void __iomem *) MCFGPIO_PPDSDR_SDRAM,
		.clrr				= (void __iomem *) MCFGPIO_PCLRR_SDRAM,
	},
	{
		.gpio_chip			= {
			.label			= "TIMERH",
			.request		= mcf_gpio_request,
			.free			= mcf_gpio_free,
			.direction_input	= mcf_gpio_direction_input,
			.direction_output	= mcf_gpio_direction_output,
			.get			= mcf_gpio_get_value,
			.set			= mcf_gpio_set_value_fast,
			.base			= 72,
			.ngpio			= 4,
		},
		.pddr				= (void __iomem *) MCFGPIO_PDDR_TIMERH,
		.podr				= (void __iomem *) MCFGPIO_PODR_TIMERH,
		.ppdr				= (void __iomem *) MCFGPIO_PPDSDR_TIMERH,
		.setr				= (void __iomem *) MCFGPIO_PPDSDR_TIMERH,
		.clrr				= (void __iomem *) MCFGPIO_PCLRR_TIMERH,
	},
	{
		.gpio_chip			= {
			.label			= "TIMERL",
			.request		= mcf_gpio_request,
			.free			= mcf_gpio_free,
			.direction_input	= mcf_gpio_direction_input,
			.direction_output	= mcf_gpio_direction_output,
			.get			= mcf_gpio_get_value,
			.set			= mcf_gpio_set_value_fast,
			.base			= 80,
			.ngpio			= 4,
		},
		.pddr				= (void __iomem *) MCFGPIO_PDDR_TIMERL,
		.podr				= (void __iomem *) MCFGPIO_PODR_TIMERL,
		.ppdr				= (void __iomem *) MCFGPIO_PPDSDR_TIMERL,
		.setr				= (void __iomem *) MCFGPIO_PPDSDR_TIMERL,
		.clrr				= (void __iomem *) MCFGPIO_PCLRR_TIMERL,
	},
	{
		.gpio_chip			= {
			.label			= "UARTL",
			.request		= mcf_gpio_request,
			.free			= mcf_gpio_free,
			.direction_input	= mcf_gpio_direction_input,
			.direction_output	= mcf_gpio_direction_output,
			.get			= mcf_gpio_get_value,
			.set			= mcf_gpio_set_value_fast,
			.base			= 88,
			.ngpio			= 8,
		},
		.pddr				= (void __iomem *) MCFGPIO_PDDR_UARTL,
		.podr				= (void __iomem *) MCFGPIO_PODR_UARTL,
		.ppdr				= (void __iomem *) MCFGPIO_PPDSDR_UARTL,
		.setr				= (void __iomem *) MCFGPIO_PPDSDR_UARTL,
		.clrr				= (void __iomem *) MCFGPIO_PCLRR_UARTL,
	},
	{
		.gpio_chip			= {
			.label			= "FEC1H",
			.request		= mcf_gpio_request,
			.free			= mcf_gpio_free,
			.direction_input	= mcf_gpio_direction_input,
			.direction_output	= mcf_gpio_direction_output,
			.get			= mcf_gpio_get_value,
			.set			= mcf_gpio_set_value_fast,
			.base			= 96,
			.ngpio			= 8,
		},
		.pddr				= (void __iomem *) MCFGPIO_PDDR_FEC1H,
		.podr				= (void __iomem *) MCFGPIO_PODR_FEC1H,
		.ppdr				= (void __iomem *) MCFGPIO_PPDSDR_FEC1H,
		.setr				= (void __iomem *) MCFGPIO_PPDSDR_FEC1H,
		.clrr				= (void __iomem *) MCFGPIO_PCLRR_FEC1H,
	},
	{
		.gpio_chip			= {
			.label			= "FEC1L",
			.request		= mcf_gpio_request,
			.free			= mcf_gpio_free,
			.direction_input	= mcf_gpio_direction_input,
			.direction_output	= mcf_gpio_direction_output,
			.get			= mcf_gpio_get_value,
			.set			= mcf_gpio_set_value_fast,
			.base			= 104,
			.ngpio			= 8,
		},
		.pddr				= (void __iomem *) MCFGPIO_PDDR_FEC1L,
		.podr				= (void __iomem *) MCFGPIO_PODR_FEC1L,
		.ppdr				= (void __iomem *) MCFGPIO_PPDSDR_FEC1L,
		.setr				= (void __iomem *) MCFGPIO_PPDSDR_FEC1L,
		.clrr				= (void __iomem *) MCFGPIO_PCLRR_FEC1L,
	},
	{
		.gpio_chip			= {
			.label			= "BS",
			.request		= mcf_gpio_request,
			.free			= mcf_gpio_free,
			.direction_input	= mcf_gpio_direction_input,
			.direction_output	= mcf_gpio_direction_output,
			.get			= mcf_gpio_get_value,
			.set			= mcf_gpio_set_value_fast,
			.base			= 114,
			.ngpio			= 2,
		},
		.pddr				= (void __iomem *) MCFGPIO_PDDR_BS,
		.podr				= (void __iomem *) MCFGPIO_PODR_BS,
		.ppdr				= (void __iomem *) MCFGPIO_PPDSDR_BS,
		.setr				= (void __iomem *) MCFGPIO_PPDSDR_BS,
		.clrr				= (void __iomem *) MCFGPIO_PCLRR_BS,
	},
	{
		.gpio_chip			= {
			.label			= "IRQ",
			.request		= mcf_gpio_request,
			.free			= mcf_gpio_free,
			.direction_input	= mcf_gpio_direction_input,
			.direction_output	= mcf_gpio_direction_output,
			.get			= mcf_gpio_get_value,
			.set			= mcf_gpio_set_value_fast,
			.base			= 121,
			.ngpio			= 7,
		},
		.pddr				= (void __iomem *) MCFGPIO_PDDR_IRQ,
		.podr				= (void __iomem *) MCFGPIO_PODR_IRQ,
		.ppdr				= (void __iomem *) MCFGPIO_PPDSDR_IRQ,
		.setr				= (void __iomem *) MCFGPIO_PPDSDR_IRQ,
		.clrr				= (void __iomem *) MCFGPIO_PCLRR_IRQ,
	},
	{
		.gpio_chip			= {
			.label			= "USBH",
			.request		= mcf_gpio_request,
			.free			= mcf_gpio_free,
			.direction_input	= mcf_gpio_direction_input,
			.direction_output	= mcf_gpio_direction_output,
			.get			= mcf_gpio_get_value,
			.set			= mcf_gpio_set_value_fast,
			.base			= 128,
			.ngpio			= 1,
		},
		.pddr				= (void __iomem *) MCFGPIO_PDDR_USBH,
		.podr				= (void __iomem *) MCFGPIO_PODR_USBH,
		.ppdr				= (void __iomem *) MCFGPIO_PPDSDR_USBH,
		.setr				= (void __iomem *) MCFGPIO_PPDSDR_USBH,
		.clrr				= (void __iomem *) MCFGPIO_PCLRR_USBH,
	},
	{
		.gpio_chip			= {
			.label			= "USBL",
			.request		= mcf_gpio_request,
			.free			= mcf_gpio_free,
			.direction_input	= mcf_gpio_direction_input,
			.direction_output	= mcf_gpio_direction_output,
			.get			= mcf_gpio_get_value,
			.set			= mcf_gpio_set_value_fast,
			.base			= 136,
			.ngpio			= 8,
		},
		.pddr				= (void __iomem *) MCFGPIO_PDDR_USBL,
		.podr				= (void __iomem *) MCFGPIO_PODR_USBL,
		.ppdr				= (void __iomem *) MCFGPIO_PPDSDR_USBL,
		.setr				= (void __iomem *) MCFGPIO_PPDSDR_USBL,
		.clrr				= (void __iomem *) MCFGPIO_PCLRR_USBL,
	},
	{
		.gpio_chip			= {
			.label			= "UARTH",
			.request		= mcf_gpio_request,
			.free			= mcf_gpio_free,
			.direction_input	= mcf_gpio_direction_input,
			.direction_output	= mcf_gpio_direction_output,
			.get			= mcf_gpio_get_value,
			.set			= mcf_gpio_set_value_fast,
			.base			= 144,
			.ngpio			= 4,
		},
		.pddr				= (void __iomem *) MCFGPIO_PDDR_UARTH,
		.podr				= (void __iomem *) MCFGPIO_PODR_UARTH,
		.ppdr				= (void __iomem *) MCFGPIO_PPDSDR_UARTH,
		.setr				= (void __iomem *) MCFGPIO_PPDSDR_UARTH,
		.clrr				= (void __iomem *) MCFGPIO_PCLRR_UARTH,
	},
#endif
};
