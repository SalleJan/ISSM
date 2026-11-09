#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscviewer.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscviewerpushformat_ PETSCVIEWERPUSHFORMAT
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscviewerpushformat_ petscviewerpushformat
#endif
PETSC_EXTERN void petscviewerpushformat_(PetscViewer *viewer, PetscViewerFormat *format, PetscErrorCode *ierr)
{
  PetscViewer v_viewer = PetscPatchDefaultViewers(viewer);
  *ierr = PetscViewerPushFormat(v_viewer, *format);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscviewer.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscviewerpopformat_ PETSCVIEWERPOPFORMAT
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscviewerpopformat_ petscviewerpopformat
#endif
PETSC_EXTERN void petscviewerpopformat_(PetscViewer *viewer, PetscErrorCode *ierr)
{
  PetscViewer v_viewer = PetscPatchDefaultViewers(viewer);
  *ierr = PetscViewerPopFormat(v_viewer);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscviewer.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscviewergetformat_ PETSCVIEWERGETFORMAT
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscviewergetformat_ petscviewergetformat
#endif
PETSC_EXTERN void petscviewergetformat_(PetscViewer *viewer, PetscViewerFormat *format, PetscErrorCode *ierr)
{
  PetscViewer v_viewer = PetscPatchDefaultViewers(viewer);
  *ierr = PetscViewerGetFormat(v_viewer, format);
  if (*ierr) return;
}
