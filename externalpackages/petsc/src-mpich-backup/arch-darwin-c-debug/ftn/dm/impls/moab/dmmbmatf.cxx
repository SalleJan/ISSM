#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmmoab.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmmoabsetblockfills_ DMMOABSETBLOCKFILLS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmmoabsetblockfills_ dmmoabsetblockfills
#endif
PETSC_EXTERN void dmmoabsetblockfills_(DM *dm, const PetscInt *dfill, const PetscInt *ofill, PetscErrorCode *ierr)
{
  CHKFORTRANNULLINTEGER(dfill);
  CHKFORTRANNULLINTEGER(ofill);
  *ierr = DMMoabSetBlockFills(*dm, dfill, ofill);
  if (*ierr) return;
}
