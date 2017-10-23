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
