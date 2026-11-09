#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscksp.h>
#include <petscksp.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define kspmonitorlgrange_ KSPMONITORLGRANGE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define kspmonitorlgrange_ kspmonitorlgrange
#endif
PETSC_EXTERN void kspmonitorlgrange_(KSP *ksp, PetscInt *n, PetscReal *rnorm, void *monctx, PetscErrorCode *ierr)
{
  *ierr = KSPMonitorLGRange(*ksp, *n, *rnorm, monctx);
  if (*ierr) return;
}
