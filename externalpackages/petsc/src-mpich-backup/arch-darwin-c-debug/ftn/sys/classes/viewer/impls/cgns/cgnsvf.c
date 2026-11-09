#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscdmplex.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscviewercgnsopen_ PETSCVIEWERCGNSOPEN
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscviewercgnsopen_ petscviewercgnsopen
#endif
PETSC_EXTERN void petscviewercgnsopen_(MPI_Fint *comm, char name[], PetscFileMode *type, PetscViewer *viewer, PetscErrorCode *ierr, PETSC_FORTRAN_CHARLEN_T l_name)
{
  PetscBool null_viewer = !*(void**) viewer ? PETSC_TRUE : PETSC_FALSE;
  char* c_name;
  FIXCHAR(name, l_name, c_name);
  CHKFORTRANNULLOBJECT(viewer);
  *ierr = PetscViewerCGNSOpen(MPI_Comm_f2c(*(comm)), c_name, *type, viewer);
  if (*ierr) return;
  FREECHAR(name, c_name);
  if (! null_viewer && !*(void**) viewer) *(void **) viewer = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscdmplex.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscviewercgnssetsolutionindex_ PETSCVIEWERCGNSSETSOLUTIONINDEX
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscviewercgnssetsolutionindex_ petscviewercgnssetsolutionindex
#endif
PETSC_EXTERN void petscviewercgnssetsolutionindex_(PetscViewer *viewer, PetscInt *solution_id, PetscErrorCode *ierr)
{
  PetscViewer v_viewer = PetscPatchDefaultViewers(viewer);
  *ierr = PetscViewerCGNSSetSolutionIndex(v_viewer, *solution_id);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscdmplex.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscviewercgnsgetsolutionindex_ PETSCVIEWERCGNSGETSOLUTIONINDEX
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscviewercgnsgetsolutionindex_ petscviewercgnsgetsolutionindex
#endif
PETSC_EXTERN void petscviewercgnsgetsolutionindex_(PetscViewer *viewer, PetscInt *solution_id, PetscErrorCode *ierr)
{
  PetscViewer v_viewer = PetscPatchDefaultViewers(viewer);
  CHKFORTRANNULLINTEGER(solution_id);
  *ierr = PetscViewerCGNSGetSolutionIndex(v_viewer, solution_id);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscdmplex.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscviewercgnsgetsolutiontime_ PETSCVIEWERCGNSGETSOLUTIONTIME
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscviewercgnsgetsolutiontime_ petscviewercgnsgetsolutiontime
#endif
PETSC_EXTERN void petscviewercgnsgetsolutiontime_(PetscViewer *viewer, PetscReal *time, PetscBool *set, PetscErrorCode *ierr)
{
  PetscViewer v_viewer = PetscPatchDefaultViewers(viewer);
  CHKFORTRANNULLREAL(time);
  CHKFORTRANNULLBOOL(set);
  *ierr = PetscViewerCGNSGetSolutionTime(v_viewer, time, set);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscdmplex.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscviewercgnsgetsolutioniteration_ PETSCVIEWERCGNSGETSOLUTIONITERATION
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscviewercgnsgetsolutioniteration_ petscviewercgnsgetsolutioniteration
#endif
PETSC_EXTERN void petscviewercgnsgetsolutioniteration_(PetscViewer *viewer, PetscInt *iteration, PetscBool *set, PetscErrorCode *ierr)
{
  PetscViewer v_viewer = PetscPatchDefaultViewers(viewer);
  CHKFORTRANNULLINTEGER(iteration);
  CHKFORTRANNULLBOOL(set);
  *ierr = PetscViewerCGNSGetSolutionIteration(v_viewer, iteration, set);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscdmplex.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscviewercgnsgetsolutionname_ PETSCVIEWERCGNSGETSOLUTIONNAME
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscviewercgnsgetsolutionname_ petscviewercgnsgetsolutionname
#endif
PETSC_EXTERN void petscviewercgnsgetsolutionname_(PetscViewer *viewer, char name[], PetscErrorCode *ierr, PETSC_FORTRAN_CHARLEN_T l_name)
{
  char* c_name = PETSC_NULLPTR;
  PetscViewer v_viewer = PetscPatchDefaultViewers(viewer);
  *ierr = PetscViewerCGNSGetSolutionName(v_viewer, (const char **)&c_name);
  if (*ierr) return;
  *ierr = PetscStrncpy((char *)name, c_name, l_name);
  if (*ierr) return;
  FIXRETURNCHAR(PETSC_TRUE, name, l_name);
}
