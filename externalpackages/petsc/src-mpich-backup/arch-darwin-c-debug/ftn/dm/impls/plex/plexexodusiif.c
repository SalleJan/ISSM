#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmplex.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscviewerexodusiigetid_ PETSCVIEWEREXODUSIIGETID
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscviewerexodusiigetid_ petscviewerexodusiigetid
#endif
PETSC_EXTERN void petscviewerexodusiigetid_(PetscViewer *viewer, int *exoid, PetscErrorCode *ierr)
{
  PetscViewer v_viewer = PetscPatchDefaultViewers(viewer);
  *ierr = PetscViewerExodusIIGetId(v_viewer, exoid);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmplex.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscviewerexodusiisetorder_ PETSCVIEWEREXODUSIISETORDER
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscviewerexodusiisetorder_ petscviewerexodusiisetorder
#endif
PETSC_EXTERN void petscviewerexodusiisetorder_(PetscViewer *viewer, PetscInt *order, PetscErrorCode *ierr)
{
  PetscViewer v_viewer = PetscPatchDefaultViewers(viewer);
  *ierr = PetscViewerExodusIISetOrder(v_viewer, *order);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmplex.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscviewerexodusiigetorder_ PETSCVIEWEREXODUSIIGETORDER
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscviewerexodusiigetorder_ petscviewerexodusiigetorder
#endif
PETSC_EXTERN void petscviewerexodusiigetorder_(PetscViewer *viewer, PetscInt *order, PetscErrorCode *ierr)
{
  PetscViewer v_viewer = PetscPatchDefaultViewers(viewer);
  CHKFORTRANNULLINTEGER(order);
  *ierr = PetscViewerExodusIIGetOrder(v_viewer, order);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmplex.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscviewerexodusiiopen_ PETSCVIEWEREXODUSIIOPEN
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscviewerexodusiiopen_ petscviewerexodusiiopen
#endif
PETSC_EXTERN void petscviewerexodusiiopen_(MPI_Fint *comm, char name[], PetscFileMode *type, PetscViewer *exo, PetscErrorCode *ierr, PETSC_FORTRAN_CHARLEN_T l_name)
{
  PetscBool null_exo = !*(void**) exo ? PETSC_TRUE : PETSC_FALSE;
  char* c_name;
  FIXCHAR(name, l_name, c_name);
  CHKFORTRANNULLOBJECT(exo);
  *ierr = PetscViewerExodusIIOpen(MPI_Comm_f2c(*(comm)), c_name, *type, exo);
  if (*ierr) return;
  FREECHAR(name, c_name);
  if (! null_exo && !*(void**) exo) *(void **) exo = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmplex.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmplexcreateexodusfromfile_ DMPLEXCREATEEXODUSFROMFILE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmplexcreateexodusfromfile_ dmplexcreateexodusfromfile
#endif
PETSC_EXTERN void dmplexcreateexodusfromfile_(MPI_Fint *comm, char filename[], PetscBool *interpolate, DM *dm, PetscErrorCode *ierr, PETSC_FORTRAN_CHARLEN_T l_filename)
{
  PetscBool null_dm = !*(void**) dm ? PETSC_TRUE : PETSC_FALSE;
  char* c_filename;
  FIXCHAR(filename, l_filename, c_filename);
  CHKFORTRANNULLOBJECT(dm);
  *ierr = DMPlexCreateExodusFromFile(MPI_Comm_f2c(*(comm)), c_filename, *interpolate ? PETSC_TRUE : PETSC_FALSE, dm);
  if (*ierr) return;
  FREECHAR(filename, c_filename);
  if (! null_dm && !*(void**) dm) *(void **) dm = (void *)-2;
}
