#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscsys.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscend_ PETSCEND
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscend_ petscend
#endif
PETSC_EXTERN void petscend_(PetscErrorCode *ierr)
{
  *ierr = PetscEnd();
  if (*ierr) return;
}
