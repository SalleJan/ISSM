#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscts.h>
#include <petscts.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define tspseudocomputefunction_ TSPSEUDOCOMPUTEFUNCTION
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define tspseudocomputefunction_ tspseudocomputefunction
#endif
PETSC_EXTERN void tspseudocomputefunction_(TS *ts, Vec *solution, Vec *residual, PetscReal *fnorm, PetscErrorCode *ierr)
{
  PetscBool null_residual = !*(void**) residual ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(residual);
  CHKFORTRANNULLREAL(fnorm);
  *ierr = TSPseudoComputeFunction(*ts, *solution, residual, fnorm);
  if (*ierr) return;
  if (! null_residual && !*(void**) residual) *(void **) residual = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscts.h>
#include <petscts.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define tspseudotimestepdefault_ TSPSEUDOTIMESTEPDEFAULT
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define tspseudotimestepdefault_ tspseudotimestepdefault
#endif
PETSC_EXTERN void tspseudotimestepdefault_(TS *ts, PetscReal *newdt, void *dtctx, PetscErrorCode *ierr)
{
  CHKFORTRANNULLREAL(newdt);
  *ierr = TSPseudoTimeStepDefault(*ts, newdt, dtctx);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscts.h>
#include <petscts.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define tspseudosettimestepincrement_ TSPSEUDOSETTIMESTEPINCREMENT
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define tspseudosettimestepincrement_ tspseudosettimestepincrement
#endif
PETSC_EXTERN void tspseudosettimestepincrement_(TS *ts, PetscReal *inc, PetscErrorCode *ierr)
{
  *ierr = TSPseudoSetTimeStepIncrement(*ts, *inc);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscts.h>
#include <petscts.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define tspseudosetmaxtimestep_ TSPSEUDOSETMAXTIMESTEP
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define tspseudosetmaxtimestep_ tspseudosetmaxtimestep
#endif
PETSC_EXTERN void tspseudosetmaxtimestep_(TS *ts, PetscReal *maxdt, PetscErrorCode *ierr)
{
  *ierr = TSPseudoSetMaxTimeStep(*ts, *maxdt);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscts.h>
#include <petscts.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define tspseudoincrementdtfrominitialdt_ TSPSEUDOINCREMENTDTFROMINITIALDT
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define tspseudoincrementdtfrominitialdt_ tspseudoincrementdtfrominitialdt
#endif
PETSC_EXTERN void tspseudoincrementdtfrominitialdt_(TS *ts, PetscErrorCode *ierr)
{
  *ierr = TSPseudoIncrementDtFromInitialDt(*ts);
  if (*ierr) return;
}
