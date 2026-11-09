#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscsys.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscgetfullpath_ PETSCGETFULLPATH
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscgetfullpath_ petscgetfullpath
#endif
PETSC_EXTERN void petscgetfullpath_(char path[], char fullpath[], PetscErrorCode *ierr, PETSC_FORTRAN_CHARLEN_T l_path, PETSC_FORTRAN_CHARLEN_T l_fullpath)
{
  char* c_path;
  FIXCHAR(path, l_path, c_path);
  *ierr = PetscGetFullPath(c_path, fullpath, l_fullpath);
  if (*ierr) return;
  FREECHAR(path, c_path);
  FIXRETURNCHAR(PETSC_TRUE, fullpath, l_fullpath);
}
