#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petsclog.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petsclogstatecreate_ PETSCLOGSTATECREATE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petsclogstatecreate_ petsclogstatecreate
#endif
PETSC_EXTERN void petsclogstatecreate_(PetscLogState *state, PetscErrorCode *ierr)
{
  PetscBool null_state = !*(void**) state ? PETSC_TRUE : PETSC_FALSE;
  PETSC_FORTRAN_OBJECT_CREATE(state);
  CHKFORTRANNULLOBJECT(state);
  *ierr = PetscLogStateCreate(state);
  if (*ierr) return;
  if (! null_state && !*(void**) state) *(void **) state = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petsclog.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petsclogstatedestroy_ PETSCLOGSTATEDESTROY
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petsclogstatedestroy_ petsclogstatedestroy
#endif
PETSC_EXTERN void petsclogstatedestroy_(PetscLogState *state, PetscErrorCode *ierr)
{
  PETSC_FORTRAN_OBJECT_F_DESTROYED_TO_C_NULL(state);
  PetscBool null_state = !*(void**) state ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(state);
  *ierr = PetscLogStateDestroy(state);
  if (*ierr) return;
  if (! null_state && !*(void**) state) *(void **) state = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petsclog.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petsclogstatestagepush_ PETSCLOGSTATESTAGEPUSH
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petsclogstatestagepush_ petsclogstatestagepush
#endif
PETSC_EXTERN void petsclogstatestagepush_(PetscLogState *state, PetscLogStage *stage, PetscErrorCode *ierr)
{
  *ierr = PetscLogStateStagePush(*state, *stage);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petsclog.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petsclogstatestagepop_ PETSCLOGSTATESTAGEPOP
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petsclogstatestagepop_ petsclogstatestagepop
#endif
PETSC_EXTERN void petsclogstatestagepop_(PetscLogState *state, PetscErrorCode *ierr)
{
  *ierr = PetscLogStateStagePop(*state);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petsclog.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petsclogstategetcurrentstage_ PETSCLOGSTATEGETCURRENTSTAGE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petsclogstategetcurrentstage_ petsclogstategetcurrentstage
#endif
PETSC_EXTERN void petsclogstategetcurrentstage_(PetscLogState *state, PetscLogStage *current, PetscErrorCode *ierr)
{
  *ierr = PetscLogStateGetCurrentStage(*state, current);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petsclog.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petsclogstatestageregister_ PETSCLOGSTATESTAGEREGISTER
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petsclogstatestageregister_ petsclogstatestageregister
#endif
PETSC_EXTERN void petsclogstatestageregister_(PetscLogState *state, char sname[], PetscLogStage *stage, PetscErrorCode *ierr, PETSC_FORTRAN_CHARLEN_T l_sname)
{
  char* c_sname;
  FIXCHAR(sname, l_sname, c_sname);
  *ierr = PetscLogStateStageRegister(*state, c_sname, stage);
  if (*ierr) return;
  FREECHAR(sname, c_sname);
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petsclog.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petsclogstateeventregister_ PETSCLOGSTATEEVENTREGISTER
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petsclogstateeventregister_ petsclogstateeventregister
#endif
PETSC_EXTERN void petsclogstateeventregister_(PetscLogState *state, char sname[], PetscClassId *id, PetscLogEvent *event, PetscErrorCode *ierr, PETSC_FORTRAN_CHARLEN_T l_sname)
{
  char* c_sname;
  FIXCHAR(sname, l_sname, c_sname);
  *ierr = PetscLogStateEventRegister(*state, c_sname, *id, event);
  if (*ierr) return;
  FREECHAR(sname, c_sname);
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petsclog.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petsclogstateeventsetcollective_ PETSCLOGSTATEEVENTSETCOLLECTIVE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petsclogstateeventsetcollective_ petsclogstateeventsetcollective
#endif
PETSC_EXTERN void petsclogstateeventsetcollective_(PetscLogState *state, PetscLogEvent *event, PetscBool *collective, PetscErrorCode *ierr)
{
  *ierr = PetscLogStateEventSetCollective(*state, *event, *collective ? PETSC_TRUE : PETSC_FALSE);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petsclog.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petsclogstatestagesetactive_ PETSCLOGSTATESTAGESETACTIVE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petsclogstatestagesetactive_ petsclogstatestagesetactive
#endif
PETSC_EXTERN void petsclogstatestagesetactive_(PetscLogState *state, PetscLogStage *stage, PetscBool *isActive, PetscErrorCode *ierr)
{
  *ierr = PetscLogStateStageSetActive(*state, *stage, *isActive ? PETSC_TRUE : PETSC_FALSE);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petsclog.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petsclogstatestagegetactive_ PETSCLOGSTATESTAGEGETACTIVE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petsclogstatestagegetactive_ petsclogstatestagegetactive
#endif
PETSC_EXTERN void petsclogstatestagegetactive_(PetscLogState *state, PetscLogStage *stage, PetscBool *isActive, PetscErrorCode *ierr)
{
  CHKFORTRANNULLBOOL(isActive);
  *ierr = PetscLogStateStageGetActive(*state, *stage, isActive);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petsclog.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petsclogstateeventsetactive_ PETSCLOGSTATEEVENTSETACTIVE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petsclogstateeventsetactive_ petsclogstateeventsetactive
#endif
PETSC_EXTERN void petsclogstateeventsetactive_(PetscLogState *state, PetscLogStage *stage, PetscLogEvent *event, PetscBool *isActive, PetscErrorCode *ierr)
{
  *ierr = PetscLogStateEventSetActive(*state, *stage, *event, *isActive ? PETSC_TRUE : PETSC_FALSE);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petsclog.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petsclogstateeventsetactiveall_ PETSCLOGSTATEEVENTSETACTIVEALL
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petsclogstateeventsetactiveall_ petsclogstateeventsetactiveall
#endif
PETSC_EXTERN void petsclogstateeventsetactiveall_(PetscLogState *state, PetscLogEvent *event, PetscBool *isActive, PetscErrorCode *ierr)
{
  *ierr = PetscLogStateEventSetActiveAll(*state, *event, *isActive ? PETSC_TRUE : PETSC_FALSE);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petsclog.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petsclogstateclasssetactive_ PETSCLOGSTATECLASSSETACTIVE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petsclogstateclasssetactive_ petsclogstateclasssetactive
#endif
PETSC_EXTERN void petsclogstateclasssetactive_(PetscLogState *state, PetscLogStage *stage, PetscClassId *classid, PetscBool *isActive, PetscErrorCode *ierr)
{
  *ierr = PetscLogStateClassSetActive(*state, *stage, *classid, *isActive ? PETSC_TRUE : PETSC_FALSE);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petsclog.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petsclogstateclasssetactiveall_ PETSCLOGSTATECLASSSETACTIVEALL
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petsclogstateclasssetactiveall_ petsclogstateclasssetactiveall
#endif
PETSC_EXTERN void petsclogstateclasssetactiveall_(PetscLogState *state, PetscClassId *classid, PetscBool *isActive, PetscErrorCode *ierr)
{
  *ierr = PetscLogStateClassSetActiveAll(*state, *classid, *isActive ? PETSC_TRUE : PETSC_FALSE);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petsclog.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petsclogstateeventgetactive_ PETSCLOGSTATEEVENTGETACTIVE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petsclogstateeventgetactive_ petsclogstateeventgetactive
#endif
PETSC_EXTERN void petsclogstateeventgetactive_(PetscLogState *state, PetscLogStage *stage, PetscLogEvent *event, PetscBool *isActive, PetscErrorCode *ierr)
{
  CHKFORTRANNULLBOOL(isActive);
  *ierr = PetscLogStateEventGetActive(*state, *stage, *event, isActive);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petsclog.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petsclogstategeteventfromname_ PETSCLOGSTATEGETEVENTFROMNAME
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petsclogstategeteventfromname_ petsclogstategeteventfromname
#endif
PETSC_EXTERN void petsclogstategeteventfromname_(PetscLogState *state, char name[], PetscLogEvent *event, PetscErrorCode *ierr, PETSC_FORTRAN_CHARLEN_T l_name)
{
  char* c_name;
  FIXCHAR(name, l_name, c_name);
  *ierr = PetscLogStateGetEventFromName(*state, c_name, event);
  if (*ierr) return;
  FREECHAR(name, c_name);
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petsclog.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petsclogstategetstagefromname_ PETSCLOGSTATEGETSTAGEFROMNAME
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petsclogstategetstagefromname_ petsclogstategetstagefromname
#endif
PETSC_EXTERN void petsclogstategetstagefromname_(PetscLogState *state, char name[], PetscLogStage *stage, PetscErrorCode *ierr, PETSC_FORTRAN_CHARLEN_T l_name)
{
  char* c_name;
  FIXCHAR(name, l_name, c_name);
  *ierr = PetscLogStateGetStageFromName(*state, c_name, stage);
  if (*ierr) return;
  FREECHAR(name, c_name);
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petsclog.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petsclogstategetclassfromname_ PETSCLOGSTATEGETCLASSFROMNAME
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petsclogstategetclassfromname_ petsclogstategetclassfromname
#endif
PETSC_EXTERN void petsclogstategetclassfromname_(PetscLogState *state, char name[], PetscLogClass *clss, PetscErrorCode *ierr, PETSC_FORTRAN_CHARLEN_T l_name)
{
  char* c_name;
  FIXCHAR(name, l_name, c_name);
  *ierr = PetscLogStateGetClassFromName(*state, c_name, clss);
  if (*ierr) return;
  FREECHAR(name, c_name);
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petsclog.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petsclogstategetclassfromclassid_ PETSCLOGSTATEGETCLASSFROMCLASSID
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petsclogstategetclassfromclassid_ petsclogstategetclassfromclassid
#endif
PETSC_EXTERN void petsclogstategetclassfromclassid_(PetscLogState *state, PetscClassId *classid, PetscLogClass *clss, PetscErrorCode *ierr)
{
  *ierr = PetscLogStateGetClassFromClassId(*state, *classid, clss);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petsclog.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petsclogstategetnumevents_ PETSCLOGSTATEGETNUMEVENTS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petsclogstategetnumevents_ petsclogstategetnumevents
#endif
PETSC_EXTERN void petsclogstategetnumevents_(PetscLogState *state, PetscInt *numEvents, PetscErrorCode *ierr)
{
  CHKFORTRANNULLINTEGER(numEvents);
  *ierr = PetscLogStateGetNumEvents(*state, numEvents);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petsclog.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petsclogstategetnumstages_ PETSCLOGSTATEGETNUMSTAGES
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petsclogstategetnumstages_ petsclogstategetnumstages
#endif
PETSC_EXTERN void petsclogstategetnumstages_(PetscLogState *state, PetscInt *numStages, PetscErrorCode *ierr)
{
  CHKFORTRANNULLINTEGER(numStages);
  *ierr = PetscLogStateGetNumStages(*state, numStages);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petsclog.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petsclogstategetnumclasses_ PETSCLOGSTATEGETNUMCLASSES
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petsclogstategetnumclasses_ petsclogstategetnumclasses
#endif
PETSC_EXTERN void petsclogstategetnumclasses_(PetscLogState *state, PetscInt *numClasses, PetscErrorCode *ierr)
{
  CHKFORTRANNULLINTEGER(numClasses);
  *ierr = PetscLogStateGetNumClasses(*state, numClasses);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petsclog.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petsclogstateeventgetinfo_ PETSCLOGSTATEEVENTGETINFO
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petsclogstateeventgetinfo_ petsclogstateeventgetinfo
#endif
PETSC_EXTERN void petsclogstateeventgetinfo_(PetscLogState *state, PetscLogEvent *event, PetscLogEventInfo **info, PetscErrorCode *ierr)
{
  *ierr = PetscLogStateEventGetInfo(*state, *event, *info);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petsclog.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petsclogstatestagegetinfo_ PETSCLOGSTATESTAGEGETINFO
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petsclogstatestagegetinfo_ petsclogstatestagegetinfo
#endif
PETSC_EXTERN void petsclogstatestagegetinfo_(PetscLogState *state, PetscLogStage *stage, PetscLogStageInfo **info, PetscErrorCode *ierr)
{
  *ierr = PetscLogStateStageGetInfo(*state, *stage, *info);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petsclog.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petsclogstateclassregister_ PETSCLOGSTATECLASSREGISTER
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petsclogstateclassregister_ petsclogstateclassregister
#endif
PETSC_EXTERN void petsclogstateclassregister_(PetscLogState *state, char name[], PetscClassId *id, PetscLogClass *logclass, PetscErrorCode *ierr, PETSC_FORTRAN_CHARLEN_T l_name)
{
  char* c_name;
  FIXCHAR(name, l_name, c_name);
  *ierr = PetscLogStateClassRegister(*state, c_name, *id, logclass);
  if (*ierr) return;
  FREECHAR(name, c_name);
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petsclog.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petsclogstateclassgetinfo_ PETSCLOGSTATECLASSGETINFO
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petsclogstateclassgetinfo_ petsclogstateclassgetinfo
#endif
PETSC_EXTERN void petsclogstateclassgetinfo_(PetscLogState *state, PetscLogClass *clss, PetscLogClassInfo **info, PetscErrorCode *ierr)
{
  *ierr = PetscLogStateClassGetInfo(*state, *clss, *info);
  if (*ierr) return;
}
