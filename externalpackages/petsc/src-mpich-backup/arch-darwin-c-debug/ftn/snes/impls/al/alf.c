#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsnes.h>
#include <petscsnes.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define snesnewtonalsetcorrectiontype_ SNESNEWTONALSETCORRECTIONTYPE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define snesnewtonalsetcorrectiontype_ snesnewtonalsetcorrectiontype
#endif
PETSC_EXTERN void snesnewtonalsetcorrectiontype_(SNES *snes, SNESNewtonALCorrectionType *ctype, PetscErrorCode *ierr)
{
  *ierr = SNESNewtonALSetCorrectionType(*snes, *ctype);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsnes.h>
#include <petscsnes.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define snesnewtonalsetdiagonalscaling_ SNESNEWTONALSETDIAGONALSCALING
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define snesnewtonalsetdiagonalscaling_ snesnewtonalsetdiagonalscaling
#endif
PETSC_EXTERN void snesnewtonalsetdiagonalscaling_(SNES *snes, Vec *v, PetscErrorCode *ierr)
{
  *ierr = SNESNewtonALSetDiagonalScaling(*snes, *v);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsnes.h>
#include <petscsnes.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define snesnewtonalgetloadparameter_ SNESNEWTONALGETLOADPARAMETER
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define snesnewtonalgetloadparameter_ snesnewtonalgetloadparameter
#endif
PETSC_EXTERN void snesnewtonalgetloadparameter_(SNES *snes, PetscReal *lambda, PetscErrorCode *ierr)
{
  CHKFORTRANNULLREAL(lambda);
  *ierr = SNESNewtonALGetLoadParameter(*snes, lambda);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsnes.h>
#include <petscsnes.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define snesnewtonalcomputefunction_ SNESNEWTONALCOMPUTEFUNCTION
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define snesnewtonalcomputefunction_ snesnewtonalcomputefunction
#endif
PETSC_EXTERN void snesnewtonalcomputefunction_(SNES *snes, Vec *X, Vec *Q, PetscErrorCode *ierr)
{
  *ierr = SNESNewtonALComputeFunction(*snes, *X, *Q);
  if (*ierr) return;
}
