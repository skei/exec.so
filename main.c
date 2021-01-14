#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

#ifdef INTERPRETER
  const char interp[] __attribute__ ((section(".interp"))) = INTERPRETER;
#endif

void entry_point(void) {
  fprintf(stderr, "hello executable shared object world!\n");
  _exit(EXIT_SUCCESS);
}

