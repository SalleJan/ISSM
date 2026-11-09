#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscspace.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscspacepolynomialsettensor_ PETSCSPACEPOLYNOMIALSETTENSOR
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscspacepolynomialsettensor_ petscspacepolynomialsettensor
#endif
PETSC_EXTERN void petscspacepolynomialsettensor_(PetscSpace *sp, PetscBool *tensor, PetscErrorCode *ierr)
{
  *ierr = PetscSpacePolynomialSetTensor(*sp, *tensor ? PETSC_TRUE : PETSC_FALSE);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscspace.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscspacepolynomialgettensor_ PETSCSPACEPOLYNOMIALGETTENSOR
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscspacepolynomialgettensor_ petscspacepolynomialgettensor
#endif
PETSC_EXTERN void petscspacepolynomialgettensor_(PetscSpace *sp, PetscBool *tensor, PetscErrorCode *ierr)
{
  CHKFORTRANNULLBOOL(tensor);
  *ierr = PetscSpacePolynomialGetTensor(*sp, tensor);
  if (*ierr) return;
}
