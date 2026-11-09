#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petsctime.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petsctime_ PETSCTIME
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petsctime_ petsctime
#endif
PETSC_EXTERN void petsctime_(PetscLogDouble *v, PetscErrorCode *ierr)
{
  *ierr = PetscTime(v);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petsctime.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petsctimesubtract_ PETSCTIMESUBTRACT
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petsctimesubtract_ petsctimesubtract
#endif
PETSC_EXTERN void petsctimesubtract_(PetscLogDouble *v, PetscErrorCode *ierr)
{
  *ierr = PetscTimeSubtract(v);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petsctime.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petsctimeadd_ PETSCTIMEADD
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petsctimeadd_ petsctimeadd
#endif
PETSC_EXTERN void petsctimeadd_(PetscLogDouble *v, PetscErrorCode *ierr)
{
  *ierr = PetscTimeAdd(v);
  if (*ierr) return;
}
