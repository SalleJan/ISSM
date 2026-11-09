#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsnes.h>
#include <petscsnes.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define kspmonitorsnesresidual_ KSPMONITORSNESRESIDUAL
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define kspmonitorsnesresidual_ kspmonitorsnesresidual
#endif
PETSC_EXTERN void kspmonitorsnesresidual_(KSP *ksp, PetscInt *n, PetscReal *rnorm, PetscViewerAndFormat **vf, PetscErrorCode *ierr)
{
  *ierr = KSPMonitorSNESResidual(*ksp, *n, *rnorm, *vf);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsnes.h>
#include <petscsnes.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define kspmonitorsnesresidualdrawlg_ KSPMONITORSNESRESIDUALDRAWLG
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define kspmonitorsnesresidualdrawlg_ kspmonitorsnesresidualdrawlg
#endif
PETSC_EXTERN void kspmonitorsnesresidualdrawlg_(KSP *ksp, PetscInt *n, PetscReal *rnorm, PetscViewerAndFormat **vf, PetscErrorCode *ierr)
{
  *ierr = KSPMonitorSNESResidualDrawLG(*ksp, *n, *rnorm, *vf);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsnes.h>
#include <petscsnes.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define snesmonitorsolution_ SNESMONITORSOLUTION
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define snesmonitorsolution_ snesmonitorsolution
#endif
PETSC_EXTERN void snesmonitorsolution_(SNES *snes, PetscInt *its, PetscReal *fgnorm, PetscViewerAndFormat **vf, PetscErrorCode *ierr)
{
  *ierr = SNESMonitorSolution(*snes, *its, *fgnorm, *vf);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsnes.h>
#include <petscsnes.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define snesmonitorresidual_ SNESMONITORRESIDUAL
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define snesmonitorresidual_ snesmonitorresidual
#endif
PETSC_EXTERN void snesmonitorresidual_(SNES *snes, PetscInt *its, PetscReal *fgnorm, PetscViewerAndFormat **vf, PetscErrorCode *ierr)
{
  *ierr = SNESMonitorResidual(*snes, *its, *fgnorm, *vf);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsnes.h>
#include <petscsnes.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define snesmonitorsolutionupdate_ SNESMONITORSOLUTIONUPDATE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define snesmonitorsolutionupdate_ snesmonitorsolutionupdate
#endif
PETSC_EXTERN void snesmonitorsolutionupdate_(SNES *snes, PetscInt *its, PetscReal *fgnorm, PetscViewerAndFormat **vf, PetscErrorCode *ierr)
{
  *ierr = SNESMonitorSolutionUpdate(*snes, *its, *fgnorm, *vf);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsnes.h>
#include <petscsnes.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define snesmonitordefaultsetup_ SNESMONITORDEFAULTSETUP
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define snesmonitordefaultsetup_ snesmonitordefaultsetup
#endif
PETSC_EXTERN void snesmonitordefaultsetup_(SNES *snes, PetscViewerAndFormat **vf, PetscErrorCode *ierr)
{
  *ierr = SNESMonitorDefaultSetUp(*snes, *vf);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsnes.h>
#include <petscsnes.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define snesmonitordefault_ SNESMONITORDEFAULT
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define snesmonitordefault_ snesmonitordefault
#endif
PETSC_EXTERN void snesmonitordefault_(SNES *snes, PetscInt *its, PetscReal *fgnorm, PetscViewerAndFormat **vf, PetscErrorCode *ierr)
{
  *ierr = SNESMonitorDefault(*snes, *its, *fgnorm, *vf);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsnes.h>
#include <petscsnes.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define snesmonitorscaling_ SNESMONITORSCALING
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define snesmonitorscaling_ snesmonitorscaling
#endif
PETSC_EXTERN void snesmonitorscaling_(SNES *snes, PetscInt *its, PetscReal *fgnorm, PetscViewerAndFormat **vf, PetscErrorCode *ierr)
{
  *ierr = SNESMonitorScaling(*snes, *its, *fgnorm, *vf);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsnes.h>
#include <petscsnes.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define snesmonitorjacupdatespectrum_ SNESMONITORJACUPDATESPECTRUM
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define snesmonitorjacupdatespectrum_ snesmonitorjacupdatespectrum
#endif
PETSC_EXTERN void snesmonitorjacupdatespectrum_(SNES *snes, PetscInt *it, PetscReal *fnorm, PetscViewerAndFormat **vf, PetscErrorCode *ierr)
{
  *ierr = SNESMonitorJacUpdateSpectrum(*snes, *it, *fnorm, *vf);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsnes.h>
#include <petscsnes.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define snesmonitorrange_ SNESMONITORRANGE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define snesmonitorrange_ snesmonitorrange
#endif
PETSC_EXTERN void snesmonitorrange_(SNES *snes, PetscInt *it, PetscReal *rnorm, PetscViewerAndFormat **vf, PetscErrorCode *ierr)
{
  *ierr = SNESMonitorRange(*snes, *it, *rnorm, *vf);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsnes.h>
#include <petscsnes.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define snesmonitorratio_ SNESMONITORRATIO
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define snesmonitorratio_ snesmonitorratio
#endif
PETSC_EXTERN void snesmonitorratio_(SNES *snes, PetscInt *its, PetscReal *fgnorm, PetscViewerAndFormat **vf, PetscErrorCode *ierr)
{
  *ierr = SNESMonitorRatio(*snes, *its, *fgnorm, *vf);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsnes.h>
#include <petscsnes.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define snesmonitorratiosetup_ SNESMONITORRATIOSETUP
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define snesmonitorratiosetup_ snesmonitorratiosetup
#endif
PETSC_EXTERN void snesmonitorratiosetup_(SNES *snes, PetscViewerAndFormat **vf, PetscErrorCode *ierr)
{
  *ierr = SNESMonitorRatioSetUp(*snes, *vf);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsnes.h>
#include <petscsnes.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define snesmonitordefaultshort_ SNESMONITORDEFAULTSHORT
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define snesmonitordefaultshort_ snesmonitordefaultshort
#endif
PETSC_EXTERN void snesmonitordefaultshort_(SNES *snes, PetscInt *its, PetscReal *fgnorm, PetscViewerAndFormat **vf, PetscErrorCode *ierr)
{
  *ierr = SNESMonitorDefaultShort(*snes, *its, *fgnorm, *vf);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsnes.h>
#include <petscsnes.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define snesmonitordefaultfield_ SNESMONITORDEFAULTFIELD
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define snesmonitordefaultfield_ snesmonitordefaultfield
#endif
PETSC_EXTERN void snesmonitordefaultfield_(SNES *snes, PetscInt *its, PetscReal *fgnorm, PetscViewerAndFormat **vf, PetscErrorCode *ierr)
{
  *ierr = SNESMonitorDefaultField(*snes, *its, *fgnorm, *vf);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsnes.h>
#include <petscsnes.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define snesconvergeddefault_ SNESCONVERGEDDEFAULT
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define snesconvergeddefault_ snesconvergeddefault
#endif
PETSC_EXTERN void snesconvergeddefault_(SNES *snes, PetscInt *it, PetscReal *xnorm, PetscReal *snorm, PetscReal *fnorm, SNESConvergedReason *reason, PetscCtx ctx, PetscErrorCode *ierr)
{
  *ierr = SNESConvergedDefault(*snes, *it, *xnorm, *snorm, *fnorm, reason, ctx);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsnes.h>
#include <petscsnes.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define snesconvergedskip_ SNESCONVERGEDSKIP
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define snesconvergedskip_ snesconvergedskip
#endif
PETSC_EXTERN void snesconvergedskip_(SNES *snes, PetscInt *it, PetscReal *xnorm, PetscReal *snorm, PetscReal *fnorm, SNESConvergedReason *reason, PetscCtx ctx, PetscErrorCode *ierr)
{
  *ierr = SNESConvergedSkip(*snes, *it, *xnorm, *snorm, *fnorm, reason, ctx);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsnes.h>
#include <petscsnes.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define snessetworkvecs_ SNESSETWORKVECS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define snessetworkvecs_ snessetworkvecs
#endif
PETSC_EXTERN void snessetworkvecs_(SNES *snes, PetscInt *nw, PetscErrorCode *ierr)
{
  *ierr = SNESSetWorkVecs(*snes, *nw);
  if (*ierr) return;
}
