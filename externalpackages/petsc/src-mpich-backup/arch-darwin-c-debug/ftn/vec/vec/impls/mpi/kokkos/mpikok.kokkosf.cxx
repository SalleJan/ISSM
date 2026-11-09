#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscvec.h>
#include <petscvec.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define veccreatempikokkoswitharray_ VECCREATEMPIKOKKOSWITHARRAY
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define veccreatempikokkoswitharray_ veccreatempikokkoswitharray
#endif
PETSC_EXTERN void veccreatempikokkoswitharray_(MPI_Fint *comm, PetscInt *bs, PetscInt *n, PetscInt *M_N, const PetscScalar darray[], Vec *v, PetscErrorCode *ierr)
{
  PetscBool null_v = !*(void**) v ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLSCALAR(darray);
  CHKFORTRANNULLOBJECT(v);
  *ierr = VecCreateMPIKokkosWithArray(MPI_Comm_f2c(*(comm)), *bs, *n, *M_N, darray, v);
  if (*ierr) return;
  if (! null_v && !*(void**) v) *(void **) v = (void *)-2;
}
