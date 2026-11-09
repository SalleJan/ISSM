#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscsys.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscobjectsawstakeaccess_ PETSCOBJECTSAWSTAKEACCESS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscobjectsawstakeaccess_ petscobjectsawstakeaccess
#endif
PETSC_EXTERN void petscobjectsawstakeaccess_(PetscObject *obj, PetscErrorCode *ierr)
{
  *ierr = PetscObjectSAWsTakeAccess(*obj);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscsys.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscobjectsawsgrantaccess_ PETSCOBJECTSAWSGRANTACCESS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscobjectsawsgrantaccess_ petscobjectsawsgrantaccess
#endif
PETSC_EXTERN void petscobjectsawsgrantaccess_(PetscObject *obj, PetscErrorCode *ierr)
{
  *ierr = PetscObjectSAWsGrantAccess(*obj);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscsys.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscobjectsawsblock_ PETSCOBJECTSAWSBLOCK
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscobjectsawsblock_ petscobjectsawsblock
#endif
PETSC_EXTERN void petscobjectsawsblock_(PetscObject *obj, PetscErrorCode *ierr)
{
  *ierr = PetscObjectSAWsBlock(*obj);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscsys.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscobjectsawssetblock_ PETSCOBJECTSAWSSETBLOCK
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscobjectsawssetblock_ petscobjectsawssetblock
#endif
PETSC_EXTERN void petscobjectsawssetblock_(PetscObject *obj, PetscBool *flg, PetscErrorCode *ierr)
{
  *ierr = PetscObjectSAWsSetBlock(*obj, *flg ? PETSC_TRUE : PETSC_FALSE);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscsys.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscobjectsawsviewoff_ PETSCOBJECTSAWSVIEWOFF
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscobjectsawsviewoff_ petscobjectsawsviewoff
#endif
PETSC_EXTERN void petscobjectsawsviewoff_(PetscObject *obj, PetscErrorCode *ierr)
{
  *ierr = PetscObjectSAWsViewOff(*obj);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscsys.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscsawsblock_ PETSCSAWSBLOCK
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscsawsblock_ petscsawsblock
#endif
PETSC_EXTERN void petscsawsblock_(PetscErrorCode *ierr)
{
  *ierr = PetscSAWsBlock();
  if (*ierr) return;
}
