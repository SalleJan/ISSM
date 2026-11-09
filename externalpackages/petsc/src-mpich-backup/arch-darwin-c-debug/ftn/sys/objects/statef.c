#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscsys.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscobjectgetid_ PETSCOBJECTGETID
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscobjectgetid_ petscobjectgetid
#endif
PETSC_EXTERN void petscobjectgetid_(PetscObject *obj, PetscObjectId *id, PetscErrorCode *ierr)
{
  *ierr = PetscObjectGetId(*obj, id);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscsys.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscobjectcompareid_ PETSCOBJECTCOMPAREID
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscobjectcompareid_ petscobjectcompareid
#endif
PETSC_EXTERN void petscobjectcompareid_(PetscObject *obj, PetscObjectId *id, PetscBool *eq, PetscErrorCode *ierr)
{
  CHKFORTRANNULLBOOL(eq);
  *ierr = PetscObjectCompareId(*obj, *id, eq);
  if (*ierr) return;
}
