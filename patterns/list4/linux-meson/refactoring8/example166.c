static inline void dump_bytes(enum debuglevel level, const char *tag,
			      unsigned char *bytes, int count)
{
#ifdef CONFIG_GIGASET_DEBUG
	unsigned char c;
	static char dbgline[3 * 32 + 1];
	int i = 0;

	if (!(gigaset_debuglevel & level))
		return;

	while (count-- > 0) {
		if (i > sizeof(dbgline) - 4) {
			dbgline[i] = '\0';
			gig_dbg(level, "%s:%s", tag, dbgline);
			i = 0;
		}
		c = *bytes++;
		dbgline[i] = (i && !(i % 12)) ? '-' : ' ';
		i++;
		dbgline[i++] = hex_asc_hi(c);
		dbgline[i++] = hex_asc_lo(c);
	}
	dbgline[i] = '\0';
	gig_dbg(level, "%s:%s", tag, dbgline);
#endif
}
