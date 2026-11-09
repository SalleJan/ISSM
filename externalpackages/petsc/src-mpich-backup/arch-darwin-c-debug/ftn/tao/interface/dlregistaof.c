#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petsctao.h>
#include <petsctao.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define taofinalizepackage_ TAOFINALIZEPACKAGE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define taofinalizepackage_ taofinalizepackage
#endif
PETSC_EXTERN void taofinalizepackage_(PetscErrorCode *ierr)
{
  *ierr = TaoFinalizePackage();
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petsctao.h>
#include <petsctao.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define taoinitializepackage_ TAOINITIALIZEPACKAGE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define taoinitializepackage_ taoinitializepackage
#endif
PETSC_EXTERN void taoinitializepackage_(PetscErrorCode *ierr)
{
  *ierr = TaoInitializePackage();
  if (*ierr) return;
}
