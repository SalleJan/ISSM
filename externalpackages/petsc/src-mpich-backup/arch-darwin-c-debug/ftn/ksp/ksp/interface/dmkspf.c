#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscksp.h>
#include <petscksp.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmcopydmksp_ DMCOPYDMKSP
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmcopydmksp_ dmcopydmksp
#endif
PETSC_EXTERN void dmcopydmksp_(DM *dmsrc, DM *dmdest, PetscErrorCode *ierr)
{
  *ierr = DMCopyDMKSP(*dmsrc, *dmdest);
  if (*ierr) return;
}
