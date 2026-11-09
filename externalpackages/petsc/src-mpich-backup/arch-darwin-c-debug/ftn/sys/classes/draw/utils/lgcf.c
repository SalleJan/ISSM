#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscdraw.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscdrawlggetaxis_ PETSCDRAWLGGETAXIS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscdrawlggetaxis_ petscdrawlggetaxis
#endif
PETSC_EXTERN void petscdrawlggetaxis_(PetscDrawLG *lg, PetscDrawAxis *axis, PetscErrorCode *ierr)
{
  PetscBool null_axis = !*(void**) axis ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(axis);
  *ierr = PetscDrawLGGetAxis(*lg, axis);
  if (*ierr) return;
  if (! null_axis && !*(void**) axis) *(void **) axis = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscdraw.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscdrawlggetdraw_ PETSCDRAWLGGETDRAW
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscdrawlggetdraw_ petscdrawlggetdraw
#endif
PETSC_EXTERN void petscdrawlggetdraw_(PetscDrawLG *lg, PetscDraw *draw, PetscErrorCode *ierr)
{
  PetscBool null_draw = !*(void**) draw ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(draw);
  *ierr = PetscDrawLGGetDraw(*lg, draw);
  if (*ierr) return;
  if (! null_draw && !*(void**) draw) *(void **) draw = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscdraw.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscdrawlgspdraw_ PETSCDRAWLGSPDRAW
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscdrawlgspdraw_ petscdrawlgspdraw
#endif
PETSC_EXTERN void petscdrawlgspdraw_(PetscDrawLG *lg, PetscDrawSP *spin, PetscErrorCode *ierr)
{
  *ierr = PetscDrawLGSPDraw(*lg, *spin);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscdraw.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscdrawlgcreate_ PETSCDRAWLGCREATE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscdrawlgcreate_ petscdrawlgcreate
#endif
PETSC_EXTERN void petscdrawlgcreate_(PetscDraw *draw, PetscInt *dim, PetscDrawLG *outlg, PetscErrorCode *ierr)
{
  PetscBool null_outlg = !*(void**) outlg ? PETSC_TRUE : PETSC_FALSE;
  PETSC_FORTRAN_OBJECT_CREATE(outlg);
  CHKFORTRANNULLOBJECT(outlg);
  *ierr = PetscDrawLGCreate(*draw, *dim, outlg);
  if (*ierr) return;
  if (! null_outlg && !*(void**) outlg) *(void **) outlg = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscdraw.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscdrawlgsetcolors_ PETSCDRAWLGSETCOLORS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscdrawlgsetcolors_ petscdrawlgsetcolors
#endif
PETSC_EXTERN void petscdrawlgsetcolors_(PetscDrawLG *lg, const int colors[], PetscErrorCode *ierr)
{
  *ierr = PetscDrawLGSetColors(*lg, colors);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscdraw.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscdrawlggetdimension_ PETSCDRAWLGGETDIMENSION
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscdrawlggetdimension_ petscdrawlggetdimension
#endif
PETSC_EXTERN void petscdrawlggetdimension_(PetscDrawLG *lg, PetscInt *dim, PetscErrorCode *ierr)
{
  CHKFORTRANNULLINTEGER(dim);
  *ierr = PetscDrawLGGetDimension(*lg, dim);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscdraw.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscdrawlgsetdimension_ PETSCDRAWLGSETDIMENSION
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscdrawlgsetdimension_ petscdrawlgsetdimension
#endif
PETSC_EXTERN void petscdrawlgsetdimension_(PetscDrawLG *lg, PetscInt *dim, PetscErrorCode *ierr)
{
  *ierr = PetscDrawLGSetDimension(*lg, *dim);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscdraw.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscdrawlgsetlimits_ PETSCDRAWLGSETLIMITS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscdrawlgsetlimits_ petscdrawlgsetlimits
#endif
PETSC_EXTERN void petscdrawlgsetlimits_(PetscDrawLG *lg, PetscReal *x_min, PetscReal *x_max, PetscReal *y_min, PetscReal *y_max, PetscErrorCode *ierr)
{
  *ierr = PetscDrawLGSetLimits(*lg, *x_min, *x_max, *y_min, *y_max);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscdraw.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscdrawlgreset_ PETSCDRAWLGRESET
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscdrawlgreset_ petscdrawlgreset
#endif
PETSC_EXTERN void petscdrawlgreset_(PetscDrawLG *lg, PetscErrorCode *ierr)
{
  *ierr = PetscDrawLGReset(*lg);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscdraw.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscdrawlgdestroy_ PETSCDRAWLGDESTROY
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscdrawlgdestroy_ petscdrawlgdestroy
#endif
PETSC_EXTERN void petscdrawlgdestroy_(PetscDrawLG *lg, PetscErrorCode *ierr)
{
  PETSC_FORTRAN_OBJECT_F_DESTROYED_TO_C_NULL(lg);
  PetscBool null_lg = !*(void**) lg ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(lg);
  *ierr = PetscDrawLGDestroy(lg);
  if (*ierr) return;
  if (! null_lg && !*(void**) lg) *(void **) lg = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscdraw.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscdrawlgsetusemarkers_ PETSCDRAWLGSETUSEMARKERS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscdrawlgsetusemarkers_ petscdrawlgsetusemarkers
#endif
PETSC_EXTERN void petscdrawlgsetusemarkers_(PetscDrawLG *lg, PetscBool *flg, PetscErrorCode *ierr)
{
  *ierr = PetscDrawLGSetUseMarkers(*lg, *flg ? PETSC_TRUE : PETSC_FALSE);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscdraw.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscdrawlgdraw_ PETSCDRAWLGDRAW
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscdrawlgdraw_ petscdrawlgdraw
#endif
PETSC_EXTERN void petscdrawlgdraw_(PetscDrawLG *lg, PetscErrorCode *ierr)
{
  *ierr = PetscDrawLGDraw(*lg);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscdraw.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscdrawlgsave_ PETSCDRAWLGSAVE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscdrawlgsave_ petscdrawlgsave
#endif
PETSC_EXTERN void petscdrawlgsave_(PetscDrawLG *lg, PetscErrorCode *ierr)
{
  *ierr = PetscDrawLGSave(*lg);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscdraw.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscdrawlgview_ PETSCDRAWLGVIEW
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscdrawlgview_ petscdrawlgview
#endif
PETSC_EXTERN void petscdrawlgview_(PetscDrawLG *lg, PetscViewer *viewer, PetscErrorCode *ierr)
{
  PetscViewer v_viewer = PetscPatchDefaultViewers(viewer);
  *ierr = PetscDrawLGView(*lg, v_viewer);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscdraw.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscdrawlgsetoptionsprefix_ PETSCDRAWLGSETOPTIONSPREFIX
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscdrawlgsetoptionsprefix_ petscdrawlgsetoptionsprefix
#endif
PETSC_EXTERN void petscdrawlgsetoptionsprefix_(PetscDrawLG *lg, char prefix[], PetscErrorCode *ierr, PETSC_FORTRAN_CHARLEN_T l_prefix)
{
  char* c_prefix;
  FIXCHAR(prefix, l_prefix, c_prefix);
  *ierr = PetscDrawLGSetOptionsPrefix(*lg, c_prefix);
  if (*ierr) return;
  FREECHAR(prefix, c_prefix);
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscdraw.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscdrawlgsetfromoptions_ PETSCDRAWLGSETFROMOPTIONS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscdrawlgsetfromoptions_ petscdrawlgsetfromoptions
#endif
PETSC_EXTERN void petscdrawlgsetfromoptions_(PetscDrawLG *lg, PetscErrorCode *ierr)
{
  *ierr = PetscDrawLGSetFromOptions(*lg);
  if (*ierr) return;
}
