#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmda.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmdacreatepf_ DMDACREATEPF
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmdacreatepf_ dmdacreatepf
#endif
PETSC_EXTERN void dmdacreatepf_(DM *da, PF *pf, PetscErrorCode *ierr)
{
  PetscBool null_pf = !*(void**) pf ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(pf);
  *ierr = DMDACreatePF(*da, pf);
  if (*ierr) return;
  if (! null_pf && !*(void**) pf) *(void **) pf = (void *)-2;
}
