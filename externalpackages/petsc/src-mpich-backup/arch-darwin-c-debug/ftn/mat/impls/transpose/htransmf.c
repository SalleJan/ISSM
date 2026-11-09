#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscmat.h>
#include <petscmat.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define mathermitiantransposegetmat_ MATHERMITIANTRANSPOSEGETMAT
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define mathermitiantransposegetmat_ mathermitiantransposegetmat
#endif
PETSC_EXTERN void mathermitiantransposegetmat_(Mat *A, Mat *M, PetscErrorCode *ierr)
{
  PetscBool null_M = !*(void**) M ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(M);
  *ierr = MatHermitianTransposeGetMat(*A, M);
  if (*ierr) return;
  if (! null_M && !*(void**) M) *(void **) M = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscmat.h>
#include <petscmat.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define matcreatehermitiantranspose_ MATCREATEHERMITIANTRANSPOSE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define matcreatehermitiantranspose_ matcreatehermitiantranspose
#endif
PETSC_EXTERN void matcreatehermitiantranspose_(Mat *A, Mat *N, PetscErrorCode *ierr)
{
  PetscBool null_N = !*(void**) N ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(N);
  *ierr = MatCreateHermitianTranspose(*A, N);
  if (*ierr) return;
  if (! null_N && !*(void**) N) *(void **) N = (void *)-2;
}
