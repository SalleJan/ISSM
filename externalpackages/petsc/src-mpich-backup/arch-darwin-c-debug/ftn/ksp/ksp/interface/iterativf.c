#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscksp.h>
#include <petscksp.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define kspgetresidualnorm_ KSPGETRESIDUALNORM
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define kspgetresidualnorm_ kspgetresidualnorm
#endif
PETSC_EXTERN void kspgetresidualnorm_(KSP *ksp, PetscReal *rnorm, PetscErrorCode *ierr)
{
  CHKFORTRANNULLREAL(rnorm);
  *ierr = KSPGetResidualNorm(*ksp, rnorm);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscksp.h>
#include <petscksp.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define kspgetiterationnumber_ KSPGETITERATIONNUMBER
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define kspgetiterationnumber_ kspgetiterationnumber
#endif
PETSC_EXTERN void kspgetiterationnumber_(KSP *ksp, PetscInt *its, PetscErrorCode *ierr)
{
  CHKFORTRANNULLINTEGER(its);
  *ierr = KSPGetIterationNumber(*ksp, its);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscksp.h>
#include <petscksp.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define kspgettotaliterations_ KSPGETTOTALITERATIONS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define kspgettotaliterations_ kspgettotaliterations
#endif
PETSC_EXTERN void kspgettotaliterations_(KSP *ksp, PetscInt *its, PetscErrorCode *ierr)
{
  CHKFORTRANNULLINTEGER(its);
  *ierr = KSPGetTotalIterations(*ksp, its);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscksp.h>
#include <petscksp.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define kspmonitorresidual_ KSPMONITORRESIDUAL
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define kspmonitorresidual_ kspmonitorresidual
#endif
PETSC_EXTERN void kspmonitorresidual_(KSP *ksp, PetscInt *n, PetscReal *rnorm, PetscViewerAndFormat **vf, PetscErrorCode *ierr)
{
  *ierr = KSPMonitorResidual(*ksp, *n, *rnorm, *vf);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscksp.h>
#include <petscksp.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define kspmonitorresidualview_ KSPMONITORRESIDUALVIEW
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define kspmonitorresidualview_ kspmonitorresidualview
#endif
PETSC_EXTERN void kspmonitorresidualview_(KSP *ksp, PetscInt *n, PetscReal *rnorm, PetscViewerAndFormat **vf, PetscErrorCode *ierr)
{
  *ierr = KSPMonitorResidualView(*ksp, *n, *rnorm, *vf);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscksp.h>
#include <petscksp.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define kspmonitorresidualdrawlg_ KSPMONITORRESIDUALDRAWLG
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define kspmonitorresidualdrawlg_ kspmonitorresidualdrawlg
#endif
PETSC_EXTERN void kspmonitorresidualdrawlg_(KSP *ksp, PetscInt *n, PetscReal *rnorm, PetscViewerAndFormat **vf, PetscErrorCode *ierr)
{
  *ierr = KSPMonitorResidualDrawLG(*ksp, *n, *rnorm, *vf);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscksp.h>
#include <petscksp.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define kspmonitorresidualshort_ KSPMONITORRESIDUALSHORT
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define kspmonitorresidualshort_ kspmonitorresidualshort
#endif
PETSC_EXTERN void kspmonitorresidualshort_(KSP *ksp, PetscInt *its, PetscReal *fnorm, PetscViewerAndFormat **vf, PetscErrorCode *ierr)
{
  *ierr = KSPMonitorResidualShort(*ksp, *its, *fnorm, *vf);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscksp.h>
#include <petscksp.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define kspmonitorresidualrange_ KSPMONITORRESIDUALRANGE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define kspmonitorresidualrange_ kspmonitorresidualrange
#endif
PETSC_EXTERN void kspmonitorresidualrange_(KSP *ksp, PetscInt *it, PetscReal *rnorm, PetscViewerAndFormat **vf, PetscErrorCode *ierr)
{
  *ierr = KSPMonitorResidualRange(*ksp, *it, *rnorm, *vf);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscksp.h>
#include <petscksp.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define kspmonitortrueresidual_ KSPMONITORTRUERESIDUAL
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define kspmonitortrueresidual_ kspmonitortrueresidual
#endif
PETSC_EXTERN void kspmonitortrueresidual_(KSP *ksp, PetscInt *n, PetscReal *rnorm, PetscViewerAndFormat **vf, PetscErrorCode *ierr)
{
  *ierr = KSPMonitorTrueResidual(*ksp, *n, *rnorm, *vf);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscksp.h>
#include <petscksp.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define kspmonitortrueresidualview_ KSPMONITORTRUERESIDUALVIEW
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define kspmonitortrueresidualview_ kspmonitortrueresidualview
#endif
PETSC_EXTERN void kspmonitortrueresidualview_(KSP *ksp, PetscInt *n, PetscReal *rnorm, PetscViewerAndFormat **vf, PetscErrorCode *ierr)
{
  *ierr = KSPMonitorTrueResidualView(*ksp, *n, *rnorm, *vf);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscksp.h>
#include <petscksp.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define kspmonitortrueresidualdrawlg_ KSPMONITORTRUERESIDUALDRAWLG
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define kspmonitortrueresidualdrawlg_ kspmonitortrueresidualdrawlg
#endif
PETSC_EXTERN void kspmonitortrueresidualdrawlg_(KSP *ksp, PetscInt *n, PetscReal *rnorm, PetscViewerAndFormat **vf, PetscErrorCode *ierr)
{
  *ierr = KSPMonitorTrueResidualDrawLG(*ksp, *n, *rnorm, *vf);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscksp.h>
#include <petscksp.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define kspmonitortrueresidualmax_ KSPMONITORTRUERESIDUALMAX
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define kspmonitortrueresidualmax_ kspmonitortrueresidualmax
#endif
PETSC_EXTERN void kspmonitortrueresidualmax_(KSP *ksp, PetscInt *n, PetscReal *rnorm, PetscViewerAndFormat **vf, PetscErrorCode *ierr)
{
  *ierr = KSPMonitorTrueResidualMax(*ksp, *n, *rnorm, *vf);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscksp.h>
#include <petscksp.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define kspmonitorerror_ KSPMONITORERROR
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define kspmonitorerror_ kspmonitorerror
#endif
PETSC_EXTERN void kspmonitorerror_(KSP *ksp, PetscInt *n, PetscReal *rnorm, PetscViewerAndFormat **vf, PetscErrorCode *ierr)
{
  *ierr = KSPMonitorError(*ksp, *n, *rnorm, *vf);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscksp.h>
#include <petscksp.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define kspmonitorerrordraw_ KSPMONITORERRORDRAW
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define kspmonitorerrordraw_ kspmonitorerrordraw
#endif
PETSC_EXTERN void kspmonitorerrordraw_(KSP *ksp, PetscInt *n, PetscReal *rnorm, PetscViewerAndFormat **vf, PetscErrorCode *ierr)
{
  *ierr = KSPMonitorErrorDraw(*ksp, *n, *rnorm, *vf);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscksp.h>
#include <petscksp.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define kspmonitorerrordrawlg_ KSPMONITORERRORDRAWLG
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define kspmonitorerrordrawlg_ kspmonitorerrordrawlg
#endif
PETSC_EXTERN void kspmonitorerrordrawlg_(KSP *ksp, PetscInt *n, PetscReal *rnorm, PetscViewerAndFormat **vf, PetscErrorCode *ierr)
{
  *ierr = KSPMonitorErrorDrawLG(*ksp, *n, *rnorm, *vf);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscksp.h>
#include <petscksp.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define kspmonitorsolution_ KSPMONITORSOLUTION
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define kspmonitorsolution_ kspmonitorsolution
#endif
PETSC_EXTERN void kspmonitorsolution_(KSP *ksp, PetscInt *n, PetscReal *rnorm, PetscViewerAndFormat **vf, PetscErrorCode *ierr)
{
  *ierr = KSPMonitorSolution(*ksp, *n, *rnorm, *vf);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscksp.h>
#include <petscksp.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define kspmonitorsolutiondraw_ KSPMONITORSOLUTIONDRAW
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define kspmonitorsolutiondraw_ kspmonitorsolutiondraw
#endif
PETSC_EXTERN void kspmonitorsolutiondraw_(KSP *ksp, PetscInt *n, PetscReal *rnorm, PetscViewerAndFormat **vf, PetscErrorCode *ierr)
{
  *ierr = KSPMonitorSolutionDraw(*ksp, *n, *rnorm, *vf);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscksp.h>
#include <petscksp.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define kspmonitorsolutiondrawlg_ KSPMONITORSOLUTIONDRAWLG
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define kspmonitorsolutiondrawlg_ kspmonitorsolutiondrawlg
#endif
PETSC_EXTERN void kspmonitorsolutiondrawlg_(KSP *ksp, PetscInt *n, PetscReal *rnorm, PetscViewerAndFormat **vf, PetscErrorCode *ierr)
{
  *ierr = KSPMonitorSolutionDrawLG(*ksp, *n, *rnorm, *vf);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscksp.h>
#include <petscksp.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define kspmonitorsingularvalue_ KSPMONITORSINGULARVALUE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define kspmonitorsingularvalue_ kspmonitorsingularvalue
#endif
PETSC_EXTERN void kspmonitorsingularvalue_(KSP *ksp, PetscInt *n, PetscReal *rnorm, PetscViewerAndFormat **vf, PetscErrorCode *ierr)
{
  *ierr = KSPMonitorSingularValue(*ksp, *n, *rnorm, *vf);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscksp.h>
#include <petscksp.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define kspmonitordynamictolerancecreate_ KSPMONITORDYNAMICTOLERANCECREATE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define kspmonitordynamictolerancecreate_ kspmonitordynamictolerancecreate
#endif
PETSC_EXTERN void kspmonitordynamictolerancecreate_(PetscCtx ctx, PetscErrorCode *ierr)
{
  *ierr = KSPMonitorDynamicToleranceCreate(ctx);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscksp.h>
#include <petscksp.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define kspmonitordynamictolerancesetcoefficient_ KSPMONITORDYNAMICTOLERANCESETCOEFFICIENT
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define kspmonitordynamictolerancesetcoefficient_ kspmonitordynamictolerancesetcoefficient
#endif
PETSC_EXTERN void kspmonitordynamictolerancesetcoefficient_(PetscCtx ctx, PetscReal *coeff, PetscErrorCode *ierr)
{
  *ierr = KSPMonitorDynamicToleranceSetCoefficient(ctx, *coeff);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscksp.h>
#include <petscksp.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define kspmonitordynamictolerance_ KSPMONITORDYNAMICTOLERANCE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define kspmonitordynamictolerance_ kspmonitordynamictolerance
#endif
PETSC_EXTERN void kspmonitordynamictolerance_(KSP *ksp, PetscInt *its, PetscReal *fnorm, PetscCtx ctx, PetscErrorCode *ierr)
{
  *ierr = KSPMonitorDynamicTolerance(*ksp, *its, *fnorm, ctx);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscksp.h>
#include <petscksp.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define kspmonitordynamictolerancedestroycptr_ KSPMONITORDYNAMICTOLERANCEDESTROYCPTR
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define kspmonitordynamictolerancedestroycptr_ kspmonitordynamictolerancedestroycptr
#endif
PETSC_EXTERN void kspmonitordynamictolerancedestroycptr_(PetscCtxRt ctx, PetscErrorCode *ierr)
{
  *ierr = KSPMonitorDynamicToleranceDestroy(ctx);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscksp.h>
#include <petscksp.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define kspconvergedskip_ KSPCONVERGEDSKIP
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define kspconvergedskip_ kspconvergedskip
#endif
PETSC_EXTERN void kspconvergedskip_(KSP *ksp, PetscInt *n, PetscReal *rnorm, KSPConvergedReason *reason, PetscCtx dtx, PetscErrorCode *ierr)
{
  *ierr = KSPConvergedSkip(*ksp, *n, *rnorm, reason, dtx);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscksp.h>
#include <petscksp.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define kspsetconvergednegativecurvature_ KSPSETCONVERGEDNEGATIVECURVATURE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define kspsetconvergednegativecurvature_ kspsetconvergednegativecurvature
#endif
PETSC_EXTERN void kspsetconvergednegativecurvature_(KSP *ksp, PetscBool *flg, PetscErrorCode *ierr)
{
  *ierr = KSPSetConvergedNegativeCurvature(*ksp, *flg ? PETSC_TRUE : PETSC_FALSE);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscksp.h>
#include <petscksp.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define kspgetconvergednegativecurvature_ KSPGETCONVERGEDNEGATIVECURVATURE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define kspgetconvergednegativecurvature_ kspgetconvergednegativecurvature
#endif
PETSC_EXTERN void kspgetconvergednegativecurvature_(KSP *ksp, PetscBool *flg, PetscErrorCode *ierr)
{
  CHKFORTRANNULLBOOL(flg);
  *ierr = KSPGetConvergedNegativeCurvature(*ksp, flg);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscksp.h>
#include <petscksp.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define kspconvergeddefaultsetuirnorm_ KSPCONVERGEDDEFAULTSETUIRNORM
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define kspconvergeddefaultsetuirnorm_ kspconvergeddefaultsetuirnorm
#endif
PETSC_EXTERN void kspconvergeddefaultsetuirnorm_(KSP *ksp, PetscErrorCode *ierr)
{
  *ierr = KSPConvergedDefaultSetUIRNorm(*ksp);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscksp.h>
#include <petscksp.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define kspconvergeddefaultsetumirnorm_ KSPCONVERGEDDEFAULTSETUMIRNORM
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define kspconvergeddefaultsetumirnorm_ kspconvergeddefaultsetumirnorm
#endif
PETSC_EXTERN void kspconvergeddefaultsetumirnorm_(KSP *ksp, PetscErrorCode *ierr)
{
  *ierr = KSPConvergedDefaultSetUMIRNorm(*ksp);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscksp.h>
#include <petscksp.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define kspconvergeddefaultsetconvergedmaxits_ KSPCONVERGEDDEFAULTSETCONVERGEDMAXITS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define kspconvergeddefaultsetconvergedmaxits_ kspconvergeddefaultsetconvergedmaxits
#endif
PETSC_EXTERN void kspconvergeddefaultsetconvergedmaxits_(KSP *ksp, PetscBool *flg, PetscErrorCode *ierr)
{
  *ierr = KSPConvergedDefaultSetConvergedMaxits(*ksp, *flg ? PETSC_TRUE : PETSC_FALSE);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscksp.h>
#include <petscksp.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define kspconvergeddefault_ KSPCONVERGEDDEFAULT
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define kspconvergeddefault_ kspconvergeddefault
#endif
PETSC_EXTERN void kspconvergeddefault_(KSP *ksp, PetscInt *n, PetscReal *rnorm, KSPConvergedReason *reason, PetscCtx ctx, PetscErrorCode *ierr)
{
  *ierr = KSPConvergedDefault(*ksp, *n, *rnorm, reason, ctx);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscksp.h>
#include <petscksp.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define kspconvergeddefaultdestroycptr_ KSPCONVERGEDDEFAULTDESTROYCPTR
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define kspconvergeddefaultdestroycptr_ kspconvergeddefaultdestroycptr
#endif
PETSC_EXTERN void kspconvergeddefaultdestroycptr_(PetscCtxRt ctx, PetscErrorCode *ierr)
{
  *ierr = KSPConvergedDefaultDestroy(ctx);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscksp.h>
#include <petscksp.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define kspbuildsolutiondefault_ KSPBUILDSOLUTIONDEFAULT
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define kspbuildsolutiondefault_ kspbuildsolutiondefault
#endif
PETSC_EXTERN void kspbuildsolutiondefault_(KSP *ksp, Vec *v, Vec *M_V, PetscErrorCode *ierr)
{
  PetscBool null_M_V = !*(void**) M_V ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(M_V);
  *ierr = KSPBuildSolutionDefault(*ksp, *v, M_V);
  if (*ierr) return;
  if (! null_M_V && !*(void**) M_V) *(void **) M_V = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscksp.h>
#include <petscksp.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define kspbuildresidualdefault_ KSPBUILDRESIDUALDEFAULT
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define kspbuildresidualdefault_ kspbuildresidualdefault
#endif
PETSC_EXTERN void kspbuildresidualdefault_(KSP *ksp, Vec *t, Vec *v, Vec *M_V, PetscErrorCode *ierr)
{
  PetscBool null_M_V = !*(void**) M_V ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(M_V);
  *ierr = KSPBuildResidualDefault(*ksp, *t, *v, M_V);
  if (*ierr) return;
  if (! null_M_V && !*(void**) M_V) *(void **) M_V = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscksp.h>
#include <petscksp.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define kspsetworkvecs_ KSPSETWORKVECS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define kspsetworkvecs_ kspsetworkvecs
#endif
PETSC_EXTERN void kspsetworkvecs_(KSP *ksp, PetscInt *nw, PetscErrorCode *ierr)
{
  *ierr = KSPSetWorkVecs(*ksp, *nw);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscksp.h>
#include <petscksp.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define kspdestroydefault_ KSPDESTROYDEFAULT
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define kspdestroydefault_ kspdestroydefault
#endif
PETSC_EXTERN void kspdestroydefault_(KSP *ksp, PetscErrorCode *ierr)
{
  *ierr = KSPDestroyDefault(*ksp);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscksp.h>
#include <petscksp.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define kspgetconvergedreason_ KSPGETCONVERGEDREASON
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define kspgetconvergedreason_ kspgetconvergedreason
#endif
PETSC_EXTERN void kspgetconvergedreason_(KSP *ksp, KSPConvergedReason *reason, PetscErrorCode *ierr)
{
  *ierr = KSPGetConvergedReason(*ksp, reason);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscksp.h>
#include <petscksp.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define kspgetconvergedreasonstring_ KSPGETCONVERGEDREASONSTRING
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define kspgetconvergedreasonstring_ kspgetconvergedreasonstring
#endif
PETSC_EXTERN void kspgetconvergedreasonstring_(KSP *ksp, char strreason[], PetscErrorCode *ierr, PETSC_FORTRAN_CHARLEN_T l_strreason)
{
  char* c_strreason = PETSC_NULLPTR;
  *ierr = KSPGetConvergedReasonString(*ksp, (const char **)&c_strreason);
  if (*ierr) return;
  *ierr = PetscStrncpy((char *)strreason, c_strreason, l_strreason);
  if (*ierr) return;
  FIXRETURNCHAR(PETSC_TRUE, strreason, l_strreason);
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscksp.h>
#include <petscksp.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define kspsetdm_ KSPSETDM
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define kspsetdm_ kspsetdm
#endif
PETSC_EXTERN void kspsetdm_(KSP *ksp, DM *dm, PetscErrorCode *ierr)
{
  *ierr = KSPSetDM(*ksp, *dm);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscksp.h>
#include <petscksp.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define kspsetdmactive_ KSPSETDMACTIVE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define kspsetdmactive_ kspsetdmactive
#endif
PETSC_EXTERN void kspsetdmactive_(KSP *ksp, KSPDMActive *active, PetscBool *flg, PetscErrorCode *ierr)
{
  *ierr = KSPSetDMActive(*ksp, *active, *flg ? PETSC_TRUE : PETSC_FALSE);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscksp.h>
#include <petscksp.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define kspgetdm_ KSPGETDM
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define kspgetdm_ kspgetdm
#endif
PETSC_EXTERN void kspgetdm_(KSP *ksp, DM *dm, PetscErrorCode *ierr)
{
  PetscBool null_dm = !*(void**) dm ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(dm);
  *ierr = KSPGetDM(*ksp, dm);
  if (*ierr) return;
  if (! null_dm && !*(void**) dm) *(void **) dm = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscksp.h>
#include <petscksp.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define kspsetapplicationcontext_ KSPSETAPPLICATIONCONTEXT
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define kspsetapplicationcontext_ kspsetapplicationcontext
#endif
PETSC_EXTERN void kspsetapplicationcontext_(KSP *ksp, PetscCtx ctx, PetscErrorCode *ierr)
{
  *ierr = KSPSetApplicationContext(*ksp, ctx);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscksp.h>
#include <petscksp.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define kspgetapplicationcontextcptr_ KSPGETAPPLICATIONCONTEXTCPTR
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define kspgetapplicationcontextcptr_ kspgetapplicationcontextcptr
#endif
PETSC_EXTERN void kspgetapplicationcontextcptr_(KSP *ksp, PetscCtxRt ctx, PetscErrorCode *ierr)
{
  *ierr = KSPGetApplicationContext(*ksp, ctx);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscksp.h>
#include <petscksp.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define kspchecksolve_ KSPCHECKSOLVE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define kspchecksolve_ kspchecksolve
#endif
PETSC_EXTERN void kspchecksolve_(KSP *ksp, PC *pc, Vec *vec, PetscErrorCode *ierr)
{
  *ierr = KSPCheckSolve(*ksp, *pc, *vec);
  if (*ierr) return;
}
