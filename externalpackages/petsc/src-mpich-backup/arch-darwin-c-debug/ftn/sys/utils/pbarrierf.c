#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscsys.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscbarrier_ PETSCBARRIER
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscbarrier_ petscbarrier
#endif
PETSC_EXTERN void petscbarrier_(PetscObject *obj, PetscErrorCode *ierr)
{
  *ierr = PetscBarrier(*obj);
  if (*ierr) return;
}
