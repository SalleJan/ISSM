#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmda.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmdasetuniformcoordinates_ DMDASETUNIFORMCOORDINATES
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmdasetuniformcoordinates_ dmdasetuniformcoordinates
#endif
PETSC_EXTERN void dmdasetuniformcoordinates_(DM *da, PetscReal *xmin, PetscReal *xmax, PetscReal *ymin, PetscReal *ymax, PetscReal *zmin, PetscReal *zmax, PetscErrorCode *ierr)
{
  *ierr = DMDASetUniformCoordinates(*da, *xmin, *xmax, *ymin, *ymax, *zmin, *zmax);
  if (*ierr) return;
}
