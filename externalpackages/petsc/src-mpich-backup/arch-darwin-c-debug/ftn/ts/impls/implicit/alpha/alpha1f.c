#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscts.h>
#include <petscts.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define tsalphasetradius_ TSALPHASETRADIUS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define tsalphasetradius_ tsalphasetradius
#endif
PETSC_EXTERN void tsalphasetradius_(TS *ts, PetscReal *radius, PetscErrorCode *ierr)
{
  *ierr = TSAlphaSetRadius(*ts, *radius);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscts.h>
#include <petscts.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define tsalphasetparams_ TSALPHASETPARAMS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define tsalphasetparams_ tsalphasetparams
#endif
PETSC_EXTERN void tsalphasetparams_(TS *ts, PetscReal *alpha_m, PetscReal *alpha_f, PetscReal *gamma, PetscErrorCode *ierr)
{
  *ierr = TSAlphaSetParams(*ts, *alpha_m, *alpha_f, *gamma);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscts.h>
#include <petscts.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define tsalphagetparams_ TSALPHAGETPARAMS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define tsalphagetparams_ tsalphagetparams
#endif
PETSC_EXTERN void tsalphagetparams_(TS *ts, PetscReal *alpha_m, PetscReal *alpha_f, PetscReal *gamma, PetscErrorCode *ierr)
{
  CHKFORTRANNULLREAL(alpha_m);
  CHKFORTRANNULLREAL(alpha_f);
  CHKFORTRANNULLREAL(gamma);
  *ierr = TSAlphaGetParams(*ts, alpha_m, alpha_f, gamma);
  if (*ierr) return;
}
