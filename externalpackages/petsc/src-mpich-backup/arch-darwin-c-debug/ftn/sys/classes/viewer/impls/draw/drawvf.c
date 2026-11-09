#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscdraw.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscviewerdrawbaseadd_ PETSCVIEWERDRAWBASEADD
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscviewerdrawbaseadd_ petscviewerdrawbaseadd
#endif
PETSC_EXTERN void petscviewerdrawbaseadd_(PetscViewer *viewer, PetscInt *windownumber, PetscErrorCode *ierr)
{
  PetscViewer v_viewer = PetscPatchDefaultViewers(viewer);
  *ierr = PetscViewerDrawBaseAdd(v_viewer, *windownumber);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscdraw.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscviewerdrawbaseset_ PETSCVIEWERDRAWBASESET
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscviewerdrawbaseset_ petscviewerdrawbaseset
#endif
PETSC_EXTERN void petscviewerdrawbaseset_(PetscViewer *viewer, PetscInt *windownumber, PetscErrorCode *ierr)
{
  PetscViewer v_viewer = PetscPatchDefaultViewers(viewer);
  *ierr = PetscViewerDrawBaseSet(v_viewer, *windownumber);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscviewer.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscviewerdrawresize_ PETSCVIEWERDRAWRESIZE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscviewerdrawresize_ petscviewerdrawresize
#endif
PETSC_EXTERN void petscviewerdrawresize_(PetscViewer *v, int *w, int *h, PetscErrorCode *ierr)
{
  PetscViewer v_v = PetscPatchDefaultViewers(v);
  *ierr = PetscViewerDrawResize(v_v, *w, *h);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscviewer.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscviewerdrawsetinfo_ PETSCVIEWERDRAWSETINFO
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscviewerdrawsetinfo_ petscviewerdrawsetinfo
#endif
PETSC_EXTERN void petscviewerdrawsetinfo_(PetscViewer *v, char display[], char title[], int *x, int *y, int *w, int *h, PetscErrorCode *ierr, PETSC_FORTRAN_CHARLEN_T l_display, PETSC_FORTRAN_CHARLEN_T l_title)
{
  char* c_display;
  FIXCHAR(display, l_display, c_display);
  char* c_title;
  FIXCHAR(title, l_title, c_title);
  PetscViewer v_v = PetscPatchDefaultViewers(v);
  *ierr = PetscViewerDrawSetInfo(v_v, c_display, c_title, *x, *y, *w, *h);
  if (*ierr) return;
  FREECHAR(display, c_display);
  FREECHAR(title, c_title);
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscdraw.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscviewerdrawsettitle_ PETSCVIEWERDRAWSETTITLE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscviewerdrawsettitle_ petscviewerdrawsettitle
#endif
PETSC_EXTERN void petscviewerdrawsettitle_(PetscViewer *v, char title[], PetscErrorCode *ierr, PETSC_FORTRAN_CHARLEN_T l_title)
{
  char* c_title;
  FIXCHAR(title, l_title, c_title);
  PetscViewer v_v = PetscPatchDefaultViewers(v);
  *ierr = PetscViewerDrawSetTitle(v_v, c_title);
  if (*ierr) return;
  FREECHAR(title, c_title);
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscdraw.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscviewerdrawgettitle_ PETSCVIEWERDRAWGETTITLE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscviewerdrawgettitle_ petscviewerdrawgettitle
#endif
PETSC_EXTERN void petscviewerdrawgettitle_(PetscViewer *v, char title[], PetscErrorCode *ierr, PETSC_FORTRAN_CHARLEN_T l_title)
{
  char* c_title = PETSC_NULLPTR;
  PetscViewer v_v = PetscPatchDefaultViewers(v);
  *ierr = PetscViewerDrawGetTitle(v_v, (const char **)&c_title);
  if (*ierr) return;
  *ierr = PetscStrncpy((char *)title, c_title, l_title);
  if (*ierr) return;
  FIXRETURNCHAR(PETSC_TRUE, title, l_title);
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscviewer.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscviewerdrawopen_ PETSCVIEWERDRAWOPEN
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscviewerdrawopen_ petscviewerdrawopen
#endif
PETSC_EXTERN void petscviewerdrawopen_(MPI_Fint *comm, char display[], char title[], int *x, int *y, int *w, int *h, PetscViewer *viewer, PetscErrorCode *ierr, PETSC_FORTRAN_CHARLEN_T l_display, PETSC_FORTRAN_CHARLEN_T l_title)
{
  PetscBool null_viewer = !*(void**) viewer ? PETSC_TRUE : PETSC_FALSE;
  char* c_display;
  FIXCHAR(display, l_display, c_display);
  char* c_title;
  FIXCHAR(title, l_title, c_title);
  CHKFORTRANNULLOBJECT(viewer);
  *ierr = PetscViewerDrawOpen(MPI_Comm_f2c(*(comm)), c_display, c_title, *x, *y, *w, *h, viewer);
  if (*ierr) return;
  FREECHAR(display, c_display);
  FREECHAR(title, c_title);
  if (! null_viewer && !*(void**) viewer) *(void **) viewer = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscviewer.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscviewerdrawclear_ PETSCVIEWERDRAWCLEAR
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscviewerdrawclear_ petscviewerdrawclear
#endif
PETSC_EXTERN void petscviewerdrawclear_(PetscViewer *viewer, PetscErrorCode *ierr)
{
  PetscViewer v_viewer = PetscPatchDefaultViewers(viewer);
  *ierr = PetscViewerDrawClear(v_viewer);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscviewer.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscviewerdrawgetpause_ PETSCVIEWERDRAWGETPAUSE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscviewerdrawgetpause_ petscviewerdrawgetpause
#endif
PETSC_EXTERN void petscviewerdrawgetpause_(PetscViewer *viewer, PetscReal *pause, PetscErrorCode *ierr)
{
  PetscViewer v_viewer = PetscPatchDefaultViewers(viewer);
  CHKFORTRANNULLREAL(pause);
  *ierr = PetscViewerDrawGetPause(v_viewer, pause);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscviewer.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscviewerdrawsetpause_ PETSCVIEWERDRAWSETPAUSE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscviewerdrawsetpause_ petscviewerdrawsetpause
#endif
PETSC_EXTERN void petscviewerdrawsetpause_(PetscViewer *viewer, PetscReal *pause, PetscErrorCode *ierr)
{
  PetscViewer v_viewer = PetscPatchDefaultViewers(viewer);
  *ierr = PetscViewerDrawSetPause(v_viewer, *pause);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscviewer.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscviewerdrawsethold_ PETSCVIEWERDRAWSETHOLD
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscviewerdrawsethold_ petscviewerdrawsethold
#endif
PETSC_EXTERN void petscviewerdrawsethold_(PetscViewer *viewer, PetscBool *hold, PetscErrorCode *ierr)
{
  PetscViewer v_viewer = PetscPatchDefaultViewers(viewer);
  *ierr = PetscViewerDrawSetHold(v_viewer, *hold ? PETSC_TRUE : PETSC_FALSE);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscviewer.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscviewerdrawgethold_ PETSCVIEWERDRAWGETHOLD
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscviewerdrawgethold_ petscviewerdrawgethold
#endif
PETSC_EXTERN void petscviewerdrawgethold_(PetscViewer *viewer, PetscBool *hold, PetscErrorCode *ierr)
{
  PetscViewer v_viewer = PetscPatchDefaultViewers(viewer);
  CHKFORTRANNULLBOOL(hold);
  *ierr = PetscViewerDrawGetHold(v_viewer, hold);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscviewer.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscviewerdrawsetbounds_ PETSCVIEWERDRAWSETBOUNDS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscviewerdrawsetbounds_ petscviewerdrawsetbounds
#endif
PETSC_EXTERN void petscviewerdrawsetbounds_(PetscViewer *viewer, PetscInt *nbounds, const PetscReal *bounds, PetscErrorCode *ierr)
{
  PetscViewer v_viewer = PetscPatchDefaultViewers(viewer);
  CHKFORTRANNULLREAL(bounds);
  *ierr = PetscViewerDrawSetBounds(v_viewer, *nbounds, bounds);
  if (*ierr) return;
}
