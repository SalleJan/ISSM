#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscdraw.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscdrawpoint_ PETSCDRAWPOINT
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscdrawpoint_ petscdrawpoint
#endif
PETSC_EXTERN void petscdrawpoint_(PetscDraw *draw, PetscReal *xl, PetscReal *yl, int *cl, PetscErrorCode *ierr)
{
  *ierr = PetscDrawPoint(*draw, *xl, *yl, *cl);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscdraw.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscdrawpointpixel_ PETSCDRAWPOINTPIXEL
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscdrawpointpixel_ petscdrawpointpixel
#endif
PETSC_EXTERN void petscdrawpointpixel_(PetscDraw *draw, int *x, int *y, int *c, PetscErrorCode *ierr)
{
  *ierr = PetscDrawPointPixel(*draw, *x, *y, *c);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscdraw.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscdrawpointsetsize_ PETSCDRAWPOINTSETSIZE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscdrawpointsetsize_ petscdrawpointsetsize
#endif
PETSC_EXTERN void petscdrawpointsetsize_(PetscDraw *draw, PetscReal *width, PetscErrorCode *ierr)
{
  *ierr = PetscDrawPointSetSize(*draw, *width);
  if (*ierr) return;
}
