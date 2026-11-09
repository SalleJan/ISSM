#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdualspace.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscspacecreatesubspace_ PETSCSPACECREATESUBSPACE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscspacecreatesubspace_ petscspacecreatesubspace
#endif
PETSC_EXTERN void petscspacecreatesubspace_(PetscSpace *origSpace, PetscDualSpace *dualSubspace, PetscReal *x, PetscReal *Jx, PetscReal *u, PetscReal *Ju, PetscCopyMode *copymode, PetscSpace *subspace, PetscErrorCode *ierr)
{
  PetscBool null_subspace = !*(void**) subspace ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLREAL(x);
  CHKFORTRANNULLREAL(Jx);
  CHKFORTRANNULLREAL(u);
  CHKFORTRANNULLREAL(Ju);
  CHKFORTRANNULLOBJECT(subspace);
  *ierr = PetscSpaceCreateSubspace(*origSpace, *dualSubspace, x, Jx, u, Ju, *copymode, subspace);
  if (*ierr) return;
  if (! null_subspace && !*(void**) subspace) *(void **) subspace = (void *)-2;
}
