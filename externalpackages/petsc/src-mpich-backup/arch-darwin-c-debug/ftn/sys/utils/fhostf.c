#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscsys.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscgethostname_ PETSCGETHOSTNAME
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscgethostname_ petscgethostname
#endif
PETSC_EXTERN void petscgethostname_(char name[], PetscErrorCode *ierr, PETSC_FORTRAN_CHARLEN_T l_name)
{
  *ierr = PetscGetHostName(name, l_name);
  if (*ierr) return;
  FIXRETURNCHAR(PETSC_TRUE, name, l_name);
}
