#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscds.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscdsfinalizepackage_ PETSCDSFINALIZEPACKAGE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscdsfinalizepackage_ petscdsfinalizepackage
#endif
PETSC_EXTERN void petscdsfinalizepackage_(PetscErrorCode *ierr)
{
  *ierr = PetscDSFinalizePackage();
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscds.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscdsinitializepackage_ PETSCDSINITIALIZEPACKAGE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscdsinitializepackage_ petscdsinitializepackage
#endif
PETSC_EXTERN void petscdsinitializepackage_(PetscErrorCode *ierr)
{
  *ierr = PetscDSInitializePackage();
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdm.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmfinalizepackage_ DMFINALIZEPACKAGE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmfinalizepackage_ dmfinalizepackage
#endif
PETSC_EXTERN void dmfinalizepackage_(PetscErrorCode *ierr)
{
  *ierr = DMFinalizePackage();
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdm.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dminitializepackage_ DMINITIALIZEPACKAGE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dminitializepackage_ dminitializepackage
#endif
PETSC_EXTERN void dminitializepackage_(PetscErrorCode *ierr)
{
  *ierr = DMInitializePackage();
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscspace.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscfefinalizepackage_ PETSCFEFINALIZEPACKAGE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscfefinalizepackage_ petscfefinalizepackage
#endif
PETSC_EXTERN void petscfefinalizepackage_(PetscErrorCode *ierr)
{
  *ierr = PetscFEFinalizePackage();
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscspace.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscfeinitializepackage_ PETSCFEINITIALIZEPACKAGE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscfeinitializepackage_ petscfeinitializepackage
#endif
PETSC_EXTERN void petscfeinitializepackage_(PetscErrorCode *ierr)
{
  *ierr = PetscFEInitializePackage();
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscfv.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscfvfinalizepackage_ PETSCFVFINALIZEPACKAGE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscfvfinalizepackage_ petscfvfinalizepackage
#endif
PETSC_EXTERN void petscfvfinalizepackage_(PetscErrorCode *ierr)
{
  *ierr = PetscFVFinalizePackage();
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscfv.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscfvinitializepackage_ PETSCFVINITIALIZEPACKAGE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscfvinitializepackage_ petscfvinitializepackage
#endif
PETSC_EXTERN void petscfvinitializepackage_(PetscErrorCode *ierr)
{
  *ierr = PetscFVInitializePackage();
  if (*ierr) return;
}
