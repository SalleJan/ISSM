#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmda.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmdacreateaggregates_ DMDACREATEAGGREGATES
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmdacreateaggregates_ dmdacreateaggregates
#endif
PETSC_EXTERN void dmdacreateaggregates_(DM *dac, DM *daf, Mat *rest, PetscErrorCode *ierr)
{
  PetscBool null_rest = !*(void**) rest ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(rest);
  *ierr = DMDACreateAggregates(*dac, *daf, rest);
  if (*ierr) return;
  if (! null_rest && !*(void**) rest) *(void **) rest = (void *)-2;
}
