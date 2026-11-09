#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmplex.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmplexcreategmshfromfile_ DMPLEXCREATEGMSHFROMFILE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmplexcreategmshfromfile_ dmplexcreategmshfromfile
#endif
PETSC_EXTERN void dmplexcreategmshfromfile_(MPI_Fint *comm, char filename[], PetscBool *interpolate, DM *dm, PetscErrorCode *ierr, PETSC_FORTRAN_CHARLEN_T l_filename)
{
  PetscBool null_dm = !*(void**) dm ? PETSC_TRUE : PETSC_FALSE;
  char* c_filename;
  FIXCHAR(filename, l_filename, c_filename);
  CHKFORTRANNULLOBJECT(dm);
  *ierr = DMPlexCreateGmshFromFile(MPI_Comm_f2c(*(comm)), c_filename, *interpolate ? PETSC_TRUE : PETSC_FALSE, dm);
  if (*ierr) return;
  FREECHAR(filename, c_filename);
  if (! null_dm && !*(void**) dm) *(void **) dm = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmplex.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmplexcreategmsh_ DMPLEXCREATEGMSH
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmplexcreategmsh_ dmplexcreategmsh
#endif
PETSC_EXTERN void dmplexcreategmsh_(MPI_Fint *comm, PetscViewer *viewer, PetscBool *interpolate, DM *dm, PetscErrorCode *ierr)
{
  PetscBool null_dm = !*(void**) dm ? PETSC_TRUE : PETSC_FALSE;
  PetscViewer v_viewer = PetscPatchDefaultViewers(viewer);
  CHKFORTRANNULLOBJECT(dm);
  *ierr = DMPlexCreateGmsh(MPI_Comm_f2c(*(comm)), v_viewer, *interpolate ? PETSC_TRUE : PETSC_FALSE, dm);
  if (*ierr) return;
  if (! null_dm && !*(void**) dm) *(void **) dm = (void *)-2;
}
