#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscksp.h>
#include <petscpc.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define pcfactorsetreuseordering_ PCFACTORSETREUSEORDERING
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define pcfactorsetreuseordering_ pcfactorsetreuseordering
#endif
PETSC_EXTERN void pcfactorsetreuseordering_(PC *pc, PetscBool *flag, PetscErrorCode *ierr)
{
  *ierr = PCFactorSetReuseOrdering(*pc, *flag ? PETSC_TRUE : PETSC_FALSE);
  if (*ierr) return;
}
