#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscdraw.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscviewerdrawgetdraw_ PETSCVIEWERDRAWGETDRAW
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscviewerdrawgetdraw_ petscviewerdrawgetdraw
#endif
PETSC_EXTERN void petscviewerdrawgetdraw_(PetscViewer *viewer, PetscInt *windownumber, PetscDraw *draw, PetscErrorCode *ierr)
{
  PetscBool null_draw = !*(void**) draw ? PETSC_TRUE : PETSC_FALSE;
  PetscViewer v_viewer = PetscPatchDefaultViewers(viewer);
  CHKFORTRANNULLOBJECT(draw);
  *ierr = PetscViewerDrawGetDraw(v_viewer, *windownumber, draw);
  if (*ierr) return;
  if (! null_draw && !*(void**) draw) *(void **) draw = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscdraw.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscviewerdrawgetdrawlg_ PETSCVIEWERDRAWGETDRAWLG
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscviewerdrawgetdrawlg_ petscviewerdrawgetdrawlg
#endif
PETSC_EXTERN void petscviewerdrawgetdrawlg_(PetscViewer *viewer, PetscInt *windownumber, PetscDrawLG *drawlg, PetscErrorCode *ierr)
{
  PetscBool null_drawlg = !*(void**) drawlg ? PETSC_TRUE : PETSC_FALSE;
  PetscViewer v_viewer = PetscPatchDefaultViewers(viewer);
  CHKFORTRANNULLOBJECT(drawlg);
  *ierr = PetscViewerDrawGetDrawLG(v_viewer, *windownumber, drawlg);
  if (*ierr) return;
  if (! null_drawlg && !*(void**) drawlg) *(void **) drawlg = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscdraw.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscviewerdrawgetdrawaxis_ PETSCVIEWERDRAWGETDRAWAXIS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscviewerdrawgetdrawaxis_ petscviewerdrawgetdrawaxis
#endif
PETSC_EXTERN void petscviewerdrawgetdrawaxis_(PetscViewer *viewer, PetscInt *windownumber, PetscDrawAxis *drawaxis, PetscErrorCode *ierr)
{
  PetscBool null_drawaxis = !*(void**) drawaxis ? PETSC_TRUE : PETSC_FALSE;
  PetscViewer v_viewer = PetscPatchDefaultViewers(viewer);
  CHKFORTRANNULLOBJECT(drawaxis);
  *ierr = PetscViewerDrawGetDrawAxis(v_viewer, *windownumber, drawaxis);
  if (*ierr) return;
  if (! null_drawaxis && !*(void**) drawaxis) *(void **) drawaxis = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscviewer.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscviewerdrawsetdrawtype_ PETSCVIEWERDRAWSETDRAWTYPE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscviewerdrawsetdrawtype_ petscviewerdrawsetdrawtype
#endif
PETSC_EXTERN void petscviewerdrawsetdrawtype_(PetscViewer *v, char *drawtype, PetscErrorCode *ierr, PETSC_FORTRAN_CHARLEN_T l_drawtype)
{
  char* c_drawtype;
  FIXCHAR(drawtype, l_drawtype, c_drawtype);
  PetscViewer v_v = PetscPatchDefaultViewers(v);
  *ierr = PetscViewerDrawSetDrawType(v_v, c_drawtype);
  if (*ierr) return;
  FREECHAR(drawtype, c_drawtype);
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscdraw.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscviewerdrawgetdrawtype_ PETSCVIEWERDRAWGETDRAWTYPE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscviewerdrawgetdrawtype_ petscviewerdrawgetdrawtype
#endif
PETSC_EXTERN void petscviewerdrawgetdrawtype_(PetscViewer *v, char *drawtype, PetscErrorCode *ierr, PETSC_FORTRAN_CHARLEN_T l_drawtype)
{
  char* c_drawtype = PETSC_NULLPTR;
  PetscViewer v_v = PetscPatchDefaultViewers(v);
  *ierr = PetscViewerDrawGetDrawType(v_v, (const char **)&c_drawtype);
  if (*ierr) return;
  *ierr = PetscStrncpy((char *)drawtype, c_drawtype, l_drawtype);
  if (*ierr) return;
  FIXRETURNCHAR(PETSC_TRUE, drawtype, l_drawtype);
}
