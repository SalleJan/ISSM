#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscmat.h>
#include <petscmat.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define matcreatesubmatrixvirtual_ MATCREATESUBMATRIXVIRTUAL
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define matcreatesubmatrixvirtual_ matcreatesubmatrixvirtual
#endif
PETSC_EXTERN void matcreatesubmatrixvirtual_(Mat *A, IS *isrow, IS *iscol, Mat *newmat, PetscErrorCode *ierr)
{
  PetscBool null_newmat = !*(void**) newmat ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(newmat);
  *ierr = MatCreateSubMatrixVirtual(*A, *isrow, *iscol, newmat);
  if (*ierr) return;
  if (! null_newmat && !*(void**) newmat) *(void **) newmat = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscmat.h>
#include <petscmat.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define matsubmatrixvirtualupdate_ MATSUBMATRIXVIRTUALUPDATE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define matsubmatrixvirtualupdate_ matsubmatrixvirtualupdate
#endif
PETSC_EXTERN void matsubmatrixvirtualupdate_(Mat *N, Mat *A, IS *isrow, IS *iscol, PetscErrorCode *ierr)
{
  *ierr = MatSubMatrixVirtualUpdate(*N, *A, *isrow, *iscol);
  if (*ierr) return;
}
