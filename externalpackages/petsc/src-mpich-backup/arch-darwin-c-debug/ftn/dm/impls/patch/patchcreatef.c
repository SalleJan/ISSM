#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmpatch.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmpatchcreate_ DMPATCHCREATE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmpatchcreate_ dmpatchcreate
#endif
PETSC_EXTERN void dmpatchcreate_(MPI_Fint *comm, DM *mesh, PetscErrorCode *ierr)
{
  PetscBool null_mesh = !*(void**) mesh ? PETSC_TRUE : PETSC_FALSE;
  PETSC_FORTRAN_OBJECT_CREATE(mesh);
  CHKFORTRANNULLOBJECT(mesh);
  *ierr = DMPatchCreate(MPI_Comm_f2c(*(comm)), mesh);
  if (*ierr) return;
  if (! null_mesh && !*(void**) mesh) *(void **) mesh = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmpatch.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmpatchcreategrid_ DMPATCHCREATEGRID
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmpatchcreategrid_ dmpatchcreategrid
#endif
PETSC_EXTERN void dmpatchcreategrid_(MPI_Fint *comm, PetscInt *dim, MatStencil *patchSize, MatStencil *commSize, MatStencil *gridSize, DM *dm, PetscErrorCode *ierr)
{
  PetscBool null_dm = !*(void**) dm ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(dm);
  *ierr = DMPatchCreateGrid(MPI_Comm_f2c(*(comm)), *dim, *patchSize, *commSize, *gridSize, dm);
  if (*ierr) return;
  if (! null_dm && !*(void**) dm) *(void **) dm = (void *)-2;
}
