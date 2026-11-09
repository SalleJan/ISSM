#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscmat.h>
#include <petscmat.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define matblockmatsetpreallocation_ MATBLOCKMATSETPREALLOCATION
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define matblockmatsetpreallocation_ matblockmatsetpreallocation
#endif
PETSC_EXTERN void matblockmatsetpreallocation_(Mat *B, PetscInt *bs, PetscInt *nz, const PetscInt nnz[], PetscErrorCode *ierr)
{
  CHKFORTRANNULLINTEGER(nnz);
  *ierr = MatBlockMatSetPreallocation(*B, *bs, *nz, nnz);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscmat.h>
#include <petscmat.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define matcreateblockmat_ MATCREATEBLOCKMAT
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define matcreateblockmat_ matcreateblockmat
#endif
PETSC_EXTERN void matcreateblockmat_(MPI_Fint *comm, PetscInt *m, PetscInt *n, PetscInt *bs, PetscInt *nz, PetscInt *nnz, Mat *A, PetscErrorCode *ierr)
{
  PetscBool null_A = !*(void**) A ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLINTEGER(nnz);
  CHKFORTRANNULLOBJECT(A);
  *ierr = MatCreateBlockMat(MPI_Comm_f2c(*(comm)), *m, *n, *bs, *nz, nnz, A);
  if (*ierr) return;
  if (! null_A && !*(void**) A) *(void **) A = (void *)-2;
}
