#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscts.h>
#include <petscdmplexceed.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmplextscomputerhsfunctionfvmceed_ DMPLEXTSCOMPUTERHSFUNCTIONFVMCEED
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmplextscomputerhsfunctionfvmceed_ dmplextscomputerhsfunctionfvmceed
#endif
PETSC_EXTERN void dmplextscomputerhsfunctionfvmceed_(DM *dm, PetscReal *time, Vec *locX, Vec *F, PetscCtx ctx, PetscErrorCode *ierr)
{
  *ierr = DMPlexTSComputeRHSFunctionFVMCEED(*dm, *time, *locX, *F, ctx);
  if (*ierr) return;
}
