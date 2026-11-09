#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscviewer.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscviewerbinarysetusempiio_ PETSCVIEWERBINARYSETUSEMPIIO
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscviewerbinarysetusempiio_ petscviewerbinarysetusempiio
#endif
PETSC_EXTERN void petscviewerbinarysetusempiio_(PetscViewer *viewer, PetscBool *use, PetscErrorCode *ierr)
{
  PetscViewer v_viewer = PetscPatchDefaultViewers(viewer);
  *ierr = PetscViewerBinarySetUseMPIIO(v_viewer, *use ? PETSC_TRUE : PETSC_FALSE);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscviewer.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscviewerbinarygetusempiio_ PETSCVIEWERBINARYGETUSEMPIIO
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscviewerbinarygetusempiio_ petscviewerbinarygetusempiio
#endif
PETSC_EXTERN void petscviewerbinarygetusempiio_(PetscViewer *viewer, PetscBool *use, PetscErrorCode *ierr)
{
  PetscViewer v_viewer = PetscPatchDefaultViewers(viewer);
  CHKFORTRANNULLBOOL(use);
  *ierr = PetscViewerBinaryGetUseMPIIO(v_viewer, use);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscviewer.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscviewerbinarysetflowcontrol_ PETSCVIEWERBINARYSETFLOWCONTROL
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscviewerbinarysetflowcontrol_ petscviewerbinarysetflowcontrol
#endif
PETSC_EXTERN void petscviewerbinarysetflowcontrol_(PetscViewer *viewer, PetscInt *fc, PetscErrorCode *ierr)
{
  PetscViewer v_viewer = PetscPatchDefaultViewers(viewer);
  *ierr = PetscViewerBinarySetFlowControl(v_viewer, *fc);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscviewer.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscviewerbinarygetflowcontrol_ PETSCVIEWERBINARYGETFLOWCONTROL
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscviewerbinarygetflowcontrol_ petscviewerbinarygetflowcontrol
#endif
PETSC_EXTERN void petscviewerbinarygetflowcontrol_(PetscViewer *viewer, PetscInt *fc, PetscErrorCode *ierr)
{
  PetscViewer v_viewer = PetscPatchDefaultViewers(viewer);
  CHKFORTRANNULLINTEGER(fc);
  *ierr = PetscViewerBinaryGetFlowControl(v_viewer, fc);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscviewer.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscviewerbinarygetdescriptor_ PETSCVIEWERBINARYGETDESCRIPTOR
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscviewerbinarygetdescriptor_ petscviewerbinarygetdescriptor
#endif
PETSC_EXTERN void petscviewerbinarygetdescriptor_(PetscViewer *viewer, int *fdes, PetscErrorCode *ierr)
{
  PetscViewer v_viewer = PetscPatchDefaultViewers(viewer);
  *ierr = PetscViewerBinaryGetDescriptor(v_viewer, fdes);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscviewer.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscviewerbinaryskipinfo_ PETSCVIEWERBINARYSKIPINFO
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscviewerbinaryskipinfo_ petscviewerbinaryskipinfo
#endif
PETSC_EXTERN void petscviewerbinaryskipinfo_(PetscViewer *viewer, PetscErrorCode *ierr)
{
  PetscViewer v_viewer = PetscPatchDefaultViewers(viewer);
  *ierr = PetscViewerBinarySkipInfo(v_viewer);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscviewer.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscviewerbinarysetskipinfo_ PETSCVIEWERBINARYSETSKIPINFO
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscviewerbinarysetskipinfo_ petscviewerbinarysetskipinfo
#endif
PETSC_EXTERN void petscviewerbinarysetskipinfo_(PetscViewer *viewer, PetscBool *skip, PetscErrorCode *ierr)
{
  PetscViewer v_viewer = PetscPatchDefaultViewers(viewer);
  *ierr = PetscViewerBinarySetSkipInfo(v_viewer, *skip ? PETSC_TRUE : PETSC_FALSE);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscviewer.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscviewerbinarygetskipinfo_ PETSCVIEWERBINARYGETSKIPINFO
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscviewerbinarygetskipinfo_ petscviewerbinarygetskipinfo
#endif
PETSC_EXTERN void petscviewerbinarygetskipinfo_(PetscViewer *viewer, PetscBool *skip, PetscErrorCode *ierr)
{
  PetscViewer v_viewer = PetscPatchDefaultViewers(viewer);
  CHKFORTRANNULLBOOL(skip);
  *ierr = PetscViewerBinaryGetSkipInfo(v_viewer, skip);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscviewer.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscviewerbinarysetskipoptions_ PETSCVIEWERBINARYSETSKIPOPTIONS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscviewerbinarysetskipoptions_ petscviewerbinarysetskipoptions
#endif
PETSC_EXTERN void petscviewerbinarysetskipoptions_(PetscViewer *viewer, PetscBool *skip, PetscErrorCode *ierr)
{
  PetscViewer v_viewer = PetscPatchDefaultViewers(viewer);
  *ierr = PetscViewerBinarySetSkipOptions(v_viewer, *skip ? PETSC_TRUE : PETSC_FALSE);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscviewer.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscviewerbinarygetskipoptions_ PETSCVIEWERBINARYGETSKIPOPTIONS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscviewerbinarygetskipoptions_ petscviewerbinarygetskipoptions
#endif
PETSC_EXTERN void petscviewerbinarygetskipoptions_(PetscViewer *viewer, PetscBool *skip, PetscErrorCode *ierr)
{
  PetscViewer v_viewer = PetscPatchDefaultViewers(viewer);
  CHKFORTRANNULLBOOL(skip);
  *ierr = PetscViewerBinaryGetSkipOptions(v_viewer, skip);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscviewer.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscviewerbinarysetskipheader_ PETSCVIEWERBINARYSETSKIPHEADER
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscviewerbinarysetskipheader_ petscviewerbinarysetskipheader
#endif
PETSC_EXTERN void petscviewerbinarysetskipheader_(PetscViewer *viewer, PetscBool *skip, PetscErrorCode *ierr)
{
  PetscViewer v_viewer = PetscPatchDefaultViewers(viewer);
  *ierr = PetscViewerBinarySetSkipHeader(v_viewer, *skip ? PETSC_TRUE : PETSC_FALSE);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscviewer.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscviewerbinarygetskipheader_ PETSCVIEWERBINARYGETSKIPHEADER
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscviewerbinarygetskipheader_ petscviewerbinarygetskipheader
#endif
PETSC_EXTERN void petscviewerbinarygetskipheader_(PetscViewer *viewer, PetscBool *skip, PetscErrorCode *ierr)
{
  PetscViewer v_viewer = PetscPatchDefaultViewers(viewer);
  CHKFORTRANNULLBOOL(skip);
  *ierr = PetscViewerBinaryGetSkipHeader(v_viewer, skip);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscviewer.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscviewerbinaryopen_ PETSCVIEWERBINARYOPEN
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscviewerbinaryopen_ petscviewerbinaryopen
#endif
PETSC_EXTERN void petscviewerbinaryopen_(MPI_Fint *comm, char name[], PetscFileMode *mode, PetscViewer *viewer, PetscErrorCode *ierr, PETSC_FORTRAN_CHARLEN_T l_name)
{
  PetscBool null_viewer = !*(void**) viewer ? PETSC_TRUE : PETSC_FALSE;
  char* c_name;
  FIXCHAR(name, l_name, c_name);
  CHKFORTRANNULLOBJECT(viewer);
  *ierr = PetscViewerBinaryOpen(MPI_Comm_f2c(*(comm)), c_name, *mode, viewer);
  if (*ierr) return;
  FREECHAR(name, c_name);
  if (! null_viewer && !*(void**) viewer) *(void **) viewer = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscviewer.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscviewerbinaryread_ PETSCVIEWERBINARYREAD
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscviewerbinaryread_ petscviewerbinaryread
#endif
PETSC_EXTERN void petscviewerbinaryread_(PetscViewer *viewer, void *data, PetscInt *num, PetscInt *count, PetscDataType *dtype, PetscErrorCode *ierr)
{
  PetscViewer v_viewer = PetscPatchDefaultViewers(viewer);
  CHKFORTRANNULLINTEGER(count);
  *ierr = PetscViewerBinaryRead(v_viewer, data, *num, count, *dtype);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscviewer.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscviewerbinarywrite_ PETSCVIEWERBINARYWRITE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscviewerbinarywrite_ petscviewerbinarywrite
#endif
PETSC_EXTERN void petscviewerbinarywrite_(PetscViewer *viewer, const void *data, PetscInt *count, PetscDataType *dtype, PetscErrorCode *ierr)
{
  PetscViewer v_viewer = PetscPatchDefaultViewers(viewer);
  *ierr = PetscViewerBinaryWrite(v_viewer, data, *count, *dtype);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscviewer.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscviewerbinaryreadall_ PETSCVIEWERBINARYREADALL
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscviewerbinaryreadall_ petscviewerbinaryreadall
#endif
PETSC_EXTERN void petscviewerbinaryreadall_(PetscViewer *viewer, void *data, PetscCount *count, PetscCount *start, PetscCount *total, PetscDataType *dtype, PetscErrorCode *ierr)
{
  PetscViewer v_viewer = PetscPatchDefaultViewers(viewer);
  *ierr = PetscViewerBinaryReadAll(v_viewer, data, *count, *start, *total, *dtype);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscviewer.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscviewerbinarywriteall_ PETSCVIEWERBINARYWRITEALL
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscviewerbinarywriteall_ petscviewerbinarywriteall
#endif
PETSC_EXTERN void petscviewerbinarywriteall_(PetscViewer *viewer, const void *data, PetscCount *count, PetscCount *start, PetscCount *total, PetscDataType *dtype, PetscErrorCode *ierr)
{
  PetscViewer v_viewer = PetscPatchDefaultViewers(viewer);
  *ierr = PetscViewerBinaryWriteAll(v_viewer, data, *count, *start, *total, *dtype);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscviewer.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscviewerfilesetmode_ PETSCVIEWERFILESETMODE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscviewerfilesetmode_ petscviewerfilesetmode
#endif
PETSC_EXTERN void petscviewerfilesetmode_(PetscViewer *viewer, PetscFileMode *mode, PetscErrorCode *ierr)
{
  PetscViewer v_viewer = PetscPatchDefaultViewers(viewer);
  *ierr = PetscViewerFileSetMode(v_viewer, *mode);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscviewer.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscviewerfilegetmode_ PETSCVIEWERFILEGETMODE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscviewerfilegetmode_ petscviewerfilegetmode
#endif
PETSC_EXTERN void petscviewerfilegetmode_(PetscViewer *viewer, PetscFileMode *mode, PetscErrorCode *ierr)
{
  PetscViewer v_viewer = PetscPatchDefaultViewers(viewer);
  *ierr = PetscViewerFileGetMode(v_viewer, mode);
  if (*ierr) return;
}
