#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscdraw.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscdrawlgaddcommonpoint_ PETSCDRAWLGADDCOMMONPOINT
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscdrawlgaddcommonpoint_ petscdrawlgaddcommonpoint
#endif
PETSC_EXTERN void petscdrawlgaddcommonpoint_(PetscDrawLG *lg, const PetscReal *x, const PetscReal *y, PetscErrorCode *ierr)
{
  CHKFORTRANNULLREAL(y);
  *ierr = PetscDrawLGAddCommonPoint(*lg, *x, y);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscdraw.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscdrawlgaddpoint_ PETSCDRAWLGADDPOINT
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscdrawlgaddpoint_ petscdrawlgaddpoint
#endif
PETSC_EXTERN void petscdrawlgaddpoint_(PetscDrawLG *lg, const PetscReal *x, const PetscReal *y, PetscErrorCode *ierr)
{
  CHKFORTRANNULLREAL(x);
  CHKFORTRANNULLREAL(y);
  *ierr = PetscDrawLGAddPoint(*lg, x, y);
  if (*ierr) return;
}
