#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscvec.h>
#include <petscsf.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscsfinitializepackage_ PETSCSFINITIALIZEPACKAGE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscsfinitializepackage_ petscsfinitializepackage
#endif
PETSC_EXTERN void petscsfinitializepackage_(PetscErrorCode *ierr)
{
  *ierr = PetscSFInitializePackage();
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscvec.h>
#include <petscsf.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscsffinalizepackage_ PETSCSFFINALIZEPACKAGE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscsffinalizepackage_ petscsffinalizepackage
#endif
PETSC_EXTERN void petscsffinalizepackage_(PetscErrorCode *ierr)
{
  *ierr = PetscSFFinalizePackage();
  if (*ierr) return;
}
