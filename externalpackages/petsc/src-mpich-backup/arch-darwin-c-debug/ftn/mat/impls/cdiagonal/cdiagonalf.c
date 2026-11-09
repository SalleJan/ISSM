#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscmat.h>
#include <petscmat.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define matcreateconstantdiagonal_ MATCREATECONSTANTDIAGONAL
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define matcreateconstantdiagonal_ matcreateconstantdiagonal
#endif
PETSC_EXTERN void matcreateconstantdiagonal_(MPI_Fint *comm, PetscInt *m, PetscInt *n, PetscInt *M_M, PetscInt *M_N, PetscScalar *diag, Mat *J, PetscErrorCode *ierr)
{
  PetscBool null_J = !*(void**) J ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(J);
  *ierr = MatCreateConstantDiagonal(MPI_Comm_f2c(*(comm)), *m, *n, *M_M, *M_N, *diag, J);
  if (*ierr) return;
  if (! null_J && !*(void**) J) *(void **) J = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscmat.h>
#include <petscmat.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define matconstantdiagonalgetconstant_ MATCONSTANTDIAGONALGETCONSTANT
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define matconstantdiagonalgetconstant_ matconstantdiagonalgetconstant
#endif
PETSC_EXTERN void matconstantdiagonalgetconstant_(Mat *mat, PetscScalar *value, PetscErrorCode *ierr)
{
  CHKFORTRANNULLSCALAR(value);
  *ierr = MatConstantDiagonalGetConstant(*mat, value);
  if (*ierr) return;
}
