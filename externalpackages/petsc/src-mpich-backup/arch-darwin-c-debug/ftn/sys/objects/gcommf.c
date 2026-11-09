#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscsys.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscobjectgettablevel_ PETSCOBJECTGETTABLEVEL
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscobjectgettablevel_ petscobjectgettablevel
#endif
PETSC_EXTERN void petscobjectgettablevel_(PetscObject *obj, PetscInt *tab, PetscErrorCode *ierr)
{
  CHKFORTRANNULLINTEGER(tab);
  *ierr = PetscObjectGetTabLevel(*obj, tab);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscsys.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscobjectsettablevel_ PETSCOBJECTSETTABLEVEL
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscobjectsettablevel_ petscobjectsettablevel
#endif
PETSC_EXTERN void petscobjectsettablevel_(PetscObject *obj, PetscInt *tab, PetscErrorCode *ierr)
{
  *ierr = PetscObjectSetTabLevel(*obj, *tab);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscsys.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscobjectincrementtablevel_ PETSCOBJECTINCREMENTTABLEVEL
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscobjectincrementtablevel_ petscobjectincrementtablevel
#endif
PETSC_EXTERN void petscobjectincrementtablevel_(PetscObject *obj, PetscObject *oldobj, PetscInt *tab, PetscErrorCode *ierr)
{
  *ierr = PetscObjectIncrementTabLevel(*obj, *oldobj, *tab);
  if (*ierr) return;
}
