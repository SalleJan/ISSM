#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsnes.h>
#include <petscsnes.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define snescomputejacobiandefault_ SNESCOMPUTEJACOBIANDEFAULT
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define snescomputejacobiandefault_ snescomputejacobiandefault
#endif
PETSC_EXTERN void snescomputejacobiandefault_(SNES *snes, Vec *x1, Mat *J, Mat *B, PetscCtx ctx, PetscErrorCode *ierr)
{
  *ierr = SNESComputeJacobianDefault(*snes, *x1, *J, *B, ctx);
  if (*ierr) return;
}
