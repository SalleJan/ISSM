#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscsys.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petsckokkosinitializecheck_ PETSCKOKKOSINITIALIZECHECK
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petsckokkosinitializecheck_ petsckokkosinitializecheck
#endif
PETSC_EXTERN void petsckokkosinitializecheck_(PetscErrorCode *ierr)
{
  *ierr = PetscKokkosInitializeCheck();
  if (*ierr) return;
}
