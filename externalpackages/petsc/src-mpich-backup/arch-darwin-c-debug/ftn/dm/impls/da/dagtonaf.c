#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmda.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmdaglobaltonaturalallcreate_ DMDAGLOBALTONATURALALLCREATE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmdaglobaltonaturalallcreate_ dmdaglobaltonaturalallcreate
#endif
PETSC_EXTERN void dmdaglobaltonaturalallcreate_(DM *da, VecScatter *scatter, PetscErrorCode *ierr)
{
  *ierr = DMDAGlobalToNaturalAllCreate(*da, scatter);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmda.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmdanaturalalltoglobalcreate_ DMDANATURALALLTOGLOBALCREATE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmdanaturalalltoglobalcreate_ dmdanaturalalltoglobalcreate
#endif
PETSC_EXTERN void dmdanaturalalltoglobalcreate_(DM *da, VecScatter *scatter, PetscErrorCode *ierr)
{
  *ierr = DMDANaturalAllToGlobalCreate(*da, scatter);
  if (*ierr) return;
}
