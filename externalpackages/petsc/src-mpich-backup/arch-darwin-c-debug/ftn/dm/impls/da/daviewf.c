#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmda.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmdagetinfo_ DMDAGETINFO
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmdagetinfo_ dmdagetinfo
#endif
PETSC_EXTERN void dmdagetinfo_(DM *da, PetscInt *dim, PetscInt *M, PetscInt *N, PetscInt *P, PetscInt *M_m, PetscInt *M_n, PetscInt *M_p, PetscInt *dof, PetscInt *s, DMBoundaryType *bx, DMBoundaryType *by, DMBoundaryType *bz, DMDAStencilType *st, PetscErrorCode *ierr)
{
  CHKFORTRANNULLINTEGER(dim);
  CHKFORTRANNULLINTEGER(M);
  CHKFORTRANNULLINTEGER(N);
  CHKFORTRANNULLINTEGER(P);
  CHKFORTRANNULLINTEGER(M_m);
  CHKFORTRANNULLINTEGER(M_n);
  CHKFORTRANNULLINTEGER(M_p);
  CHKFORTRANNULLINTEGER(dof);
  CHKFORTRANNULLINTEGER(s);
  *ierr = DMDAGetInfo(*da, dim, M, N, P, M_m, M_n, M_p, dof, s, bx, by, bz, st);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmda.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmdagetlocalinfo_ DMDAGETLOCALINFO
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmdagetlocalinfo_ dmdagetlocalinfo
#endif
PETSC_EXTERN void dmdagetlocalinfo_(DM *da, DMDALocalInfo *info, PetscErrorCode *ierr)
{
  *ierr = DMDAGetLocalInfo(*da, info);
  if (*ierr) return;
}
