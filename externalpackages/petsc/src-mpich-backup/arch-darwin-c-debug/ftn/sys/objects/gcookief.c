#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscsys.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscobjectgetclassid_ PETSCOBJECTGETCLASSID
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscobjectgetclassid_ petscobjectgetclassid
#endif
PETSC_EXTERN void petscobjectgetclassid_(PetscObject *obj, PetscClassId *classid, PetscErrorCode *ierr)
{
  *ierr = PetscObjectGetClassId(*obj, classid);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscsys.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscobjectgetclassname_ PETSCOBJECTGETCLASSNAME
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscobjectgetclassname_ petscobjectgetclassname
#endif
PETSC_EXTERN void petscobjectgetclassname_(PetscObject *obj, char classname[], PetscErrorCode *ierr, PETSC_FORTRAN_CHARLEN_T l_classname)
{
  char* c_classname = PETSC_NULLPTR;
  *ierr = PetscObjectGetClassName(*obj, (const char **)&c_classname);
  if (*ierr) return;
  *ierr = PetscStrncpy((char *)classname, c_classname, l_classname);
  if (*ierr) return;
  FIXRETURNCHAR(PETSC_TRUE, classname, l_classname);
}
