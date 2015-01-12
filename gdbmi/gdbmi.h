//gdbmi related symbols
//async outputs
#define EXEC '*'
#define STATUS '+'
#define NOTIFY '='
//stream output
#define CONSOLE '~'
#define TARGET '@'
#define LOG '&'

#define END_OUTPUT_RECORD "(gdb)\n"

int gdbInput;//the fd we write to
int gdbOutput;//the fd we read from
int gdbPID;//the pid of gdb, NOT the pid of gdbs debug-e
#include "gdb.c"
