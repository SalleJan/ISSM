#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdm.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmcreatesectionsubdm_ DMCREATESECTIONSUBDM
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmcreatesectionsubdm_ dmcreatesectionsubdm
#endif
PETSC_EXTERN void dmcreatesectionsubdm_(DM *dm, PetscInt *numFields, const PetscInt fields[], const PetscInt numComps[], const PetscInt comps[], IS *is, DM *subdm, PetscErrorCode *ierr)
{
  PetscBool null_is = !*(void**) is ? PETSC_TRUE : PETSC_FALSE;
  PetscBool null_subdm = !*(void**) subdm ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLINTEGER(fields);
  CHKFORTRANNULLINTEGER(numComps);
  CHKFORTRANNULLINTEGER(comps);
  CHKFORTRANNULLOBJECT(is);
  CHKFORTRANNULLOBJECT(subdm);
  *ierr = DMCreateSectionSubDM(*dm, *numFields, fields, numComps, comps, is, subdm);
  if (*ierr) return;
  if (! null_is && !*(void**) is) *(void **) is = (void *)-2;
  if (! null_subdm && !*(void**) subdm) *(void **) subdm = (void *)-2;
}
