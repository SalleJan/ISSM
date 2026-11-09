#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscts.h>
#include <petscts.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define tsalpha2setradius_ TSALPHA2SETRADIUS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define tsalpha2setradius_ tsalpha2setradius
#endif
PETSC_EXTERN void tsalpha2setradius_(TS *ts, PetscReal *radius, PetscErrorCode *ierr)
{
  *ierr = TSAlpha2SetRadius(*ts, *radius);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscts.h>
#include <petscts.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define tsalpha2setparams_ TSALPHA2SETPARAMS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define tsalpha2setparams_ tsalpha2setparams
#endif
PETSC_EXTERN void tsalpha2setparams_(TS *ts, PetscReal *alpha_m, PetscReal *alpha_f, PetscReal *gamma, PetscReal *beta, PetscErrorCode *ierr)
{
  *ierr = TSAlpha2SetParams(*ts, *alpha_m, *alpha_f, *gamma, *beta);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscts.h>
#include <petscts.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define tsalpha2getparams_ TSALPHA2GETPARAMS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define tsalpha2getparams_ tsalpha2getparams
#endif
PETSC_EXTERN void tsalpha2getparams_(TS *ts, PetscReal *alpha_m, PetscReal *alpha_f, PetscReal *gamma, PetscReal *beta, PetscErrorCode *ierr)
{
  CHKFORTRANNULLREAL(alpha_m);
  CHKFORTRANNULLREAL(alpha_f);
  CHKFORTRANNULLREAL(gamma);
  CHKFORTRANNULLREAL(beta);
  *ierr = TSAlpha2GetParams(*ts, alpha_m, alpha_f, gamma, beta);
  if (*ierr) return;
}
