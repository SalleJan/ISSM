#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscksp.h>
#include <petscpc.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define pcbjacobisettotalblocks_ PCBJACOBISETTOTALBLOCKS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define pcbjacobisettotalblocks_ pcbjacobisettotalblocks
#endif
PETSC_EXTERN void pcbjacobisettotalblocks_(PC *pc, PetscInt *blocks, const PetscInt lens[], PetscErrorCode *ierr)
{
  CHKFORTRANNULLINTEGER(lens);
  *ierr = PCBJacobiSetTotalBlocks(*pc, *blocks, lens);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscksp.h>
#include <petscpc.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define pcbjacobisetlocalblocks_ PCBJACOBISETLOCALBLOCKS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define pcbjacobisetlocalblocks_ pcbjacobisetlocalblocks
#endif
PETSC_EXTERN void pcbjacobisetlocalblocks_(PC *pc, PetscInt *blocks, const PetscInt lens[], PetscErrorCode *ierr)
{
  CHKFORTRANNULLINTEGER(lens);
  *ierr = PCBJacobiSetLocalBlocks(*pc, *blocks, lens);
  if (*ierr) return;
}
