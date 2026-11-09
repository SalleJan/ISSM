#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petsctao.h>
#include <petsctao.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define taoparametersinitialize_ TAOPARAMETERSINITIALIZE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define taoparametersinitialize_ taoparametersinitialize
#endif
PETSC_EXTERN void taoparametersinitialize_(Tao *tao, PetscErrorCode *ierr)
{
  *ierr = TaoParametersInitialize(*tao);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petsctao.h>
#include <petsctao.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define taocreate_ TAOCREATE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define taocreate_ taocreate
#endif
PETSC_EXTERN void taocreate_(MPI_Fint *comm, Tao *newtao, PetscErrorCode *ierr)
{
  PetscBool null_newtao = !*(void**) newtao ? PETSC_TRUE : PETSC_FALSE;
  PETSC_FORTRAN_OBJECT_CREATE(newtao);
  CHKFORTRANNULLOBJECT(newtao);
  *ierr = TaoCreate(MPI_Comm_f2c(*(comm)), newtao);
  if (*ierr) return;
  if (! null_newtao && !*(void**) newtao) *(void **) newtao = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petsctao.h>
#include <petsctao.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define taosolve_ TAOSOLVE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define taosolve_ taosolve
#endif
PETSC_EXTERN void taosolve_(Tao *tao, PetscErrorCode *ierr)
{
  *ierr = TaoSolve(*tao);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petsctao.h>
#include <petsctao.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define taosetup_ TAOSETUP
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define taosetup_ taosetup
#endif
PETSC_EXTERN void taosetup_(Tao *tao, PetscErrorCode *ierr)
{
  *ierr = TaoSetUp(*tao);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petsctao.h>
#include <petsctao.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define taodestroy_ TAODESTROY
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define taodestroy_ taodestroy
#endif
PETSC_EXTERN void taodestroy_(Tao *tao, PetscErrorCode *ierr)
{
  PETSC_FORTRAN_OBJECT_F_DESTROYED_TO_C_NULL(tao);
  PetscBool null_tao = !*(void**) tao ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(tao);
  *ierr = TaoDestroy(tao);
  if (*ierr) return;
  if (! null_tao && !*(void**) tao) *(void **) tao = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petsctao.h>
#include <petsctao.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define taokspsetuseew_ TAOKSPSETUSEEW
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define taokspsetuseew_ taokspsetuseew
#endif
PETSC_EXTERN void taokspsetuseew_(Tao *tao, PetscBool *flag, PetscErrorCode *ierr)
{
  *ierr = TaoKSPSetUseEW(*tao, *flag ? PETSC_TRUE : PETSC_FALSE);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petsctao.h>
#include <petsctao.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define taosetfromoptions_ TAOSETFROMOPTIONS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define taosetfromoptions_ taosetfromoptions
#endif
PETSC_EXTERN void taosetfromoptions_(Tao *tao, PetscErrorCode *ierr)
{
  *ierr = TaoSetFromOptions(*tao);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petsctao.h>
#include <petsctao.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define taoviewfromoptions_ TAOVIEWFROMOPTIONS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define taoviewfromoptions_ taoviewfromoptions
#endif
PETSC_EXTERN void taoviewfromoptions_(Tao *A, PetscObject *obj, char name[], PetscErrorCode *ierr, PETSC_FORTRAN_CHARLEN_T l_name)
{
  char* c_name;
  FIXCHAR(name, l_name, c_name);
  *ierr = TaoViewFromOptions(*A, *obj, c_name);
  if (*ierr) return;
  FREECHAR(name, c_name);
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petsctao.h>
#include <petsctao.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define taoview_ TAOVIEW
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define taoview_ taoview
#endif
PETSC_EXTERN void taoview_(Tao *tao, PetscViewer *viewer, PetscErrorCode *ierr)
{
  PetscViewer v_viewer = PetscPatchDefaultViewers(viewer);
  *ierr = TaoView(*tao, v_viewer);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petsctao.h>
#include <petsctao.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define taosetrecyclehistory_ TAOSETRECYCLEHISTORY
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define taosetrecyclehistory_ taosetrecyclehistory
#endif
PETSC_EXTERN void taosetrecyclehistory_(Tao *tao, PetscBool *recycle, PetscErrorCode *ierr)
{
  *ierr = TaoSetRecycleHistory(*tao, *recycle ? PETSC_TRUE : PETSC_FALSE);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petsctao.h>
#include <petsctao.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define taogetrecyclehistory_ TAOGETRECYCLEHISTORY
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define taogetrecyclehistory_ taogetrecyclehistory
#endif
PETSC_EXTERN void taogetrecyclehistory_(Tao *tao, PetscBool *recycle, PetscErrorCode *ierr)
{
  CHKFORTRANNULLBOOL(recycle);
  *ierr = TaoGetRecycleHistory(*tao, recycle);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petsctao.h>
#include <petsctao.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define taosettolerances_ TAOSETTOLERANCES
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define taosettolerances_ taosettolerances
#endif
PETSC_EXTERN void taosettolerances_(Tao *tao, PetscReal *gatol, PetscReal *grtol, PetscReal *gttol, PetscErrorCode *ierr)
{
  *ierr = TaoSetTolerances(*tao, *gatol, *grtol, *gttol);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petsctao.h>
#include <petsctao.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define taosetconstrainttolerances_ TAOSETCONSTRAINTTOLERANCES
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define taosetconstrainttolerances_ taosetconstrainttolerances
#endif
PETSC_EXTERN void taosetconstrainttolerances_(Tao *tao, PetscReal *catol, PetscReal *crtol, PetscErrorCode *ierr)
{
  *ierr = TaoSetConstraintTolerances(*tao, *catol, *crtol);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petsctao.h>
#include <petsctao.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define taogetconstrainttolerances_ TAOGETCONSTRAINTTOLERANCES
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define taogetconstrainttolerances_ taogetconstrainttolerances
#endif
PETSC_EXTERN void taogetconstrainttolerances_(Tao *tao, PetscReal *catol, PetscReal *crtol, PetscErrorCode *ierr)
{
  CHKFORTRANNULLREAL(catol);
  CHKFORTRANNULLREAL(crtol);
  *ierr = TaoGetConstraintTolerances(*tao, catol, crtol);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petsctao.h>
#include <petsctao.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define taosetfunctionlowerbound_ TAOSETFUNCTIONLOWERBOUND
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define taosetfunctionlowerbound_ taosetfunctionlowerbound
#endif
PETSC_EXTERN void taosetfunctionlowerbound_(Tao *tao, PetscReal *fmin, PetscErrorCode *ierr)
{
  *ierr = TaoSetFunctionLowerBound(*tao, *fmin);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petsctao.h>
#include <petsctao.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define taogetfunctionlowerbound_ TAOGETFUNCTIONLOWERBOUND
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define taogetfunctionlowerbound_ taogetfunctionlowerbound
#endif
PETSC_EXTERN void taogetfunctionlowerbound_(Tao *tao, PetscReal *fmin, PetscErrorCode *ierr)
{
  CHKFORTRANNULLREAL(fmin);
  *ierr = TaoGetFunctionLowerBound(*tao, fmin);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petsctao.h>
#include <petsctao.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define taosetmaximumfunctionevaluations_ TAOSETMAXIMUMFUNCTIONEVALUATIONS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define taosetmaximumfunctionevaluations_ taosetmaximumfunctionevaluations
#endif
PETSC_EXTERN void taosetmaximumfunctionevaluations_(Tao *tao, PetscInt *nfcn, PetscErrorCode *ierr)
{
  *ierr = TaoSetMaximumFunctionEvaluations(*tao, *nfcn);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petsctao.h>
#include <petsctao.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define taogetmaximumfunctionevaluations_ TAOGETMAXIMUMFUNCTIONEVALUATIONS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define taogetmaximumfunctionevaluations_ taogetmaximumfunctionevaluations
#endif
PETSC_EXTERN void taogetmaximumfunctionevaluations_(Tao *tao, PetscInt *nfcn, PetscErrorCode *ierr)
{
  CHKFORTRANNULLINTEGER(nfcn);
  *ierr = TaoGetMaximumFunctionEvaluations(*tao, nfcn);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petsctao.h>
#include <petsctao.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define taogetcurrentfunctionevaluations_ TAOGETCURRENTFUNCTIONEVALUATIONS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define taogetcurrentfunctionevaluations_ taogetcurrentfunctionevaluations
#endif
PETSC_EXTERN void taogetcurrentfunctionevaluations_(Tao *tao, PetscInt *nfuncs, PetscErrorCode *ierr)
{
  CHKFORTRANNULLINTEGER(nfuncs);
  *ierr = TaoGetCurrentFunctionEvaluations(*tao, nfuncs);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petsctao.h>
#include <petsctao.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define taosetmaximumiterations_ TAOSETMAXIMUMITERATIONS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define taosetmaximumiterations_ taosetmaximumiterations
#endif
PETSC_EXTERN void taosetmaximumiterations_(Tao *tao, PetscInt *maxits, PetscErrorCode *ierr)
{
  *ierr = TaoSetMaximumIterations(*tao, *maxits);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petsctao.h>
#include <petsctao.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define taogetmaximumiterations_ TAOGETMAXIMUMITERATIONS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define taogetmaximumiterations_ taogetmaximumiterations
#endif
PETSC_EXTERN void taogetmaximumiterations_(Tao *tao, PetscInt *maxits, PetscErrorCode *ierr)
{
  CHKFORTRANNULLINTEGER(maxits);
  *ierr = TaoGetMaximumIterations(*tao, maxits);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petsctao.h>
#include <petsctao.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define taosetinitialtrustregionradius_ TAOSETINITIALTRUSTREGIONRADIUS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define taosetinitialtrustregionradius_ taosetinitialtrustregionradius
#endif
PETSC_EXTERN void taosetinitialtrustregionradius_(Tao *tao, PetscReal *radius, PetscErrorCode *ierr)
{
  *ierr = TaoSetInitialTrustRegionRadius(*tao, *radius);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petsctao.h>
#include <petsctao.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define taogetinitialtrustregionradius_ TAOGETINITIALTRUSTREGIONRADIUS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define taogetinitialtrustregionradius_ taogetinitialtrustregionradius
#endif
PETSC_EXTERN void taogetinitialtrustregionradius_(Tao *tao, PetscReal *radius, PetscErrorCode *ierr)
{
  CHKFORTRANNULLREAL(radius);
  *ierr = TaoGetInitialTrustRegionRadius(*tao, radius);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petsctao.h>
#include <petsctao.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define taogetcurrenttrustregionradius_ TAOGETCURRENTTRUSTREGIONRADIUS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define taogetcurrenttrustregionradius_ taogetcurrenttrustregionradius
#endif
PETSC_EXTERN void taogetcurrenttrustregionradius_(Tao *tao, PetscReal *radius, PetscErrorCode *ierr)
{
  CHKFORTRANNULLREAL(radius);
  *ierr = TaoGetCurrentTrustRegionRadius(*tao, radius);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petsctao.h>
#include <petsctao.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define taogettolerances_ TAOGETTOLERANCES
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define taogettolerances_ taogettolerances
#endif
PETSC_EXTERN void taogettolerances_(Tao *tao, PetscReal *gatol, PetscReal *grtol, PetscReal *gttol, PetscErrorCode *ierr)
{
  CHKFORTRANNULLREAL(gatol);
  CHKFORTRANNULLREAL(grtol);
  CHKFORTRANNULLREAL(gttol);
  *ierr = TaoGetTolerances(*tao, gatol, grtol, gttol);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petsctao.h>
#include <petsctao.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define taogetksp_ TAOGETKSP
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define taogetksp_ taogetksp
#endif
PETSC_EXTERN void taogetksp_(Tao *tao, KSP *ksp, PetscErrorCode *ierr)
{
  PetscBool null_ksp = !*(void**) ksp ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(ksp);
  *ierr = TaoGetKSP(*tao, ksp);
  if (*ierr) return;
  if (! null_ksp && !*(void**) ksp) *(void **) ksp = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petsctao.h>
#include <petsctao.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define taogetlinearsolveiterations_ TAOGETLINEARSOLVEITERATIONS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define taogetlinearsolveiterations_ taogetlinearsolveiterations
#endif
PETSC_EXTERN void taogetlinearsolveiterations_(Tao *tao, PetscInt *lits, PetscErrorCode *ierr)
{
  CHKFORTRANNULLINTEGER(lits);
  *ierr = TaoGetLinearSolveIterations(*tao, lits);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petsctao.h>
#include <petsctao.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define taogetlinesearch_ TAOGETLINESEARCH
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define taogetlinesearch_ taogetlinesearch
#endif
PETSC_EXTERN void taogetlinesearch_(Tao *tao, TaoLineSearch *ls, PetscErrorCode *ierr)
{
  PetscBool null_ls = !*(void**) ls ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(ls);
  *ierr = TaoGetLineSearch(*tao, ls);
  if (*ierr) return;
  if (! null_ls && !*(void**) ls) *(void **) ls = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petsctao.h>
#include <petsctao.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define taoaddlinesearchcounts_ TAOADDLINESEARCHCOUNTS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define taoaddlinesearchcounts_ taoaddlinesearchcounts
#endif
PETSC_EXTERN void taoaddlinesearchcounts_(Tao *tao, PetscErrorCode *ierr)
{
  *ierr = TaoAddLineSearchCounts(*tao);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petsctao.h>
#include <petsctao.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define taogetsolution_ TAOGETSOLUTION
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define taogetsolution_ taogetsolution
#endif
PETSC_EXTERN void taogetsolution_(Tao *tao, Vec *X, PetscErrorCode *ierr)
{
  PetscBool null_X = !*(void**) X ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(X);
  *ierr = TaoGetSolution(*tao, X);
  if (*ierr) return;
  if (! null_X && !*(void**) X) *(void **) X = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petsctao.h>
#include <petsctao.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define taoresetstatistics_ TAORESETSTATISTICS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define taoresetstatistics_ taoresetstatistics
#endif
PETSC_EXTERN void taoresetstatistics_(Tao *tao, PetscErrorCode *ierr)
{
  *ierr = TaoResetStatistics(*tao);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petsctao.h>
#include <petsctao.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define taomonitorcancel_ TAOMONITORCANCEL
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define taomonitorcancel_ taomonitorcancel
#endif
PETSC_EXTERN void taomonitorcancel_(Tao *tao, PetscErrorCode *ierr)
{
  *ierr = TaoMonitorCancel(*tao);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petsctao.h>
#include <petsctao.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define taomonitordefault_ TAOMONITORDEFAULT
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define taomonitordefault_ taomonitordefault
#endif
PETSC_EXTERN void taomonitordefault_(Tao *tao, PetscViewerAndFormat **vf, PetscErrorCode *ierr)
{
  *ierr = TaoMonitorDefault(*tao, *vf);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petsctao.h>
#include <petsctao.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define taomonitorglobalization_ TAOMONITORGLOBALIZATION
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define taomonitorglobalization_ taomonitorglobalization
#endif
PETSC_EXTERN void taomonitorglobalization_(Tao *tao, PetscViewerAndFormat **vf, PetscErrorCode *ierr)
{
  *ierr = TaoMonitorGlobalization(*tao, *vf);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petsctao.h>
#include <petsctao.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define taomonitordefaultshort_ TAOMONITORDEFAULTSHORT
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define taomonitordefaultshort_ taomonitordefaultshort
#endif
PETSC_EXTERN void taomonitordefaultshort_(Tao *tao, PetscViewerAndFormat **vf, PetscErrorCode *ierr)
{
  *ierr = TaoMonitorDefaultShort(*tao, *vf);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petsctao.h>
#include <petsctao.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define taomonitorconstraintnorm_ TAOMONITORCONSTRAINTNORM
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define taomonitorconstraintnorm_ taomonitorconstraintnorm
#endif
PETSC_EXTERN void taomonitorconstraintnorm_(Tao *tao, PetscViewerAndFormat **vf, PetscErrorCode *ierr)
{
  *ierr = TaoMonitorConstraintNorm(*tao, *vf);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petsctao.h>
#include <petsctao.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define taomonitorsolution_ TAOMONITORSOLUTION
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define taomonitorsolution_ taomonitorsolution
#endif
PETSC_EXTERN void taomonitorsolution_(Tao *tao, PetscViewerAndFormat **vf, PetscErrorCode *ierr)
{
  *ierr = TaoMonitorSolution(*tao, *vf);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petsctao.h>
#include <petsctao.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define taomonitorgradient_ TAOMONITORGRADIENT
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define taomonitorgradient_ taomonitorgradient
#endif
PETSC_EXTERN void taomonitorgradient_(Tao *tao, PetscViewerAndFormat **vf, PetscErrorCode *ierr)
{
  *ierr = TaoMonitorGradient(*tao, *vf);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petsctao.h>
#include <petsctao.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define taomonitorstep_ TAOMONITORSTEP
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define taomonitorstep_ taomonitorstep
#endif
PETSC_EXTERN void taomonitorstep_(Tao *tao, PetscViewerAndFormat **vf, PetscErrorCode *ierr)
{
  *ierr = TaoMonitorStep(*tao, *vf);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petsctao.h>
#include <petsctao.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define taomonitorsolutiondraw_ TAOMONITORSOLUTIONDRAW
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define taomonitorsolutiondraw_ taomonitorsolutiondraw
#endif
PETSC_EXTERN void taomonitorsolutiondraw_(Tao *tao, PetscCtx ctx, PetscErrorCode *ierr)
{
  *ierr = TaoMonitorSolutionDraw(*tao, ctx);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petsctao.h>
#include <petsctao.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define taomonitorgradientdraw_ TAOMONITORGRADIENTDRAW
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define taomonitorgradientdraw_ taomonitorgradientdraw
#endif
PETSC_EXTERN void taomonitorgradientdraw_(Tao *tao, PetscCtx ctx, PetscErrorCode *ierr)
{
  *ierr = TaoMonitorGradientDraw(*tao, ctx);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petsctao.h>
#include <petsctao.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define taomonitorstepdraw_ TAOMONITORSTEPDRAW
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define taomonitorstepdraw_ taomonitorstepdraw
#endif
PETSC_EXTERN void taomonitorstepdraw_(Tao *tao, PetscCtx ctx, PetscErrorCode *ierr)
{
  *ierr = TaoMonitorStepDraw(*tao, ctx);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petsctao.h>
#include <petsctao.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define taomonitorresidual_ TAOMONITORRESIDUAL
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define taomonitorresidual_ taomonitorresidual
#endif
PETSC_EXTERN void taomonitorresidual_(Tao *tao, PetscViewerAndFormat **vf, PetscErrorCode *ierr)
{
  *ierr = TaoMonitorResidual(*tao, *vf);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petsctao.h>
#include <petsctao.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define taodefaultconvergencetest_ TAODEFAULTCONVERGENCETEST
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define taodefaultconvergencetest_ taodefaultconvergencetest
#endif
PETSC_EXTERN void taodefaultconvergencetest_(Tao *tao, void *dummy, PetscErrorCode *ierr)
{
  *ierr = TaoDefaultConvergenceTest(*tao, dummy);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petsctao.h>
#include <petsctao.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define taosetoptionsprefix_ TAOSETOPTIONSPREFIX
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define taosetoptionsprefix_ taosetoptionsprefix
#endif
PETSC_EXTERN void taosetoptionsprefix_(Tao *tao, char p[], PetscErrorCode *ierr, PETSC_FORTRAN_CHARLEN_T l_p)
{
  char* c_p;
  FIXCHAR(p, l_p, c_p);
  *ierr = TaoSetOptionsPrefix(*tao, c_p);
  if (*ierr) return;
  FREECHAR(p, c_p);
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petsctao.h>
#include <petsctao.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define taoappendoptionsprefix_ TAOAPPENDOPTIONSPREFIX
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define taoappendoptionsprefix_ taoappendoptionsprefix
#endif
PETSC_EXTERN void taoappendoptionsprefix_(Tao *tao, char p[], PetscErrorCode *ierr, PETSC_FORTRAN_CHARLEN_T l_p)
{
  char* c_p;
  FIXCHAR(p, l_p, c_p);
  *ierr = TaoAppendOptionsPrefix(*tao, c_p);
  if (*ierr) return;
  FREECHAR(p, c_p);
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petsctao.h>
#include <petsctao.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define taogetoptionsprefix_ TAOGETOPTIONSPREFIX
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define taogetoptionsprefix_ taogetoptionsprefix
#endif
PETSC_EXTERN void taogetoptionsprefix_(Tao *tao, char p[], PetscErrorCode *ierr, PETSC_FORTRAN_CHARLEN_T l_p)
{
  char* c_p = PETSC_NULLPTR;
  *ierr = TaoGetOptionsPrefix(*tao, (const char **)&c_p);
  if (*ierr) return;
  *ierr = PetscStrncpy((char *)p, c_p, l_p);
  if (*ierr) return;
  FIXRETURNCHAR(PETSC_TRUE, p, l_p);
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petsctao.h>
#include <petsctao.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define taosettype_ TAOSETTYPE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define taosettype_ taosettype
#endif
PETSC_EXTERN void taosettype_(Tao *tao, char *type, PetscErrorCode *ierr, PETSC_FORTRAN_CHARLEN_T l_type)
{
  char* c_type;
  FIXCHAR(type, l_type, c_type);
  *ierr = TaoSetType(*tao, c_type);
  if (*ierr) return;
  FREECHAR(type, c_type);
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petsctao.h>
#include <petsctao.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define taoregisterdestroy_ TAOREGISTERDESTROY
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define taoregisterdestroy_ taoregisterdestroy
#endif
PETSC_EXTERN void taoregisterdestroy_(PetscErrorCode *ierr)
{
  *ierr = TaoRegisterDestroy();
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petsctao.h>
#include <petsctao.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define taogetiterationnumber_ TAOGETITERATIONNUMBER
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define taogetiterationnumber_ taogetiterationnumber
#endif
PETSC_EXTERN void taogetiterationnumber_(Tao *tao, PetscInt *iter, PetscErrorCode *ierr)
{
  CHKFORTRANNULLINTEGER(iter);
  *ierr = TaoGetIterationNumber(*tao, iter);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petsctao.h>
#include <petsctao.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define taogetresidualnorm_ TAOGETRESIDUALNORM
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define taogetresidualnorm_ taogetresidualnorm
#endif
PETSC_EXTERN void taogetresidualnorm_(Tao *tao, PetscReal *value, PetscErrorCode *ierr)
{
  CHKFORTRANNULLREAL(value);
  *ierr = TaoGetResidualNorm(*tao, value);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petsctao.h>
#include <petsctao.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define taosetiterationnumber_ TAOSETITERATIONNUMBER
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define taosetiterationnumber_ taosetiterationnumber
#endif
PETSC_EXTERN void taosetiterationnumber_(Tao *tao, PetscInt *iter, PetscErrorCode *ierr)
{
  *ierr = TaoSetIterationNumber(*tao, *iter);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petsctao.h>
#include <petsctao.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define taogettotaliterationnumber_ TAOGETTOTALITERATIONNUMBER
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define taogettotaliterationnumber_ taogettotaliterationnumber
#endif
PETSC_EXTERN void taogettotaliterationnumber_(Tao *tao, PetscInt *iter, PetscErrorCode *ierr)
{
  CHKFORTRANNULLINTEGER(iter);
  *ierr = TaoGetTotalIterationNumber(*tao, iter);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petsctao.h>
#include <petsctao.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define taosettotaliterationnumber_ TAOSETTOTALITERATIONNUMBER
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define taosettotaliterationnumber_ taosettotaliterationnumber
#endif
PETSC_EXTERN void taosettotaliterationnumber_(Tao *tao, PetscInt *iter, PetscErrorCode *ierr)
{
  *ierr = TaoSetTotalIterationNumber(*tao, *iter);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petsctao.h>
#include <petsctao.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define taosetconvergedreason_ TAOSETCONVERGEDREASON
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define taosetconvergedreason_ taosetconvergedreason
#endif
PETSC_EXTERN void taosetconvergedreason_(Tao *tao, TaoConvergedReason *reason, PetscErrorCode *ierr)
{
  *ierr = TaoSetConvergedReason(*tao, *reason);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petsctao.h>
#include <petsctao.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define taogetconvergedreason_ TAOGETCONVERGEDREASON
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define taogetconvergedreason_ taogetconvergedreason
#endif
PETSC_EXTERN void taogetconvergedreason_(Tao *tao, TaoConvergedReason *reason, PetscErrorCode *ierr)
{
  *ierr = TaoGetConvergedReason(*tao, reason);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petsctao.h>
#include <petsctao.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define taogetsolutionstatus_ TAOGETSOLUTIONSTATUS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define taogetsolutionstatus_ taogetsolutionstatus
#endif
PETSC_EXTERN void taogetsolutionstatus_(Tao *tao, PetscInt *its, PetscReal *f, PetscReal *gnorm, PetscReal *cnorm, PetscReal *xdiff, TaoConvergedReason *reason, PetscErrorCode *ierr)
{
  CHKFORTRANNULLINTEGER(its);
  CHKFORTRANNULLREAL(f);
  CHKFORTRANNULLREAL(gnorm);
  CHKFORTRANNULLREAL(cnorm);
  CHKFORTRANNULLREAL(xdiff);
  *ierr = TaoGetSolutionStatus(*tao, its, f, gnorm, cnorm, xdiff, reason);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petsctao.h>
#include <petsctao.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define taogettype_ TAOGETTYPE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define taogettype_ taogettype
#endif
PETSC_EXTERN void taogettype_(Tao *tao, char *type, PetscErrorCode *ierr, PETSC_FORTRAN_CHARLEN_T l_type)
{
  char* c_type = PETSC_NULLPTR;
  *ierr = TaoGetType(*tao, (const char **)&c_type);
  if (*ierr) return;
  *ierr = PetscStrncpy((char *)type, c_type, l_type);
  if (*ierr) return;
  FIXRETURNCHAR(PETSC_TRUE, type, l_type);
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petsctao.h>
#include <petsctao.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define taomonitor_ TAOMONITOR
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define taomonitor_ taomonitor
#endif
PETSC_EXTERN void taomonitor_(Tao *tao, PetscInt *its, PetscReal *f, PetscReal *res, PetscReal *cnorm, PetscReal *steplength, PetscErrorCode *ierr)
{
  *ierr = TaoMonitor(*tao, *its, *f, *res, *cnorm, *steplength);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petsctao.h>
#include <petsctao.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define taosetconvergencehistory_ TAOSETCONVERGENCEHISTORY
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define taosetconvergencehistory_ taosetconvergencehistory
#endif
PETSC_EXTERN void taosetconvergencehistory_(Tao *tao, PetscReal obj[], PetscReal resid[], PetscReal cnorm[], PetscInt lits[], PetscInt *na, PetscBool *reset, PetscErrorCode *ierr)
{
  CHKFORTRANNULLREAL(obj);
  CHKFORTRANNULLREAL(resid);
  CHKFORTRANNULLREAL(cnorm);
  CHKFORTRANNULLINTEGER(lits);
  *ierr = TaoSetConvergenceHistory(*tao, obj, resid, cnorm, lits, *na, *reset ? PETSC_TRUE : PETSC_FALSE);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petsctao.h>
#include <petsctao.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define taosetapplicationcontext_ TAOSETAPPLICATIONCONTEXT
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define taosetapplicationcontext_ taosetapplicationcontext
#endif
PETSC_EXTERN void taosetapplicationcontext_(Tao *tao, PetscCtx ctx, PetscErrorCode *ierr)
{
  *ierr = TaoSetApplicationContext(*tao, ctx);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petsctao.h>
#include <petsctao.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define taogetapplicationcontextcptr_ TAOGETAPPLICATIONCONTEXTCPTR
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define taogetapplicationcontextcptr_ taogetapplicationcontextcptr
#endif
PETSC_EXTERN void taogetapplicationcontextcptr_(Tao *tao, PetscCtxRt ctx, PetscErrorCode *ierr)
{
  *ierr = TaoGetApplicationContext(*tao, ctx);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petsctao.h>
#include <petsctao.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define taosetgradientnorm_ TAOSETGRADIENTNORM
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define taosetgradientnorm_ taosetgradientnorm
#endif
PETSC_EXTERN void taosetgradientnorm_(Tao *tao, Mat *M, PetscErrorCode *ierr)
{
  *ierr = TaoSetGradientNorm(*tao, *M);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petsctao.h>
#include <petsctao.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define taogetgradientnorm_ TAOGETGRADIENTNORM
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define taogetgradientnorm_ taogetgradientnorm
#endif
PETSC_EXTERN void taogetgradientnorm_(Tao *tao, Mat *M, PetscErrorCode *ierr)
{
  PetscBool null_M = !*(void**) M ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(M);
  *ierr = TaoGetGradientNorm(*tao, M);
  if (*ierr) return;
  if (! null_M && !*(void**) M) *(void **) M = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petsctao.h>
#include <petsctao.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define taogradientnorm_ TAOGRADIENTNORM
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define taogradientnorm_ taogradientnorm
#endif
PETSC_EXTERN void taogradientnorm_(Tao *tao, Vec *gradient, NormType *type, PetscReal *gnorm, PetscErrorCode *ierr)
{
  CHKFORTRANNULLREAL(gnorm);
  *ierr = TaoGradientNorm(*tao, *gradient, *type, gnorm);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petsctao.h>
#include <petsctao.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define taogetterm_ TAOGETTERM
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define taogetterm_ taogetterm
#endif
PETSC_EXTERN void taogetterm_(Tao *tao, PetscReal *scale, TaoTerm *term, Vec *params, Mat *map, PetscErrorCode *ierr)
{
  PetscBool null_term = !*(void**) term ? PETSC_TRUE : PETSC_FALSE;
  PetscBool null_params = !*(void**) params ? PETSC_TRUE : PETSC_FALSE;
  PetscBool null_map = !*(void**) map ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLREAL(scale);
  CHKFORTRANNULLOBJECT(term);
  CHKFORTRANNULLOBJECT(params);
  CHKFORTRANNULLOBJECT(map);
  *ierr = TaoGetTerm(*tao, scale, term, params, map);
  if (*ierr) return;
  if (! null_term && !*(void**) term) *(void **) term = (void *)-2;
  if (! null_params && !*(void**) params) *(void **) params = (void *)-2;
  if (! null_map && !*(void**) map) *(void **) map = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petsctao.h>
#include <petsctao.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define taoaddterm_ TAOADDTERM
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define taoaddterm_ taoaddterm
#endif
PETSC_EXTERN void taoaddterm_(Tao *tao, char prefix[], PetscReal *scale, TaoTerm *term, Vec *params, Mat *map, PetscErrorCode *ierr, PETSC_FORTRAN_CHARLEN_T l_prefix)
{
  char* c_prefix;
  FIXCHAR(prefix, l_prefix, c_prefix);
  *ierr = TaoAddTerm(*tao, c_prefix, *scale, *term, *params, *map);
  if (*ierr) return;
  FREECHAR(prefix, c_prefix);
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petsctao.h>
#include <petsctao.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define taomonitordrawctxcreate_ TAOMONITORDRAWCTXCREATE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define taomonitordrawctxcreate_ taomonitordrawctxcreate
#endif
PETSC_EXTERN void taomonitordrawctxcreate_(MPI_Fint *comm, char host[], char label[], int *x, int *y, int *m, int *n, PetscInt *howoften, TaoMonitorDrawCtx *ctx, PetscErrorCode *ierr, PETSC_FORTRAN_CHARLEN_T l_host, PETSC_FORTRAN_CHARLEN_T l_label)
{
  PetscBool null_ctx = !*(void**) ctx ? PETSC_TRUE : PETSC_FALSE;
  PETSC_FORTRAN_OBJECT_CREATE(ctx);
  char* c_host;
  FIXCHAR(host, l_host, c_host);
  char* c_label;
  FIXCHAR(label, l_label, c_label);
  CHKFORTRANNULLOBJECT(ctx);
  *ierr = TaoMonitorDrawCtxCreate(MPI_Comm_f2c(*(comm)), c_host, c_label, *x, *y, *m, *n, *howoften, ctx);
  if (*ierr) return;
  FREECHAR(host, c_host);
  FREECHAR(label, c_label);
  if (! null_ctx && !*(void**) ctx) *(void **) ctx = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petsctao.h>
#include <petsctao.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define taomonitordrawctxdestroy_ TAOMONITORDRAWCTXDESTROY
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define taomonitordrawctxdestroy_ taomonitordrawctxdestroy
#endif
PETSC_EXTERN void taomonitordrawctxdestroy_(TaoMonitorDrawCtx *ictx, PetscErrorCode *ierr)
{
  PETSC_FORTRAN_OBJECT_F_DESTROYED_TO_C_NULL(ictx);
  PetscBool null_ictx = !*(void**) ictx ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(ictx);
  *ierr = TaoMonitorDrawCtxDestroy(ictx);
  if (*ierr) return;
  if (! null_ictx && !*(void**) ictx) *(void **) ictx = (void *)-2;
}
