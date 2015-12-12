static const ACPI_DB_COMMAND_INFO   AcpiGbl_DbCommands[] =
{
    {"<NOT FOUND>",  0},
    {"<NULL>",       0},
    {"ALLOCATIONS",  0},
    {"ARGS",         0},
    {"ARGUMENTS",    0},
    {"BREAKPOINT",   1},
    {"BUSINFO",      0},
    {"CALL",         0},
    {"DEBUG",        1},
    {"DISASSEMBLE",  1},
    {"DISASM",       1},
    {"DUMP",         1},
    {"EVALUATE",     1},
    {"EXECUTE",      1},
    {"EXIT",         0},
    {"FIND",         1},
    {"GO",           0},
    {"HANDLERS",     0},
    {"HELP",         0},
    {"?",            0},
    {"HISTORY",      0},
    {"!",            1},
    {"!!",           0},
    {"INFORMATION",  0},
    {"INTEGRITY",    0},
    {"INTO",         0},
    {"LEVEL",        0},
    {"LIST",         0},
    {"LOCALS",       0},
    {"LOCKS",        0},
    {"METHODS",      0},
    {"NAMESPACE",    0},
    {"NOTIFY",       2},
    {"OBJECTS",      0},
    {"OSI",          0},
    {"OWNER",        1},
    {"PATHS",        0},
    {"PREDEFINED",   0},
    {"PREFIX",       0},
    {"QUIT",         0},
    {"REFERENCES",   1},
    {"RESOURCES",    0},
    {"RESULTS",      0},
    {"SET",          3},
    {"STATS",        1},
    {"STOP",         0},
    {"TABLES",       0},
    {"TEMPLATE",     1},
    {"TRACE",        1},
    {"TREE",         0},
    {"TYPE",         1},
#ifdef ACPI_APPLICATION
    {"ENABLEACPI",   0},
    {"EVENT",        1},
    {"GPE",          1},
    {"GPES",         0},
    {"SCI",          0},
    {"SLEEP",        0},

    {"CLOSE",        0},
    {"LOAD",         1},
    {"OPEN",         1},
    {"UNLOAD",       1},

    {"TERMINATE",    0},
    {"THREADS",      3},

    {"TEST",         1},
#endif
    {NULL,           0}
};
