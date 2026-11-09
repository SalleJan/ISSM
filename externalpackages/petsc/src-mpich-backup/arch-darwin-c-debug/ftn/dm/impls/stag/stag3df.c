#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmstag.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmstagcreate3d_ DMSTAGCREATE3D
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmstagcreate3d_ dmstagcreate3d
#endif
PETSC_EXTERN void dmstagcreate3d_(MPI_Fint *comm, DMBoundaryType *bndx, DMBoundaryType *bndy, DMBoundaryType *bndz, PetscInt *M, PetscInt *N, PetscInt *P, PetscInt *M_m, PetscInt *M_n, PetscInt *M_p, PetscInt *dof0, PetscInt *dof1, PetscInt *dof2, PetscInt *dof3, DMStagStencilType *stencilType, PetscInt *stencilWidth, const PetscInt lx[], const PetscInt ly[], const PetscInt lz[], DM *dm, PetscErrorCode *ierr)
{
  PetscBool null_dm = !*(void**) dm ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLINTEGER(lx);
  CHKFORTRANNULLINTEGER(ly);
  CHKFORTRANNULLINTEGER(lz);
  CHKFORTRANNULLOBJECT(dm);
  *ierr = DMStagCreate3d(MPI_Comm_f2c(*(comm)), *bndx, *bndy, *bndz, *M, *N, *P, *M_m, *M_n, *M_p, *dof0, *dof1, *dof2, *dof3, *stencilType, *stencilWidth, lx, ly, lz, dm);
  if (*ierr) return;
  if (! null_dm && !*(void**) dm) *(void **) dm = (void *)-2;
}
