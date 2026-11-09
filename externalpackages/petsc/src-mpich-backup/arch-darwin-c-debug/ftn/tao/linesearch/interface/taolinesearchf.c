#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petsctao.h>
#include <petsctaolinesearch.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define taolinesearchviewfromoptions_ TAOLINESEARCHVIEWFROMOPTIONS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define taolinesearchviewfromoptions_ taolinesearchviewfromoptions
#endif
PETSC_EXTERN void taolinesearchviewfromoptions_(TaoLineSearch *A, PetscObject *obj, char name[], PetscErrorCode *ierr, PETSC_FORTRAN_CHARLEN_T l_name)
{
  char* c_name;
  FIXCHAR(name, l_name, c_name);
  *ierr = TaoLineSearchViewFromOptions(*A, *obj, c_name);
  if (*ierr) return;
  FREECHAR(name, c_name);
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petsctao.h>
#include <petsctaolinesearch.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define taolinesearchview_ TAOLINESEARCHVIEW
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define taolinesearchview_ taolinesearchview
#endif
PETSC_EXTERN void taolinesearchview_(TaoLineSearch *ls, PetscViewer *viewer, PetscErrorCode *ierr)
{
  PetscViewer v_viewer = PetscPatchDefaultViewers(viewer);
  *ierr = TaoLineSearchView(*ls, v_viewer);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petsctao.h>
#include <petsctaolinesearch.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define taolinesearchcreate_ TAOLINESEARCHCREATE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define taolinesearchcreate_ taolinesearchcreate
#endif
PETSC_EXTERN void taolinesearchcreate_(MPI_Fint *comm, TaoLineSearch *newls, PetscErrorCode *ierr)
{
  PetscBool null_newls = !*(void**) newls ? PETSC_TRUE : PETSC_FALSE;
  PETSC_FORTRAN_OBJECT_CREATE(newls);
  CHKFORTRANNULLOBJECT(newls);
  *ierr = TaoLineSearchCreate(MPI_Comm_f2c(*(comm)), newls);
  if (*ierr) return;
  if (! null_newls && !*(void**) newls) *(void **) newls = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petsctao.h>
#include <petsctaolinesearch.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define taolinesearchsetup_ TAOLINESEARCHSETUP
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define taolinesearchsetup_ taolinesearchsetup
#endif
PETSC_EXTERN void taolinesearchsetup_(TaoLineSearch *ls, PetscErrorCode *ierr)
{
  *ierr = TaoLineSearchSetUp(*ls);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petsctao.h>
#include <petsctaolinesearch.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define taolinesearchreset_ TAOLINESEARCHRESET
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define taolinesearchreset_ taolinesearchreset
#endif
PETSC_EXTERN void taolinesearchreset_(TaoLineSearch *ls, PetscErrorCode *ierr)
{
  *ierr = TaoLineSearchReset(*ls);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petsctao.h>
#include <petsctaolinesearch.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define taolinesearchdestroy_ TAOLINESEARCHDESTROY
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define taolinesearchdestroy_ taolinesearchdestroy
#endif
PETSC_EXTERN void taolinesearchdestroy_(TaoLineSearch *ls, PetscErrorCode *ierr)
{
  PETSC_FORTRAN_OBJECT_F_DESTROYED_TO_C_NULL(ls);
  PetscBool null_ls = !*(void**) ls ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(ls);
  *ierr = TaoLineSearchDestroy(ls);
  if (*ierr) return;
  if (! null_ls && !*(void**) ls) *(void **) ls = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petsctao.h>
#include <petsctaolinesearch.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define taolinesearchapply_ TAOLINESEARCHAPPLY
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define taolinesearchapply_ taolinesearchapply
#endif
PETSC_EXTERN void taolinesearchapply_(TaoLineSearch *ls, Vec *x, PetscReal *f, Vec *g, Vec *s, PetscReal *steplength, TaoLineSearchConvergedReason *reason, PetscErrorCode *ierr)
{
  CHKFORTRANNULLREAL(f);
  CHKFORTRANNULLREAL(steplength);
  *ierr = TaoLineSearchApply(*ls, *x, f, *g, *s, steplength, reason);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petsctao.h>
#include <petsctaolinesearch.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define taolinesearchsettype_ TAOLINESEARCHSETTYPE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define taolinesearchsettype_ taolinesearchsettype
#endif
PETSC_EXTERN void taolinesearchsettype_(TaoLineSearch *ls, char *type, PetscErrorCode *ierr, PETSC_FORTRAN_CHARLEN_T l_type)
{
  char* c_type;
  FIXCHAR(type, l_type, c_type);
  *ierr = TaoLineSearchSetType(*ls, c_type);
  if (*ierr) return;
  FREECHAR(type, c_type);
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petsctao.h>
#include <petsctaolinesearch.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define taolinesearchmonitor_ TAOLINESEARCHMONITOR
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define taolinesearchmonitor_ taolinesearchmonitor
#endif
PETSC_EXTERN void taolinesearchmonitor_(TaoLineSearch *ls, PetscInt *its, PetscReal *f, PetscReal *step, PetscErrorCode *ierr)
{
  *ierr = TaoLineSearchMonitor(*ls, *its, *f, *step);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petsctao.h>
#include <petsctaolinesearch.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define taolinesearchsetfromoptions_ TAOLINESEARCHSETFROMOPTIONS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define taolinesearchsetfromoptions_ taolinesearchsetfromoptions
#endif
PETSC_EXTERN void taolinesearchsetfromoptions_(TaoLineSearch *ls, PetscErrorCode *ierr)
{
  *ierr = TaoLineSearchSetFromOptions(*ls);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petsctao.h>
#include <petsctaolinesearch.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define taolinesearchgettype_ TAOLINESEARCHGETTYPE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define taolinesearchgettype_ taolinesearchgettype
#endif
PETSC_EXTERN void taolinesearchgettype_(TaoLineSearch *ls, char *type, PetscErrorCode *ierr, PETSC_FORTRAN_CHARLEN_T l_type)
{
  char* c_type = PETSC_NULLPTR;
  *ierr = TaoLineSearchGetType(*ls, (const char **)&c_type);
  if (*ierr) return;
  *ierr = PetscStrncpy((char *)type, c_type, l_type);
  if (*ierr) return;
  FIXRETURNCHAR(PETSC_TRUE, type, l_type);
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petsctao.h>
#include <petsctaolinesearch.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define taolinesearchgetnumberfunctionevaluations_ TAOLINESEARCHGETNUMBERFUNCTIONEVALUATIONS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define taolinesearchgetnumberfunctionevaluations_ taolinesearchgetnumberfunctionevaluations
#endif
PETSC_EXTERN void taolinesearchgetnumberfunctionevaluations_(TaoLineSearch *ls, PetscInt *nfeval, PetscInt *ngeval, PetscInt *nfgeval, PetscErrorCode *ierr)
{
  CHKFORTRANNULLINTEGER(nfeval);
  CHKFORTRANNULLINTEGER(ngeval);
  CHKFORTRANNULLINTEGER(nfgeval);
  *ierr = TaoLineSearchGetNumberFunctionEvaluations(*ls, nfeval, ngeval, nfgeval);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petsctao.h>
#include <petsctaolinesearch.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define taolinesearchisusingtaoroutines_ TAOLINESEARCHISUSINGTAOROUTINES
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define taolinesearchisusingtaoroutines_ taolinesearchisusingtaoroutines
#endif
PETSC_EXTERN void taolinesearchisusingtaoroutines_(TaoLineSearch *ls, PetscBool *flg, PetscErrorCode *ierr)
{
  CHKFORTRANNULLBOOL(flg);
  *ierr = TaoLineSearchIsUsingTaoRoutines(*ls, flg);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petsctao.h>
#include <petsctaolinesearch.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define taolinesearchusetaoroutines_ TAOLINESEARCHUSETAOROUTINES
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define taolinesearchusetaoroutines_ taolinesearchusetaoroutines
#endif
PETSC_EXTERN void taolinesearchusetaoroutines_(TaoLineSearch *ls, Tao *ts, PetscErrorCode *ierr)
{
  *ierr = TaoLineSearchUseTaoRoutines(*ls, *ts);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petsctao.h>
#include <petsctaolinesearch.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define taolinesearchcomputeobjective_ TAOLINESEARCHCOMPUTEOBJECTIVE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define taolinesearchcomputeobjective_ taolinesearchcomputeobjective
#endif
PETSC_EXTERN void taolinesearchcomputeobjective_(TaoLineSearch *ls, Vec *x, PetscReal *f, PetscErrorCode *ierr)
{
  CHKFORTRANNULLREAL(f);
  *ierr = TaoLineSearchComputeObjective(*ls, *x, f);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petsctao.h>
#include <petsctaolinesearch.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define taolinesearchcomputeobjectiveandgradient_ TAOLINESEARCHCOMPUTEOBJECTIVEANDGRADIENT
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define taolinesearchcomputeobjectiveandgradient_ taolinesearchcomputeobjectiveandgradient
#endif
PETSC_EXTERN void taolinesearchcomputeobjectiveandgradient_(TaoLineSearch *ls, Vec *x, PetscReal *f, Vec *g, PetscErrorCode *ierr)
{
  CHKFORTRANNULLREAL(f);
  *ierr = TaoLineSearchComputeObjectiveAndGradient(*ls, *x, f, *g);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petsctao.h>
#include <petsctaolinesearch.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define taolinesearchcomputegradient_ TAOLINESEARCHCOMPUTEGRADIENT
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define taolinesearchcomputegradient_ taolinesearchcomputegradient
#endif
PETSC_EXTERN void taolinesearchcomputegradient_(TaoLineSearch *ls, Vec *x, Vec *g, PetscErrorCode *ierr)
{
  *ierr = TaoLineSearchComputeGradient(*ls, *x, *g);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petsctao.h>
#include <petsctaolinesearch.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define taolinesearchcomputeobjectiveandgts_ TAOLINESEARCHCOMPUTEOBJECTIVEANDGTS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define taolinesearchcomputeobjectiveandgts_ taolinesearchcomputeobjectiveandgts
#endif
PETSC_EXTERN void taolinesearchcomputeobjectiveandgts_(TaoLineSearch *ls, Vec *x, PetscReal *f, PetscReal *gts, PetscErrorCode *ierr)
{
  CHKFORTRANNULLREAL(f);
  CHKFORTRANNULLREAL(gts);
  *ierr = TaoLineSearchComputeObjectiveAndGTS(*ls, *x, f, gts);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petsctao.h>
#include <petsctaolinesearch.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define taolinesearchgetsolution_ TAOLINESEARCHGETSOLUTION
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define taolinesearchgetsolution_ taolinesearchgetsolution
#endif
PETSC_EXTERN void taolinesearchgetsolution_(TaoLineSearch *ls, Vec *x, PetscReal *f, Vec *g, PetscReal *steplength, TaoLineSearchConvergedReason *reason, PetscErrorCode *ierr)
{
  CHKFORTRANNULLREAL(f);
  CHKFORTRANNULLREAL(steplength);
  *ierr = TaoLineSearchGetSolution(*ls, *x, f, *g, steplength, reason);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petsctao.h>
#include <petsctaolinesearch.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define taolinesearchgetstartingvector_ TAOLINESEARCHGETSTARTINGVECTOR
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define taolinesearchgetstartingvector_ taolinesearchgetstartingvector
#endif
PETSC_EXTERN void taolinesearchgetstartingvector_(TaoLineSearch *ls, Vec *x, PetscErrorCode *ierr)
{
  PetscBool null_x = !*(void**) x ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(x);
  *ierr = TaoLineSearchGetStartingVector(*ls, x);
  if (*ierr) return;
  if (! null_x && !*(void**) x) *(void **) x = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petsctao.h>
#include <petsctaolinesearch.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define taolinesearchgetstepdirection_ TAOLINESEARCHGETSTEPDIRECTION
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define taolinesearchgetstepdirection_ taolinesearchgetstepdirection
#endif
PETSC_EXTERN void taolinesearchgetstepdirection_(TaoLineSearch *ls, Vec *s, PetscErrorCode *ierr)
{
  PetscBool null_s = !*(void**) s ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(s);
  *ierr = TaoLineSearchGetStepDirection(*ls, s);
  if (*ierr) return;
  if (! null_s && !*(void**) s) *(void **) s = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petsctao.h>
#include <petsctaolinesearch.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define taolinesearchgetfullstepobjective_ TAOLINESEARCHGETFULLSTEPOBJECTIVE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define taolinesearchgetfullstepobjective_ taolinesearchgetfullstepobjective
#endif
PETSC_EXTERN void taolinesearchgetfullstepobjective_(TaoLineSearch *ls, PetscReal *f_fullstep, PetscErrorCode *ierr)
{
  CHKFORTRANNULLREAL(f_fullstep);
  *ierr = TaoLineSearchGetFullStepObjective(*ls, f_fullstep);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petsctao.h>
#include <petsctaolinesearch.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define taolinesearchsetvariablebounds_ TAOLINESEARCHSETVARIABLEBOUNDS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define taolinesearchsetvariablebounds_ taolinesearchsetvariablebounds
#endif
PETSC_EXTERN void taolinesearchsetvariablebounds_(TaoLineSearch *ls, Vec *xl, Vec *xu, PetscErrorCode *ierr)
{
  *ierr = TaoLineSearchSetVariableBounds(*ls, *xl, *xu);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petsctao.h>
#include <petsctaolinesearch.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define taolinesearchsetinitialsteplength_ TAOLINESEARCHSETINITIALSTEPLENGTH
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define taolinesearchsetinitialsteplength_ taolinesearchsetinitialsteplength
#endif
PETSC_EXTERN void taolinesearchsetinitialsteplength_(TaoLineSearch *ls, PetscReal *s, PetscErrorCode *ierr)
{
  *ierr = TaoLineSearchSetInitialStepLength(*ls, *s);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petsctao.h>
#include <petsctaolinesearch.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define taolinesearchgetsteplength_ TAOLINESEARCHGETSTEPLENGTH
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define taolinesearchgetsteplength_ taolinesearchgetsteplength
#endif
PETSC_EXTERN void taolinesearchgetsteplength_(TaoLineSearch *ls, PetscReal *s, PetscErrorCode *ierr)
{
  CHKFORTRANNULLREAL(s);
  *ierr = TaoLineSearchGetStepLength(*ls, s);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petsctao.h>
#include <petsctaolinesearch.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define taolinesearchappendoptionsprefix_ TAOLINESEARCHAPPENDOPTIONSPREFIX
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define taolinesearchappendoptionsprefix_ taolinesearchappendoptionsprefix
#endif
PETSC_EXTERN void taolinesearchappendoptionsprefix_(TaoLineSearch *ls, char p[], PetscErrorCode *ierr, PETSC_FORTRAN_CHARLEN_T l_p)
{
  char* c_p;
  FIXCHAR(p, l_p, c_p);
  *ierr = TaoLineSearchAppendOptionsPrefix(*ls, c_p);
  if (*ierr) return;
  FREECHAR(p, c_p);
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petsctao.h>
#include <petsctaolinesearch.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define taolinesearchgetoptionsprefix_ TAOLINESEARCHGETOPTIONSPREFIX
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define taolinesearchgetoptionsprefix_ taolinesearchgetoptionsprefix
#endif
PETSC_EXTERN void taolinesearchgetoptionsprefix_(TaoLineSearch *ls, char p[], PetscErrorCode *ierr, PETSC_FORTRAN_CHARLEN_T l_p)
{
  char* c_p = PETSC_NULLPTR;
  *ierr = TaoLineSearchGetOptionsPrefix(*ls, (const char **)&c_p);
  if (*ierr) return;
  *ierr = PetscStrncpy((char *)p, c_p, l_p);
  if (*ierr) return;
  FIXRETURNCHAR(PETSC_TRUE, p, l_p);
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petsctao.h>
#include <petsctaolinesearch.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define taolinesearchsetoptionsprefix_ TAOLINESEARCHSETOPTIONSPREFIX
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define taolinesearchsetoptionsprefix_ taolinesearchsetoptionsprefix
#endif
PETSC_EXTERN void taolinesearchsetoptionsprefix_(TaoLineSearch *ls, char p[], PetscErrorCode *ierr, PETSC_FORTRAN_CHARLEN_T l_p)
{
  char* c_p;
  FIXCHAR(p, l_p, c_p);
  *ierr = TaoLineSearchSetOptionsPrefix(*ls, c_p);
  if (*ierr) return;
  FREECHAR(p, c_p);
}
