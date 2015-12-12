struct getargs args[] = {
#ifdef HAVE_DLOPEN
    { "check-library", 0, arg_string, &check_library,
      "library to load password check function from", "library" },
    { "check-function", 0, arg_string, &check_function,
      "password check function to load", "function" },
    { "policy-libraries", 0, arg_strings, &policy_libraries,
      "password check function to load", "function" },
#endif
    { "addresses", 0, arg_strings, &addresses_str,
      "addresses to listen on", "list of addresses" },
    { "detach", 0, arg_flag, &detach_from_console,
      "detach from console", NULL },
    { "daemon-child",       0 ,      arg_integer, &daemon_child,
      "private argument, do not use", NULL },
    { "keytab", 'k', arg_string, &keytab_str,
      "keytab to get authentication key from", "kspec" },
    { "config-file", 'c', arg_string, &config_file, NULL, NULL },
    { "realm", 'r', arg_string, &realm_str, "default realm", "realm" },
    { "port",  'p', arg_string, &port_str, "port", NULL },
    { "version", 0, arg_flag, &version_flag, NULL, NULL },
    { "help", 0, arg_flag, &help_flag, NULL, NULL }
};
