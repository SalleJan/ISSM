#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscsys.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscdatatypegetsize_ PETSCDATATYPEGETSIZE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscdatatypegetsize_ petscdatatypegetsize
#endif
PETSC_EXTERN void petscdatatypegetsize_(PetscDataType *ptype, size_t *size, PetscErrorCode *ierr)
{
  *ierr = PetscDataTypeGetSize(*ptype, size);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscsys.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscdatatypefromstring_ PETSCDATATYPEFROMSTRING
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscdatatypefromstring_ petscdatatypefromstring
#endif
PETSC_EXTERN void petscdatatypefromstring_(char name[], PetscDataType *ptype, PetscBool *found, PetscErrorCode *ierr, PETSC_FORTRAN_CHARLEN_T l_name)
{
  char* c_name;
  FIXCHAR(name, l_name, c_name);
  CHKFORTRANNULLBOOL(found);
  *ierr = PetscDataTypeFromString(c_name, ptype, found);
  if (*ierr) return;
  FREECHAR(name, c_name);
}
