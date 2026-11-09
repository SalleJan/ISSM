#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscvec.h>
#include <petscvec.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define vectaggerregisterall_ VECTAGGERREGISTERALL
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define vectaggerregisterall_ vectaggerregisterall
#endif
PETSC_EXTERN void vectaggerregisterall_(PetscErrorCode *ierr)
{
  *ierr = VecTaggerRegisterAll();
  if (*ierr) return;
}
