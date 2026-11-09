#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscts.h>
#include <petscts.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define tsfinalizepackage_ TSFINALIZEPACKAGE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define tsfinalizepackage_ tsfinalizepackage
#endif
PETSC_EXTERN void tsfinalizepackage_(PetscErrorCode *ierr)
{
  *ierr = TSFinalizePackage();
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscts.h>
#include <petscts.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define tsinitializepackage_ TSINITIALIZEPACKAGE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define tsinitializepackage_ tsinitializepackage
#endif
PETSC_EXTERN void tsinitializepackage_(PetscErrorCode *ierr)
{
  *ierr = TSInitializePackage();
  if (*ierr) return;
}
