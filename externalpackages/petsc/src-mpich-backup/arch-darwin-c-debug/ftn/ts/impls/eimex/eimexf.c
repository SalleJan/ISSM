#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscts.h>
#include <petscts.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define tseimexsetmaxrows_ TSEIMEXSETMAXROWS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define tseimexsetmaxrows_ tseimexsetmaxrows
#endif
PETSC_EXTERN void tseimexsetmaxrows_(TS *ts, PetscInt *nrows, PetscErrorCode *ierr)
{
  *ierr = TSEIMEXSetMaxRows(*ts, *nrows);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscts.h>
#include <petscts.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define tseimexsetrowcol_ TSEIMEXSETROWCOL
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define tseimexsetrowcol_ tseimexsetrowcol
#endif
PETSC_EXTERN void tseimexsetrowcol_(TS *ts, PetscInt *row, PetscInt *col, PetscErrorCode *ierr)
{
  *ierr = TSEIMEXSetRowCol(*ts, *row, *col);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscts.h>
#include <petscts.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define tseimexsetordadapt_ TSEIMEXSETORDADAPT
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define tseimexsetordadapt_ tseimexsetordadapt
#endif
PETSC_EXTERN void tseimexsetordadapt_(TS *ts, PetscBool *flg, PetscErrorCode *ierr)
{
  *ierr = TSEIMEXSetOrdAdapt(*ts, *flg ? PETSC_TRUE : PETSC_FALSE);
  if (*ierr) return;
}
