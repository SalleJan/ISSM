#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscts.h>
#include <petscts.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define tsadapthistorygetstep_ TSADAPTHISTORYGETSTEP
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define tsadapthistorygetstep_ tsadapthistorygetstep
#endif
PETSC_EXTERN void tsadapthistorygetstep_(TSAdapt *adapt, PetscInt *step, PetscReal *t, PetscReal *dt, PetscErrorCode *ierr)
{
  CHKFORTRANNULLREAL(t);
  CHKFORTRANNULLREAL(dt);
  *ierr = TSAdaptHistoryGetStep(*adapt, *step, t, dt);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscts.h>
#include <petscts.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define tsadapthistorysethistory_ TSADAPTHISTORYSETHISTORY
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define tsadapthistorysethistory_ tsadapthistorysethistory
#endif
PETSC_EXTERN void tsadapthistorysethistory_(TSAdapt *adapt, PetscInt *n, PetscReal hist[], PetscBool *backward, PetscErrorCode *ierr)
{
  CHKFORTRANNULLREAL(hist);
  *ierr = TSAdaptHistorySetHistory(*adapt, *n, hist, *backward ? PETSC_TRUE : PETSC_FALSE);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscts.h>
#include <petscts.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define tsadapthistorysettrajectory_ TSADAPTHISTORYSETTRAJECTORY
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define tsadapthistorysettrajectory_ tsadapthistorysettrajectory
#endif
PETSC_EXTERN void tsadapthistorysettrajectory_(TSAdapt *adapt, TSTrajectory *tj, PetscBool *backward, PetscErrorCode *ierr)
{
  *ierr = TSAdaptHistorySetTrajectory(*adapt, *tj, *backward ? PETSC_TRUE : PETSC_FALSE);
  if (*ierr) return;
}
