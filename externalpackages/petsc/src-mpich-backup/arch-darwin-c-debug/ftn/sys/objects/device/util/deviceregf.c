#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscdevice.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscdevicefinalizepackage_ PETSCDEVICEFINALIZEPACKAGE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscdevicefinalizepackage_ petscdevicefinalizepackage
#endif
PETSC_EXTERN void petscdevicefinalizepackage_(PetscErrorCode *ierr)
{
  *ierr = PetscDeviceFinalizePackage();
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscdevice.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscdeviceinitializepackage_ PETSCDEVICEINITIALIZEPACKAGE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscdeviceinitializepackage_ petscdeviceinitializepackage
#endif
PETSC_EXTERN void petscdeviceinitializepackage_(PetscErrorCode *ierr)
{
  *ierr = PetscDeviceInitializePackage();
  if (*ierr) return;
}
