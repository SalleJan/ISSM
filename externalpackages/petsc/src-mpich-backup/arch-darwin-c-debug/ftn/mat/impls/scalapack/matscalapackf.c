#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscmat.h>
#include <petscmat.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define matscalapacksetblocksizes_ MATSCALAPACKSETBLOCKSIZES
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define matscalapacksetblocksizes_ matscalapacksetblocksizes
#endif
PETSC_EXTERN void matscalapacksetblocksizes_(Mat *A, PetscInt *mb, PetscInt *nb, PetscErrorCode *ierr)
{
  *ierr = MatScaLAPACKSetBlockSizes(*A, *mb, *nb);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscmat.h>
#include <petscmat.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define matscalapackgetblocksizes_ MATSCALAPACKGETBLOCKSIZES
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define matscalapackgetblocksizes_ matscalapackgetblocksizes
#endif
PETSC_EXTERN void matscalapackgetblocksizes_(Mat *A, PetscInt *mb, PetscInt *nb, PetscErrorCode *ierr)
{
  CHKFORTRANNULLINTEGER(mb);
  CHKFORTRANNULLINTEGER(nb);
  *ierr = MatScaLAPACKGetBlockSizes(*A, mb, nb);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscmat.h>
#include <petscmat.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define matcreatescalapack_ MATCREATESCALAPACK
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define matcreatescalapack_ matcreatescalapack
#endif
PETSC_EXTERN void matcreatescalapack_(MPI_Fint *comm, PetscInt *mb, PetscInt *nb, PetscInt *M, PetscInt *N, PetscInt *rsrc, PetscInt *csrc, Mat *A, PetscErrorCode *ierr)
{
  PetscBool null_A = !*(void**) A ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(A);
  *ierr = MatCreateScaLAPACK(MPI_Comm_f2c(*(comm)), *mb, *nb, *M, *N, *rsrc, *csrc, A);
  if (*ierr) return;
  if (! null_A && !*(void**) A) *(void **) A = (void *)-2;
}
