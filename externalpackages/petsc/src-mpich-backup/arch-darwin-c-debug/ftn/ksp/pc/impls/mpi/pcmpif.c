#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscksp.h>
#include <petscsys.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define pcmpiserverbegin_ PCMPISERVERBEGIN
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define pcmpiserverbegin_ pcmpiserverbegin
#endif
PETSC_EXTERN void pcmpiserverbegin_(PetscErrorCode *ierr)
{
  *ierr = PCMPIServerBegin();
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscksp.h>
#include <petscsys.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define pcmpiserverend_ PCMPISERVEREND
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define pcmpiserverend_ pcmpiserverend
#endif
PETSC_EXTERN void pcmpiserverend_(PetscErrorCode *ierr)
{
  *ierr = PCMPIServerEnd();
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscksp.h>
#include <petscksp.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define pcmpigetksp_ PCMPIGETKSP
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define pcmpigetksp_ pcmpigetksp
#endif
PETSC_EXTERN void pcmpigetksp_(PC *pc, KSP *innerksp, PetscErrorCode *ierr)
{
  PetscBool null_innerksp = !*(void**) innerksp ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(innerksp);
  *ierr = PCMPIGetKSP(*pc, innerksp);
  if (*ierr) return;
  if (! null_innerksp && !*(void**) innerksp) *(void **) innerksp = (void *)-2;
}
