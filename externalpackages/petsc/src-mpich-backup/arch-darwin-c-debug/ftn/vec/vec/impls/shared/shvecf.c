#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscvec.h>
#include <petscvec.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define veccreateshared_ VECCREATESHARED
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define veccreateshared_ veccreateshared
#endif
PETSC_EXTERN void veccreateshared_(MPI_Fint *comm, PetscInt *n, PetscInt *M_N, Vec *v, PetscErrorCode *ierr)
{
  PetscBool null_v = !*(void**) v ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(v);
  *ierr = VecCreateShared(MPI_Comm_f2c(*(comm)), *n, *M_N, v);
  if (*ierr) return;
  if (! null_v && !*(void**) v) *(void **) v = (void *)-2;
}
