#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscdraw.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscdrawfinalizepackage_ PETSCDRAWFINALIZEPACKAGE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscdrawfinalizepackage_ petscdrawfinalizepackage
#endif
PETSC_EXTERN void petscdrawfinalizepackage_(PetscErrorCode *ierr)
{
  *ierr = PetscDrawFinalizePackage();
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscdraw.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscdrawinitializepackage_ PETSCDRAWINITIALIZEPACKAGE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscdrawinitializepackage_ petscdrawinitializepackage
#endif
PETSC_EXTERN void petscdrawinitializepackage_(PetscErrorCode *ierr)
{
  *ierr = PetscDrawInitializePackage();
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscdraw.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscdrawresizewindow_ PETSCDRAWRESIZEWINDOW
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscdrawresizewindow_ petscdrawresizewindow
#endif
PETSC_EXTERN void petscdrawresizewindow_(PetscDraw *draw, int *w, int *h, PetscErrorCode *ierr)
{
  *ierr = PetscDrawResizeWindow(*draw, *w, *h);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscdraw.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscdrawgetwindowsize_ PETSCDRAWGETWINDOWSIZE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscdrawgetwindowsize_ petscdrawgetwindowsize
#endif
PETSC_EXTERN void petscdrawgetwindowsize_(PetscDraw *draw, int *w, int *h, PetscErrorCode *ierr)
{
  *ierr = PetscDrawGetWindowSize(*draw, w, h);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscdraw.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscdrawcheckresizedwindow_ PETSCDRAWCHECKRESIZEDWINDOW
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscdrawcheckresizedwindow_ petscdrawcheckresizedwindow
#endif
PETSC_EXTERN void petscdrawcheckresizedwindow_(PetscDraw *draw, PetscErrorCode *ierr)
{
  *ierr = PetscDrawCheckResizedWindow(*draw);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscdraw.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscdrawgettitle_ PETSCDRAWGETTITLE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscdrawgettitle_ petscdrawgettitle
#endif
PETSC_EXTERN void petscdrawgettitle_(PetscDraw *draw, char title[], PetscErrorCode *ierr, PETSC_FORTRAN_CHARLEN_T l_title)
{
  char* c_title = PETSC_NULLPTR;
  *ierr = PetscDrawGetTitle(*draw, (const char **)&c_title);
  if (*ierr) return;
  *ierr = PetscStrncpy((char *)title, c_title, l_title);
  if (*ierr) return;
  FIXRETURNCHAR(PETSC_TRUE, title, l_title);
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscdraw.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscdrawsettitle_ PETSCDRAWSETTITLE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscdrawsettitle_ petscdrawsettitle
#endif
PETSC_EXTERN void petscdrawsettitle_(PetscDraw *draw, char title[], PetscErrorCode *ierr, PETSC_FORTRAN_CHARLEN_T l_title)
{
  char* c_title;
  FIXCHAR(title, l_title, c_title);
  *ierr = PetscDrawSetTitle(*draw, c_title);
  if (*ierr) return;
  FREECHAR(title, c_title);
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscdraw.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscdrawappendtitle_ PETSCDRAWAPPENDTITLE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscdrawappendtitle_ petscdrawappendtitle
#endif
PETSC_EXTERN void petscdrawappendtitle_(PetscDraw *draw, char title[], PetscErrorCode *ierr, PETSC_FORTRAN_CHARLEN_T l_title)
{
  char* c_title;
  FIXCHAR(title, l_title, c_title);
  *ierr = PetscDrawAppendTitle(*draw, c_title);
  if (*ierr) return;
  FREECHAR(title, c_title);
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscdraw.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscdrawdestroy_ PETSCDRAWDESTROY
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscdrawdestroy_ petscdrawdestroy
#endif
PETSC_EXTERN void petscdrawdestroy_(PetscDraw *draw, PetscErrorCode *ierr)
{
  PETSC_FORTRAN_OBJECT_F_DESTROYED_TO_C_NULL(draw);
  PetscBool null_draw = !*(void**) draw ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(draw);
  *ierr = PetscDrawDestroy(draw);
  if (*ierr) return;
  if (! null_draw && !*(void**) draw) *(void **) draw = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscdraw.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscdrawgetpopup_ PETSCDRAWGETPOPUP
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscdrawgetpopup_ petscdrawgetpopup
#endif
PETSC_EXTERN void petscdrawgetpopup_(PetscDraw *draw, PetscDraw *popup, PetscErrorCode *ierr)
{
  PetscBool null_popup = !*(void**) popup ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(popup);
  *ierr = PetscDrawGetPopup(*draw, popup);
  if (*ierr) return;
  if (! null_popup && !*(void**) popup) *(void **) popup = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscdraw.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscdrawsetdisplay_ PETSCDRAWSETDISPLAY
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscdrawsetdisplay_ petscdrawsetdisplay
#endif
PETSC_EXTERN void petscdrawsetdisplay_(PetscDraw *draw, char display[], PetscErrorCode *ierr, PETSC_FORTRAN_CHARLEN_T l_display)
{
  char* c_display;
  FIXCHAR(display, l_display, c_display);
  *ierr = PetscDrawSetDisplay(*draw, c_display);
  if (*ierr) return;
  FREECHAR(display, c_display);
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscdraw.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscdrawsetdoublebuffer_ PETSCDRAWSETDOUBLEBUFFER
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscdrawsetdoublebuffer_ petscdrawsetdoublebuffer
#endif
PETSC_EXTERN void petscdrawsetdoublebuffer_(PetscDraw *draw, PetscErrorCode *ierr)
{
  *ierr = PetscDrawSetDoubleBuffer(*draw);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscdraw.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscdrawgetsingleton_ PETSCDRAWGETSINGLETON
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscdrawgetsingleton_ petscdrawgetsingleton
#endif
PETSC_EXTERN void petscdrawgetsingleton_(PetscDraw *draw, PetscDraw *sdraw, PetscErrorCode *ierr)
{
  PetscBool null_sdraw = !*(void**) sdraw ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(sdraw);
  *ierr = PetscDrawGetSingleton(*draw, sdraw);
  if (*ierr) return;
  if (! null_sdraw && !*(void**) sdraw) *(void **) sdraw = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscdraw.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscdrawrestoresingleton_ PETSCDRAWRESTORESINGLETON
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscdrawrestoresingleton_ petscdrawrestoresingleton
#endif
PETSC_EXTERN void petscdrawrestoresingleton_(PetscDraw *draw, PetscDraw *sdraw, PetscErrorCode *ierr)
{
  PetscBool null_sdraw = !*(void**) sdraw ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(sdraw);
  *ierr = PetscDrawRestoreSingleton(*draw, sdraw);
  if (*ierr) return;
  if (! null_sdraw && !*(void**) sdraw) *(void **) sdraw = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscdraw.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscdrawsetvisible_ PETSCDRAWSETVISIBLE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscdrawsetvisible_ petscdrawsetvisible
#endif
PETSC_EXTERN void petscdrawsetvisible_(PetscDraw *draw, PetscBool *visible, PetscErrorCode *ierr)
{
  *ierr = PetscDrawSetVisible(*draw, *visible ? PETSC_TRUE : PETSC_FALSE);
  if (*ierr) return;
}
