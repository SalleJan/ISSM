#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmda.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmdavtkwriteall_ DMDAVTKWRITEALL
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmdavtkwriteall_ dmdavtkwriteall
#endif
PETSC_EXTERN void dmdavtkwriteall_(PetscObject *odm, PetscViewer *viewer, PetscErrorCode *ierr)
{
  PetscViewer v_viewer = PetscPatchDefaultViewers(viewer);
  *ierr = DMDAVTKWriteAll(*odm, v_viewer);
  if (*ierr) return;
}
