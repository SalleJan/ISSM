#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscmat.h>
#include <petscmat.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define matcreatempiaijcrl_ MATCREATEMPIAIJCRL
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define matcreatempiaijcrl_ matcreatempiaijcrl
#endif
PETSC_EXTERN void matcreatempiaijcrl_(MPI_Fint *comm, PetscInt *m, PetscInt *n, PetscInt *nz, const PetscInt nnz[], PetscInt *onz, const PetscInt onnz[], Mat *A, PetscErrorCode *ierr)
{
  PetscBool null_A = !*(void**) A ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLINTEGER(nnz);
  CHKFORTRANNULLINTEGER(onnz);
  CHKFORTRANNULLOBJECT(A);
  *ierr = MatCreateMPIAIJCRL(MPI_Comm_f2c(*(comm)), *m, *n, *nz, nnz, *onz, onnz, A);
  if (*ierr) return;
  if (! null_A && !*(void**) A) *(void **) A = (void *)-2;
}
