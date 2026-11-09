#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscsys.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscgathernumberofmessages_ PETSCGATHERNUMBEROFMESSAGES
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscgathernumberofmessages_ petscgathernumberofmessages
#endif
PETSC_EXTERN void petscgathernumberofmessages_(MPI_Fint *comm, const PetscMPIInt iflags[], const PetscMPIInt ilengths[], PetscMPIInt *nrecvs, PetscErrorCode *ierr)
{
  *ierr = PetscGatherNumberOfMessages(MPI_Comm_f2c(*(comm)), iflags, ilengths, nrecvs);
  if (*ierr) return;
}
