#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmlabelephemeral.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmlabelephemeralgetlabel_ DMLABELEPHEMERALGETLABEL
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmlabelephemeralgetlabel_ dmlabelephemeralgetlabel
#endif
PETSC_EXTERN void dmlabelephemeralgetlabel_(DMLabel *label, DMLabel *olabel, PetscErrorCode *ierr)
{
  PetscBool null_olabel = !*(void**) olabel ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(olabel);
  *ierr = DMLabelEphemeralGetLabel(*label, olabel);
  if (*ierr) return;
  if (! null_olabel && !*(void**) olabel) *(void **) olabel = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmlabelephemeral.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmlabelephemeralsetlabel_ DMLABELEPHEMERALSETLABEL
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmlabelephemeralsetlabel_ dmlabelephemeralsetlabel
#endif
PETSC_EXTERN void dmlabelephemeralsetlabel_(DMLabel *label, DMLabel *olabel, PetscErrorCode *ierr)
{
  *ierr = DMLabelEphemeralSetLabel(*label, *olabel);
  if (*ierr) return;
}
