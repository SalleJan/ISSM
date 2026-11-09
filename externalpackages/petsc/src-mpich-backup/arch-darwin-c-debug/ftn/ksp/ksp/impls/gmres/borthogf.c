#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscksp.h>
#include <petscksp.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define kspgmresmodifiedgramschmidtorthogonalization_ KSPGMRESMODIFIEDGRAMSCHMIDTORTHOGONALIZATION
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define kspgmresmodifiedgramschmidtorthogonalization_ kspgmresmodifiedgramschmidtorthogonalization
#endif
PETSC_EXTERN void kspgmresmodifiedgramschmidtorthogonalization_(KSP *ksp, PetscInt *it, PetscErrorCode *ierr)
{
  *ierr = KSPGMRESModifiedGramSchmidtOrthogonalization(*ksp, *it);
  if (*ierr) return;
}
