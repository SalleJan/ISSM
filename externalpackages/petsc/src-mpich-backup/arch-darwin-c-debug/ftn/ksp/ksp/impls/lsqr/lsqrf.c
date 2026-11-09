#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscksp.h>
#include <petscksp.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define ksplsqrsetcomputestandarderrorvec_ KSPLSQRSETCOMPUTESTANDARDERRORVEC
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define ksplsqrsetcomputestandarderrorvec_ ksplsqrsetcomputestandarderrorvec
#endif
PETSC_EXTERN void ksplsqrsetcomputestandarderrorvec_(KSP *ksp, PetscBool *flg, PetscErrorCode *ierr)
{
  *ierr = KSPLSQRSetComputeStandardErrorVec(*ksp, *flg ? PETSC_TRUE : PETSC_FALSE);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscksp.h>
#include <petscksp.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define ksplsqrsetexactmatnorm_ KSPLSQRSETEXACTMATNORM
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define ksplsqrsetexactmatnorm_ ksplsqrsetexactmatnorm
#endif
PETSC_EXTERN void ksplsqrsetexactmatnorm_(KSP *ksp, PetscBool *flg, PetscErrorCode *ierr)
{
  *ierr = KSPLSQRSetExactMatNorm(*ksp, *flg ? PETSC_TRUE : PETSC_FALSE);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscksp.h>
#include <petscksp.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define ksplsqrgetstandarderrorvec_ KSPLSQRGETSTANDARDERRORVEC
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define ksplsqrgetstandarderrorvec_ ksplsqrgetstandarderrorvec
#endif
PETSC_EXTERN void ksplsqrgetstandarderrorvec_(KSP *ksp, Vec *se, PetscErrorCode *ierr)
{
  PetscBool null_se = !*(void**) se ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(se);
  *ierr = KSPLSQRGetStandardErrorVec(*ksp, se);
  if (*ierr) return;
  if (! null_se && !*(void**) se) *(void **) se = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscksp.h>
#include <petscksp.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define ksplsqrgetnorms_ KSPLSQRGETNORMS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define ksplsqrgetnorms_ ksplsqrgetnorms
#endif
PETSC_EXTERN void ksplsqrgetnorms_(KSP *ksp, PetscReal *arnorm, PetscReal *anorm, PetscErrorCode *ierr)
{
  CHKFORTRANNULLREAL(arnorm);
  CHKFORTRANNULLREAL(anorm);
  *ierr = KSPLSQRGetNorms(*ksp, arnorm, anorm);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscksp.h>
#include <petscksp.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define ksplsqrmonitorresidual_ KSPLSQRMONITORRESIDUAL
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define ksplsqrmonitorresidual_ ksplsqrmonitorresidual
#endif
PETSC_EXTERN void ksplsqrmonitorresidual_(KSP *ksp, PetscInt *n, PetscReal *rnorm, PetscViewerAndFormat **vf, PetscErrorCode *ierr)
{
  *ierr = KSPLSQRMonitorResidual(*ksp, *n, *rnorm, *vf);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscksp.h>
#include <petscksp.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define ksplsqrmonitorresidualdrawlg_ KSPLSQRMONITORRESIDUALDRAWLG
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define ksplsqrmonitorresidualdrawlg_ ksplsqrmonitorresidualdrawlg
#endif
PETSC_EXTERN void ksplsqrmonitorresidualdrawlg_(KSP *ksp, PetscInt *n, PetscReal *rnorm, PetscViewerAndFormat **vf, PetscErrorCode *ierr)
{
  *ierr = KSPLSQRMonitorResidualDrawLG(*ksp, *n, *rnorm, *vf);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscksp.h>
#include <petscksp.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define ksplsqrconvergeddefault_ KSPLSQRCONVERGEDDEFAULT
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define ksplsqrconvergeddefault_ ksplsqrconvergeddefault
#endif
PETSC_EXTERN void ksplsqrconvergeddefault_(KSP *ksp, PetscInt *n, PetscReal *rnorm, KSPConvergedReason *reason, PetscCtx ctx, PetscErrorCode *ierr)
{
  *ierr = KSPLSQRConvergedDefault(*ksp, *n, *rnorm, reason, ctx);
  if (*ierr) return;
}
