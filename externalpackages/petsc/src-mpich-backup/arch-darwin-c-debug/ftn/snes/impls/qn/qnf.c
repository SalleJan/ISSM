#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsnes.h>
#include <petscsnes.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define snesqnsetrestarttype_ SNESQNSETRESTARTTYPE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define snesqnsetrestarttype_ snesqnsetrestarttype
#endif
PETSC_EXTERN void snesqnsetrestarttype_(SNES *snes, SNESQNRestartType *rtype, PetscErrorCode *ierr)
{
  *ierr = SNESQNSetRestartType(*snes, *rtype);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsnes.h>
#include <petscsnes.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define snesqnsetscaletype_ SNESQNSETSCALETYPE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define snesqnsetscaletype_ snesqnsetscaletype
#endif
PETSC_EXTERN void snesqnsetscaletype_(SNES *snes, SNESQNScaleType *stype, PetscErrorCode *ierr)
{
  *ierr = SNESQNSetScaleType(*snes, *stype);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsnes.h>
#include <petscsnes.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define snesqnsettype_ SNESQNSETTYPE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define snesqnsettype_ snesqnsettype
#endif
PETSC_EXTERN void snesqnsettype_(SNES *snes, SNESQNType *qtype, PetscErrorCode *ierr)
{
  *ierr = SNESQNSetType(*snes, *qtype);
  if (*ierr) return;
}
