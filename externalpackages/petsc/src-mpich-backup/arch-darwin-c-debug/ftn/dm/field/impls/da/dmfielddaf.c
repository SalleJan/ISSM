#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmfield.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmfieldcreateda_ DMFIELDCREATEDA
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmfieldcreateda_ dmfieldcreateda
#endif
PETSC_EXTERN void dmfieldcreateda_(DM *dm, PetscInt *nc, const PetscScalar *cornerValues, DMField *field, PetscErrorCode *ierr)
{
  PetscBool null_field = !*(void**) field ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLSCALAR(cornerValues);
  CHKFORTRANNULLOBJECT(field);
  *ierr = DMFieldCreateDA(*dm, *nc, cornerValues, field);
  if (*ierr) return;
  if (! null_field && !*(void**) field) *(void **) field = (void *)-2;
}
