#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscksp.h>
#include <petscpc.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define pcgalerkinsetrestriction_ PCGALERKINSETRESTRICTION
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define pcgalerkinsetrestriction_ pcgalerkinsetrestriction
#endif
PETSC_EXTERN void pcgalerkinsetrestriction_(PC *pc, Mat *R, PetscErrorCode *ierr)
{
  *ierr = PCGalerkinSetRestriction(*pc, *R);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscksp.h>
#include <petscpc.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define pcgalerkinsetinterpolation_ PCGALERKINSETINTERPOLATION
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define pcgalerkinsetinterpolation_ pcgalerkinsetinterpolation
#endif
PETSC_EXTERN void pcgalerkinsetinterpolation_(PC *pc, Mat *P, PetscErrorCode *ierr)
{
  *ierr = PCGalerkinSetInterpolation(*pc, *P);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscksp.h>
#include <petscksp.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define pcgalerkingetksp_ PCGALERKINGETKSP
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define pcgalerkingetksp_ pcgalerkingetksp
#endif
PETSC_EXTERN void pcgalerkingetksp_(PC *pc, KSP *ksp, PetscErrorCode *ierr)
{
  PetscBool null_ksp = !*(void**) ksp ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(ksp);
  *ierr = PCGalerkinGetKSP(*pc, ksp);
  if (*ierr) return;
  if (! null_ksp && !*(void**) ksp) *(void **) ksp = (void *)-2;
}
