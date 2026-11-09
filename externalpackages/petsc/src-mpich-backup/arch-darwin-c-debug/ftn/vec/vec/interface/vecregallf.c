#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscvec.h>
#include <petscvec.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define vecregisterall_ VECREGISTERALL
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define vecregisterall_ vecregisterall
#endif
PETSC_EXTERN void vecregisterall_(PetscErrorCode *ierr)
{
  *ierr = VecRegisterAll();
  if (*ierr) return;
}
