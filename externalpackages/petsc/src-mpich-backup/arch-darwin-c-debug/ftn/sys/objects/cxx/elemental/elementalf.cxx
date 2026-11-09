#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscsys.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscelementalinitializepackage_ PETSCELEMENTALINITIALIZEPACKAGE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscelementalinitializepackage_ petscelementalinitializepackage
#endif
PETSC_EXTERN void petscelementalinitializepackage_(PetscErrorCode *ierr)
{
  *ierr = PetscElementalInitializePackage();
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscsys.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscelementalinitialized_ PETSCELEMENTALINITIALIZED
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscelementalinitialized_ petscelementalinitialized
#endif
PETSC_EXTERN void petscelementalinitialized_(PetscBool *isInitialized, PetscErrorCode *ierr)
{
  CHKFORTRANNULLBOOL(isInitialized);
  *ierr = PetscElementalInitialized(isInitialized);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscsys.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscelementalfinalizepackage_ PETSCELEMENTALFINALIZEPACKAGE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscelementalfinalizepackage_ petscelementalfinalizepackage
#endif
PETSC_EXTERN void petscelementalfinalizepackage_(PetscErrorCode *ierr)
{
  *ierr = PetscElementalFinalizePackage();
  if (*ierr) return;
}
