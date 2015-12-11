#ifndef HAVE_ASSUME_COMBINE_EXT
if (cmb.combine_ext)
#endif
   {
      ACMBEXT(GR_CMBX_TEXTURE_ALPHA, GR_FUNC_MODE_X,
            GR_CMBX_CONSTANT_ALPHA, GR_FUNC_MODE_NEGATIVE_X,
            GR_CMBX_ITALPHA, 0,
            GR_CMBX_ZERO, 0);
      CA_ENV();
      SETSHADE_A_PRIM();
   }
#ifndef HAVE_ASSUME_COMBINE_EXT
   else
   {
      ACMB (GR_COMBINE_FUNCTION_SCALE_OTHER,
            GR_COMBINE_FACTOR_LOCAL,
            GR_COMBINE_LOCAL_CONSTANT,
            GR_COMBINE_OTHER_TEXTURE);
      CA_PRIM();
   }
