#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscdraw.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscdrawgetboundingbox_ PETSCDRAWGETBOUNDINGBOX
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscdrawgetboundingbox_ petscdrawgetboundingbox
#endif
PETSC_EXTERN void petscdrawgetboundingbox_(PetscDraw *draw, PetscReal *xl, PetscReal *yl, PetscReal *xr, PetscReal *yr, PetscErrorCode *ierr)
{
  CHKFORTRANNULLREAL(xl);
  CHKFORTRANNULLREAL(yl);
  CHKFORTRANNULLREAL(xr);
  CHKFORTRANNULLREAL(yr);
  *ierr = PetscDrawGetBoundingBox(*draw, xl, yl, xr, yr);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscdraw.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscdrawgetcurrentpoint_ PETSCDRAWGETCURRENTPOINT
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscdrawgetcurrentpoint_ petscdrawgetcurrentpoint
#endif
PETSC_EXTERN void petscdrawgetcurrentpoint_(PetscDraw *draw, PetscReal *x, PetscReal *y, PetscErrorCode *ierr)
{
  CHKFORTRANNULLREAL(x);
  CHKFORTRANNULLREAL(y);
  *ierr = PetscDrawGetCurrentPoint(*draw, x, y);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscdraw.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscdrawsetcurrentpoint_ PETSCDRAWSETCURRENTPOINT
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscdrawsetcurrentpoint_ petscdrawsetcurrentpoint
#endif
PETSC_EXTERN void petscdrawsetcurrentpoint_(PetscDraw *draw, PetscReal *x, PetscReal *y, PetscErrorCode *ierr)
{
  *ierr = PetscDrawSetCurrentPoint(*draw, *x, *y);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscdraw.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscdrawpushcurrentpoint_ PETSCDRAWPUSHCURRENTPOINT
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscdrawpushcurrentpoint_ petscdrawpushcurrentpoint
#endif
PETSC_EXTERN void petscdrawpushcurrentpoint_(PetscDraw *draw, PetscReal *x, PetscReal *y, PetscErrorCode *ierr)
{
  *ierr = PetscDrawPushCurrentPoint(*draw, *x, *y);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscdraw.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscdrawpopcurrentpoint_ PETSCDRAWPOPCURRENTPOINT
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscdrawpopcurrentpoint_ petscdrawpopcurrentpoint
#endif
PETSC_EXTERN void petscdrawpopcurrentpoint_(PetscDraw *draw, PetscErrorCode *ierr)
{
  *ierr = PetscDrawPopCurrentPoint(*draw);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscdraw.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscdrawline_ PETSCDRAWLINE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscdrawline_ petscdrawline
#endif
PETSC_EXTERN void petscdrawline_(PetscDraw *draw, PetscReal *xl, PetscReal *yl, PetscReal *xr, PetscReal *yr, int *cl, PetscErrorCode *ierr)
{
  *ierr = PetscDrawLine(*draw, *xl, *yl, *xr, *yr, *cl);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscdraw.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscdrawarrow_ PETSCDRAWARROW
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscdrawarrow_ petscdrawarrow
#endif
PETSC_EXTERN void petscdrawarrow_(PetscDraw *draw, PetscReal *xl, PetscReal *yl, PetscReal *xr, PetscReal *yr, int *cl, PetscErrorCode *ierr)
{
  *ierr = PetscDrawArrow(*draw, *xl, *yl, *xr, *yr, *cl);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscdraw.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscdrawlinesetwidth_ PETSCDRAWLINESETWIDTH
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscdrawlinesetwidth_ petscdrawlinesetwidth
#endif
PETSC_EXTERN void petscdrawlinesetwidth_(PetscDraw *draw, PetscReal *width, PetscErrorCode *ierr)
{
  *ierr = PetscDrawLineSetWidth(*draw, *width);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscdraw.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscdrawlinegetwidth_ PETSCDRAWLINEGETWIDTH
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscdrawlinegetwidth_ petscdrawlinegetwidth
#endif
PETSC_EXTERN void petscdrawlinegetwidth_(PetscDraw *draw, PetscReal *width, PetscErrorCode *ierr)
{
  CHKFORTRANNULLREAL(width);
  *ierr = PetscDrawLineGetWidth(*draw, width);
  if (*ierr) return;
}
