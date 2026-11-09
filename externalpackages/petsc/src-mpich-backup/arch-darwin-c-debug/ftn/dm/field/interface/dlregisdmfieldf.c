#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmfield.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmfieldinitializepackage_ DMFIELDINITIALIZEPACKAGE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmfieldinitializepackage_ dmfieldinitializepackage
#endif
PETSC_EXTERN void dmfieldinitializepackage_(PetscErrorCode *ierr)
{
  *ierr = DMFieldInitializePackage();
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmfield.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmfieldfinalizepackage_ DMFIELDFINALIZEPACKAGE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmfieldfinalizepackage_ dmfieldfinalizepackage
#endif
PETSC_EXTERN void dmfieldfinalizepackage_(PetscErrorCode *ierr)
{
  *ierr = DMFieldFinalizePackage();
  if (*ierr) return;
}
