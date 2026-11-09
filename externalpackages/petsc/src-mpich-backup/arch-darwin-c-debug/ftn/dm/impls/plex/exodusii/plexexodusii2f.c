#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmplex.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscviewerexodusiisetzonalvariable_ PETSCVIEWEREXODUSIISETZONALVARIABLE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscviewerexodusiisetzonalvariable_ petscviewerexodusiisetzonalvariable
#endif
PETSC_EXTERN void petscviewerexodusiisetzonalvariable_(PetscViewer *viewer, PetscExodusIIInt *num, PetscErrorCode *ierr)
{
  PetscViewer v_viewer = PetscPatchDefaultViewers(viewer);
  *ierr = PetscViewerExodusIISetZonalVariable(v_viewer, *num);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmplex.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscviewerexodusiisetnodalvariable_ PETSCVIEWEREXODUSIISETNODALVARIABLE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscviewerexodusiisetnodalvariable_ petscviewerexodusiisetnodalvariable
#endif
PETSC_EXTERN void petscviewerexodusiisetnodalvariable_(PetscViewer *viewer, PetscExodusIIInt *num, PetscErrorCode *ierr)
{
  PetscViewer v_viewer = PetscPatchDefaultViewers(viewer);
  *ierr = PetscViewerExodusIISetNodalVariable(v_viewer, *num);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmplex.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscviewerexodusiigetzonalvariable_ PETSCVIEWEREXODUSIIGETZONALVARIABLE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscviewerexodusiigetzonalvariable_ petscviewerexodusiigetzonalvariable
#endif
PETSC_EXTERN void petscviewerexodusiigetzonalvariable_(PetscViewer *viewer, PetscExodusIIInt *num, PetscErrorCode *ierr)
{
  PetscViewer v_viewer = PetscPatchDefaultViewers(viewer);
  *ierr = PetscViewerExodusIIGetZonalVariable(v_viewer, num);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmplex.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscviewerexodusiigetnodalvariable_ PETSCVIEWEREXODUSIIGETNODALVARIABLE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscviewerexodusiigetnodalvariable_ petscviewerexodusiigetnodalvariable
#endif
PETSC_EXTERN void petscviewerexodusiigetnodalvariable_(PetscViewer *viewer, PetscExodusIIInt *num, PetscErrorCode *ierr)
{
  PetscViewer v_viewer = PetscPatchDefaultViewers(viewer);
  *ierr = PetscViewerExodusIIGetNodalVariable(v_viewer, num);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmplex.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscviewerexodusiisetzonalvariablename_ PETSCVIEWEREXODUSIISETZONALVARIABLENAME
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscviewerexodusiisetzonalvariablename_ petscviewerexodusiisetzonalvariablename
#endif
PETSC_EXTERN void petscviewerexodusiisetzonalvariablename_(PetscViewer *viewer, PetscExodusIIInt *idx, char name[], PetscErrorCode *ierr, PETSC_FORTRAN_CHARLEN_T l_name)
{
  char* c_name;
  FIXCHAR(name, l_name, c_name);
  PetscViewer v_viewer = PetscPatchDefaultViewers(viewer);
  *ierr = PetscViewerExodusIISetZonalVariableName(v_viewer, *idx, c_name);
  if (*ierr) return;
  FREECHAR(name, c_name);
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmplex.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscviewerexodusiisetnodalvariablename_ PETSCVIEWEREXODUSIISETNODALVARIABLENAME
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscviewerexodusiisetnodalvariablename_ petscviewerexodusiisetnodalvariablename
#endif
PETSC_EXTERN void petscviewerexodusiisetnodalvariablename_(PetscViewer *viewer, PetscExodusIIInt *idx, char name[], PetscErrorCode *ierr, PETSC_FORTRAN_CHARLEN_T l_name)
{
  char* c_name;
  FIXCHAR(name, l_name, c_name);
  PetscViewer v_viewer = PetscPatchDefaultViewers(viewer);
  *ierr = PetscViewerExodusIISetNodalVariableName(v_viewer, *idx, c_name);
  if (*ierr) return;
  FREECHAR(name, c_name);
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmplex.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscviewerexodusiigetzonalvariablename_ PETSCVIEWEREXODUSIIGETZONALVARIABLENAME
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscviewerexodusiigetzonalvariablename_ petscviewerexodusiigetzonalvariablename
#endif
PETSC_EXTERN void petscviewerexodusiigetzonalvariablename_(PetscViewer *viewer, PetscExodusIIInt *idx, char name[], PetscErrorCode *ierr, PETSC_FORTRAN_CHARLEN_T l_name)
{
  char* c_name = PETSC_NULLPTR;
  PetscViewer v_viewer = PetscPatchDefaultViewers(viewer);
  *ierr = PetscViewerExodusIIGetZonalVariableName(v_viewer, *idx, (const char **)&c_name);
  if (*ierr) return;
  *ierr = PetscStrncpy((char *)name, c_name, l_name);
  if (*ierr) return;
  FIXRETURNCHAR(PETSC_TRUE, name, l_name);
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmplex.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscviewerexodusiigetnodalvariablename_ PETSCVIEWEREXODUSIIGETNODALVARIABLENAME
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscviewerexodusiigetnodalvariablename_ petscviewerexodusiigetnodalvariablename
#endif
PETSC_EXTERN void petscviewerexodusiigetnodalvariablename_(PetscViewer *viewer, PetscExodusIIInt *idx, char name[], PetscErrorCode *ierr, PETSC_FORTRAN_CHARLEN_T l_name)
{
  char* c_name = PETSC_NULLPTR;
  PetscViewer v_viewer = PetscPatchDefaultViewers(viewer);
  *ierr = PetscViewerExodusIIGetNodalVariableName(v_viewer, *idx, (const char **)&c_name);
  if (*ierr) return;
  *ierr = PetscStrncpy((char *)name, c_name, l_name);
  if (*ierr) return;
  FIXRETURNCHAR(PETSC_TRUE, name, l_name);
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmplex.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscviewerexodusiigetnodalvariableindex_ PETSCVIEWEREXODUSIIGETNODALVARIABLEINDEX
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscviewerexodusiigetnodalvariableindex_ petscviewerexodusiigetnodalvariableindex
#endif
PETSC_EXTERN void petscviewerexodusiigetnodalvariableindex_(PetscViewer *viewer, char name[], PetscExodusIIInt *varIndex, PetscErrorCode *ierr, PETSC_FORTRAN_CHARLEN_T l_name)
{
  char* c_name;
  FIXCHAR(name, l_name, c_name);
  PetscViewer v_viewer = PetscPatchDefaultViewers(viewer);
  *ierr = PetscViewerExodusIIGetNodalVariableIndex(v_viewer, c_name, varIndex);
  if (*ierr) return;
  FREECHAR(name, c_name);
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmplex.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscviewerexodusiigetzonalvariableindex_ PETSCVIEWEREXODUSIIGETZONALVARIABLEINDEX
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscviewerexodusiigetzonalvariableindex_ petscviewerexodusiigetzonalvariableindex
#endif
PETSC_EXTERN void petscviewerexodusiigetzonalvariableindex_(PetscViewer *viewer, char name[], int *varIndex, PetscErrorCode *ierr, PETSC_FORTRAN_CHARLEN_T l_name)
{
  char* c_name;
  FIXCHAR(name, l_name, c_name);
  PetscViewer v_viewer = PetscPatchDefaultViewers(viewer);
  *ierr = PetscViewerExodusIIGetZonalVariableIndex(v_viewer, c_name, varIndex);
  if (*ierr) return;
  FREECHAR(name, c_name);
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmplex.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmplexcreateexodus_ DMPLEXCREATEEXODUS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmplexcreateexodus_ dmplexcreateexodus
#endif
PETSC_EXTERN void dmplexcreateexodus_(MPI_Fint *comm, PetscExodusIIInt *exoid, PetscBool *interpolate, DM *dm, PetscErrorCode *ierr)
{
  PetscBool null_dm = !*(void**) dm ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(dm);
  *ierr = DMPlexCreateExodus(MPI_Comm_f2c(*(comm)), *exoid, *interpolate ? PETSC_TRUE : PETSC_FALSE, dm);
  if (*ierr) return;
  if (! null_dm && !*(void**) dm) *(void **) dm = (void *)-2;
}
