#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscksp.h>
#include <petscksp.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define matcreatelmvmdfp_ MATCREATELMVMDFP
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define matcreatelmvmdfp_ matcreatelmvmdfp
#endif
PETSC_EXTERN void matcreatelmvmdfp_(MPI_Fint *comm, PetscInt *n, PetscInt *M_N, Mat *B, PetscErrorCode *ierr)
{
  PetscBool null_B = !*(void**) B ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(B);
  *ierr = MatCreateLMVMDFP(MPI_Comm_f2c(*(comm)), *n, *M_N, B);
  if (*ierr) return;
  if (! null_B && !*(void**) B) *(void **) B = (void *)-2;
}
