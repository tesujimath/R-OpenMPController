#include <R.h>
#include <Rinternals.h>
#include <Rconfig.h>
#ifdef _OPENMP
#include <omp.h>
#endif

/* a C routine callable from R to set number of OpenMP threads
 * - does nothing on platforms which don't support OpenMP
 */
void omp_set_num_threads_ptr(int *np) {
#ifdef _OPENMP
  omp_set_num_threads(*np);
#endif
}

/* register native routine */
static R_NativePrimitiveArgType omp_set_num_threads_ptr_t[] = {
    INTSXP
};

static const R_CMethodDef cMethods[] = {
   {"omp_set_num_threads_ptr", (DL_FUNC) &omp_set_num_threads_ptr, 1, omp_set_num_threads_ptr_t},
   {NULL}
};

void
R_init_OpenMPController(DllInfo *info)
{
   R_registerRoutines(info, cMethods, NULL, NULL, NULL);
   R_useDynamicSymbols(info, FALSE);
}
