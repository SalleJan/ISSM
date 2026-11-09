#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsnes.h>
#include <petscsnes.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define snesncgsettype_ SNESNCGSETTYPE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define snesncgsettype_ snesncgsettype
#endif
PETSC_EXTERN void snesncgsettype_(SNES *snes, SNESNCGType *btype, PetscErrorCode *ierr)
{
  *ierr = SNESNCGSetType(*snes, *btype);
  if (*ierr) return;
}
