#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscmat.h>
#include <petscmat.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define matcreatecentering_ MATCREATECENTERING
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define matcreatecentering_ matcreatecentering
#endif
PETSC_EXTERN void matcreatecentering_(MPI_Fint *comm, PetscInt *n, PetscInt *M_N, Mat *C, PetscErrorCode *ierr)
{
  PetscBool null_C = !*(void**) C ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(C);
  *ierr = MatCreateCentering(MPI_Comm_f2c(*(comm)), *n, *M_N, C);
  if (*ierr) return;
  if (! null_C && !*(void**) C) *(void **) C = (void *)-2;
}
