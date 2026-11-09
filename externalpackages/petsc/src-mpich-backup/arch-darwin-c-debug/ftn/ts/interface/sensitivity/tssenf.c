#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscts.h>
#include <petscts.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define tscomputerhsjacobianp_ TSCOMPUTERHSJACOBIANP
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define tscomputerhsjacobianp_ tscomputerhsjacobianp
#endif
PETSC_EXTERN void tscomputerhsjacobianp_(TS *ts, PetscReal *t, Vec *U, Mat *Amat, PetscErrorCode *ierr)
{
  *ierr = TSComputeRHSJacobianP(*ts, *t, *U, *Amat);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscts.h>
#include <petscts.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define tscomputeijacobianp_ TSCOMPUTEIJACOBIANP
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define tscomputeijacobianp_ tscomputeijacobianp
#endif
PETSC_EXTERN void tscomputeijacobianp_(TS *ts, PetscReal *t, Vec *U, Vec *Udot, PetscReal *shift, Mat *Amat, PetscBool *imex, PetscErrorCode *ierr)
{
  *ierr = TSComputeIJacobianP(*ts, *t, *U, *Udot, *shift, *Amat, *imex ? PETSC_TRUE : PETSC_FALSE);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscts.h>
#include <petscts.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define tsgetcostintegral_ TSGETCOSTINTEGRAL
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define tsgetcostintegral_ tsgetcostintegral
#endif
PETSC_EXTERN void tsgetcostintegral_(TS *ts, Vec *v, PetscErrorCode *ierr)
{
  PetscBool null_v = !*(void**) v ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(v);
  *ierr = TSGetCostIntegral(*ts, v);
  if (*ierr) return;
  if (! null_v && !*(void**) v) *(void **) v = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscts.h>
#include <petscts.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define tscomputecostintegrand_ TSCOMPUTECOSTINTEGRAND
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define tscomputecostintegrand_ tscomputecostintegrand
#endif
PETSC_EXTERN void tscomputecostintegrand_(TS *ts, PetscReal *t, Vec *U, Vec *Q, PetscErrorCode *ierr)
{
  *ierr = TSComputeCostIntegrand(*ts, *t, *U, *Q);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscts.h>
#include <petscts.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define tscomputeihessianproductfunctionuu_ TSCOMPUTEIHESSIANPRODUCTFUNCTIONUU
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define tscomputeihessianproductfunctionuu_ tscomputeihessianproductfunctionuu
#endif
PETSC_EXTERN void tscomputeihessianproductfunctionuu_(TS *ts, PetscReal *t, Vec *U, Vec Vl[], Vec *Vr, Vec VHV[], PetscErrorCode *ierr)
{
  CHKFORTRANNULLOBJECT(Vl);
  CHKFORTRANNULLOBJECT(VHV);
  *ierr = TSComputeIHessianProductFunctionUU(*ts, *t, *U, Vl, *Vr, VHV);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscts.h>
#include <petscts.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define tscomputeihessianproductfunctionup_ TSCOMPUTEIHESSIANPRODUCTFUNCTIONUP
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define tscomputeihessianproductfunctionup_ tscomputeihessianproductfunctionup
#endif
PETSC_EXTERN void tscomputeihessianproductfunctionup_(TS *ts, PetscReal *t, Vec *U, Vec Vl[], Vec *Vr, Vec VHV[], PetscErrorCode *ierr)
{
  CHKFORTRANNULLOBJECT(Vl);
  CHKFORTRANNULLOBJECT(VHV);
  *ierr = TSComputeIHessianProductFunctionUP(*ts, *t, *U, Vl, *Vr, VHV);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscts.h>
#include <petscts.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define tscomputeihessianproductfunctionpu_ TSCOMPUTEIHESSIANPRODUCTFUNCTIONPU
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define tscomputeihessianproductfunctionpu_ tscomputeihessianproductfunctionpu
#endif
PETSC_EXTERN void tscomputeihessianproductfunctionpu_(TS *ts, PetscReal *t, Vec *U, Vec Vl[], Vec *Vr, Vec VHV[], PetscErrorCode *ierr)
{
  CHKFORTRANNULLOBJECT(Vl);
  CHKFORTRANNULLOBJECT(VHV);
  *ierr = TSComputeIHessianProductFunctionPU(*ts, *t, *U, Vl, *Vr, VHV);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscts.h>
#include <petscts.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define tscomputeihessianproductfunctionpp_ TSCOMPUTEIHESSIANPRODUCTFUNCTIONPP
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define tscomputeihessianproductfunctionpp_ tscomputeihessianproductfunctionpp
#endif
PETSC_EXTERN void tscomputeihessianproductfunctionpp_(TS *ts, PetscReal *t, Vec *U, Vec Vl[], Vec *Vr, Vec VHV[], PetscErrorCode *ierr)
{
  CHKFORTRANNULLOBJECT(Vl);
  CHKFORTRANNULLOBJECT(VHV);
  *ierr = TSComputeIHessianProductFunctionPP(*ts, *t, *U, Vl, *Vr, VHV);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscts.h>
#include <petscts.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define tscomputerhshessianproductfunctionuu_ TSCOMPUTERHSHESSIANPRODUCTFUNCTIONUU
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define tscomputerhshessianproductfunctionuu_ tscomputerhshessianproductfunctionuu
#endif
PETSC_EXTERN void tscomputerhshessianproductfunctionuu_(TS *ts, PetscReal *t, Vec *U, Vec Vl[], Vec *Vr, Vec VHV[], PetscErrorCode *ierr)
{
  CHKFORTRANNULLOBJECT(Vl);
  CHKFORTRANNULLOBJECT(VHV);
  *ierr = TSComputeRHSHessianProductFunctionUU(*ts, *t, *U, Vl, *Vr, VHV);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscts.h>
#include <petscts.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define tscomputerhshessianproductfunctionup_ TSCOMPUTERHSHESSIANPRODUCTFUNCTIONUP
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define tscomputerhshessianproductfunctionup_ tscomputerhshessianproductfunctionup
#endif
PETSC_EXTERN void tscomputerhshessianproductfunctionup_(TS *ts, PetscReal *t, Vec *U, Vec Vl[], Vec *Vr, Vec VHV[], PetscErrorCode *ierr)
{
  CHKFORTRANNULLOBJECT(Vl);
  CHKFORTRANNULLOBJECT(VHV);
  *ierr = TSComputeRHSHessianProductFunctionUP(*ts, *t, *U, Vl, *Vr, VHV);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscts.h>
#include <petscts.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define tscomputerhshessianproductfunctionpu_ TSCOMPUTERHSHESSIANPRODUCTFUNCTIONPU
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define tscomputerhshessianproductfunctionpu_ tscomputerhshessianproductfunctionpu
#endif
PETSC_EXTERN void tscomputerhshessianproductfunctionpu_(TS *ts, PetscReal *t, Vec *U, Vec Vl[], Vec *Vr, Vec VHV[], PetscErrorCode *ierr)
{
  CHKFORTRANNULLOBJECT(Vl);
  CHKFORTRANNULLOBJECT(VHV);
  *ierr = TSComputeRHSHessianProductFunctionPU(*ts, *t, *U, Vl, *Vr, VHV);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscts.h>
#include <petscts.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define tscomputerhshessianproductfunctionpp_ TSCOMPUTERHSHESSIANPRODUCTFUNCTIONPP
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define tscomputerhshessianproductfunctionpp_ tscomputerhshessianproductfunctionpp
#endif
PETSC_EXTERN void tscomputerhshessianproductfunctionpp_(TS *ts, PetscReal *t, Vec *U, Vec Vl[], Vec *Vr, Vec VHV[], PetscErrorCode *ierr)
{
  CHKFORTRANNULLOBJECT(Vl);
  CHKFORTRANNULLOBJECT(VHV);
  *ierr = TSComputeRHSHessianProductFunctionPP(*ts, *t, *U, Vl, *Vr, VHV);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscts.h>
#include <petscts.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define tssetcostgradients_ TSSETCOSTGRADIENTS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define tssetcostgradients_ tssetcostgradients
#endif
PETSC_EXTERN void tssetcostgradients_(TS *ts, PetscInt *numcost, Vec lambda[], Vec mu[], PetscErrorCode *ierr)
{
  CHKFORTRANNULLOBJECT(lambda);
  CHKFORTRANNULLOBJECT(mu);
  *ierr = TSSetCostGradients(*ts, *numcost, lambda, mu);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscts.h>
#include <petscts.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define tssetcosthessianproducts_ TSSETCOSTHESSIANPRODUCTS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define tssetcosthessianproducts_ tssetcosthessianproducts
#endif
PETSC_EXTERN void tssetcosthessianproducts_(TS *ts, PetscInt *numcost, Vec lambda2[], Vec mu2[], Vec *dir, PetscErrorCode *ierr)
{
  CHKFORTRANNULLOBJECT(lambda2);
  CHKFORTRANNULLOBJECT(mu2);
  *ierr = TSSetCostHessianProducts(*ts, *numcost, lambda2, mu2, *dir);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscts.h>
#include <petscts.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define tsadjointsetforward_ TSADJOINTSETFORWARD
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define tsadjointsetforward_ tsadjointsetforward
#endif
PETSC_EXTERN void tsadjointsetforward_(TS *ts, Mat *didp, PetscErrorCode *ierr)
{
  *ierr = TSAdjointSetForward(*ts, *didp);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscts.h>
#include <petscts.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define tsadjointresetforward_ TSADJOINTRESETFORWARD
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define tsadjointresetforward_ tsadjointresetforward
#endif
PETSC_EXTERN void tsadjointresetforward_(TS *ts, PetscErrorCode *ierr)
{
  *ierr = TSAdjointResetForward(*ts);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscts.h>
#include <petscts.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define tsadjointsetup_ TSADJOINTSETUP
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define tsadjointsetup_ tsadjointsetup
#endif
PETSC_EXTERN void tsadjointsetup_(TS *ts, PetscErrorCode *ierr)
{
  *ierr = TSAdjointSetUp(*ts);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscts.h>
#include <petscts.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define tsadjointreset_ TSADJOINTRESET
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define tsadjointreset_ tsadjointreset
#endif
PETSC_EXTERN void tsadjointreset_(TS *ts, PetscErrorCode *ierr)
{
  *ierr = TSAdjointReset(*ts);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscts.h>
#include <petscts.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define tsadjointsetsteps_ TSADJOINTSETSTEPS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define tsadjointsetsteps_ tsadjointsetsteps
#endif
PETSC_EXTERN void tsadjointsetsteps_(TS *ts, PetscInt *steps, PetscErrorCode *ierr)
{
  *ierr = TSAdjointSetSteps(*ts, *steps);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscts.h>
#include <petscts.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define tsadjointmonitorcancel_ TSADJOINTMONITORCANCEL
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define tsadjointmonitorcancel_ tsadjointmonitorcancel
#endif
PETSC_EXTERN void tsadjointmonitorcancel_(TS *ts, PetscErrorCode *ierr)
{
  *ierr = TSAdjointMonitorCancel(*ts);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscts.h>
#include <petscts.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define tsadjointmonitordefault_ TSADJOINTMONITORDEFAULT
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define tsadjointmonitordefault_ tsadjointmonitordefault
#endif
PETSC_EXTERN void tsadjointmonitordefault_(TS *ts, PetscInt *step, PetscReal *time, Vec *v, PetscInt *numcost, Vec lambda[], Vec mu[], PetscViewerAndFormat **vf, PetscErrorCode *ierr)
{
  CHKFORTRANNULLOBJECT(lambda);
  CHKFORTRANNULLOBJECT(mu);
  *ierr = TSAdjointMonitorDefault(*ts, *step, *time, *v, *numcost, lambda, mu, *vf);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscts.h>
#include <petscts.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define tsadjointmonitordrawsensi_ TSADJOINTMONITORDRAWSENSI
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define tsadjointmonitordrawsensi_ tsadjointmonitordrawsensi
#endif
PETSC_EXTERN void tsadjointmonitordrawsensi_(TS *ts, PetscInt *step, PetscReal *ptime, Vec *u, PetscInt *numcost, Vec lambda[], Vec mu[], void *dummy, PetscErrorCode *ierr)
{
  CHKFORTRANNULLOBJECT(lambda);
  CHKFORTRANNULLOBJECT(mu);
  *ierr = TSAdjointMonitorDrawSensi(*ts, *step, *ptime, *u, *numcost, lambda, mu, dummy);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscts.h>
#include <petscts.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define tsadjointsetfromoptions_ TSADJOINTSETFROMOPTIONS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define tsadjointsetfromoptions_ tsadjointsetfromoptions
#endif
PETSC_EXTERN void tsadjointsetfromoptions_(TS *ts, PetscOptionItems *PetscOptionsObject, PetscErrorCode *ierr)
{
  *ierr = TSAdjointSetFromOptions(*ts, *PetscOptionsObject);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscts.h>
#include <petscts.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define tsadjointstep_ TSADJOINTSTEP
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define tsadjointstep_ tsadjointstep
#endif
PETSC_EXTERN void tsadjointstep_(TS *ts, PetscErrorCode *ierr)
{
  *ierr = TSAdjointStep(*ts);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscts.h>
#include <petscts.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define tsadjointsolve_ TSADJOINTSOLVE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define tsadjointsolve_ tsadjointsolve
#endif
PETSC_EXTERN void tsadjointsolve_(TS *ts, PetscErrorCode *ierr)
{
  *ierr = TSAdjointSolve(*ts);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscts.h>
#include <petscts.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define tsadjointmonitor_ TSADJOINTMONITOR
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define tsadjointmonitor_ tsadjointmonitor
#endif
PETSC_EXTERN void tsadjointmonitor_(TS *ts, PetscInt *step, PetscReal *ptime, Vec *u, PetscInt *numcost, Vec lambda[], Vec mu[], PetscErrorCode *ierr)
{
  CHKFORTRANNULLOBJECT(lambda);
  CHKFORTRANNULLOBJECT(mu);
  *ierr = TSAdjointMonitor(*ts, *step, *ptime, *u, *numcost, lambda, mu);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscts.h>
#include <petscts.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define tsadjointcostintegral_ TSADJOINTCOSTINTEGRAL
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define tsadjointcostintegral_ tsadjointcostintegral
#endif
PETSC_EXTERN void tsadjointcostintegral_(TS *ts, PetscErrorCode *ierr)
{
  *ierr = TSAdjointCostIntegral(*ts);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscts.h>
#include <petscts.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define tsforwardsetup_ TSFORWARDSETUP
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define tsforwardsetup_ tsforwardsetup
#endif
PETSC_EXTERN void tsforwardsetup_(TS *ts, PetscErrorCode *ierr)
{
  *ierr = TSForwardSetUp(*ts);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscts.h>
#include <petscts.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define tsforwardreset_ TSFORWARDRESET
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define tsforwardreset_ tsforwardreset
#endif
PETSC_EXTERN void tsforwardreset_(TS *ts, PetscErrorCode *ierr)
{
  *ierr = TSForwardReset(*ts);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscts.h>
#include <petscts.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define tsforwardstep_ TSFORWARDSTEP
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define tsforwardstep_ tsforwardstep
#endif
PETSC_EXTERN void tsforwardstep_(TS *ts, PetscErrorCode *ierr)
{
  *ierr = TSForwardStep(*ts);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscts.h>
#include <petscts.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define tsforwardsetsensitivities_ TSFORWARDSETSENSITIVITIES
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define tsforwardsetsensitivities_ tsforwardsetsensitivities
#endif
PETSC_EXTERN void tsforwardsetsensitivities_(TS *ts, PetscInt *nump, Mat *Smat, PetscErrorCode *ierr)
{
  *ierr = TSForwardSetSensitivities(*ts, *nump, *Smat);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscts.h>
#include <petscts.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define tsforwardgetsensitivities_ TSFORWARDGETSENSITIVITIES
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define tsforwardgetsensitivities_ tsforwardgetsensitivities
#endif
PETSC_EXTERN void tsforwardgetsensitivities_(TS *ts, PetscInt *nump, Mat *Smat, PetscErrorCode *ierr)
{
  PetscBool null_Smat = !*(void**) Smat ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLINTEGER(nump);
  CHKFORTRANNULLOBJECT(Smat);
  *ierr = TSForwardGetSensitivities(*ts, nump, Smat);
  if (*ierr) return;
  if (! null_Smat && !*(void**) Smat) *(void **) Smat = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscts.h>
#include <petscts.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define tsforwardcostintegral_ TSFORWARDCOSTINTEGRAL
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define tsforwardcostintegral_ tsforwardcostintegral
#endif
PETSC_EXTERN void tsforwardcostintegral_(TS *ts, PetscErrorCode *ierr)
{
  *ierr = TSForwardCostIntegral(*ts);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscts.h>
#include <petscts.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define tsforwardsetinitialsensitivities_ TSFORWARDSETINITIALSENSITIVITIES
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define tsforwardsetinitialsensitivities_ tsforwardsetinitialsensitivities
#endif
PETSC_EXTERN void tsforwardsetinitialsensitivities_(TS *ts, Mat *didp, PetscErrorCode *ierr)
{
  *ierr = TSForwardSetInitialSensitivities(*ts, *didp);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscts.h>
#include <petscts.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define tscreatequadraturets_ TSCREATEQUADRATURETS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define tscreatequadraturets_ tscreatequadraturets
#endif
PETSC_EXTERN void tscreatequadraturets_(TS *ts, PetscBool *fwd, TS *quadts, PetscErrorCode *ierr)
{
  PetscBool null_quadts = !*(void**) quadts ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(quadts);
  *ierr = TSCreateQuadratureTS(*ts, *fwd ? PETSC_TRUE : PETSC_FALSE, quadts);
  if (*ierr) return;
  if (! null_quadts && !*(void**) quadts) *(void **) quadts = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscts.h>
#include <petscts.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define tsgetquadraturets_ TSGETQUADRATURETS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define tsgetquadraturets_ tsgetquadraturets
#endif
PETSC_EXTERN void tsgetquadraturets_(TS *ts, PetscBool *fwd, TS *quadts, PetscErrorCode *ierr)
{
  PetscBool null_quadts = !*(void**) quadts ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLBOOL(fwd);
  CHKFORTRANNULLOBJECT(quadts);
  *ierr = TSGetQuadratureTS(*ts, fwd, quadts);
  if (*ierr) return;
  if (! null_quadts && !*(void**) quadts) *(void **) quadts = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscts.h>
#include <petscts.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define tscomputesnesjacobian_ TSCOMPUTESNESJACOBIAN
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define tscomputesnesjacobian_ tscomputesnesjacobian
#endif
PETSC_EXTERN void tscomputesnesjacobian_(TS *ts, Vec *x, Mat *J, Mat *Jpre, PetscErrorCode *ierr)
{
  *ierr = TSComputeSNESJacobian(*ts, *x, *J, *Jpre);
  if (*ierr) return;
}
