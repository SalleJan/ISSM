#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscmat.h>
#include <petscmat.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define matpreallocatorpreallocate_ MATPREALLOCATORPREALLOCATE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define matpreallocatorpreallocate_ matpreallocatorpreallocate
#endif
PETSC_EXTERN void matpreallocatorpreallocate_(Mat *mat, PetscBool *fill, Mat *A, PetscErrorCode *ierr)
{
  *ierr = MatPreallocatorPreallocate(*mat, *fill ? PETSC_TRUE : PETSC_FALSE, *A);
  if (*ierr) return;
}
