#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscerror.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscfptrappush_ PETSCFPTRAPPUSH
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscfptrappush_ petscfptrappush
#endif
PETSC_EXTERN void petscfptrappush_(PetscFPTrap *trap, PetscErrorCode *ierr)
{
  *ierr = PetscFPTrapPush(*trap);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscerror.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscfptrappop_ PETSCFPTRAPPOP
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscfptrappop_ petscfptrappop
#endif
PETSC_EXTERN void petscfptrappop_(PetscErrorCode *ierr)
{
  *ierr = PetscFPTrapPop();
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscerror.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscsetfptrap_ PETSCSETFPTRAP
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscsetfptrap_ petscsetfptrap
#endif
PETSC_EXTERN void petscsetfptrap_(PetscFPTrap *flag, PetscErrorCode *ierr)
{
  *ierr = PetscSetFPTrap(*flag);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscerror.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscdetermineinitialfptrap_ PETSCDETERMINEINITIALFPTRAP
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscdetermineinitialfptrap_ petscdetermineinitialfptrap
#endif
PETSC_EXTERN void petscdetermineinitialfptrap_(PetscErrorCode *ierr)
{
  *ierr = PetscDetermineInitialFPTrap();
  if (*ierr) return;
}
