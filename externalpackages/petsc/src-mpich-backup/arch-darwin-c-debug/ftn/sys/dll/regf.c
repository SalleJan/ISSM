#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscsys.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscfunctionlistdestroy_ PETSCFUNCTIONLISTDESTROY
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscfunctionlistdestroy_ petscfunctionlistdestroy
#endif
PETSC_EXTERN void petscfunctionlistdestroy_(PetscFunctionList *fl, PetscErrorCode *ierr)
{
  PETSC_FORTRAN_OBJECT_F_DESTROYED_TO_C_NULL(fl);
  PetscBool null_fl = !*(void**) fl ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(fl);
  *ierr = PetscFunctionListDestroy(fl);
  if (*ierr) return;
  if (! null_fl && !*(void**) fl) *(void **) fl = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscsys.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscfunctionlistclear_ PETSCFUNCTIONLISTCLEAR
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscfunctionlistclear_ petscfunctionlistclear
#endif
PETSC_EXTERN void petscfunctionlistclear_(PetscFunctionList *fl, PetscErrorCode *ierr)
{
  *ierr = PetscFunctionListClear(*fl);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscsys.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscfunctionlistprintall_ PETSCFUNCTIONLISTPRINTALL
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscfunctionlistprintall_ petscfunctionlistprintall
#endif
PETSC_EXTERN void petscfunctionlistprintall_(PetscErrorCode *ierr)
{
  *ierr = PetscFunctionListPrintAll();
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscsys.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscfunctionlistprintnonempty_ PETSCFUNCTIONLISTPRINTNONEMPTY
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscfunctionlistprintnonempty_ petscfunctionlistprintnonempty
#endif
PETSC_EXTERN void petscfunctionlistprintnonempty_(PetscFunctionList *fl, PetscErrorCode *ierr)
{
  *ierr = PetscFunctionListPrintNonEmpty(*fl);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscsys.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscfunctionlistview_ PETSCFUNCTIONLISTVIEW
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscfunctionlistview_ petscfunctionlistview
#endif
PETSC_EXTERN void petscfunctionlistview_(PetscFunctionList *list, PetscViewer *viewer, PetscErrorCode *ierr)
{
  PetscViewer v_viewer = PetscPatchDefaultViewers(viewer);
  *ierr = PetscFunctionListView(*list, v_viewer);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscsys.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscfunctionlistduplicate_ PETSCFUNCTIONLISTDUPLICATE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscfunctionlistduplicate_ petscfunctionlistduplicate
#endif
PETSC_EXTERN void petscfunctionlistduplicate_(PetscFunctionList *fl, PetscFunctionList *nl, PetscErrorCode *ierr)
{
  PetscBool null_nl = !*(void**) nl ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(nl);
  *ierr = PetscFunctionListDuplicate(*fl, nl);
  if (*ierr) return;
  if (! null_nl && !*(void**) nl) *(void **) nl = (void *)-2;
}
