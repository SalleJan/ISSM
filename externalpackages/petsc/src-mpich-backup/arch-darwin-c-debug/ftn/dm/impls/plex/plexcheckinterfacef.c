#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmplex.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmplexcheckinterfacecones_ DMPLEXCHECKINTERFACECONES
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmplexcheckinterfacecones_ dmplexcheckinterfacecones
#endif
PETSC_EXTERN void dmplexcheckinterfacecones_(DM *dm, PetscErrorCode *ierr)
{
  *ierr = DMPlexCheckInterfaceCones(*dm);
  if (*ierr) return;
}
