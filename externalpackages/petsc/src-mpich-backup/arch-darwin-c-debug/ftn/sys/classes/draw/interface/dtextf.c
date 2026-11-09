#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscdraw.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscdrawstring_ PETSCDRAWSTRING
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscdrawstring_ petscdrawstring
#endif
PETSC_EXTERN void petscdrawstring_(PetscDraw *draw, PetscReal *xl, PetscReal *yl, int *cl, char text[], PetscErrorCode *ierr, PETSC_FORTRAN_CHARLEN_T l_text)
{
  char* c_text;
  FIXCHAR(text, l_text, c_text);
  *ierr = PetscDrawString(*draw, *xl, *yl, *cl, c_text);
  if (*ierr) return;
  FREECHAR(text, c_text);
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscdraw.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscdrawstringvertical_ PETSCDRAWSTRINGVERTICAL
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscdrawstringvertical_ petscdrawstringvertical
#endif
PETSC_EXTERN void petscdrawstringvertical_(PetscDraw *draw, PetscReal *xl, PetscReal *yl, int *cl, char text[], PetscErrorCode *ierr, PETSC_FORTRAN_CHARLEN_T l_text)
{
  char* c_text;
  FIXCHAR(text, l_text, c_text);
  *ierr = PetscDrawStringVertical(*draw, *xl, *yl, *cl, c_text);
  if (*ierr) return;
  FREECHAR(text, c_text);
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscdraw.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscdrawstringcentered_ PETSCDRAWSTRINGCENTERED
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscdrawstringcentered_ petscdrawstringcentered
#endif
PETSC_EXTERN void petscdrawstringcentered_(PetscDraw *draw, PetscReal *xc, PetscReal *yl, int *cl, char text[], PetscErrorCode *ierr, PETSC_FORTRAN_CHARLEN_T l_text)
{
  char* c_text;
  FIXCHAR(text, l_text, c_text);
  *ierr = PetscDrawStringCentered(*draw, *xc, *yl, *cl, c_text);
  if (*ierr) return;
  FREECHAR(text, c_text);
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscdraw.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscdrawstringboxed_ PETSCDRAWSTRINGBOXED
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscdrawstringboxed_ petscdrawstringboxed
#endif
PETSC_EXTERN void petscdrawstringboxed_(PetscDraw *draw, PetscReal *sxl, PetscReal *syl, int *sc, int *bc, char text[], PetscReal *w, PetscReal *h, PetscErrorCode *ierr, PETSC_FORTRAN_CHARLEN_T l_text)
{
  char* c_text;
  FIXCHAR(text, l_text, c_text);
  CHKFORTRANNULLREAL(w);
  CHKFORTRANNULLREAL(h);
  *ierr = PetscDrawStringBoxed(*draw, *sxl, *syl, *sc, *bc, c_text, w, h);
  if (*ierr) return;
  FREECHAR(text, c_text);
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscdraw.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscdrawstringsetsize_ PETSCDRAWSTRINGSETSIZE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscdrawstringsetsize_ petscdrawstringsetsize
#endif
PETSC_EXTERN void petscdrawstringsetsize_(PetscDraw *draw, PetscReal *width, PetscReal *height, PetscErrorCode *ierr)
{
  *ierr = PetscDrawStringSetSize(*draw, *width, *height);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscdraw.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscdrawstringgetsize_ PETSCDRAWSTRINGGETSIZE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscdrawstringgetsize_ petscdrawstringgetsize
#endif
PETSC_EXTERN void petscdrawstringgetsize_(PetscDraw *draw, PetscReal *width, PetscReal *height, PetscErrorCode *ierr)
{
  CHKFORTRANNULLREAL(width);
  CHKFORTRANNULLREAL(height);
  *ierr = PetscDrawStringGetSize(*draw, width, height);
  if (*ierr) return;
}
