#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscts.h>
#include <petscts.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define tsmonitor_ TSMONITOR
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define tsmonitor_ tsmonitor
#endif
PETSC_EXTERN void tsmonitor_(TS *ts, PetscInt *step, PetscReal *ptime, Vec *u, PetscErrorCode *ierr)
{
  *ierr = TSMonitor(*ts, *step, *ptime, *u);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscts.h>
#include <petscts.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define tsmonitorcancel_ TSMONITORCANCEL
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define tsmonitorcancel_ tsmonitorcancel
#endif
PETSC_EXTERN void tsmonitorcancel_(TS *ts, PetscErrorCode *ierr)
{
  *ierr = TSMonitorCancel(*ts);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscts.h>
#include <petscts.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define tsmonitordefault_ TSMONITORDEFAULT
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define tsmonitordefault_ tsmonitordefault
#endif
PETSC_EXTERN void tsmonitordefault_(TS *ts, PetscInt *step, PetscReal *ptime, Vec *v, PetscViewerAndFormat **vf, PetscErrorCode *ierr)
{
  *ierr = TSMonitorDefault(*ts, *step, *ptime, *v, *vf);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscts.h>
#include <petscts.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define tsmonitorwallclocktimesetup_ TSMONITORWALLCLOCKTIMESETUP
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define tsmonitorwallclocktimesetup_ tsmonitorwallclocktimesetup
#endif
PETSC_EXTERN void tsmonitorwallclocktimesetup_(TS *ts, PetscViewerAndFormat **vf, PetscErrorCode *ierr)
{
  *ierr = TSMonitorWallClockTimeSetUp(*ts, *vf);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscts.h>
#include <petscts.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define tsmonitorwallclocktime_ TSMONITORWALLCLOCKTIME
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define tsmonitorwallclocktime_ tsmonitorwallclocktime
#endif
PETSC_EXTERN void tsmonitorwallclocktime_(TS *ts, PetscInt *step, PetscReal *ptime, Vec *v, PetscViewerAndFormat **vf, PetscErrorCode *ierr)
{
  *ierr = TSMonitorWallClockTime(*ts, *step, *ptime, *v, *vf);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscts.h>
#include <petscts.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define tsmonitorextreme_ TSMONITOREXTREME
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define tsmonitorextreme_ tsmonitorextreme
#endif
PETSC_EXTERN void tsmonitorextreme_(TS *ts, PetscInt *step, PetscReal *ptime, Vec *v, PetscViewerAndFormat **vf, PetscErrorCode *ierr)
{
  *ierr = TSMonitorExtreme(*ts, *step, *ptime, *v, *vf);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscts.h>
#include <petscts.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define tsmonitorlgtimestep_ TSMONITORLGTIMESTEP
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define tsmonitorlgtimestep_ tsmonitorlgtimestep
#endif
PETSC_EXTERN void tsmonitorlgtimestep_(TS *ts, PetscInt *step, PetscReal *ptime, Vec *v, PetscCtx monctx, PetscErrorCode *ierr)
{
  *ierr = TSMonitorLGTimeStep(*ts, *step, *ptime, *v, monctx);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscts.h>
#include <petscts.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define tsmonitordrawsolution_ TSMONITORDRAWSOLUTION
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define tsmonitordrawsolution_ tsmonitordrawsolution
#endif
PETSC_EXTERN void tsmonitordrawsolution_(TS *ts, PetscInt *step, PetscReal *ptime, Vec *u, PetscCtx ctx, PetscErrorCode *ierr)
{
  *ierr = TSMonitorDrawSolution(*ts, *step, *ptime, *u, ctx);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscts.h>
#include <petscts.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define tsmonitordrawsolutionphase_ TSMONITORDRAWSOLUTIONPHASE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define tsmonitordrawsolutionphase_ tsmonitordrawsolutionphase
#endif
PETSC_EXTERN void tsmonitordrawsolutionphase_(TS *ts, PetscInt *step, PetscReal *ptime, Vec *u, PetscCtx ctx, PetscErrorCode *ierr)
{
  *ierr = TSMonitorDrawSolutionPhase(*ts, *step, *ptime, *u, ctx);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscts.h>
#include <petscts.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define tsmonitordrawsolutionfunction_ TSMONITORDRAWSOLUTIONFUNCTION
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define tsmonitordrawsolutionfunction_ tsmonitordrawsolutionfunction
#endif
PETSC_EXTERN void tsmonitordrawsolutionfunction_(TS *ts, PetscInt *step, PetscReal *ptime, Vec *u, PetscCtx Ctx, PetscErrorCode *ierr)
{
  *ierr = TSMonitorDrawSolutionFunction(*ts, *step, *ptime, *u, Ctx);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscts.h>
#include <petscts.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define tsmonitordrawerror_ TSMONITORDRAWERROR
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define tsmonitordrawerror_ tsmonitordrawerror
#endif
PETSC_EXTERN void tsmonitordrawerror_(TS *ts, PetscInt *step, PetscReal *ptime, Vec *u, PetscCtx Ctx, PetscErrorCode *ierr)
{
  *ierr = TSMonitorDrawError(*ts, *step, *ptime, *u, Ctx);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscts.h>
#include <petscts.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define tsmonitorsolutionsetup_ TSMONITORSOLUTIONSETUP
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define tsmonitorsolutionsetup_ tsmonitorsolutionsetup
#endif
PETSC_EXTERN void tsmonitorsolutionsetup_(TS *ts, PetscViewerAndFormat **vf, PetscErrorCode *ierr)
{
  *ierr = TSMonitorSolutionSetup(*ts, *vf);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscts.h>
#include <petscts.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define tsmonitorsolution_ TSMONITORSOLUTION
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define tsmonitorsolution_ tsmonitorsolution
#endif
PETSC_EXTERN void tsmonitorsolution_(TS *ts, PetscInt *step, PetscReal *ptime, Vec *u, PetscViewerAndFormat **vf, PetscErrorCode *ierr)
{
  *ierr = TSMonitorSolution(*ts, *step, *ptime, *u, *vf);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscts.h>
#include <petscts.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define tsmonitorsolutionvtk_ TSMONITORSOLUTIONVTK
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define tsmonitorsolutionvtk_ tsmonitorsolutionvtk
#endif
PETSC_EXTERN void tsmonitorsolutionvtk_(TS *ts, PetscInt *step, PetscReal *ptime, Vec *u, TSMonitorVTKCtx *ctx, PetscErrorCode *ierr)
{
  *ierr = TSMonitorSolutionVTK(*ts, *step, *ptime, *u, *ctx);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscts.h>
#include <petscts.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define tsmonitorsolutionvtkdestroy_ TSMONITORSOLUTIONVTKDESTROY
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define tsmonitorsolutionvtkdestroy_ tsmonitorsolutionvtkdestroy
#endif
PETSC_EXTERN void tsmonitorsolutionvtkdestroy_(TSMonitorVTKCtx *ctx, PetscErrorCode *ierr)
{
  PETSC_FORTRAN_OBJECT_F_DESTROYED_TO_C_NULL(ctx);
  PetscBool null_ctx = !*(void**) ctx ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(ctx);
  *ierr = TSMonitorSolutionVTKDestroy(ctx);
  if (*ierr) return;
  if (! null_ctx && !*(void**) ctx) *(void **) ctx = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscts.h>
#include <petscts.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define tsmonitorsolutionvtkctxcreate_ TSMONITORSOLUTIONVTKCTXCREATE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define tsmonitorsolutionvtkctxcreate_ tsmonitorsolutionvtkctxcreate
#endif
PETSC_EXTERN void tsmonitorsolutionvtkctxcreate_(char filenametemplate[], TSMonitorVTKCtx *ctx, PetscErrorCode *ierr, PETSC_FORTRAN_CHARLEN_T l_filenametemplate)
{
  PetscBool null_ctx = !*(void**) ctx ? PETSC_TRUE : PETSC_FALSE;
  PETSC_FORTRAN_OBJECT_CREATE(ctx);
  char* c_filenametemplate;
  FIXCHAR(filenametemplate, l_filenametemplate, c_filenametemplate);
  CHKFORTRANNULLOBJECT(ctx);
  *ierr = TSMonitorSolutionVTKCtxCreate(c_filenametemplate, ctx);
  if (*ierr) return;
  FREECHAR(filenametemplate, c_filenametemplate);
  if (! null_ctx && !*(void**) ctx) *(void **) ctx = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscts.h>
#include <petscts.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define tsmonitorlgsolution_ TSMONITORLGSOLUTION
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define tsmonitorlgsolution_ tsmonitorlgsolution
#endif
PETSC_EXTERN void tsmonitorlgsolution_(TS *ts, PetscInt *step, PetscReal *ptime, Vec *u, void *dctx, PetscErrorCode *ierr)
{
  *ierr = TSMonitorLGSolution(*ts, *step, *ptime, *u, dctx);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscts.h>
#include <petscts.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define tsmonitorlgerror_ TSMONITORLGERROR
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define tsmonitorlgerror_ tsmonitorlgerror
#endif
PETSC_EXTERN void tsmonitorlgerror_(TS *ts, PetscInt *step, PetscReal *ptime, Vec *u, PetscCtx Ctx, PetscErrorCode *ierr)
{
  *ierr = TSMonitorLGError(*ts, *step, *ptime, *u, Ctx);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscts.h>
#include <petscts.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define tsmonitorspswarmsolution_ TSMONITORSPSWARMSOLUTION
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define tsmonitorspswarmsolution_ tsmonitorspswarmsolution
#endif
PETSC_EXTERN void tsmonitorspswarmsolution_(TS *ts, PetscInt *step, PetscReal *ptime, Vec *u, PetscCtx dctx, PetscErrorCode *ierr)
{
  *ierr = TSMonitorSPSwarmSolution(*ts, *step, *ptime, *u, dctx);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscts.h>
#include <petscts.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define tsmonitorhgswarmsolution_ TSMONITORHGSWARMSOLUTION
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define tsmonitorhgswarmsolution_ tsmonitorhgswarmsolution
#endif
PETSC_EXTERN void tsmonitorhgswarmsolution_(TS *ts, PetscInt *step, PetscReal *ptime, Vec *u, PetscCtx dctx, PetscErrorCode *ierr)
{
  *ierr = TSMonitorHGSwarmSolution(*ts, *step, *ptime, *u, dctx);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscts.h>
#include <petscts.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define tsmonitorerror_ TSMONITORERROR
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define tsmonitorerror_ tsmonitorerror
#endif
PETSC_EXTERN void tsmonitorerror_(TS *ts, PetscInt *step, PetscReal *ptime, Vec *u, PetscViewerAndFormat **vf, PetscErrorCode *ierr)
{
  *ierr = TSMonitorError(*ts, *step, *ptime, *u, *vf);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscts.h>
#include <petscts.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define tsmonitorlgsnesiterations_ TSMONITORLGSNESITERATIONS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define tsmonitorlgsnesiterations_ tsmonitorlgsnesiterations
#endif
PETSC_EXTERN void tsmonitorlgsnesiterations_(TS *ts, PetscInt *n, PetscReal *ptime, Vec *v, PetscCtx monctx, PetscErrorCode *ierr)
{
  *ierr = TSMonitorLGSNESIterations(*ts, *n, *ptime, *v, monctx);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscts.h>
#include <petscts.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define tsmonitorlgkspiterations_ TSMONITORLGKSPITERATIONS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define tsmonitorlgkspiterations_ tsmonitorlgkspiterations
#endif
PETSC_EXTERN void tsmonitorlgkspiterations_(TS *ts, PetscInt *n, PetscReal *ptime, Vec *v, PetscCtx monctx, PetscErrorCode *ierr)
{
  *ierr = TSMonitorLGKSPIterations(*ts, *n, *ptime, *v, monctx);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscts.h>
#include <petscts.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define tsmonitorenvelope_ TSMONITORENVELOPE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define tsmonitorenvelope_ tsmonitorenvelope
#endif
PETSC_EXTERN void tsmonitorenvelope_(TS *ts, PetscInt *step, PetscReal *ptime, Vec *u, PetscCtx dctx, PetscErrorCode *ierr)
{
  *ierr = TSMonitorEnvelope(*ts, *step, *ptime, *u, dctx);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscts.h>
#include <petscts.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define tsmonitorenvelopegetbounds_ TSMONITORENVELOPEGETBOUNDS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define tsmonitorenvelopegetbounds_ tsmonitorenvelopegetbounds
#endif
PETSC_EXTERN void tsmonitorenvelopegetbounds_(TS *ts, Vec *max, Vec *min, PetscErrorCode *ierr)
{
  PetscBool null_max = !*(void**) max ? PETSC_TRUE : PETSC_FALSE;
  PetscBool null_min = !*(void**) min ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(max);
  CHKFORTRANNULLOBJECT(min);
  *ierr = TSMonitorEnvelopeGetBounds(*ts, max, min);
  if (*ierr) return;
  if (! null_max && !*(void**) max) *(void **) max = (void *)-2;
  if (! null_min && !*(void**) min) *(void **) min = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscts.h>
#include <petscts.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define tsdmswarmmonitormoments_ TSDMSWARMMONITORMOMENTS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define tsdmswarmmonitormoments_ tsdmswarmmonitormoments
#endif
PETSC_EXTERN void tsdmswarmmonitormoments_(TS *ts, PetscInt *step, PetscReal *t, Vec *U, PetscViewerAndFormat **vf, PetscErrorCode *ierr)
{
  *ierr = TSDMSwarmMonitorMoments(*ts, *step, *t, *U, *vf);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscts.h>
#include <petscts.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define tsmonitordrawctxdestroy_ TSMONITORDRAWCTXDESTROY
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define tsmonitordrawctxdestroy_ tsmonitordrawctxdestroy
#endif
PETSC_EXTERN void tsmonitordrawctxdestroy_(TSMonitorDrawCtx *ictx, PetscErrorCode *ierr)
{
  PETSC_FORTRAN_OBJECT_F_DESTROYED_TO_C_NULL(ictx);
  PetscBool null_ictx = !*(void**) ictx ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(ictx);
  *ierr = TSMonitorDrawCtxDestroy(ictx);
  if (*ierr) return;
  if (! null_ictx && !*(void**) ictx) *(void **) ictx = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscts.h>
#include <petscts.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define tsmonitordrawctxcreate_ TSMONITORDRAWCTXCREATE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define tsmonitordrawctxcreate_ tsmonitordrawctxcreate
#endif
PETSC_EXTERN void tsmonitordrawctxcreate_(MPI_Fint *comm, char host[], char label[], int *x, int *y, int *m, int *n, PetscInt *howoften, TSMonitorDrawCtx *ctx, PetscErrorCode *ierr, PETSC_FORTRAN_CHARLEN_T l_host, PETSC_FORTRAN_CHARLEN_T l_label)
{
  PetscBool null_ctx = !*(void**) ctx ? PETSC_TRUE : PETSC_FALSE;
  PETSC_FORTRAN_OBJECT_CREATE(ctx);
  char* c_host;
  FIXCHAR(host, l_host, c_host);
  char* c_label;
  FIXCHAR(label, l_label, c_label);
  CHKFORTRANNULLOBJECT(ctx);
  *ierr = TSMonitorDrawCtxCreate(MPI_Comm_f2c(*(comm)), c_host, c_label, *x, *y, *m, *n, *howoften, ctx);
  if (*ierr) return;
  FREECHAR(host, c_host);
  FREECHAR(label, c_label);
  if (! null_ctx && !*(void**) ctx) *(void **) ctx = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscts.h>
#include <petscts.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define tsmonitorlgctxcreate_ TSMONITORLGCTXCREATE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define tsmonitorlgctxcreate_ tsmonitorlgctxcreate
#endif
PETSC_EXTERN void tsmonitorlgctxcreate_(MPI_Fint *comm, char host[], char label[], int *x, int *y, int *m, int *n, PetscInt *howoften, TSMonitorLGCtx *ctx, PetscErrorCode *ierr, PETSC_FORTRAN_CHARLEN_T l_host, PETSC_FORTRAN_CHARLEN_T l_label)
{
  PetscBool null_ctx = !*(void**) ctx ? PETSC_TRUE : PETSC_FALSE;
  PETSC_FORTRAN_OBJECT_CREATE(ctx);
  char* c_host;
  FIXCHAR(host, l_host, c_host);
  char* c_label;
  FIXCHAR(label, l_label, c_label);
  CHKFORTRANNULLOBJECT(ctx);
  *ierr = TSMonitorLGCtxCreate(MPI_Comm_f2c(*(comm)), c_host, c_label, *x, *y, *m, *n, *howoften, ctx);
  if (*ierr) return;
  FREECHAR(host, c_host);
  FREECHAR(label, c_label);
  if (! null_ctx && !*(void**) ctx) *(void **) ctx = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscts.h>
#include <petscts.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define tsmonitorlgctxdestroy_ TSMONITORLGCTXDESTROY
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define tsmonitorlgctxdestroy_ tsmonitorlgctxdestroy
#endif
PETSC_EXTERN void tsmonitorlgctxdestroy_(TSMonitorLGCtx *ctx, PetscErrorCode *ierr)
{
  PETSC_FORTRAN_OBJECT_F_DESTROYED_TO_C_NULL(ctx);
  PetscBool null_ctx = !*(void**) ctx ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(ctx);
  *ierr = TSMonitorLGCtxDestroy(ctx);
  if (*ierr) return;
  if (! null_ctx && !*(void**) ctx) *(void **) ctx = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscts.h>
#include <petscts.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define tsmonitorenvelopectxcreate_ TSMONITORENVELOPECTXCREATE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define tsmonitorenvelopectxcreate_ tsmonitorenvelopectxcreate
#endif
PETSC_EXTERN void tsmonitorenvelopectxcreate_(TS *ts, TSMonitorEnvelopeCtx *ctx, PetscErrorCode *ierr)
{
  PetscBool null_ctx = !*(void**) ctx ? PETSC_TRUE : PETSC_FALSE;
  PETSC_FORTRAN_OBJECT_CREATE(ctx);
  CHKFORTRANNULLOBJECT(ctx);
  *ierr = TSMonitorEnvelopeCtxCreate(*ts, ctx);
  if (*ierr) return;
  if (! null_ctx && !*(void**) ctx) *(void **) ctx = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscts.h>
#include <petscts.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define tsmonitorenvelopectxdestroy_ TSMONITORENVELOPECTXDESTROY
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define tsmonitorenvelopectxdestroy_ tsmonitorenvelopectxdestroy
#endif
PETSC_EXTERN void tsmonitorenvelopectxdestroy_(TSMonitorEnvelopeCtx *ctx, PetscErrorCode *ierr)
{
  PETSC_FORTRAN_OBJECT_F_DESTROYED_TO_C_NULL(ctx);
  PetscBool null_ctx = !*(void**) ctx ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(ctx);
  *ierr = TSMonitorEnvelopeCtxDestroy(ctx);
  if (*ierr) return;
  if (! null_ctx && !*(void**) ctx) *(void **) ctx = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscts.h>
#include <petscts.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define tsmonitorspctxcreate_ TSMONITORSPCTXCREATE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define tsmonitorspctxcreate_ tsmonitorspctxcreate
#endif
PETSC_EXTERN void tsmonitorspctxcreate_(MPI_Fint *comm, char host[], char label[], int *x, int *y, int *m, int *n, PetscInt *howoften, PetscInt *retain, PetscBool *phase, PetscBool *multispecies, TSMonitorSPCtx *ctx, PetscErrorCode *ierr, PETSC_FORTRAN_CHARLEN_T l_host, PETSC_FORTRAN_CHARLEN_T l_label)
{
  PetscBool null_ctx = !*(void**) ctx ? PETSC_TRUE : PETSC_FALSE;
  PETSC_FORTRAN_OBJECT_CREATE(ctx);
  char* c_host;
  FIXCHAR(host, l_host, c_host);
  char* c_label;
  FIXCHAR(label, l_label, c_label);
  CHKFORTRANNULLOBJECT(ctx);
  *ierr = TSMonitorSPCtxCreate(MPI_Comm_f2c(*(comm)), c_host, c_label, *x, *y, *m, *n, *howoften, *retain, *phase ? PETSC_TRUE : PETSC_FALSE, *multispecies ? PETSC_TRUE : PETSC_FALSE, ctx);
  if (*ierr) return;
  FREECHAR(host, c_host);
  FREECHAR(label, c_label);
  if (! null_ctx && !*(void**) ctx) *(void **) ctx = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscts.h>
#include <petscts.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define tsmonitorspctxdestroy_ TSMONITORSPCTXDESTROY
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define tsmonitorspctxdestroy_ tsmonitorspctxdestroy
#endif
PETSC_EXTERN void tsmonitorspctxdestroy_(TSMonitorSPCtx *ctx, PetscErrorCode *ierr)
{
  PETSC_FORTRAN_OBJECT_F_DESTROYED_TO_C_NULL(ctx);
  PetscBool null_ctx = !*(void**) ctx ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(ctx);
  *ierr = TSMonitorSPCtxDestroy(ctx);
  if (*ierr) return;
  if (! null_ctx && !*(void**) ctx) *(void **) ctx = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscts.h>
#include <petscts.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define tsmonitorhgctxcreate_ TSMONITORHGCTXCREATE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define tsmonitorhgctxcreate_ tsmonitorhgctxcreate
#endif
PETSC_EXTERN void tsmonitorhgctxcreate_(MPI_Fint *comm, char host[], char label[], int *x, int *y, int *m, int *n, PetscInt *howoften, PetscInt *Ns, PetscInt *Nb, PetscBool *velocity, TSMonitorHGCtx *ctx, PetscErrorCode *ierr, PETSC_FORTRAN_CHARLEN_T l_host, PETSC_FORTRAN_CHARLEN_T l_label)
{
  PetscBool null_ctx = !*(void**) ctx ? PETSC_TRUE : PETSC_FALSE;
  PETSC_FORTRAN_OBJECT_CREATE(ctx);
  char* c_host;
  FIXCHAR(host, l_host, c_host);
  char* c_label;
  FIXCHAR(label, l_label, c_label);
  CHKFORTRANNULLOBJECT(ctx);
  *ierr = TSMonitorHGCtxCreate(MPI_Comm_f2c(*(comm)), c_host, c_label, *x, *y, *m, *n, *howoften, *Ns, *Nb, *velocity ? PETSC_TRUE : PETSC_FALSE, ctx);
  if (*ierr) return;
  FREECHAR(host, c_host);
  FREECHAR(label, c_label);
  if (! null_ctx && !*(void**) ctx) *(void **) ctx = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscts.h>
#include <petscts.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define tsmonitorhgctxdestroy_ TSMONITORHGCTXDESTROY
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define tsmonitorhgctxdestroy_ tsmonitorhgctxdestroy
#endif
PETSC_EXTERN void tsmonitorhgctxdestroy_(TSMonitorHGCtx *ctx, PetscErrorCode *ierr)
{
  PETSC_FORTRAN_OBJECT_F_DESTROYED_TO_C_NULL(ctx);
  PetscBool null_ctx = !*(void**) ctx ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(ctx);
  *ierr = TSMonitorHGCtxDestroy(ctx);
  if (*ierr) return;
  if (! null_ctx && !*(void**) ctx) *(void **) ctx = (void *)-2;
}
