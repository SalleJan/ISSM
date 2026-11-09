#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmplex.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmplexextrude_ DMPLEXEXTRUDE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmplexextrude_ dmplexextrude
#endif
PETSC_EXTERN void dmplexextrude_(DM *dm, PetscInt *layers, PetscReal *thickness, PetscBool *tensor, PetscBool *symmetric, PetscBool *periodic, const PetscReal normal[], const PetscReal thicknesses[], DMLabel *activeLabel, DM *edm, PetscErrorCode *ierr)
{
  PetscBool null_edm = !*(void**) edm ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLREAL(normal);
  CHKFORTRANNULLREAL(thicknesses);
  CHKFORTRANNULLOBJECT(edm);
  *ierr = DMPlexExtrude(*dm, *layers, *thickness, *tensor ? PETSC_TRUE : PETSC_FALSE, *symmetric ? PETSC_TRUE : PETSC_FALSE, *periodic ? PETSC_TRUE : PETSC_FALSE, normal, thicknesses, *activeLabel, edm);
  if (*ierr) return;
  if (! null_edm && !*(void**) edm) *(void **) edm = (void *)-2;
}
