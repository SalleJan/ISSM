#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petsctao.h>
#include <petsctaolinesearch.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define taolinesearchfinalizepackage_ TAOLINESEARCHFINALIZEPACKAGE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define taolinesearchfinalizepackage_ taolinesearchfinalizepackage
#endif
PETSC_EXTERN void taolinesearchfinalizepackage_(PetscErrorCode *ierr)
{
  *ierr = TaoLineSearchFinalizePackage();
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petsctao.h>
#include <petsctaolinesearch.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define taolinesearchinitializepackage_ TAOLINESEARCHINITIALIZEPACKAGE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define taolinesearchinitializepackage_ taolinesearchinitializepackage
#endif
PETSC_EXTERN void taolinesearchinitializepackage_(PetscErrorCode *ierr)
{
  *ierr = TaoLineSearchInitializePackage();
  if (*ierr) return;
}
