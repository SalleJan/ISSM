#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmda.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmdaconverttocell_ DMDACONVERTTOCELL
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmdaconverttocell_ dmdaconverttocell
#endif
PETSC_EXTERN void dmdaconverttocell_(DM *dm, MatStencil *s, PetscInt *cell, PetscErrorCode *ierr)
{
  CHKFORTRANNULLINTEGER(cell);
  *ierr = DMDAConvertToCell(*dm, *s, cell);
  if (*ierr) return;
}
