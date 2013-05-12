\name{omp_set_num_threads}
\alias{omp_set_num_threads}
\alias{OpenMPController}

\title{
Set number of OpenMP threads
}
\description{
Sets the number of OpenMP threads to be used.
This may be useful, for example, when linking against a vendor
optimised BLAS/LAPACK library (e.g. the AMD Core Math
Library), since the defaults used by those libraries may not
be highly performant.
}
\usage{
omp_set_num_threads(n)
}
\arguments{
  \item{n}{  
    Integer, number of threads
  }
}
\author{
The R interface was written by Simon Guest.
}
\examples{
omp_set_num_threads(2)

# do something requiring 2 OMP threads

omp_set_num_threads(4)

# do something else requiring 4 OMP threads
}
