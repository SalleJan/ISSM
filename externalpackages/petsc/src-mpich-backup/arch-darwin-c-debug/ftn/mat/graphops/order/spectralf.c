#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscmat.h>
#include <petscmat.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define matcreatelaplacian_ MATCREATELAPLACIAN
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define matcreatelaplacian_ matcreatelaplacian
#endif
PETSC_EXTERN void matcreatelaplacian_(Mat *A, PetscReal *tol, PetscBool *weighted, Mat *L, PetscErrorCode *ierr)
{
  PetscBool null_L = !*(void**) L ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(L);
  *ierr = MatCreateLaplacian(*A, *tol, *weighted ? PETSC_TRUE : PETSC_FALSE, L);
  if (*ierr) return;
  if (! null_L && !*(void**) L) *(void **) L = (void *)-2;
}
