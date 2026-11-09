#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscsys.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscgetworkingdirectory_ PETSCGETWORKINGDIRECTORY
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscgetworkingdirectory_ petscgetworkingdirectory
#endif
PETSC_EXTERN void petscgetworkingdirectory_(char path[], PetscErrorCode *ierr, PETSC_FORTRAN_CHARLEN_T l_path)
{
  *ierr = PetscGetWorkingDirectory(path, l_path);
  if (*ierr) return;
  FIXRETURNCHAR(PETSC_TRUE, path, l_path);
}
