if ((png_ptr->flags & PNG_FLAG_KEEP_UNKNOWN_CHUNKS)
#ifdef PNG_READ_USER_CHUNKS_SUPPORTED
       || (png_ptr->read_user_chunk_fn != NULL)
#endif
        )
   {
#ifdef PNG_MAX_MALLOC_64K
       if (length > (png_uint_32)65535L)
       {
           png_warning(png_ptr, "unknown chunk too large to fit in memory");
           skip = length - (png_uint_32)65535L;
           length = (png_uint_32)65535L;
       }
#endif
       png_memcpy((png_charp)png_ptr->unknown_chunk.name,
                  (png_charp)png_ptr->chunk_name,
                  png_sizeof(png_ptr->unknown_chunk.name));
       png_ptr->unknown_chunk.name[png_sizeof(png_ptr->unknown_chunk.name)-1] = '\0';
       png_ptr->unknown_chunk.size = (png_size_t)length;
       if (length == 0)
         png_ptr->unknown_chunk.data = NULL;
       else
       {
         png_ptr->unknown_chunk.data = (png_bytep)png_malloc(png_ptr, length);
         png_crc_read(png_ptr, (png_bytep)png_ptr->unknown_chunk.data, length);
       }
#ifdef PNG_READ_USER_CHUNKS_SUPPORTED
       if (png_ptr->read_user_chunk_fn != NULL)
       {
          /* Callback to user unknown chunk handler */
          int ret;
          ret = (*(png_ptr->read_user_chunk_fn))
            (png_ptr, &png_ptr->unknown_chunk);
          if (ret < 0)
             png_chunk_error(png_ptr, "error in user chunk");
          if (ret == 0)
          {
             if (!(png_ptr->chunk_name[0] & 0x20))
#ifdef PNG_HANDLE_AS_UNKNOWN_SUPPORTED
                if (png_handle_as_unknown(png_ptr, png_ptr->chunk_name) !=
                     PNG_HANDLE_CHUNK_ALWAYS)
#endif
                   png_chunk_error(png_ptr, "unknown critical chunk");
             png_set_unknown_chunks(png_ptr, info_ptr,
               &png_ptr->unknown_chunk, 1);
          }
       }
       else
#endif
       png_set_unknown_chunks(png_ptr, info_ptr, &png_ptr->unknown_chunk, 1);
       png_free(png_ptr, png_ptr->unknown_chunk.data);
       png_ptr->unknown_chunk.data = NULL;
   }
   else
#endif
      skip = length;
