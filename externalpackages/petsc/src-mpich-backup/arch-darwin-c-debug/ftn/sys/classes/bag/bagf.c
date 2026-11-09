#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscbag.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscbagregisterintarray_ PETSCBAGREGISTERINTARRAY
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscbagregisterintarray_ petscbagregisterintarray
#endif
PETSC_EXTERN void petscbagregisterintarray_(PetscBag *bag, void *addr, PetscInt *msize, char name[], char help[], PetscErrorCode *ierr, PETSC_FORTRAN_CHARLEN_T l_name, PETSC_FORTRAN_CHARLEN_T l_help)
{
  char* c_name;
  FIXCHAR(name, l_name, c_name);
  char* c_help;
  FIXCHAR(help, l_help, c_help);
  *ierr = PetscBagRegisterIntArray(*bag, addr, *msize, c_name, c_help);
  if (*ierr) return;
  FREECHAR(name, c_name);
  FREECHAR(help, c_help);
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscbag.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscbagregisterrealarray_ PETSCBAGREGISTERREALARRAY
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscbagregisterrealarray_ petscbagregisterrealarray
#endif
PETSC_EXTERN void petscbagregisterrealarray_(PetscBag *bag, void *addr, PetscInt *msize, char name[], char help[], PetscErrorCode *ierr, PETSC_FORTRAN_CHARLEN_T l_name, PETSC_FORTRAN_CHARLEN_T l_help)
{
  char* c_name;
  FIXCHAR(name, l_name, c_name);
  char* c_help;
  FIXCHAR(help, l_help, c_help);
  *ierr = PetscBagRegisterRealArray(*bag, addr, *msize, c_name, c_help);
  if (*ierr) return;
  FREECHAR(name, c_name);
  FREECHAR(help, c_help);
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscbag.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscbagregisterint_ PETSCBAGREGISTERINT
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscbagregisterint_ petscbagregisterint
#endif
PETSC_EXTERN void petscbagregisterint_(PetscBag *bag, void *addr, PetscInt *mdefault, char name[], char help[], PetscErrorCode *ierr, PETSC_FORTRAN_CHARLEN_T l_name, PETSC_FORTRAN_CHARLEN_T l_help)
{
  char* c_name;
  FIXCHAR(name, l_name, c_name);
  char* c_help;
  FIXCHAR(help, l_help, c_help);
  *ierr = PetscBagRegisterInt(*bag, addr, *mdefault, c_name, c_help);
  if (*ierr) return;
  FREECHAR(name, c_name);
  FREECHAR(help, c_help);
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscbag.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscbagregisterint64_ PETSCBAGREGISTERINT64
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscbagregisterint64_ petscbagregisterint64
#endif
PETSC_EXTERN void petscbagregisterint64_(PetscBag *bag, void *addr, PetscInt64 *mdefault, char name[], char help[], PetscErrorCode *ierr, PETSC_FORTRAN_CHARLEN_T l_name, PETSC_FORTRAN_CHARLEN_T l_help)
{
  char* c_name;
  FIXCHAR(name, l_name, c_name);
  char* c_help;
  FIXCHAR(help, l_help, c_help);
  *ierr = PetscBagRegisterInt64(*bag, addr, *mdefault, c_name, c_help);
  if (*ierr) return;
  FREECHAR(name, c_name);
  FREECHAR(help, c_help);
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscbag.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscbagregisterboolarray_ PETSCBAGREGISTERBOOLARRAY
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscbagregisterboolarray_ petscbagregisterboolarray
#endif
PETSC_EXTERN void petscbagregisterboolarray_(PetscBag *bag, void *addr, PetscInt *msize, char name[], char help[], PetscErrorCode *ierr, PETSC_FORTRAN_CHARLEN_T l_name, PETSC_FORTRAN_CHARLEN_T l_help)
{
  char* c_name;
  FIXCHAR(name, l_name, c_name);
  char* c_help;
  FIXCHAR(help, l_help, c_help);
  *ierr = PetscBagRegisterBoolArray(*bag, addr, *msize, c_name, c_help);
  if (*ierr) return;
  FREECHAR(name, c_name);
  FREECHAR(help, c_help);
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscbag.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscbagregisterreal_ PETSCBAGREGISTERREAL
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscbagregisterreal_ petscbagregisterreal
#endif
PETSC_EXTERN void petscbagregisterreal_(PetscBag *bag, void *addr, PetscReal *mdefault, char name[], char help[], PetscErrorCode *ierr, PETSC_FORTRAN_CHARLEN_T l_name, PETSC_FORTRAN_CHARLEN_T l_help)
{
  char* c_name;
  FIXCHAR(name, l_name, c_name);
  char* c_help;
  FIXCHAR(help, l_help, c_help);
  *ierr = PetscBagRegisterReal(*bag, addr, *mdefault, c_name, c_help);
  if (*ierr) return;
  FREECHAR(name, c_name);
  FREECHAR(help, c_help);
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscbag.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscbagregisterscalar_ PETSCBAGREGISTERSCALAR
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscbagregisterscalar_ petscbagregisterscalar
#endif
PETSC_EXTERN void petscbagregisterscalar_(PetscBag *bag, void *addr, PetscScalar *mdefault, char name[], char help[], PetscErrorCode *ierr, PETSC_FORTRAN_CHARLEN_T l_name, PETSC_FORTRAN_CHARLEN_T l_help)
{
  char* c_name;
  FIXCHAR(name, l_name, c_name);
  char* c_help;
  FIXCHAR(help, l_help, c_help);
  *ierr = PetscBagRegisterScalar(*bag, addr, *mdefault, c_name, c_help);
  if (*ierr) return;
  FREECHAR(name, c_name);
  FREECHAR(help, c_help);
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscbag.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscbagregisterbool_ PETSCBAGREGISTERBOOL
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscbagregisterbool_ petscbagregisterbool
#endif
PETSC_EXTERN void petscbagregisterbool_(PetscBag *bag, void *addr, PetscBool *mdefault, char name[], char help[], PetscErrorCode *ierr, PETSC_FORTRAN_CHARLEN_T l_name, PETSC_FORTRAN_CHARLEN_T l_help)
{
  char* c_name;
  FIXCHAR(name, l_name, c_name);
  char* c_help;
  FIXCHAR(help, l_help, c_help);
  *ierr = PetscBagRegisterBool(*bag, addr, *mdefault ? PETSC_TRUE : PETSC_FALSE, c_name, c_help);
  if (*ierr) return;
  FREECHAR(name, c_name);
  FREECHAR(help, c_help);
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscbag.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscbagdestroy_ PETSCBAGDESTROY
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscbagdestroy_ petscbagdestroy
#endif
PETSC_EXTERN void petscbagdestroy_(PetscBag *bag, PetscErrorCode *ierr)
{
  PETSC_FORTRAN_OBJECT_F_DESTROYED_TO_C_NULL(bag);
  PetscBool null_bag = !*(void**) bag ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(bag);
  *ierr = PetscBagDestroy(bag);
  if (*ierr) return;
  if (! null_bag && !*(void**) bag) *(void **) bag = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscbag.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscbagsetfromoptions_ PETSCBAGSETFROMOPTIONS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscbagsetfromoptions_ petscbagsetfromoptions
#endif
PETSC_EXTERN void petscbagsetfromoptions_(PetscBag *bag, PetscErrorCode *ierr)
{
  *ierr = PetscBagSetFromOptions(*bag);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscbag.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscbagview_ PETSCBAGVIEW
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscbagview_ petscbagview
#endif
PETSC_EXTERN void petscbagview_(PetscBag *bag, PetscViewer *view, PetscErrorCode *ierr)
{
  PetscViewer v_view = PetscPatchDefaultViewers(view);
  *ierr = PetscBagView(*bag, v_view);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscbag.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscbagviewfromoptions_ PETSCBAGVIEWFROMOPTIONS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscbagviewfromoptions_ petscbagviewfromoptions
#endif
PETSC_EXTERN void petscbagviewfromoptions_(PetscBag *bag, PetscObject *bobj, char name[], PetscErrorCode *ierr, PETSC_FORTRAN_CHARLEN_T l_name)
{
  char* c_name;
  FIXCHAR(name, l_name, c_name);
  *ierr = PetscBagViewFromOptions(*bag, *bobj, c_name);
  if (*ierr) return;
  FREECHAR(name, c_name);
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscbag.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscbagload_ PETSCBAGLOAD
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscbagload_ petscbagload
#endif
PETSC_EXTERN void petscbagload_(PetscViewer *view, PetscBag *bag, PetscErrorCode *ierr)
{
  PetscViewer v_view = PetscPatchDefaultViewers(view);
  *ierr = PetscBagLoad(v_view, *bag);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscbag.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscbagcreate_ PETSCBAGCREATE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscbagcreate_ petscbagcreate
#endif
PETSC_EXTERN void petscbagcreate_(MPI_Fint *comm, size_t *bagsize, PetscBag *bag, PetscErrorCode *ierr)
{
  PetscBool null_bag = !*(void**) bag ? PETSC_TRUE : PETSC_FALSE;
  PETSC_FORTRAN_OBJECT_CREATE(bag);
  CHKFORTRANNULLOBJECT(bag);
  *ierr = PetscBagCreate(MPI_Comm_f2c(*(comm)), *bagsize, bag);
  if (*ierr) return;
  if (! null_bag && !*(void**) bag) *(void **) bag = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscbag.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscbagsetname_ PETSCBAGSETNAME
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscbagsetname_ petscbagsetname
#endif
PETSC_EXTERN void petscbagsetname_(PetscBag *bag, char name[], char help[], PetscErrorCode *ierr, PETSC_FORTRAN_CHARLEN_T l_name, PETSC_FORTRAN_CHARLEN_T l_help)
{
  char* c_name;
  FIXCHAR(name, l_name, c_name);
  char* c_help;
  FIXCHAR(help, l_help, c_help);
  *ierr = PetscBagSetName(*bag, c_name, c_help);
  if (*ierr) return;
  FREECHAR(name, c_name);
  FREECHAR(help, c_help);
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscbag.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscbaggetdatacptr_ PETSCBAGGETDATACPTR
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscbaggetdatacptr_ petscbaggetdatacptr
#endif
PETSC_EXTERN void petscbaggetdatacptr_(PetscBag *bag, PetscCtxRt data, PetscErrorCode *ierr)
{
  *ierr = PetscBagGetData(*bag, data);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscbag.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscbagsetoptionsprefix_ PETSCBAGSETOPTIONSPREFIX
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscbagsetoptionsprefix_ petscbagsetoptionsprefix
#endif
PETSC_EXTERN void petscbagsetoptionsprefix_(PetscBag *bag, char pre[], PetscErrorCode *ierr, PETSC_FORTRAN_CHARLEN_T l_pre)
{
  char* c_pre;
  FIXCHAR(pre, l_pre, c_pre);
  *ierr = PetscBagSetOptionsPrefix(*bag, c_pre);
  if (*ierr) return;
  FREECHAR(pre, c_pre);
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscbag.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscbaggetnames_ PETSCBAGGETNAMES
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscbaggetnames_ petscbaggetnames
#endif
PETSC_EXTERN void petscbaggetnames_(PetscBag *bag, char names[], PetscErrorCode *ierr, PETSC_FORTRAN_CHARLEN_T l_names)
{
  char* c_names = PETSC_NULLPTR;
  *ierr = PetscBagGetNames(*bag, (const char **)&c_names);
  if (*ierr) return;
  *ierr = PetscStrncpy((char *)names, c_names, l_names);
  if (*ierr) return;
  FIXRETURNCHAR(PETSC_TRUE, names, l_names);
}
