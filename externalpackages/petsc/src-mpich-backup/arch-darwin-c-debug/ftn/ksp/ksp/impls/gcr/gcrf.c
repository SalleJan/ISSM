#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscksp.h>
#include <petscksp.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define kspgcrsetrestart_ KSPGCRSETRESTART
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define kspgcrsetrestart_ kspgcrsetrestart
#endif
PETSC_EXTERN void kspgcrsetrestart_(KSP *ksp, PetscInt *restart, PetscErrorCode *ierr)
{
  *ierr = KSPGCRSetRestart(*ksp, *restart);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscksp.h>
#include <petscksp.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define kspgcrgetrestart_ KSPGCRGETRESTART
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define kspgcrgetrestart_ kspgcrgetrestart
#endif
PETSC_EXTERN void kspgcrgetrestart_(KSP *ksp, PetscInt *restart, PetscErrorCode *ierr)
{
  CHKFORTRANNULLINTEGER(restart);
  *ierr = KSPGCRGetRestart(*ksp, restart);
  if (*ierr) return;
}
