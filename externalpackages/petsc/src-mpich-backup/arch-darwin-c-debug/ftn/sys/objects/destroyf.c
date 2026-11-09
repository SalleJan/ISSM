#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscsys.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscobjectdestroy_ PETSCOBJECTDESTROY
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscobjectdestroy_ petscobjectdestroy
#endif
PETSC_EXTERN void petscobjectdestroy_(PetscObject *obj, PetscErrorCode *ierr)
{
  PETSC_FORTRAN_OBJECT_F_DESTROYED_TO_C_NULL(obj);
  PetscBool null_obj = !*(void**) obj ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(obj);
  *ierr = PetscObjectDestroy(obj);
  if (*ierr) return;
  if (! null_obj && !*(void**) obj) *(void **) obj = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscsys.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscobjectview_ PETSCOBJECTVIEW
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscobjectview_ petscobjectview
#endif
PETSC_EXTERN void petscobjectview_(PetscObject *obj, PetscViewer *viewer, PetscErrorCode *ierr)
{
  PetscViewer v_viewer = PetscPatchDefaultViewers(viewer);
  *ierr = PetscObjectView(*obj, v_viewer);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscsys.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscobjectviewfromoptions_ PETSCOBJECTVIEWFROMOPTIONS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscobjectviewfromoptions_ petscobjectviewfromoptions
#endif
PETSC_EXTERN void petscobjectviewfromoptions_(PetscObject *obj, PetscObject *bobj, char name[], PetscErrorCode *ierr, PETSC_FORTRAN_CHARLEN_T l_name)
{
  char* c_name;
  FIXCHAR(name, l_name, c_name);
  *ierr = PetscObjectViewFromOptions(*obj, *bobj, c_name);
  if (*ierr) return;
  FREECHAR(name, c_name);
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscsys.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscobjecttypecompare_ PETSCOBJECTTYPECOMPARE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscobjecttypecompare_ petscobjecttypecompare
#endif
PETSC_EXTERN void petscobjecttypecompare_(PetscObject *obj, char type_name[], PetscBool *same, PetscErrorCode *ierr, PETSC_FORTRAN_CHARLEN_T l_type_name)
{
  char* c_type_name;
  FIXCHAR(type_name, l_type_name, c_type_name);
  CHKFORTRANNULLBOOL(same);
  *ierr = PetscObjectTypeCompare(*obj, c_type_name, same);
  if (*ierr) return;
  FREECHAR(type_name, c_type_name);
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscsys.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscobjectobjecttypecompare_ PETSCOBJECTOBJECTTYPECOMPARE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscobjectobjecttypecompare_ petscobjectobjecttypecompare
#endif
PETSC_EXTERN void petscobjectobjecttypecompare_(PetscObject *obj1, PetscObject *obj2, PetscBool *same, PetscErrorCode *ierr)
{
  CHKFORTRANNULLBOOL(same);
  *ierr = PetscObjectObjectTypeCompare(*obj1, *obj2, same);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscsys.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscobjectbasetypecompare_ PETSCOBJECTBASETYPECOMPARE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscobjectbasetypecompare_ petscobjectbasetypecompare
#endif
PETSC_EXTERN void petscobjectbasetypecompare_(PetscObject *obj, char type_name[], PetscBool *same, PetscErrorCode *ierr, PETSC_FORTRAN_CHARLEN_T l_type_name)
{
  char* c_type_name;
  FIXCHAR(type_name, l_type_name, c_type_name);
  CHKFORTRANNULLBOOL(same);
  *ierr = PetscObjectBaseTypeCompare(*obj, c_type_name, same);
  if (*ierr) return;
  FREECHAR(type_name, c_type_name);
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscsys.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscobjectregisterdestroy_ PETSCOBJECTREGISTERDESTROY
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscobjectregisterdestroy_ petscobjectregisterdestroy
#endif
PETSC_EXTERN void petscobjectregisterdestroy_(PetscObject *obj, PetscErrorCode *ierr)
{
  PETSC_FORTRAN_OBJECT_F_DESTROYED_TO_C_NULL(obj);
  *ierr = PetscObjectRegisterDestroy(*obj);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscsys.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscobjectregisterdestroyall_ PETSCOBJECTREGISTERDESTROYALL
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscobjectregisterdestroyall_ petscobjectregisterdestroyall
#endif
PETSC_EXTERN void petscobjectregisterdestroyall_(PetscErrorCode *ierr)
{
  *ierr = PetscObjectRegisterDestroyAll();
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscsys.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscregisterfinalizeall_ PETSCREGISTERFINALIZEALL
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscregisterfinalizeall_ petscregisterfinalizeall
#endif
PETSC_EXTERN void petscregisterfinalizeall_(PetscErrorCode *ierr)
{
  *ierr = PetscRegisterFinalizeAll();
  if (*ierr) return;
}
