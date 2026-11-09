#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmmoab.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmmoabgeneratehierarchy_ DMMOABGENERATEHIERARCHY
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmmoabgeneratehierarchy_ dmmoabgeneratehierarchy
#endif
PETSC_EXTERN void dmmoabgeneratehierarchy_(DM *dm, PetscInt *nlevels, PetscInt *ldegrees, PetscErrorCode *ierr)
{
  CHKFORTRANNULLINTEGER(ldegrees);
  *ierr = DMMoabGenerateHierarchy(*dm, *nlevels, ldegrees);
  if (*ierr) return;
}
