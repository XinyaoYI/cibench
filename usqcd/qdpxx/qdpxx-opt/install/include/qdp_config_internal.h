/* include/qdp_config_internal.h.  Generated from qdp_config_internal.h.in by configure.  */
/* include/qdp_config_internal.h.in.  Generated from configure.ac by autoheader.  */

/* Parallel-scalar architecture */
/* #undef ARCH_PARSCALAR */

/* Parallel-scalar with vector extensions layout */
/* #undef ARCH_PARSCALARVEC */

/* Scalar architecture */
#define ARCH_SCALAR 1

/* Scalar with vector extensions architecture */
/* #undef ARCH_SCALARVEC */

/* Double precision */
#define BASE_PRECISION 32

/* Build filedb */
#define BUILD_FILEDB /**/

/* Define to 1 if you have the `gethostname' function. */
#define HAVE_GETHOSTNAME 1

/* Define to 1 if you have the `QMP_abort' function. */
/* #undef HAVE_QMP_ABORT */

/* Define to 1 if you have the `QMP_error_exit' function. */
/* #undef HAVE_QMP_ERROR_EXIT */

/* Define to 1 if you have the `QMP_verbose' function. */
/* #undef HAVE_QMP_VERBOSE */

/* Define to 1 if you have the `strnlen' function. */
#define HAVE_STRNLEN 1

/* Name of package */
#define PACKAGE "qdp--"

/* Define to the address where bug reports for this package should be sent. */
#define PACKAGE_BUGREPORT "edwards@jlab.org"

/* Define to the full name of this package. */
#define PACKAGE_NAME "qdp++"

/* Define to the full name and version of this package. */
#define PACKAGE_STRING "qdp++ 1.44.0"

/* Define to the one symbol short name of this package. */
#define PACKAGE_TARNAME "qdp--"

/* Define to the home page for this package. */
#define PACKAGE_URL ""

/* Define to the version of this package. */
#define PACKAGE_VERSION "1.44.0"

/* Alignment for OLattice */
#define QDP_AC_ALIGNMENT_SIZE 16

/* Enable memory debugging */
/* #undef QDP_DEBUG_MEMORY */

/* Number of color components */
#define QDP_NC 3

/* Number of dimensions */
#define QDP_ND 4

/* Number of spin components */
#define QDP_NS 4

/* Enable 3DNOW instructions */
/* #undef QDP_USE_3DNOW */

/* Donot use Bagel QDP library for BLAS */
#define QDP_USE_BAGEL_QDP 0

/* Enable BGL opts */
#define QDP_USE_BLUEGENEL 1

/* Use checkerboarded layout */
#define QDP_USE_CB2_LAYOUT 1

/* Use hypercube checkerboard layout */
/* #undef QDP_USE_CB32_LAYOUT */

/* Use 3d checkerboarded layout */
/* #undef QDP_USE_CB3D_LAYOUT */

/* Use generic C optimizations */
#define QDP_USE_GENERIC_OPTS 1

/* Enable HDF5 support */
/* #undef QDP_USE_HDF5 */

/* Use lexicographic layout */
/* #undef QDP_USE_LEXICO_LAYOUT */

/* Enable LIBXML2 support */
#define QDP_USE_LIBXML2 1

/* Use OpenMP Threads */
/* #undef QDP_USE_OMP_THREADS */

/* Enable profiling */
/* #undef QDP_USE_PROFILING */

/* Use QMT Threads library */
/* #undef QDP_USE_QMT_THREADS */

/* Enable SSE instructions */
/* #undef QDP_USE_SSE */

/* Enable SSE2 instructions */
/* #undef QDP_USE_SSE2 */

/* Enable SSE3 instructions */
/* #undef QDP_USE_SSE3 */

/* Version number of package */
#define VERSION "1.44.0"
