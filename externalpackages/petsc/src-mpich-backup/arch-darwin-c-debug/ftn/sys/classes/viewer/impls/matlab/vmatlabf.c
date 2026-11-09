#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscviewer.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscviewermatlabputarray_ PETSCVIEWERMATLABPUTARRAY
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscviewermatlabputarray_ petscviewermatlabputarray
#endif
PETSC_EXTERN void petscviewermatlabputarray_(PetscViewer *mfile, int *m, int *n, const PetscScalar *array, char name[], PetscErrorCode *ierr, PETSC_FORTRAN_CHARLEN_T l_name)
{
  char* c_name;
  FIXCHAR(name, l_name, c_name);
  PetscViewer v_mfile = PetscPatchDefaultViewers(mfile);
  CHKFORTRANNULLSCALAR(array);
  *ierr = PetscViewerMatlabPutArray(v_mfile, *m, *n, array, c_name);
  if (*ierr) return;
  FREECHAR(name, c_name);
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscviewer.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscviewermatlabputvariable_ PETSCVIEWERMATLABPUTVARIABLE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscviewermatlabputvariable_ petscviewermatlabputvariable
#endif
PETSC_EXTERN void petscviewermatlabputvariable_(PetscViewer *viewer, char name[], void *mat, PetscErrorCode *ierr, PETSC_FORTRAN_CHARLEN_T l_name)
{
  char* c_name;
  FIXCHAR(name, l_name, c_name);
  PetscViewer v_viewer = PetscPatchDefaultViewers(viewer);
  *ierr = PetscViewerMatlabPutVariable(v_viewer, c_name, mat);
  if (*ierr) return;
  FREECHAR(name, c_name);
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscviewer.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscviewermatlabgetarray_ PETSCVIEWERMATLABGETARRAY
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscviewermatlabgetarray_ petscviewermatlabgetarray
#endif
PETSC_EXTERN void petscviewermatlabgetarray_(PetscViewer *mfile, int *m, int *n, PetscScalar array[], char name[], PetscErrorCode *ierr, PETSC_FORTRAN_CHARLEN_T l_name)
{
  char* c_name;
  FIXCHAR(name, l_name, c_name);
  PetscViewer v_mfile = PetscPatchDefaultViewers(mfile);
  CHKFORTRANNULLSCALAR(array);
  *ierr = PetscViewerMatlabGetArray(v_mfile, *m, *n, array, c_name);
  if (*ierr) return;
  FREECHAR(name, c_name);
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscviewer.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscviewermatlabopen_ PETSCVIEWERMATLABOPEN
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscviewermatlabopen_ petscviewermatlabopen
#endif
PETSC_EXTERN void petscviewermatlabopen_(MPI_Fint *comm, char name[], PetscFileMode *type, PetscViewer *binv, PetscErrorCode *ierr, PETSC_FORTRAN_CHARLEN_T l_name)
{
  PetscBool null_binv = !*(void**) binv ? PETSC_TRUE : PETSC_FALSE;
  char* c_name;
  FIXCHAR(name, l_name, c_name);
  CHKFORTRANNULLOBJECT(binv);
  *ierr = PetscViewerMatlabOpen(MPI_Comm_f2c(*(comm)), c_name, *type, binv);
  if (*ierr) return;
  FREECHAR(name, c_name);
  if (! null_binv && !*(void**) binv) *(void **) binv = (void *)-2;
}
