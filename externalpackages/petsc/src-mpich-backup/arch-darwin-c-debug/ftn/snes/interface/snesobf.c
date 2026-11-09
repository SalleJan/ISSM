#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsnes.h>
#include <petscsnes.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define snescomputeobjective_ SNESCOMPUTEOBJECTIVE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define snescomputeobjective_ snescomputeobjective
#endif
PETSC_EXTERN void snescomputeobjective_(SNES *snes, Vec *X, PetscReal *ob, PetscErrorCode *ierr)
{
  CHKFORTRANNULLREAL(ob);
  *ierr = SNESComputeObjective(*snes, *X, ob);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsnes.h>
#include <petscsnes.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define snesobjectivecomputefunctiondefaultfd_ SNESOBJECTIVECOMPUTEFUNCTIONDEFAULTFD
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define snesobjectivecomputefunctiondefaultfd_ snesobjectivecomputefunctiondefaultfd
#endif
PETSC_EXTERN void snesobjectivecomputefunctiondefaultfd_(SNES *snes, Vec *X, Vec *F, PetscCtx ctx, PetscErrorCode *ierr)
{
  *ierr = SNESObjectiveComputeFunctionDefaultFD(*snes, *X, *F, ctx);
  if (*ierr) return;
}
