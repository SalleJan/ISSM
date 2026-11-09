#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscts.h>
#include <petscts.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define tsbdfsetorder_ TSBDFSETORDER
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define tsbdfsetorder_ tsbdfsetorder
#endif
PETSC_EXTERN void tsbdfsetorder_(TS *ts, PetscInt *order, PetscErrorCode *ierr)
{
  *ierr = TSBDFSetOrder(*ts, *order);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscts.h>
#include <petscts.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define tsbdfgetorder_ TSBDFGETORDER
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define tsbdfgetorder_ tsbdfgetorder
#endif
PETSC_EXTERN void tsbdfgetorder_(TS *ts, PetscInt *order, PetscErrorCode *ierr)
{
  CHKFORTRANNULLINTEGER(order);
  *ierr = TSBDFGetOrder(*ts, order);
  if (*ierr) return;
}
