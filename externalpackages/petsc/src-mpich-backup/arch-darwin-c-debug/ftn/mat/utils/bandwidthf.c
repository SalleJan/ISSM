#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscmat.h>
#include <petscmat.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define matcomputebandwidth_ MATCOMPUTEBANDWIDTH
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define matcomputebandwidth_ matcomputebandwidth
#endif
PETSC_EXTERN void matcomputebandwidth_(Mat *A, PetscReal *fraction, PetscInt *bw, PetscErrorCode *ierr)
{
  CHKFORTRANNULLINTEGER(bw);
  *ierr = MatComputeBandwidth(*A, *fraction, bw);
  if (*ierr) return;
}
