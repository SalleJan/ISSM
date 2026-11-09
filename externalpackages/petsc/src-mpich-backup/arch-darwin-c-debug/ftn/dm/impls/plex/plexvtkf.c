#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmplex.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmplexvtkwriteall_ DMPLEXVTKWRITEALL
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmplexvtkwriteall_ dmplexvtkwriteall
#endif
PETSC_EXTERN void dmplexvtkwriteall_(PetscObject *odm, PetscViewer *viewer, PetscErrorCode *ierr)
{
  PetscViewer v_viewer = PetscPatchDefaultViewers(viewer);
  *ierr = DMPlexVTKWriteAll(*odm, v_viewer);
  if (*ierr) return;
}
