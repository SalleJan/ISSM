#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscmat.h>
#include <petscmat.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define matcreateseqbaijmkl_ MATCREATESEQBAIJMKL
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define matcreateseqbaijmkl_ matcreateseqbaijmkl
#endif
PETSC_EXTERN void matcreateseqbaijmkl_(MPI_Fint *comm, PetscInt *bs, PetscInt *m, PetscInt *n, PetscInt *nz, const PetscInt nnz[], Mat *A, PetscErrorCode *ierr)
{
  PetscBool null_A = !*(void**) A ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLINTEGER(nnz);
  CHKFORTRANNULLOBJECT(A);
  *ierr = MatCreateSeqBAIJMKL(MPI_Comm_f2c(*(comm)), *bs, *m, *n, *nz, nnz, A);
  if (*ierr) return;
  if (! null_A && !*(void**) A) *(void **) A = (void *)-2;
}
