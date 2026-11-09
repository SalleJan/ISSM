#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscts.h>
#include <petscts.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define tsthetagettheta_ TSTHETAGETTHETA
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define tsthetagettheta_ tsthetagettheta
#endif
PETSC_EXTERN void tsthetagettheta_(TS *ts, PetscReal *theta, PetscErrorCode *ierr)
{
  CHKFORTRANNULLREAL(theta);
  *ierr = TSThetaGetTheta(*ts, theta);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscts.h>
#include <petscts.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define tsthetasettheta_ TSTHETASETTHETA
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define tsthetasettheta_ tsthetasettheta
#endif
PETSC_EXTERN void tsthetasettheta_(TS *ts, PetscReal *theta, PetscErrorCode *ierr)
{
  *ierr = TSThetaSetTheta(*ts, *theta);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscts.h>
#include <petscts.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define tsthetagetendpoint_ TSTHETAGETENDPOINT
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define tsthetagetendpoint_ tsthetagetendpoint
#endif
PETSC_EXTERN void tsthetagetendpoint_(TS *ts, PetscBool *endpoint, PetscErrorCode *ierr)
{
  CHKFORTRANNULLBOOL(endpoint);
  *ierr = TSThetaGetEndpoint(*ts, endpoint);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscts.h>
#include <petscts.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define tsthetasetendpoint_ TSTHETASETENDPOINT
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define tsthetasetendpoint_ tsthetasetendpoint
#endif
PETSC_EXTERN void tsthetasetendpoint_(TS *ts, PetscBool *flg, PetscErrorCode *ierr)
{
  *ierr = TSThetaSetEndpoint(*ts, *flg ? PETSC_TRUE : PETSC_FALSE);
  if (*ierr) return;
}
