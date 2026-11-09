#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscksp.h>
#include <petscpc.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define pceisenstatsetomega_ PCEISENSTATSETOMEGA
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define pceisenstatsetomega_ pceisenstatsetomega
#endif
PETSC_EXTERN void pceisenstatsetomega_(PC *pc, PetscReal *omega, PetscErrorCode *ierr)
{
  *ierr = PCEisenstatSetOmega(*pc, *omega);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscksp.h>
#include <petscpc.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define pceisenstatsetnodiagonalscaling_ PCEISENSTATSETNODIAGONALSCALING
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define pceisenstatsetnodiagonalscaling_ pceisenstatsetnodiagonalscaling
#endif
PETSC_EXTERN void pceisenstatsetnodiagonalscaling_(PC *pc, PetscBool *flg, PetscErrorCode *ierr)
{
  *ierr = PCEisenstatSetNoDiagonalScaling(*pc, *flg ? PETSC_TRUE : PETSC_FALSE);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscksp.h>
#include <petscpc.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define pceisenstatgetomega_ PCEISENSTATGETOMEGA
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define pceisenstatgetomega_ pceisenstatgetomega
#endif
PETSC_EXTERN void pceisenstatgetomega_(PC *pc, PetscReal *omega, PetscErrorCode *ierr)
{
  CHKFORTRANNULLREAL(omega);
  *ierr = PCEisenstatGetOmega(*pc, omega);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscksp.h>
#include <petscpc.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define pceisenstatgetnodiagonalscaling_ PCEISENSTATGETNODIAGONALSCALING
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define pceisenstatgetnodiagonalscaling_ pceisenstatgetnodiagonalscaling
#endif
PETSC_EXTERN void pceisenstatgetnodiagonalscaling_(PC *pc, PetscBool *flg, PetscErrorCode *ierr)
{
  CHKFORTRANNULLBOOL(flg);
  *ierr = PCEisenstatGetNoDiagonalScaling(*pc, flg);
  if (*ierr) return;
}
