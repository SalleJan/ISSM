#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscdraw.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscdrawopenimage_ PETSCDRAWOPENIMAGE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscdrawopenimage_ petscdrawopenimage
#endif
PETSC_EXTERN void petscdrawopenimage_(MPI_Fint *comm, char filename[], int *w, int *h, PetscDraw *draw, PetscErrorCode *ierr, PETSC_FORTRAN_CHARLEN_T l_filename)
{
  PetscBool null_draw = !*(void**) draw ? PETSC_TRUE : PETSC_FALSE;
  char* c_filename;
  FIXCHAR(filename, l_filename, c_filename);
  CHKFORTRANNULLOBJECT(draw);
  *ierr = PetscDrawOpenImage(MPI_Comm_f2c(*(comm)), c_filename, *w, *h, draw);
  if (*ierr) return;
  FREECHAR(filename, c_filename);
  if (! null_draw && !*(void**) draw) *(void **) draw = (void *)-2;
}
