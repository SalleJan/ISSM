#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscdraw.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscdrawtriangle_ PETSCDRAWTRIANGLE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscdrawtriangle_ petscdrawtriangle
#endif
PETSC_EXTERN void petscdrawtriangle_(PetscDraw *draw, PetscReal *x1, PetscReal *y_1, PetscReal *x2, PetscReal *y2, PetscReal *x3, PetscReal *y3, int *c1, int *c2, int *c3, PetscErrorCode *ierr)
{
  *ierr = PetscDrawTriangle(*draw, *x1, *y_1, *x2, *y2, *x3, *y3, *c1, *c2, *c3);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscdraw.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscdrawscalepopup_ PETSCDRAWSCALEPOPUP
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscdrawscalepopup_ petscdrawscalepopup
#endif
PETSC_EXTERN void petscdrawscalepopup_(PetscDraw *popup, PetscReal *min, PetscReal *max, PetscErrorCode *ierr)
{
  *ierr = PetscDrawScalePopup(*popup, *min, *max);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscdraw.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscdrawtensorcontour_ PETSCDRAWTENSORCONTOUR
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscdrawtensorcontour_ petscdrawtensorcontour
#endif
PETSC_EXTERN void petscdrawtensorcontour_(PetscDraw *draw, int *m, int *n, const PetscReal xi[], const PetscReal yi[], PetscReal v[], PetscErrorCode *ierr)
{
  CHKFORTRANNULLREAL(xi);
  CHKFORTRANNULLREAL(yi);
  CHKFORTRANNULLREAL(v);
  *ierr = PetscDrawTensorContour(*draw, *m, *n, xi, yi, v);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscdraw.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscdrawtensorcontourpatch_ PETSCDRAWTENSORCONTOURPATCH
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscdrawtensorcontourpatch_ petscdrawtensorcontourpatch
#endif
PETSC_EXTERN void petscdrawtensorcontourpatch_(PetscDraw *draw, int *m, int *n, PetscReal *x, PetscReal *y, PetscReal *min, PetscReal *max, PetscReal *v, PetscErrorCode *ierr)
{
  CHKFORTRANNULLREAL(x);
  CHKFORTRANNULLREAL(y);
  CHKFORTRANNULLREAL(v);
  *ierr = PetscDrawTensorContourPatch(*draw, *m, *n, x, y, *min, *max, v);
  if (*ierr) return;
}
