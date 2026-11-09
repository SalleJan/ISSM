#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscmath.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petsclinearregression_ PETSCLINEARREGRESSION
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petsclinearregression_ petsclinearregression
#endif
PETSC_EXTERN void petsclinearregression_(PetscInt *n, const PetscReal x[], const PetscReal y[], PetscReal *slope, PetscReal *intercept, PetscErrorCode *ierr)
{
  CHKFORTRANNULLREAL(x);
  CHKFORTRANNULLREAL(y);
  CHKFORTRANNULLREAL(slope);
  CHKFORTRANNULLREAL(intercept);
  *ierr = PetscLinearRegression(*n, x, y, slope, intercept);
  if (*ierr) return;
}
