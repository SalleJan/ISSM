#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscmat.h>
#include <petscmat.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define matinodeadjustforinodes_ MATINODEADJUSTFORINODES
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define matinodeadjustforinodes_ matinodeadjustforinodes
#endif
PETSC_EXTERN void matinodeadjustforinodes_(Mat *A, IS *rperm, IS *cperm, PetscErrorCode *ierr)
{
  PetscBool null_rperm = !*(void**) rperm ? PETSC_TRUE : PETSC_FALSE;
  PetscBool null_cperm = !*(void**) cperm ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(rperm);
  CHKFORTRANNULLOBJECT(cperm);
  *ierr = MatInodeAdjustForInodes(*A, rperm, cperm);
  if (*ierr) return;
  if (! null_rperm && !*(void**) rperm) *(void **) rperm = (void *)-2;
  if (! null_cperm && !*(void**) cperm) *(void **) cperm = (void *)-2;
}
