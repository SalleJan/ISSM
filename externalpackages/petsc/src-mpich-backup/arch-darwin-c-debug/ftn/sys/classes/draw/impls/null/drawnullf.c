#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscdraw.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscdrawopennull_ PETSCDRAWOPENNULL
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscdrawopennull_ petscdrawopennull
#endif
PETSC_EXTERN void petscdrawopennull_(MPI_Fint *comm, PetscDraw *win, PetscErrorCode *ierr)
{
  PetscBool null_win = !*(void**) win ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(win);
  *ierr = PetscDrawOpenNull(MPI_Comm_f2c(*(comm)), win);
  if (*ierr) return;
  if (! null_win && !*(void**) win) *(void **) win = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscdraw.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscdrawisnull_ PETSCDRAWISNULL
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscdrawisnull_ petscdrawisnull
#endif
PETSC_EXTERN void petscdrawisnull_(PetscDraw *draw, PetscBool *yes, PetscErrorCode *ierr)
{
  CHKFORTRANNULLBOOL(yes);
  *ierr = PetscDrawIsNull(*draw, yes);
  if (*ierr) return;
}
