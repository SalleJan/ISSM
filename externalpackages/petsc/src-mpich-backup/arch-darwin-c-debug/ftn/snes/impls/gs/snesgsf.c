#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsnes.h>
#include <petscsnes.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define snesngssettolerances_ SNESNGSSETTOLERANCES
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define snesngssettolerances_ snesngssettolerances
#endif
PETSC_EXTERN void snesngssettolerances_(SNES *snes, PetscReal *abstol, PetscReal *rtol, PetscReal *stol, PetscInt *maxit, PetscErrorCode *ierr)
{
  *ierr = SNESNGSSetTolerances(*snes, *abstol, *rtol, *stol, *maxit);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsnes.h>
#include <petscsnes.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define snesngsgettolerances_ SNESNGSGETTOLERANCES
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define snesngsgettolerances_ snesngsgettolerances
#endif
PETSC_EXTERN void snesngsgettolerances_(SNES *snes, PetscReal *atol, PetscReal *rtol, PetscReal *stol, PetscInt *maxit, PetscErrorCode *ierr)
{
  CHKFORTRANNULLREAL(atol);
  CHKFORTRANNULLREAL(rtol);
  CHKFORTRANNULLREAL(stol);
  CHKFORTRANNULLINTEGER(maxit);
  *ierr = SNESNGSGetTolerances(*snes, atol, rtol, stol, maxit);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsnes.h>
#include <petscsnes.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define snesngssetsweeps_ SNESNGSSETSWEEPS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define snesngssetsweeps_ snesngssetsweeps
#endif
PETSC_EXTERN void snesngssetsweeps_(SNES *snes, PetscInt *sweeps, PetscErrorCode *ierr)
{
  *ierr = SNESNGSSetSweeps(*snes, *sweeps);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsnes.h>
#include <petscsnes.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define snesngsgetsweeps_ SNESNGSGETSWEEPS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define snesngsgetsweeps_ snesngsgetsweeps
#endif
PETSC_EXTERN void snesngsgetsweeps_(SNES *snes, PetscInt *sweeps, PetscErrorCode *ierr)
{
  CHKFORTRANNULLINTEGER(sweeps);
  *ierr = SNESNGSGetSweeps(*snes, sweeps);
  if (*ierr) return;
}
