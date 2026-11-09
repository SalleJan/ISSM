#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscsys.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscobjectsetname_ PETSCOBJECTSETNAME
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscobjectsetname_ petscobjectsetname
#endif
PETSC_EXTERN void petscobjectsetname_(PetscObject *obj, char name[], PetscErrorCode *ierr, PETSC_FORTRAN_CHARLEN_T l_name)
{
  char* c_name;
  FIXCHAR(name, l_name, c_name);
  *ierr = PetscObjectSetName(*obj, c_name);
  if (*ierr) return;
  FREECHAR(name, c_name);
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscsys.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscobjectprintclassnameprefixtype_ PETSCOBJECTPRINTCLASSNAMEPREFIXTYPE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscobjectprintclassnameprefixtype_ petscobjectprintclassnameprefixtype
#endif
PETSC_EXTERN void petscobjectprintclassnameprefixtype_(PetscObject *obj, PetscViewer *viewer, PetscErrorCode *ierr)
{
  PetscViewer v_viewer = PetscPatchDefaultViewers(viewer);
  *ierr = PetscObjectPrintClassNamePrefixType(*obj, v_viewer);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscsys.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscobjectname_ PETSCOBJECTNAME
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscobjectname_ petscobjectname
#endif
PETSC_EXTERN void petscobjectname_(PetscObject *obj, PetscErrorCode *ierr)
{
  *ierr = PetscObjectName(*obj);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscsys.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscobjectchangetypename_ PETSCOBJECTCHANGETYPENAME
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscobjectchangetypename_ petscobjectchangetypename
#endif
PETSC_EXTERN void petscobjectchangetypename_(PetscObject *obj, char type_name[], PetscErrorCode *ierr, PETSC_FORTRAN_CHARLEN_T l_type_name)
{
  char* c_type_name;
  FIXCHAR(type_name, l_type_name, c_type_name);
  *ierr = PetscObjectChangeTypeName(*obj, c_type_name);
  if (*ierr) return;
  FREECHAR(type_name, c_type_name);
}
