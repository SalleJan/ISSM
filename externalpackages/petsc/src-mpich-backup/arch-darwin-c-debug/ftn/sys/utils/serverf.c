#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscsys.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define pcmpiserveraddressesdestroycptr_ PCMPISERVERADDRESSESDESTROYCPTR
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define pcmpiserveraddressesdestroycptr_ pcmpiserveraddressesdestroycptr
#endif
PETSC_EXTERN void pcmpiserveraddressesdestroycptr_(PetscCtxRt ctx, PetscErrorCode *ierr)
{
  *ierr = PCMPIServerAddressesDestroy(ctx);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscsys.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscshmgetaddressesfinalize_ PETSCSHMGETADDRESSESFINALIZE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscshmgetaddressesfinalize_ petscshmgetaddressesfinalize
#endif
PETSC_EXTERN void petscshmgetaddressesfinalize_(PetscErrorCode *ierr)
{
  *ierr = PetscShmgetAddressesFinalize();
  if (*ierr) return;
}
