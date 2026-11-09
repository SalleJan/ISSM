#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscksp.h>
#include <petscksp.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define pcbjkokkossetksp_ PCBJKOKKOSSETKSP
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define pcbjkokkossetksp_ pcbjkokkossetksp
#endif
PETSC_EXTERN void pcbjkokkossetksp_(PC *pc, KSP *ksp, PetscErrorCode *ierr)
{
  *ierr = PCBJKOKKOSSetKSP(*pc, *ksp);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscksp.h>
#include <petscksp.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define pcbjkokkosgetksp_ PCBJKOKKOSGETKSP
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define pcbjkokkosgetksp_ pcbjkokkosgetksp
#endif
PETSC_EXTERN void pcbjkokkosgetksp_(PC *pc, KSP *ksp, PetscErrorCode *ierr)
{
  PetscBool null_ksp = !*(void**) ksp ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(ksp);
  *ierr = PCBJKOKKOSGetKSP(*pc, ksp);
  if (*ierr) return;
  if (! null_ksp && !*(void**) ksp) *(void **) ksp = (void *)-2;
}
