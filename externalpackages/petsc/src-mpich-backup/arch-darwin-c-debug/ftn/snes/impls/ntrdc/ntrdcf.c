#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsnes.h>
#include <petscsnes.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define snesnewtontrdcgetrhoflag_ SNESNEWTONTRDCGETRHOFLAG
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define snesnewtontrdcgetrhoflag_ snesnewtontrdcgetrhoflag
#endif
PETSC_EXTERN void snesnewtontrdcgetrhoflag_(SNES *snes, PetscBool *rho_flag, PetscErrorCode *ierr)
{
  CHKFORTRANNULLBOOL(rho_flag);
  *ierr = SNESNewtonTRDCGetRhoFlag(*snes, rho_flag);
  if (*ierr) return;
}
