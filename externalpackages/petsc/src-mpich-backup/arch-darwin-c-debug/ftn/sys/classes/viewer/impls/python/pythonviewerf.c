#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscviewer.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscviewerpythonsettype_ PETSCVIEWERPYTHONSETTYPE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscviewerpythonsettype_ petscviewerpythonsettype
#endif
PETSC_EXTERN void petscviewerpythonsettype_(PetscViewer *viewer, char pyname[], PetscErrorCode *ierr, PETSC_FORTRAN_CHARLEN_T l_pyname)
{
  char* c_pyname;
  FIXCHAR(pyname, l_pyname, c_pyname);
  PetscViewer v_viewer = PetscPatchDefaultViewers(viewer);
  *ierr = PetscViewerPythonSetType(v_viewer, c_pyname);
  if (*ierr) return;
  FREECHAR(pyname, c_pyname);
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscviewer.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscviewerpythongettype_ PETSCVIEWERPYTHONGETTYPE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscviewerpythongettype_ petscviewerpythongettype
#endif
PETSC_EXTERN void petscviewerpythongettype_(PetscViewer *viewer, char pyname[], PetscErrorCode *ierr, PETSC_FORTRAN_CHARLEN_T l_pyname)
{
  char* c_pyname = PETSC_NULLPTR;
  PetscViewer v_viewer = PetscPatchDefaultViewers(viewer);
  *ierr = PetscViewerPythonGetType(v_viewer, (const char **)&c_pyname);
  if (*ierr) return;
  *ierr = PetscStrncpy((char *)pyname, c_pyname, l_pyname);
  if (*ierr) return;
  FIXRETURNCHAR(PETSC_TRUE, pyname, l_pyname);
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscviewer.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscviewerpythonviewobject_ PETSCVIEWERPYTHONVIEWOBJECT
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscviewerpythonviewobject_ petscviewerpythonviewobject
#endif
PETSC_EXTERN void petscviewerpythonviewobject_(PetscViewer *viewer, PetscObject *obj, PetscErrorCode *ierr)
{
  PetscViewer v_viewer = PetscPatchDefaultViewers(viewer);
  *ierr = PetscViewerPythonViewObject(v_viewer, *obj);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscviewer.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscviewerpythoncreate_ PETSCVIEWERPYTHONCREATE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscviewerpythoncreate_ petscviewerpythoncreate
#endif
PETSC_EXTERN void petscviewerpythoncreate_(MPI_Fint *comm, char pyname[], PetscViewer *viewer, PetscErrorCode *ierr, PETSC_FORTRAN_CHARLEN_T l_pyname)
{
  PetscBool null_viewer = !*(void**) viewer ? PETSC_TRUE : PETSC_FALSE;
  PETSC_FORTRAN_OBJECT_CREATE(viewer);
  char* c_pyname;
  FIXCHAR(pyname, l_pyname, c_pyname);
  CHKFORTRANNULLOBJECT(viewer);
  *ierr = PetscViewerPythonCreate(MPI_Comm_f2c(*(comm)), c_pyname, viewer);
  if (*ierr) return;
  FREECHAR(pyname, c_pyname);
  if (! null_viewer && !*(void**) viewer) *(void **) viewer = (void *)-2;
}
