#if defined(WIN32)
#if !defined(LIBRARY_INTERNAL)
#define LIBRARY_INTERFACE __declspec(dllimport)
#else
#define LIBRARY_INTERFACE __declspec(dllexport)
#endif
#else // __WIN32__
#define LIBRARY_INTERFACE
#endif

LIBRARY_INTERFACE const char* library_function();
