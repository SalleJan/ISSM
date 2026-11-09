#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscsys.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscrandomfinalizepackage_ PETSCRANDOMFINALIZEPACKAGE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscrandomfinalizepackage_ petscrandomfinalizepackage
#endif
PETSC_EXTERN void petscrandomfinalizepackage_(PetscErrorCode *ierr)
{
  *ierr = PetscRandomFinalizePackage();
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscsys.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscrandominitializepackage_ PETSCRANDOMINITIALIZEPACKAGE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscrandominitializepackage_ petscrandominitializepackage
#endif
PETSC_EXTERN void petscrandominitializepackage_(PetscErrorCode *ierr)
{
  *ierr = PetscRandomInitializePackage();
  if (*ierr) return;
}
