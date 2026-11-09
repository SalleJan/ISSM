#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscdevice.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscdevicecontextgetcurrentcontext_ PETSCDEVICECONTEXTGETCURRENTCONTEXT
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscdevicecontextgetcurrentcontext_ petscdevicecontextgetcurrentcontext
#endif
PETSC_EXTERN void petscdevicecontextgetcurrentcontext_(PetscDeviceContext *dctx, PetscErrorCode *ierr)
{
  PetscBool null_dctx = !*(void**) dctx ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(dctx);
  *ierr = PetscDeviceContextGetCurrentContext(dctx);
  if (*ierr) return;
  if (! null_dctx && !*(void**) dctx) *(void **) dctx = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscdevice.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscdevicecontextsetcurrentcontext_ PETSCDEVICECONTEXTSETCURRENTCONTEXT
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscdevicecontextsetcurrentcontext_ petscdevicecontextsetcurrentcontext
#endif
PETSC_EXTERN void petscdevicecontextsetcurrentcontext_(PetscDeviceContext *dctx, PetscErrorCode *ierr)
{
  *ierr = PetscDeviceContextSetCurrentContext(*dctx);
  if (*ierr) return;
}
