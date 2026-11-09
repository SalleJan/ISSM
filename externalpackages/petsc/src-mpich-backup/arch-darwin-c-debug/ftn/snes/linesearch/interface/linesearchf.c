#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsnes.h>
#include <petscsnes.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define sneslinesearchmonitorcancel_ SNESLINESEARCHMONITORCANCEL
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define sneslinesearchmonitorcancel_ sneslinesearchmonitorcancel
#endif
PETSC_EXTERN void sneslinesearchmonitorcancel_(SNESLineSearch *ls, PetscErrorCode *ierr)
{
  *ierr = SNESLineSearchMonitorCancel(*ls);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsnes.h>
#include <petscsnes.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define sneslinesearchmonitor_ SNESLINESEARCHMONITOR
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define sneslinesearchmonitor_ sneslinesearchmonitor
#endif
PETSC_EXTERN void sneslinesearchmonitor_(SNESLineSearch *ls, PetscErrorCode *ierr)
{
  *ierr = SNESLineSearchMonitor(*ls);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsnes.h>
#include <petscsnes.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define sneslinesearchmonitorsolutionupdate_ SNESLINESEARCHMONITORSOLUTIONUPDATE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define sneslinesearchmonitorsolutionupdate_ sneslinesearchmonitorsolutionupdate
#endif
PETSC_EXTERN void sneslinesearchmonitorsolutionupdate_(SNESLineSearch *ls, PetscViewerAndFormat **vf, PetscErrorCode *ierr)
{
  *ierr = SNESLineSearchMonitorSolutionUpdate(*ls, *vf);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsnes.h>
#include <petscsnes.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define sneslinesearchcreate_ SNESLINESEARCHCREATE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define sneslinesearchcreate_ sneslinesearchcreate
#endif
PETSC_EXTERN void sneslinesearchcreate_(MPI_Fint *comm, SNESLineSearch *outlinesearch, PetscErrorCode *ierr)
{
  PetscBool null_outlinesearch = !*(void**) outlinesearch ? PETSC_TRUE : PETSC_FALSE;
  PETSC_FORTRAN_OBJECT_CREATE(outlinesearch);
  CHKFORTRANNULLOBJECT(outlinesearch);
  *ierr = SNESLineSearchCreate(MPI_Comm_f2c(*(comm)), outlinesearch);
  if (*ierr) return;
  if (! null_outlinesearch && !*(void**) outlinesearch) *(void **) outlinesearch = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsnes.h>
#include <petscsnes.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define sneslinesearchsetup_ SNESLINESEARCHSETUP
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define sneslinesearchsetup_ sneslinesearchsetup
#endif
PETSC_EXTERN void sneslinesearchsetup_(SNESLineSearch *linesearch, PetscErrorCode *ierr)
{
  *ierr = SNESLineSearchSetUp(*linesearch);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsnes.h>
#include <petscsnes.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define sneslinesearchreset_ SNESLINESEARCHRESET
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define sneslinesearchreset_ sneslinesearchreset
#endif
PETSC_EXTERN void sneslinesearchreset_(SNESLineSearch *linesearch, PetscErrorCode *ierr)
{
  *ierr = SNESLineSearchReset(*linesearch);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsnes.h>
#include <petscsnes.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define sneslinesearchprecheck_ SNESLINESEARCHPRECHECK
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define sneslinesearchprecheck_ sneslinesearchprecheck
#endif
PETSC_EXTERN void sneslinesearchprecheck_(SNESLineSearch *linesearch, Vec *X, Vec *Y, PetscBool *changed, PetscErrorCode *ierr)
{
  CHKFORTRANNULLBOOL(changed);
  *ierr = SNESLineSearchPreCheck(*linesearch, *X, *Y, changed);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsnes.h>
#include <petscsnes.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define sneslinesearchpostcheck_ SNESLINESEARCHPOSTCHECK
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define sneslinesearchpostcheck_ sneslinesearchpostcheck
#endif
PETSC_EXTERN void sneslinesearchpostcheck_(SNESLineSearch *linesearch, Vec *X, Vec *Y, Vec *W, PetscBool *changed_Y, PetscBool *changed_W, PetscErrorCode *ierr)
{
  CHKFORTRANNULLBOOL(changed_Y);
  CHKFORTRANNULLBOOL(changed_W);
  *ierr = SNESLineSearchPostCheck(*linesearch, *X, *Y, *W, changed_Y, changed_W);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsnes.h>
#include <petscsnes.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define sneslinesearchprecheckpicard_ SNESLINESEARCHPRECHECKPICARD
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define sneslinesearchprecheckpicard_ sneslinesearchprecheckpicard
#endif
PETSC_EXTERN void sneslinesearchprecheckpicard_(SNESLineSearch *linesearch, Vec *X, Vec *Y, PetscBool *changed, PetscCtx ctx, PetscErrorCode *ierr)
{
  CHKFORTRANNULLBOOL(changed);
  *ierr = SNESLineSearchPreCheckPicard(*linesearch, *X, *Y, changed, ctx);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsnes.h>
#include <petscsnes.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define sneslinesearchapply_ SNESLINESEARCHAPPLY
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define sneslinesearchapply_ sneslinesearchapply
#endif
PETSC_EXTERN void sneslinesearchapply_(SNESLineSearch *linesearch, Vec *X, Vec *F, PetscReal *fnorm, Vec *Y, PetscErrorCode *ierr)
{
  CHKFORTRANNULLREAL(fnorm);
  *ierr = SNESLineSearchApply(*linesearch, *X, *F, fnorm, *Y);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsnes.h>
#include <petscsnes.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define sneslinesearchdestroy_ SNESLINESEARCHDESTROY
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define sneslinesearchdestroy_ sneslinesearchdestroy
#endif
PETSC_EXTERN void sneslinesearchdestroy_(SNESLineSearch *linesearch, PetscErrorCode *ierr)
{
  PETSC_FORTRAN_OBJECT_F_DESTROYED_TO_C_NULL(linesearch);
  PetscBool null_linesearch = !*(void**) linesearch ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(linesearch);
  *ierr = SNESLineSearchDestroy(linesearch);
  if (*ierr) return;
  if (! null_linesearch && !*(void**) linesearch) *(void **) linesearch = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsnes.h>
#include <petscsnes.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define sneslinesearchsetdefaultmonitor_ SNESLINESEARCHSETDEFAULTMONITOR
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define sneslinesearchsetdefaultmonitor_ sneslinesearchsetdefaultmonitor
#endif
PETSC_EXTERN void sneslinesearchsetdefaultmonitor_(SNESLineSearch *linesearch, PetscViewer *viewer, PetscErrorCode *ierr)
{
  PetscViewer v_viewer = PetscPatchDefaultViewers(viewer);
  *ierr = SNESLineSearchSetDefaultMonitor(*linesearch, v_viewer);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsnes.h>
#include <petscsnes.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define sneslinesearchgetdefaultmonitor_ SNESLINESEARCHGETDEFAULTMONITOR
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define sneslinesearchgetdefaultmonitor_ sneslinesearchgetdefaultmonitor
#endif
PETSC_EXTERN void sneslinesearchgetdefaultmonitor_(SNESLineSearch *linesearch, PetscViewer *monitor, PetscErrorCode *ierr)
{
  PetscBool null_monitor = !*(void**) monitor ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(monitor);
  *ierr = SNESLineSearchGetDefaultMonitor(*linesearch, monitor);
  if (*ierr) return;
  if (! null_monitor && !*(void**) monitor) *(void **) monitor = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsnes.h>
#include <petscsnes.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define sneslinesearchsetfromoptions_ SNESLINESEARCHSETFROMOPTIONS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define sneslinesearchsetfromoptions_ sneslinesearchsetfromoptions
#endif
PETSC_EXTERN void sneslinesearchsetfromoptions_(SNESLineSearch *linesearch, PetscErrorCode *ierr)
{
  *ierr = SNESLineSearchSetFromOptions(*linesearch);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsnes.h>
#include <petscsnes.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define sneslinesearchview_ SNESLINESEARCHVIEW
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define sneslinesearchview_ sneslinesearchview
#endif
PETSC_EXTERN void sneslinesearchview_(SNESLineSearch *linesearch, PetscViewer *viewer, PetscErrorCode *ierr)
{
  PetscViewer v_viewer = PetscPatchDefaultViewers(viewer);
  *ierr = SNESLineSearchView(*linesearch, v_viewer);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsnes.h>
#include <petscsnes.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define sneslinesearchgettype_ SNESLINESEARCHGETTYPE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define sneslinesearchgettype_ sneslinesearchgettype
#endif
PETSC_EXTERN void sneslinesearchgettype_(SNESLineSearch *linesearch, char *type, PetscErrorCode *ierr, PETSC_FORTRAN_CHARLEN_T l_type)
{
  char* c_type = PETSC_NULLPTR;
  *ierr = SNESLineSearchGetType(*linesearch, (const char **)&c_type);
  if (*ierr) return;
  *ierr = PetscStrncpy((char *)type, c_type, l_type);
  if (*ierr) return;
  FIXRETURNCHAR(PETSC_TRUE, type, l_type);
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsnes.h>
#include <petscsnes.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define sneslinesearchsettype_ SNESLINESEARCHSETTYPE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define sneslinesearchsettype_ sneslinesearchsettype
#endif
PETSC_EXTERN void sneslinesearchsettype_(SNESLineSearch *linesearch, char *type, PetscErrorCode *ierr, PETSC_FORTRAN_CHARLEN_T l_type)
{
  char* c_type;
  FIXCHAR(type, l_type, c_type);
  *ierr = SNESLineSearchSetType(*linesearch, c_type);
  if (*ierr) return;
  FREECHAR(type, c_type);
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsnes.h>
#include <petscsnes.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define sneslinesearchsetsnes_ SNESLINESEARCHSETSNES
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define sneslinesearchsetsnes_ sneslinesearchsetsnes
#endif
PETSC_EXTERN void sneslinesearchsetsnes_(SNESLineSearch *linesearch, SNES *snes, PetscErrorCode *ierr)
{
  *ierr = SNESLineSearchSetSNES(*linesearch, *snes);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsnes.h>
#include <petscsnes.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define sneslinesearchgetsnes_ SNESLINESEARCHGETSNES
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define sneslinesearchgetsnes_ sneslinesearchgetsnes
#endif
PETSC_EXTERN void sneslinesearchgetsnes_(SNESLineSearch *linesearch, SNES *snes, PetscErrorCode *ierr)
{
  PetscBool null_snes = !*(void**) snes ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(snes);
  *ierr = SNESLineSearchGetSNES(*linesearch, snes);
  if (*ierr) return;
  if (! null_snes && !*(void**) snes) *(void **) snes = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsnes.h>
#include <petscsnes.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define sneslinesearchgetlambda_ SNESLINESEARCHGETLAMBDA
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define sneslinesearchgetlambda_ sneslinesearchgetlambda
#endif
PETSC_EXTERN void sneslinesearchgetlambda_(SNESLineSearch *linesearch, PetscReal *lambda, PetscErrorCode *ierr)
{
  CHKFORTRANNULLREAL(lambda);
  *ierr = SNESLineSearchGetLambda(*linesearch, lambda);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsnes.h>
#include <petscsnes.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define sneslinesearchsetlambda_ SNESLINESEARCHSETLAMBDA
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define sneslinesearchsetlambda_ sneslinesearchsetlambda
#endif
PETSC_EXTERN void sneslinesearchsetlambda_(SNESLineSearch *linesearch, PetscReal *lambda, PetscErrorCode *ierr)
{
  *ierr = SNESLineSearchSetLambda(*linesearch, *lambda);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsnes.h>
#include <petscsnes.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define sneslinesearchgettolerances_ SNESLINESEARCHGETTOLERANCES
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define sneslinesearchgettolerances_ sneslinesearchgettolerances
#endif
PETSC_EXTERN void sneslinesearchgettolerances_(SNESLineSearch *linesearch, PetscReal *minlambda, PetscReal *maxlambda, PetscReal *rtol, PetscReal *atol, PetscReal *ltol, PetscInt *max_it, PetscErrorCode *ierr)
{
  CHKFORTRANNULLREAL(minlambda);
  CHKFORTRANNULLREAL(maxlambda);
  CHKFORTRANNULLREAL(rtol);
  CHKFORTRANNULLREAL(atol);
  CHKFORTRANNULLREAL(ltol);
  CHKFORTRANNULLINTEGER(max_it);
  *ierr = SNESLineSearchGetTolerances(*linesearch, minlambda, maxlambda, rtol, atol, ltol, max_it);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsnes.h>
#include <petscsnes.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define sneslinesearchsettolerances_ SNESLINESEARCHSETTOLERANCES
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define sneslinesearchsettolerances_ sneslinesearchsettolerances
#endif
PETSC_EXTERN void sneslinesearchsettolerances_(SNESLineSearch *linesearch, PetscReal *minlambda, PetscReal *maxlambda, PetscReal *rtol, PetscReal *atol, PetscReal *ltol, PetscInt *max_it, PetscErrorCode *ierr)
{
  *ierr = SNESLineSearchSetTolerances(*linesearch, *minlambda, *maxlambda, *rtol, *atol, *ltol, *max_it);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsnes.h>
#include <petscsnes.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define sneslinesearchgetdamping_ SNESLINESEARCHGETDAMPING
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define sneslinesearchgetdamping_ sneslinesearchgetdamping
#endif
PETSC_EXTERN void sneslinesearchgetdamping_(SNESLineSearch *linesearch, PetscReal *damping, PetscErrorCode *ierr)
{
  CHKFORTRANNULLREAL(damping);
  *ierr = SNESLineSearchGetDamping(*linesearch, damping);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsnes.h>
#include <petscsnes.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define sneslinesearchsetdamping_ SNESLINESEARCHSETDAMPING
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define sneslinesearchsetdamping_ sneslinesearchsetdamping
#endif
PETSC_EXTERN void sneslinesearchsetdamping_(SNESLineSearch *linesearch, PetscReal *damping, PetscErrorCode *ierr)
{
  *ierr = SNESLineSearchSetDamping(*linesearch, *damping);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsnes.h>
#include <petscsnes.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define sneslinesearchgetorder_ SNESLINESEARCHGETORDER
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define sneslinesearchgetorder_ sneslinesearchgetorder
#endif
PETSC_EXTERN void sneslinesearchgetorder_(SNESLineSearch *linesearch, PetscInt *order, PetscErrorCode *ierr)
{
  CHKFORTRANNULLINTEGER(order);
  *ierr = SNESLineSearchGetOrder(*linesearch, order);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsnes.h>
#include <petscsnes.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define sneslinesearchsetorder_ SNESLINESEARCHSETORDER
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define sneslinesearchsetorder_ sneslinesearchsetorder
#endif
PETSC_EXTERN void sneslinesearchsetorder_(SNESLineSearch *linesearch, PetscInt *order, PetscErrorCode *ierr)
{
  *ierr = SNESLineSearchSetOrder(*linesearch, *order);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsnes.h>
#include <petscsnes.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define sneslinesearchgetnorms_ SNESLINESEARCHGETNORMS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define sneslinesearchgetnorms_ sneslinesearchgetnorms
#endif
PETSC_EXTERN void sneslinesearchgetnorms_(SNESLineSearch *linesearch, PetscReal *xnorm, PetscReal *fnorm, PetscReal *ynorm, PetscErrorCode *ierr)
{
  CHKFORTRANNULLREAL(xnorm);
  CHKFORTRANNULLREAL(fnorm);
  CHKFORTRANNULLREAL(ynorm);
  *ierr = SNESLineSearchGetNorms(*linesearch, xnorm, fnorm, ynorm);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsnes.h>
#include <petscsnes.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define sneslinesearchsetnorms_ SNESLINESEARCHSETNORMS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define sneslinesearchsetnorms_ sneslinesearchsetnorms
#endif
PETSC_EXTERN void sneslinesearchsetnorms_(SNESLineSearch *linesearch, PetscReal *xnorm, PetscReal *fnorm, PetscReal *ynorm, PetscErrorCode *ierr)
{
  *ierr = SNESLineSearchSetNorms(*linesearch, *xnorm, *fnorm, *ynorm);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsnes.h>
#include <petscsnes.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define sneslinesearchcomputenorms_ SNESLINESEARCHCOMPUTENORMS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define sneslinesearchcomputenorms_ sneslinesearchcomputenorms
#endif
PETSC_EXTERN void sneslinesearchcomputenorms_(SNESLineSearch *linesearch, PetscErrorCode *ierr)
{
  *ierr = SNESLineSearchComputeNorms(*linesearch);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsnes.h>
#include <petscsnes.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define sneslinesearchsetcomputenorms_ SNESLINESEARCHSETCOMPUTENORMS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define sneslinesearchsetcomputenorms_ sneslinesearchsetcomputenorms
#endif
PETSC_EXTERN void sneslinesearchsetcomputenorms_(SNESLineSearch *linesearch, PetscBool *flg, PetscErrorCode *ierr)
{
  *ierr = SNESLineSearchSetComputeNorms(*linesearch, *flg ? PETSC_TRUE : PETSC_FALSE);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsnes.h>
#include <petscsnes.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define sneslinesearchgetvecs_ SNESLINESEARCHGETVECS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define sneslinesearchgetvecs_ sneslinesearchgetvecs
#endif
PETSC_EXTERN void sneslinesearchgetvecs_(SNESLineSearch *linesearch, Vec *X, Vec *F, Vec *Y, Vec *W, Vec *G, PetscErrorCode *ierr)
{
  PetscBool null_X = !*(void**) X ? PETSC_TRUE : PETSC_FALSE;
  PetscBool null_F = !*(void**) F ? PETSC_TRUE : PETSC_FALSE;
  PetscBool null_Y = !*(void**) Y ? PETSC_TRUE : PETSC_FALSE;
  PetscBool null_W = !*(void**) W ? PETSC_TRUE : PETSC_FALSE;
  PetscBool null_G = !*(void**) G ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(X);
  CHKFORTRANNULLOBJECT(F);
  CHKFORTRANNULLOBJECT(Y);
  CHKFORTRANNULLOBJECT(W);
  CHKFORTRANNULLOBJECT(G);
  *ierr = SNESLineSearchGetVecs(*linesearch, X, F, Y, W, G);
  if (*ierr) return;
  if (! null_X && !*(void**) X) *(void **) X = (void *)-2;
  if (! null_F && !*(void**) F) *(void **) F = (void *)-2;
  if (! null_Y && !*(void**) Y) *(void **) Y = (void *)-2;
  if (! null_W && !*(void**) W) *(void **) W = (void *)-2;
  if (! null_G && !*(void**) G) *(void **) G = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsnes.h>
#include <petscsnes.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define sneslinesearchsetvecs_ SNESLINESEARCHSETVECS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define sneslinesearchsetvecs_ sneslinesearchsetvecs
#endif
PETSC_EXTERN void sneslinesearchsetvecs_(SNESLineSearch *linesearch, Vec *X, Vec *F, Vec *Y, Vec *W, Vec *G, PetscErrorCode *ierr)
{
  *ierr = SNESLineSearchSetVecs(*linesearch, *X, *F, *Y, *W, *G);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsnes.h>
#include <petscsnes.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define sneslinesearchappendoptionsprefix_ SNESLINESEARCHAPPENDOPTIONSPREFIX
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define sneslinesearchappendoptionsprefix_ sneslinesearchappendoptionsprefix
#endif
PETSC_EXTERN void sneslinesearchappendoptionsprefix_(SNESLineSearch *linesearch, char prefix[], PetscErrorCode *ierr, PETSC_FORTRAN_CHARLEN_T l_prefix)
{
  char* c_prefix;
  FIXCHAR(prefix, l_prefix, c_prefix);
  *ierr = SNESLineSearchAppendOptionsPrefix(*linesearch, c_prefix);
  if (*ierr) return;
  FREECHAR(prefix, c_prefix);
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsnes.h>
#include <petscsnes.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define sneslinesearchgetoptionsprefix_ SNESLINESEARCHGETOPTIONSPREFIX
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define sneslinesearchgetoptionsprefix_ sneslinesearchgetoptionsprefix
#endif
PETSC_EXTERN void sneslinesearchgetoptionsprefix_(SNESLineSearch *linesearch, char prefix[], PetscErrorCode *ierr, PETSC_FORTRAN_CHARLEN_T l_prefix)
{
  char* c_prefix = PETSC_NULLPTR;
  *ierr = SNESLineSearchGetOptionsPrefix(*linesearch, (const char **)&c_prefix);
  if (*ierr) return;
  *ierr = PetscStrncpy((char *)prefix, c_prefix, l_prefix);
  if (*ierr) return;
  FIXRETURNCHAR(PETSC_TRUE, prefix, l_prefix);
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsnes.h>
#include <petscsnes.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define sneslinesearchsetworkvecs_ SNESLINESEARCHSETWORKVECS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define sneslinesearchsetworkvecs_ sneslinesearchsetworkvecs
#endif
PETSC_EXTERN void sneslinesearchsetworkvecs_(SNESLineSearch *linesearch, PetscInt *nwork, PetscErrorCode *ierr)
{
  *ierr = SNESLineSearchSetWorkVecs(*linesearch, *nwork);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsnes.h>
#include <petscsnes.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define sneslinesearchgetreason_ SNESLINESEARCHGETREASON
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define sneslinesearchgetreason_ sneslinesearchgetreason
#endif
PETSC_EXTERN void sneslinesearchgetreason_(SNESLineSearch *linesearch, SNESLineSearchReason *reason, PetscErrorCode *ierr)
{
  *ierr = SNESLineSearchGetReason(*linesearch, reason);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsnes.h>
#include <petscsnes.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define sneslinesearchsetreason_ SNESLINESEARCHSETREASON
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define sneslinesearchsetreason_ sneslinesearchsetreason
#endif
PETSC_EXTERN void sneslinesearchsetreason_(SNESLineSearch *linesearch, SNESLineSearchReason *reason, PetscErrorCode *ierr)
{
  *ierr = SNESLineSearchSetReason(*linesearch, *reason);
  if (*ierr) return;
}
