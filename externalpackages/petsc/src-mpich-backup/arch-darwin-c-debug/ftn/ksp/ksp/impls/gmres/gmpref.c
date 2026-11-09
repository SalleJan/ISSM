#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscksp.h>
#include <petscksp.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define kspgmressetpreallocatevectors_ KSPGMRESSETPREALLOCATEVECTORS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define kspgmressetpreallocatevectors_ kspgmressetpreallocatevectors
#endif
PETSC_EXTERN void kspgmressetpreallocatevectors_(KSP *ksp, PetscErrorCode *ierr)
{
  *ierr = KSPGMRESSetPreAllocateVectors(*ksp);
  if (*ierr) return;
}
