#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscksp.h>
#include <petscksp.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define kspminressetuseqlp_ KSPMINRESSETUSEQLP
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define kspminressetuseqlp_ kspminressetuseqlp
#endif
PETSC_EXTERN void kspminressetuseqlp_(KSP *ksp, PetscBool *qlp, PetscErrorCode *ierr)
{
  *ierr = KSPMINRESSetUseQLP(*ksp, *qlp ? PETSC_TRUE : PETSC_FALSE);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscksp.h>
#include <petscksp.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define kspminressetradius_ KSPMINRESSETRADIUS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define kspminressetradius_ kspminressetradius
#endif
PETSC_EXTERN void kspminressetradius_(KSP *ksp, PetscReal *radius, PetscErrorCode *ierr)
{
  *ierr = KSPMINRESSetRadius(*ksp, *radius);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscksp.h>
#include <petscksp.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define kspminresgetuseqlp_ KSPMINRESGETUSEQLP
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define kspminresgetuseqlp_ kspminresgetuseqlp
#endif
PETSC_EXTERN void kspminresgetuseqlp_(KSP *ksp, PetscBool *qlp, PetscErrorCode *ierr)
{
  CHKFORTRANNULLBOOL(qlp);
  *ierr = KSPMINRESGetUseQLP(*ksp, qlp);
  if (*ierr) return;
}
