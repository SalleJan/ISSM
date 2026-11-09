#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscml.h>
#include <petscregressor.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscregressorinitializepackage_ PETSCREGRESSORINITIALIZEPACKAGE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscregressorinitializepackage_ petscregressorinitializepackage
#endif
PETSC_EXTERN void petscregressorinitializepackage_(PetscErrorCode *ierr)
{
  *ierr = PetscRegressorInitializePackage();
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscml.h>
#include <petscregressor.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscregressorfinalizepackage_ PETSCREGRESSORFINALIZEPACKAGE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscregressorfinalizepackage_ petscregressorfinalizepackage
#endif
PETSC_EXTERN void petscregressorfinalizepackage_(PetscErrorCode *ierr)
{
  *ierr = PetscRegressorFinalizePackage();
  if (*ierr) return;
}
