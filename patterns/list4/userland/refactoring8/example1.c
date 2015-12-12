static FEATURES_AND_FORMATS_T formats[EGL_MAX_CONFIGS] = {
//                                        LOCKABLE
//                                    MASK |
//                R  G  B  A   D  S  M  |  |   COLOR      DEPTH                 MULTISAMPLE           MASK
   {FEATURES_PACK(8, 8, 8, 8, 24, 8, 0, 0, 0), ABGR_8888, DEPTH_32_TLBD,        IMAGE_FORMAT_INVALID, IMAGE_FORMAT_INVALID},
   {FEATURES_PACK(8, 8, 8, 0, 24, 8, 0, 0, 0), XBGR_8888, DEPTH_32_TLBD,        IMAGE_FORMAT_INVALID, IMAGE_FORMAT_INVALID},
   {FEATURES_PACK(8, 8, 8, 8, 24, 0, 0, 0, 0), ABGR_8888, DEPTH_32_TLBD,        IMAGE_FORMAT_INVALID, IMAGE_FORMAT_INVALID},
   {FEATURES_PACK(8, 8, 8, 0, 24, 0, 0, 0, 0), XBGR_8888, DEPTH_32_TLBD,        IMAGE_FORMAT_INVALID, IMAGE_FORMAT_INVALID},
   {FEATURES_PACK(8, 8, 8, 8,  0, 8, 0, 0, 0), ABGR_8888, DEPTH_32_TLBD,        IMAGE_FORMAT_INVALID, IMAGE_FORMAT_INVALID},
   {FEATURES_PACK(8, 8, 8, 0,  0, 8, 0, 0, 0), XBGR_8888, DEPTH_32_TLBD,        IMAGE_FORMAT_INVALID, IMAGE_FORMAT_INVALID},
   {FEATURES_PACK(8, 8, 8, 8,  0, 0, 0, 0, 0), ABGR_8888, IMAGE_FORMAT_INVALID, IMAGE_FORMAT_INVALID, IMAGE_FORMAT_INVALID},
   {FEATURES_PACK(8, 8, 8, 0,  0, 0, 0, 0, 0), XBGR_8888, IMAGE_FORMAT_INVALID, IMAGE_FORMAT_INVALID, IMAGE_FORMAT_INVALID},

   {FEATURES_PACK(8, 8, 8, 8, 24, 8, 1, 0, 0), ABGR_8888, DEPTH_32_TLBD /*?*/,  DEPTH_COL_64_TLBD,    IMAGE_FORMAT_INVALID},
   {FEATURES_PACK(8, 8, 8, 0, 24, 8, 1, 0, 0), XBGR_8888, DEPTH_32_TLBD /*?*/,  DEPTH_COL_64_TLBD,    IMAGE_FORMAT_INVALID},
   {FEATURES_PACK(8, 8, 8, 8, 24, 0, 1, 0, 0), ABGR_8888, DEPTH_32_TLBD /*?*/,  DEPTH_COL_64_TLBD,    IMAGE_FORMAT_INVALID},
   {FEATURES_PACK(8, 8, 8, 0, 24, 0, 1, 0, 0), XBGR_8888, DEPTH_32_TLBD /*?*/,  DEPTH_COL_64_TLBD,    IMAGE_FORMAT_INVALID},
   {FEATURES_PACK(8, 8, 8, 8,  0, 8, 1, 0, 0), ABGR_8888, DEPTH_32_TLBD /*?*/,  DEPTH_COL_64_TLBD,    IMAGE_FORMAT_INVALID},
   {FEATURES_PACK(8, 8, 8, 0,  0, 8, 1, 0, 0), XBGR_8888, DEPTH_32_TLBD /*?*/,  DEPTH_COL_64_TLBD,    IMAGE_FORMAT_INVALID},
   {FEATURES_PACK(8, 8, 8, 8,  0, 0, 1, 0, 0), ABGR_8888, IMAGE_FORMAT_INVALID, COL_32_TLBD,          IMAGE_FORMAT_INVALID},
   {FEATURES_PACK(8, 8, 8, 0,  0, 0, 1, 0, 0), XBGR_8888, IMAGE_FORMAT_INVALID, COL_32_TLBD,          IMAGE_FORMAT_INVALID},

   {FEATURES_PACK(5, 6, 5, 0, 24, 8, 0, 0, 0), RGB_565,   DEPTH_32_TLBD,        IMAGE_FORMAT_INVALID, IMAGE_FORMAT_INVALID},
   {FEATURES_PACK(5, 6, 5, 0, 24, 0, 0, 0, 0), RGB_565,   DEPTH_32_TLBD,        IMAGE_FORMAT_INVALID, IMAGE_FORMAT_INVALID},
   {FEATURES_PACK(5, 6, 5, 0,  0, 8, 0, 0, 0), RGB_565,   DEPTH_32_TLBD,        IMAGE_FORMAT_INVALID, IMAGE_FORMAT_INVALID},
   {FEATURES_PACK(5, 6, 5, 0,  0, 0, 0, 0, 0), RGB_565,   IMAGE_FORMAT_INVALID, IMAGE_FORMAT_INVALID, IMAGE_FORMAT_INVALID},

   {FEATURES_PACK(5, 6, 5, 0, 24, 8, 1, 0, 0), RGB_565,   DEPTH_32_TLBD /*?*/,  DEPTH_COL_64_TLBD,    IMAGE_FORMAT_INVALID},
   {FEATURES_PACK(5, 6, 5, 0, 24, 0, 1, 0, 0), RGB_565,   DEPTH_32_TLBD /*?*/,  DEPTH_COL_64_TLBD,    IMAGE_FORMAT_INVALID},
   {FEATURES_PACK(5, 6, 5, 0,  0, 8, 1, 0, 0), RGB_565,   DEPTH_32_TLBD /*?*/,  DEPTH_COL_64_TLBD,    IMAGE_FORMAT_INVALID},
   {FEATURES_PACK(5, 6, 5, 0,  0, 0, 1, 0, 0), RGB_565,   IMAGE_FORMAT_INVALID, COL_32_TLBD,          IMAGE_FORMAT_INVALID},

#ifndef EGL_NO_ALPHA_MASK_CONFIGS
   {FEATURES_PACK(8, 8, 8, 8,  0, 0, 0, 8, 0), ABGR_8888, IMAGE_FORMAT_INVALID, IMAGE_FORMAT_INVALID, A_8_RSO},
   {FEATURES_PACK(8, 8, 8, 0,  0, 0, 0, 8, 0), XBGR_8888, IMAGE_FORMAT_INVALID, IMAGE_FORMAT_INVALID, A_8_RSO},
   {FEATURES_PACK(5, 6, 5, 0,  0, 0, 0, 8, 0), RGB_565,   IMAGE_FORMAT_INVALID, IMAGE_FORMAT_INVALID, A_8_RSO},
#endif

   {FEATURES_PACK(5, 6, 5, 0, 16, 0, 0, 0, 0), RGB_565,   DEPTH_32_TLBD,        IMAGE_FORMAT_INVALID, IMAGE_FORMAT_INVALID},

};
