#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscviewer.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscviewerasciigetstderr_ PETSCVIEWERASCIIGETSTDERR
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscviewerasciigetstderr_ petscviewerasciigetstderr
#endif
PETSC_EXTERN void petscviewerasciigetstderr_(MPI_Fint *comm, PetscViewer *viewer, PetscErrorCode *ierr)
{
  PetscBool null_viewer = !*(void**) viewer ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(viewer);
  *ierr = PetscViewerASCIIGetStderr(MPI_Comm_f2c(*(comm)), viewer);
  if (*ierr) return;
  if (! null_viewer && !*(void**) viewer) *(void **) viewer = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscviewer.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscviewerasciiopen_ PETSCVIEWERASCIIOPEN
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscviewerasciiopen_ petscviewerasciiopen
#endif
PETSC_EXTERN void petscviewerasciiopen_(MPI_Fint *comm, char name[], PetscViewer *viewer, PetscErrorCode *ierr, PETSC_FORTRAN_CHARLEN_T l_name)
{
  PetscBool null_viewer = !*(void**) viewer ? PETSC_TRUE : PETSC_FALSE;
  char* c_name;
  FIXCHAR(name, l_name, c_name);
  CHKFORTRANNULLOBJECT(viewer);
  *ierr = PetscViewerASCIIOpen(MPI_Comm_f2c(*(comm)), c_name, viewer);
  if (*ierr) return;
  FREECHAR(name, c_name);
  if (! null_viewer && !*(void**) viewer) *(void **) viewer = (void *)-2;
}
