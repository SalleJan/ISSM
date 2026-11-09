#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscviewer.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscviewerglvissetprecision_ PETSCVIEWERGLVISSETPRECISION
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscviewerglvissetprecision_ petscviewerglvissetprecision
#endif
PETSC_EXTERN void petscviewerglvissetprecision_(PetscViewer *viewer, PetscInt *prec, PetscErrorCode *ierr)
{
  PetscViewer v_viewer = PetscPatchDefaultViewers(viewer);
  *ierr = PetscViewerGLVisSetPrecision(v_viewer, *prec);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscviewer.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscviewerglvissetsnapid_ PETSCVIEWERGLVISSETSNAPID
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscviewerglvissetsnapid_ petscviewerglvissetsnapid
#endif
PETSC_EXTERN void petscviewerglvissetsnapid_(PetscViewer *viewer, PetscInt *id, PetscErrorCode *ierr)
{
  PetscViewer v_viewer = PetscPatchDefaultViewers(viewer);
  *ierr = PetscViewerGLVisSetSnapId(v_viewer, *id);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscviewer.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscviewerglvisopen_ PETSCVIEWERGLVISOPEN
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscviewerglvisopen_ petscviewerglvisopen
#endif
PETSC_EXTERN void petscviewerglvisopen_(MPI_Fint *comm, PetscViewerGLVisType *type, char name[], PetscInt *port, PetscViewer *viewer, PetscErrorCode *ierr, PETSC_FORTRAN_CHARLEN_T l_name)
{
  PetscBool null_viewer = !*(void**) viewer ? PETSC_TRUE : PETSC_FALSE;
  char* c_name;
  FIXCHAR(name, l_name, c_name);
  CHKFORTRANNULLOBJECT(viewer);
  *ierr = PetscViewerGLVisOpen(MPI_Comm_f2c(*(comm)), *type, c_name, *port, viewer);
  if (*ierr) return;
  FREECHAR(name, c_name);
  if (! null_viewer && !*(void**) viewer) *(void **) viewer = (void *)-2;
}
