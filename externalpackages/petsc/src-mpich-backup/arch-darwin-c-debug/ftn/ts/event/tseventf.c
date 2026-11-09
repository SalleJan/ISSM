#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscts.h>
#include <petscts.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define tssetposteventstep_ TSSETPOSTEVENTSTEP
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define tssetposteventstep_ tssetposteventstep
#endif
PETSC_EXTERN void tssetposteventstep_(TS *ts, PetscReal *dt1, PetscErrorCode *ierr)
{
  *ierr = TSSetPostEventStep(*ts, *dt1);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscts.h>
#include <petscts.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define tssetposteventsecondstep_ TSSETPOSTEVENTSECONDSTEP
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define tssetposteventsecondstep_ tssetposteventsecondstep
#endif
PETSC_EXTERN void tssetposteventsecondstep_(TS *ts, PetscReal *dt2, PetscErrorCode *ierr)
{
  *ierr = TSSetPostEventSecondStep(*ts, *dt2);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscts.h>
#include <petscts.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define tsseteventtolerances_ TSSETEVENTTOLERANCES
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define tsseteventtolerances_ tsseteventtolerances
#endif
PETSC_EXTERN void tsseteventtolerances_(TS *ts, PetscReal *tol, PetscReal vtol[], PetscErrorCode *ierr)
{
  CHKFORTRANNULLREAL(vtol);
  *ierr = TSSetEventTolerances(*ts, *tol, vtol);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscts.h>
#include <petscts.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define tsgetnumevents_ TSGETNUMEVENTS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define tsgetnumevents_ tsgetnumevents
#endif
PETSC_EXTERN void tsgetnumevents_(TS *ts, PetscInt *nevents, PetscErrorCode *ierr)
{
  CHKFORTRANNULLINTEGER(nevents);
  *ierr = TSGetNumEvents(*ts, nevents);
  if (*ierr) return;
}
