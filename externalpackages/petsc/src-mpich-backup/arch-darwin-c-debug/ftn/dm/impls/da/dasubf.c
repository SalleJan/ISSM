#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmda.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmdagetlogicalcoordinate_ DMDAGETLOGICALCOORDINATE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmdagetlogicalcoordinate_ dmdagetlogicalcoordinate
#endif
PETSC_EXTERN void dmdagetlogicalcoordinate_(DM *da, PetscScalar *x, PetscScalar *y, PetscScalar *z, PetscInt *II, PetscInt *JJ, PetscInt *KK, PetscScalar *M_X, PetscScalar *M_Y, PetscScalar *M_Z, PetscErrorCode *ierr)
{
  CHKFORTRANNULLINTEGER(II);
  CHKFORTRANNULLINTEGER(JJ);
  CHKFORTRANNULLINTEGER(KK);
  CHKFORTRANNULLSCALAR(M_X);
  CHKFORTRANNULLSCALAR(M_Y);
  CHKFORTRANNULLSCALAR(M_Z);
  *ierr = DMDAGetLogicalCoordinate(*da, *x, *y, *z, II, JJ, KK, M_X, M_Y, M_Z);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmda.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmdagetray_ DMDAGETRAY
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmdagetray_ dmdagetray
#endif
PETSC_EXTERN void dmdagetray_(DM *da, DMDirection *dir, PetscInt *gp, Vec *newvec, VecScatter *scatter, PetscErrorCode *ierr)
{
  PetscBool null_newvec = !*(void**) newvec ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(newvec);
  *ierr = DMDAGetRay(*da, *dir, *gp, newvec, scatter);
  if (*ierr) return;
  if (! null_newvec && !*(void**) newvec) *(void **) newvec = (void *)-2;
}
