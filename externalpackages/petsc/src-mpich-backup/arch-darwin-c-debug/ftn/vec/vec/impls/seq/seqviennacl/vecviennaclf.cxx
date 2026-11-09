#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscvec.h>
#include <petscvec.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define veccreateseqviennacl_ VECCREATESEQVIENNACL
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define veccreateseqviennacl_ veccreateseqviennacl
#endif
PETSC_EXTERN void veccreateseqviennacl_(MPI_Fint *comm, PetscInt *n, Vec *v, PetscErrorCode *ierr)
{
  PetscBool null_v = !*(void**) v ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(v);
  *ierr = VecCreateSeqViennaCL(MPI_Comm_f2c(*(comm)), *n, v);
  if (*ierr) return;
  if (! null_v && !*(void**) v) *(void **) v = (void *)-2;
}
