#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscsys.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscmallocsetcudahost_ PETSCMALLOCSETCUDAHOST
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscmallocsetcudahost_ petscmallocsetcudahost
#endif
PETSC_EXTERN void petscmallocsetcudahost_(PetscErrorCode *ierr)
{
  *ierr = PetscMallocSetCUDAHost();
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscsys.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscmallocresetcudahost_ PETSCMALLOCRESETCUDAHOST
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscmallocresetcudahost_ petscmallocresetcudahost
#endif
PETSC_EXTERN void petscmallocresetcudahost_(PetscErrorCode *ierr)
{
  *ierr = PetscMallocResetCUDAHost();
  if (*ierr) return;
}
