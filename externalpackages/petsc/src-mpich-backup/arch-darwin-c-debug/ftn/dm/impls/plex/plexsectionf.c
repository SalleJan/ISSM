#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmplex.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmplexcreatesection_ DMPLEXCREATESECTION
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmplexcreatesection_ dmplexcreatesection
#endif
PETSC_EXTERN void dmplexcreatesection_(DM *dm, DMLabel label[], const PetscInt numComp[], const PetscInt numDof[], PetscInt *numBC, const PetscInt bcField[], const IS bcComps[], const IS bcPoints[], IS *perm, PetscSection *section, PetscErrorCode *ierr)
{
  PetscBool null_section = !*(void**) section ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(label);
  CHKFORTRANNULLINTEGER(numComp);
  CHKFORTRANNULLINTEGER(numDof);
  CHKFORTRANNULLINTEGER(bcField);
  CHKFORTRANNULLOBJECT(bcComps);
  CHKFORTRANNULLOBJECT(bcPoints);
  CHKFORTRANNULLOBJECT(section);
  *ierr = DMPlexCreateSection(*dm, label, numComp, numDof, *numBC, bcField, bcComps, bcPoints, *perm, section);
  if (*ierr) return;
  if (! null_section && !*(void**) section) *(void **) section = (void *)-2;
}
