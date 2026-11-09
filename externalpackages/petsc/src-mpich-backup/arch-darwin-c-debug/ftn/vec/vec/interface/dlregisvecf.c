#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscvec.h>
#include <petscvec.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define vecinitializepackage_ VECINITIALIZEPACKAGE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define vecinitializepackage_ vecinitializepackage
#endif
PETSC_EXTERN void vecinitializepackage_(PetscErrorCode *ierr)
{
  *ierr = VecInitializePackage();
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscvec.h>
#include <petscvec.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define vecfinalizepackage_ VECFINALIZEPACKAGE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define vecfinalizepackage_ vecfinalizepackage
#endif
PETSC_EXTERN void vecfinalizepackage_(PetscErrorCode *ierr)
{
  *ierr = VecFinalizePackage();
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscvec.h>
#include <petscis.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define isfinalizepackage_ ISFINALIZEPACKAGE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define isfinalizepackage_ isfinalizepackage
#endif
PETSC_EXTERN void isfinalizepackage_(PetscErrorCode *ierr)
{
  *ierr = ISFinalizePackage();
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscvec.h>
#include <petscis.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define isinitializepackage_ ISINITIALIZEPACKAGE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define isinitializepackage_ isinitializepackage
#endif
PETSC_EXTERN void isinitializepackage_(PetscErrorCode *ierr)
{
  *ierr = ISInitializePackage();
  if (*ierr) return;
}
