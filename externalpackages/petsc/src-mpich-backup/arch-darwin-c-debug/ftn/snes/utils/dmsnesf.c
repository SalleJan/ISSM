#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsnes.h>
#include <petscsnes.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmcopydmsnes_ DMCOPYDMSNES
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmcopydmsnes_ dmcopydmsnes
#endif
PETSC_EXTERN void dmcopydmsnes_(DM *dmsrc, DM *dmdest, PetscErrorCode *ierr)
{
  *ierr = DMCopyDMSNES(*dmsrc, *dmdest);
  if (*ierr) return;
}
