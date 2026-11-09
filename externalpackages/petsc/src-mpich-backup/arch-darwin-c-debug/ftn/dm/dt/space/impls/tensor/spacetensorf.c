#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscspace.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscspacetensorsetnumsubspaces_ PETSCSPACETENSORSETNUMSUBSPACES
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscspacetensorsetnumsubspaces_ petscspacetensorsetnumsubspaces
#endif
PETSC_EXTERN void petscspacetensorsetnumsubspaces_(PetscSpace *sp, PetscInt *numTensSpaces, PetscErrorCode *ierr)
{
  *ierr = PetscSpaceTensorSetNumSubspaces(*sp, *numTensSpaces);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscspace.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscspacetensorgetnumsubspaces_ PETSCSPACETENSORGETNUMSUBSPACES
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscspacetensorgetnumsubspaces_ petscspacetensorgetnumsubspaces
#endif
PETSC_EXTERN void petscspacetensorgetnumsubspaces_(PetscSpace *sp, PetscInt *numTensSpaces, PetscErrorCode *ierr)
{
  CHKFORTRANNULLINTEGER(numTensSpaces);
  *ierr = PetscSpaceTensorGetNumSubspaces(*sp, numTensSpaces);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscspace.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscspacetensorsetsubspace_ PETSCSPACETENSORSETSUBSPACE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscspacetensorsetsubspace_ petscspacetensorsetsubspace
#endif
PETSC_EXTERN void petscspacetensorsetsubspace_(PetscSpace *sp, PetscInt *s, PetscSpace *subsp, PetscErrorCode *ierr)
{
  *ierr = PetscSpaceTensorSetSubspace(*sp, *s, *subsp);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscspace.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscspacetensorgetsubspace_ PETSCSPACETENSORGETSUBSPACE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscspacetensorgetsubspace_ petscspacetensorgetsubspace
#endif
PETSC_EXTERN void petscspacetensorgetsubspace_(PetscSpace *sp, PetscInt *s, PetscSpace *subsp, PetscErrorCode *ierr)
{
  PetscBool null_subsp = !*(void**) subsp ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(subsp);
  *ierr = PetscSpaceTensorGetSubspace(*sp, *s, subsp);
  if (*ierr) return;
  if (! null_subsp && !*(void**) subsp) *(void **) subsp = (void *)-2;
}
