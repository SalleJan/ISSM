#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscts.h>
#include <petscts.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define tsadaptfinalizepackage_ TSADAPTFINALIZEPACKAGE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define tsadaptfinalizepackage_ tsadaptfinalizepackage
#endif
PETSC_EXTERN void tsadaptfinalizepackage_(PetscErrorCode *ierr)
{
  *ierr = TSAdaptFinalizePackage();
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscts.h>
#include <petscts.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define tsadaptinitializepackage_ TSADAPTINITIALIZEPACKAGE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define tsadaptinitializepackage_ tsadaptinitializepackage
#endif
PETSC_EXTERN void tsadaptinitializepackage_(PetscErrorCode *ierr)
{
  *ierr = TSAdaptInitializePackage();
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscts.h>
#include <petscts.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define tsadaptsettype_ TSADAPTSETTYPE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define tsadaptsettype_ tsadaptsettype
#endif
PETSC_EXTERN void tsadaptsettype_(TSAdapt *adapt, char *type, PetscErrorCode *ierr, PETSC_FORTRAN_CHARLEN_T l_type)
{
  char* c_type;
  FIXCHAR(type, l_type, c_type);
  *ierr = TSAdaptSetType(*adapt, c_type);
  if (*ierr) return;
  FREECHAR(type, c_type);
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscts.h>
#include <petscts.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define tsadaptgettype_ TSADAPTGETTYPE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define tsadaptgettype_ tsadaptgettype
#endif
PETSC_EXTERN void tsadaptgettype_(TSAdapt *adapt, char *type, PetscErrorCode *ierr, PETSC_FORTRAN_CHARLEN_T l_type)
{
  char* c_type = PETSC_NULLPTR;
  *ierr = TSAdaptGetType(*adapt, (const char **)&c_type);
  if (*ierr) return;
  *ierr = PetscStrncpy((char *)type, c_type, l_type);
  if (*ierr) return;
  FIXRETURNCHAR(PETSC_TRUE, type, l_type);
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscts.h>
#include <petscts.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define tsadaptsetoptionsprefix_ TSADAPTSETOPTIONSPREFIX
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define tsadaptsetoptionsprefix_ tsadaptsetoptionsprefix
#endif
PETSC_EXTERN void tsadaptsetoptionsprefix_(TSAdapt *adapt, char prefix[], PetscErrorCode *ierr, PETSC_FORTRAN_CHARLEN_T l_prefix)
{
  char* c_prefix;
  FIXCHAR(prefix, l_prefix, c_prefix);
  *ierr = TSAdaptSetOptionsPrefix(*adapt, c_prefix);
  if (*ierr) return;
  FREECHAR(prefix, c_prefix);
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscts.h>
#include <petscts.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define tsadaptload_ TSADAPTLOAD
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define tsadaptload_ tsadaptload
#endif
PETSC_EXTERN void tsadaptload_(TSAdapt *adapt, PetscViewer *viewer, PetscErrorCode *ierr)
{
  PetscViewer v_viewer = PetscPatchDefaultViewers(viewer);
  *ierr = TSAdaptLoad(*adapt, v_viewer);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscts.h>
#include <petscts.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define tsadaptview_ TSADAPTVIEW
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define tsadaptview_ tsadaptview
#endif
PETSC_EXTERN void tsadaptview_(TSAdapt *adapt, PetscViewer *viewer, PetscErrorCode *ierr)
{
  PetscViewer v_viewer = PetscPatchDefaultViewers(viewer);
  *ierr = TSAdaptView(*adapt, v_viewer);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscts.h>
#include <petscts.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define tsadaptreset_ TSADAPTRESET
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define tsadaptreset_ tsadaptreset
#endif
PETSC_EXTERN void tsadaptreset_(TSAdapt *adapt, PetscErrorCode *ierr)
{
  *ierr = TSAdaptReset(*adapt);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscts.h>
#include <petscts.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define tsadaptdestroy_ TSADAPTDESTROY
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define tsadaptdestroy_ tsadaptdestroy
#endif
PETSC_EXTERN void tsadaptdestroy_(TSAdapt *adapt, PetscErrorCode *ierr)
{
  PETSC_FORTRAN_OBJECT_F_DESTROYED_TO_C_NULL(adapt);
  PetscBool null_adapt = !*(void**) adapt ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(adapt);
  *ierr = TSAdaptDestroy(adapt);
  if (*ierr) return;
  if (! null_adapt && !*(void**) adapt) *(void **) adapt = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscts.h>
#include <petscts.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define tsadaptsetmonitor_ TSADAPTSETMONITOR
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define tsadaptsetmonitor_ tsadaptsetmonitor
#endif
PETSC_EXTERN void tsadaptsetmonitor_(TSAdapt *adapt, PetscBool *flg, PetscErrorCode *ierr)
{
  *ierr = TSAdaptSetMonitor(*adapt, *flg ? PETSC_TRUE : PETSC_FALSE);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscts.h>
#include <petscts.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define tsadaptsetalwaysaccept_ TSADAPTSETALWAYSACCEPT
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define tsadaptsetalwaysaccept_ tsadaptsetalwaysaccept
#endif
PETSC_EXTERN void tsadaptsetalwaysaccept_(TSAdapt *adapt, PetscBool *flag, PetscErrorCode *ierr)
{
  *ierr = TSAdaptSetAlwaysAccept(*adapt, *flag ? PETSC_TRUE : PETSC_FALSE);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscts.h>
#include <petscts.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define tsadaptsetsafety_ TSADAPTSETSAFETY
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define tsadaptsetsafety_ tsadaptsetsafety
#endif
PETSC_EXTERN void tsadaptsetsafety_(TSAdapt *adapt, PetscReal *safety, PetscReal *reject_safety, PetscErrorCode *ierr)
{
  *ierr = TSAdaptSetSafety(*adapt, *safety, *reject_safety);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscts.h>
#include <petscts.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define tsadaptgetsafety_ TSADAPTGETSAFETY
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define tsadaptgetsafety_ tsadaptgetsafety
#endif
PETSC_EXTERN void tsadaptgetsafety_(TSAdapt *adapt, PetscReal *safety, PetscReal *reject_safety, PetscErrorCode *ierr)
{
  CHKFORTRANNULLREAL(safety);
  CHKFORTRANNULLREAL(reject_safety);
  *ierr = TSAdaptGetSafety(*adapt, safety, reject_safety);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscts.h>
#include <petscts.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define tsadaptsetmaxignore_ TSADAPTSETMAXIGNORE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define tsadaptsetmaxignore_ tsadaptsetmaxignore
#endif
PETSC_EXTERN void tsadaptsetmaxignore_(TSAdapt *adapt, PetscReal *max_ignore, PetscErrorCode *ierr)
{
  *ierr = TSAdaptSetMaxIgnore(*adapt, *max_ignore);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscts.h>
#include <petscts.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define tsadaptgetmaxignore_ TSADAPTGETMAXIGNORE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define tsadaptgetmaxignore_ tsadaptgetmaxignore
#endif
PETSC_EXTERN void tsadaptgetmaxignore_(TSAdapt *adapt, PetscReal *max_ignore, PetscErrorCode *ierr)
{
  CHKFORTRANNULLREAL(max_ignore);
  *ierr = TSAdaptGetMaxIgnore(*adapt, max_ignore);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscts.h>
#include <petscts.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define tsadaptsetclip_ TSADAPTSETCLIP
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define tsadaptsetclip_ tsadaptsetclip
#endif
PETSC_EXTERN void tsadaptsetclip_(TSAdapt *adapt, PetscReal *low, PetscReal *high, PetscErrorCode *ierr)
{
  *ierr = TSAdaptSetClip(*adapt, *low, *high);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscts.h>
#include <petscts.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define tsadaptgetclip_ TSADAPTGETCLIP
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define tsadaptgetclip_ tsadaptgetclip
#endif
PETSC_EXTERN void tsadaptgetclip_(TSAdapt *adapt, PetscReal *low, PetscReal *high, PetscErrorCode *ierr)
{
  CHKFORTRANNULLREAL(low);
  CHKFORTRANNULLREAL(high);
  *ierr = TSAdaptGetClip(*adapt, low, high);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscts.h>
#include <petscts.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define tsadaptsetscalesolvefailed_ TSADAPTSETSCALESOLVEFAILED
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define tsadaptsetscalesolvefailed_ tsadaptsetscalesolvefailed
#endif
PETSC_EXTERN void tsadaptsetscalesolvefailed_(TSAdapt *adapt, PetscReal *scale, PetscErrorCode *ierr)
{
  *ierr = TSAdaptSetScaleSolveFailed(*adapt, *scale);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscts.h>
#include <petscts.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define tsadaptgetscalesolvefailed_ TSADAPTGETSCALESOLVEFAILED
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define tsadaptgetscalesolvefailed_ tsadaptgetscalesolvefailed
#endif
PETSC_EXTERN void tsadaptgetscalesolvefailed_(TSAdapt *adapt, PetscReal *scale, PetscErrorCode *ierr)
{
  CHKFORTRANNULLREAL(scale);
  *ierr = TSAdaptGetScaleSolveFailed(*adapt, scale);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscts.h>
#include <petscts.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define tsadaptsetsteplimits_ TSADAPTSETSTEPLIMITS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define tsadaptsetsteplimits_ tsadaptsetsteplimits
#endif
PETSC_EXTERN void tsadaptsetsteplimits_(TSAdapt *adapt, PetscReal *hmin, PetscReal *hmax, PetscErrorCode *ierr)
{
  *ierr = TSAdaptSetStepLimits(*adapt, *hmin, *hmax);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscts.h>
#include <petscts.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define tsadaptgetsteplimits_ TSADAPTGETSTEPLIMITS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define tsadaptgetsteplimits_ tsadaptgetsteplimits
#endif
PETSC_EXTERN void tsadaptgetsteplimits_(TSAdapt *adapt, PetscReal *hmin, PetscReal *hmax, PetscErrorCode *ierr)
{
  CHKFORTRANNULLREAL(hmin);
  CHKFORTRANNULLREAL(hmax);
  *ierr = TSAdaptGetStepLimits(*adapt, hmin, hmax);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscts.h>
#include <petscts.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define tsadaptsetfromoptions_ TSADAPTSETFROMOPTIONS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define tsadaptsetfromoptions_ tsadaptsetfromoptions
#endif
PETSC_EXTERN void tsadaptsetfromoptions_(TSAdapt *adapt, PetscOptionItems *PetscOptionsObject, PetscErrorCode *ierr)
{
  *ierr = TSAdaptSetFromOptions(*adapt, *PetscOptionsObject);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscts.h>
#include <petscts.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define tsadaptcandidatesclear_ TSADAPTCANDIDATESCLEAR
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define tsadaptcandidatesclear_ tsadaptcandidatesclear
#endif
PETSC_EXTERN void tsadaptcandidatesclear_(TSAdapt *adapt, PetscErrorCode *ierr)
{
  *ierr = TSAdaptCandidatesClear(*adapt);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscts.h>
#include <petscts.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define tsadaptcandidateadd_ TSADAPTCANDIDATEADD
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define tsadaptcandidateadd_ tsadaptcandidateadd
#endif
PETSC_EXTERN void tsadaptcandidateadd_(TSAdapt *adapt, char name[], PetscInt *order, PetscInt *stageorder, PetscReal *ccfl, PetscReal *cost, PetscBool *inuse, PetscErrorCode *ierr, PETSC_FORTRAN_CHARLEN_T l_name)
{
  char* c_name;
  FIXCHAR(name, l_name, c_name);
  *ierr = TSAdaptCandidateAdd(*adapt, c_name, *order, *stageorder, *ccfl, *cost, *inuse ? PETSC_TRUE : PETSC_FALSE);
  if (*ierr) return;
  FREECHAR(name, c_name);
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscts.h>
#include <petscts.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define tsadaptchoose_ TSADAPTCHOOSE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define tsadaptchoose_ tsadaptchoose
#endif
PETSC_EXTERN void tsadaptchoose_(TSAdapt *adapt, TS *ts, PetscReal *h, PetscInt *next_sc, PetscReal *next_h, PetscBool *accept, PetscErrorCode *ierr)
{
  CHKFORTRANNULLINTEGER(next_sc);
  CHKFORTRANNULLREAL(next_h);
  CHKFORTRANNULLBOOL(accept);
  *ierr = TSAdaptChoose(*adapt, *ts, *h, next_sc, next_h, accept);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscts.h>
#include <petscts.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define tsadaptsettimestepincreasedelay_ TSADAPTSETTIMESTEPINCREASEDELAY
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define tsadaptsettimestepincreasedelay_ tsadaptsettimestepincreasedelay
#endif
PETSC_EXTERN void tsadaptsettimestepincreasedelay_(TSAdapt *adapt, PetscInt *cnt, PetscErrorCode *ierr)
{
  *ierr = TSAdaptSetTimeStepIncreaseDelay(*adapt, *cnt);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscts.h>
#include <petscts.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define tsadaptcheckstage_ TSADAPTCHECKSTAGE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define tsadaptcheckstage_ tsadaptcheckstage
#endif
PETSC_EXTERN void tsadaptcheckstage_(TSAdapt *adapt, TS *ts, PetscReal *t, Vec *Y, PetscBool *accept, PetscErrorCode *ierr)
{
  CHKFORTRANNULLBOOL(accept);
  *ierr = TSAdaptCheckStage(*adapt, *ts, *t, *Y, accept);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscts.h>
#include <petscts.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define tsadaptcreate_ TSADAPTCREATE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define tsadaptcreate_ tsadaptcreate
#endif
PETSC_EXTERN void tsadaptcreate_(MPI_Fint *comm, TSAdapt *inadapt, PetscErrorCode *ierr)
{
  PetscBool null_inadapt = !*(void**) inadapt ? PETSC_TRUE : PETSC_FALSE;
  PETSC_FORTRAN_OBJECT_CREATE(inadapt);
  CHKFORTRANNULLOBJECT(inadapt);
  *ierr = TSAdaptCreate(MPI_Comm_f2c(*(comm)), inadapt);
  if (*ierr) return;
  if (! null_inadapt && !*(void**) inadapt) *(void **) inadapt = (void *)-2;
}
