#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscvec.h>
#include <petscvec.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define vecsdestroy_ VECSDESTROY
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define vecsdestroy_ vecsdestroy
#endif
PETSC_EXTERN void vecsdestroy_(Vecs *x, PetscErrorCode *ierr)
{
  PETSC_FORTRAN_OBJECT_F_DESTROYED_TO_C_NULL(x);
  *ierr = VecsDestroy(*x);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscvec.h>
#include <petscvec.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define vecscreateseq_ VECSCREATESEQ
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define vecscreateseq_ vecscreateseq
#endif
PETSC_EXTERN void vecscreateseq_(MPI_Fint *comm, PetscInt *p, PetscInt *m, Vecs *x, PetscErrorCode *ierr)
{
  PetscBool null_x = !*(void**) x ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(x);
  *ierr = VecsCreateSeq(MPI_Comm_f2c(*(comm)), *p, *m, x);
  if (*ierr) return;
  if (! null_x && !*(void**) x) *(void **) x = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscvec.h>
#include <petscvec.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define vecscreateseqwitharray_ VECSCREATESEQWITHARRAY
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define vecscreateseqwitharray_ vecscreateseqwitharray
#endif
PETSC_EXTERN void vecscreateseqwitharray_(MPI_Fint *comm, PetscInt *p, PetscInt *m, PetscScalar *a, Vecs *x, PetscErrorCode *ierr)
{
  PetscBool null_x = !*(void**) x ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLSCALAR(a);
  CHKFORTRANNULLOBJECT(x);
  *ierr = VecsCreateSeqWithArray(MPI_Comm_f2c(*(comm)), *p, *m, a, x);
  if (*ierr) return;
  if (! null_x && !*(void**) x) *(void **) x = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscvec.h>
#include <petscvec.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define vecsduplicate_ VECSDUPLICATE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define vecsduplicate_ vecsduplicate
#endif
PETSC_EXTERN void vecsduplicate_(Vecs *x, Vecs *y, PetscErrorCode *ierr)
{
  PetscBool null_y = !*(void**) y ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(y);
  *ierr = VecsDuplicate(*x, y);
  if (*ierr) return;
  if (! null_y && !*(void**) y) *(void **) y = (void *)-2;
}
