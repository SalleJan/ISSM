#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscviewer.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscviewerflush_ PETSCVIEWERFLUSH
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscviewerflush_ petscviewerflush
#endif
PETSC_EXTERN void petscviewerflush_(PetscViewer *viewer, PetscErrorCode *ierr)
{
  PetscViewer v_viewer = PetscPatchDefaultViewers(viewer);
  *ierr = PetscViewerFlush(v_viewer);
  if (*ierr) return;
}
