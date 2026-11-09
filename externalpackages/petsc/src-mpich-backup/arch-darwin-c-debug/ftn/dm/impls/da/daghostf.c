#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmda.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmdagetghostcorners_ DMDAGETGHOSTCORNERS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmdagetghostcorners_ dmdagetghostcorners
#endif
PETSC_EXTERN void dmdagetghostcorners_(DM *da, PetscInt *x, PetscInt *y, PetscInt *z, PetscInt *m, PetscInt *n, PetscInt *p, PetscErrorCode *ierr)
{
  CHKFORTRANNULLINTEGER(x);
  CHKFORTRANNULLINTEGER(y);
  CHKFORTRANNULLINTEGER(z);
  CHKFORTRANNULLINTEGER(m);
  CHKFORTRANNULLINTEGER(n);
  CHKFORTRANNULLINTEGER(p);
  *ierr = DMDAGetGhostCorners(*da, x, y, z, m, n, p);
  if (*ierr) return;
}
