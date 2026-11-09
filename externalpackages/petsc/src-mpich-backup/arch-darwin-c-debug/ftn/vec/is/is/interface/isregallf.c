#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscvec.h>
#include <petscis.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define isregisterall_ ISREGISTERALL
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define isregisterall_ isregisterall
#endif
PETSC_EXTERN void isregisterall_(PetscErrorCode *ierr)
{
  *ierr = ISRegisterAll();
  if (*ierr) return;
}
