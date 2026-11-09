#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscmat.h>
#include <petscmat.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define matmpibaijsetpreallocationcsr_ MATMPIBAIJSETPREALLOCATIONCSR
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define matmpibaijsetpreallocationcsr_ matmpibaijsetpreallocationcsr
#endif
PETSC_EXTERN void matmpibaijsetpreallocationcsr_(Mat *B, PetscInt *bs, const PetscInt i[], const PetscInt j[], const PetscScalar v[], PetscErrorCode *ierr)
{
  CHKFORTRANNULLINTEGER(i);
  CHKFORTRANNULLINTEGER(j);
  CHKFORTRANNULLSCALAR(v);
  *ierr = MatMPIBAIJSetPreallocationCSR(*B, *bs, i, j, v);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscmat.h>
#include <petscmat.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define matmpibaijsetpreallocation_ MATMPIBAIJSETPREALLOCATION
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define matmpibaijsetpreallocation_ matmpibaijsetpreallocation
#endif
PETSC_EXTERN void matmpibaijsetpreallocation_(Mat *B, PetscInt *bs, PetscInt *d_nz, const PetscInt d_nnz[], PetscInt *o_nz, const PetscInt o_nnz[], PetscErrorCode *ierr)
{
  CHKFORTRANNULLINTEGER(d_nnz);
  CHKFORTRANNULLINTEGER(o_nnz);
  *ierr = MatMPIBAIJSetPreallocation(*B, *bs, *d_nz, d_nnz, *o_nz, o_nnz);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscmat.h>
#include <petscmat.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define matcreatebaij_ MATCREATEBAIJ
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define matcreatebaij_ matcreatebaij
#endif
PETSC_EXTERN void matcreatebaij_(MPI_Fint *comm, PetscInt *bs, PetscInt *m, PetscInt *n, PetscInt *M_M, PetscInt *M_N, PetscInt *d_nz, const PetscInt d_nnz[], PetscInt *o_nz, const PetscInt o_nnz[], Mat *A, PetscErrorCode *ierr)
{
  PetscBool null_A = !*(void**) A ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLINTEGER(d_nnz);
  CHKFORTRANNULLINTEGER(o_nnz);
  CHKFORTRANNULLOBJECT(A);
  *ierr = MatCreateBAIJ(MPI_Comm_f2c(*(comm)), *bs, *m, *n, *M_M, *M_N, *d_nz, d_nnz, *o_nz, o_nnz, A);
  if (*ierr) return;
  if (! null_A && !*(void**) A) *(void **) A = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscmat.h>
#include <petscmat.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define matmpibaijsethashtablefactor_ MATMPIBAIJSETHASHTABLEFACTOR
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define matmpibaijsethashtablefactor_ matmpibaijsethashtablefactor
#endif
PETSC_EXTERN void matmpibaijsethashtablefactor_(Mat *mat, PetscReal *fact, PetscErrorCode *ierr)
{
  *ierr = MatMPIBAIJSetHashTableFactor(*mat, *fact);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscmat.h>
#include <petscmat.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define matcreatempibaijwitharrays_ MATCREATEMPIBAIJWITHARRAYS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define matcreatempibaijwitharrays_ matcreatempibaijwitharrays
#endif
PETSC_EXTERN void matcreatempibaijwitharrays_(MPI_Fint *comm, PetscInt *bs, PetscInt *m, PetscInt *n, PetscInt *M_M, PetscInt *M_N, const PetscInt i[], const PetscInt j[], const PetscScalar a[], Mat *mat, PetscErrorCode *ierr)
{
  PetscBool null_mat = !*(void**) mat ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLINTEGER(i);
  CHKFORTRANNULLINTEGER(j);
  CHKFORTRANNULLSCALAR(a);
  CHKFORTRANNULLOBJECT(mat);
  *ierr = MatCreateMPIBAIJWithArrays(MPI_Comm_f2c(*(comm)), *bs, *m, *n, *M_M, *M_N, i, j, a, mat);
  if (*ierr) return;
  if (! null_mat && !*(void**) mat) *(void **) mat = (void *)-2;
}
