static unsigned short rc_ioport[] =  {
#if 1
	0x01, 0x02, 0x03, 0x04, 0x05, 0x06, 0x07, 0x09, 0x0a, 0x0b, 0x0c,
#else
	0x01, 0x02, 0x03, 0x04, 0x05, 0x06, 0x07, 0x09, 0x0a, 0x0b, 0x0c, 0x10,
	0x11, 0x12, 0x18, 0x28, 0x31, 0x32, 0x39, 0x3a, 0x40, 0x41, 0x61, 0x62,
	0x63, 0x64, 0x6b, 0x70, 0x71, 0x78, 0x7a, 0x7b, 0x7f, 0x100, 0x101
#endif
};
