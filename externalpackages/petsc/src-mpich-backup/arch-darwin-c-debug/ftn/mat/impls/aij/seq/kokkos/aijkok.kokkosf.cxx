#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscmat.h>
#include <petscmat.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define matcreateseqaijkokkos_ MATCREATESEQAIJKOKKOS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define matcreateseqaijkokkos_ matcreateseqaijkokkos
#endif
PETSC_EXTERN void matcreateseqaijkokkos_(MPI_Fint *comm, PetscInt *m, PetscInt *n, PetscInt *nz, const PetscInt nnz[], Mat *A, PetscErrorCode *ierr)
{
  PetscBool null_A = !*(void**) A ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLINTEGER(nnz);
  CHKFORTRANNULLOBJECT(A);
  *ierr = MatCreateSeqAIJKokkos(MPI_Comm_f2c(*(comm)), *m, *n, *nz, nnz, A);
  if (*ierr) return;
  if (! null_A && !*(void**) A) *(void **) A = (void *)-2;
}
