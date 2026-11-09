#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscdraw.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscdrawopenx_ PETSCDRAWOPENX
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscdrawopenx_ petscdrawopenx
#endif
PETSC_EXTERN void petscdrawopenx_(MPI_Fint *comm, char display[], char title[], int *x, int *y, int *w, int *h, PetscDraw *draw, PetscErrorCode *ierr, PETSC_FORTRAN_CHARLEN_T l_display, PETSC_FORTRAN_CHARLEN_T l_title)
{
  PetscBool null_draw = !*(void**) draw ? PETSC_TRUE : PETSC_FALSE;
  char* c_display;
  FIXCHAR(display, l_display, c_display);
  char* c_title;
  FIXCHAR(title, l_title, c_title);
  CHKFORTRANNULLOBJECT(draw);
  *ierr = PetscDrawOpenX(MPI_Comm_f2c(*(comm)), c_display, c_title, *x, *y, *w, *h, draw);
  if (*ierr) return;
  FREECHAR(display, c_display);
  FREECHAR(title, c_title);
  if (! null_draw && !*(void**) draw) *(void **) draw = (void *)-2;
}
