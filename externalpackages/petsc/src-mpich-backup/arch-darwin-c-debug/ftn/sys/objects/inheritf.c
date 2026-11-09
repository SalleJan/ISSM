#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscsys.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscobjectsview_ PETSCOBJECTSVIEW
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscobjectsview_ petscobjectsview
#endif
PETSC_EXTERN void petscobjectsview_(PetscViewer *viewer, PetscErrorCode *ierr)
{
  PetscViewer v_viewer = PetscPatchDefaultViewers(viewer);
  *ierr = PetscObjectsView(v_viewer);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscsys.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscobjectsgetobject_ PETSCOBJECTSGETOBJECT
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscobjectsgetobject_ petscobjectsgetobject
#endif
PETSC_EXTERN void petscobjectsgetobject_(char name[], PetscObject *obj, char classname[], PetscErrorCode *ierr, PETSC_FORTRAN_CHARLEN_T l_name, PETSC_FORTRAN_CHARLEN_T l_classname)
{
  PetscBool null_obj = !*(void**) obj ? PETSC_TRUE : PETSC_FALSE;
  char* c_name;
  FIXCHAR(name, l_name, c_name);
  char* c_classname = PETSC_NULLPTR;
  CHKFORTRANNULLOBJECT(obj);
  *ierr = PetscObjectsGetObject(c_name, obj, (const char **)&c_classname);
  if (*ierr) return;
  FREECHAR(name, c_name);
  *ierr = PetscStrncpy((char *)classname, c_classname, l_classname);
  if (*ierr) return;
  FIXRETURNCHAR(PETSC_TRUE, classname, l_classname);
  if (! null_obj && !*(void**) obj) *(void **) obj = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscsys.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscobjectsetprintedoptions_ PETSCOBJECTSETPRINTEDOPTIONS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscobjectsetprintedoptions_ petscobjectsetprintedoptions
#endif
PETSC_EXTERN void petscobjectsetprintedoptions_(PetscObject *obj, PetscErrorCode *ierr)
{
  *ierr = PetscObjectSetPrintedOptions(*obj);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscsys.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscobjectinheritprintedoptions_ PETSCOBJECTINHERITPRINTEDOPTIONS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscobjectinheritprintedoptions_ petscobjectinheritprintedoptions
#endif
PETSC_EXTERN void petscobjectinheritprintedoptions_(PetscObject *pobj, PetscObject *obj, PetscErrorCode *ierr)
{
  *ierr = PetscObjectInheritPrintedOptions(*pobj, *obj);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscoptions.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscobjectprocessoptionshandlers_ PETSCOBJECTPROCESSOPTIONSHANDLERS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscobjectprocessoptionshandlers_ petscobjectprocessoptionshandlers
#endif
PETSC_EXTERN void petscobjectprocessoptionshandlers_(PetscObject *obj, PetscOptionItems *PetscOptionsObject, PetscErrorCode *ierr)
{
  *ierr = PetscObjectProcessOptionsHandlers(*obj, *PetscOptionsObject);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscoptions.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscobjectdestroyoptionshandlers_ PETSCOBJECTDESTROYOPTIONSHANDLERS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscobjectdestroyoptionshandlers_ petscobjectdestroyoptionshandlers
#endif
PETSC_EXTERN void petscobjectdestroyoptionshandlers_(PetscObject *obj, PetscErrorCode *ierr)
{
  *ierr = PetscObjectDestroyOptionsHandlers(*obj);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscsys.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscobjectreference_ PETSCOBJECTREFERENCE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscobjectreference_ petscobjectreference
#endif
PETSC_EXTERN void petscobjectreference_(PetscObject *obj, PetscErrorCode *ierr)
{
  *ierr = PetscObjectReference(*obj);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscsys.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscobjectgetreference_ PETSCOBJECTGETREFERENCE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscobjectgetreference_ petscobjectgetreference
#endif
PETSC_EXTERN void petscobjectgetreference_(PetscObject *obj, PetscInt *cnt, PetscErrorCode *ierr)
{
  CHKFORTRANNULLINTEGER(cnt);
  *ierr = PetscObjectGetReference(*obj, cnt);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscsys.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscobjectdereference_ PETSCOBJECTDEREFERENCE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscobjectdereference_ petscobjectdereference
#endif
PETSC_EXTERN void petscobjectdereference_(PetscObject *obj, PetscErrorCode *ierr)
{
  *ierr = PetscObjectDereference(*obj);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscsys.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscobjectremovereference_ PETSCOBJECTREMOVEREFERENCE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscobjectremovereference_ petscobjectremovereference
#endif
PETSC_EXTERN void petscobjectremovereference_(PetscObject *obj, char name[], PetscErrorCode *ierr, PETSC_FORTRAN_CHARLEN_T l_name)
{
  char* c_name;
  FIXCHAR(name, l_name, c_name);
  *ierr = PetscObjectRemoveReference(*obj, c_name);
  if (*ierr) return;
  FREECHAR(name, c_name);
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscsys.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscobjectcomposeraw_ PETSCOBJECTCOMPOSERAW
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscobjectcomposeraw_ petscobjectcomposeraw
#endif
PETSC_EXTERN void petscobjectcomposeraw_(PetscObject *obj, char name[], PetscObject *ptr, PetscErrorCode *ierr, PETSC_FORTRAN_CHARLEN_T l_name)
{
  char* c_name;
  FIXCHAR(name, l_name, c_name);
  *ierr = PetscObjectCompose(*obj, c_name, *ptr);
  if (*ierr) return;
  FREECHAR(name, c_name);
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscsys.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscobjectqueryraw_ PETSCOBJECTQUERYRAW
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscobjectqueryraw_ petscobjectqueryraw
#endif
PETSC_EXTERN void petscobjectqueryraw_(PetscObject *obj, char name[], PetscObject *ptr, PetscErrorCode *ierr, PETSC_FORTRAN_CHARLEN_T l_name)
{
  PetscBool null_ptr = !*(void**) ptr ? PETSC_TRUE : PETSC_FALSE;
  char* c_name;
  FIXCHAR(name, l_name, c_name);
  CHKFORTRANNULLOBJECT(ptr);
  *ierr = PetscObjectQuery(*obj, c_name, ptr);
  if (*ierr) return;
  FREECHAR(name, c_name);
  if (! null_ptr && !*(void**) ptr) *(void **) ptr = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscsys.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscobjecthasfunction_ PETSCOBJECTHASFUNCTION
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscobjecthasfunction_ petscobjecthasfunction
#endif
PETSC_EXTERN void petscobjecthasfunction_(PetscObject *obj, char name[], PetscBool *has, PetscErrorCode *ierr, PETSC_FORTRAN_CHARLEN_T l_name)
{
  char* c_name;
  FIXCHAR(name, l_name, c_name);
  CHKFORTRANNULLBOOL(has);
  *ierr = PetscObjectHasFunction(*obj, c_name, has);
  if (*ierr) return;
  FREECHAR(name, c_name);
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscsys.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscobjectcontainerquerycptr_ PETSCOBJECTCONTAINERQUERYCPTR
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscobjectcontainerquerycptr_ petscobjectcontainerquerycptr
#endif
PETSC_EXTERN void petscobjectcontainerquerycptr_(PetscObject *obj, char name[], PetscCtxRt ptr, PetscErrorCode *ierr, PETSC_FORTRAN_CHARLEN_T l_name)
{
  char* c_name;
  FIXCHAR(name, l_name, c_name);
  *ierr = PetscObjectContainerQuery(*obj, c_name, ptr);
  if (*ierr) return;
  FREECHAR(name, c_name);
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscsys.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscobjectsetfromoptions_ PETSCOBJECTSETFROMOPTIONS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscobjectsetfromoptions_ petscobjectsetfromoptions
#endif
PETSC_EXTERN void petscobjectsetfromoptions_(PetscObject *obj, PetscErrorCode *ierr)
{
  *ierr = PetscObjectSetFromOptions(*obj);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscsys.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscobjectsetup_ PETSCOBJECTSETUP
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscobjectsetup_ petscobjectsetup
#endif
PETSC_EXTERN void petscobjectsetup_(PetscObject *obj, PetscErrorCode *ierr)
{
  *ierr = PetscObjectSetUp(*obj);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscsys.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petsccontainergetpointercptr_ PETSCCONTAINERGETPOINTERCPTR
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petsccontainergetpointercptr_ petsccontainergetpointercptr
#endif
PETSC_EXTERN void petsccontainergetpointercptr_(PetscContainer *obj, PetscCtxRt ptr, PetscErrorCode *ierr)
{
  *ierr = PetscContainerGetPointer(*obj, ptr);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscsys.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petsccontainersetpointer_ PETSCCONTAINERSETPOINTER
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petsccontainersetpointer_ petsccontainersetpointer
#endif
PETSC_EXTERN void petsccontainersetpointer_(PetscContainer *obj, void *ptr, PetscErrorCode *ierr)
{
  *ierr = PetscContainerSetPointer(*obj, ptr);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscsys.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petsccontainerdestroy_ PETSCCONTAINERDESTROY
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petsccontainerdestroy_ petsccontainerdestroy
#endif
PETSC_EXTERN void petsccontainerdestroy_(PetscContainer *obj, PetscErrorCode *ierr)
{
  PETSC_FORTRAN_OBJECT_F_DESTROYED_TO_C_NULL(obj);
  PetscBool null_obj = !*(void**) obj ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(obj);
  *ierr = PetscContainerDestroy(obj);
  if (*ierr) return;
  if (! null_obj && !*(void**) obj) *(void **) obj = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscsys.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petsccontainercreate_ PETSCCONTAINERCREATE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petsccontainercreate_ petsccontainercreate
#endif
PETSC_EXTERN void petsccontainercreate_(MPI_Fint *comm, PetscContainer *container, PetscErrorCode *ierr)
{
  PetscBool null_container = !*(void**) container ? PETSC_TRUE : PETSC_FALSE;
  PETSC_FORTRAN_OBJECT_CREATE(container);
  CHKFORTRANNULLOBJECT(container);
  *ierr = PetscContainerCreate(MPI_Comm_f2c(*(comm)), container);
  if (*ierr) return;
  if (! null_container && !*(void**) container) *(void **) container = (void *)-2;
}
