#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscdraw.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscdrawsetviewport_ PETSCDRAWSETVIEWPORT
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscdrawsetviewport_ petscdrawsetviewport
#endif
PETSC_EXTERN void petscdrawsetviewport_(PetscDraw *draw, PetscReal *xl, PetscReal *yl, PetscReal *xr, PetscReal *yr, PetscErrorCode *ierr)
{
  *ierr = PetscDrawSetViewPort(*draw, *xl, *yl, *xr, *yr);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscdraw.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscdrawgetviewport_ PETSCDRAWGETVIEWPORT
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscdrawgetviewport_ petscdrawgetviewport
#endif
PETSC_EXTERN void petscdrawgetviewport_(PetscDraw *draw, PetscReal *xl, PetscReal *yl, PetscReal *xr, PetscReal *yr, PetscErrorCode *ierr)
{
  CHKFORTRANNULLREAL(xl);
  CHKFORTRANNULLREAL(yl);
  CHKFORTRANNULLREAL(xr);
  CHKFORTRANNULLREAL(yr);
  *ierr = PetscDrawGetViewPort(*draw, xl, yl, xr, yr);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscdraw.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscdrawviewportsdestroy_ PETSCDRAWVIEWPORTSDESTROY
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscdrawviewportsdestroy_ petscdrawviewportsdestroy
#endif
PETSC_EXTERN void petscdrawviewportsdestroy_(PetscDrawViewPorts **ports, PetscErrorCode *ierr)
{
  *ierr = PetscDrawViewPortsDestroy(*ports);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscdraw.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscdrawviewportsset_ PETSCDRAWVIEWPORTSSET
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscdrawviewportsset_ petscdrawviewportsset
#endif
PETSC_EXTERN void petscdrawviewportsset_(PetscDrawViewPorts **ports, PetscInt *port, PetscErrorCode *ierr)
{
  *ierr = PetscDrawViewPortsSet(*ports, *port);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscdraw.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscdrawsplitviewport_ PETSCDRAWSPLITVIEWPORT
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscdrawsplitviewport_ petscdrawsplitviewport
#endif
PETSC_EXTERN void petscdrawsplitviewport_(PetscDraw *draw, PetscErrorCode *ierr)
{
  *ierr = PetscDrawSplitViewPort(*draw);
  if (*ierr) return;
}
