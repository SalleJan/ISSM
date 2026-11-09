#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petsctao.h>
#include <petsctao.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define taogetlmvmmatrix_ TAOGETLMVMMATRIX
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define taogetlmvmmatrix_ taogetlmvmmatrix
#endif
PETSC_EXTERN void taogetlmvmmatrix_(Tao *tao, Mat *B, PetscErrorCode *ierr)
{
  PetscBool null_B = !*(void**) B ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(B);
  *ierr = TaoGetLMVMMatrix(*tao, B);
  if (*ierr) return;
  if (! null_B && !*(void**) B) *(void **) B = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petsctao.h>
#include <petsctao.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define taosetlmvmmatrix_ TAOSETLMVMMATRIX
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define taosetlmvmmatrix_ taosetlmvmmatrix
#endif
PETSC_EXTERN void taosetlmvmmatrix_(Tao *tao, Mat *B, PetscErrorCode *ierr)
{
  *ierr = TaoSetLMVMMatrix(*tao, *B);
  if (*ierr) return;
}
