#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscmat.h>
#include <petscmat.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define matcreateseqdensecuda_ MATCREATESEQDENSECUDA
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define matcreateseqdensecuda_ matcreateseqdensecuda
#endif
PETSC_EXTERN void matcreateseqdensecuda_(MPI_Fint *comm, PetscInt *m, PetscInt *n, PetscScalar *data, Mat *A, PetscErrorCode *ierr)
{
  PetscBool null_A = !*(void**) A ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLSCALAR(data);
  CHKFORTRANNULLOBJECT(A);
  *ierr = MatCreateSeqDenseCUDA(MPI_Comm_f2c(*(comm)), *m, *n, data, A);
  if (*ierr) return;
  if (! null_A && !*(void**) A) *(void **) A = (void *)-2;
}
