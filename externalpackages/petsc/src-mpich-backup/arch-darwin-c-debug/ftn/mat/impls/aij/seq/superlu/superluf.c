#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscmat.h>
#include <petscmat.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define matsuperlusetiludroptol_ MATSUPERLUSETILUDROPTOL
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define matsuperlusetiludroptol_ matsuperlusetiludroptol
#endif
PETSC_EXTERN void matsuperlusetiludroptol_(Mat *F, PetscReal *dtol, PetscErrorCode *ierr)
{
  *ierr = MatSuperluSetILUDropTol(*F, *dtol);
  if (*ierr) return;
}
