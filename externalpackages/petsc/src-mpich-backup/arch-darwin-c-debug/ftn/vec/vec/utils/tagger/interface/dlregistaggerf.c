#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscvec.h>
#include <petscvec.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define vectaggerinitializepackage_ VECTAGGERINITIALIZEPACKAGE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define vectaggerinitializepackage_ vectaggerinitializepackage
#endif
PETSC_EXTERN void vectaggerinitializepackage_(PetscErrorCode *ierr)
{
  *ierr = VecTaggerInitializePackage();
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscvec.h>
#include <petscvec.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define vectaggerfinalizepackage_ VECTAGGERFINALIZEPACKAGE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define vectaggerfinalizepackage_ vectaggerfinalizepackage
#endif
PETSC_EXTERN void vectaggerfinalizepackage_(PetscErrorCode *ierr)
{
  *ierr = VecTaggerFinalizePackage();
  if (*ierr) return;
}
