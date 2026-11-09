#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscviewer.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscobjectviewsaws_ PETSCOBJECTVIEWSAWS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscobjectviewsaws_ petscobjectviewsaws
#endif
PETSC_EXTERN void petscobjectviewsaws_(PetscObject *obj, PetscViewer *viewer, PetscErrorCode *ierr)
{
  PetscViewer v_viewer = PetscPatchDefaultViewers(viewer);
  *ierr = PetscObjectViewSAWs(*obj, v_viewer);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscviewersaws.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscviewersawsopen_ PETSCVIEWERSAWSOPEN
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscviewersawsopen_ petscviewersawsopen
#endif
PETSC_EXTERN void petscviewersawsopen_(MPI_Fint *comm, PetscViewer *lab, PetscErrorCode *ierr)
{
  PetscBool null_lab = !*(void**) lab ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(lab);
  *ierr = PetscViewerSAWsOpen(MPI_Comm_f2c(*(comm)), lab);
  if (*ierr) return;
  if (! null_lab && !*(void**) lab) *(void **) lab = (void *)-2;
}
