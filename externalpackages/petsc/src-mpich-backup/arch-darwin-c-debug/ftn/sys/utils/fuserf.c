#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscsys.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscgetusername_ PETSCGETUSERNAME
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscgetusername_ petscgetusername
#endif
PETSC_EXTERN void petscgetusername_(char name[], PetscErrorCode *ierr, PETSC_FORTRAN_CHARLEN_T l_name)
{
  *ierr = PetscGetUserName(name, l_name);
  if (*ierr) return;
  FIXRETURNCHAR(PETSC_TRUE, name, l_name);
}
