#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscviewer.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscviewervtkgetdm_ PETSCVIEWERVTKGETDM
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscviewervtkgetdm_ petscviewervtkgetdm
#endif
PETSC_EXTERN void petscviewervtkgetdm_(PetscViewer *viewer, PetscObject *dm, PetscErrorCode *ierr)
{
  PetscBool null_dm = !*(void**) dm ? PETSC_TRUE : PETSC_FALSE;
  PetscViewer v_viewer = PetscPatchDefaultViewers(viewer);
  CHKFORTRANNULLOBJECT(dm);
  *ierr = PetscViewerVTKGetDM(v_viewer, dm);
  if (*ierr) return;
  if (! null_dm && !*(void**) dm) *(void **) dm = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscviewer.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscviewervtkopen_ PETSCVIEWERVTKOPEN
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscviewervtkopen_ petscviewervtkopen
#endif
PETSC_EXTERN void petscviewervtkopen_(MPI_Fint *comm, char name[], PetscFileMode *type, PetscViewer *vtk, PetscErrorCode *ierr, PETSC_FORTRAN_CHARLEN_T l_name)
{
  PetscBool null_vtk = !*(void**) vtk ? PETSC_TRUE : PETSC_FALSE;
  char* c_name;
  FIXCHAR(name, l_name, c_name);
  CHKFORTRANNULLOBJECT(vtk);
  *ierr = PetscViewerVTKOpen(MPI_Comm_f2c(*(comm)), c_name, *type, vtk);
  if (*ierr) return;
  FREECHAR(name, c_name);
  if (! null_vtk && !*(void**) vtk) *(void **) vtk = (void *)-2;
}
