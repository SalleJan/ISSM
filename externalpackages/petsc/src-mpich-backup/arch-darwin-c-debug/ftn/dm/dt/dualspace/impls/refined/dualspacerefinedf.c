#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdualspace.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscdualspacerefinedsetcellspaces_ PETSCDUALSPACEREFINEDSETCELLSPACES
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscdualspacerefinedsetcellspaces_ petscdualspacerefinedsetcellspaces
#endif
PETSC_EXTERN void petscdualspacerefinedsetcellspaces_(PetscDualSpace *sp, const PetscDualSpace cellSpaces[], PetscErrorCode *ierr)
{
  CHKFORTRANNULLOBJECT(cellSpaces);
  *ierr = PetscDualSpaceRefinedSetCellSpaces(*sp, cellSpaces);
  if (*ierr) return;
}
