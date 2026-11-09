#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscsys.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscgetdate_ PETSCGETDATE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscgetdate_ petscgetdate
#endif
PETSC_EXTERN void petscgetdate_(char date[], PetscErrorCode *ierr, PETSC_FORTRAN_CHARLEN_T l_date)
{
  *ierr = PetscGetDate(date, l_date);
  if (*ierr) return;
  FIXRETURNCHAR(PETSC_TRUE, date, l_date);
}
