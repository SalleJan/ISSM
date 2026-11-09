#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscsys.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscgetarchtype_ PETSCGETARCHTYPE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscgetarchtype_ petscgetarchtype
#endif
PETSC_EXTERN void petscgetarchtype_(char str[], PetscErrorCode *ierr, PETSC_FORTRAN_CHARLEN_T l_str)
{
  *ierr = PetscGetArchType(str, l_str);
  if (*ierr) return;
  FIXRETURNCHAR(PETSC_TRUE, str, l_str);
}
