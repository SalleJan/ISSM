#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscdraw.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscdrawspcreate_ PETSCDRAWSPCREATE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscdrawspcreate_ petscdrawspcreate
#endif
PETSC_EXTERN void petscdrawspcreate_(PetscDraw *draw, int *dim, PetscDrawSP *drawsp, PetscErrorCode *ierr)
{
  PetscBool null_drawsp = !*(void**) drawsp ? PETSC_TRUE : PETSC_FALSE;
  PETSC_FORTRAN_OBJECT_CREATE(drawsp);
  CHKFORTRANNULLOBJECT(drawsp);
  *ierr = PetscDrawSPCreate(*draw, *dim, drawsp);
  if (*ierr) return;
  if (! null_drawsp && !*(void**) drawsp) *(void **) drawsp = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscdraw.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscdrawspsetdimension_ PETSCDRAWSPSETDIMENSION
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscdrawspsetdimension_ petscdrawspsetdimension
#endif
PETSC_EXTERN void petscdrawspsetdimension_(PetscDrawSP *sp, int *dim, PetscErrorCode *ierr)
{
  *ierr = PetscDrawSPSetDimension(*sp, *dim);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscdraw.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscdrawspgetdimension_ PETSCDRAWSPGETDIMENSION
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscdrawspgetdimension_ petscdrawspgetdimension
#endif
PETSC_EXTERN void petscdrawspgetdimension_(PetscDrawSP *sp, int *dim, PetscErrorCode *ierr)
{
  *ierr = PetscDrawSPGetDimension(*sp, dim);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscdraw.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscdrawspreset_ PETSCDRAWSPRESET
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscdrawspreset_ petscdrawspreset
#endif
PETSC_EXTERN void petscdrawspreset_(PetscDrawSP *sp, PetscErrorCode *ierr)
{
  *ierr = PetscDrawSPReset(*sp);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscdraw.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscdrawspdestroy_ PETSCDRAWSPDESTROY
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscdrawspdestroy_ petscdrawspdestroy
#endif
PETSC_EXTERN void petscdrawspdestroy_(PetscDrawSP *sp, PetscErrorCode *ierr)
{
  PETSC_FORTRAN_OBJECT_F_DESTROYED_TO_C_NULL(sp);
  PetscBool null_sp = !*(void**) sp ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(sp);
  *ierr = PetscDrawSPDestroy(sp);
  if (*ierr) return;
  if (! null_sp && !*(void**) sp) *(void **) sp = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscdraw.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscdrawspaddpoint_ PETSCDRAWSPADDPOINT
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscdrawspaddpoint_ petscdrawspaddpoint
#endif
PETSC_EXTERN void petscdrawspaddpoint_(PetscDrawSP *sp, PetscReal *x, PetscReal *y, PetscErrorCode *ierr)
{
  CHKFORTRANNULLREAL(x);
  CHKFORTRANNULLREAL(y);
  *ierr = PetscDrawSPAddPoint(*sp, x, y);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscdraw.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscdrawspaddpointcolorized_ PETSCDRAWSPADDPOINTCOLORIZED
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscdrawspaddpointcolorized_ petscdrawspaddpointcolorized
#endif
PETSC_EXTERN void petscdrawspaddpointcolorized_(PetscDrawSP *sp, PetscReal *x, PetscReal *y, PetscReal *z, PetscErrorCode *ierr)
{
  CHKFORTRANNULLREAL(x);
  CHKFORTRANNULLREAL(y);
  CHKFORTRANNULLREAL(z);
  *ierr = PetscDrawSPAddPointColorized(*sp, x, y, z);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscdraw.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscdrawspdraw_ PETSCDRAWSPDRAW
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscdrawspdraw_ petscdrawspdraw
#endif
PETSC_EXTERN void petscdrawspdraw_(PetscDrawSP *sp, PetscBool *clear, PetscErrorCode *ierr)
{
  *ierr = PetscDrawSPDraw(*sp, *clear ? PETSC_TRUE : PETSC_FALSE);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscdraw.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscdrawspsave_ PETSCDRAWSPSAVE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscdrawspsave_ petscdrawspsave
#endif
PETSC_EXTERN void petscdrawspsave_(PetscDrawSP *sp, PetscErrorCode *ierr)
{
  *ierr = PetscDrawSPSave(*sp);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscdraw.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscdrawspsetlimits_ PETSCDRAWSPSETLIMITS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscdrawspsetlimits_ petscdrawspsetlimits
#endif
PETSC_EXTERN void petscdrawspsetlimits_(PetscDrawSP *sp, PetscReal *x_min, PetscReal *x_max, PetscReal *y_min, PetscReal *y_max, PetscErrorCode *ierr)
{
  *ierr = PetscDrawSPSetLimits(*sp, *x_min, *x_max, *y_min, *y_max);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscdraw.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscdrawspgetaxis_ PETSCDRAWSPGETAXIS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscdrawspgetaxis_ petscdrawspgetaxis
#endif
PETSC_EXTERN void petscdrawspgetaxis_(PetscDrawSP *sp, PetscDrawAxis *axis, PetscErrorCode *ierr)
{
  PetscBool null_axis = !*(void**) axis ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(axis);
  *ierr = PetscDrawSPGetAxis(*sp, axis);
  if (*ierr) return;
  if (! null_axis && !*(void**) axis) *(void **) axis = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscdraw.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscdrawspgetdraw_ PETSCDRAWSPGETDRAW
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscdrawspgetdraw_ petscdrawspgetdraw
#endif
PETSC_EXTERN void petscdrawspgetdraw_(PetscDrawSP *sp, PetscDraw *draw, PetscErrorCode *ierr)
{
  PetscBool null_draw = !*(void**) draw ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(draw);
  *ierr = PetscDrawSPGetDraw(*sp, draw);
  if (*ierr) return;
  if (! null_draw && !*(void**) draw) *(void **) draw = (void *)-2;
}
