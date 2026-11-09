#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmda.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmdacreate3d_ DMDACREATE3D
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmdacreate3d_ dmdacreate3d
#endif
PETSC_EXTERN void dmdacreate3d_(MPI_Fint *comm, DMBoundaryType *bx, DMBoundaryType *by, DMBoundaryType *bz, DMDAStencilType *stencil_type, PetscInt *M, PetscInt *N, PetscInt *P, PetscInt *M_m, PetscInt *M_n, PetscInt *M_p, PetscInt *dof, PetscInt *s, const PetscInt lx[], const PetscInt ly[], const PetscInt lz[], DM *da, PetscErrorCode *ierr)
{
  PetscBool null_da = !*(void**) da ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLINTEGER(lx);
  CHKFORTRANNULLINTEGER(ly);
  CHKFORTRANNULLINTEGER(lz);
  CHKFORTRANNULLOBJECT(da);
  *ierr = DMDACreate3d(MPI_Comm_f2c(*(comm)), *bx, *by, *bz, *stencil_type, *M, *N, *P, *M_m, *M_n, *M_p, *dof, *s, lx, ly, lz, da);
  if (*ierr) return;
  if (! null_da && !*(void**) da) *(void **) da = (void *)-2;
}
