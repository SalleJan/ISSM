#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmda.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmdacreate2d_ DMDACREATE2D
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmdacreate2d_ dmdacreate2d
#endif
PETSC_EXTERN void dmdacreate2d_(MPI_Fint *comm, DMBoundaryType *bx, DMBoundaryType *by, DMDAStencilType *stencil_type, PetscInt *M, PetscInt *N, PetscInt *M_m, PetscInt *M_n, PetscInt *dof, PetscInt *s, const PetscInt lx[], const PetscInt ly[], DM *da, PetscErrorCode *ierr)
{
  PetscBool null_da = !*(void**) da ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLINTEGER(lx);
  CHKFORTRANNULLINTEGER(ly);
  CHKFORTRANNULLOBJECT(da);
  *ierr = DMDACreate2d(MPI_Comm_f2c(*(comm)), *bx, *by, *stencil_type, *M, *N, *M_m, *M_n, *dof, *s, lx, ly, da);
  if (*ierr) return;
  if (! null_da && !*(void**) da) *(void **) da = (void *)-2;
}
