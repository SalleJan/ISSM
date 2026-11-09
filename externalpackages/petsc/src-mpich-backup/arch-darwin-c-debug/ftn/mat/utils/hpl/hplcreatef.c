#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscmat.h>
#include <petscmat.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define matsethpl_ MATSETHPL
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define matsethpl_ matsethpl
#endif
PETSC_EXTERN void matsethpl_(Mat *A, int *iseed, PetscErrorCode *ierr)
{
  *ierr = MatSetHPL(*A, *iseed);
  if (*ierr) return;
}
