#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscviewer.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscviewercreate_ PETSCVIEWERCREATE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscviewercreate_ petscviewercreate
#endif
PETSC_EXTERN void petscviewercreate_(MPI_Fint *comm, PetscViewer *inviewer, PetscErrorCode *ierr)
{
  PetscBool null_inviewer = !*(void**) inviewer ? PETSC_TRUE : PETSC_FALSE;
  PETSC_FORTRAN_OBJECT_CREATE(inviewer);
  CHKFORTRANNULLOBJECT(inviewer);
  *ierr = PetscViewerCreate(MPI_Comm_f2c(*(comm)), inviewer);
  if (*ierr) return;
  if (! null_inviewer && !*(void**) inviewer) *(void **) inviewer = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscviewer.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscviewerflowcontrolstart_ PETSCVIEWERFLOWCONTROLSTART
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscviewerflowcontrolstart_ petscviewerflowcontrolstart
#endif
PETSC_EXTERN void petscviewerflowcontrolstart_(PetscViewer *viewer, PetscInt *mcnt, PetscInt *cnt, PetscErrorCode *ierr)
{
  PetscViewer v_viewer = PetscPatchDefaultViewers(viewer);
  CHKFORTRANNULLINTEGER(mcnt);
  CHKFORTRANNULLINTEGER(cnt);
  *ierr = PetscViewerFlowControlStart(v_viewer, mcnt, cnt);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscviewer.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscviewerflowcontrolstepmain_ PETSCVIEWERFLOWCONTROLSTEPMAIN
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscviewerflowcontrolstepmain_ petscviewerflowcontrolstepmain
#endif
PETSC_EXTERN void petscviewerflowcontrolstepmain_(PetscViewer *viewer, PetscInt *i, PetscInt *mcnt, PetscInt *cnt, PetscErrorCode *ierr)
{
  PetscViewer v_viewer = PetscPatchDefaultViewers(viewer);
  CHKFORTRANNULLINTEGER(mcnt);
  *ierr = PetscViewerFlowControlStepMain(v_viewer, *i, mcnt, *cnt);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscviewer.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscviewerflowcontrolendmain_ PETSCVIEWERFLOWCONTROLENDMAIN
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscviewerflowcontrolendmain_ petscviewerflowcontrolendmain
#endif
PETSC_EXTERN void petscviewerflowcontrolendmain_(PetscViewer *viewer, PetscInt *mcnt, PetscErrorCode *ierr)
{
  PetscViewer v_viewer = PetscPatchDefaultViewers(viewer);
  CHKFORTRANNULLINTEGER(mcnt);
  *ierr = PetscViewerFlowControlEndMain(v_viewer, mcnt);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscviewer.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscviewerflowcontrolstepworker_ PETSCVIEWERFLOWCONTROLSTEPWORKER
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscviewerflowcontrolstepworker_ petscviewerflowcontrolstepworker
#endif
PETSC_EXTERN void petscviewerflowcontrolstepworker_(PetscViewer *viewer, PetscMPIInt *rank, PetscInt *mcnt, PetscErrorCode *ierr)
{
  PetscViewer v_viewer = PetscPatchDefaultViewers(viewer);
  CHKFORTRANNULLINTEGER(mcnt);
  *ierr = PetscViewerFlowControlStepWorker(v_viewer, *rank, mcnt);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscviewer.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscviewerflowcontrolendworker_ PETSCVIEWERFLOWCONTROLENDWORKER
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscviewerflowcontrolendworker_ petscviewerflowcontrolendworker
#endif
PETSC_EXTERN void petscviewerflowcontrolendworker_(PetscViewer *viewer, PetscInt *mcnt, PetscErrorCode *ierr)
{
  PetscViewer v_viewer = PetscPatchDefaultViewers(viewer);
  CHKFORTRANNULLINTEGER(mcnt);
  *ierr = PetscViewerFlowControlEndWorker(v_viewer, mcnt);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscsys.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscoptionshelpprinteddestroy_ PETSCOPTIONSHELPPRINTEDDESTROY
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscoptionshelpprinteddestroy_ petscoptionshelpprinteddestroy
#endif
PETSC_EXTERN void petscoptionshelpprinteddestroy_(PetscOptionsHelpPrinted *hp, PetscErrorCode *ierr)
{
  PETSC_FORTRAN_OBJECT_F_DESTROYED_TO_C_NULL(hp);
  PetscBool null_hp = !*(void**) hp ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(hp);
  *ierr = PetscOptionsHelpPrintedDestroy(hp);
  if (*ierr) return;
  if (! null_hp && !*(void**) hp) *(void **) hp = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscsys.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscoptionshelpprintedcreate_ PETSCOPTIONSHELPPRINTEDCREATE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscoptionshelpprintedcreate_ petscoptionshelpprintedcreate
#endif
PETSC_EXTERN void petscoptionshelpprintedcreate_(PetscOptionsHelpPrinted *hp, PetscErrorCode *ierr)
{
  PetscBool null_hp = !*(void**) hp ? PETSC_TRUE : PETSC_FALSE;
  PETSC_FORTRAN_OBJECT_CREATE(hp);
  CHKFORTRANNULLOBJECT(hp);
  *ierr = PetscOptionsHelpPrintedCreate(hp);
  if (*ierr) return;
  if (! null_hp && !*(void**) hp) *(void **) hp = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscsys.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscoptionshelpprintedcheck_ PETSCOPTIONSHELPPRINTEDCHECK
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscoptionshelpprintedcheck_ petscoptionshelpprintedcheck
#endif
PETSC_EXTERN void petscoptionshelpprintedcheck_(PetscOptionsHelpPrinted *hp, char pre[], char name[], PetscBool *found, PetscErrorCode *ierr, PETSC_FORTRAN_CHARLEN_T l_pre, PETSC_FORTRAN_CHARLEN_T l_name)
{
  char* c_pre;
  FIXCHAR(pre, l_pre, c_pre);
  char* c_name;
  FIXCHAR(name, l_name, c_name);
  CHKFORTRANNULLBOOL(found);
  *ierr = PetscOptionsHelpPrintedCheck(*hp, c_pre, c_name, found);
  if (*ierr) return;
  FREECHAR(pre, c_pre);
  FREECHAR(name, c_name);
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscviewer.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscviewersettype_ PETSCVIEWERSETTYPE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscviewersettype_ petscviewersettype
#endif
PETSC_EXTERN void petscviewersettype_(PetscViewer *viewer, char *type, PetscErrorCode *ierr, PETSC_FORTRAN_CHARLEN_T l_type)
{
  char* c_type;
  FIXCHAR(type, l_type, c_type);
  PetscViewer v_viewer = PetscPatchDefaultViewers(viewer);
  *ierr = PetscViewerSetType(v_viewer, c_type);
  if (*ierr) return;
  FREECHAR(type, c_type);
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscviewer.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscviewersetfromoptions_ PETSCVIEWERSETFROMOPTIONS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscviewersetfromoptions_ petscviewersetfromoptions
#endif
PETSC_EXTERN void petscviewersetfromoptions_(PetscViewer *viewer, PetscErrorCode *ierr)
{
  PetscViewer v_viewer = PetscPatchDefaultViewers(viewer);
  *ierr = PetscViewerSetFromOptions(v_viewer);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscviewer.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscoptionspushcreatevieweroff_ PETSCOPTIONSPUSHCREATEVIEWEROFF
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscoptionspushcreatevieweroff_ petscoptionspushcreatevieweroff
#endif
PETSC_EXTERN void petscoptionspushcreatevieweroff_(PetscBool *flg, PetscErrorCode *ierr)
{
  *ierr = PetscOptionsPushCreateViewerOff(*flg ? PETSC_TRUE : PETSC_FALSE);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscviewer.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscoptionspopcreatevieweroff_ PETSCOPTIONSPOPCREATEVIEWEROFF
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscoptionspopcreatevieweroff_ petscoptionspopcreatevieweroff
#endif
PETSC_EXTERN void petscoptionspopcreatevieweroff_(PetscErrorCode *ierr)
{
  *ierr = PetscOptionsPopCreateViewerOff();
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscviewer.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscoptionsgetcreatevieweroff_ PETSCOPTIONSGETCREATEVIEWEROFF
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscoptionsgetcreatevieweroff_ petscoptionsgetcreatevieweroff
#endif
PETSC_EXTERN void petscoptionsgetcreatevieweroff_(PetscBool *flg, PetscErrorCode *ierr)
{
  CHKFORTRANNULLBOOL(flg);
  *ierr = PetscOptionsGetCreateViewerOff(flg);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscviewer.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscoptionscreateviewer_ PETSCOPTIONSCREATEVIEWER
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscoptionscreateviewer_ petscoptionscreateviewer
#endif
PETSC_EXTERN void petscoptionscreateviewer_(MPI_Fint *comm, PetscOptions *options, char pre[], char name[], PetscViewer *viewer, PetscViewerFormat *format, PetscBool *set, PetscErrorCode *ierr, PETSC_FORTRAN_CHARLEN_T l_pre, PETSC_FORTRAN_CHARLEN_T l_name)
{
  PetscBool null_viewer = !*(void**) viewer ? PETSC_TRUE : PETSC_FALSE;
  char* c_pre;
  FIXCHAR(pre, l_pre, c_pre);
  char* c_name;
  FIXCHAR(name, l_name, c_name);
  CHKFORTRANNULLOBJECT(viewer);
  CHKFORTRANNULLBOOL(set);
  *ierr = PetscOptionsCreateViewer(MPI_Comm_f2c(*(comm)), *options, c_pre, c_name, viewer, format, set);
  if (*ierr) return;
  FREECHAR(pre, c_pre);
  FREECHAR(name, c_name);
  if (! null_viewer && !*(void**) viewer) *(void **) viewer = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscviewer.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscoptionscreateviewers_ PETSCOPTIONSCREATEVIEWERS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscoptionscreateviewers_ petscoptionscreateviewers
#endif
PETSC_EXTERN void petscoptionscreateviewers_(MPI_Fint *comm, PetscOptions *options, char pre[], char name[], PetscInt *n_max, PetscViewer viewers[], PetscViewerFormat formats[], PetscBool *set, PetscErrorCode *ierr, PETSC_FORTRAN_CHARLEN_T l_pre, PETSC_FORTRAN_CHARLEN_T l_name)
{
  char* c_pre;
  FIXCHAR(pre, l_pre, c_pre);
  char* c_name;
  FIXCHAR(name, l_name, c_name);
  CHKFORTRANNULLINTEGER(n_max);
  CHKFORTRANNULLOBJECT(viewers);
  CHKFORTRANNULLBOOL(set);
  *ierr = PetscOptionsCreateViewers(MPI_Comm_f2c(*(comm)), *options, c_pre, c_name, n_max, viewers, formats, set);
  if (*ierr) return;
  FREECHAR(pre, c_pre);
  FREECHAR(name, c_name);
}
