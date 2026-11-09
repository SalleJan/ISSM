#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscmat.h>
#include <petscmat.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define matcreateaijhipsparse_ MATCREATEAIJHIPSPARSE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define matcreateaijhipsparse_ matcreateaijhipsparse
#endif
PETSC_EXTERN void matcreateaijhipsparse_(MPI_Fint *comm, PetscInt *m, PetscInt *n, PetscInt *M_M, PetscInt *M_N, PetscInt *d_nz, const PetscInt d_nnz[], PetscInt *o_nz, const PetscInt o_nnz[], Mat *A, PetscErrorCode *ierr)
{
  PetscBool null_A = !*(void**) A ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLINTEGER(d_nnz);
  CHKFORTRANNULLINTEGER(o_nnz);
  CHKFORTRANNULLOBJECT(A);
  *ierr = MatCreateAIJHIPSPARSE(MPI_Comm_f2c(*(comm)), *m, *n, *M_M, *M_N, *d_nz, d_nnz, *o_nz, o_nnz, A);
  if (*ierr) return;
  if (! null_A && !*(void**) A) *(void **) A = (void *)-2;
}
