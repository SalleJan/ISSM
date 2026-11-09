#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscviewer.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscviewersdestroy_ PETSCVIEWERSDESTROY
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscviewersdestroy_ petscviewersdestroy
#endif
PETSC_EXTERN void petscviewersdestroy_(PetscViewers *v, PetscErrorCode *ierr)
{
  PETSC_FORTRAN_OBJECT_F_DESTROYED_TO_C_NULL(v);
  PetscBool null_v = !*(void**) v ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(v);
  *ierr = PetscViewersDestroy(v);
  if (*ierr) return;
  if (! null_v && !*(void**) v) *(void **) v = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscviewer.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscviewerscreate_ PETSCVIEWERSCREATE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscviewerscreate_ petscviewerscreate
#endif
PETSC_EXTERN void petscviewerscreate_(MPI_Fint *comm, PetscViewers *v, PetscErrorCode *ierr)
{
  PetscBool null_v = !*(void**) v ? PETSC_TRUE : PETSC_FALSE;
  PETSC_FORTRAN_OBJECT_CREATE(v);
  CHKFORTRANNULLOBJECT(v);
  *ierr = PetscViewersCreate(MPI_Comm_f2c(*(comm)), v);
  if (*ierr) return;
  if (! null_v && !*(void**) v) *(void **) v = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscviewer.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscviewersgetviewer_ PETSCVIEWERSGETVIEWER
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscviewersgetviewer_ petscviewersgetviewer
#endif
PETSC_EXTERN void petscviewersgetviewer_(PetscViewers *viewers, PetscInt *n, PetscViewer *viewer, PetscErrorCode *ierr)
{
  PetscBool null_viewer = !*(void**) viewer ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(viewer);
  *ierr = PetscViewersGetViewer(*viewers, *n, viewer);
  if (*ierr) return;
  if (! null_viewer && !*(void**) viewer) *(void **) viewer = (void *)-2;
}
