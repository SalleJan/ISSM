#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmda.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmdacreatenaturalvector_ DMDACREATENATURALVECTOR
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmdacreatenaturalvector_ dmdacreatenaturalvector
#endif
PETSC_EXTERN void dmdacreatenaturalvector_(DM *da, Vec *g, PetscErrorCode *ierr)
{
  PetscBool null_g = !*(void**) g ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(g);
  *ierr = DMDACreateNaturalVector(*da, g);
  if (*ierr) return;
  if (! null_g && !*(void**) g) *(void **) g = (void *)-2;
}
