#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscdraw.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscdrawpause_ PETSCDRAWPAUSE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscdrawpause_ petscdrawpause
#endif
PETSC_EXTERN void petscdrawpause_(PetscDraw *draw, PetscErrorCode *ierr)
{
  *ierr = PetscDrawPause(*draw);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscdraw.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscdrawsetpause_ PETSCDRAWSETPAUSE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscdrawsetpause_ petscdrawsetpause
#endif
PETSC_EXTERN void petscdrawsetpause_(PetscDraw *draw, PetscReal *lpause, PetscErrorCode *ierr)
{
  *ierr = PetscDrawSetPause(*draw, *lpause);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscdraw.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscdrawgetpause_ PETSCDRAWGETPAUSE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscdrawgetpause_ petscdrawgetpause
#endif
PETSC_EXTERN void petscdrawgetpause_(PetscDraw *draw, PetscReal *lpause, PetscErrorCode *ierr)
{
  CHKFORTRANNULLREAL(lpause);
  *ierr = PetscDrawGetPause(*draw, lpause);
  if (*ierr) return;
}
