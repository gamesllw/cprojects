static struct snd_kcontrol_new snd_azf3328_mixer_controls[] __devinitdata = {
	AZF3328_MIXER_SWITCH("Master Playback Switch", IDX_MIXER_PLAY_MASTER, 15, 1),
	AZF3328_MIXER_VOL_STEREO("Master Playback Volume", IDX_MIXER_PLAY_MASTER, 0x1f, 1),
	AZF3328_MIXER_SWITCH("PCM Playback Switch", IDX_MIXER_WAVEOUT, 15, 1),
	AZF3328_MIXER_VOL_STEREO("PCM Playback Volume",
					IDX_MIXER_WAVEOUT, 0x1f, 1),
	AZF3328_MIXER_SWITCH("PCM 3D Bypass Playback Switch",
					IDX_MIXER_ADVCTL2, 7, 1),
	AZF3328_MIXER_SWITCH("FM Playback Switch", IDX_MIXER_FMSYNTH, 15, 1),
	AZF3328_MIXER_VOL_STEREO("FM Playback Volume", IDX_MIXER_FMSYNTH, 0x1f, 1),
	AZF3328_MIXER_SWITCH("CD Playback Switch", IDX_MIXER_CDAUDIO, 15, 1),
	AZF3328_MIXER_VOL_STEREO("CD Playback Volume", IDX_MIXER_CDAUDIO, 0x1f, 1),
	AZF3328_MIXER_SWITCH("Capture Switch", IDX_MIXER_REC_VOLUME, 15, 1),
	AZF3328_MIXER_VOL_STEREO("Capture Volume", IDX_MIXER_REC_VOLUME, 0x0f, 0),
	AZF3328_MIXER_ENUM("Capture Source", IDX_MIXER_REC_SELECT, 8, 0),
	AZF3328_MIXER_SWITCH("Mic Playback Switch", IDX_MIXER_MIC, 15, 1),
	AZF3328_MIXER_VOL_MONO("Mic Playback Volume", IDX_MIXER_MIC, 0x1f, 1),
	AZF3328_MIXER_SWITCH("Mic Boost (+20dB)", IDX_MIXER_MIC, 6, 0),
	AZF3328_MIXER_SWITCH("Line Playback Switch", IDX_MIXER_LINEIN, 15, 1),
	AZF3328_MIXER_VOL_STEREO("Line Playback Volume", IDX_MIXER_LINEIN, 0x1f, 1),
	AZF3328_MIXER_SWITCH("Beep Playback Switch", IDX_MIXER_PCBEEP, 15, 1),
	AZF3328_MIXER_VOL_SPECIAL("Beep Playback Volume", IDX_MIXER_PCBEEP, 0x0f, 1, 1),
	AZF3328_MIXER_SWITCH("Video Playback Switch", IDX_MIXER_VIDEO, 15, 1),
	AZF3328_MIXER_VOL_STEREO("Video Playback Volume", IDX_MIXER_VIDEO, 0x1f, 1),
	AZF3328_MIXER_SWITCH("Aux Playback Switch", IDX_MIXER_AUX, 15, 1),
	AZF3328_MIXER_VOL_STEREO("Aux Playback Volume", IDX_MIXER_AUX, 0x1f, 1),
	AZF3328_MIXER_SWITCH("Modem Playback Switch", IDX_MIXER_MODEMOUT, 15, 1),
	AZF3328_MIXER_VOL_MONO("Modem Playback Volume", IDX_MIXER_MODEMOUT, 0x1f, 1),
	AZF3328_MIXER_SWITCH("Modem Capture Switch", IDX_MIXER_MODEMIN, 15, 1),
	AZF3328_MIXER_VOL_MONO("Modem Capture Volume", IDX_MIXER_MODEMIN, 0x1f, 1),
	AZF3328_MIXER_ENUM("Mic Select", IDX_MIXER_ADVCTL2, 2, 8),
	AZF3328_MIXER_ENUM("Mono Output Select", IDX_MIXER_ADVCTL2, 2, 9),
	AZF3328_MIXER_ENUM("PCM Output Route", IDX_MIXER_ADVCTL2, 2, 15), /* PCM Out Path, place in front since it controls *both* 3D and Bass/Treble! */
	AZF3328_MIXER_VOL_SPECIAL("Tone Control - Treble", IDX_MIXER_BASSTREBLE, 0x07, 1, 0),
	AZF3328_MIXER_VOL_SPECIAL("Tone Control - Bass", IDX_MIXER_BASSTREBLE, 0x07, 9, 0),
	AZF3328_MIXER_SWITCH("3D Control - Switch", IDX_MIXER_ADVCTL2, 13, 0),
	AZF3328_MIXER_VOL_SPECIAL("3D Control - Width", IDX_MIXER_ADVCTL1, 0x07, 1, 0), /* "3D Width" */
	AZF3328_MIXER_VOL_SPECIAL("3D Control - Depth", IDX_MIXER_ADVCTL1, 0x03, 8, 0), /* "Hifi 3D" */
#if MIXER_TESTING
	AZF3328_MIXER_SWITCH("0", IDX_MIXER_ADVCTL2, 0, 0),
	AZF3328_MIXER_SWITCH("1", IDX_MIXER_ADVCTL2, 1, 0),
	AZF3328_MIXER_SWITCH("2", IDX_MIXER_ADVCTL2, 2, 0),
	AZF3328_MIXER_SWITCH("3", IDX_MIXER_ADVCTL2, 3, 0),
	AZF3328_MIXER_SWITCH("4", IDX_MIXER_ADVCTL2, 4, 0),
	AZF3328_MIXER_SWITCH("5", IDX_MIXER_ADVCTL2, 5, 0),
	AZF3328_MIXER_SWITCH("6", IDX_MIXER_ADVCTL2, 6, 0),
	AZF3328_MIXER_SWITCH("7", IDX_MIXER_ADVCTL2, 7, 0),
	AZF3328_MIXER_SWITCH("8", IDX_MIXER_ADVCTL2, 8, 0),
	AZF3328_MIXER_SWITCH("9", IDX_MIXER_ADVCTL2, 9, 0),
	AZF3328_MIXER_SWITCH("10", IDX_MIXER_ADVCTL2, 10, 0),
	AZF3328_MIXER_SWITCH("11", IDX_MIXER_ADVCTL2, 11, 0),
	AZF3328_MIXER_SWITCH("12", IDX_MIXER_ADVCTL2, 12, 0),
	AZF3328_MIXER_SWITCH("13", IDX_MIXER_ADVCTL2, 13, 0),
	AZF3328_MIXER_SWITCH("14", IDX_MIXER_ADVCTL2, 14, 0),
	AZF3328_MIXER_SWITCH("15", IDX_MIXER_ADVCTL2, 15, 0),
#endif
};
