#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscksp.h>
#include <petscksp.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define kspfinalizepackage_ KSPFINALIZEPACKAGE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define kspfinalizepackage_ kspfinalizepackage
#endif
PETSC_EXTERN void kspfinalizepackage_(PetscErrorCode *ierr)
{
  *ierr = KSPFinalizePackage();
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscksp.h>
#include <petscksp.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define kspinitializepackage_ KSPINITIALIZEPACKAGE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define kspinitializepackage_ kspinitializepackage
#endif
PETSC_EXTERN void kspinitializepackage_(PetscErrorCode *ierr)
{
  *ierr = KSPInitializePackage();
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscksp.h>
#include <petscpc.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define pcfinalizepackage_ PCFINALIZEPACKAGE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define pcfinalizepackage_ pcfinalizepackage
#endif
PETSC_EXTERN void pcfinalizepackage_(PetscErrorCode *ierr)
{
  *ierr = PCFinalizePackage();
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscksp.h>
#include <petscpc.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define pcinitializepackage_ PCINITIALIZEPACKAGE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define pcinitializepackage_ pcinitializepackage
#endif
PETSC_EXTERN void pcinitializepackage_(PetscErrorCode *ierr)
{
  *ierr = PCInitializePackage();
  if (*ierr) return;
}
