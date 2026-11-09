#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmstag.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmstagcreate1d_ DMSTAGCREATE1D
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmstagcreate1d_ dmstagcreate1d
#endif
PETSC_EXTERN void dmstagcreate1d_(MPI_Fint *comm, DMBoundaryType *bndx, PetscInt *M, PetscInt *dof0, PetscInt *dof1, DMStagStencilType *stencilType, PetscInt *stencilWidth, const PetscInt lx[], DM *dm, PetscErrorCode *ierr)
{
  PetscBool null_dm = !*(void**) dm ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLINTEGER(lx);
  CHKFORTRANNULLOBJECT(dm);
  *ierr = DMStagCreate1d(MPI_Comm_f2c(*(comm)), *bndx, *M, *dof0, *dof1, *stencilType, *stencilWidth, lx, dm);
  if (*ierr) return;
  if (! null_dm && !*(void**) dm) *(void **) dm = (void *)-2;
}
