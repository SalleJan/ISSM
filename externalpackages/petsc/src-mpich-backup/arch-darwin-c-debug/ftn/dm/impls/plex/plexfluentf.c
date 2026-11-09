#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmplex.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmplexcreatefluentfromfile_ DMPLEXCREATEFLUENTFROMFILE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmplexcreatefluentfromfile_ dmplexcreatefluentfromfile
#endif
PETSC_EXTERN void dmplexcreatefluentfromfile_(MPI_Fint *comm, char filename[], PetscBool *interpolate, DM *dm, PetscErrorCode *ierr, PETSC_FORTRAN_CHARLEN_T l_filename)
{
  PetscBool null_dm = !*(void**) dm ? PETSC_TRUE : PETSC_FALSE;
  char* c_filename;
  FIXCHAR(filename, l_filename, c_filename);
  CHKFORTRANNULLOBJECT(dm);
  *ierr = DMPlexCreateFluentFromFile(MPI_Comm_f2c(*(comm)), c_filename, *interpolate ? PETSC_TRUE : PETSC_FALSE, dm);
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
  #define dmplexcreatefluent_ DMPLEXCREATEFLUENT
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmplexcreatefluent_ dmplexcreatefluent
#endif
PETSC_EXTERN void dmplexcreatefluent_(MPI_Fint *comm, PetscViewer *viewer, PetscBool *interpolate, DM *dm, PetscErrorCode *ierr)
{
  PetscBool null_dm = !*(void**) dm ? PETSC_TRUE : PETSC_FALSE;
  PetscViewer v_viewer = PetscPatchDefaultViewers(viewer);
  CHKFORTRANNULLOBJECT(dm);
  *ierr = DMPlexCreateFluent(MPI_Comm_f2c(*(comm)), v_viewer, *interpolate ? PETSC_TRUE : PETSC_FALSE, dm);
  if (*ierr) return;
  if (! null_dm && !*(void**) dm) *(void **) dm = (void *)-2;
}
