#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscmat.h>
#include <petscmat.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define matcusparsesetformat_ MATCUSPARSESETFORMAT
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define matcusparsesetformat_ matcusparsesetformat
#endif
PETSC_EXTERN void matcusparsesetformat_(Mat *A, MatCUSPARSEFormatOperation *op, MatCUSPARSEStorageFormat *format, PetscErrorCode *ierr)
{
  *ierr = MatCUSPARSESetFormat(*A, *op, *format);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscmat.h>
#include <petscmat.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define matcusparsesetusecpusolve_ MATCUSPARSESETUSECPUSOLVE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define matcusparsesetusecpusolve_ matcusparsesetusecpusolve
#endif
PETSC_EXTERN void matcusparsesetusecpusolve_(Mat *A, PetscBool *use_cpu, PetscErrorCode *ierr)
{
  *ierr = MatCUSPARSESetUseCPUSolve(*A, *use_cpu ? PETSC_TRUE : PETSC_FALSE);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscmat.h>
#include <petscmat.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define matcreateseqaijcusparse_ MATCREATESEQAIJCUSPARSE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define matcreateseqaijcusparse_ matcreateseqaijcusparse
#endif
PETSC_EXTERN void matcreateseqaijcusparse_(MPI_Fint *comm, PetscInt *m, PetscInt *n, PetscInt *nz, const PetscInt nnz[], Mat *A, PetscErrorCode *ierr)
{
  PetscBool null_A = !*(void**) A ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLINTEGER(nnz);
  CHKFORTRANNULLOBJECT(A);
  *ierr = MatCreateSeqAIJCUSPARSE(MPI_Comm_f2c(*(comm)), *m, *n, *nz, nnz, A);
  if (*ierr) return;
  if (! null_A && !*(void**) A) *(void **) A = (void *)-2;
}
