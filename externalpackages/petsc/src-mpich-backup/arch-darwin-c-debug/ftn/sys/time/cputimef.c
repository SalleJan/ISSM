#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petsctime.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscgetcputime_ PETSCGETCPUTIME
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscgetcputime_ petscgetcputime
#endif
PETSC_EXTERN void petscgetcputime_(PetscLogDouble *t, PetscErrorCode *ierr)
{
  *ierr = PetscGetCPUTime(t);
  if (*ierr) return;
}
