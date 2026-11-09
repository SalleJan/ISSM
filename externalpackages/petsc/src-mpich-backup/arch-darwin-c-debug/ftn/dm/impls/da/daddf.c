#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmda.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmdacreatepatchis_ DMDACREATEPATCHIS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmdacreatepatchis_ dmdacreatepatchis
#endif
PETSC_EXTERN void dmdacreatepatchis_(DM *da, MatStencil *lower, MatStencil *upper, IS *is, PetscBool *offproc, PetscErrorCode *ierr)
{
  PetscBool null_is = !*(void**) is ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(is);
  *ierr = DMDACreatePatchIS(*da, lower, upper, is, *offproc ? PETSC_TRUE : PETSC_FALSE);
  if (*ierr) return;
  if (! null_is && !*(void**) is) *(void **) is = (void *)-2;
}
