#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmfield.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmfieldcreatedswithdg_ DMFIELDCREATEDSWITHDG
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmfieldcreatedswithdg_ dmfieldcreatedswithdg
#endif
PETSC_EXTERN void dmfieldcreatedswithdg_(DM *dm, DM *dmDG, PetscInt *fieldNum, Vec *vec, Vec *vecDG, DMField *field, PetscErrorCode *ierr)
{
  PetscBool null_field = !*(void**) field ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(field);
  *ierr = DMFieldCreateDSWithDG(*dm, *dmDG, *fieldNum, *vec, *vecDG, field);
  if (*ierr) return;
  if (! null_field && !*(void**) field) *(void **) field = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmfield.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmfieldcreateds_ DMFIELDCREATEDS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmfieldcreateds_ dmfieldcreateds
#endif
PETSC_EXTERN void dmfieldcreateds_(DM *dm, PetscInt *fieldNum, Vec *vec, DMField *field, PetscErrorCode *ierr)
{
  PetscBool null_field = !*(void**) field ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(field);
  *ierr = DMFieldCreateDS(*dm, *fieldNum, *vec, field);
  if (*ierr) return;
  if (! null_field && !*(void**) field) *(void **) field = (void *)-2;
}
