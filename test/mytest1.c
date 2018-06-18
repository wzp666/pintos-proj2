/* Ensure that the executable of a running process cannot be
   modified. */

#include <syscall.h>
#include "tests/lib.h"
#include "tests/main.h"

void
test_main (void) 
{
  int handle;
  char buffer[16];
  
  CHECK ((handle = open ("mytest1")) > 1, "open \"mytest1\"");
  CHECK (read (handle, buffer, sizeof buffer) == (int) sizeof buffer,
         "read \"mytest1\"");
  CHECK (write (handle, buffer, sizeof buffer) == 0,
         "try to write \"mytest1\"");
}
