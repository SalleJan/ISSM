#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscdraw.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscdrawcoordinatetopixel_ PETSCDRAWCOORDINATETOPIXEL
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscdrawcoordinatetopixel_ petscdrawcoordinatetopixel
#endif
PETSC_EXTERN void petscdrawcoordinatetopixel_(PetscDraw *draw, PetscReal *x, PetscReal *y, int *i, int *j, PetscErrorCode *ierr)
{
  *ierr = PetscDrawCoordinateToPixel(*draw, *x, *y, i, j);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscdraw.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscdrawpixeltocoordinate_ PETSCDRAWPIXELTOCOORDINATE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscdrawpixeltocoordinate_ petscdrawpixeltocoordinate
#endif
PETSC_EXTERN void petscdrawpixeltocoordinate_(PetscDraw *draw, int *i, int *j, PetscReal *x, PetscReal *y, PetscErrorCode *ierr)
{
  CHKFORTRANNULLREAL(x);
  CHKFORTRANNULLREAL(y);
  *ierr = PetscDrawPixelToCoordinate(*draw, *i, *j, x, y);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscdraw.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscdrawrectangle_ PETSCDRAWRECTANGLE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscdrawrectangle_ petscdrawrectangle
#endif
PETSC_EXTERN void petscdrawrectangle_(PetscDraw *draw, PetscReal *xl, PetscReal *yl, PetscReal *xr, PetscReal *yr, int *c1, int *c2, int *c3, int *c4, PetscErrorCode *ierr)
{
  *ierr = PetscDrawRectangle(*draw, *xl, *yl, *xr, *yr, *c1, *c2, *c3, *c4);
  if (*ierr) return;
}
