#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petsclog.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscloghandlercreate_ PETSCLOGHANDLERCREATE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscloghandlercreate_ petscloghandlercreate
#endif
PETSC_EXTERN void petscloghandlercreate_(MPI_Fint *comm, PetscLogHandler *handler, PetscErrorCode *ierr)
{
  PetscBool null_handler = !*(void**) handler ? PETSC_TRUE : PETSC_FALSE;
  PETSC_FORTRAN_OBJECT_CREATE(handler);
  CHKFORTRANNULLOBJECT(handler);
  *ierr = PetscLogHandlerCreate(MPI_Comm_f2c(*(comm)), handler);
  if (*ierr) return;
  if (! null_handler && !*(void**) handler) *(void **) handler = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petsclog.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscloghandlerdestroy_ PETSCLOGHANDLERDESTROY
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscloghandlerdestroy_ petscloghandlerdestroy
#endif
PETSC_EXTERN void petscloghandlerdestroy_(PetscLogHandler *handler, PetscErrorCode *ierr)
{
  PETSC_FORTRAN_OBJECT_F_DESTROYED_TO_C_NULL(handler);
  PetscBool null_handler = !*(void**) handler ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(handler);
  *ierr = PetscLogHandlerDestroy(handler);
  if (*ierr) return;
  if (! null_handler && !*(void**) handler) *(void **) handler = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petsclog.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscloghandlersetstate_ PETSCLOGHANDLERSETSTATE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscloghandlersetstate_ petscloghandlersetstate
#endif
PETSC_EXTERN void petscloghandlersetstate_(PetscLogHandler *h, PetscLogState *state, PetscErrorCode *ierr)
{
  *ierr = PetscLogHandlerSetState(*h, *state);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petsclog.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscloghandlergetstate_ PETSCLOGHANDLERGETSTATE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscloghandlergetstate_ petscloghandlergetstate
#endif
PETSC_EXTERN void petscloghandlergetstate_(PetscLogHandler *h, PetscLogState *state, PetscErrorCode *ierr)
{
  PetscBool null_state = !*(void**) state ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(state);
  *ierr = PetscLogHandlerGetState(*h, state);
  if (*ierr) return;
  if (! null_state && !*(void**) state) *(void **) state = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petsclog.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscloghandlereventbegin_ PETSCLOGHANDLEREVENTBEGIN
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscloghandlereventbegin_ petscloghandlereventbegin
#endif
PETSC_EXTERN void petscloghandlereventbegin_(PetscLogHandler *h, PetscLogEvent *e, PetscObject *o1, PetscObject *o2, PetscObject *o3, PetscObject *o4, PetscErrorCode *ierr)
{
  *ierr = PetscLogHandlerEventBegin(*h, *e, *o1, *o2, *o3, *o4);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petsclog.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscloghandlereventend_ PETSCLOGHANDLEREVENTEND
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscloghandlereventend_ petscloghandlereventend
#endif
PETSC_EXTERN void petscloghandlereventend_(PetscLogHandler *h, PetscLogEvent *e, PetscObject *o1, PetscObject *o2, PetscObject *o3, PetscObject *o4, PetscErrorCode *ierr)
{
  *ierr = PetscLogHandlerEventEnd(*h, *e, *o1, *o2, *o3, *o4);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petsclog.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscloghandlereventsync_ PETSCLOGHANDLEREVENTSYNC
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscloghandlereventsync_ petscloghandlereventsync
#endif
PETSC_EXTERN void petscloghandlereventsync_(PetscLogHandler *h, PetscLogEvent *e, MPI_Fint *comm, PetscErrorCode *ierr)
{
  *ierr = PetscLogHandlerEventSync(*h, *e, MPI_Comm_f2c(*(comm)));
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petsclog.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscloghandlerobjectcreate_ PETSCLOGHANDLEROBJECTCREATE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscloghandlerobjectcreate_ petscloghandlerobjectcreate
#endif
PETSC_EXTERN void petscloghandlerobjectcreate_(PetscLogHandler *h, PetscObject *obj, PetscErrorCode *ierr)
{
  PETSC_FORTRAN_OBJECT_CREATE(obj);
  *ierr = PetscLogHandlerObjectCreate(*h, *obj);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petsclog.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscloghandlerobjectdestroy_ PETSCLOGHANDLEROBJECTDESTROY
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscloghandlerobjectdestroy_ petscloghandlerobjectdestroy
#endif
PETSC_EXTERN void petscloghandlerobjectdestroy_(PetscLogHandler *h, PetscObject *obj, PetscErrorCode *ierr)
{
  PETSC_FORTRAN_OBJECT_F_DESTROYED_TO_C_NULL(h);
  *ierr = PetscLogHandlerObjectDestroy(*h, *obj);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petsclog.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscloghandlerstagepush_ PETSCLOGHANDLERSTAGEPUSH
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscloghandlerstagepush_ petscloghandlerstagepush
#endif
PETSC_EXTERN void petscloghandlerstagepush_(PetscLogHandler *h, PetscLogStage *stage, PetscErrorCode *ierr)
{
  *ierr = PetscLogHandlerStagePush(*h, *stage);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petsclog.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscloghandlerstagepop_ PETSCLOGHANDLERSTAGEPOP
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscloghandlerstagepop_ petscloghandlerstagepop
#endif
PETSC_EXTERN void petscloghandlerstagepop_(PetscLogHandler *h, PetscLogStage *stage, PetscErrorCode *ierr)
{
  *ierr = PetscLogHandlerStagePop(*h, *stage);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petsclog.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscloghandlerview_ PETSCLOGHANDLERVIEW
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscloghandlerview_ petscloghandlerview
#endif
PETSC_EXTERN void petscloghandlerview_(PetscLogHandler *h, PetscViewer *viewer, PetscErrorCode *ierr)
{
  PetscViewer v_viewer = PetscPatchDefaultViewers(viewer);
  *ierr = PetscLogHandlerView(*h, v_viewer);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petsclog.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscloghandlersetlogactions_ PETSCLOGHANDLERSETLOGACTIONS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscloghandlersetlogactions_ petscloghandlersetlogactions
#endif
PETSC_EXTERN void petscloghandlersetlogactions_(PetscLogHandler *handler, PetscBool *flag, PetscErrorCode *ierr)
{
  *ierr = PetscLogHandlerSetLogActions(*handler, *flag ? PETSC_TRUE : PETSC_FALSE);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petsclog.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscloghandlersetlogobjects_ PETSCLOGHANDLERSETLOGOBJECTS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscloghandlersetlogobjects_ petscloghandlersetlogobjects
#endif
PETSC_EXTERN void petscloghandlersetlogobjects_(PetscLogHandler *handler, PetscBool *flag, PetscErrorCode *ierr)
{
  *ierr = PetscLogHandlerSetLogObjects(*handler, *flag ? PETSC_TRUE : PETSC_FALSE);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petsclog.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscloghandlergetnumobjects_ PETSCLOGHANDLERGETNUMOBJECTS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscloghandlergetnumobjects_ petscloghandlergetnumobjects
#endif
PETSC_EXTERN void petscloghandlergetnumobjects_(PetscLogHandler *handler, PetscInt *num_objects, PetscErrorCode *ierr)
{
  CHKFORTRANNULLINTEGER(num_objects);
  *ierr = PetscLogHandlerGetNumObjects(*handler, num_objects);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petsclog.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscloghandlereventdeactivatepush_ PETSCLOGHANDLEREVENTDEACTIVATEPUSH
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscloghandlereventdeactivatepush_ petscloghandlereventdeactivatepush
#endif
PETSC_EXTERN void petscloghandlereventdeactivatepush_(PetscLogHandler *handler, PetscLogStage *stage, PetscLogEvent *event, PetscErrorCode *ierr)
{
  *ierr = PetscLogHandlerEventDeactivatePush(*handler, *stage, *event);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petsclog.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscloghandlereventdeactivatepop_ PETSCLOGHANDLEREVENTDEACTIVATEPOP
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscloghandlereventdeactivatepop_ petscloghandlereventdeactivatepop
#endif
PETSC_EXTERN void petscloghandlereventdeactivatepop_(PetscLogHandler *handler, PetscLogStage *stage, PetscLogEvent *event, PetscErrorCode *ierr)
{
  *ierr = PetscLogHandlerEventDeactivatePop(*handler, *stage, *event);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petsclog.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscloghandlereventspause_ PETSCLOGHANDLEREVENTSPAUSE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscloghandlereventspause_ petscloghandlereventspause
#endif
PETSC_EXTERN void petscloghandlereventspause_(PetscLogHandler *handler, PetscErrorCode *ierr)
{
  *ierr = PetscLogHandlerEventsPause(*handler);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petsclog.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscloghandlereventsresume_ PETSCLOGHANDLEREVENTSRESUME
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscloghandlereventsresume_ petscloghandlereventsresume
#endif
PETSC_EXTERN void petscloghandlereventsresume_(PetscLogHandler *handler, PetscErrorCode *ierr)
{
  *ierr = PetscLogHandlerEventsResume(*handler);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petsclog.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscloghandlerdump_ PETSCLOGHANDLERDUMP
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscloghandlerdump_ petscloghandlerdump
#endif
PETSC_EXTERN void petscloghandlerdump_(PetscLogHandler *handler, char sname[], PetscErrorCode *ierr, PETSC_FORTRAN_CHARLEN_T l_sname)
{
  char* c_sname;
  FIXCHAR(sname, l_sname, c_sname);
  *ierr = PetscLogHandlerDump(*handler, c_sname);
  if (*ierr) return;
  FREECHAR(sname, c_sname);
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petsclog.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscloghandlerstagesetvisible_ PETSCLOGHANDLERSTAGESETVISIBLE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscloghandlerstagesetvisible_ petscloghandlerstagesetvisible
#endif
PETSC_EXTERN void petscloghandlerstagesetvisible_(PetscLogHandler *handler, PetscLogStage *stage, PetscBool *isVisible, PetscErrorCode *ierr)
{
  *ierr = PetscLogHandlerStageSetVisible(*handler, *stage, *isVisible ? PETSC_TRUE : PETSC_FALSE);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petsclog.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscloghandlerstagegetvisible_ PETSCLOGHANDLERSTAGEGETVISIBLE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscloghandlerstagegetvisible_ petscloghandlerstagegetvisible
#endif
PETSC_EXTERN void petscloghandlerstagegetvisible_(PetscLogHandler *handler, PetscLogStage *stage, PetscBool *isVisible, PetscErrorCode *ierr)
{
  CHKFORTRANNULLBOOL(isVisible);
  *ierr = PetscLogHandlerStageGetVisible(*handler, *stage, isVisible);
  if (*ierr) return;
}
