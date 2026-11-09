#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscmat.h>
#include <petscpartitioner.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscpartitionerfinalizepackage_ PETSCPARTITIONERFINALIZEPACKAGE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscpartitionerfinalizepackage_ petscpartitionerfinalizepackage
#endif
PETSC_EXTERN void petscpartitionerfinalizepackage_(PetscErrorCode *ierr)
{
  *ierr = PetscPartitionerFinalizePackage();
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscmat.h>
#include <petscpartitioner.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscpartitionerinitializepackage_ PETSCPARTITIONERINITIALIZEPACKAGE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscpartitionerinitializepackage_ petscpartitionerinitializepackage
#endif
PETSC_EXTERN void petscpartitionerinitializepackage_(PetscErrorCode *ierr)
{
  *ierr = PetscPartitionerInitializePackage();
  if (*ierr) return;
}
