#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmplex.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmplexcreateclosureindex_ DMPLEXCREATECLOSUREINDEX
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmplexcreateclosureindex_ dmplexcreateclosureindex
#endif
PETSC_EXTERN void dmplexcreateclosureindex_(DM *dm, PetscSection *section, PetscErrorCode *ierr)
{
  *ierr = DMPlexCreateClosureIndex(*dm, *section);
  if (*ierr) return;
}
