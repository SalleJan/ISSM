#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscdevice.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscdevicecontextcreate_ PETSCDEVICECONTEXTCREATE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscdevicecontextcreate_ petscdevicecontextcreate
#endif
PETSC_EXTERN void petscdevicecontextcreate_(PetscDeviceContext *dctx, PetscErrorCode *ierr)
{
  PetscBool null_dctx = !*(void**) dctx ? PETSC_TRUE : PETSC_FALSE;
  PETSC_FORTRAN_OBJECT_CREATE(dctx);
  CHKFORTRANNULLOBJECT(dctx);
  *ierr = PetscDeviceContextCreate(dctx);
  if (*ierr) return;
  if (! null_dctx && !*(void**) dctx) *(void **) dctx = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscdevice.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscdevicecontextdestroy_ PETSCDEVICECONTEXTDESTROY
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscdevicecontextdestroy_ petscdevicecontextdestroy
#endif
PETSC_EXTERN void petscdevicecontextdestroy_(PetscDeviceContext *dctx, PetscErrorCode *ierr)
{
  PETSC_FORTRAN_OBJECT_F_DESTROYED_TO_C_NULL(dctx);
  PetscBool null_dctx = !*(void**) dctx ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(dctx);
  *ierr = PetscDeviceContextDestroy(dctx);
  if (*ierr) return;
  if (! null_dctx && !*(void**) dctx) *(void **) dctx = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscdevice.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscdevicecontextsetstreamtype_ PETSCDEVICECONTEXTSETSTREAMTYPE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscdevicecontextsetstreamtype_ petscdevicecontextsetstreamtype
#endif
PETSC_EXTERN void petscdevicecontextsetstreamtype_(PetscDeviceContext *dctx, PetscStreamType *type, PetscErrorCode *ierr)
{
  *ierr = PetscDeviceContextSetStreamType(*dctx, *type);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscdevice.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscdevicecontextgetstreamtype_ PETSCDEVICECONTEXTGETSTREAMTYPE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscdevicecontextgetstreamtype_ petscdevicecontextgetstreamtype
#endif
PETSC_EXTERN void petscdevicecontextgetstreamtype_(PetscDeviceContext *dctx, PetscStreamType *type, PetscErrorCode *ierr)
{
  *ierr = PetscDeviceContextGetStreamType(*dctx, type);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscdevice.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscdevicecontextsetdevice_ PETSCDEVICECONTEXTSETDEVICE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscdevicecontextsetdevice_ petscdevicecontextsetdevice
#endif
PETSC_EXTERN void petscdevicecontextsetdevice_(PetscDeviceContext *dctx, PetscDevice *device, PetscErrorCode *ierr)
{
  *ierr = PetscDeviceContextSetDevice(*dctx, *device);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscdevice.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscdevicecontextgetdevice_ PETSCDEVICECONTEXTGETDEVICE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscdevicecontextgetdevice_ petscdevicecontextgetdevice
#endif
PETSC_EXTERN void petscdevicecontextgetdevice_(PetscDeviceContext *dctx, PetscDevice *device, PetscErrorCode *ierr)
{
  PetscBool null_device = !*(void**) device ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(device);
  *ierr = PetscDeviceContextGetDevice(*dctx, device);
  if (*ierr) return;
  if (! null_device && !*(void**) device) *(void **) device = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscdevice.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscdevicecontextgetdevicetype_ PETSCDEVICECONTEXTGETDEVICETYPE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscdevicecontextgetdevicetype_ petscdevicecontextgetdevicetype
#endif
PETSC_EXTERN void petscdevicecontextgetdevicetype_(PetscDeviceContext *dctx, PetscDeviceType *type, PetscErrorCode *ierr)
{
  *ierr = PetscDeviceContextGetDeviceType(*dctx, type);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscdevice.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscdevicecontextsetup_ PETSCDEVICECONTEXTSETUP
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscdevicecontextsetup_ petscdevicecontextsetup
#endif
PETSC_EXTERN void petscdevicecontextsetup_(PetscDeviceContext *dctx, PetscErrorCode *ierr)
{
  *ierr = PetscDeviceContextSetUp(*dctx);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscdevice.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscdevicecontextduplicate_ PETSCDEVICECONTEXTDUPLICATE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscdevicecontextduplicate_ petscdevicecontextduplicate
#endif
PETSC_EXTERN void petscdevicecontextduplicate_(PetscDeviceContext *dctx, PetscDeviceContext *dctxdup, PetscErrorCode *ierr)
{
  PetscBool null_dctxdup = !*(void**) dctxdup ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(dctxdup);
  *ierr = PetscDeviceContextDuplicate(*dctx, dctxdup);
  if (*ierr) return;
  if (! null_dctxdup && !*(void**) dctxdup) *(void **) dctxdup = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscdevice.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscdevicecontextqueryidle_ PETSCDEVICECONTEXTQUERYIDLE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscdevicecontextqueryidle_ petscdevicecontextqueryidle
#endif
PETSC_EXTERN void petscdevicecontextqueryidle_(PetscDeviceContext *dctx, PetscBool *idle, PetscErrorCode *ierr)
{
  CHKFORTRANNULLBOOL(idle);
  *ierr = PetscDeviceContextQueryIdle(*dctx, idle);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscdevice.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscdevicecontextwaitforcontext_ PETSCDEVICECONTEXTWAITFORCONTEXT
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscdevicecontextwaitforcontext_ petscdevicecontextwaitforcontext
#endif
PETSC_EXTERN void petscdevicecontextwaitforcontext_(PetscDeviceContext *dctxa, PetscDeviceContext *dctxb, PetscErrorCode *ierr)
{
  *ierr = PetscDeviceContextWaitForContext(*dctxa, *dctxb);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscdevice.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscdevicecontextsynchronize_ PETSCDEVICECONTEXTSYNCHRONIZE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscdevicecontextsynchronize_ petscdevicecontextsynchronize
#endif
PETSC_EXTERN void petscdevicecontextsynchronize_(PetscDeviceContext *dctx, PetscErrorCode *ierr)
{
  *ierr = PetscDeviceContextSynchronize(*dctx);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscdevice.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscdevicecontextsetfromoptions_ PETSCDEVICECONTEXTSETFROMOPTIONS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscdevicecontextsetfromoptions_ petscdevicecontextsetfromoptions
#endif
PETSC_EXTERN void petscdevicecontextsetfromoptions_(MPI_Fint *comm, PetscDeviceContext *dctx, PetscErrorCode *ierr)
{
  *ierr = PetscDeviceContextSetFromOptions(MPI_Comm_f2c(*(comm)), *dctx);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscdevice.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscdevicecontextview_ PETSCDEVICECONTEXTVIEW
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscdevicecontextview_ petscdevicecontextview
#endif
PETSC_EXTERN void petscdevicecontextview_(PetscDeviceContext *dctx, PetscViewer *viewer, PetscErrorCode *ierr)
{
  PetscViewer v_viewer = PetscPatchDefaultViewers(viewer);
  *ierr = PetscDeviceContextView(*dctx, v_viewer);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscdevice.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscdevicecontextviewfromoptions_ PETSCDEVICECONTEXTVIEWFROMOPTIONS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscdevicecontextviewfromoptions_ petscdevicecontextviewfromoptions
#endif
PETSC_EXTERN void petscdevicecontextviewfromoptions_(PetscDeviceContext *dctx, PetscObject *obj, char name[], PetscErrorCode *ierr, PETSC_FORTRAN_CHARLEN_T l_name)
{
  char* c_name;
  FIXCHAR(name, l_name, c_name);
  *ierr = PetscDeviceContextViewFromOptions(*dctx, *obj, c_name);
  if (*ierr) return;
  FREECHAR(name, c_name);
}
