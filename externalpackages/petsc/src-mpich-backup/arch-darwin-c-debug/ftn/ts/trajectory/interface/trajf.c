#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscts.h>
#include <petscts.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define tstrajectoryset_ TSTRAJECTORYSET
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define tstrajectoryset_ tstrajectoryset
#endif
PETSC_EXTERN void tstrajectoryset_(TSTrajectory *tj, TS *ts, PetscInt *stepnum, PetscReal *time, Vec *X, PetscErrorCode *ierr)
{
  *ierr = TSTrajectorySet(*tj, *ts, *stepnum, *time, *X);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscts.h>
#include <petscts.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define tstrajectorygetnumsteps_ TSTRAJECTORYGETNUMSTEPS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define tstrajectorygetnumsteps_ tstrajectorygetnumsteps
#endif
PETSC_EXTERN void tstrajectorygetnumsteps_(TSTrajectory *tj, PetscInt *steps, PetscErrorCode *ierr)
{
  CHKFORTRANNULLINTEGER(steps);
  *ierr = TSTrajectoryGetNumSteps(*tj, steps);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscts.h>
#include <petscts.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define tstrajectoryget_ TSTRAJECTORYGET
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define tstrajectoryget_ tstrajectoryget
#endif
PETSC_EXTERN void tstrajectoryget_(TSTrajectory *tj, TS *ts, PetscInt *stepnum, PetscReal *time, PetscErrorCode *ierr)
{
  CHKFORTRANNULLREAL(time);
  *ierr = TSTrajectoryGet(*tj, *ts, *stepnum, time);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscts.h>
#include <petscts.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define tstrajectorygetvecs_ TSTRAJECTORYGETVECS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define tstrajectorygetvecs_ tstrajectorygetvecs
#endif
PETSC_EXTERN void tstrajectorygetvecs_(TSTrajectory *tj, TS *ts, PetscInt *stepnum, PetscReal *time, Vec *U, Vec *Udot, PetscErrorCode *ierr)
{
  CHKFORTRANNULLREAL(time);
  *ierr = TSTrajectoryGetVecs(*tj, *ts, *stepnum, time, *U, *Udot);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscts.h>
#include <petscts.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define tstrajectoryviewfromoptions_ TSTRAJECTORYVIEWFROMOPTIONS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define tstrajectoryviewfromoptions_ tstrajectoryviewfromoptions
#endif
PETSC_EXTERN void tstrajectoryviewfromoptions_(TSTrajectory *A, PetscObject *obj, char name[], PetscErrorCode *ierr, PETSC_FORTRAN_CHARLEN_T l_name)
{
  char* c_name;
  FIXCHAR(name, l_name, c_name);
  *ierr = TSTrajectoryViewFromOptions(*A, *obj, c_name);
  if (*ierr) return;
  FREECHAR(name, c_name);
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscts.h>
#include <petscts.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define tstrajectoryview_ TSTRAJECTORYVIEW
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define tstrajectoryview_ tstrajectoryview
#endif
PETSC_EXTERN void tstrajectoryview_(TSTrajectory *tj, PetscViewer *viewer, PetscErrorCode *ierr)
{
  PetscViewer v_viewer = PetscPatchDefaultViewers(viewer);
  *ierr = TSTrajectoryView(*tj, v_viewer);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscts.h>
#include <petscts.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define tstrajectorycreate_ TSTRAJECTORYCREATE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define tstrajectorycreate_ tstrajectorycreate
#endif
PETSC_EXTERN void tstrajectorycreate_(MPI_Fint *comm, TSTrajectory *tj, PetscErrorCode *ierr)
{
  PetscBool null_tj = !*(void**) tj ? PETSC_TRUE : PETSC_FALSE;
  PETSC_FORTRAN_OBJECT_CREATE(tj);
  CHKFORTRANNULLOBJECT(tj);
  *ierr = TSTrajectoryCreate(MPI_Comm_f2c(*(comm)), tj);
  if (*ierr) return;
  if (! null_tj && !*(void**) tj) *(void **) tj = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscts.h>
#include <petscts.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define tstrajectorysettype_ TSTRAJECTORYSETTYPE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define tstrajectorysettype_ tstrajectorysettype
#endif
PETSC_EXTERN void tstrajectorysettype_(TSTrajectory *tj, TS *ts, char *type, PetscErrorCode *ierr, PETSC_FORTRAN_CHARLEN_T l_type)
{
  char* c_type;
  FIXCHAR(type, l_type, c_type);
  *ierr = TSTrajectorySetType(*tj, *ts, c_type);
  if (*ierr) return;
  FREECHAR(type, c_type);
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscts.h>
#include <petscts.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define tstrajectorygettype_ TSTRAJECTORYGETTYPE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define tstrajectorygettype_ tstrajectorygettype
#endif
PETSC_EXTERN void tstrajectorygettype_(TSTrajectory *tj, TS *ts, char *type, PetscErrorCode *ierr, PETSC_FORTRAN_CHARLEN_T l_type)
{
  char* c_type = PETSC_NULLPTR;
  *ierr = TSTrajectoryGetType(*tj, *ts, (const char **)&c_type);
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
  #define tstrajectoryregisterall_ TSTRAJECTORYREGISTERALL
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define tstrajectoryregisterall_ tstrajectoryregisterall
#endif
PETSC_EXTERN void tstrajectoryregisterall_(PetscErrorCode *ierr)
{
  *ierr = TSTrajectoryRegisterAll();
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscts.h>
#include <petscts.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define tstrajectoryreset_ TSTRAJECTORYRESET
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define tstrajectoryreset_ tstrajectoryreset
#endif
PETSC_EXTERN void tstrajectoryreset_(TSTrajectory *tj, PetscErrorCode *ierr)
{
  *ierr = TSTrajectoryReset(*tj);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscts.h>
#include <petscts.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define tstrajectorydestroy_ TSTRAJECTORYDESTROY
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define tstrajectorydestroy_ tstrajectorydestroy
#endif
PETSC_EXTERN void tstrajectorydestroy_(TSTrajectory *tj, PetscErrorCode *ierr)
{
  PETSC_FORTRAN_OBJECT_F_DESTROYED_TO_C_NULL(tj);
  PetscBool null_tj = !*(void**) tj ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(tj);
  *ierr = TSTrajectoryDestroy(tj);
  if (*ierr) return;
  if (! null_tj && !*(void**) tj) *(void **) tj = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscts.h>
#include <petscts.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define tstrajectorysetusehistory_ TSTRAJECTORYSETUSEHISTORY
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define tstrajectorysetusehistory_ tstrajectorysetusehistory
#endif
PETSC_EXTERN void tstrajectorysetusehistory_(TSTrajectory *tj, PetscBool *flg, PetscErrorCode *ierr)
{
  *ierr = TSTrajectorySetUseHistory(*tj, *flg ? PETSC_TRUE : PETSC_FALSE);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscts.h>
#include <petscts.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define tstrajectorysetmonitor_ TSTRAJECTORYSETMONITOR
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define tstrajectorysetmonitor_ tstrajectorysetmonitor
#endif
PETSC_EXTERN void tstrajectorysetmonitor_(TSTrajectory *tj, PetscBool *flg, PetscErrorCode *ierr)
{
  *ierr = TSTrajectorySetMonitor(*tj, *flg ? PETSC_TRUE : PETSC_FALSE);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscts.h>
#include <petscts.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define tstrajectorysetkeepfiles_ TSTRAJECTORYSETKEEPFILES
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define tstrajectorysetkeepfiles_ tstrajectorysetkeepfiles
#endif
PETSC_EXTERN void tstrajectorysetkeepfiles_(TSTrajectory *tj, PetscBool *flg, PetscErrorCode *ierr)
{
  *ierr = TSTrajectorySetKeepFiles(*tj, *flg ? PETSC_TRUE : PETSC_FALSE);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscts.h>
#include <petscts.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define tstrajectorysetdirname_ TSTRAJECTORYSETDIRNAME
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define tstrajectorysetdirname_ tstrajectorysetdirname
#endif
PETSC_EXTERN void tstrajectorysetdirname_(TSTrajectory *tj, char dirname[], PetscErrorCode *ierr, PETSC_FORTRAN_CHARLEN_T l_dirname)
{
  char* c_dirname;
  FIXCHAR(dirname, l_dirname, c_dirname);
  *ierr = TSTrajectorySetDirname(*tj, c_dirname);
  if (*ierr) return;
  FREECHAR(dirname, c_dirname);
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscts.h>
#include <petscts.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define tstrajectorysetfiletemplate_ TSTRAJECTORYSETFILETEMPLATE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define tstrajectorysetfiletemplate_ tstrajectorysetfiletemplate
#endif
PETSC_EXTERN void tstrajectorysetfiletemplate_(TSTrajectory *tj, char filetemplate[], PetscErrorCode *ierr, PETSC_FORTRAN_CHARLEN_T l_filetemplate)
{
  char* c_filetemplate;
  FIXCHAR(filetemplate, l_filetemplate, c_filetemplate);
  *ierr = TSTrajectorySetFiletemplate(*tj, c_filetemplate);
  if (*ierr) return;
  FREECHAR(filetemplate, c_filetemplate);
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscts.h>
#include <petscts.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define tstrajectorysetfromoptions_ TSTRAJECTORYSETFROMOPTIONS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define tstrajectorysetfromoptions_ tstrajectorysetfromoptions
#endif
PETSC_EXTERN void tstrajectorysetfromoptions_(TSTrajectory *tj, TS *ts, PetscErrorCode *ierr)
{
  *ierr = TSTrajectorySetFromOptions(*tj, *ts);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscts.h>
#include <petscts.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define tstrajectorysetup_ TSTRAJECTORYSETUP
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define tstrajectorysetup_ tstrajectorysetup
#endif
PETSC_EXTERN void tstrajectorysetup_(TSTrajectory *tj, TS *ts, PetscErrorCode *ierr)
{
  *ierr = TSTrajectorySetUp(*tj, *ts);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscts.h>
#include <petscts.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define tstrajectorysetsolutiononly_ TSTRAJECTORYSETSOLUTIONONLY
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define tstrajectorysetsolutiononly_ tstrajectorysetsolutiononly
#endif
PETSC_EXTERN void tstrajectorysetsolutiononly_(TSTrajectory *tj, PetscBool *solution_only, PetscErrorCode *ierr)
{
  *ierr = TSTrajectorySetSolutionOnly(*tj, *solution_only ? PETSC_TRUE : PETSC_FALSE);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscts.h>
#include <petscts.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define tstrajectorygetsolutiononly_ TSTRAJECTORYGETSOLUTIONONLY
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define tstrajectorygetsolutiononly_ tstrajectorygetsolutiononly
#endif
PETSC_EXTERN void tstrajectorygetsolutiononly_(TSTrajectory *tj, PetscBool *solution_only, PetscErrorCode *ierr)
{
  CHKFORTRANNULLBOOL(solution_only);
  *ierr = TSTrajectoryGetSolutionOnly(*tj, solution_only);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscts.h>
#include <petscts.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define tstrajectorygetupdatedhistoryvecs_ TSTRAJECTORYGETUPDATEDHISTORYVECS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define tstrajectorygetupdatedhistoryvecs_ tstrajectorygetupdatedhistoryvecs
#endif
PETSC_EXTERN void tstrajectorygetupdatedhistoryvecs_(TSTrajectory *tj, TS *ts, PetscReal *time, Vec *U, Vec *Udot, PetscErrorCode *ierr)
{
  PetscBool null_U = !*(void**) U ? PETSC_TRUE : PETSC_FALSE;
  PetscBool null_Udot = !*(void**) Udot ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(U);
  CHKFORTRANNULLOBJECT(Udot);
  *ierr = TSTrajectoryGetUpdatedHistoryVecs(*tj, *ts, *time, U, Udot);
  if (*ierr) return;
  if (! null_U && !*(void**) U) *(void **) U = (void *)-2;
  if (! null_Udot && !*(void**) Udot) *(void **) Udot = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscts.h>
#include <petscts.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define tstrajectoryrestoreupdatedhistoryvecs_ TSTRAJECTORYRESTOREUPDATEDHISTORYVECS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define tstrajectoryrestoreupdatedhistoryvecs_ tstrajectoryrestoreupdatedhistoryvecs
#endif
PETSC_EXTERN void tstrajectoryrestoreupdatedhistoryvecs_(TSTrajectory *tj, Vec *U, Vec *Udot, PetscErrorCode *ierr)
{
  PetscBool null_U = !*(void**) U ? PETSC_TRUE : PETSC_FALSE;
  PetscBool null_Udot = !*(void**) Udot ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(U);
  CHKFORTRANNULLOBJECT(Udot);
  *ierr = TSTrajectoryRestoreUpdatedHistoryVecs(*tj, U, Udot);
  if (*ierr) return;
  if (! null_U && !*(void**) U) *(void **) U = (void *)-2;
  if (! null_Udot && !*(void**) Udot) *(void **) Udot = (void *)-2;
}
