#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petsclog.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscloghandlerstart_ PETSCLOGHANDLERSTART
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscloghandlerstart_ petscloghandlerstart
#endif
PETSC_EXTERN void petscloghandlerstart_(PetscLogHandler *h, PetscErrorCode *ierr)
{
  *ierr = PetscLogHandlerStart(*h);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petsclog.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscloghandlerstop_ PETSCLOGHANDLERSTOP
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscloghandlerstop_ petscloghandlerstop
#endif
PETSC_EXTERN void petscloghandlerstop_(PetscLogHandler *h, PetscErrorCode *ierr)
{
  *ierr = PetscLogHandlerStop(*h);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petsclog.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscaddlogdouble_ PETSCADDLOGDOUBLE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscaddlogdouble_ petscaddlogdouble
#endif
PETSC_EXTERN void petscaddlogdouble_(PetscLogDouble *tot, PetscLogDouble *tot_th, PetscLogDouble *tmp, PetscErrorCode *ierr)
{
  *ierr = PetscAddLogDouble(tot, tot_th, *tmp);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petsclog.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscaddlogdoublecnt_ PETSCADDLOGDOUBLECNT
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscaddlogdoublecnt_ petscaddlogdoublecnt
#endif
PETSC_EXTERN void petscaddlogdoublecnt_(PetscLogDouble *cnt, PetscLogDouble *tot, PetscLogDouble *cnt_th, PetscLogDouble *tot_th, PetscLogDouble *tmp, PetscErrorCode *ierr)
{
  *ierr = PetscAddLogDoubleCnt(cnt, tot, cnt_th, tot_th, *tmp);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petsclog.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscloggetdefaulthandler_ PETSCLOGGETDEFAULTHANDLER
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscloggetdefaulthandler_ petscloggetdefaulthandler
#endif
PETSC_EXTERN void petscloggetdefaulthandler_(PetscLogHandler *handler, PetscErrorCode *ierr)
{
  PetscBool null_handler = !*(void**) handler ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(handler);
  *ierr = PetscLogGetDefaultHandler(handler);
  if (*ierr) return;
  if (! null_handler && !*(void**) handler) *(void **) handler = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petsclog.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscloggetstate_ PETSCLOGGETSTATE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscloggetstate_ petscloggetstate
#endif
PETSC_EXTERN void petscloggetstate_(PetscLogState *state, PetscErrorCode *ierr)
{
  PetscBool null_state = !*(void**) state ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(state);
  *ierr = PetscLogGetState(state);
  if (*ierr) return;
  if (! null_state && !*(void**) state) *(void **) state = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petsclog.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petsclogisactive_ PETSCLOGISACTIVE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petsclogisactive_ petsclogisactive
#endif
PETSC_EXTERN void petsclogisactive_(PetscBool *isActive, PetscErrorCode *ierr)
{
  CHKFORTRANNULLBOOL(isActive);
  *ierr = PetscLogIsActive(isActive);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petsclog.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petsclogdefaultbegin_ PETSCLOGDEFAULTBEGIN
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petsclogdefaultbegin_ petsclogdefaultbegin
#endif
PETSC_EXTERN void petsclogdefaultbegin_(PetscErrorCode *ierr)
{
  *ierr = PetscLogDefaultBegin();
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petsclog.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petsclognestedbegin_ PETSCLOGNESTEDBEGIN
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petsclognestedbegin_ petsclognestedbegin
#endif
PETSC_EXTERN void petsclognestedbegin_(PetscErrorCode *ierr)
{
  *ierr = PetscLogNestedBegin();
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petsclog.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petsclogmpebegin_ PETSCLOGMPEBEGIN
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petsclogmpebegin_ petsclogmpebegin
#endif
PETSC_EXTERN void petsclogmpebegin_(PetscErrorCode *ierr)
{
  *ierr = PetscLogMPEBegin();
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petsclog.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petsclogperfstubsbegin_ PETSCLOGPERFSTUBSBEGIN
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petsclogperfstubsbegin_ petsclogperfstubsbegin
#endif
PETSC_EXTERN void petsclogperfstubsbegin_(PetscErrorCode *ierr)
{
  *ierr = PetscLogPerfstubsBegin();
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petsclog.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petsclogactions_ PETSCLOGACTIONS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petsclogactions_ petsclogactions
#endif
PETSC_EXTERN void petsclogactions_(PetscBool *flag, PetscErrorCode *ierr)
{
  *ierr = PetscLogActions(*flag ? PETSC_TRUE : PETSC_FALSE);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petsclog.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petsclogobjects_ PETSCLOGOBJECTS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petsclogobjects_ petsclogobjects
#endif
PETSC_EXTERN void petsclogobjects_(PetscBool *flag, PetscErrorCode *ierr)
{
  *ierr = PetscLogObjects(*flag ? PETSC_TRUE : PETSC_FALSE);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petsclog.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petsclogstageregister_ PETSCLOGSTAGEREGISTER
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petsclogstageregister_ petsclogstageregister
#endif
PETSC_EXTERN void petsclogstageregister_(char sname[], PetscLogStage *stage, PetscErrorCode *ierr, PETSC_FORTRAN_CHARLEN_T l_sname)
{
  char* c_sname;
  FIXCHAR(sname, l_sname, c_sname);
  *ierr = PetscLogStageRegister(c_sname, stage);
  if (*ierr) return;
  FREECHAR(sname, c_sname);
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petsclog.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petsclogstagepush_ PETSCLOGSTAGEPUSH
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petsclogstagepush_ petsclogstagepush
#endif
PETSC_EXTERN void petsclogstagepush_(PetscLogStage *stage, PetscErrorCode *ierr)
{
  *ierr = PetscLogStagePush(*stage);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petsclog.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petsclogstagepop_ PETSCLOGSTAGEPOP
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petsclogstagepop_ petsclogstagepop
#endif
PETSC_EXTERN void petsclogstagepop_(PetscErrorCode *ierr)
{
  *ierr = PetscLogStagePop();
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petsclog.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petsclogstagesetactive_ PETSCLOGSTAGESETACTIVE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petsclogstagesetactive_ petsclogstagesetactive
#endif
PETSC_EXTERN void petsclogstagesetactive_(PetscLogStage *stage, PetscBool *isActive, PetscErrorCode *ierr)
{
  *ierr = PetscLogStageSetActive(*stage, *isActive ? PETSC_TRUE : PETSC_FALSE);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petsclog.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petsclogstagegetactive_ PETSCLOGSTAGEGETACTIVE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petsclogstagegetactive_ petsclogstagegetactive
#endif
PETSC_EXTERN void petsclogstagegetactive_(PetscLogStage *stage, PetscBool *isActive, PetscErrorCode *ierr)
{
  CHKFORTRANNULLBOOL(isActive);
  *ierr = PetscLogStageGetActive(*stage, isActive);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petsclog.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petsclogstagesetvisible_ PETSCLOGSTAGESETVISIBLE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petsclogstagesetvisible_ petsclogstagesetvisible
#endif
PETSC_EXTERN void petsclogstagesetvisible_(PetscLogStage *stage, PetscBool *isVisible, PetscErrorCode *ierr)
{
  *ierr = PetscLogStageSetVisible(*stage, *isVisible ? PETSC_TRUE : PETSC_FALSE);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petsclog.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petsclogstagegetvisible_ PETSCLOGSTAGEGETVISIBLE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petsclogstagegetvisible_ petsclogstagegetvisible
#endif
PETSC_EXTERN void petsclogstagegetvisible_(PetscLogStage *stage, PetscBool *isVisible, PetscErrorCode *ierr)
{
  CHKFORTRANNULLBOOL(isVisible);
  *ierr = PetscLogStageGetVisible(*stage, isVisible);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petsclog.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petsclogstagegetid_ PETSCLOGSTAGEGETID
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petsclogstagegetid_ petsclogstagegetid
#endif
PETSC_EXTERN void petsclogstagegetid_(char name[], PetscLogStage *stage, PetscErrorCode *ierr, PETSC_FORTRAN_CHARLEN_T l_name)
{
  char* c_name;
  FIXCHAR(name, l_name, c_name);
  *ierr = PetscLogStageGetId(c_name, stage);
  if (*ierr) return;
  FREECHAR(name, c_name);
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petsclog.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petsclogstagegetname_ PETSCLOGSTAGEGETNAME
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petsclogstagegetname_ petsclogstagegetname
#endif
PETSC_EXTERN void petsclogstagegetname_(PetscLogStage *stage, char name[], PetscErrorCode *ierr, PETSC_FORTRAN_CHARLEN_T l_name)
{
  char* c_name = PETSC_NULLPTR;
  *ierr = PetscLogStageGetName(*stage, (const char **)&c_name);
  if (*ierr) return;
  *ierr = PetscStrncpy((char *)name, c_name, l_name);
  if (*ierr) return;
  FIXRETURNCHAR(PETSC_TRUE, name, l_name);
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petsclog.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petsclogeventregister_ PETSCLOGEVENTREGISTER
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petsclogeventregister_ petsclogeventregister
#endif
PETSC_EXTERN void petsclogeventregister_(char name[], PetscClassId *classid, PetscLogEvent *event, PetscErrorCode *ierr, PETSC_FORTRAN_CHARLEN_T l_name)
{
  char* c_name;
  FIXCHAR(name, l_name, c_name);
  *ierr = PetscLogEventRegister(c_name, *classid, event);
  if (*ierr) return;
  FREECHAR(name, c_name);
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petsclog.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petsclogeventsetcollective_ PETSCLOGEVENTSETCOLLECTIVE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petsclogeventsetcollective_ petsclogeventsetcollective
#endif
PETSC_EXTERN void petsclogeventsetcollective_(PetscLogEvent *event, PetscBool *collective, PetscErrorCode *ierr)
{
  *ierr = PetscLogEventSetCollective(*event, *collective ? PETSC_TRUE : PETSC_FALSE);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petsclog.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petsclogeventincludeclass_ PETSCLOGEVENTINCLUDECLASS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petsclogeventincludeclass_ petsclogeventincludeclass
#endif
PETSC_EXTERN void petsclogeventincludeclass_(PetscClassId *classid, PetscErrorCode *ierr)
{
  *ierr = PetscLogEventIncludeClass(*classid);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petsclog.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petsclogeventexcludeclass_ PETSCLOGEVENTEXCLUDECLASS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petsclogeventexcludeclass_ petsclogeventexcludeclass
#endif
PETSC_EXTERN void petsclogeventexcludeclass_(PetscClassId *classid, PetscErrorCode *ierr)
{
  *ierr = PetscLogEventExcludeClass(*classid);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petsclog.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petsclogeventactivate_ PETSCLOGEVENTACTIVATE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petsclogeventactivate_ petsclogeventactivate
#endif
PETSC_EXTERN void petsclogeventactivate_(PetscLogEvent *event, PetscErrorCode *ierr)
{
  *ierr = PetscLogEventActivate(*event);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petsclog.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petsclogeventdeactivate_ PETSCLOGEVENTDEACTIVATE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petsclogeventdeactivate_ petsclogeventdeactivate
#endif
PETSC_EXTERN void petsclogeventdeactivate_(PetscLogEvent *event, PetscErrorCode *ierr)
{
  *ierr = PetscLogEventDeactivate(*event);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petsclog.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petsclogeventdeactivatepush_ PETSCLOGEVENTDEACTIVATEPUSH
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petsclogeventdeactivatepush_ petsclogeventdeactivatepush
#endif
PETSC_EXTERN void petsclogeventdeactivatepush_(PetscLogEvent *event, PetscErrorCode *ierr)
{
  *ierr = PetscLogEventDeactivatePush(*event);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petsclog.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petsclogeventdeactivatepop_ PETSCLOGEVENTDEACTIVATEPOP
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petsclogeventdeactivatepop_ petsclogeventdeactivatepop
#endif
PETSC_EXTERN void petsclogeventdeactivatepop_(PetscLogEvent *event, PetscErrorCode *ierr)
{
  *ierr = PetscLogEventDeactivatePop(*event);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petsclog.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petsclogeventsetactiveall_ PETSCLOGEVENTSETACTIVEALL
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petsclogeventsetactiveall_ petsclogeventsetactiveall
#endif
PETSC_EXTERN void petsclogeventsetactiveall_(PetscLogEvent *event, PetscBool *isActive, PetscErrorCode *ierr)
{
  *ierr = PetscLogEventSetActiveAll(*event, *isActive ? PETSC_TRUE : PETSC_FALSE);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petsclog.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petsclogeventactivateclass_ PETSCLOGEVENTACTIVATECLASS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petsclogeventactivateclass_ petsclogeventactivateclass
#endif
PETSC_EXTERN void petsclogeventactivateclass_(PetscClassId *classid, PetscErrorCode *ierr)
{
  *ierr = PetscLogEventActivateClass(*classid);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petsclog.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petsclogeventdeactivateclass_ PETSCLOGEVENTDEACTIVATECLASS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petsclogeventdeactivateclass_ petsclogeventdeactivateclass
#endif
PETSC_EXTERN void petsclogeventdeactivateclass_(PetscClassId *classid, PetscErrorCode *ierr)
{
  *ierr = PetscLogEventDeactivateClass(*classid);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petsclog.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petsclogeventsync_ PETSCLOGEVENTSYNC
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petsclogeventsync_ petsclogeventsync
#endif
PETSC_EXTERN void petsclogeventsync_(PetscLogEvent *e, MPI_Fint *comm, PetscErrorCode *ierr)
{
  *ierr = PetscLogEventSync(*e, MPI_Comm_f2c(*(comm)));
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petsclog.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petsclogstagegetperfinfo_ PETSCLOGSTAGEGETPERFINFO
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petsclogstagegetperfinfo_ petsclogstagegetperfinfo
#endif
PETSC_EXTERN void petsclogstagegetperfinfo_(PetscLogStage *stage, PetscEventPerfInfo **info, PetscErrorCode *ierr)
{
  *ierr = PetscLogStageGetPerfInfo(*stage, *info);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petsclog.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petsclogeventgetperfinfo_ PETSCLOGEVENTGETPERFINFO
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petsclogeventgetperfinfo_ petsclogeventgetperfinfo
#endif
PETSC_EXTERN void petsclogeventgetperfinfo_(PetscLogStage *stage, PetscLogEvent *event, PetscEventPerfInfo **info, PetscErrorCode *ierr)
{
  *ierr = PetscLogEventGetPerfInfo(*stage, *event, *info);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petsclog.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petsclogeventsetdof_ PETSCLOGEVENTSETDOF
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petsclogeventsetdof_ petsclogeventsetdof
#endif
PETSC_EXTERN void petsclogeventsetdof_(PetscLogEvent *event, PetscInt *n, PetscLogDouble *dof, PetscErrorCode *ierr)
{
  *ierr = PetscLogEventSetDof(*event, *n, *dof);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petsclog.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petsclogeventseterror_ PETSCLOGEVENTSETERROR
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petsclogeventseterror_ petsclogeventseterror
#endif
PETSC_EXTERN void petsclogeventseterror_(PetscLogEvent *event, PetscInt *n, PetscLogDouble *error, PetscErrorCode *ierr)
{
  *ierr = PetscLogEventSetError(*event, *n, *error);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petsclog.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petsclogeventgetid_ PETSCLOGEVENTGETID
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petsclogeventgetid_ petsclogeventgetid
#endif
PETSC_EXTERN void petsclogeventgetid_(char name[], PetscLogEvent *event, PetscErrorCode *ierr, PETSC_FORTRAN_CHARLEN_T l_name)
{
  char* c_name;
  FIXCHAR(name, l_name, c_name);
  *ierr = PetscLogEventGetId(c_name, event);
  if (*ierr) return;
  FREECHAR(name, c_name);
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petsclog.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petsclogeventgetname_ PETSCLOGEVENTGETNAME
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petsclogeventgetname_ petsclogeventgetname
#endif
PETSC_EXTERN void petsclogeventgetname_(PetscLogEvent *event, char name[], PetscErrorCode *ierr, PETSC_FORTRAN_CHARLEN_T l_name)
{
  char* c_name = PETSC_NULLPTR;
  *ierr = PetscLogEventGetName(*event, (const char **)&c_name);
  if (*ierr) return;
  *ierr = PetscStrncpy((char *)name, c_name, l_name);
  if (*ierr) return;
  FIXRETURNCHAR(PETSC_TRUE, name, l_name);
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petsclog.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petsclogeventspause_ PETSCLOGEVENTSPAUSE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petsclogeventspause_ petsclogeventspause
#endif
PETSC_EXTERN void petsclogeventspause_(PetscErrorCode *ierr)
{
  *ierr = PetscLogEventsPause();
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petsclog.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petsclogeventsresume_ PETSCLOGEVENTSRESUME
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petsclogeventsresume_ petsclogeventsresume
#endif
PETSC_EXTERN void petsclogeventsresume_(PetscErrorCode *ierr)
{
  *ierr = PetscLogEventsResume();
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petsclog.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petsclogobjectcreate_ PETSCLOGOBJECTCREATE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petsclogobjectcreate_ petsclogobjectcreate
#endif
PETSC_EXTERN void petsclogobjectcreate_(PetscObject *h, PetscErrorCode *ierr)
{
  PETSC_FORTRAN_OBJECT_CREATE(h);
  *ierr = PetscLogObjectCreate(*h);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petsclog.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petsclogobjectdestroy_ PETSCLOGOBJECTDESTROY
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petsclogobjectdestroy_ petsclogobjectdestroy
#endif
PETSC_EXTERN void petsclogobjectdestroy_(PetscObject *h, PetscErrorCode *ierr)
{
  PETSC_FORTRAN_OBJECT_F_DESTROYED_TO_C_NULL(h);
  *ierr = PetscLogObjectDestroy(*h);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petsclog.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petsclogclassgetclassid_ PETSCLOGCLASSGETCLASSID
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petsclogclassgetclassid_ petsclogclassgetclassid
#endif
PETSC_EXTERN void petsclogclassgetclassid_(char name[], PetscClassId *classid, PetscErrorCode *ierr, PETSC_FORTRAN_CHARLEN_T l_name)
{
  char* c_name;
  FIXCHAR(name, l_name, c_name);
  *ierr = PetscLogClassGetClassId(c_name, classid);
  if (*ierr) return;
  FREECHAR(name, c_name);
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petsclog.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petsclogdump_ PETSCLOGDUMP
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petsclogdump_ petsclogdump
#endif
PETSC_EXTERN void petsclogdump_(char sname[], PetscErrorCode *ierr, PETSC_FORTRAN_CHARLEN_T l_sname)
{
  char* c_sname;
  FIXCHAR(sname, l_sname, c_sname);
  *ierr = PetscLogDump(c_sname);
  if (*ierr) return;
  FREECHAR(sname, c_sname);
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petsclog.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petsclogmpedump_ PETSCLOGMPEDUMP
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petsclogmpedump_ petsclogmpedump
#endif
PETSC_EXTERN void petsclogmpedump_(char sname[], PetscErrorCode *ierr, PETSC_FORTRAN_CHARLEN_T l_sname)
{
  char* c_sname;
  FIXCHAR(sname, l_sname, c_sname);
  *ierr = PetscLogMPEDump(c_sname);
  if (*ierr) return;
  FREECHAR(sname, c_sname);
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petsclog.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petsclogview_ PETSCLOGVIEW
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petsclogview_ petsclogview
#endif
PETSC_EXTERN void petsclogview_(PetscViewer *viewer, PetscErrorCode *ierr)
{
  PetscViewer v_viewer = PetscPatchDefaultViewers(viewer);
  *ierr = PetscLogView(v_viewer);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petsclog.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petsclogviewfromoptions_ PETSCLOGVIEWFROMOPTIONS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petsclogviewfromoptions_ petsclogviewfromoptions
#endif
PETSC_EXTERN void petsclogviewfromoptions_(PetscErrorCode *ierr)
{
  *ierr = PetscLogViewFromOptions();
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petsclog.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petsclogsetthreshold_ PETSCLOGSETTHRESHOLD
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petsclogsetthreshold_ petsclogsetthreshold
#endif
PETSC_EXTERN void petsclogsetthreshold_(PetscLogDouble *newThresh, PetscLogDouble *oldThresh, PetscErrorCode *ierr)
{
  *ierr = PetscLogSetThreshold(*newThresh, oldThresh);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petsclog.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscgetflops_ PETSCGETFLOPS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscgetflops_ petscgetflops
#endif
PETSC_EXTERN void petscgetflops_(PetscLogDouble *flops, PetscErrorCode *ierr)
{
  *ierr = PetscGetFlops(flops);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petsclog.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petsclogflops_ PETSCLOGFLOPS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petsclogflops_ petsclogflops
#endif
PETSC_EXTERN void petsclogflops_(PetscLogDouble *f, PetscErrorCode *ierr)
{
  *ierr = PetscLogFlops(*f);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petsclog.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscloggputime_ PETSCLOGGPUTIME
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscloggputime_ petscloggputime
#endif
PETSC_EXTERN void petscloggputime_(PetscErrorCode *ierr)
{
  *ierr = PetscLogGpuTime();
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petsclog.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscloggputimebegin_ PETSCLOGGPUTIMEBEGIN
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscloggputimebegin_ petscloggputimebegin
#endif
PETSC_EXTERN void petscloggputimebegin_(PetscErrorCode *ierr)
{
  *ierr = PetscLogGpuTimeBegin();
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petsclog.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscloggputimeend_ PETSCLOGGPUTIMEEND
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscloggputimeend_ petscloggputimeend
#endif
PETSC_EXTERN void petscloggputimeend_(PetscErrorCode *ierr)
{
  *ierr = PetscLogGpuTimeEnd();
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petsclog.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscloggpuenergy_ PETSCLOGGPUENERGY
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscloggpuenergy_ petscloggpuenergy
#endif
PETSC_EXTERN void petscloggpuenergy_(PetscErrorCode *ierr)
{
  *ierr = PetscLogGpuEnergy();
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petsclog.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscloggpuenergymeter_ PETSCLOGGPUENERGYMETER
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscloggpuenergymeter_ petscloggpuenergymeter
#endif
PETSC_EXTERN void petscloggpuenergymeter_(PetscErrorCode *ierr)
{
  *ierr = PetscLogGpuEnergyMeter();
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petsclog.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscloggpuenergymeterbegin_ PETSCLOGGPUENERGYMETERBEGIN
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscloggpuenergymeterbegin_ petscloggpuenergymeterbegin
#endif
PETSC_EXTERN void petscloggpuenergymeterbegin_(PetscErrorCode *ierr)
{
  *ierr = PetscLogGpuEnergyMeterBegin();
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petsclog.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscloggpuenergymeterend_ PETSCLOGGPUENERGYMETEREND
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscloggpuenergymeterend_ petscloggpuenergymeterend
#endif
PETSC_EXTERN void petscloggpuenergymeterend_(PetscErrorCode *ierr)
{
  *ierr = PetscLogGpuEnergyMeterEnd();
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscsys.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscclassidregister_ PETSCCLASSIDREGISTER
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscclassidregister_ petscclassidregister
#endif
PETSC_EXTERN void petscclassidregister_(char name[], PetscClassId *oclass, PetscErrorCode *ierr, PETSC_FORTRAN_CHARLEN_T l_name)
{
  char* c_name;
  FIXCHAR(name, l_name, c_name);
  *ierr = PetscClassIdRegister(c_name, oclass);
  if (*ierr) return;
  FREECHAR(name, c_name);
}
