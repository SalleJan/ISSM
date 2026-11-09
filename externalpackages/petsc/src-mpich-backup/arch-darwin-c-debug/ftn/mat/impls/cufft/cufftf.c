#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscmat.h>
#include <petscmat.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define matcreateseqcufft_ MATCREATESEQCUFFT
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define matcreateseqcufft_ matcreateseqcufft
#endif
PETSC_EXTERN void matcreateseqcufft_(MPI_Fint *comm, PetscInt *ndim, const PetscInt dim[], Mat *A, PetscErrorCode *ierr)
{
  PetscBool null_A = !*(void**) A ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLINTEGER(dim);
  CHKFORTRANNULLOBJECT(A);
  *ierr = MatCreateSeqCUFFT(MPI_Comm_f2c(*(comm)), *ndim, dim, A);
  if (*ierr) return;
  if (! null_A && !*(void**) A) *(void **) A = (void *)-2;
}
