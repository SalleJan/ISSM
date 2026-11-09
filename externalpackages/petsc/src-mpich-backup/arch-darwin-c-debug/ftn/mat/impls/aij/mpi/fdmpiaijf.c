#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscmat.h>
#include <petscmat.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define matfdcoloringsetvalues_ MATFDCOLORINGSETVALUES
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define matfdcoloringsetvalues_ matfdcoloringsetvalues
#endif
PETSC_EXTERN void matfdcoloringsetvalues_(Mat *J, MatFDColoring *coloring, const PetscScalar y[], PetscErrorCode *ierr)
{
  CHKFORTRANNULLSCALAR(y);
  *ierr = MatFDColoringSetValues(*J, *coloring, y);
  if (*ierr) return;
}
