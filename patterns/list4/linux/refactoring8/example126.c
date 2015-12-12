static struct usb_device_id dev_table[] = {
{USB_DEVICE_AND_INTERFACE_INFO(USB_VENDOR_ID_REALTEK, 0x8724, 0xff, 0xff, 0xff),
	.driver_info = (unsigned long)&rtl8723au_fops},
{USB_DEVICE_AND_INTERFACE_INFO(USB_VENDOR_ID_REALTEK, 0x1724, 0xff, 0xff, 0xff),
	.driver_info = (unsigned long)&rtl8723au_fops},
{USB_DEVICE_AND_INTERFACE_INFO(USB_VENDOR_ID_REALTEK, 0x0724, 0xff, 0xff, 0xff),
	.driver_info = (unsigned long)&rtl8723au_fops},
#ifdef CONFIG_RTL8XXXU_UNTESTED
/* Still supported by rtlwifi */
{USB_DEVICE_AND_INTERFACE_INFO(USB_VENDOR_ID_REALTEK, 0x8176, 0xff, 0xff, 0xff),
	.driver_info = (unsigned long)&rtl8192cu_fops},
{USB_DEVICE_AND_INTERFACE_INFO(USB_VENDOR_ID_REALTEK, 0x8178, 0xff, 0xff, 0xff),
	.driver_info = (unsigned long)&rtl8192cu_fops},
{USB_DEVICE_AND_INTERFACE_INFO(USB_VENDOR_ID_REALTEK, 0x817f, 0xff, 0xff, 0xff),
	.driver_info = (unsigned long)&rtl8192cu_fops},
/* Tested by Larry Finger */
{USB_DEVICE_AND_INTERFACE_INFO(0x7392, 0x7811, 0xff, 0xff, 0xff),
	.driver_info = (unsigned long)&rtl8192cu_fops},
/* Currently untested 8188 series devices */
{USB_DEVICE_AND_INTERFACE_INFO(USB_VENDOR_ID_REALTEK, 0x8191, 0xff, 0xff, 0xff),
	.driver_info = (unsigned long)&rtl8192cu_fops},
{USB_DEVICE_AND_INTERFACE_INFO(USB_VENDOR_ID_REALTEK, 0x8170, 0xff, 0xff, 0xff),
	.driver_info = (unsigned long)&rtl8192cu_fops},
{USB_DEVICE_AND_INTERFACE_INFO(USB_VENDOR_ID_REALTEK, 0x8177, 0xff, 0xff, 0xff),
	.driver_info = (unsigned long)&rtl8192cu_fops},
{USB_DEVICE_AND_INTERFACE_INFO(USB_VENDOR_ID_REALTEK, 0x817a, 0xff, 0xff, 0xff),
	.driver_info = (unsigned long)&rtl8192cu_fops},
{USB_DEVICE_AND_INTERFACE_INFO(USB_VENDOR_ID_REALTEK, 0x817b, 0xff, 0xff, 0xff),
	.driver_info = (unsigned long)&rtl8192cu_fops},
{USB_DEVICE_AND_INTERFACE_INFO(USB_VENDOR_ID_REALTEK, 0x817d, 0xff, 0xff, 0xff),
	.driver_info = (unsigned long)&rtl8192cu_fops},
{USB_DEVICE_AND_INTERFACE_INFO(USB_VENDOR_ID_REALTEK, 0x817e, 0xff, 0xff, 0xff),
	.driver_info = (unsigned long)&rtl8192cu_fops},
{USB_DEVICE_AND_INTERFACE_INFO(USB_VENDOR_ID_REALTEK, 0x818a, 0xff, 0xff, 0xff),
	.driver_info = (unsigned long)&rtl8192cu_fops},
{USB_DEVICE_AND_INTERFACE_INFO(USB_VENDOR_ID_REALTEK, 0x317f, 0xff, 0xff, 0xff),
	.driver_info = (unsigned long)&rtl8192cu_fops},
{USB_DEVICE_AND_INTERFACE_INFO(0x1058, 0x0631, 0xff, 0xff, 0xff),
	.driver_info = (unsigned long)&rtl8192cu_fops},
{USB_DEVICE_AND_INTERFACE_INFO(0x04bb, 0x094c, 0xff, 0xff, 0xff),
	.driver_info = (unsigned long)&rtl8192cu_fops},
{USB_DEVICE_AND_INTERFACE_INFO(0x050d, 0x1102, 0xff, 0xff, 0xff),
	.driver_info = (unsigned long)&rtl8192cu_fops},
{USB_DEVICE_AND_INTERFACE_INFO(0x06f8, 0xe033, 0xff, 0xff, 0xff),
	.driver_info = (unsigned long)&rtl8192cu_fops},
{USB_DEVICE_AND_INTERFACE_INFO(0x07b8, 0x8189, 0xff, 0xff, 0xff),
	.driver_info = (unsigned long)&rtl8192cu_fops},
{USB_DEVICE_AND_INTERFACE_INFO(0x0846, 0x9041, 0xff, 0xff, 0xff),
	.driver_info = (unsigned long)&rtl8192cu_fops},
{USB_DEVICE_AND_INTERFACE_INFO(0x0b05, 0x17ba, 0xff, 0xff, 0xff),
	.driver_info = (unsigned long)&rtl8192cu_fops},
{USB_DEVICE_AND_INTERFACE_INFO(USB_VENDOR_ID_REALTEK, 0x1e1e, 0xff, 0xff, 0xff),
	.driver_info = (unsigned long)&rtl8192cu_fops},
{USB_DEVICE_AND_INTERFACE_INFO(USB_VENDOR_ID_REALTEK, 0x5088, 0xff, 0xff, 0xff),
	.driver_info = (unsigned long)&rtl8192cu_fops},
{USB_DEVICE_AND_INTERFACE_INFO(0x0df6, 0x0052, 0xff, 0xff, 0xff),
	.driver_info = (unsigned long)&rtl8192cu_fops},
{USB_DEVICE_AND_INTERFACE_INFO(0x0df6, 0x005c, 0xff, 0xff, 0xff),
	.driver_info = (unsigned long)&rtl8192cu_fops},
{USB_DEVICE_AND_INTERFACE_INFO(0x0eb0, 0x9071, 0xff, 0xff, 0xff),
	.driver_info = (unsigned long)&rtl8192cu_fops},
{USB_DEVICE_AND_INTERFACE_INFO(0x103c, 0x1629, 0xff, 0xff, 0xff),
	.driver_info = (unsigned long)&rtl8192cu_fops},
{USB_DEVICE_AND_INTERFACE_INFO(0x13d3, 0x3357, 0xff, 0xff, 0xff),
	.driver_info = (unsigned long)&rtl8192cu_fops},
{USB_DEVICE_AND_INTERFACE_INFO(0x2001, 0x3308, 0xff, 0xff, 0xff),
	.driver_info = (unsigned long)&rtl8192cu_fops},
{USB_DEVICE_AND_INTERFACE_INFO(0x2001, 0x330b, 0xff, 0xff, 0xff),
	.driver_info = (unsigned long)&rtl8192cu_fops},
{USB_DEVICE_AND_INTERFACE_INFO(0x2019, 0x4902, 0xff, 0xff, 0xff),
	.driver_info = (unsigned long)&rtl8192cu_fops},
{USB_DEVICE_AND_INTERFACE_INFO(0x2019, 0xab2a, 0xff, 0xff, 0xff),
	.driver_info = (unsigned long)&rtl8192cu_fops},
{USB_DEVICE_AND_INTERFACE_INFO(0x2019, 0xab2e, 0xff, 0xff, 0xff),
	.driver_info = (unsigned long)&rtl8192cu_fops},
{USB_DEVICE_AND_INTERFACE_INFO(0x2019, 0xed17, 0xff, 0xff, 0xff),
	.driver_info = (unsigned long)&rtl8192cu_fops},
{USB_DEVICE_AND_INTERFACE_INFO(0x20f4, 0x648b, 0xff, 0xff, 0xff),
	.driver_info = (unsigned long)&rtl8192cu_fops},
{USB_DEVICE_AND_INTERFACE_INFO(0x4855, 0x0090, 0xff, 0xff, 0xff),
	.driver_info = (unsigned long)&rtl8192cu_fops},
{USB_DEVICE_AND_INTERFACE_INFO(0x4856, 0x0091, 0xff, 0xff, 0xff),
	.driver_info = (unsigned long)&rtl8192cu_fops},
{USB_DEVICE_AND_INTERFACE_INFO(0xcdab, 0x8010, 0xff, 0xff, 0xff),
	.driver_info = (unsigned long)&rtl8192cu_fops},
{USB_DEVICE_AND_INTERFACE_INFO(USB_VENDOR_ID_REALTEK, 0x317f, 0xff, 0xff, 0xff),
	.driver_info = (unsigned long)&rtl8192cu_fops}, /* Netcore 8188RU */
{USB_DEVICE_AND_INTERFACE_INFO(0x04f2, 0xaff7, 0xff, 0xff, 0xff),
	.driver_info = (unsigned long)&rtl8192cu_fops},
{USB_DEVICE_AND_INTERFACE_INFO(0x04f2, 0xaff9, 0xff, 0xff, 0xff),
	.driver_info = (unsigned long)&rtl8192cu_fops},
{USB_DEVICE_AND_INTERFACE_INFO(0x04f2, 0xaffa, 0xff, 0xff, 0xff),
	.driver_info = (unsigned long)&rtl8192cu_fops},
{USB_DEVICE_AND_INTERFACE_INFO(0x04f2, 0xaff8, 0xff, 0xff, 0xff),
	.driver_info = (unsigned long)&rtl8192cu_fops},
{USB_DEVICE_AND_INTERFACE_INFO(0x04f2, 0xaffb, 0xff, 0xff, 0xff),
	.driver_info = (unsigned long)&rtl8192cu_fops},
{USB_DEVICE_AND_INTERFACE_INFO(0x04f2, 0xaffc, 0xff, 0xff, 0xff),
	.driver_info = (unsigned long)&rtl8192cu_fops},
{USB_DEVICE_AND_INTERFACE_INFO(0x2019, 0x1201, 0xff, 0xff, 0xff),
	.driver_info = (unsigned long)&rtl8192cu_fops},
/* Currently untested 8192 series devices */
{USB_DEVICE_AND_INTERFACE_INFO(0x04bb, 0x0950, 0xff, 0xff, 0xff),
	.driver_info = (unsigned long)&rtl8192cu_fops},
{USB_DEVICE_AND_INTERFACE_INFO(0x050d, 0x1004, 0xff, 0xff, 0xff),
	.driver_info = (unsigned long)&rtl8192cu_fops},
{USB_DEVICE_AND_INTERFACE_INFO(0x050d, 0x2102, 0xff, 0xff, 0xff),
	.driver_info = (unsigned long)&rtl8192cu_fops},
{USB_DEVICE_AND_INTERFACE_INFO(0x050d, 0x2103, 0xff, 0xff, 0xff),
	.driver_info = (unsigned long)&rtl8192cu_fops},
{USB_DEVICE_AND_INTERFACE_INFO(0x0586, 0x341f, 0xff, 0xff, 0xff),
	.driver_info = (unsigned long)&rtl8192cu_fops},
{USB_DEVICE_AND_INTERFACE_INFO(0x06f8, 0xe035, 0xff, 0xff, 0xff),
	.driver_info = (unsigned long)&rtl8192cu_fops},
{USB_DEVICE_AND_INTERFACE_INFO(0x0b05, 0x17ab, 0xff, 0xff, 0xff),
	.driver_info = (unsigned long)&rtl8192cu_fops},
{USB_DEVICE_AND_INTERFACE_INFO(0x0df6, 0x0061, 0xff, 0xff, 0xff),
	.driver_info = (unsigned long)&rtl8192cu_fops},
{USB_DEVICE_AND_INTERFACE_INFO(0x0df6, 0x0070, 0xff, 0xff, 0xff),
	.driver_info = (unsigned long)&rtl8192cu_fops},
{USB_DEVICE_AND_INTERFACE_INFO(0x0789, 0x016d, 0xff, 0xff, 0xff),
	.driver_info = (unsigned long)&rtl8192cu_fops},
{USB_DEVICE_AND_INTERFACE_INFO(0x07aa, 0x0056, 0xff, 0xff, 0xff),
	.driver_info = (unsigned long)&rtl8192cu_fops},
{USB_DEVICE_AND_INTERFACE_INFO(0x07b8, 0x8178, 0xff, 0xff, 0xff),
	.driver_info = (unsigned long)&rtl8192cu_fops},
{USB_DEVICE_AND_INTERFACE_INFO(0x0846, 0x9021, 0xff, 0xff, 0xff),
	.driver_info = (unsigned long)&rtl8192cu_fops},
{USB_DEVICE_AND_INTERFACE_INFO(0x0846, 0xf001, 0xff, 0xff, 0xff),
	.driver_info = (unsigned long)&rtl8192cu_fops},
{USB_DEVICE_AND_INTERFACE_INFO(USB_VENDOR_ID_REALTEK, 0x2e2e, 0xff, 0xff, 0xff),
	.driver_info = (unsigned long)&rtl8192cu_fops},
{USB_DEVICE_AND_INTERFACE_INFO(0x0e66, 0x0019, 0xff, 0xff, 0xff),
	.driver_info = (unsigned long)&rtl8192cu_fops},
{USB_DEVICE_AND_INTERFACE_INFO(0x0e66, 0x0020, 0xff, 0xff, 0xff),
	.driver_info = (unsigned long)&rtl8192cu_fops},
{USB_DEVICE_AND_INTERFACE_INFO(0x2001, 0x3307, 0xff, 0xff, 0xff),
	.driver_info = (unsigned long)&rtl8192cu_fops},
{USB_DEVICE_AND_INTERFACE_INFO(0x2001, 0x3309, 0xff, 0xff, 0xff),
	.driver_info = (unsigned long)&rtl8192cu_fops},
{USB_DEVICE_AND_INTERFACE_INFO(0x2001, 0x330a, 0xff, 0xff, 0xff),
	.driver_info = (unsigned long)&rtl8192cu_fops},
{USB_DEVICE_AND_INTERFACE_INFO(0x2019, 0xab2b, 0xff, 0xff, 0xff),
	.driver_info = (unsigned long)&rtl8192cu_fops},
{USB_DEVICE_AND_INTERFACE_INFO(0x20f4, 0x624d, 0xff, 0xff, 0xff),
	.driver_info = (unsigned long)&rtl8192cu_fops},
{USB_DEVICE_AND_INTERFACE_INFO(0x2357, 0x0100, 0xff, 0xff, 0xff),
	.driver_info = (unsigned long)&rtl8192cu_fops},
{USB_DEVICE_AND_INTERFACE_INFO(0x4855, 0x0091, 0xff, 0xff, 0xff),
	.driver_info = (unsigned long)&rtl8192cu_fops},
{USB_DEVICE_AND_INTERFACE_INFO(0x7392, 0x7822, 0xff, 0xff, 0xff),
	.driver_info = (unsigned long)&rtl8192cu_fops},
#endif
{ }
};
