#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscviewer.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscviewermathematicafinalizepackage_ PETSCVIEWERMATHEMATICAFINALIZEPACKAGE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscviewermathematicafinalizepackage_ petscviewermathematicafinalizepackage
#endif
PETSC_EXTERN void petscviewermathematicafinalizepackage_(PetscErrorCode *ierr)
{
  *ierr = PetscViewerMathematicaFinalizePackage();
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscviewer.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscviewermathematicainitializepackage_ PETSCVIEWERMATHEMATICAINITIALIZEPACKAGE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscviewermathematicainitializepackage_ petscviewermathematicainitializepackage
#endif
PETSC_EXTERN void petscviewermathematicainitializepackage_(PetscErrorCode *ierr)
{
  *ierr = PetscViewerMathematicaInitializePackage();
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscviewer.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscviewermathematicaopen_ PETSCVIEWERMATHEMATICAOPEN
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscviewermathematicaopen_ petscviewermathematicaopen
#endif
PETSC_EXTERN void petscviewermathematicaopen_(MPI_Fint *comm, int *port, char machine[], char mode[], PetscViewer *v, PetscErrorCode *ierr, PETSC_FORTRAN_CHARLEN_T l_machine, PETSC_FORTRAN_CHARLEN_T l_mode)
{
  PetscBool null_v = !*(void**) v ? PETSC_TRUE : PETSC_FALSE;
  char* c_machine;
  FIXCHAR(machine, l_machine, c_machine);
  char* c_mode;
  FIXCHAR(mode, l_mode, c_mode);
  CHKFORTRANNULLOBJECT(v);
  *ierr = PetscViewerMathematicaOpen(MPI_Comm_f2c(*(comm)), *port, c_machine, c_mode, v);
  if (*ierr) return;
  FREECHAR(machine, c_machine);
  FREECHAR(mode, c_mode);
  if (! null_v && !*(void**) v) *(void **) v = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscviewer.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscviewermathematicaskippackets_ PETSCVIEWERMATHEMATICASKIPPACKETS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscviewermathematicaskippackets_ petscviewermathematicaskippackets
#endif
PETSC_EXTERN void petscviewermathematicaskippackets_(PetscViewer *viewer, int *type, PetscErrorCode *ierr)
{
  PetscViewer v_viewer = PetscPatchDefaultViewers(viewer);
  *ierr = PetscViewerMathematicaSkipPackets(v_viewer, *type);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscviewer.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscviewermathematicasetname_ PETSCVIEWERMATHEMATICASETNAME
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscviewermathematicasetname_ petscviewermathematicasetname
#endif
PETSC_EXTERN void petscviewermathematicasetname_(PetscViewer *viewer, char name[], PetscErrorCode *ierr, PETSC_FORTRAN_CHARLEN_T l_name)
{
  char* c_name;
  FIXCHAR(name, l_name, c_name);
  PetscViewer v_viewer = PetscPatchDefaultViewers(viewer);
  *ierr = PetscViewerMathematicaSetName(v_viewer, c_name);
  if (*ierr) return;
  FREECHAR(name, c_name);
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscviewer.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscviewermathematicaclearname_ PETSCVIEWERMATHEMATICACLEARNAME
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscviewermathematicaclearname_ petscviewermathematicaclearname
#endif
PETSC_EXTERN void petscviewermathematicaclearname_(PetscViewer *viewer, PetscErrorCode *ierr)
{
  PetscViewer v_viewer = PetscPatchDefaultViewers(viewer);
  *ierr = PetscViewerMathematicaClearName(v_viewer);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscmat.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscviewermathematicaputmatrix_ PETSCVIEWERMATHEMATICAPUTMATRIX
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscviewermathematicaputmatrix_ petscviewermathematicaputmatrix
#endif
PETSC_EXTERN void petscviewermathematicaputmatrix_(PetscViewer *viewer, int *m, int *n, PetscReal *a, PetscErrorCode *ierr)
{
  PetscViewer v_viewer = PetscPatchDefaultViewers(viewer);
  CHKFORTRANNULLREAL(a);
  *ierr = PetscViewerMathematicaPutMatrix(v_viewer, *m, *n, a);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscmat.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscviewermathematicaputcsrmatrix_ PETSCVIEWERMATHEMATICAPUTCSRMATRIX
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscviewermathematicaputcsrmatrix_ petscviewermathematicaputcsrmatrix
#endif
PETSC_EXTERN void petscviewermathematicaputcsrmatrix_(PetscViewer *viewer, int *m, int *n, int *i, int *j, PetscReal *a, PetscErrorCode *ierr)
{
  PetscViewer v_viewer = PetscPatchDefaultViewers(viewer);
  CHKFORTRANNULLREAL(a);
  *ierr = PetscViewerMathematicaPutCSRMatrix(v_viewer, *m, *n, i, j, a);
  if (*ierr) return;
}
