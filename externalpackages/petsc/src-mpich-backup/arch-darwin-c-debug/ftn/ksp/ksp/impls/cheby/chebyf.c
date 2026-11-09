#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscksp.h>
#include <petscksp.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define kspchebyshevseteigenvalues_ KSPCHEBYSHEVSETEIGENVALUES
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define kspchebyshevseteigenvalues_ kspchebyshevseteigenvalues
#endif
PETSC_EXTERN void kspchebyshevseteigenvalues_(KSP *ksp, PetscReal *emax, PetscReal *emin, PetscErrorCode *ierr)
{
  *ierr = KSPChebyshevSetEigenvalues(*ksp, *emax, *emin);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscksp.h>
#include <petscksp.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define kspchebyshevesteigset_ KSPCHEBYSHEVESTEIGSET
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define kspchebyshevesteigset_ kspchebyshevesteigset
#endif
PETSC_EXTERN void kspchebyshevesteigset_(KSP *ksp, PetscReal *a, PetscReal *b, PetscReal *c, PetscReal *d, PetscErrorCode *ierr)
{
  *ierr = KSPChebyshevEstEigSet(*ksp, *a, *b, *c, *d);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscksp.h>
#include <petscksp.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define kspchebyshevesteigsetusenoisy_ KSPCHEBYSHEVESTEIGSETUSENOISY
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define kspchebyshevesteigsetusenoisy_ kspchebyshevesteigsetusenoisy
#endif
PETSC_EXTERN void kspchebyshevesteigsetusenoisy_(KSP *ksp, PetscBool *use, PetscErrorCode *ierr)
{
  *ierr = KSPChebyshevEstEigSetUseNoisy(*ksp, *use ? PETSC_TRUE : PETSC_FALSE);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscksp.h>
#include <petscksp.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define kspchebyshevesteiggetksp_ KSPCHEBYSHEVESTEIGGETKSP
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define kspchebyshevesteiggetksp_ kspchebyshevesteiggetksp
#endif
PETSC_EXTERN void kspchebyshevesteiggetksp_(KSP *ksp, KSP *kspest, PetscErrorCode *ierr)
{
  PetscBool null_kspest = !*(void**) kspest ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(kspest);
  *ierr = KSPChebyshevEstEigGetKSP(*ksp, kspest);
  if (*ierr) return;
  if (! null_kspest && !*(void**) kspest) *(void **) kspest = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscksp.h>
#include <petscksp.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define kspchebyshevsetkind_ KSPCHEBYSHEVSETKIND
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define kspchebyshevsetkind_ kspchebyshevsetkind
#endif
PETSC_EXTERN void kspchebyshevsetkind_(KSP *ksp, KSPChebyshevKind *kind, PetscErrorCode *ierr)
{
  *ierr = KSPChebyshevSetKind(*ksp, *kind);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscksp.h>
#include <petscksp.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define kspchebyshevgetkind_ KSPCHEBYSHEVGETKIND
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define kspchebyshevgetkind_ kspchebyshevgetkind
#endif
PETSC_EXTERN void kspchebyshevgetkind_(KSP *ksp, KSPChebyshevKind *kind, PetscErrorCode *ierr)
{
  *ierr = KSPChebyshevGetKind(*ksp, kind);
  if (*ierr) return;
}
