#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscmat.h>
#include <petscmat.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define matfinalizepackage_ MATFINALIZEPACKAGE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define matfinalizepackage_ matfinalizepackage
#endif
PETSC_EXTERN void matfinalizepackage_(PetscErrorCode *ierr)
{
  *ierr = MatFinalizePackage();
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscmat.h>
#include <petscmat.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define matinitializepackage_ MATINITIALIZEPACKAGE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define matinitializepackage_ matinitializepackage
#endif
PETSC_EXTERN void matinitializepackage_(PetscErrorCode *ierr)
{
  *ierr = MatInitializePackage();
  if (*ierr) return;
}
