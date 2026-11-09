#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petsclayouthdf5.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscviewerhdf5readsizes_ PETSCVIEWERHDF5READSIZES
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscviewerhdf5readsizes_ petscviewerhdf5readsizes
#endif
PETSC_EXTERN void petscviewerhdf5readsizes_(PetscViewer *viewer, char name[], PetscInt *bs, PetscInt *N, PetscErrorCode *ierr, PETSC_FORTRAN_CHARLEN_T l_name)
{
  char* c_name;
  FIXCHAR(name, l_name, c_name);
  PetscViewer v_viewer = PetscPatchDefaultViewers(viewer);
  CHKFORTRANNULLINTEGER(bs);
  CHKFORTRANNULLINTEGER(N);
  *ierr = PetscViewerHDF5ReadSizes(v_viewer, c_name, bs, N);
  if (*ierr) return;
  FREECHAR(name, c_name);
}
