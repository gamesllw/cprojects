#ifdef BSAES_CAPABLE
if (BSAES_CAPABLE && mode==EVP_CIPH_CBC_MODE)
		{
		ret = AES_set_decrypt_key(key,ctx->key_len*8,&dat->ks);
		dat->block	= (block128_f)AES_decrypt;
		dat->stream.cbc	= (cbc128_f)bsaes_cbc_encrypt;
		}
	    else
#endif
#ifdef VPAES_CAPABLE
	    if (VPAES_CAPABLE)
		{
		ret = vpaes_set_decrypt_key(key,ctx->key_len*8,&dat->ks);
		dat->block	= (block128_f)vpaes_decrypt;
		dat->stream.cbc	= mode==EVP_CIPH_CBC_MODE ?
					(cbc128_f)vpaes_cbc_encrypt :
					NULL;
		}
	    else
#endif
		{
		ret = AES_set_decrypt_key(key,ctx->key_len*8,&dat->ks);
		dat->block	= (block128_f)AES_decrypt;
		dat->stream.cbc	= mode==EVP_CIPH_CBC_MODE ?
					(cbc128_f)AES_cbc_encrypt :
					NULL;
		}
