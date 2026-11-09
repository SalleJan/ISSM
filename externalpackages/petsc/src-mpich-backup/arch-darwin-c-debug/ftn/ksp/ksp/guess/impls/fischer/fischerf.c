#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscksp.h>
#include <petscksp.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define kspguessfischersetmodel_ KSPGUESSFISCHERSETMODEL
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define kspguessfischersetmodel_ kspguessfischersetmodel
#endif
PETSC_EXTERN void kspguessfischersetmodel_(KSPGuess *guess, PetscInt *model, PetscInt *size, PetscErrorCode *ierr)
{
  *ierr = KSPGuessFischerSetModel(*guess, *model, *size);
  if (*ierr) return;
}
