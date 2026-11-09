#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscviewer.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscviewervusetvecseen_ PETSCVIEWERVUSETVECSEEN
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscviewervusetvecseen_ petscviewervusetvecseen
#endif
PETSC_EXTERN void petscviewervusetvecseen_(PetscViewer *viewer, PetscBool *vecSeen, PetscErrorCode *ierr)
{
  PetscViewer v_viewer = PetscPatchDefaultViewers(viewer);
  *ierr = PetscViewerVUSetVecSeen(v_viewer, *vecSeen ? PETSC_TRUE : PETSC_FALSE);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscviewer.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscviewervugetvecseen_ PETSCVIEWERVUGETVECSEEN
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscviewervugetvecseen_ petscviewervugetvecseen
#endif
PETSC_EXTERN void petscviewervugetvecseen_(PetscViewer *viewer, PetscBool *vecSeen, PetscErrorCode *ierr)
{
  PetscViewer v_viewer = PetscPatchDefaultViewers(viewer);
  CHKFORTRANNULLBOOL(vecSeen);
  *ierr = PetscViewerVUGetVecSeen(v_viewer, vecSeen);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscviewer.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscviewervuflushdeferred_ PETSCVIEWERVUFLUSHDEFERRED
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscviewervuflushdeferred_ petscviewervuflushdeferred
#endif
PETSC_EXTERN void petscviewervuflushdeferred_(PetscViewer *viewer, PetscErrorCode *ierr)
{
  PetscViewer v_viewer = PetscPatchDefaultViewers(viewer);
  *ierr = PetscViewerVUFlushDeferred(v_viewer);
  if (*ierr) return;
}
