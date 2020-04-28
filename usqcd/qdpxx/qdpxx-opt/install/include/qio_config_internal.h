/* include/qio_config_internal.h.  Generated from qio_config_internal.h.in by configure.  */
/* include/qio_config_internal.h.in.  Generated from configure.ac by autoheader.  */

/* Define to 1 if fseeko (and presumably ftello) exists and is declared. */
#define HAVE_FSEEKO 1

/* Define to 1 if you have the <inttypes.h> header file. */
#define HAVE_INTTYPES_H 1

/* Define to 1 if you have the <malloc.h> header file. */
#define HAVE_MALLOC_H 1

/* Define to 1 if you have the <memory.h> header file. */
#define HAVE_MEMORY_H 1

/* Define to 1 if you have the `QMP_route' function. */
/* #undef HAVE_QMP_ROUTE */

/* Define to 1 if you have the <stdint.h> header file. */
#define HAVE_STDINT_H 1

/* Define to 1 if you have the <stdlib.h> header file. */
#define HAVE_STDLIB_H 1

/* Define to 1 if you have the <strings.h> header file. */
#define HAVE_STRINGS_H 1

/* Define to 1 if you have the <string.h> header file. */
#define HAVE_STRING_H 1

/* Define to 1 if you have the <sys/stat.h> header file. */
#define HAVE_SYS_STAT_H 1

/* Define to 1 if you have the <sys/types.h> header file. */
#define HAVE_SYS_TYPES_H 1

/* Define to 1 if the system has the type `uint16_t'. */
#define HAVE_UINT16_T 1

/* Define to 1 if the system has the type `uint32_t'. */
#define HAVE_UINT32_T 1

/* Define to 1 if the system has the type `uint64_t'. */
#define HAVE_UINT64_T 1

/* Define to 1 if you have the <unistd.h> header file. */
#define HAVE_UNISTD_H 1

/* Define to 1 if your C compiler doesn't accept -c and -o together. */
/* #undef NO_MINUS_C_MINUS_O */

/* Name of package */
#define PACKAGE "qio"

/* Define to the address where bug reports for this package should be sent. */
#define PACKAGE_BUGREPORT "detar@physics.utah.edu"

/* Define to the full name of this package. */
#define PACKAGE_NAME "qio"

/* Define to the full name and version of this package. */
#define PACKAGE_STRING "qio 2.5.0"

/* Define to the one symbol short name of this package. */
#define PACKAGE_TARNAME "qio"

/* Define to the home page for this package. */
#define PACKAGE_URL ""

/* Define to the version of this package. */
#define PACKAGE_VERSION "2.5.0"

/* Maximum DML buffer size in bytes */
#define QIO_DML_BUF_BYTES 262144

/* Enables DML output buffering of sites */
/* #undef QIO_USE_DML_OUT_BUFFERING */

/* Enable J. Osborns Fast DML route */
/* #undef QIO_USE_FAST_ROUTE */

/* Enable parallel file-system read */
/* #undef QIO_USE_PARALLEL_READ */

/* Enable parallel file-system write */
/* #undef QIO_USE_PARALLEL_WRITE */

/* Enable QMP_route if it exists */
/* #undef QIO_USE_QMP_ROUTE */

/* The size of `unsigned char', as computed by sizeof. */
/* #undef SIZEOF_UNSIGNED_CHAR */

/* The size of `unsigned int', as computed by sizeof. */
/* #undef SIZEOF_UNSIGNED_INT */

/* The size of `unsigned long', as computed by sizeof. */
/* #undef SIZEOF_UNSIGNED_LONG */

/* The size of `unsigned long long', as computed by sizeof. */
/* #undef SIZEOF_UNSIGNED_LONG_LONG */

/* The size of `unsigned short', as computed by sizeof. */
/* #undef SIZEOF_UNSIGNED_SHORT */

/* Define to 1 if you have the ANSI C header files. */
#define STDC_HEADERS 1

/* Version number of package */
#define VERSION "2.5.0"

/* Enable large inode numbers on Mac OS X 10.5.  */
#ifndef _DARWIN_USE_64_BIT_INODE
# define _DARWIN_USE_64_BIT_INODE 1
#endif

/* Number of bits in a file offset, on hosts where this is settable. */
/* #undef _FILE_OFFSET_BITS */

/* Define to 1 to make fseeko visible on some hosts (e.g. glibc 2.2). */
#define _LARGEFILE_SOURCE 1

/* Define for large files, on AIX-style hosts. */
/* #undef _LARGE_FILES */
