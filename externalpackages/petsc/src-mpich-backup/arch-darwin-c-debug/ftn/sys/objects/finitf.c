#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscsys.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscinitializefortran_ PETSCINITIALIZEFORTRAN
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscinitializefortran_ petscinitializefortran
#endif
PETSC_EXTERN void petscinitializefortran_(PetscErrorCode *ierr)
{
  *ierr = PetscInitializeFortran();
  if (*ierr) return;
}
