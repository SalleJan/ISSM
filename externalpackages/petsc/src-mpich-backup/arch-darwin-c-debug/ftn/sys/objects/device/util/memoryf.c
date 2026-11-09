#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscdevice.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscgetmemtype_ PETSCGETMEMTYPE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscgetmemtype_ petscgetmemtype
#endif
PETSC_EXTERN void petscgetmemtype_(const void *ptr, PetscMemType *type, PetscErrorCode *ierr)
{
  *ierr = PetscGetMemType(ptr, type);
  if (*ierr) return;
}
