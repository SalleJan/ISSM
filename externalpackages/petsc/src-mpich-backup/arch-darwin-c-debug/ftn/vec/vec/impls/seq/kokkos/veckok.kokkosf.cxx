#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscvec.h>
#include <petscvec.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define veckokkosplacearray_ VECKOKKOSPLACEARRAY
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define veckokkosplacearray_ veckokkosplacearray
#endif
PETSC_EXTERN void veckokkosplacearray_(Vec *v, PetscScalar *a, PetscErrorCode *ierr)
{
  CHKFORTRANNULLSCALAR(a);
  *ierr = VecKokkosPlaceArray(*v, a);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscvec.h>
#include <petscvec.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define veckokkosresetarray_ VECKOKKOSRESETARRAY
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define veckokkosresetarray_ veckokkosresetarray
#endif
PETSC_EXTERN void veckokkosresetarray_(Vec *v, PetscErrorCode *ierr)
{
  *ierr = VecKokkosResetArray(*v);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscvec.h>
#include <petscvec.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define veccreateseqkokkoswitharray_ VECCREATESEQKOKKOSWITHARRAY
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define veccreateseqkokkoswitharray_ veccreateseqkokkoswitharray
#endif
PETSC_EXTERN void veccreateseqkokkoswitharray_(MPI_Fint *comm, PetscInt *bs, PetscInt *n, const PetscScalar darray[], Vec *v, PetscErrorCode *ierr)
{
  PetscBool null_v = !*(void**) v ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLSCALAR(darray);
  CHKFORTRANNULLOBJECT(v);
  *ierr = VecCreateSeqKokkosWithArray(MPI_Comm_f2c(*(comm)), *bs, *n, darray, v);
  if (*ierr) return;
  if (! null_v && !*(void**) v) *(void **) v = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscvec.h>
#include <petscvec.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define veccreateseqkokkos_ VECCREATESEQKOKKOS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define veccreateseqkokkos_ veccreateseqkokkos
#endif
PETSC_EXTERN void veccreateseqkokkos_(MPI_Fint *comm, PetscInt *n, Vec *v, PetscErrorCode *ierr)
{
  PetscBool null_v = !*(void**) v ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(v);
  *ierr = VecCreateSeqKokkos(MPI_Comm_f2c(*(comm)), *n, v);
  if (*ierr) return;
  if (! null_v && !*(void**) v) *(void **) v = (void *)-2;
}
