#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscksp.h>
#include <petscksp.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define matlmvmsetmultalgorithm_ MATLMVMSETMULTALGORITHM
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define matlmvmsetmultalgorithm_ matlmvmsetmultalgorithm
#endif
PETSC_EXTERN void matlmvmsetmultalgorithm_(Mat *B, MatLMVMMultAlgorithm *alg, PetscErrorCode *ierr)
{
  *ierr = MatLMVMSetMultAlgorithm(*B, *alg);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscksp.h>
#include <petscksp.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define matlmvmgetmultalgorithm_ MATLMVMGETMULTALGORITHM
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define matlmvmgetmultalgorithm_ matlmvmgetmultalgorithm
#endif
PETSC_EXTERN void matlmvmgetmultalgorithm_(Mat *B, MatLMVMMultAlgorithm *alg, PetscErrorCode *ierr)
{
  *ierr = MatLMVMGetMultAlgorithm(*B, alg);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscksp.h>
#include <petscksp.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define matlmvmgetlastupdate_ MATLMVMGETLASTUPDATE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define matlmvmgetlastupdate_ matlmvmgetlastupdate
#endif
PETSC_EXTERN void matlmvmgetlastupdate_(Mat *B, Vec *x_prev, Vec *f_prev, PetscErrorCode *ierr)
{
  PetscBool null_x_prev = !*(void**) x_prev ? PETSC_TRUE : PETSC_FALSE;
  PetscBool null_f_prev = !*(void**) f_prev ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(x_prev);
  CHKFORTRANNULLOBJECT(f_prev);
  *ierr = MatLMVMGetLastUpdate(*B, x_prev, f_prev);
  if (*ierr) return;
  if (! null_x_prev && !*(void**) x_prev) *(void **) x_prev = (void *)-2;
  if (! null_f_prev && !*(void**) f_prev) *(void **) f_prev = (void *)-2;
}
