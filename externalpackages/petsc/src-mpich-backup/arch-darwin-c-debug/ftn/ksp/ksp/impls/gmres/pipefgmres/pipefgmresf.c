#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscksp.h>
#include <petscksp.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define ksppipefgmressetshift_ KSPPIPEFGMRESSETSHIFT
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define ksppipefgmressetshift_ ksppipefgmressetshift
#endif
PETSC_EXTERN void ksppipefgmressetshift_(KSP *ksp, PetscScalar *shift, PetscErrorCode *ierr)
{
  *ierr = KSPPIPEFGMRESSetShift(*ksp, *shift);
  if (*ierr) return;
}
