#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdm.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmgenerateregisterall_ DMGENERATEREGISTERALL
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmgenerateregisterall_ dmgenerateregisterall
#endif
PETSC_EXTERN void dmgenerateregisterall_(PetscErrorCode *ierr)
{
  *ierr = DMGenerateRegisterAll();
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdm.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmgenerateregisterdestroy_ DMGENERATEREGISTERDESTROY
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmgenerateregisterdestroy_ dmgenerateregisterdestroy
#endif
PETSC_EXTERN void dmgenerateregisterdestroy_(PetscErrorCode *ierr)
{
  *ierr = DMGenerateRegisterDestroy();
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdm.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmadaptlabel_ DMADAPTLABEL
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmadaptlabel_ dmadaptlabel
#endif
PETSC_EXTERN void dmadaptlabel_(DM *dm, DMLabel *label, DM *dmAdapt, PetscErrorCode *ierr)
{
  PetscBool null_dmAdapt = !*(void**) dmAdapt ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(dmAdapt);
  *ierr = DMAdaptLabel(*dm, *label, dmAdapt);
  if (*ierr) return;
  if (! null_dmAdapt && !*(void**) dmAdapt) *(void **) dmAdapt = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdm.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmadaptmetric_ DMADAPTMETRIC
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmadaptmetric_ dmadaptmetric
#endif
PETSC_EXTERN void dmadaptmetric_(DM *dm, Vec *metric, DMLabel *bdLabel, DMLabel *rgLabel, DM *dmAdapt, PetscErrorCode *ierr)
{
  PetscBool null_dmAdapt = !*(void**) dmAdapt ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(dmAdapt);
  *ierr = DMAdaptMetric(*dm, *metric, *bdLabel, *rgLabel, dmAdapt);
  if (*ierr) return;
  if (! null_dmAdapt && !*(void**) dmAdapt) *(void **) dmAdapt = (void *)-2;
}
