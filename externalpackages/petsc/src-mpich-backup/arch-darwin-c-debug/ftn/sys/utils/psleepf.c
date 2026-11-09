#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscsys.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscsleep_ PETSCSLEEP
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscsleep_ petscsleep
#endif
PETSC_EXTERN void petscsleep_(PetscReal *s, PetscErrorCode *ierr)
{
  *ierr = PetscSleep(*s);
  if (*ierr) return;
}
