#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscmat.h>
#include <petscmat.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define matsuperludistgetdiagu_ MATSUPERLUDISTGETDIAGU
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define matsuperludistgetdiagu_ matsuperludistgetdiagu
#endif
PETSC_EXTERN void matsuperludistgetdiagu_(Mat *F, PetscScalar *diagU, PetscErrorCode *ierr)
{
  CHKFORTRANNULLSCALAR(diagU);
  *ierr = MatSuperluDistGetDiagU(*F, diagU);
  if (*ierr) return;
}
