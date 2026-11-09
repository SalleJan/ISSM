#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscmat.h>
#include <petscmat.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define matmffdwpsetcomputenormu_ MATMFFDWPSETCOMPUTENORMU
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define matmffdwpsetcomputenormu_ matmffdwpsetcomputenormu
#endif
PETSC_EXTERN void matmffdwpsetcomputenormu_(Mat *A, PetscBool *flag, PetscErrorCode *ierr)
{
  *ierr = MatMFFDWPSetComputeNormU(*A, *flag ? PETSC_TRUE : PETSC_FALSE);
  if (*ierr) return;
}
