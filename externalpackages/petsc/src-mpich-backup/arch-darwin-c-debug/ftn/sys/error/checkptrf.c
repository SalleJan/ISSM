#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscerror.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petsccheckpointersetintensity_ PETSCCHECKPOINTERSETINTENSITY
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petsccheckpointersetintensity_ petsccheckpointersetintensity
#endif
PETSC_EXTERN void petsccheckpointersetintensity_(PetscInt *intensity, PetscErrorCode *ierr)
{
  *ierr = PetscCheckPointerSetIntensity(*intensity);
  if (*ierr) return;
}
