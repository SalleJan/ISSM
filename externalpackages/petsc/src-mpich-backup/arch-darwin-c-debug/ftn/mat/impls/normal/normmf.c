#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscmat.h>
#include <petscmat.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define matnormalgetmat_ MATNORMALGETMAT
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define matnormalgetmat_ matnormalgetmat
#endif
PETSC_EXTERN void matnormalgetmat_(Mat *A, Mat *M, PetscErrorCode *ierr)
{
  PetscBool null_M = !*(void**) M ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(M);
  *ierr = MatNormalGetMat(*A, M);
  if (*ierr) return;
  if (! null_M && !*(void**) M) *(void **) M = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscmat.h>
#include <petscmat.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define matcreatenormal_ MATCREATENORMAL
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define matcreatenormal_ matcreatenormal
#endif
PETSC_EXTERN void matcreatenormal_(Mat *A, Mat *N, PetscErrorCode *ierr)
{
  PetscBool null_N = !*(void**) N ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(N);
  *ierr = MatCreateNormal(*A, N);
  if (*ierr) return;
  if (! null_N && !*(void**) N) *(void **) N = (void *)-2;
}
