#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscmat.h>
#include <petscmat.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define mattransposegetmat_ MATTRANSPOSEGETMAT
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define mattransposegetmat_ mattransposegetmat
#endif
PETSC_EXTERN void mattransposegetmat_(Mat *A, Mat *M, PetscErrorCode *ierr)
{
  PetscBool null_M = !*(void**) M ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(M);
  *ierr = MatTransposeGetMat(*A, M);
  if (*ierr) return;
  if (! null_M && !*(void**) M) *(void **) M = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscmat.h>
#include <petscmat.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define matcreatetranspose_ MATCREATETRANSPOSE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define matcreatetranspose_ matcreatetranspose
#endif
PETSC_EXTERN void matcreatetranspose_(Mat *A, Mat *N, PetscErrorCode *ierr)
{
  PetscBool null_N = !*(void**) N ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(N);
  *ierr = MatCreateTranspose(*A, N);
  if (*ierr) return;
  if (! null_N && !*(void**) N) *(void **) N = (void *)-2;
}
