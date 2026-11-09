#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmplex.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmplexsetglobaltonaturalsf_ DMPLEXSETGLOBALTONATURALSF
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmplexsetglobaltonaturalsf_ dmplexsetglobaltonaturalsf
#endif
PETSC_EXTERN void dmplexsetglobaltonaturalsf_(DM *dm, PetscSF *sf, PetscErrorCode *ierr)
{
  *ierr = DMPlexSetGlobalToNaturalSF(*dm, *sf);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmplex.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmplexgetglobaltonaturalsf_ DMPLEXGETGLOBALTONATURALSF
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmplexgetglobaltonaturalsf_ dmplexgetglobaltonaturalsf
#endif
PETSC_EXTERN void dmplexgetglobaltonaturalsf_(DM *dm, PetscSF *sf, PetscErrorCode *ierr)
{
  PetscBool null_sf = !*(void**) sf ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(sf);
  *ierr = DMPlexGetGlobalToNaturalSF(*dm, sf);
  if (*ierr) return;
  if (! null_sf && !*(void**) sf) *(void **) sf = (void *)-2;
}
