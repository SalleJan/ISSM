#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscdraw.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscdrawsetcoordinates_ PETSCDRAWSETCOORDINATES
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscdrawsetcoordinates_ petscdrawsetcoordinates
#endif
PETSC_EXTERN void petscdrawsetcoordinates_(PetscDraw *draw, PetscReal *xl, PetscReal *yl, PetscReal *xr, PetscReal *yr, PetscErrorCode *ierr)
{
  *ierr = PetscDrawSetCoordinates(*draw, *xl, *yl, *xr, *yr);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscdraw.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscdrawgetcoordinates_ PETSCDRAWGETCOORDINATES
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscdrawgetcoordinates_ petscdrawgetcoordinates
#endif
PETSC_EXTERN void petscdrawgetcoordinates_(PetscDraw *draw, PetscReal *xl, PetscReal *yl, PetscReal *xr, PetscReal *yr, PetscErrorCode *ierr)
{
  CHKFORTRANNULLREAL(xl);
  CHKFORTRANNULLREAL(yl);
  CHKFORTRANNULLREAL(xr);
  CHKFORTRANNULLREAL(yr);
  *ierr = PetscDrawGetCoordinates(*draw, xl, yl, xr, yr);
  if (*ierr) return;
}
