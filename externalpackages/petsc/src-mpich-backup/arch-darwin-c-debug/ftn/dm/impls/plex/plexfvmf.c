#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmplex.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmplexreconstructgradientsfvm_ DMPLEXRECONSTRUCTGRADIENTSFVM
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmplexreconstructgradientsfvm_ dmplexreconstructgradientsfvm
#endif
PETSC_EXTERN void dmplexreconstructgradientsfvm_(DM *dm, Vec *locX, Vec *grad, PetscErrorCode *ierr)
{
  *ierr = DMPlexReconstructGradientsFVM(*dm, *locX, *grad);
  if (*ierr) return;
}
