#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscdraw.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscdrawaxiscreate_ PETSCDRAWAXISCREATE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscdrawaxiscreate_ petscdrawaxiscreate
#endif
PETSC_EXTERN void petscdrawaxiscreate_(PetscDraw *draw, PetscDrawAxis *axis, PetscErrorCode *ierr)
{
  PetscBool null_axis = !*(void**) axis ? PETSC_TRUE : PETSC_FALSE;
  PETSC_FORTRAN_OBJECT_CREATE(axis);
  CHKFORTRANNULLOBJECT(axis);
  *ierr = PetscDrawAxisCreate(*draw, axis);
  if (*ierr) return;
  if (! null_axis && !*(void**) axis) *(void **) axis = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscdraw.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscdrawaxisdestroy_ PETSCDRAWAXISDESTROY
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscdrawaxisdestroy_ petscdrawaxisdestroy
#endif
PETSC_EXTERN void petscdrawaxisdestroy_(PetscDrawAxis *axis, PetscErrorCode *ierr)
{
  PETSC_FORTRAN_OBJECT_F_DESTROYED_TO_C_NULL(axis);
  PetscBool null_axis = !*(void**) axis ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(axis);
  *ierr = PetscDrawAxisDestroy(axis);
  if (*ierr) return;
  if (! null_axis && !*(void**) axis) *(void **) axis = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscdraw.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscdrawaxissetcolors_ PETSCDRAWAXISSETCOLORS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscdrawaxissetcolors_ petscdrawaxissetcolors
#endif
PETSC_EXTERN void petscdrawaxissetcolors_(PetscDrawAxis *axis, int *ac, int *tc, int *cc, PetscErrorCode *ierr)
{
  *ierr = PetscDrawAxisSetColors(*axis, *ac, *tc, *cc);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscdraw.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscdrawaxissetlabels_ PETSCDRAWAXISSETLABELS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscdrawaxissetlabels_ petscdrawaxissetlabels
#endif
PETSC_EXTERN void petscdrawaxissetlabels_(PetscDrawAxis *axis, char top[], char xlabel[], char ylabel[], PetscErrorCode *ierr, PETSC_FORTRAN_CHARLEN_T l_top, PETSC_FORTRAN_CHARLEN_T l_xlabel, PETSC_FORTRAN_CHARLEN_T l_ylabel)
{
  char* c_top;
  FIXCHAR(top, l_top, c_top);
  char* c_xlabel;
  FIXCHAR(xlabel, l_xlabel, c_xlabel);
  char* c_ylabel;
  FIXCHAR(ylabel, l_ylabel, c_ylabel);
  *ierr = PetscDrawAxisSetLabels(*axis, c_top, c_xlabel, c_ylabel);
  if (*ierr) return;
  FREECHAR(top, c_top);
  FREECHAR(xlabel, c_xlabel);
  FREECHAR(ylabel, c_ylabel);
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscdraw.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscdrawaxissetlimits_ PETSCDRAWAXISSETLIMITS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscdrawaxissetlimits_ petscdrawaxissetlimits
#endif
PETSC_EXTERN void petscdrawaxissetlimits_(PetscDrawAxis *axis, PetscReal *xmin, PetscReal *xmax, PetscReal *ymin, PetscReal *ymax, PetscErrorCode *ierr)
{
  *ierr = PetscDrawAxisSetLimits(*axis, *xmin, *xmax, *ymin, *ymax);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscdraw.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscdrawaxisgetlimits_ PETSCDRAWAXISGETLIMITS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscdrawaxisgetlimits_ petscdrawaxisgetlimits
#endif
PETSC_EXTERN void petscdrawaxisgetlimits_(PetscDrawAxis *axis, PetscReal *xmin, PetscReal *xmax, PetscReal *ymin, PetscReal *ymax, PetscErrorCode *ierr)
{
  CHKFORTRANNULLREAL(xmin);
  CHKFORTRANNULLREAL(xmax);
  CHKFORTRANNULLREAL(ymin);
  CHKFORTRANNULLREAL(ymax);
  *ierr = PetscDrawAxisGetLimits(*axis, xmin, xmax, ymin, ymax);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscdraw.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscdrawaxissetholdlimits_ PETSCDRAWAXISSETHOLDLIMITS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscdrawaxissetholdlimits_ petscdrawaxissetholdlimits
#endif
PETSC_EXTERN void petscdrawaxissetholdlimits_(PetscDrawAxis *axis, PetscBool *hold, PetscErrorCode *ierr)
{
  *ierr = PetscDrawAxisSetHoldLimits(*axis, *hold ? PETSC_TRUE : PETSC_FALSE);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscdraw.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscdrawaxisdraw_ PETSCDRAWAXISDRAW
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscdrawaxisdraw_ petscdrawaxisdraw
#endif
PETSC_EXTERN void petscdrawaxisdraw_(PetscDrawAxis *axis, PetscErrorCode *ierr)
{
  *ierr = PetscDrawAxisDraw(*axis);
  if (*ierr) return;
}
