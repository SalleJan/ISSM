#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscksp.h>
#include <petscksp.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define pcredistributegetksp_ PCREDISTRIBUTEGETKSP
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define pcredistributegetksp_ pcredistributegetksp
#endif
PETSC_EXTERN void pcredistributegetksp_(PC *pc, KSP *innerksp, PetscErrorCode *ierr)
{
  PetscBool null_innerksp = !*(void**) innerksp ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(innerksp);
  *ierr = PCRedistributeGetKSP(*pc, innerksp);
  if (*ierr) return;
  if (! null_innerksp && !*(void**) innerksp) *(void **) innerksp = (void *)-2;
}
