#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscsys.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscpopensetmachine_ PETSCPOPENSETMACHINE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscpopensetmachine_ petscpopensetmachine
#endif
PETSC_EXTERN void petscpopensetmachine_(char machine[], PetscErrorCode *ierr, PETSC_FORTRAN_CHARLEN_T l_machine)
{
  char* c_machine;
  FIXCHAR(machine, l_machine, c_machine);
  *ierr = PetscPOpenSetMachine(c_machine);
  if (*ierr) return;
  FREECHAR(machine, c_machine);
}
