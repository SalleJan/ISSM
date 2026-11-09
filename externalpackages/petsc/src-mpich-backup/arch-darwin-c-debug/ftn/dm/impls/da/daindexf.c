#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmda.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmdasetaotype_ DMDASETAOTYPE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmdasetaotype_ dmdasetaotype
#endif
PETSC_EXTERN void dmdasetaotype_(DM *da, char *aotype, PetscErrorCode *ierr, PETSC_FORTRAN_CHARLEN_T l_aotype)
{
  char* c_aotype;
  FIXCHAR(aotype, l_aotype, c_aotype);
  *ierr = DMDASetAOType(*da, c_aotype);
  if (*ierr) return;
  FREECHAR(aotype, c_aotype);
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmda.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmdagetao_ DMDAGETAO
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmdagetao_ dmdagetao
#endif
PETSC_EXTERN void dmdagetao_(DM *da, AO *ao, PetscErrorCode *ierr)
{
  PetscBool null_ao = !*(void**) ao ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(ao);
  *ierr = DMDAGetAO(*da, ao);
  if (*ierr) return;
  if (! null_ao && !*(void**) ao) *(void **) ao = (void *)-2;
}
