#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsnes.h>
#include <petscsnes.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define snesfinalizepackage_ SNESFINALIZEPACKAGE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define snesfinalizepackage_ snesfinalizepackage
#endif
PETSC_EXTERN void snesfinalizepackage_(PetscErrorCode *ierr)
{
  *ierr = SNESFinalizePackage();
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsnes.h>
#include <petscsnes.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define snesinitializepackage_ SNESINITIALIZEPACKAGE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define snesinitializepackage_ snesinitializepackage
#endif
PETSC_EXTERN void snesinitializepackage_(PetscErrorCode *ierr)
{
  *ierr = SNESInitializePackage();
  if (*ierr) return;
}
