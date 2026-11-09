#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscviewer.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscviewerstringsetownstring_ PETSCVIEWERSTRINGSETOWNSTRING
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscviewerstringsetownstring_ petscviewerstringsetownstring
#endif
PETSC_EXTERN void petscviewerstringsetownstring_(PetscViewer *viewer, PetscErrorCode *ierr)
{
  PetscViewer v_viewer = PetscPatchDefaultViewers(viewer);
  *ierr = PetscViewerStringSetOwnString(v_viewer);
  if (*ierr) return;
}
