#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscdraw.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscdrawclear_ PETSCDRAWCLEAR
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscdrawclear_ petscdrawclear
#endif
PETSC_EXTERN void petscdrawclear_(PetscDraw *draw, PetscErrorCode *ierr)
{
  *ierr = PetscDrawClear(*draw);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscdraw.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscdrawbop_ PETSCDRAWBOP
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscdrawbop_ petscdrawbop
#endif
PETSC_EXTERN void petscdrawbop_(PetscDraw *draw, PetscErrorCode *ierr)
{
  *ierr = PetscDrawBOP(*draw);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscdraw.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscdraweop_ PETSCDRAWEOP
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscdraweop_ petscdraweop
#endif
PETSC_EXTERN void petscdraweop_(PetscDraw *draw, PetscErrorCode *ierr)
{
  *ierr = PetscDrawEOP(*draw);
  if (*ierr) return;
}
