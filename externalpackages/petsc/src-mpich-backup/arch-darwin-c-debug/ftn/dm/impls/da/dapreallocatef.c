#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmda.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmdasetpreallocationcenterdimension_ DMDASETPREALLOCATIONCENTERDIMENSION
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmdasetpreallocationcenterdimension_ dmdasetpreallocationcenterdimension
#endif
PETSC_EXTERN void dmdasetpreallocationcenterdimension_(DM *dm, PetscInt *preallocCenterDim, PetscErrorCode *ierr)
{
  *ierr = DMDASetPreallocationCenterDimension(*dm, *preallocCenterDim);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmda.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmdagetpreallocationcenterdimension_ DMDAGETPREALLOCATIONCENTERDIMENSION
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmdagetpreallocationcenterdimension_ dmdagetpreallocationcenterdimension
#endif
PETSC_EXTERN void dmdagetpreallocationcenterdimension_(DM *dm, PetscInt *preallocCenterDim, PetscErrorCode *ierr)
{
  CHKFORTRANNULLINTEGER(preallocCenterDim);
  *ierr = DMDAGetPreallocationCenterDimension(*dm, preallocCenterDim);
  if (*ierr) return;
}
