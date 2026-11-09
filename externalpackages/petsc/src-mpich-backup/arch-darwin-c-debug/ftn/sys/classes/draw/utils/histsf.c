#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscdraw.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscdrawhgcreate_ PETSCDRAWHGCREATE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscdrawhgcreate_ petscdrawhgcreate
#endif
PETSC_EXTERN void petscdrawhgcreate_(PetscDraw *draw, int *bins, PetscDrawHG *hist, PetscErrorCode *ierr)
{
  PetscBool null_hist = !*(void**) hist ? PETSC_TRUE : PETSC_FALSE;
  PETSC_FORTRAN_OBJECT_CREATE(hist);
  CHKFORTRANNULLOBJECT(hist);
  *ierr = PetscDrawHGCreate(*draw, *bins, hist);
  if (*ierr) return;
  if (! null_hist && !*(void**) hist) *(void **) hist = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscdraw.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscdrawhgsetnumberbins_ PETSCDRAWHGSETNUMBERBINS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscdrawhgsetnumberbins_ petscdrawhgsetnumberbins
#endif
PETSC_EXTERN void petscdrawhgsetnumberbins_(PetscDrawHG *hist, int *bins, PetscErrorCode *ierr)
{
  *ierr = PetscDrawHGSetNumberBins(*hist, *bins);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscdraw.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscdrawhgreset_ PETSCDRAWHGRESET
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscdrawhgreset_ petscdrawhgreset
#endif
PETSC_EXTERN void petscdrawhgreset_(PetscDrawHG *hist, PetscErrorCode *ierr)
{
  *ierr = PetscDrawHGReset(*hist);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscdraw.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscdrawhgdestroy_ PETSCDRAWHGDESTROY
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscdrawhgdestroy_ petscdrawhgdestroy
#endif
PETSC_EXTERN void petscdrawhgdestroy_(PetscDrawHG *hist, PetscErrorCode *ierr)
{
  PETSC_FORTRAN_OBJECT_F_DESTROYED_TO_C_NULL(hist);
  PetscBool null_hist = !*(void**) hist ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(hist);
  *ierr = PetscDrawHGDestroy(hist);
  if (*ierr) return;
  if (! null_hist && !*(void**) hist) *(void **) hist = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscdraw.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscdrawhgaddvalue_ PETSCDRAWHGADDVALUE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscdrawhgaddvalue_ petscdrawhgaddvalue
#endif
PETSC_EXTERN void petscdrawhgaddvalue_(PetscDrawHG *hist, PetscReal *value, PetscErrorCode *ierr)
{
  *ierr = PetscDrawHGAddValue(*hist, *value);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscdraw.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscdrawhgaddweightedvalue_ PETSCDRAWHGADDWEIGHTEDVALUE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscdrawhgaddweightedvalue_ petscdrawhgaddweightedvalue
#endif
PETSC_EXTERN void petscdrawhgaddweightedvalue_(PetscDrawHG *hist, PetscReal *value, PetscReal *weight, PetscErrorCode *ierr)
{
  *ierr = PetscDrawHGAddWeightedValue(*hist, *value, *weight);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscdraw.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscdrawhgdraw_ PETSCDRAWHGDRAW
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscdrawhgdraw_ petscdrawhgdraw
#endif
PETSC_EXTERN void petscdrawhgdraw_(PetscDrawHG *hist, PetscErrorCode *ierr)
{
  *ierr = PetscDrawHGDraw(*hist);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscdraw.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscdrawhgsave_ PETSCDRAWHGSAVE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscdrawhgsave_ petscdrawhgsave
#endif
PETSC_EXTERN void petscdrawhgsave_(PetscDrawHG *hg, PetscErrorCode *ierr)
{
  *ierr = PetscDrawHGSave(*hg);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscdraw.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscdrawhgview_ PETSCDRAWHGVIEW
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscdrawhgview_ petscdrawhgview
#endif
PETSC_EXTERN void petscdrawhgview_(PetscDrawHG *hist, PetscViewer *viewer, PetscErrorCode *ierr)
{
  PetscViewer v_viewer = PetscPatchDefaultViewers(viewer);
  *ierr = PetscDrawHGView(*hist, v_viewer);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscdraw.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscdrawhgsetcolor_ PETSCDRAWHGSETCOLOR
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscdrawhgsetcolor_ petscdrawhgsetcolor
#endif
PETSC_EXTERN void petscdrawhgsetcolor_(PetscDrawHG *hist, int *color, PetscErrorCode *ierr)
{
  *ierr = PetscDrawHGSetColor(*hist, *color);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscdraw.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscdrawhgsetlimits_ PETSCDRAWHGSETLIMITS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscdrawhgsetlimits_ petscdrawhgsetlimits
#endif
PETSC_EXTERN void petscdrawhgsetlimits_(PetscDrawHG *hist, PetscReal *x_min, PetscReal *x_max, int *y_min, int *y_max, PetscErrorCode *ierr)
{
  *ierr = PetscDrawHGSetLimits(*hist, *x_min, *x_max, *y_min, *y_max);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscdraw.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscdrawhgcalcstats_ PETSCDRAWHGCALCSTATS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscdrawhgcalcstats_ petscdrawhgcalcstats
#endif
PETSC_EXTERN void petscdrawhgcalcstats_(PetscDrawHG *hist, PetscBool *calc, PetscErrorCode *ierr)
{
  *ierr = PetscDrawHGCalcStats(*hist, *calc ? PETSC_TRUE : PETSC_FALSE);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscdraw.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscdrawhgintegerbins_ PETSCDRAWHGINTEGERBINS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscdrawhgintegerbins_ petscdrawhgintegerbins
#endif
PETSC_EXTERN void petscdrawhgintegerbins_(PetscDrawHG *hist, PetscBool *ints, PetscErrorCode *ierr)
{
  *ierr = PetscDrawHGIntegerBins(*hist, *ints ? PETSC_TRUE : PETSC_FALSE);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscdraw.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscdrawhggetaxis_ PETSCDRAWHGGETAXIS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscdrawhggetaxis_ petscdrawhggetaxis
#endif
PETSC_EXTERN void petscdrawhggetaxis_(PetscDrawHG *hist, PetscDrawAxis *axis, PetscErrorCode *ierr)
{
  PetscBool null_axis = !*(void**) axis ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(axis);
  *ierr = PetscDrawHGGetAxis(*hist, axis);
  if (*ierr) return;
  if (! null_axis && !*(void**) axis) *(void **) axis = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscdraw.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscdrawhggetdraw_ PETSCDRAWHGGETDRAW
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscdrawhggetdraw_ petscdrawhggetdraw
#endif
PETSC_EXTERN void petscdrawhggetdraw_(PetscDrawHG *hist, PetscDraw *draw, PetscErrorCode *ierr)
{
  PetscBool null_draw = !*(void**) draw ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(draw);
  *ierr = PetscDrawHGGetDraw(*hist, draw);
  if (*ierr) return;
  if (! null_draw && !*(void**) draw) *(void **) draw = (void *)-2;
}
