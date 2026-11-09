#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsnes.h>
#include <petscsnes.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define sneslinesearchbtsetalpha_ SNESLINESEARCHBTSETALPHA
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define sneslinesearchbtsetalpha_ sneslinesearchbtsetalpha
#endif
PETSC_EXTERN void sneslinesearchbtsetalpha_(SNESLineSearch *linesearch, PetscReal *alpha, PetscErrorCode *ierr)
{
  *ierr = SNESLineSearchBTSetAlpha(*linesearch, *alpha);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsnes.h>
#include <petscsnes.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define sneslinesearchbtgetalpha_ SNESLINESEARCHBTGETALPHA
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define sneslinesearchbtgetalpha_ sneslinesearchbtgetalpha
#endif
PETSC_EXTERN void sneslinesearchbtgetalpha_(SNESLineSearch *linesearch, PetscReal *alpha, PetscErrorCode *ierr)
{
  CHKFORTRANNULLREAL(alpha);
  *ierr = SNESLineSearchBTGetAlpha(*linesearch, alpha);
  if (*ierr) return;
}
