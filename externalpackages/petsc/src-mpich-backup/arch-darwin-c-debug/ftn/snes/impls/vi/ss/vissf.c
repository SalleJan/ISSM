#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsnes.h>
#include <petscsnes.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define snesvicomputemeritfunction_ SNESVICOMPUTEMERITFUNCTION
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define snesvicomputemeritfunction_ snesvicomputemeritfunction
#endif
PETSC_EXTERN void snesvicomputemeritfunction_(Vec *phi, PetscReal *merit, PetscReal *phinorm, PetscErrorCode *ierr)
{
  CHKFORTRANNULLREAL(merit);
  CHKFORTRANNULLREAL(phinorm);
  *ierr = SNESVIComputeMeritFunction(*phi, merit, phinorm);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsnes.h>
#include <petscsnes.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define snesvicomputefunction_ SNESVICOMPUTEFUNCTION
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define snesvicomputefunction_ snesvicomputefunction
#endif
PETSC_EXTERN void snesvicomputefunction_(SNES *snes, Vec *X, Vec *phi, void *functx, PetscErrorCode *ierr)
{
  *ierr = SNESVIComputeFunction(*snes, *X, *phi, functx);
  if (*ierr) return;
}
