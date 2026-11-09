#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscsys.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscgetrealpath_ PETSCGETREALPATH
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscgetrealpath_ petscgetrealpath
#endif
PETSC_EXTERN void petscgetrealpath_(char path[], char rpath[], PetscErrorCode *ierr, PETSC_FORTRAN_CHARLEN_T l_path, PETSC_FORTRAN_CHARLEN_T l_rpath)
{
  char* c_path;
  FIXCHAR(path, l_path, c_path);
  *ierr = PetscGetRealPath(c_path, rpath);
  if (*ierr) return;
  FREECHAR(path, c_path);
  FIXRETURNCHAR(PETSC_TRUE, rpath, l_rpath);
}
