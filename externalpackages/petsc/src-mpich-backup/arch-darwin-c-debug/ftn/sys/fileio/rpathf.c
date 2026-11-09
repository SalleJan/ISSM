#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscsys.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscgetrelativepath_ PETSCGETRELATIVEPATH
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscgetrelativepath_ petscgetrelativepath
#endif
PETSC_EXTERN void petscgetrelativepath_(char fullpath[], char path[], PetscErrorCode *ierr, PETSC_FORTRAN_CHARLEN_T l_fullpath, PETSC_FORTRAN_CHARLEN_T l_path)
{
  char* c_fullpath;
  FIXCHAR(fullpath, l_fullpath, c_fullpath);
  *ierr = PetscGetRelativePath(c_fullpath, path, l_path);
  if (*ierr) return;
  FREECHAR(fullpath, c_fullpath);
  FIXRETURNCHAR(PETSC_TRUE, path, l_path);
}
