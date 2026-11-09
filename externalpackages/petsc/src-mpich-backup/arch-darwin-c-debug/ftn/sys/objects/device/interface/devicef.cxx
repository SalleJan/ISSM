#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscdevice.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscdevicecreate_ PETSCDEVICECREATE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscdevicecreate_ petscdevicecreate
#endif
PETSC_EXTERN void petscdevicecreate_(PetscDeviceType *type, PetscInt *devid, PetscDevice *device, PetscErrorCode *ierr)
{
  PetscBool null_device = !*(void**) device ? PETSC_TRUE : PETSC_FALSE;
  PETSC_FORTRAN_OBJECT_CREATE(device);
  CHKFORTRANNULLOBJECT(device);
  *ierr = PetscDeviceCreate(*type, *devid, device);
  if (*ierr) return;
  if (! null_device && !*(void**) device) *(void **) device = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscdevice.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscdevicedestroy_ PETSCDEVICEDESTROY
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscdevicedestroy_ petscdevicedestroy
#endif
PETSC_EXTERN void petscdevicedestroy_(PetscDevice *device, PetscErrorCode *ierr)
{
  PETSC_FORTRAN_OBJECT_F_DESTROYED_TO_C_NULL(device);
  PetscBool null_device = !*(void**) device ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(device);
  *ierr = PetscDeviceDestroy(device);
  if (*ierr) return;
  if (! null_device && !*(void**) device) *(void **) device = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscdevice.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscdeviceconfigure_ PETSCDEVICECONFIGURE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscdeviceconfigure_ petscdeviceconfigure
#endif
PETSC_EXTERN void petscdeviceconfigure_(PetscDevice *device, PetscErrorCode *ierr)
{
  *ierr = PetscDeviceConfigure(*device);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscdevice.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscdeviceview_ PETSCDEVICEVIEW
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscdeviceview_ petscdeviceview
#endif
PETSC_EXTERN void petscdeviceview_(PetscDevice *device, PetscViewer *viewer, PetscErrorCode *ierr)
{
  PetscViewer v_viewer = PetscPatchDefaultViewers(viewer);
  *ierr = PetscDeviceView(*device, v_viewer);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscdevice.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscdevicegettype_ PETSCDEVICEGETTYPE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscdevicegettype_ petscdevicegettype
#endif
PETSC_EXTERN void petscdevicegettype_(PetscDevice *device, PetscDeviceType *type, PetscErrorCode *ierr)
{
  *ierr = PetscDeviceGetType(*device, type);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscdevice.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscdevicegetdeviceid_ PETSCDEVICEGETDEVICEID
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscdevicegetdeviceid_ petscdevicegetdeviceid
#endif
PETSC_EXTERN void petscdevicegetdeviceid_(PetscDevice *device, PetscInt *id, PetscErrorCode *ierr)
{
  CHKFORTRANNULLINTEGER(id);
  *ierr = PetscDeviceGetDeviceId(*device, id);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscdevice.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscdevicesetdefaultdevicetype_ PETSCDEVICESETDEFAULTDEVICETYPE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscdevicesetdefaultdevicetype_ petscdevicesetdefaultdevicetype
#endif
PETSC_EXTERN void petscdevicesetdefaultdevicetype_(PetscDeviceType *type, PetscErrorCode *ierr)
{
  *ierr = PetscDeviceSetDefaultDeviceType(*type);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscdevice.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscdeviceinitialize_ PETSCDEVICEINITIALIZE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscdeviceinitialize_ petscdeviceinitialize
#endif
PETSC_EXTERN void petscdeviceinitialize_(PetscDeviceType *type, PetscErrorCode *ierr)
{
  *ierr = PetscDeviceInitialize(*type);
  if (*ierr) return;
}
