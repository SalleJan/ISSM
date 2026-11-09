#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscksp.h>
#include <petscksp.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define pckspsetksp_ PCKSPSETKSP
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define pckspsetksp_ pckspsetksp
#endif
PETSC_EXTERN void pckspsetksp_(PC *pc, KSP *ksp, PetscErrorCode *ierr)
{
  *ierr = PCKSPSetKSP(*pc, *ksp);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscksp.h>
#include <petscksp.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define pckspgetksp_ PCKSPGETKSP
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define pckspgetksp_ pckspgetksp
#endif
PETSC_EXTERN void pckspgetksp_(PC *pc, KSP *ksp, PetscErrorCode *ierr)
{
  PetscBool null_ksp = !*(void**) ksp ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(ksp);
  *ierr = PCKSPGetKSP(*pc, ksp);
  if (*ierr) return;
  if (! null_ksp && !*(void**) ksp) *(void **) ksp = (void *)-2;
}
