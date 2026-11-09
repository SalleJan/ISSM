#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscts.h>
#include <petscts.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define tssetfromoptions_ TSSETFROMOPTIONS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define tssetfromoptions_ tssetfromoptions
#endif
PETSC_EXTERN void tssetfromoptions_(TS *ts, PetscErrorCode *ierr)
{
  *ierr = TSSetFromOptions(*ts);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscts.h>
#include <petscts.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define tsgettrajectory_ TSGETTRAJECTORY
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define tsgettrajectory_ tsgettrajectory
#endif
PETSC_EXTERN void tsgettrajectory_(TS *ts, TSTrajectory *tr, PetscErrorCode *ierr)
{
  PetscBool null_tr = !*(void**) tr ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(tr);
  *ierr = TSGetTrajectory(*ts, tr);
  if (*ierr) return;
  if (! null_tr && !*(void**) tr) *(void **) tr = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscts.h>
#include <petscts.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define tssetsavetrajectory_ TSSETSAVETRAJECTORY
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define tssetsavetrajectory_ tssetsavetrajectory
#endif
PETSC_EXTERN void tssetsavetrajectory_(TS *ts, PetscErrorCode *ierr)
{
  *ierr = TSSetSaveTrajectory(*ts);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscts.h>
#include <petscts.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define tsresettrajectory_ TSRESETTRAJECTORY
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define tsresettrajectory_ tsresettrajectory
#endif
PETSC_EXTERN void tsresettrajectory_(TS *ts, PetscErrorCode *ierr)
{
  *ierr = TSResetTrajectory(*ts);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscts.h>
#include <petscts.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define tsremovetrajectory_ TSREMOVETRAJECTORY
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define tsremovetrajectory_ tsremovetrajectory
#endif
PETSC_EXTERN void tsremovetrajectory_(TS *ts, PetscErrorCode *ierr)
{
  *ierr = TSRemoveTrajectory(*ts);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscts.h>
#include <petscts.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define tscomputerhsjacobian_ TSCOMPUTERHSJACOBIAN
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define tscomputerhsjacobian_ tscomputerhsjacobian
#endif
PETSC_EXTERN void tscomputerhsjacobian_(TS *ts, PetscReal *t, Vec *U, Mat *A, Mat *B, PetscErrorCode *ierr)
{
  *ierr = TSComputeRHSJacobian(*ts, *t, *U, *A, *B);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscts.h>
#include <petscts.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define tscomputerhsfunction_ TSCOMPUTERHSFUNCTION
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define tscomputerhsfunction_ tscomputerhsfunction
#endif
PETSC_EXTERN void tscomputerhsfunction_(TS *ts, PetscReal *t, Vec *U, Vec *y, PetscErrorCode *ierr)
{
  *ierr = TSComputeRHSFunction(*ts, *t, *U, *y);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscts.h>
#include <petscts.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define tscomputesolutionfunction_ TSCOMPUTESOLUTIONFUNCTION
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define tscomputesolutionfunction_ tscomputesolutionfunction
#endif
PETSC_EXTERN void tscomputesolutionfunction_(TS *ts, PetscReal *t, Vec *U, PetscErrorCode *ierr)
{
  *ierr = TSComputeSolutionFunction(*ts, *t, *U);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscts.h>
#include <petscts.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define tscomputeforcingfunction_ TSCOMPUTEFORCINGFUNCTION
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define tscomputeforcingfunction_ tscomputeforcingfunction
#endif
PETSC_EXTERN void tscomputeforcingfunction_(TS *ts, PetscReal *t, Vec *U, PetscErrorCode *ierr)
{
  *ierr = TSComputeForcingFunction(*ts, *t, *U);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscts.h>
#include <petscts.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define tscomputeifunction_ TSCOMPUTEIFUNCTION
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define tscomputeifunction_ tscomputeifunction
#endif
PETSC_EXTERN void tscomputeifunction_(TS *ts, PetscReal *t, Vec *U, Vec *Udot, Vec *Y, PetscBool *imex, PetscErrorCode *ierr)
{
  *ierr = TSComputeIFunction(*ts, *t, *U, *Udot, *Y, *imex ? PETSC_TRUE : PETSC_FALSE);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscts.h>
#include <petscts.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define tscomputeijacobian_ TSCOMPUTEIJACOBIAN
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define tscomputeijacobian_ tscomputeijacobian
#endif
PETSC_EXTERN void tscomputeijacobian_(TS *ts, PetscReal *t, Vec *U, Vec *Udot, PetscReal *shift, Mat *A, Mat *B, PetscBool *imex, PetscErrorCode *ierr)
{
  *ierr = TSComputeIJacobian(*ts, *t, *U, *Udot, *shift, *A, *B, *imex ? PETSC_TRUE : PETSC_FALSE);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscts.h>
#include <petscts.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define tsrhsjacobiansetreuse_ TSRHSJACOBIANSETREUSE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define tsrhsjacobiansetreuse_ tsrhsjacobiansetreuse
#endif
PETSC_EXTERN void tsrhsjacobiansetreuse_(TS *ts, PetscBool *reuse, PetscErrorCode *ierr)
{
  *ierr = TSRHSJacobianSetReuse(*ts, *reuse ? PETSC_TRUE : PETSC_FALSE);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscts.h>
#include <petscts.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define tscomputei2function_ TSCOMPUTEI2FUNCTION
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define tscomputei2function_ tscomputei2function
#endif
PETSC_EXTERN void tscomputei2function_(TS *ts, PetscReal *t, Vec *U, Vec *V, Vec *A, Vec *F, PetscErrorCode *ierr)
{
  *ierr = TSComputeI2Function(*ts, *t, *U, *V, *A, *F);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscts.h>
#include <petscts.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define tscomputei2jacobian_ TSCOMPUTEI2JACOBIAN
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define tscomputei2jacobian_ tscomputei2jacobian
#endif
PETSC_EXTERN void tscomputei2jacobian_(TS *ts, PetscReal *t, Vec *U, Vec *V, Vec *A, PetscReal *shiftV, PetscReal *shiftA, Mat *J, Mat *P, PetscErrorCode *ierr)
{
  *ierr = TSComputeI2Jacobian(*ts, *t, *U, *V, *A, *shiftV, *shiftA, *J, *P);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscts.h>
#include <petscts.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define tscomputetransientvariable_ TSCOMPUTETRANSIENTVARIABLE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define tscomputetransientvariable_ tscomputetransientvariable
#endif
PETSC_EXTERN void tscomputetransientvariable_(TS *ts, Vec *U, Vec *C, PetscErrorCode *ierr)
{
  *ierr = TSComputeTransientVariable(*ts, *U, *C);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscts.h>
#include <petscts.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define tshastransientvariable_ TSHASTRANSIENTVARIABLE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define tshastransientvariable_ tshastransientvariable
#endif
PETSC_EXTERN void tshastransientvariable_(TS *ts, PetscBool *has, PetscErrorCode *ierr)
{
  CHKFORTRANNULLBOOL(has);
  *ierr = TSHasTransientVariable(*ts, has);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscts.h>
#include <petscts.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define ts2setsolution_ TS2SETSOLUTION
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define ts2setsolution_ ts2setsolution
#endif
PETSC_EXTERN void ts2setsolution_(TS *ts, Vec *u, Vec *v, PetscErrorCode *ierr)
{
  *ierr = TS2SetSolution(*ts, *u, *v);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscts.h>
#include <petscts.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define ts2getsolution_ TS2GETSOLUTION
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define ts2getsolution_ ts2getsolution
#endif
PETSC_EXTERN void ts2getsolution_(TS *ts, Vec *u, Vec *v, PetscErrorCode *ierr)
{
  PetscBool null_u = !*(void**) u ? PETSC_TRUE : PETSC_FALSE;
  PetscBool null_v = !*(void**) v ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(u);
  CHKFORTRANNULLOBJECT(v);
  *ierr = TS2GetSolution(*ts, u, v);
  if (*ierr) return;
  if (! null_u && !*(void**) u) *(void **) u = (void *)-2;
  if (! null_v && !*(void**) v) *(void **) v = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscts.h>
#include <petscts.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define tsload_ TSLOAD
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define tsload_ tsload
#endif
PETSC_EXTERN void tsload_(TS *ts, PetscViewer *viewer, PetscErrorCode *ierr)
{
  PetscViewer v_viewer = PetscPatchDefaultViewers(viewer);
  *ierr = TSLoad(*ts, v_viewer);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscts.h>
#include <petscts.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define tsviewfromoptions_ TSVIEWFROMOPTIONS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define tsviewfromoptions_ tsviewfromoptions
#endif
PETSC_EXTERN void tsviewfromoptions_(TS *ts, PetscObject *obj, char name[], PetscErrorCode *ierr, PETSC_FORTRAN_CHARLEN_T l_name)
{
  char* c_name;
  FIXCHAR(name, l_name, c_name);
  *ierr = TSViewFromOptions(*ts, *obj, c_name);
  if (*ierr) return;
  FREECHAR(name, c_name);
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscts.h>
#include <petscts.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define tsview_ TSVIEW
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define tsview_ tsview
#endif
PETSC_EXTERN void tsview_(TS *ts, PetscViewer *viewer, PetscErrorCode *ierr)
{
  PetscViewer v_viewer = PetscPatchDefaultViewers(viewer);
  *ierr = TSView(*ts, v_viewer);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscts.h>
#include <petscts.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define tssetapplicationcontext_ TSSETAPPLICATIONCONTEXT
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define tssetapplicationcontext_ tssetapplicationcontext
#endif
PETSC_EXTERN void tssetapplicationcontext_(TS *ts, PetscCtx ctx, PetscErrorCode *ierr)
{
  *ierr = TSSetApplicationContext(*ts, ctx);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscts.h>
#include <petscts.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define tsgetapplicationcontextcptr_ TSGETAPPLICATIONCONTEXTCPTR
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define tsgetapplicationcontextcptr_ tsgetapplicationcontextcptr
#endif
PETSC_EXTERN void tsgetapplicationcontextcptr_(TS *ts, PetscCtxRt ctx, PetscErrorCode *ierr)
{
  *ierr = TSGetApplicationContext(*ts, ctx);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscts.h>
#include <petscts.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define tsgetstepnumber_ TSGETSTEPNUMBER
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define tsgetstepnumber_ tsgetstepnumber
#endif
PETSC_EXTERN void tsgetstepnumber_(TS *ts, PetscInt *steps, PetscErrorCode *ierr)
{
  CHKFORTRANNULLINTEGER(steps);
  *ierr = TSGetStepNumber(*ts, steps);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscts.h>
#include <petscts.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define tssetstepnumber_ TSSETSTEPNUMBER
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define tssetstepnumber_ tssetstepnumber
#endif
PETSC_EXTERN void tssetstepnumber_(TS *ts, PetscInt *steps, PetscErrorCode *ierr)
{
  *ierr = TSSetStepNumber(*ts, *steps);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscts.h>
#include <petscts.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define tssettimestep_ TSSETTIMESTEP
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define tssettimestep_ tssettimestep
#endif
PETSC_EXTERN void tssettimestep_(TS *ts, PetscReal *time_step, PetscErrorCode *ierr)
{
  *ierr = TSSetTimeStep(*ts, *time_step);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscts.h>
#include <petscts.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define tssetexactfinaltime_ TSSETEXACTFINALTIME
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define tssetexactfinaltime_ tssetexactfinaltime
#endif
PETSC_EXTERN void tssetexactfinaltime_(TS *ts, TSExactFinalTimeOption *eftopt, PetscErrorCode *ierr)
{
  *ierr = TSSetExactFinalTime(*ts, *eftopt);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscts.h>
#include <petscts.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define tsgetexactfinaltime_ TSGETEXACTFINALTIME
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define tsgetexactfinaltime_ tsgetexactfinaltime
#endif
PETSC_EXTERN void tsgetexactfinaltime_(TS *ts, TSExactFinalTimeOption *eftopt, PetscErrorCode *ierr)
{
  *ierr = TSGetExactFinalTime(*ts, eftopt);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscts.h>
#include <petscts.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define tsgettimestep_ TSGETTIMESTEP
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define tsgettimestep_ tsgettimestep
#endif
PETSC_EXTERN void tsgettimestep_(TS *ts, PetscReal *dt, PetscErrorCode *ierr)
{
  CHKFORTRANNULLREAL(dt);
  *ierr = TSGetTimeStep(*ts, dt);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscts.h>
#include <petscts.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define tsgetsolution_ TSGETSOLUTION
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define tsgetsolution_ tsgetsolution
#endif
PETSC_EXTERN void tsgetsolution_(TS *ts, Vec *v, PetscErrorCode *ierr)
{
  PetscBool null_v = !*(void**) v ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(v);
  *ierr = TSGetSolution(*ts, v);
  if (*ierr) return;
  if (! null_v && !*(void**) v) *(void **) v = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscts.h>
#include <petscts.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define tsgetsolutioncomponents_ TSGETSOLUTIONCOMPONENTS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define tsgetsolutioncomponents_ tsgetsolutioncomponents
#endif
PETSC_EXTERN void tsgetsolutioncomponents_(TS *ts, PetscInt *n, Vec *v, PetscErrorCode *ierr)
{
  PetscBool null_v = !*(void**) v ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLINTEGER(n);
  CHKFORTRANNULLOBJECT(v);
  *ierr = TSGetSolutionComponents(*ts, n, v);
  if (*ierr) return;
  if (! null_v && !*(void**) v) *(void **) v = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscts.h>
#include <petscts.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define tsgetauxsolution_ TSGETAUXSOLUTION
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define tsgetauxsolution_ tsgetauxsolution
#endif
PETSC_EXTERN void tsgetauxsolution_(TS *ts, Vec *v, PetscErrorCode *ierr)
{
  PetscBool null_v = !*(void**) v ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(v);
  *ierr = TSGetAuxSolution(*ts, v);
  if (*ierr) return;
  if (! null_v && !*(void**) v) *(void **) v = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscts.h>
#include <petscts.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define tsgettimeerror_ TSGETTIMEERROR
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define tsgettimeerror_ tsgettimeerror
#endif
PETSC_EXTERN void tsgettimeerror_(TS *ts, PetscInt *n, Vec *v, PetscErrorCode *ierr)
{
  PetscBool null_v = !*(void**) v ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(v);
  *ierr = TSGetTimeError(*ts, *n, v);
  if (*ierr) return;
  if (! null_v && !*(void**) v) *(void **) v = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscts.h>
#include <petscts.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define tssettimeerror_ TSSETTIMEERROR
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define tssettimeerror_ tssettimeerror
#endif
PETSC_EXTERN void tssettimeerror_(TS *ts, Vec *v, PetscErrorCode *ierr)
{
  *ierr = TSSetTimeError(*ts, *v);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscts.h>
#include <petscts.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define tssetproblemtype_ TSSETPROBLEMTYPE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define tssetproblemtype_ tssetproblemtype
#endif
PETSC_EXTERN void tssetproblemtype_(TS *ts, TSProblemType *type, PetscErrorCode *ierr)
{
  *ierr = TSSetProblemType(*ts, *type);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscts.h>
#include <petscts.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define tsgetproblemtype_ TSGETPROBLEMTYPE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define tsgetproblemtype_ tsgetproblemtype
#endif
PETSC_EXTERN void tsgetproblemtype_(TS *ts, TSProblemType *type, PetscErrorCode *ierr)
{
  *ierr = TSGetProblemType(*ts, type);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscts.h>
#include <petscts.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define tssetup_ TSSETUP
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define tssetup_ tssetup
#endif
PETSC_EXTERN void tssetup_(TS *ts, PetscErrorCode *ierr)
{
  *ierr = TSSetUp(*ts);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscts.h>
#include <petscts.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define tsreset_ TSRESET
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define tsreset_ tsreset
#endif
PETSC_EXTERN void tsreset_(TS *ts, PetscErrorCode *ierr)
{
  *ierr = TSReset(*ts);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscts.h>
#include <petscts.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define tsdestroy_ TSDESTROY
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define tsdestroy_ tsdestroy
#endif
PETSC_EXTERN void tsdestroy_(TS *ts, PetscErrorCode *ierr)
{
  PETSC_FORTRAN_OBJECT_F_DESTROYED_TO_C_NULL(ts);
  PetscBool null_ts = !*(void**) ts ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(ts);
  *ierr = TSDestroy(ts);
  if (*ierr) return;
  if (! null_ts && !*(void**) ts) *(void **) ts = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscts.h>
#include <petscts.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define tsgetsnes_ TSGETSNES
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define tsgetsnes_ tsgetsnes
#endif
PETSC_EXTERN void tsgetsnes_(TS *ts, SNES *snes, PetscErrorCode *ierr)
{
  PetscBool null_snes = !*(void**) snes ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(snes);
  *ierr = TSGetSNES(*ts, snes);
  if (*ierr) return;
  if (! null_snes && !*(void**) snes) *(void **) snes = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscts.h>
#include <petscts.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define tssetsnes_ TSSETSNES
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define tssetsnes_ tssetsnes
#endif
PETSC_EXTERN void tssetsnes_(TS *ts, SNES *snes, PetscErrorCode *ierr)
{
  *ierr = TSSetSNES(*ts, *snes);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscts.h>
#include <petscts.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define tsgetksp_ TSGETKSP
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define tsgetksp_ tsgetksp
#endif
PETSC_EXTERN void tsgetksp_(TS *ts, KSP *ksp, PetscErrorCode *ierr)
{
  PetscBool null_ksp = !*(void**) ksp ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(ksp);
  *ierr = TSGetKSP(*ts, ksp);
  if (*ierr) return;
  if (! null_ksp && !*(void**) ksp) *(void **) ksp = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscts.h>
#include <petscts.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define tssetmaxsteps_ TSSETMAXSTEPS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define tssetmaxsteps_ tssetmaxsteps
#endif
PETSC_EXTERN void tssetmaxsteps_(TS *ts, PetscInt *maxsteps, PetscErrorCode *ierr)
{
  *ierr = TSSetMaxSteps(*ts, *maxsteps);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscts.h>
#include <petscts.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define tsgetmaxsteps_ TSGETMAXSTEPS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define tsgetmaxsteps_ tsgetmaxsteps
#endif
PETSC_EXTERN void tsgetmaxsteps_(TS *ts, PetscInt *maxsteps, PetscErrorCode *ierr)
{
  CHKFORTRANNULLINTEGER(maxsteps);
  *ierr = TSGetMaxSteps(*ts, maxsteps);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscts.h>
#include <petscts.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define tssetrunsteps_ TSSETRUNSTEPS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define tssetrunsteps_ tssetrunsteps
#endif
PETSC_EXTERN void tssetrunsteps_(TS *ts, PetscInt *runsteps, PetscErrorCode *ierr)
{
  *ierr = TSSetRunSteps(*ts, *runsteps);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscts.h>
#include <petscts.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define tsgetrunsteps_ TSGETRUNSTEPS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define tsgetrunsteps_ tsgetrunsteps
#endif
PETSC_EXTERN void tsgetrunsteps_(TS *ts, PetscInt *runsteps, PetscErrorCode *ierr)
{
  CHKFORTRANNULLINTEGER(runsteps);
  *ierr = TSGetRunSteps(*ts, runsteps);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscts.h>
#include <petscts.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define tssetmaxtime_ TSSETMAXTIME
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define tssetmaxtime_ tssetmaxtime
#endif
PETSC_EXTERN void tssetmaxtime_(TS *ts, PetscReal *maxtime, PetscErrorCode *ierr)
{
  *ierr = TSSetMaxTime(*ts, *maxtime);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscts.h>
#include <petscts.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define tsgetmaxtime_ TSGETMAXTIME
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define tsgetmaxtime_ tsgetmaxtime
#endif
PETSC_EXTERN void tsgetmaxtime_(TS *ts, PetscReal *maxtime, PetscErrorCode *ierr)
{
  CHKFORTRANNULLREAL(maxtime);
  *ierr = TSGetMaxTime(*ts, maxtime);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscts.h>
#include <petscts.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define tssetsolution_ TSSETSOLUTION
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define tssetsolution_ tssetsolution
#endif
PETSC_EXTERN void tssetsolution_(TS *ts, Vec *u, PetscErrorCode *ierr)
{
  *ierr = TSSetSolution(*ts, *u);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscts.h>
#include <petscts.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define tsprestep_ TSPRESTEP
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define tsprestep_ tsprestep
#endif
PETSC_EXTERN void tsprestep_(TS *ts, PetscErrorCode *ierr)
{
  *ierr = TSPreStep(*ts);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscts.h>
#include <petscts.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define tsprestage_ TSPRESTAGE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define tsprestage_ tsprestage
#endif
PETSC_EXTERN void tsprestage_(TS *ts, PetscReal *stagetime, PetscErrorCode *ierr)
{
  *ierr = TSPreStage(*ts, *stagetime);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscts.h>
#include <petscts.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define tspoststage_ TSPOSTSTAGE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define tspoststage_ tspoststage
#endif
PETSC_EXTERN void tspoststage_(TS *ts, PetscReal *stagetime, PetscInt *stageindex, Vec Y[], PetscErrorCode *ierr)
{
  CHKFORTRANNULLOBJECT(Y);
  *ierr = TSPostStage(*ts, *stagetime, *stageindex, Y);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscts.h>
#include <petscts.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define tspostevaluate_ TSPOSTEVALUATE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define tspostevaluate_ tspostevaluate
#endif
PETSC_EXTERN void tspostevaluate_(TS *ts, PetscErrorCode *ierr)
{
  *ierr = TSPostEvaluate(*ts);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscts.h>
#include <petscts.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define tspoststep_ TSPOSTSTEP
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define tspoststep_ tspoststep
#endif
PETSC_EXTERN void tspoststep_(TS *ts, PetscErrorCode *ierr)
{
  *ierr = TSPostStep(*ts);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscts.h>
#include <petscts.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define tsinterpolate_ TSINTERPOLATE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define tsinterpolate_ tsinterpolate
#endif
PETSC_EXTERN void tsinterpolate_(TS *ts, PetscReal *t, Vec *U, PetscErrorCode *ierr)
{
  *ierr = TSInterpolate(*ts, *t, *U);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscts.h>
#include <petscts.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define tsstep_ TSSTEP
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define tsstep_ tsstep
#endif
PETSC_EXTERN void tsstep_(TS *ts, PetscErrorCode *ierr)
{
  *ierr = TSStep(*ts);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscts.h>
#include <petscts.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define tsevaluatewlte_ TSEVALUATEWLTE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define tsevaluatewlte_ tsevaluatewlte
#endif
PETSC_EXTERN void tsevaluatewlte_(TS *ts, NormType *wnormtype, PetscInt *order, PetscReal *wlte, PetscErrorCode *ierr)
{
  CHKFORTRANNULLINTEGER(order);
  CHKFORTRANNULLREAL(wlte);
  *ierr = TSEvaluateWLTE(*ts, *wnormtype, order, wlte);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscts.h>
#include <petscts.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define tsevaluatestep_ TSEVALUATESTEP
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define tsevaluatestep_ tsevaluatestep
#endif
PETSC_EXTERN void tsevaluatestep_(TS *ts, PetscInt *order, Vec *U, PetscBool *done, PetscErrorCode *ierr)
{
  CHKFORTRANNULLBOOL(done);
  *ierr = TSEvaluateStep(*ts, *order, *U, done);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscts.h>
#include <petscts.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define tscomputeinitialcondition_ TSCOMPUTEINITIALCONDITION
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define tscomputeinitialcondition_ tscomputeinitialcondition
#endif
PETSC_EXTERN void tscomputeinitialcondition_(TS *ts, Vec *u, PetscErrorCode *ierr)
{
  *ierr = TSComputeInitialCondition(*ts, *u);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscts.h>
#include <petscts.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define tscomputeexacterror_ TSCOMPUTEEXACTERROR
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define tscomputeexacterror_ tscomputeexacterror
#endif
PETSC_EXTERN void tscomputeexacterror_(TS *ts, Vec *u, Vec *e, PetscErrorCode *ierr)
{
  *ierr = TSComputeExactError(*ts, *u, *e);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscts.h>
#include <petscts.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define tsresizeregistervec_ TSRESIZEREGISTERVEC
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define tsresizeregistervec_ tsresizeregistervec
#endif
PETSC_EXTERN void tsresizeregistervec_(TS *ts, char name[], Vec *vec, PetscErrorCode *ierr, PETSC_FORTRAN_CHARLEN_T l_name)
{
  char* c_name;
  FIXCHAR(name, l_name, c_name);
  *ierr = TSResizeRegisterVec(*ts, c_name, *vec);
  if (*ierr) return;
  FREECHAR(name, c_name);
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscts.h>
#include <petscts.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define tsresizeretrievevec_ TSRESIZERETRIEVEVEC
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define tsresizeretrievevec_ tsresizeretrievevec
#endif
PETSC_EXTERN void tsresizeretrievevec_(TS *ts, char name[], Vec *vec, PetscErrorCode *ierr, PETSC_FORTRAN_CHARLEN_T l_name)
{
  PetscBool null_vec = !*(void**) vec ? PETSC_TRUE : PETSC_FALSE;
  char* c_name;
  FIXCHAR(name, l_name, c_name);
  CHKFORTRANNULLOBJECT(vec);
  *ierr = TSResizeRetrieveVec(*ts, c_name, vec);
  if (*ierr) return;
  FREECHAR(name, c_name);
  if (! null_vec && !*(void**) vec) *(void **) vec = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscts.h>
#include <petscts.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define tsresize_ TSRESIZE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define tsresize_ tsresize
#endif
PETSC_EXTERN void tsresize_(TS *ts, PetscErrorCode *ierr)
{
  *ierr = TSResize(*ts);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscts.h>
#include <petscts.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define tssolve_ TSSOLVE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define tssolve_ tssolve
#endif
PETSC_EXTERN void tssolve_(TS *ts, Vec *u, PetscErrorCode *ierr)
{
  *ierr = TSSolve(*ts, *u);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscts.h>
#include <petscts.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define tsgettime_ TSGETTIME
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define tsgettime_ tsgettime
#endif
PETSC_EXTERN void tsgettime_(TS *ts, PetscReal *t, PetscErrorCode *ierr)
{
  CHKFORTRANNULLREAL(t);
  *ierr = TSGetTime(*ts, t);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscts.h>
#include <petscts.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define tsgetprevtime_ TSGETPREVTIME
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define tsgetprevtime_ tsgetprevtime
#endif
PETSC_EXTERN void tsgetprevtime_(TS *ts, PetscReal *t, PetscErrorCode *ierr)
{
  CHKFORTRANNULLREAL(t);
  *ierr = TSGetPrevTime(*ts, t);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscts.h>
#include <petscts.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define tssettime_ TSSETTIME
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define tssettime_ tssettime
#endif
PETSC_EXTERN void tssettime_(TS *ts, PetscReal *t, PetscErrorCode *ierr)
{
  *ierr = TSSetTime(*ts, *t);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscts.h>
#include <petscts.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define tssetoptionsprefix_ TSSETOPTIONSPREFIX
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define tssetoptionsprefix_ tssetoptionsprefix
#endif
PETSC_EXTERN void tssetoptionsprefix_(TS *ts, char prefix[], PetscErrorCode *ierr, PETSC_FORTRAN_CHARLEN_T l_prefix)
{
  char* c_prefix;
  FIXCHAR(prefix, l_prefix, c_prefix);
  *ierr = TSSetOptionsPrefix(*ts, c_prefix);
  if (*ierr) return;
  FREECHAR(prefix, c_prefix);
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscts.h>
#include <petscts.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define tsappendoptionsprefix_ TSAPPENDOPTIONSPREFIX
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define tsappendoptionsprefix_ tsappendoptionsprefix
#endif
PETSC_EXTERN void tsappendoptionsprefix_(TS *ts, char prefix[], PetscErrorCode *ierr, PETSC_FORTRAN_CHARLEN_T l_prefix)
{
  char* c_prefix;
  FIXCHAR(prefix, l_prefix, c_prefix);
  *ierr = TSAppendOptionsPrefix(*ts, c_prefix);
  if (*ierr) return;
  FREECHAR(prefix, c_prefix);
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscts.h>
#include <petscts.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define tsgetoptionsprefix_ TSGETOPTIONSPREFIX
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define tsgetoptionsprefix_ tsgetoptionsprefix
#endif
PETSC_EXTERN void tsgetoptionsprefix_(TS *ts, char prefix[], PetscErrorCode *ierr, PETSC_FORTRAN_CHARLEN_T l_prefix)
{
  char* c_prefix = PETSC_NULLPTR;
  *ierr = TSGetOptionsPrefix(*ts, (const char **)&c_prefix);
  if (*ierr) return;
  *ierr = PetscStrncpy((char *)prefix, c_prefix, l_prefix);
  if (*ierr) return;
  FIXRETURNCHAR(PETSC_TRUE, prefix, l_prefix);
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscts.h>
#include <petscts.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define tssetdm_ TSSETDM
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define tssetdm_ tssetdm
#endif
PETSC_EXTERN void tssetdm_(TS *ts, DM *dm, PetscErrorCode *ierr)
{
  *ierr = TSSetDM(*ts, *dm);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscts.h>
#include <petscts.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define tsgetdm_ TSGETDM
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define tsgetdm_ tsgetdm
#endif
PETSC_EXTERN void tsgetdm_(TS *ts, DM *dm, PetscErrorCode *ierr)
{
  PetscBool null_dm = !*(void**) dm ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(dm);
  *ierr = TSGetDM(*ts, dm);
  if (*ierr) return;
  if (! null_dm && !*(void**) dm) *(void **) dm = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscts.h>
#include <petscts.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define tscomputerhsfunctionlinear_ TSCOMPUTERHSFUNCTIONLINEAR
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define tscomputerhsfunctionlinear_ tscomputerhsfunctionlinear
#endif
PETSC_EXTERN void tscomputerhsfunctionlinear_(TS *ts, PetscReal *t, Vec *U, Vec *F, PetscCtx ctx, PetscErrorCode *ierr)
{
  *ierr = TSComputeRHSFunctionLinear(*ts, *t, *U, *F, ctx);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscts.h>
#include <petscts.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define tscomputerhsjacobianconstant_ TSCOMPUTERHSJACOBIANCONSTANT
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define tscomputerhsjacobianconstant_ tscomputerhsjacobianconstant
#endif
PETSC_EXTERN void tscomputerhsjacobianconstant_(TS *ts, PetscReal *t, Vec *U, Mat *A, Mat *B, PetscCtx ctx, PetscErrorCode *ierr)
{
  *ierr = TSComputeRHSJacobianConstant(*ts, *t, *U, *A, *B, ctx);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscts.h>
#include <petscts.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define tscomputeifunctionlinear_ TSCOMPUTEIFUNCTIONLINEAR
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define tscomputeifunctionlinear_ tscomputeifunctionlinear
#endif
PETSC_EXTERN void tscomputeifunctionlinear_(TS *ts, PetscReal *t, Vec *U, Vec *Udot, Vec *F, PetscCtx ctx, PetscErrorCode *ierr)
{
  *ierr = TSComputeIFunctionLinear(*ts, *t, *U, *Udot, *F, ctx);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscts.h>
#include <petscts.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define tscomputeijacobianconstant_ TSCOMPUTEIJACOBIANCONSTANT
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define tscomputeijacobianconstant_ tscomputeijacobianconstant
#endif
PETSC_EXTERN void tscomputeijacobianconstant_(TS *ts, PetscReal *t, Vec *U, Vec *Udot, PetscReal *shift, Mat *A, Mat *B, PetscCtx ctx, PetscErrorCode *ierr)
{
  *ierr = TSComputeIJacobianConstant(*ts, *t, *U, *Udot, *shift, *A, *B, ctx);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscts.h>
#include <petscts.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define tsgetequationtype_ TSGETEQUATIONTYPE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define tsgetequationtype_ tsgetequationtype
#endif
PETSC_EXTERN void tsgetequationtype_(TS *ts, TSEquationType *equation_type, PetscErrorCode *ierr)
{
  *ierr = TSGetEquationType(*ts, equation_type);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscts.h>
#include <petscts.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define tssetequationtype_ TSSETEQUATIONTYPE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define tssetequationtype_ tssetequationtype
#endif
PETSC_EXTERN void tssetequationtype_(TS *ts, TSEquationType *equation_type, PetscErrorCode *ierr)
{
  *ierr = TSSetEquationType(*ts, *equation_type);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscts.h>
#include <petscts.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define tsgetconvergedreason_ TSGETCONVERGEDREASON
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define tsgetconvergedreason_ tsgetconvergedreason
#endif
PETSC_EXTERN void tsgetconvergedreason_(TS *ts, TSConvergedReason *reason, PetscErrorCode *ierr)
{
  *ierr = TSGetConvergedReason(*ts, reason);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscts.h>
#include <petscts.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define tssetconvergedreason_ TSSETCONVERGEDREASON
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define tssetconvergedreason_ tssetconvergedreason
#endif
PETSC_EXTERN void tssetconvergedreason_(TS *ts, TSConvergedReason *reason, PetscErrorCode *ierr)
{
  *ierr = TSSetConvergedReason(*ts, *reason);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscts.h>
#include <petscts.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define tsgetsolvetime_ TSGETSOLVETIME
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define tsgetsolvetime_ tsgetsolvetime
#endif
PETSC_EXTERN void tsgetsolvetime_(TS *ts, PetscReal *ftime, PetscErrorCode *ierr)
{
  CHKFORTRANNULLREAL(ftime);
  *ierr = TSGetSolveTime(*ts, ftime);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscts.h>
#include <petscts.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define tsgetsnesiterations_ TSGETSNESITERATIONS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define tsgetsnesiterations_ tsgetsnesiterations
#endif
PETSC_EXTERN void tsgetsnesiterations_(TS *ts, PetscInt *nits, PetscErrorCode *ierr)
{
  CHKFORTRANNULLINTEGER(nits);
  *ierr = TSGetSNESIterations(*ts, nits);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscts.h>
#include <petscts.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define tsgetkspiterations_ TSGETKSPITERATIONS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define tsgetkspiterations_ tsgetkspiterations
#endif
PETSC_EXTERN void tsgetkspiterations_(TS *ts, PetscInt *lits, PetscErrorCode *ierr)
{
  CHKFORTRANNULLINTEGER(lits);
  *ierr = TSGetKSPIterations(*ts, lits);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscts.h>
#include <petscts.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define tsgetsteprejections_ TSGETSTEPREJECTIONS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define tsgetsteprejections_ tsgetsteprejections
#endif
PETSC_EXTERN void tsgetsteprejections_(TS *ts, PetscInt *rejects, PetscErrorCode *ierr)
{
  CHKFORTRANNULLINTEGER(rejects);
  *ierr = TSGetStepRejections(*ts, rejects);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscts.h>
#include <petscts.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define tsgetsnesfailures_ TSGETSNESFAILURES
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define tsgetsnesfailures_ tsgetsnesfailures
#endif
PETSC_EXTERN void tsgetsnesfailures_(TS *ts, PetscInt *fails, PetscErrorCode *ierr)
{
  CHKFORTRANNULLINTEGER(fails);
  *ierr = TSGetSNESFailures(*ts, fails);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscts.h>
#include <petscts.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define tssetmaxsteprejections_ TSSETMAXSTEPREJECTIONS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define tssetmaxsteprejections_ tssetmaxsteprejections
#endif
PETSC_EXTERN void tssetmaxsteprejections_(TS *ts, PetscInt *rejects, PetscErrorCode *ierr)
{
  *ierr = TSSetMaxStepRejections(*ts, *rejects);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscts.h>
#include <petscts.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define tssetmaxsnesfailures_ TSSETMAXSNESFAILURES
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define tssetmaxsnesfailures_ tssetmaxsnesfailures
#endif
PETSC_EXTERN void tssetmaxsnesfailures_(TS *ts, PetscInt *fails, PetscErrorCode *ierr)
{
  *ierr = TSSetMaxSNESFailures(*ts, *fails);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscts.h>
#include <petscts.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define tsseterrorifstepfails_ TSSETERRORIFSTEPFAILS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define tsseterrorifstepfails_ tsseterrorifstepfails
#endif
PETSC_EXTERN void tsseterrorifstepfails_(TS *ts, PetscBool *err, PetscErrorCode *ierr)
{
  *ierr = TSSetErrorIfStepFails(*ts, *err ? PETSC_TRUE : PETSC_FALSE);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscts.h>
#include <petscts.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define tsgetadapt_ TSGETADAPT
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define tsgetadapt_ tsgetadapt
#endif
PETSC_EXTERN void tsgetadapt_(TS *ts, TSAdapt *adapt, PetscErrorCode *ierr)
{
  PetscBool null_adapt = !*(void**) adapt ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(adapt);
  *ierr = TSGetAdapt(*ts, adapt);
  if (*ierr) return;
  if (! null_adapt && !*(void**) adapt) *(void **) adapt = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscts.h>
#include <petscts.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define tssettolerances_ TSSETTOLERANCES
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define tssettolerances_ tssettolerances
#endif
PETSC_EXTERN void tssettolerances_(TS *ts, PetscReal *atol, Vec *vatol, PetscReal *rtol, Vec *vrtol, PetscErrorCode *ierr)
{
  *ierr = TSSetTolerances(*ts, *atol, *vatol, *rtol, *vrtol);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscts.h>
#include <petscts.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define tsgettolerances_ TSGETTOLERANCES
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define tsgettolerances_ tsgettolerances
#endif
PETSC_EXTERN void tsgettolerances_(TS *ts, PetscReal *atol, Vec *vatol, PetscReal *rtol, Vec *vrtol, PetscErrorCode *ierr)
{
  PetscBool null_vatol = !*(void**) vatol ? PETSC_TRUE : PETSC_FALSE;
  PetscBool null_vrtol = !*(void**) vrtol ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLREAL(atol);
  CHKFORTRANNULLOBJECT(vatol);
  CHKFORTRANNULLREAL(rtol);
  CHKFORTRANNULLOBJECT(vrtol);
  *ierr = TSGetTolerances(*ts, atol, vatol, rtol, vrtol);
  if (*ierr) return;
  if (! null_vatol && !*(void**) vatol) *(void **) vatol = (void *)-2;
  if (! null_vrtol && !*(void**) vrtol) *(void **) vrtol = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscts.h>
#include <petscts.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define tserrorweightednorm_ TSERRORWEIGHTEDNORM
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define tserrorweightednorm_ tserrorweightednorm
#endif
PETSC_EXTERN void tserrorweightednorm_(TS *ts, Vec *U, Vec *Y, NormType *wnormtype, PetscReal *norm, PetscReal *norma, PetscReal *normr, PetscErrorCode *ierr)
{
  CHKFORTRANNULLREAL(norm);
  CHKFORTRANNULLREAL(norma);
  CHKFORTRANNULLREAL(normr);
  *ierr = TSErrorWeightedNorm(*ts, *U, *Y, *wnormtype, norm, norma, normr);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscts.h>
#include <petscts.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define tserrorweightedenorm_ TSERRORWEIGHTEDENORM
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define tserrorweightedenorm_ tserrorweightedenorm
#endif
PETSC_EXTERN void tserrorweightedenorm_(TS *ts, Vec *E, Vec *U, Vec *Y, NormType *wnormtype, PetscReal *norm, PetscReal *norma, PetscReal *normr, PetscErrorCode *ierr)
{
  CHKFORTRANNULLREAL(norm);
  CHKFORTRANNULLREAL(norma);
  CHKFORTRANNULLREAL(normr);
  *ierr = TSErrorWeightedENorm(*ts, *E, *U, *Y, *wnormtype, norm, norma, normr);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscts.h>
#include <petscts.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define tssetcfltimelocal_ TSSETCFLTIMELOCAL
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define tssetcfltimelocal_ tssetcfltimelocal
#endif
PETSC_EXTERN void tssetcfltimelocal_(TS *ts, PetscReal *cfltime, PetscErrorCode *ierr)
{
  *ierr = TSSetCFLTimeLocal(*ts, *cfltime);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscts.h>
#include <petscts.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define tsgetcfltime_ TSGETCFLTIME
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define tsgetcfltime_ tsgetcfltime
#endif
PETSC_EXTERN void tsgetcfltime_(TS *ts, PetscReal *cfltime, PetscErrorCode *ierr)
{
  CHKFORTRANNULLREAL(cfltime);
  *ierr = TSGetCFLTime(*ts, cfltime);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscts.h>
#include <petscts.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define tsvisetvariablebounds_ TSVISETVARIABLEBOUNDS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define tsvisetvariablebounds_ tsvisetvariablebounds
#endif
PETSC_EXTERN void tsvisetvariablebounds_(TS *ts, Vec *xl, Vec *xu, PetscErrorCode *ierr)
{
  *ierr = TSVISetVariableBounds(*ts, *xl, *xu);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscts.h>
#include <petscts.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define tscomputelinearstability_ TSCOMPUTELINEARSTABILITY
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define tscomputelinearstability_ tscomputelinearstability
#endif
PETSC_EXTERN void tscomputelinearstability_(TS *ts, PetscReal *xr, PetscReal *xi, PetscReal *yr, PetscReal *yi, PetscErrorCode *ierr)
{
  CHKFORTRANNULLREAL(yr);
  CHKFORTRANNULLREAL(yi);
  *ierr = TSComputeLinearStability(*ts, *xr, *xi, yr, yi);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscts.h>
#include <petscts.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define tsrestartstep_ TSRESTARTSTEP
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define tsrestartstep_ tsrestartstep
#endif
PETSC_EXTERN void tsrestartstep_(TS *ts, PetscErrorCode *ierr)
{
  *ierr = TSRestartStep(*ts);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscts.h>
#include <petscts.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define tsrollback_ TSROLLBACK
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define tsrollback_ tsrollback
#endif
PETSC_EXTERN void tsrollback_(TS *ts, PetscErrorCode *ierr)
{
  *ierr = TSRollBack(*ts);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscts.h>
#include <petscts.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define tsgetsteprollback_ TSGETSTEPROLLBACK
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define tsgetsteprollback_ tsgetsteprollback
#endif
PETSC_EXTERN void tsgetsteprollback_(TS *ts, PetscBool *flg, PetscErrorCode *ierr)
{
  CHKFORTRANNULLBOOL(flg);
  *ierr = TSGetStepRollBack(*ts, flg);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscts.h>
#include <petscts.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define tsgetstepresize_ TSGETSTEPRESIZE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define tsgetstepresize_ tsgetstepresize
#endif
PETSC_EXTERN void tsgetstepresize_(TS *ts, PetscBool *flg, PetscErrorCode *ierr)
{
  CHKFORTRANNULLBOOL(flg);
  *ierr = TSGetStepResize(*ts, flg);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscts.h>
#include <petscts.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define tscomputeijacobiandefaultcolor_ TSCOMPUTEIJACOBIANDEFAULTCOLOR
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define tscomputeijacobiandefaultcolor_ tscomputeijacobiandefaultcolor
#endif
PETSC_EXTERN void tscomputeijacobiandefaultcolor_(TS *ts, PetscReal *t, Vec *U, Vec *Udot, PetscReal *shift, Mat *J, Mat *B, PetscCtx ctx, PetscErrorCode *ierr)
{
  *ierr = TSComputeIJacobianDefaultColor(*ts, *t, *U, *Udot, *shift, *J, *B, ctx);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscts.h>
#include <petscts.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define tsfunctiondomainerror_ TSFUNCTIONDOMAINERROR
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define tsfunctiondomainerror_ tsfunctiondomainerror
#endif
PETSC_EXTERN void tsfunctiondomainerror_(TS *ts, PetscReal *stagetime, Vec *Y, PetscBool *accept, PetscErrorCode *ierr)
{
  CHKFORTRANNULLBOOL(accept);
  *ierr = TSFunctionDomainError(*ts, *stagetime, *Y, accept);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscts.h>
#include <petscts.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define tsclone_ TSCLONE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define tsclone_ tsclone
#endif
PETSC_EXTERN void tsclone_(TS *tsin, TS *tsout, PetscErrorCode *ierr)
{
  PetscBool null_tsout = !*(void**) tsout ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(tsout);
  *ierr = TSClone(*tsin, tsout);
  if (*ierr) return;
  if (! null_tsout && !*(void**) tsout) *(void **) tsout = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscts.h>
#include <petscts.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define tsrhsjacobiantest_ TSRHSJACOBIANTEST
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define tsrhsjacobiantest_ tsrhsjacobiantest
#endif
PETSC_EXTERN void tsrhsjacobiantest_(TS *ts, PetscBool *flg, PetscErrorCode *ierr)
{
  CHKFORTRANNULLBOOL(flg);
  *ierr = TSRHSJacobianTest(*ts, flg);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscts.h>
#include <petscts.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define tsrhsjacobiantesttranspose_ TSRHSJACOBIANTESTTRANSPOSE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define tsrhsjacobiantesttranspose_ tsrhsjacobiantesttranspose
#endif
PETSC_EXTERN void tsrhsjacobiantesttranspose_(TS *ts, PetscBool *flg, PetscErrorCode *ierr)
{
  CHKFORTRANNULLBOOL(flg);
  *ierr = TSRHSJacobianTestTranspose(*ts, flg);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscts.h>
#include <petscts.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define tssetusesplitrhsfunction_ TSSETUSESPLITRHSFUNCTION
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define tssetusesplitrhsfunction_ tssetusesplitrhsfunction
#endif
PETSC_EXTERN void tssetusesplitrhsfunction_(TS *ts, PetscBool *use_splitrhsfunction, PetscErrorCode *ierr)
{
  *ierr = TSSetUseSplitRHSFunction(*ts, *use_splitrhsfunction ? PETSC_TRUE : PETSC_FALSE);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscts.h>
#include <petscts.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define tsgetusesplitrhsfunction_ TSGETUSESPLITRHSFUNCTION
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define tsgetusesplitrhsfunction_ tsgetusesplitrhsfunction
#endif
PETSC_EXTERN void tsgetusesplitrhsfunction_(TS *ts, PetscBool *use_splitrhsfunction, PetscErrorCode *ierr)
{
  CHKFORTRANNULLBOOL(use_splitrhsfunction);
  *ierr = TSGetUseSplitRHSFunction(*ts, use_splitrhsfunction);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscts.h>
#include <petscts.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define tssetmatstructure_ TSSETMATSTRUCTURE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define tssetmatstructure_ tssetmatstructure
#endif
PETSC_EXTERN void tssetmatstructure_(TS *ts, MatStructure *str, PetscErrorCode *ierr)
{
  *ierr = TSSetMatStructure(*ts, *str);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscts.h>
#include <petscts.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define tssetevaluationtimes_ TSSETEVALUATIONTIMES
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define tssetevaluationtimes_ tssetevaluationtimes
#endif
PETSC_EXTERN void tssetevaluationtimes_(TS *ts, PetscInt *n, PetscReal time_points[], PetscErrorCode *ierr)
{
  CHKFORTRANNULLREAL(time_points);
  *ierr = TSSetEvaluationTimes(*ts, *n, time_points);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscts.h>
#include <petscts.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define tssettimespan_ TSSETTIMESPAN
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define tssettimespan_ tssettimespan
#endif
PETSC_EXTERN void tssettimespan_(TS *ts, PetscInt *n, PetscReal span_times[], PetscErrorCode *ierr)
{
  CHKFORTRANNULLREAL(span_times);
  *ierr = TSSetTimeSpan(*ts, *n, span_times);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscts.h>
#include <petscts.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define tspruneijacobiancolor_ TSPRUNEIJACOBIANCOLOR
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define tspruneijacobiancolor_ tspruneijacobiancolor
#endif
PETSC_EXTERN void tspruneijacobiancolor_(TS *ts, Mat *J, Mat *B, PetscErrorCode *ierr)
{
  *ierr = TSPruneIJacobianColor(*ts, *J, *B);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscts.h>
#include <petscts.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define snestsformfunction_ SNESTSFORMFUNCTION
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define snestsformfunction_ snestsformfunction
#endif
PETSC_EXTERN void snestsformfunction_(SNES *snes, Vec *U, Vec *F, PetscCtx ctx, PetscErrorCode *ierr)
{
  *ierr = SNESTSFormFunction(*snes, *U, *F, ctx);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscts.h>
#include <petscts.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define snestsformjacobian_ SNESTSFORMJACOBIAN
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define snestsformjacobian_ snestsformjacobian
#endif
PETSC_EXTERN void snestsformjacobian_(SNES *snes, Vec *U, Mat *A, Mat *B, PetscCtx ctx, PetscErrorCode *ierr)
{
  *ierr = SNESTSFormJacobian(*snes, *U, *A, *B, ctx);
  if (*ierr) return;
}
