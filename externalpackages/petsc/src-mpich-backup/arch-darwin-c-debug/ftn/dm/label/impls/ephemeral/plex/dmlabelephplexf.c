#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmlabelephemeral.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmlabelephemeralgettransform_ DMLABELEPHEMERALGETTRANSFORM
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmlabelephemeralgettransform_ dmlabelephemeralgettransform
#endif
PETSC_EXTERN void dmlabelephemeralgettransform_(DMLabel *label, DMPlexTransform *tr, PetscErrorCode *ierr)
{
  PetscBool null_tr = !*(void**) tr ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(tr);
  *ierr = DMLabelEphemeralGetTransform(*label, tr);
  if (*ierr) return;
  if (! null_tr && !*(void**) tr) *(void **) tr = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmlabelephemeral.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmlabelephemeralsettransform_ DMLABELEPHEMERALSETTRANSFORM
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmlabelephemeralsettransform_ dmlabelephemeralsettransform
#endif
PETSC_EXTERN void dmlabelephemeralsettransform_(DMLabel *label, DMPlexTransform *tr, PetscErrorCode *ierr)
{
  *ierr = DMLabelEphemeralSetTransform(*label, *tr);
  if (*ierr) return;
}
