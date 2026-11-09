#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscts.h>
#include <petscts.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscconvestusets_ PETSCCONVESTUSETS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscconvestusets_ petscconvestusets
#endif
PETSC_EXTERN void petscconvestusets_(PetscConvEst *ce, PetscBool *checkTemporal, PetscErrorCode *ierr)
{
  *ierr = PetscConvEstUseTS(*ce, *checkTemporal ? PETSC_TRUE : PETSC_FALSE);
  if (*ierr) return;
}
