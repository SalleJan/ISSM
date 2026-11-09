#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscksp.h>
#include <petscksp.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define kspgltrgetmineig_ KSPGLTRGETMINEIG
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define kspgltrgetmineig_ kspgltrgetmineig
#endif
PETSC_EXTERN void kspgltrgetmineig_(KSP *ksp, PetscReal *e_min, PetscErrorCode *ierr)
{
  CHKFORTRANNULLREAL(e_min);
  *ierr = KSPGLTRGetMinEig(*ksp, e_min);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscksp.h>
#include <petscksp.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define kspgltrgetlambda_ KSPGLTRGETLAMBDA
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define kspgltrgetlambda_ kspgltrgetlambda
#endif
PETSC_EXTERN void kspgltrgetlambda_(KSP *ksp, PetscReal *lambda, PetscErrorCode *ierr)
{
  CHKFORTRANNULLREAL(lambda);
  *ierr = KSPGLTRGetLambda(*ksp, lambda);
  if (*ierr) return;
}
