#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscvec.h>
#include <petscsys.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscnvshmemfinalize_ PETSCNVSHMEMFINALIZE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscnvshmemfinalize_ petscnvshmemfinalize
#endif
PETSC_EXTERN void petscnvshmemfinalize_(PetscErrorCode *ierr)
{
  *ierr = PetscNvshmemFinalize();
  if (*ierr) return;
}
