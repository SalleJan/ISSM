#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscmat.h>
#include <petscmat.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define matmpisbaijsetpreallocation_ MATMPISBAIJSETPREALLOCATION
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define matmpisbaijsetpreallocation_ matmpisbaijsetpreallocation
#endif
PETSC_EXTERN void matmpisbaijsetpreallocation_(Mat *B, PetscInt *bs, PetscInt *d_nz, const PetscInt d_nnz[], PetscInt *o_nz, const PetscInt o_nnz[], PetscErrorCode *ierr)
{
  CHKFORTRANNULLINTEGER(d_nnz);
  CHKFORTRANNULLINTEGER(o_nnz);
  *ierr = MatMPISBAIJSetPreallocation(*B, *bs, *d_nz, d_nnz, *o_nz, o_nnz);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscmat.h>
#include <petscmat.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define matcreatesbaij_ MATCREATESBAIJ
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define matcreatesbaij_ matcreatesbaij
#endif
PETSC_EXTERN void matcreatesbaij_(MPI_Fint *comm, PetscInt *bs, PetscInt *m, PetscInt *n, PetscInt *M_M, PetscInt *M_N, PetscInt *d_nz, const PetscInt d_nnz[], PetscInt *o_nz, const PetscInt o_nnz[], Mat *A, PetscErrorCode *ierr)
{
  PetscBool null_A = !*(void**) A ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLINTEGER(d_nnz);
  CHKFORTRANNULLINTEGER(o_nnz);
  CHKFORTRANNULLOBJECT(A);
  *ierr = MatCreateSBAIJ(MPI_Comm_f2c(*(comm)), *bs, *m, *n, *M_M, *M_N, *d_nz, d_nnz, *o_nz, o_nnz, A);
  if (*ierr) return;
  if (! null_A && !*(void**) A) *(void **) A = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscmat.h>
#include <petscmat.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define matcreatempisbaijwitharrays_ MATCREATEMPISBAIJWITHARRAYS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define matcreatempisbaijwitharrays_ matcreatempisbaijwitharrays
#endif
PETSC_EXTERN void matcreatempisbaijwitharrays_(MPI_Fint *comm, PetscInt *bs, PetscInt *m, PetscInt *n, PetscInt *M_M, PetscInt *M_N, const PetscInt i[], const PetscInt j[], const PetscScalar a[], Mat *mat, PetscErrorCode *ierr)
{
  PetscBool null_mat = !*(void**) mat ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLINTEGER(i);
  CHKFORTRANNULLINTEGER(j);
  CHKFORTRANNULLSCALAR(a);
  CHKFORTRANNULLOBJECT(mat);
  *ierr = MatCreateMPISBAIJWithArrays(MPI_Comm_f2c(*(comm)), *bs, *m, *n, *M_M, *M_N, i, j, a, mat);
  if (*ierr) return;
  if (! null_mat && !*(void**) mat) *(void **) mat = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscmat.h>
#include <petscmat.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define matmpisbaijsetpreallocationcsr_ MATMPISBAIJSETPREALLOCATIONCSR
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define matmpisbaijsetpreallocationcsr_ matmpisbaijsetpreallocationcsr
#endif
PETSC_EXTERN void matmpisbaijsetpreallocationcsr_(Mat *B, PetscInt *bs, const PetscInt i[], const PetscInt j[], const PetscScalar v[], PetscErrorCode *ierr)
{
  CHKFORTRANNULLINTEGER(i);
  CHKFORTRANNULLINTEGER(j);
  CHKFORTRANNULLSCALAR(v);
  *ierr = MatMPISBAIJSetPreallocationCSR(*B, *bs, i, j, v);
  if (*ierr) return;
}
