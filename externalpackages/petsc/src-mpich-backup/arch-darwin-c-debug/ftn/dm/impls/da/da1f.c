#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmda.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmdacreate1d_ DMDACREATE1D
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmdacreate1d_ dmdacreate1d
#endif
PETSC_EXTERN void dmdacreate1d_(MPI_Fint *comm, DMBoundaryType *bx, PetscInt *M, PetscInt *dof, PetscInt *s, const PetscInt lx[], DM *da, PetscErrorCode *ierr)
{
  PetscBool null_da = !*(void**) da ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLINTEGER(lx);
  CHKFORTRANNULLOBJECT(da);
  *ierr = DMDACreate1d(MPI_Comm_f2c(*(comm)), *bx, *M, *dof, *s, lx, da);
  if (*ierr) return;
  if (! null_da && !*(void**) da) *(void **) da = (void *)-2;
}
