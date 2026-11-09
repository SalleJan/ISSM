#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscmat.h>
#include <petscmat.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define matreorderfornonzerodiagonal_ MATREORDERFORNONZERODIAGONAL
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define matreorderfornonzerodiagonal_ matreorderfornonzerodiagonal
#endif
PETSC_EXTERN void matreorderfornonzerodiagonal_(Mat *mat, PetscReal *abstol, IS *ris, IS *cis, PetscErrorCode *ierr)
{
  *ierr = MatReorderForNonzeroDiagonal(*mat, *abstol, *ris, *cis);
  if (*ierr) return;
}
