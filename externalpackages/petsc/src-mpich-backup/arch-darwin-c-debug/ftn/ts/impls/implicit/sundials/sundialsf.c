#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscts.h>
#include <petscts.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define tssundialsgetiterations_ TSSUNDIALSGETITERATIONS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define tssundialsgetiterations_ tssundialsgetiterations
#endif
PETSC_EXTERN void tssundialsgetiterations_(TS *ts, int *nonlin, int *lin, PetscErrorCode *ierr)
{
  *ierr = TSSundialsGetIterations(*ts, nonlin, lin);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscts.h>
#include <petscts.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define tssundialssettype_ TSSUNDIALSSETTYPE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define tssundialssettype_ tssundialssettype
#endif
PETSC_EXTERN void tssundialssettype_(TS *ts, TSSundialsLmmType *type, PetscErrorCode *ierr)
{
  *ierr = TSSundialsSetType(*ts, *type);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscts.h>
#include <petscts.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define tssundialssetmaxord_ TSSUNDIALSSETMAXORD
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define tssundialssetmaxord_ tssundialssetmaxord
#endif
PETSC_EXTERN void tssundialssetmaxord_(TS *ts, PetscInt *maxord, PetscErrorCode *ierr)
{
  *ierr = TSSundialsSetMaxord(*ts, *maxord);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscts.h>
#include <petscts.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define tssundialssetmaxl_ TSSUNDIALSSETMAXL
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define tssundialssetmaxl_ tssundialssetmaxl
#endif
PETSC_EXTERN void tssundialssetmaxl_(TS *ts, PetscInt *maxl, PetscErrorCode *ierr)
{
  *ierr = TSSundialsSetMaxl(*ts, *maxl);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscts.h>
#include <petscts.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define tssundialssetlineartolerance_ TSSUNDIALSSETLINEARTOLERANCE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define tssundialssetlineartolerance_ tssundialssetlineartolerance
#endif
PETSC_EXTERN void tssundialssetlineartolerance_(TS *ts, PetscReal *tol, PetscErrorCode *ierr)
{
  *ierr = TSSundialsSetLinearTolerance(*ts, *tol);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscts.h>
#include <petscts.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define tssundialssetgramschmidttype_ TSSUNDIALSSETGRAMSCHMIDTTYPE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define tssundialssetgramschmidttype_ tssundialssetgramschmidttype
#endif
PETSC_EXTERN void tssundialssetgramschmidttype_(TS *ts, TSSundialsGramSchmidtType *type, PetscErrorCode *ierr)
{
  *ierr = TSSundialsSetGramSchmidtType(*ts, *type);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscts.h>
#include <petscts.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define tssundialssettolerance_ TSSUNDIALSSETTOLERANCE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define tssundialssettolerance_ tssundialssettolerance
#endif
PETSC_EXTERN void tssundialssettolerance_(TS *ts, PetscReal *aabs, PetscReal *rel, PetscErrorCode *ierr)
{
  *ierr = TSSundialsSetTolerance(*ts, *aabs, *rel);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscts.h>
#include <petscts.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define tssundialsgetpc_ TSSUNDIALSGETPC
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define tssundialsgetpc_ tssundialsgetpc
#endif
PETSC_EXTERN void tssundialsgetpc_(TS *ts, PC *pc, PetscErrorCode *ierr)
{
  PetscBool null_pc = !*(void**) pc ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(pc);
  *ierr = TSSundialsGetPC(*ts, pc);
  if (*ierr) return;
  if (! null_pc && !*(void**) pc) *(void **) pc = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscts.h>
#include <petscts.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define tssundialssetmintimestep_ TSSUNDIALSSETMINTIMESTEP
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define tssundialssetmintimestep_ tssundialssetmintimestep
#endif
PETSC_EXTERN void tssundialssetmintimestep_(TS *ts, PetscReal *mindt, PetscErrorCode *ierr)
{
  *ierr = TSSundialsSetMinTimeStep(*ts, *mindt);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscts.h>
#include <petscts.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define tssundialssetmaxtimestep_ TSSUNDIALSSETMAXTIMESTEP
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define tssundialssetmaxtimestep_ tssundialssetmaxtimestep
#endif
PETSC_EXTERN void tssundialssetmaxtimestep_(TS *ts, PetscReal *maxdt, PetscErrorCode *ierr)
{
  *ierr = TSSundialsSetMaxTimeStep(*ts, *maxdt);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscts.h>
#include <petscts.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define tssundialsmonitorinternalsteps_ TSSUNDIALSMONITORINTERNALSTEPS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define tssundialsmonitorinternalsteps_ tssundialsmonitorinternalsteps
#endif
PETSC_EXTERN void tssundialsmonitorinternalsteps_(TS *ts, PetscBool *ft, PetscErrorCode *ierr)
{
  *ierr = TSSundialsMonitorInternalSteps(*ts, *ft ? PETSC_TRUE : PETSC_FALSE);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscts.h>
#include <petscts.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define tssundialssetusedense_ TSSUNDIALSSETUSEDENSE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define tssundialssetusedense_ tssundialssetusedense
#endif
PETSC_EXTERN void tssundialssetusedense_(TS *ts, PetscBool *use_dense, PetscErrorCode *ierr)
{
  *ierr = TSSundialsSetUseDense(*ts, *use_dense ? PETSC_TRUE : PETSC_FALSE);
  if (*ierr) return;
}
