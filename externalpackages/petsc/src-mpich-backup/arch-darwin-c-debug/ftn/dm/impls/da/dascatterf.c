#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmda.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmdagetscatter_ DMDAGETSCATTER
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmdagetscatter_ dmdagetscatter
#endif
PETSC_EXTERN void dmdagetscatter_(DM *da, VecScatter *gtol, VecScatter *ltol, PetscErrorCode *ierr)
{
  *ierr = DMDAGetScatter(*da, gtol, ltol);
  if (*ierr) return;
}
