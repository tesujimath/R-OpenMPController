#include <omp.h>

/* a C routine callable from R to set number of OpenMP threads */
void omp_set_num_threads_ptr(int *np) {
  omp_set_num_threads(*np);
}
