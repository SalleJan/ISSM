#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscksp.h>
#include <petscksp.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define kspgmresclassicalgramschmidtorthogonalization_ KSPGMRESCLASSICALGRAMSCHMIDTORTHOGONALIZATION
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define kspgmresclassicalgramschmidtorthogonalization_ kspgmresclassicalgramschmidtorthogonalization
#endif
PETSC_EXTERN void kspgmresclassicalgramschmidtorthogonalization_(KSP *ksp, PetscInt *it, PetscErrorCode *ierr)
{
  *ierr = KSPGMRESClassicalGramSchmidtOrthogonalization(*ksp, *it);
  if (*ierr) return;
}
