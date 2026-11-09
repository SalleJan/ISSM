#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscvec.h>
#include <petscsf.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscsfsetgraphfromcoordinates_ PETSCSFSETGRAPHFROMCOORDINATES
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscsfsetgraphfromcoordinates_ petscsfsetgraphfromcoordinates
#endif
PETSC_EXTERN void petscsfsetgraphfromcoordinates_(PetscSF *sf, PetscInt *nroots, PetscInt *nleaves, PetscInt *dim, PetscReal *tol, const PetscReal rootcoords[], const PetscReal leafcoords[], PetscErrorCode *ierr)
{
  CHKFORTRANNULLREAL(rootcoords);
  CHKFORTRANNULLREAL(leafcoords);
  *ierr = PetscSFSetGraphFromCoordinates(*sf, *nroots, *nleaves, *dim, *tol, rootcoords, leafcoords);
  if (*ierr) return;
}
