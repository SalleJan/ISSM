#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmstag.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmstagrestrictsimple_ DMSTAGRESTRICTSIMPLE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmstagrestrictsimple_ dmstagrestrictsimple
#endif
PETSC_EXTERN void dmstagrestrictsimple_(DM *dmf, Vec *xf, DM *dmc, Vec *xc, PetscErrorCode *ierr)
{
  *ierr = DMStagRestrictSimple(*dmf, *xf, *dmc, *xc);
  if (*ierr) return;
}
