#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscvec.h>
#include <petscvec.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define veccreateseqwitharray_ VECCREATESEQWITHARRAY
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define veccreateseqwitharray_ veccreateseqwitharray
#endif
PETSC_EXTERN void veccreateseqwitharray_(MPI_Fint *comm, PetscInt *bs, PetscInt *n, const PetscScalar array[], Vec *V, PetscErrorCode *ierr)
{
  PetscBool null_V = !*(void**) V ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLSCALAR(array);
  CHKFORTRANNULLOBJECT(V);
  *ierr = VecCreateSeqWithArray(MPI_Comm_f2c(*(comm)), *bs, *n, array, V);
  if (*ierr) return;
  if (! null_V && !*(void**) V) *(void **) V = (void *)-2;
}
