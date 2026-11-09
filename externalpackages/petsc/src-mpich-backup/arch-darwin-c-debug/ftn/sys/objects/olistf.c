#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscsys.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscobjectlistremovereference_ PETSCOBJECTLISTREMOVEREFERENCE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscobjectlistremovereference_ petscobjectlistremovereference
#endif
PETSC_EXTERN void petscobjectlistremovereference_(PetscObjectList *fl, char name[], PetscErrorCode *ierr, PETSC_FORTRAN_CHARLEN_T l_name)
{
  PetscBool null_fl = !*(void**) fl ? PETSC_TRUE : PETSC_FALSE;
  char* c_name;
  FIXCHAR(name, l_name, c_name);
  CHKFORTRANNULLOBJECT(fl);
  *ierr = PetscObjectListRemoveReference(fl, c_name);
  if (*ierr) return;
  FREECHAR(name, c_name);
  if (! null_fl && !*(void**) fl) *(void **) fl = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscsys.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscobjectlistadd_ PETSCOBJECTLISTADD
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscobjectlistadd_ petscobjectlistadd
#endif
PETSC_EXTERN void petscobjectlistadd_(PetscObjectList *fl, char name[], PetscObject *obj, PetscErrorCode *ierr, PETSC_FORTRAN_CHARLEN_T l_name)
{
  PetscBool null_fl = !*(void**) fl ? PETSC_TRUE : PETSC_FALSE;
  char* c_name;
  FIXCHAR(name, l_name, c_name);
  CHKFORTRANNULLOBJECT(fl);
  *ierr = PetscObjectListAdd(fl, c_name, *obj);
  if (*ierr) return;
  FREECHAR(name, c_name);
  if (! null_fl && !*(void**) fl) *(void **) fl = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscsys.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscobjectlistdestroy_ PETSCOBJECTLISTDESTROY
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscobjectlistdestroy_ petscobjectlistdestroy
#endif
PETSC_EXTERN void petscobjectlistdestroy_(PetscObjectList *ifl, PetscErrorCode *ierr)
{
  PETSC_FORTRAN_OBJECT_F_DESTROYED_TO_C_NULL(ifl);
  PetscBool null_ifl = !*(void**) ifl ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(ifl);
  *ierr = PetscObjectListDestroy(ifl);
  if (*ierr) return;
  if (! null_ifl && !*(void**) ifl) *(void **) ifl = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscsys.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscobjectlistfind_ PETSCOBJECTLISTFIND
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscobjectlistfind_ petscobjectlistfind
#endif
PETSC_EXTERN void petscobjectlistfind_(PetscObjectList *fl, char name[], PetscObject *obj, PetscErrorCode *ierr, PETSC_FORTRAN_CHARLEN_T l_name)
{
  PetscBool null_obj = !*(void**) obj ? PETSC_TRUE : PETSC_FALSE;
  char* c_name;
  FIXCHAR(name, l_name, c_name);
  CHKFORTRANNULLOBJECT(obj);
  *ierr = PetscObjectListFind(*fl, c_name, obj);
  if (*ierr) return;
  FREECHAR(name, c_name);
  if (! null_obj && !*(void**) obj) *(void **) obj = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscsys.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscobjectlistreversefind_ PETSCOBJECTLISTREVERSEFIND
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscobjectlistreversefind_ petscobjectlistreversefind
#endif
PETSC_EXTERN void petscobjectlistreversefind_(PetscObjectList *fl, PetscObject *obj, char name[], PetscBool *skipdereference, PetscErrorCode *ierr, PETSC_FORTRAN_CHARLEN_T l_name)
{
  char* c_name = PETSC_NULLPTR;
  CHKFORTRANNULLBOOL(skipdereference);
  *ierr = PetscObjectListReverseFind(*fl, *obj, (const char **)&c_name, skipdereference);
  if (*ierr) return;
  *ierr = PetscStrncpy((char *)name, c_name, l_name);
  if (*ierr) return;
  FIXRETURNCHAR(PETSC_TRUE, name, l_name);
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscsys.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscobjectlistduplicate_ PETSCOBJECTLISTDUPLICATE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscobjectlistduplicate_ petscobjectlistduplicate
#endif
PETSC_EXTERN void petscobjectlistduplicate_(PetscObjectList *fl, PetscObjectList *nl, PetscErrorCode *ierr)
{
  PetscBool null_nl = !*(void**) nl ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(nl);
  *ierr = PetscObjectListDuplicate(*fl, nl);
  if (*ierr) return;
  if (! null_nl && !*(void**) nl) *(void **) nl = (void *)-2;
}
