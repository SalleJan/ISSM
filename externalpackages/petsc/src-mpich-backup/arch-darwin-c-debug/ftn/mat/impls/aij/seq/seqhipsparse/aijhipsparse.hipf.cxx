#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscmat.h>
#include <petscmat.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define mathipsparsesetformat_ MATHIPSPARSESETFORMAT
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define mathipsparsesetformat_ mathipsparsesetformat
#endif
PETSC_EXTERN void mathipsparsesetformat_(Mat *A, MatHIPSPARSEFormatOperation *op, MatHIPSPARSEStorageFormat *format, PetscErrorCode *ierr)
{
  *ierr = MatHIPSPARSESetFormat(*A, *op, *format);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscmat.h>
#include <petscmat.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define mathipsparsesetusecpusolve_ MATHIPSPARSESETUSECPUSOLVE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define mathipsparsesetusecpusolve_ mathipsparsesetusecpusolve
#endif
PETSC_EXTERN void mathipsparsesetusecpusolve_(Mat *A, PetscBool *use_cpu, PetscErrorCode *ierr)
{
  *ierr = MatHIPSPARSESetUseCPUSolve(*A, *use_cpu ? PETSC_TRUE : PETSC_FALSE);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscmat.h>
#include <petscmat.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define matcreateseqaijhipsparse_ MATCREATESEQAIJHIPSPARSE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define matcreateseqaijhipsparse_ matcreateseqaijhipsparse
#endif
PETSC_EXTERN void matcreateseqaijhipsparse_(MPI_Fint *comm, PetscInt *m, PetscInt *n, PetscInt *nz, const PetscInt nnz[], Mat *A, PetscErrorCode *ierr)
{
  PetscBool null_A = !*(void**) A ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLINTEGER(nnz);
  CHKFORTRANNULLOBJECT(A);
  *ierr = MatCreateSeqAIJHIPSPARSE(MPI_Comm_f2c(*(comm)), *m, *n, *nz, nnz, A);
  if (*ierr) return;
  if (! null_A && !*(void**) A) *(void **) A = (void *)-2;
}
