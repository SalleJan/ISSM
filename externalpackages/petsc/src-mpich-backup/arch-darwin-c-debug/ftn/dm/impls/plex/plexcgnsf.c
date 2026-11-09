#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmplex.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmplexcreatecgnsfromfile_ DMPLEXCREATECGNSFROMFILE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmplexcreatecgnsfromfile_ dmplexcreatecgnsfromfile
#endif
PETSC_EXTERN void dmplexcreatecgnsfromfile_(MPI_Fint *comm, char filename[], PetscBool *interpolate, DM *dm, PetscErrorCode *ierr, PETSC_FORTRAN_CHARLEN_T l_filename)
{
  PetscBool null_dm = !*(void**) dm ? PETSC_TRUE : PETSC_FALSE;
  char* c_filename;
  FIXCHAR(filename, l_filename, c_filename);
  CHKFORTRANNULLOBJECT(dm);
  *ierr = DMPlexCreateCGNSFromFile(MPI_Comm_f2c(*(comm)), c_filename, *interpolate ? PETSC_TRUE : PETSC_FALSE, dm);
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
  #define dmplexcreatecgns_ DMPLEXCREATECGNS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmplexcreatecgns_ dmplexcreatecgns
#endif
PETSC_EXTERN void dmplexcreatecgns_(MPI_Fint *comm, PetscInt *cgid, PetscBool *interpolate, DM *dm, PetscErrorCode *ierr)
{
  PetscBool null_dm = !*(void**) dm ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(dm);
  *ierr = DMPlexCreateCGNS(MPI_Comm_f2c(*(comm)), *cgid, *interpolate ? PETSC_TRUE : PETSC_FALSE, dm);
  if (*ierr) return;
  if (! null_dm && !*(void**) dm) *(void **) dm = (void *)-2;
}
