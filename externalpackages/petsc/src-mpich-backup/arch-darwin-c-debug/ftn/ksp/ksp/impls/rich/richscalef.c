#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscksp.h>
#include <petscksp.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define ksprichardsonsetscale_ KSPRICHARDSONSETSCALE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define ksprichardsonsetscale_ ksprichardsonsetscale
#endif
PETSC_EXTERN void ksprichardsonsetscale_(KSP *ksp, PetscReal *scale, PetscErrorCode *ierr)
{
  *ierr = KSPRichardsonSetScale(*ksp, *scale);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscksp.h>
#include <petscksp.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define ksprichardsonsetselfscale_ KSPRICHARDSONSETSELFSCALE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define ksprichardsonsetselfscale_ ksprichardsonsetselfscale
#endif
PETSC_EXTERN void ksprichardsonsetselfscale_(KSP *ksp, PetscBool *scale, PetscErrorCode *ierr)
{
  *ierr = KSPRichardsonSetSelfScale(*ksp, *scale ? PETSC_TRUE : PETSC_FALSE);
  if (*ierr) return;
}
