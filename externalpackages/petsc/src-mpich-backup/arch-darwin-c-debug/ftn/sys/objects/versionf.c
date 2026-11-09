#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscsys.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscgetversion_ PETSCGETVERSION
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscgetversion_ petscgetversion
#endif
PETSC_EXTERN void petscgetversion_(char version[], PetscErrorCode *ierr, PETSC_FORTRAN_CHARLEN_T l_version)
{
  *ierr = PetscGetVersion(version, l_version);
  if (*ierr) return;
  FIXRETURNCHAR(PETSC_TRUE, version, l_version);
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscsys.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscgetversionnumber_ PETSCGETVERSIONNUMBER
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscgetversionnumber_ petscgetversionnumber
#endif
PETSC_EXTERN void petscgetversionnumber_(PetscInt *major, PetscInt *minor, PetscInt *subminor, PetscInt *release, PetscErrorCode *ierr)
{
  CHKFORTRANNULLINTEGER(major);
  CHKFORTRANNULLINTEGER(minor);
  CHKFORTRANNULLINTEGER(subminor);
  CHKFORTRANNULLINTEGER(release);
  *ierr = PetscGetVersionNumber(major, minor, subminor, release);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscsys.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscblassetnumthreads_ PETSCBLASSETNUMTHREADS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscblassetnumthreads_ petscblassetnumthreads
#endif
PETSC_EXTERN void petscblassetnumthreads_(PetscInt *nt, PetscErrorCode *ierr)
{
  *ierr = PetscBLASSetNumThreads(*nt);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscsys.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscblasgetnumthreads_ PETSCBLASGETNUMTHREADS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscblasgetnumthreads_ petscblasgetnumthreads
#endif
PETSC_EXTERN void petscblasgetnumthreads_(PetscInt *nt, PetscErrorCode *ierr)
{
  CHKFORTRANNULLINTEGER(nt);
  *ierr = PetscBLASGetNumThreads(nt);
  if (*ierr) return;
}
