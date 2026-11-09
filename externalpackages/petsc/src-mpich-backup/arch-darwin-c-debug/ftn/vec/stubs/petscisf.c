#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscvec.h>
#include <petscis.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define iscoloringvaluecast_ ISCOLORINGVALUECAST
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define iscoloringvaluecast_ iscoloringvaluecast
#endif
PETSC_EXTERN void iscoloringvaluecast_(PetscCount *a, ISColoringValue *b, PetscErrorCode *ierr)
{
  *ierr = ISColoringValueCast(*a, b);
  if (*ierr) return;
}
