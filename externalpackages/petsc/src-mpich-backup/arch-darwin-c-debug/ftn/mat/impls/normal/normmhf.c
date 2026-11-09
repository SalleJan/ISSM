#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscmat.h>
#include <petscmat.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define matnormalhermitiangetmat_ MATNORMALHERMITIANGETMAT
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define matnormalhermitiangetmat_ matnormalhermitiangetmat
#endif
PETSC_EXTERN void matnormalhermitiangetmat_(Mat *A, Mat *M, PetscErrorCode *ierr)
{
  PetscBool null_M = !*(void**) M ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(M);
  *ierr = MatNormalHermitianGetMat(*A, M);
  if (*ierr) return;
  if (! null_M && !*(void**) M) *(void **) M = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscmat.h>
#include <petscmat.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define matcreatenormalhermitian_ MATCREATENORMALHERMITIAN
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define matcreatenormalhermitian_ matcreatenormalhermitian
#endif
PETSC_EXTERN void matcreatenormalhermitian_(Mat *A, Mat *N, PetscErrorCode *ierr)
{
  PetscBool null_N = !*(void**) N ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(N);
  *ierr = MatCreateNormalHermitian(*A, N);
  if (*ierr) return;
  if (! null_N && !*(void**) N) *(void **) N = (void *)-2;
}
