#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscdraw.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscdrawflush_ PETSCDRAWFLUSH
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscdrawflush_ petscdrawflush
#endif
PETSC_EXTERN void petscdrawflush_(PetscDraw *draw, PetscErrorCode *ierr)
{
  *ierr = PetscDrawFlush(*draw);
  if (*ierr) return;
}
