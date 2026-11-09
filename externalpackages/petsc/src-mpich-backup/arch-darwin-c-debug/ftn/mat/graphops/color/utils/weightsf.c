#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscmat.h>
#include <petscmat.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define matcoloringgetdegrees_ MATCOLORINGGETDEGREES
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define matcoloringgetdegrees_ matcoloringgetdegrees
#endif
PETSC_EXTERN void matcoloringgetdegrees_(Mat *G, PetscInt *distance, PetscInt *degrees, PetscErrorCode *ierr)
{
  CHKFORTRANNULLINTEGER(degrees);
  *ierr = MatColoringGetDegrees(*G, *distance, degrees);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscmat.h>
#include <petscmat.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define matcoloringsetweights_ MATCOLORINGSETWEIGHTS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define matcoloringsetweights_ matcoloringsetweights
#endif
PETSC_EXTERN void matcoloringsetweights_(MatColoring *mc, PetscReal *weights, PetscInt *lperm, PetscErrorCode *ierr)
{
  CHKFORTRANNULLREAL(weights);
  CHKFORTRANNULLINTEGER(lperm);
  *ierr = MatColoringSetWeights(*mc, weights, lperm);
  if (*ierr) return;
}
