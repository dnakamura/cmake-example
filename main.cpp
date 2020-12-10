#include "library_public.h"
#include <stdio.h>

int main(int argc, char** argv) {
#if MY_CONFIG_OPTION
  puts("MY_CONFIG_OPTION=ON");
#else
  puts("MY_CONFIG_OPTION=OFF");
#endif
  puts(library_function());
  return 0;
}
