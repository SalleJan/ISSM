#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsnes.h>
#include <petscsnes.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define snespatchsetcellnumbering_ SNESPATCHSETCELLNUMBERING
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define snespatchsetcellnumbering_ snespatchsetcellnumbering
#endif
PETSC_EXTERN void snespatchsetcellnumbering_(SNES *snes, PetscSection *cellNumbering, PetscErrorCode *ierr)
{
  *ierr = SNESPatchSetCellNumbering(*snes, *cellNumbering);
  if (*ierr) return;
}
