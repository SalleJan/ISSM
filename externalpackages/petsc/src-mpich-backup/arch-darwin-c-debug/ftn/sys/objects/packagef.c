#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscsys.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petschasexternalpackage_ PETSCHASEXTERNALPACKAGE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petschasexternalpackage_ petschasexternalpackage
#endif
PETSC_EXTERN void petschasexternalpackage_(char pkg[], PetscBool *has, PetscErrorCode *ierr, PETSC_FORTRAN_CHARLEN_T l_pkg)
{
  char* c_pkg;
  FIXCHAR(pkg, l_pkg, c_pkg);
  CHKFORTRANNULLBOOL(has);
  *ierr = PetscHasExternalPackage(c_pkg, has);
  if (*ierr) return;
  FREECHAR(pkg, c_pkg);
}
