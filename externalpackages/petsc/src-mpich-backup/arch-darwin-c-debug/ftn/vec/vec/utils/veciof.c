#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscvec.h>
#include <petscvec.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define vecfilter_ VECFILTER
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define vecfilter_ vecfilter
#endif
PETSC_EXTERN void vecfilter_(Vec *v, PetscReal *tol, PetscErrorCode *ierr)
{
  *ierr = VecFilter(*v, *tol);
  if (*ierr) return;
}
