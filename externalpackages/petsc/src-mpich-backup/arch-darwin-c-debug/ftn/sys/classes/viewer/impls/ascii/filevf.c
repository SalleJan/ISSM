#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscviewer.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscviewerasciisettab_ PETSCVIEWERASCIISETTAB
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscviewerasciisettab_ petscviewerasciisettab
#endif
PETSC_EXTERN void petscviewerasciisettab_(PetscViewer *viewer, PetscInt *tabs, PetscErrorCode *ierr)
{
  PetscViewer v_viewer = PetscPatchDefaultViewers(viewer);
  *ierr = PetscViewerASCIISetTab(v_viewer, *tabs);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscviewer.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscviewerasciigettab_ PETSCVIEWERASCIIGETTAB
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscviewerasciigettab_ petscviewerasciigettab
#endif
PETSC_EXTERN void petscviewerasciigettab_(PetscViewer *viewer, PetscInt *tabs, PetscErrorCode *ierr)
{
  PetscViewer v_viewer = PetscPatchDefaultViewers(viewer);
  CHKFORTRANNULLINTEGER(tabs);
  *ierr = PetscViewerASCIIGetTab(v_viewer, tabs);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscviewer.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscviewerasciiaddtab_ PETSCVIEWERASCIIADDTAB
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscviewerasciiaddtab_ petscviewerasciiaddtab
#endif
PETSC_EXTERN void petscviewerasciiaddtab_(PetscViewer *viewer, PetscInt *tabs, PetscErrorCode *ierr)
{
  PetscViewer v_viewer = PetscPatchDefaultViewers(viewer);
  *ierr = PetscViewerASCIIAddTab(v_viewer, *tabs);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscviewer.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscviewerasciisubtracttab_ PETSCVIEWERASCIISUBTRACTTAB
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscviewerasciisubtracttab_ petscviewerasciisubtracttab
#endif
PETSC_EXTERN void petscviewerasciisubtracttab_(PetscViewer *viewer, PetscInt *tabs, PetscErrorCode *ierr)
{
  PetscViewer v_viewer = PetscPatchDefaultViewers(viewer);
  *ierr = PetscViewerASCIISubtractTab(v_viewer, *tabs);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscviewer.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscviewerasciipushsynchronized_ PETSCVIEWERASCIIPUSHSYNCHRONIZED
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscviewerasciipushsynchronized_ petscviewerasciipushsynchronized
#endif
PETSC_EXTERN void petscviewerasciipushsynchronized_(PetscViewer *viewer, PetscErrorCode *ierr)
{
  PetscViewer v_viewer = PetscPatchDefaultViewers(viewer);
  *ierr = PetscViewerASCIIPushSynchronized(v_viewer);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscviewer.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscviewerasciipopsynchronized_ PETSCVIEWERASCIIPOPSYNCHRONIZED
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscviewerasciipopsynchronized_ petscviewerasciipopsynchronized
#endif
PETSC_EXTERN void petscviewerasciipopsynchronized_(PetscViewer *viewer, PetscErrorCode *ierr)
{
  PetscViewer v_viewer = PetscPatchDefaultViewers(viewer);
  *ierr = PetscViewerASCIIPopSynchronized(v_viewer);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscviewer.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscviewerasciipushtab_ PETSCVIEWERASCIIPUSHTAB
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscviewerasciipushtab_ petscviewerasciipushtab
#endif
PETSC_EXTERN void petscviewerasciipushtab_(PetscViewer *viewer, PetscErrorCode *ierr)
{
  PetscViewer v_viewer = PetscPatchDefaultViewers(viewer);
  *ierr = PetscViewerASCIIPushTab(v_viewer);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscviewer.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscviewerasciipoptab_ PETSCVIEWERASCIIPOPTAB
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscviewerasciipoptab_ petscviewerasciipoptab
#endif
PETSC_EXTERN void petscviewerasciipoptab_(PetscViewer *viewer, PetscErrorCode *ierr)
{
  PetscViewer v_viewer = PetscPatchDefaultViewers(viewer);
  *ierr = PetscViewerASCIIPopTab(v_viewer);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscviewer.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscviewerasciiusetabs_ PETSCVIEWERASCIIUSETABS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscviewerasciiusetabs_ petscviewerasciiusetabs
#endif
PETSC_EXTERN void petscviewerasciiusetabs_(PetscViewer *viewer, PetscBool *flg, PetscErrorCode *ierr)
{
  PetscViewer v_viewer = PetscPatchDefaultViewers(viewer);
  *ierr = PetscViewerASCIIUseTabs(v_viewer, *flg ? PETSC_TRUE : PETSC_FALSE);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscviewer.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscviewerasciigetstdout_ PETSCVIEWERASCIIGETSTDOUT
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscviewerasciigetstdout_ petscviewerasciigetstdout
#endif
PETSC_EXTERN void petscviewerasciigetstdout_(MPI_Fint *comm, PetscViewer *viewer, PetscErrorCode *ierr)
{
  PetscBool null_viewer = !*(void**) viewer ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(viewer);
  *ierr = PetscViewerASCIIGetStdout(MPI_Comm_f2c(*(comm)), viewer);
  if (*ierr) return;
  if (! null_viewer && !*(void**) viewer) *(void **) viewer = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscviewer.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscviewerfilesetname_ PETSCVIEWERFILESETNAME
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscviewerfilesetname_ petscviewerfilesetname
#endif
PETSC_EXTERN void petscviewerfilesetname_(PetscViewer *viewer, char name[], PetscErrorCode *ierr, PETSC_FORTRAN_CHARLEN_T l_name)
{
  char* c_name;
  FIXCHAR(name, l_name, c_name);
  PetscViewer v_viewer = PetscPatchDefaultViewers(viewer);
  *ierr = PetscViewerFileSetName(v_viewer, c_name);
  if (*ierr) return;
  FREECHAR(name, c_name);
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscviewer.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscviewerfilegetname_ PETSCVIEWERFILEGETNAME
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscviewerfilegetname_ petscviewerfilegetname
#endif
PETSC_EXTERN void petscviewerfilegetname_(PetscViewer *viewer, char name[], PetscErrorCode *ierr, PETSC_FORTRAN_CHARLEN_T l_name)
{
  char* c_name = PETSC_NULLPTR;
  PetscViewer v_viewer = PetscPatchDefaultViewers(viewer);
  *ierr = PetscViewerFileGetName(v_viewer, (const char **)&c_name);
  if (*ierr) return;
  *ierr = PetscStrncpy((char *)name, c_name, l_name);
  if (*ierr) return;
  FIXRETURNCHAR(PETSC_TRUE, name, l_name);
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscviewer.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscviewerasciiread_ PETSCVIEWERASCIIREAD
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscviewerasciiread_ petscviewerasciiread
#endif
PETSC_EXTERN void petscviewerasciiread_(PetscViewer *viewer, void *data, PetscInt *num, PetscInt *count, PetscDataType *dtype, PetscErrorCode *ierr)
{
  PetscViewer v_viewer = PetscPatchDefaultViewers(viewer);
  CHKFORTRANNULLINTEGER(count);
  *ierr = PetscViewerASCIIRead(v_viewer, data, *num, count, *dtype);
  if (*ierr) return;
}
