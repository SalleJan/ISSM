#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmda.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmdasetblockfills_ DMDASETBLOCKFILLS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmdasetblockfills_ dmdasetblockfills
#endif
PETSC_EXTERN void dmdasetblockfills_(DM *da, const PetscInt *dfill, const PetscInt *ofill, PetscErrorCode *ierr)
{
  CHKFORTRANNULLINTEGER(dfill);
  CHKFORTRANNULLINTEGER(ofill);
  *ierr = DMDASetBlockFills(*da, dfill, ofill);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscdmda.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define dmdasetblockfillssparse_ DMDASETBLOCKFILLSSPARSE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define dmdasetblockfillssparse_ dmdasetblockfillssparse
#endif
PETSC_EXTERN void dmdasetblockfillssparse_(DM *da, const PetscInt *dfillsparse, const PetscInt *ofillsparse, PetscErrorCode *ierr)
{
  CHKFORTRANNULLINTEGER(dfillsparse);
  CHKFORTRANNULLINTEGER(ofillsparse);
  *ierr = DMDASetBlockFillsSparse(*da, dfillsparse, ofillsparse);
  if (*ierr) return;
}
