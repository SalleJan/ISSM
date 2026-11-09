#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscsys.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscsortintwithpermutation_ PETSCSORTINTWITHPERMUTATION
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscsortintwithpermutation_ petscsortintwithpermutation
#endif
PETSC_EXTERN void petscsortintwithpermutation_(PetscInt *n, const PetscInt i[], PetscInt idx[], PetscErrorCode *ierr)
{
  CHKFORTRANNULLINTEGER(i);
  CHKFORTRANNULLINTEGER(idx);
  *ierr = PetscSortIntWithPermutation(*n, i, idx);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscsys.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscsortrealwithpermutation_ PETSCSORTREALWITHPERMUTATION
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscsortrealwithpermutation_ petscsortrealwithpermutation
#endif
PETSC_EXTERN void petscsortrealwithpermutation_(PetscInt *n, const PetscReal i[], PetscInt idx[], PetscErrorCode *ierr)
{
  CHKFORTRANNULLREAL(i);
  CHKFORTRANNULLINTEGER(idx);
  *ierr = PetscSortRealWithPermutation(*n, i, idx);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscsys.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscsortstrwithpermutation_ PETSCSORTSTRWITHPERMUTATION
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscsortstrwithpermutation_ petscsortstrwithpermutation
#endif
PETSC_EXTERN void petscsortstrwithpermutation_(PetscInt *n, char i[], PetscInt idx[], PetscErrorCode *ierr, PETSC_FORTRAN_CHARLEN_T l_i)
{
  char* c_i = PETSC_NULLPTR;
  CHKFORTRANNULLINTEGER(idx);
  *ierr = PetscSortStrWithPermutation(*n, (const char **)&c_i, idx);
  if (*ierr) return;
  *ierr = PetscStrncpy((char *)i, c_i, l_i);
  if (*ierr) return;
  FIXRETURNCHAR(PETSC_TRUE, i, l_i);
}
