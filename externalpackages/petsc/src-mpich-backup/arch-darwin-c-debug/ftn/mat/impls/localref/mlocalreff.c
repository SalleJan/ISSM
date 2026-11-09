#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscmat.h>
#include <petscmat.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define matcreatelocalref_ MATCREATELOCALREF
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define matcreatelocalref_ matcreatelocalref
#endif
PETSC_EXTERN void matcreatelocalref_(Mat *A, IS *isrow, IS *iscol, Mat *newmat, PetscErrorCode *ierr)
{
  PetscBool null_newmat = !*(void**) newmat ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(newmat);
  *ierr = MatCreateLocalRef(*A, *isrow, *iscol, newmat);
  if (*ierr) return;
  if (! null_newmat && !*(void**) newmat) *(void **) newmat = (void *)-2;
}
