#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmda.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmdacreate_ DMDACREATE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmdacreate_ dmdacreate
#endif
PETSC_EXTERN void dmdacreate_(MPI_Fint *comm, DM *da, PetscErrorCode *ierr)
{
  PetscBool null_da = !*(void**) da ? PETSC_TRUE : PETSC_FALSE;
  PETSC_FORTRAN_OBJECT_CREATE(da);
  CHKFORTRANNULLOBJECT(da);
  *ierr = DMDACreate(MPI_Comm_f2c(*(comm)), da);
  if (*ierr) return;
  if (! null_da && !*(void**) da) *(void **) da = (void *)-2;
}
