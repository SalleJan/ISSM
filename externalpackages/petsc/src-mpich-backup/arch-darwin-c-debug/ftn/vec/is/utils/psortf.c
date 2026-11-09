#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscvec.h>
#include <petscis.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscparallelsortint_ PETSCPARALLELSORTINT
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscparallelsortint_ petscparallelsortint
#endif
PETSC_EXTERN void petscparallelsortint_(PetscLayout *mapin, PetscLayout *mapout, PetscInt keysin[], PetscInt keysout[], PetscErrorCode *ierr)
{
  CHKFORTRANNULLINTEGER(keysin);
  CHKFORTRANNULLINTEGER(keysout);
  *ierr = PetscParallelSortInt(*mapin, *mapout, keysin, keysout);
  if (*ierr) return;
}
