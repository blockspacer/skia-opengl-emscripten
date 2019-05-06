#ifndef cmakeconfig_h
#define cmakeconfig_h

/* Use pthreads. */
#cmakedefine HAVE_PTHREADS @HAVE_PTHREADS@

/* Use single threaded. */
#cmakedefine ENABLE_SINGLE_THREADED @ENABLE_SINGLE_THREADED@

#endif // cmakeconfig_h