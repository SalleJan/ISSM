#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscmat.h>
#include <petscmat.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define mathypresetpreallocation_ MATHYPRESETPREALLOCATION
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define mathypresetpreallocation_ mathypresetpreallocation
#endif
PETSC_EXTERN void mathypresetpreallocation_(Mat *A, PetscInt *dnz, const PetscInt dnnz[], PetscInt *onz, const PetscInt onnz[], PetscErrorCode *ierr)
{
  CHKFORTRANNULLINTEGER(dnnz);
  CHKFORTRANNULLINTEGER(onnz);
  *ierr = MatHYPRESetPreallocation(*A, *dnz, dnnz, *onz, onnz);
  if (*ierr) return;
}
