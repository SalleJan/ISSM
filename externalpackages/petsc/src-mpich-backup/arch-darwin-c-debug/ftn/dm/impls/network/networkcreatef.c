#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmnetwork.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmnetworkcreate_ DMNETWORKCREATE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmnetworkcreate_ dmnetworkcreate
#endif
PETSC_EXTERN void dmnetworkcreate_(MPI_Fint *comm, DM *network, PetscErrorCode *ierr)
{
  PetscBool null_network = !*(void**) network ? PETSC_TRUE : PETSC_FALSE;
  PETSC_FORTRAN_OBJECT_CREATE(network);
  CHKFORTRANNULLOBJECT(network);
  *ierr = DMNetworkCreate(MPI_Comm_f2c(*(comm)), network);
  if (*ierr) return;
  if (! null_network && !*(void**) network) *(void **) network = (void *)-2;
}
