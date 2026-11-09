#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscsys.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscintmulterror_ PETSCINTMULTERROR
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscintmulterror_ petscintmulterror
#endif
PETSC_EXTERN void petscintmulterror_(PetscInt *a, PetscInt *b, PetscInt *result, PetscErrorCode *ierr)
{
  CHKFORTRANNULLINTEGER(result);
  *ierr = PetscIntMultError(*a, *b, result);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscsys.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscintsumerror_ PETSCINTSUMERROR
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscintsumerror_ petscintsumerror
#endif
PETSC_EXTERN void petscintsumerror_(PetscInt *a, PetscInt *b, PetscInt *result, PetscErrorCode *ierr)
{
  CHKFORTRANNULLINTEGER(result);
  *ierr = PetscIntSumError(*a, *b, result);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscsys.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petsccitationsregister_ PETSCCITATIONSREGISTER
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petsccitationsregister_ petsccitationsregister
#endif
PETSC_EXTERN void petsccitationsregister_(char cit[], PetscBool *set, PetscErrorCode *ierr, PETSC_FORTRAN_CHARLEN_T l_cit)
{
  char* c_cit;
  FIXCHAR(cit, l_cit, c_cit);
  CHKFORTRANNULLBOOL(set);
  *ierr = PetscCitationsRegister(c_cit, set);
  if (*ierr) return;
  FREECHAR(cit, c_cit);
}
