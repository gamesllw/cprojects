if (
#if defined SUPPORT_UTF || !(defined COMPILE_PCRE8)
       c > 255 ||
#endif
       (md->ctypes[c] & ctype_space) == 0
       )
      RRETURN(MATCH_NOMATCH);
