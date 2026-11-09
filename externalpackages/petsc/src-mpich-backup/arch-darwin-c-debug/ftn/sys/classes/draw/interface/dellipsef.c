#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscdraw.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscdrawellipse_ PETSCDRAWELLIPSE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscdrawellipse_ petscdrawellipse
#endif
PETSC_EXTERN void petscdrawellipse_(PetscDraw *draw, PetscReal *x, PetscReal *y, PetscReal *a, PetscReal *b, int *c, PetscErrorCode *ierr)
{
  *ierr = PetscDrawEllipse(*draw, *x, *y, *a, *b, *c);
  if (*ierr) return;
}
