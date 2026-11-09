#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscdraw.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscdrawbarcreate_ PETSCDRAWBARCREATE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscdrawbarcreate_ petscdrawbarcreate
#endif
PETSC_EXTERN void petscdrawbarcreate_(PetscDraw *draw, PetscDrawBar *bar, PetscErrorCode *ierr)
{
  PetscBool null_bar = !*(void**) bar ? PETSC_TRUE : PETSC_FALSE;
  PETSC_FORTRAN_OBJECT_CREATE(bar);
  CHKFORTRANNULLOBJECT(bar);
  *ierr = PetscDrawBarCreate(*draw, bar);
  if (*ierr) return;
  if (! null_bar && !*(void**) bar) *(void **) bar = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscdraw.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscdrawbardestroy_ PETSCDRAWBARDESTROY
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscdrawbardestroy_ petscdrawbardestroy
#endif
PETSC_EXTERN void petscdrawbardestroy_(PetscDrawBar *bar, PetscErrorCode *ierr)
{
  PETSC_FORTRAN_OBJECT_F_DESTROYED_TO_C_NULL(bar);
  PetscBool null_bar = !*(void**) bar ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(bar);
  *ierr = PetscDrawBarDestroy(bar);
  if (*ierr) return;
  if (! null_bar && !*(void**) bar) *(void **) bar = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscdraw.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscdrawbardraw_ PETSCDRAWBARDRAW
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscdrawbardraw_ petscdrawbardraw
#endif
PETSC_EXTERN void petscdrawbardraw_(PetscDrawBar *bar, PetscErrorCode *ierr)
{
  *ierr = PetscDrawBarDraw(*bar);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscdraw.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscdrawbarsave_ PETSCDRAWBARSAVE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscdrawbarsave_ petscdrawbarsave
#endif
PETSC_EXTERN void petscdrawbarsave_(PetscDrawBar *bar, PetscErrorCode *ierr)
{
  *ierr = PetscDrawBarSave(*bar);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscdraw.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscdrawbarsetcolor_ PETSCDRAWBARSETCOLOR
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscdrawbarsetcolor_ petscdrawbarsetcolor
#endif
PETSC_EXTERN void petscdrawbarsetcolor_(PetscDrawBar *bar, int *color, PetscErrorCode *ierr)
{
  *ierr = PetscDrawBarSetColor(*bar, *color);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscdraw.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscdrawbarsort_ PETSCDRAWBARSORT
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscdrawbarsort_ petscdrawbarsort
#endif
PETSC_EXTERN void petscdrawbarsort_(PetscDrawBar *bar, PetscBool *sort, PetscReal *tolerance, PetscErrorCode *ierr)
{
  *ierr = PetscDrawBarSort(*bar, *sort ? PETSC_TRUE : PETSC_FALSE, *tolerance);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscdraw.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscdrawbarsetlimits_ PETSCDRAWBARSETLIMITS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscdrawbarsetlimits_ petscdrawbarsetlimits
#endif
PETSC_EXTERN void petscdrawbarsetlimits_(PetscDrawBar *bar, PetscReal *y_min, PetscReal *y_max, PetscErrorCode *ierr)
{
  *ierr = PetscDrawBarSetLimits(*bar, *y_min, *y_max);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscdraw.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscdrawbargetaxis_ PETSCDRAWBARGETAXIS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscdrawbargetaxis_ petscdrawbargetaxis
#endif
PETSC_EXTERN void petscdrawbargetaxis_(PetscDrawBar *bar, PetscDrawAxis *axis, PetscErrorCode *ierr)
{
  PetscBool null_axis = !*(void**) axis ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(axis);
  *ierr = PetscDrawBarGetAxis(*bar, axis);
  if (*ierr) return;
  if (! null_axis && !*(void**) axis) *(void **) axis = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscdraw.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscdrawbargetdraw_ PETSCDRAWBARGETDRAW
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscdrawbargetdraw_ petscdrawbargetdraw
#endif
PETSC_EXTERN void petscdrawbargetdraw_(PetscDrawBar *bar, PetscDraw *draw, PetscErrorCode *ierr)
{
  PetscBool null_draw = !*(void**) draw ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(draw);
  *ierr = PetscDrawBarGetDraw(*bar, draw);
  if (*ierr) return;
  if (! null_draw && !*(void**) draw) *(void **) draw = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscdraw.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscdrawbarsetfromoptions_ PETSCDRAWBARSETFROMOPTIONS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscdrawbarsetfromoptions_ petscdrawbarsetfromoptions
#endif
PETSC_EXTERN void petscdrawbarsetfromoptions_(PetscDrawBar *bar, PetscErrorCode *ierr)
{
  *ierr = PetscDrawBarSetFromOptions(*bar);
  if (*ierr) return;
}
