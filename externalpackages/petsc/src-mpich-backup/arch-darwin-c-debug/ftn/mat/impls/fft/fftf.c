#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscmat.h>
#include <petscmat.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define matcreatefft_ MATCREATEFFT
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define matcreatefft_ matcreatefft
#endif
PETSC_EXTERN void matcreatefft_(MPI_Fint *comm, PetscInt *ndim, const PetscInt dim[], char *mattype, Mat *A, PetscErrorCode *ierr, PETSC_FORTRAN_CHARLEN_T l_mattype)
{
  PetscBool null_A = !*(void**) A ? PETSC_TRUE : PETSC_FALSE;
  char* c_mattype;
  FIXCHAR(mattype, l_mattype, c_mattype);
  CHKFORTRANNULLINTEGER(dim);
  CHKFORTRANNULLOBJECT(A);
  *ierr = MatCreateFFT(MPI_Comm_f2c(*(comm)), *ndim, dim, c_mattype, A);
  if (*ierr) return;
  FREECHAR(mattype, c_mattype);
  if (! null_A && !*(void**) A) *(void **) A = (void *)-2;
}
