#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscmat.h>
#include <petscmat.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define matmffddssetumin_ MATMFFDDSSETUMIN
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define matmffddssetumin_ matmffddssetumin
#endif
PETSC_EXTERN void matmffddssetumin_(Mat *A, PetscReal *umin, PetscErrorCode *ierr)
{
  *ierr = MatMFFDDSSetUmin(*A, *umin);
  if (*ierr) return;
}
