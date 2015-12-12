static struct my_option my_long_options[] =
{
  {"checksum", 'c', "Undocumented",
   0, 0, 0, GET_NO_ARG, NO_ARG, 0, 0, 0, 0, 0, 0},
#ifndef DBUG_OFF
  {"debug", '#', "Undocumented",
   0, 0, 0, GET_STR, REQUIRED_ARG, 0, 0, 0, 0, 0, 0},
#endif
  {"delete_rows", 'd', "Undocumented", &remove_count,
   &remove_count, 0, GET_UINT, REQUIRED_ARG, 1000, 0, 0, 0, 0, 0},
  {"help", '?', "Display help and exit",
   0, 0, 0, GET_NO_ARG, NO_ARG, 0, 0, 0, 0, 0, 0},
  {"insert_rows", 'i', "Undocumented", &insert_count,
   &insert_count, 0, GET_UINT, REQUIRED_ARG, 1000, 0, 0, 0, 0, 0},
  {"key_alpha", 'a', "Use a key of type HA_KEYTYPE_TEXT",
   0, 0, 0, GET_NO_ARG, NO_ARG, 0, 0, 0, 0, 0, 0},
  {"key_binary_pack", 'B', "Undocumented",
   0, 0, 0, GET_NO_ARG, NO_ARG, 0, 0, 0, 0, 0, 0},
  {"key_blob", 'b', "Undocumented",
   0, 0, 0, GET_NO_ARG, NO_ARG, 0, 0, 0, 0, 0, 0},
  {"key_cache", 'K', "Undocumented", &key_cacheing,
   &key_cacheing, 0, GET_BOOL, NO_ARG, 0, 0, 0, 0, 0, 0},
  {"key_length", 'k', "Undocumented", &key_length, &key_length,
   0, GET_UINT, REQUIRED_ARG, 6, 0, 0, 0, 0, 0},
  {"key_multiple", 'm', "Undocumented",
   0, 0, 0, GET_NO_ARG, NO_ARG, 0, 0, 0, 0, 0, 0},
  {"key_prefix_pack", 'P', "Undocumented",
   0, 0, 0, GET_NO_ARG, NO_ARG, 0, 0, 0, 0, 0, 0},
  {"key_space_pack", 'p', "Undocumented",
   0, 0, 0, GET_NO_ARG, NO_ARG, 0, 0, 0, 0, 0, 0},
  {"key_varchar", 'w', "Test VARCHAR keys",
   0, 0, 0, GET_NO_ARG, NO_ARG, 0, 0, 0, 0, 0, 0},
  {"null_fields", 'N', "Define fields with NULL",
   &null_fields, &null_fields, 0, GET_BOOL, NO_ARG,
   0, 0, 0, 0, 0, 0},
  {"row_fixed_size", 'S', "Undocumented",
   0, 0, 0, GET_NO_ARG, NO_ARG, 0, 0, 0, 0, 0, 0},
  {"row_pointer_size", 'R', "Undocumented", &rec_pointer_size,
   &rec_pointer_size, 0, GET_INT, REQUIRED_ARG, 0, 0, 0, 0, 0, 0},
  {"silent", 's', "Undocumented",
   &silent, &silent, 0, GET_BOOL, NO_ARG, 0, 0, 0, 0, 0, 0},
  {"skip_update", 'U', "Undocumented", &skip_update,
   &skip_update, 0, GET_BOOL, NO_ARG, 0, 0, 0, 0, 0, 0},
  {"unique", 'C', "Undocumented", &opt_unique, &opt_unique, 0,
   GET_BOOL, NO_ARG, 0, 0, 0, 0, 0, 0},
  {"update_rows", 'u', "Undocumented", &update_count,
   &update_count, 0, GET_UINT, REQUIRED_ARG, 1000, 0, 0, 0, 0, 0},
  {"verbose", 'v', "Be more verbose", &verbose, &verbose, 0,
   GET_BOOL, NO_ARG, 0, 0, 0, 0, 0, 0},
  {"version", 'V', "Print version number and exit",
   0, 0, 0, GET_NO_ARG, NO_ARG, 0, 0, 0, 0, 0, 0},
  { 0, 0, 0, 0, 0, 0, GET_NO_ARG, NO_ARG, 0, 0, 0, 0, 0, 0}
};
