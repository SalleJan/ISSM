#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsnes.h>
#include <petscdmplex.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmplexsnescomputeresidualceed_ DMPLEXSNESCOMPUTERESIDUALCEED
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmplexsnescomputeresidualceed_ dmplexsnescomputeresidualceed
#endif
PETSC_EXTERN void dmplexsnescomputeresidualceed_(DM *dm, Vec *locX, Vec *locF, PetscCtx ctx, PetscErrorCode *ierr)
{
  *ierr = DMPlexSNESComputeResidualCEED(*dm, *locX, *locF, ctx);
  if (*ierr) return;
}
