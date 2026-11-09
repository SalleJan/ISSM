#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscksp.h>
#include <petscpc.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define pcexoticsettype_ PCEXOTICSETTYPE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define pcexoticsettype_ pcexoticsettype
#endif
PETSC_EXTERN void pcexoticsettype_(PC *pc, PCExoticType *type, PetscErrorCode *ierr)
{
  *ierr = PCExoticSetType(*pc, *type);
  if (*ierr) return;
}
