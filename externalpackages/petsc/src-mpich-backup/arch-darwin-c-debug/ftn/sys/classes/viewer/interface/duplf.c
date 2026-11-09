#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscviewer.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscviewergetsubviewer_ PETSCVIEWERGETSUBVIEWER
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscviewergetsubviewer_ petscviewergetsubviewer
#endif
PETSC_EXTERN void petscviewergetsubviewer_(PetscViewer *viewer, MPI_Fint *comm, PetscViewer *outviewer, PetscErrorCode *ierr)
{
  PetscBool null_outviewer = !*(void**) outviewer ? PETSC_TRUE : PETSC_FALSE;
  PetscViewer v_viewer = PetscPatchDefaultViewers(viewer);
  CHKFORTRANNULLOBJECT(outviewer);
  *ierr = PetscViewerGetSubViewer(v_viewer, MPI_Comm_f2c(*(comm)), outviewer);
  if (*ierr) return;
  if (! null_outviewer && !*(void**) outviewer) *(void **) outviewer = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscviewer.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscviewerrestoresubviewer_ PETSCVIEWERRESTORESUBVIEWER
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscviewerrestoresubviewer_ petscviewerrestoresubviewer
#endif
PETSC_EXTERN void petscviewerrestoresubviewer_(PetscViewer *viewer, MPI_Fint *comm, PetscViewer *outviewer, PetscErrorCode *ierr)
{
  PetscBool null_outviewer = !*(void**) outviewer ? PETSC_TRUE : PETSC_FALSE;
  PetscViewer v_viewer = PetscPatchDefaultViewers(viewer);
  CHKFORTRANNULLOBJECT(outviewer);
  *ierr = PetscViewerRestoreSubViewer(v_viewer, MPI_Comm_f2c(*(comm)), outviewer);
  if (*ierr) return;
  if (! null_outviewer && !*(void**) outviewer) *(void **) outviewer = (void *)-2;
}
