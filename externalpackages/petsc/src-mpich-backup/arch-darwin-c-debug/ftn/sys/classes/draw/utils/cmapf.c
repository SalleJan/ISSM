#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscdraw.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscdrawutilitysetgamma_ PETSCDRAWUTILITYSETGAMMA
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscdrawutilitysetgamma_ petscdrawutilitysetgamma
#endif
PETSC_EXTERN void petscdrawutilitysetgamma_(PetscReal *g, PetscErrorCode *ierr)
{
  *ierr = PetscDrawUtilitySetGamma(*g);
  if (*ierr) return;
}
