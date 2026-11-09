#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscsys.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscgethomedirectory_ PETSCGETHOMEDIRECTORY
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscgethomedirectory_ petscgethomedirectory
#endif
PETSC_EXTERN void petscgethomedirectory_(char dir[], PetscErrorCode *ierr, PETSC_FORTRAN_CHARLEN_T l_dir)
{
  *ierr = PetscGetHomeDirectory(dir, l_dir);
  if (*ierr) return;
  FIXRETURNCHAR(PETSC_TRUE, dir, l_dir);
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscsys.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscfixfilename_ PETSCFIXFILENAME
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscfixfilename_ petscfixfilename
#endif
PETSC_EXTERN void petscfixfilename_(char filein[], char fileout[], PetscErrorCode *ierr, PETSC_FORTRAN_CHARLEN_T l_filein, PETSC_FORTRAN_CHARLEN_T l_fileout)
{
  char* c_filein;
  FIXCHAR(filein, l_filein, c_filein);
  *ierr = PetscFixFilename(c_filein, fileout);
  if (*ierr) return;
  FREECHAR(filein, c_filein);
  FIXRETURNCHAR(PETSC_TRUE, fileout, l_fileout);
}
