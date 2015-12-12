#ifdef CONFIG_BAND_VHF
if (state->current_band == BAND_VHF) {
			dib0090_set_rframp(state, rf_ramp_vhf);
			dib0090_set_bbramp(state, bb_ramp_boost);
		} else
#endif
#ifdef CONFIG_BAND_CBAND
		if (state->current_band == BAND_CBAND) {
			dib0090_set_rframp(state, rf_ramp_cband);
			dib0090_set_bbramp(state, bb_ramp_boost);
		} else
#endif
		{
			dib0090_set_rframp(state, rf_ramp_uhf);
			dib0090_set_bbramp(state, bb_ramp_boost);
		}
