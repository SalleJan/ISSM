#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscerror.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscsignalhandlerdefault_ PETSCSIGNALHANDLERDEFAULT
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscsignalhandlerdefault_ petscsignalhandlerdefault
#endif
PETSC_EXTERN void petscsignalhandlerdefault_(int *sig, void *ptr, PetscErrorCode *ierr)
{
  *ierr = PetscSignalHandlerDefault(*sig, ptr);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscerror.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscpopsignalhandler_ PETSCPOPSIGNALHANDLER
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscpopsignalhandler_ petscpopsignalhandler
#endif
PETSC_EXTERN void petscpopsignalhandler_(PetscErrorCode *ierr)
{
  *ierr = PetscPopSignalHandler();
  if (*ierr) return;
}
