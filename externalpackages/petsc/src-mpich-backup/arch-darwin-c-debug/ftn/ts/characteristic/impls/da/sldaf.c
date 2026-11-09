#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscts.h>
#include <petscdmda.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmdamapcoordstoperiodicdomain_ DMDAMAPCOORDSTOPERIODICDOMAIN
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmdamapcoordstoperiodicdomain_ dmdamapcoordstoperiodicdomain
#endif
PETSC_EXTERN void dmdamapcoordstoperiodicdomain_(DM *da, PetscScalar *x, PetscScalar *y, PetscErrorCode *ierr)
{
  CHKFORTRANNULLSCALAR(x);
  CHKFORTRANNULLSCALAR(y);
  *ierr = DMDAMapCoordsToPeriodicDomain(*da, x, y);
  if (*ierr) return;
}
