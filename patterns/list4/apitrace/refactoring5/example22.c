#     ifdef PNG_READ_SUPPORTED
if ((png_ptr->mode & PNG_IS_READ_STRUCT) != 0 &&
            png_ptr->chunk_name != 0)
            png_chunk_error(png_ptr, error_message);
         else
#     endif
      png_error(png_ptr, error_message);
