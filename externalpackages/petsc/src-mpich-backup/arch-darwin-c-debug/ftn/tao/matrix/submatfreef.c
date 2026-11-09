#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petsctao.h>
#include <petsctao.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define matcreatesubmatrixfree_ MATCREATESUBMATRIXFREE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define matcreatesubmatrixfree_ matcreatesubmatrixfree
#endif
PETSC_EXTERN void matcreatesubmatrixfree_(Mat *mat, IS *Rows, IS *Cols, Mat *J, PetscErrorCode *ierr)
{
  PetscBool null_J = !*(void**) J ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(J);
  *ierr = MatCreateSubMatrixFree(*mat, *Rows, *Cols, J);
  if (*ierr) return;
  if (! null_J && !*(void**) J) *(void **) J = (void *)-2;
}
