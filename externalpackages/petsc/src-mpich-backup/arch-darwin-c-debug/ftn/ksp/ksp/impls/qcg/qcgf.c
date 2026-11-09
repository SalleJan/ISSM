#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscksp.h>
#include <petscksp.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define kspqcgsettrustregionradius_ KSPQCGSETTRUSTREGIONRADIUS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define kspqcgsettrustregionradius_ kspqcgsettrustregionradius
#endif
PETSC_EXTERN void kspqcgsettrustregionradius_(KSP *ksp, PetscReal *delta, PetscErrorCode *ierr)
{
  *ierr = KSPQCGSetTrustRegionRadius(*ksp, *delta);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscksp.h>
#include <petscksp.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define kspqcggettrialstepnorm_ KSPQCGGETTRIALSTEPNORM
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define kspqcggettrialstepnorm_ kspqcggettrialstepnorm
#endif
PETSC_EXTERN void kspqcggettrialstepnorm_(KSP *ksp, PetscReal *tsnorm, PetscErrorCode *ierr)
{
  CHKFORTRANNULLREAL(tsnorm);
  *ierr = KSPQCGGetTrialStepNorm(*ksp, tsnorm);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscksp.h>
#include <petscksp.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define kspqcggetquadratic_ KSPQCGGETQUADRATIC
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define kspqcggetquadratic_ kspqcggetquadratic
#endif
PETSC_EXTERN void kspqcggetquadratic_(KSP *ksp, PetscReal *quadratic, PetscErrorCode *ierr)
{
  CHKFORTRANNULLREAL(quadratic);
  *ierr = KSPQCGGetQuadratic(*ksp, quadratic);
  if (*ierr) return;
}
