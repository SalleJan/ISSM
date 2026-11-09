#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscts.h>
#include <petscts.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define tsdiscgradgettype_ TSDISCGRADGETTYPE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define tsdiscgradgettype_ tsdiscgradgettype
#endif
PETSC_EXTERN void tsdiscgradgettype_(TS *ts, TSDGType *dgtype, PetscErrorCode *ierr)
{
  *ierr = TSDiscGradGetType(*ts, dgtype);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscts.h>
#include <petscts.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define tsdiscgradsettype_ TSDISCGRADSETTYPE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define tsdiscgradsettype_ tsdiscgradsettype
#endif
PETSC_EXTERN void tsdiscgradsettype_(TS *ts, TSDGType *dgtype, PetscErrorCode *ierr)
{
  *ierr = TSDiscGradSetType(*ts, *dgtype);
  if (*ierr) return;
}
