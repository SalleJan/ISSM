#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscvec.h>
#include <petscis.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define isequal_ ISEQUAL
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define isequal_ isequal
#endif
PETSC_EXTERN void isequal_(IS *is1, IS *is2, PetscBool *flg, PetscErrorCode *ierr)
{
  CHKFORTRANNULLBOOL(flg);
  *ierr = ISEqual(*is1, *is2, flg);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscvec.h>
#include <petscis.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define isequalunsorted_ ISEQUALUNSORTED
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define isequalunsorted_ isequalunsorted
#endif
PETSC_EXTERN void isequalunsorted_(IS *is1, IS *is2, PetscBool *flg, PetscErrorCode *ierr)
{
  CHKFORTRANNULLBOOL(flg);
  *ierr = ISEqualUnsorted(*is1, *is2, flg);
  if (*ierr) return;
}
