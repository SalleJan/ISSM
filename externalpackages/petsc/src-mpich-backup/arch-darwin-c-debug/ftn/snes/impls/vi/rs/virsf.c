#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsnes.h>
#include <petscsnes.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmsetvi_ DMSETVI
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmsetvi_ dmsetvi
#endif
PETSC_EXTERN void dmsetvi_(DM *dm, IS *inactive, PetscErrorCode *ierr)
{
  *ierr = DMSetVI(*dm, *inactive);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsnes.h>
#include <petscsnes.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmdestroyvi_ DMDESTROYVI
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmdestroyvi_ dmdestroyvi
#endif
PETSC_EXTERN void dmdestroyvi_(DM *dm, PetscErrorCode *ierr)
{
  *ierr = DMDestroyVI(*dm);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsnes.h>
#include <petscsnes.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define snesvigetinactiveset_ SNESVIGETINACTIVESET
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define snesvigetinactiveset_ snesvigetinactiveset
#endif
PETSC_EXTERN void snesvigetinactiveset_(SNES *snes, IS *inact, PetscErrorCode *ierr)
{
  PetscBool null_inact = !*(void**) inact ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(inact);
  *ierr = SNESVIGetInactiveSet(*snes, inact);
  if (*ierr) return;
  if (! null_inact && !*(void**) inact) *(void **) inact = (void *)-2;
}
