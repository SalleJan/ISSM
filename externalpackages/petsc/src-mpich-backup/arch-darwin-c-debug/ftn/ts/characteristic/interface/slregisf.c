#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscts.h>
#include <petsccharacteristic.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define characteristicfinalizepackage_ CHARACTERISTICFINALIZEPACKAGE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define characteristicfinalizepackage_ characteristicfinalizepackage
#endif
PETSC_EXTERN void characteristicfinalizepackage_(PetscErrorCode *ierr)
{
  *ierr = CharacteristicFinalizePackage();
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscts.h>
#include <petsccharacteristic.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define characteristicinitializepackage_ CHARACTERISTICINITIALIZEPACKAGE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define characteristicinitializepackage_ characteristicinitializepackage
#endif
PETSC_EXTERN void characteristicinitializepackage_(PetscErrorCode *ierr)
{
  *ierr = CharacteristicInitializePackage();
  if (*ierr) return;
}
