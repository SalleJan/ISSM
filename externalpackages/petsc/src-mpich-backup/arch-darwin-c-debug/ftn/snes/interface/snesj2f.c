#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsnes.h>
#include <petscsnes.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define snescomputejacobiandefaultcolor_ SNESCOMPUTEJACOBIANDEFAULTCOLOR
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define snescomputejacobiandefaultcolor_ snescomputejacobiandefaultcolor
#endif
PETSC_EXTERN void snescomputejacobiandefaultcolor_(SNES *snes, Vec *x1, Mat *J, Mat *B, PetscCtx ctx, PetscErrorCode *ierr)
{
  *ierr = SNESComputeJacobianDefaultColor(*snes, *x1, *J, *B, ctx);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsnes.h>
#include <petscsnes.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define snesprunejacobiancolor_ SNESPRUNEJACOBIANCOLOR
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define snesprunejacobiancolor_ snesprunejacobiancolor
#endif
PETSC_EXTERN void snesprunejacobiancolor_(SNES *snes, Mat *J, Mat *B, PetscErrorCode *ierr)
{
  *ierr = SNESPruneJacobianColor(*snes, *J, *B);
  if (*ierr) return;
}
