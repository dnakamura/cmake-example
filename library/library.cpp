#include "config.h"
#include "library_public.h"

const char* library_function() {
#ifdef HEADER_CONFIG_OPTION
  return "HEADER_CONFIG_OPTION=ON";
#else
  return "HEADER_CONFIG_OPTION=OFF";
#endif
}
