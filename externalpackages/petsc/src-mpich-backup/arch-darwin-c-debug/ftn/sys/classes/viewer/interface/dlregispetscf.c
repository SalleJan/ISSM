#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscsys.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscsysfinalizepackage_ PETSCSYSFINALIZEPACKAGE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscsysfinalizepackage_ petscsysfinalizepackage
#endif
PETSC_EXTERN void petscsysfinalizepackage_(PetscErrorCode *ierr)
{
  *ierr = PetscSysFinalizePackage();
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscsys.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscsysinitializepackage_ PETSCSYSINITIALIZEPACKAGE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscsysinitializepackage_ petscsysinitializepackage
#endif
PETSC_EXTERN void petscsysinitializepackage_(PetscErrorCode *ierr)
{
  *ierr = PetscSysInitializePackage();
  if (*ierr) return;
}
