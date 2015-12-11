#ifdef HAVE_CMOV_IMM
if(s1h<0) {
      if(s2l>=0) emit_cmp(s1l,s2l);
      else emit_test(s1l,s1l);
      emit_cmov2imm_e_ne_compact(start+i*4+8,ba[i],addr);
    }
    else
    #endif
    {
      assert(s1l>=0);
      emit_mov2imm_compact(start+i*4+8,addr,ba[i],alt);
      if(s1h>=0) {
        if(s2h>=0) emit_cmp(s1h,s2h);
        else emit_test(s1h,s1h);
        emit_cmovne_reg(alt,addr);
      }
      if(s2l>=0) emit_cmp(s1l,s2l);
      else emit_test(s1l,s1l);
      emit_cmovne_reg(alt,addr);
    }
