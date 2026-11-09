#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmstag.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmstagcreate2d_ DMSTAGCREATE2D
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmstagcreate2d_ dmstagcreate2d
#endif
PETSC_EXTERN void dmstagcreate2d_(MPI_Fint *comm, DMBoundaryType *bndx, DMBoundaryType *bndy, PetscInt *M, PetscInt *N, PetscInt *M_m, PetscInt *M_n, PetscInt *dof0, PetscInt *dof1, PetscInt *dof2, DMStagStencilType *stencilType, PetscInt *stencilWidth, const PetscInt lx[], const PetscInt ly[], DM *dm, PetscErrorCode *ierr)
{
  PetscBool null_dm = !*(void**) dm ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLINTEGER(lx);
  CHKFORTRANNULLINTEGER(ly);
  CHKFORTRANNULLOBJECT(dm);
  *ierr = DMStagCreate2d(MPI_Comm_f2c(*(comm)), *bndx, *bndy, *M, *N, *M_m, *M_n, *dof0, *dof1, *dof2, *stencilType, *stencilWidth, lx, ly, dm);
  if (*ierr) return;
  if (! null_dm && !*(void**) dm) *(void **) dm = (void *)-2;
}
