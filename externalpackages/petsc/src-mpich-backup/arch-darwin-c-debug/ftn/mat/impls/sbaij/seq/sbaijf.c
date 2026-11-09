#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscmat.h>
#include <petscmat.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define matseqsbaijsetcolumnindices_ MATSEQSBAIJSETCOLUMNINDICES
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define matseqsbaijsetcolumnindices_ matseqsbaijsetcolumnindices
#endif
PETSC_EXTERN void matseqsbaijsetcolumnindices_(Mat *mat, PetscInt *indices, PetscErrorCode *ierr)
{
  CHKFORTRANNULLINTEGER(indices);
  *ierr = MatSeqSBAIJSetColumnIndices(*mat, indices);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscmat.h>
#include <petscmat.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define matseqsbaijsetpreallocation_ MATSEQSBAIJSETPREALLOCATION
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define matseqsbaijsetpreallocation_ matseqsbaijsetpreallocation
#endif
PETSC_EXTERN void matseqsbaijsetpreallocation_(Mat *B, PetscInt *bs, PetscInt *nz, const PetscInt nnz[], PetscErrorCode *ierr)
{
  CHKFORTRANNULLINTEGER(nnz);
  *ierr = MatSeqSBAIJSetPreallocation(*B, *bs, *nz, nnz);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscmat.h>
#include <petscmat.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define matseqsbaijsetpreallocationcsr_ MATSEQSBAIJSETPREALLOCATIONCSR
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define matseqsbaijsetpreallocationcsr_ matseqsbaijsetpreallocationcsr
#endif
PETSC_EXTERN void matseqsbaijsetpreallocationcsr_(Mat *B, PetscInt *bs, const PetscInt i[], const PetscInt j[], const PetscScalar v[], PetscErrorCode *ierr)
{
  CHKFORTRANNULLINTEGER(i);
  CHKFORTRANNULLINTEGER(j);
  CHKFORTRANNULLSCALAR(v);
  *ierr = MatSeqSBAIJSetPreallocationCSR(*B, *bs, i, j, v);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscmat.h>
#include <petscmat.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define matcreateseqsbaij_ MATCREATESEQSBAIJ
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define matcreateseqsbaij_ matcreateseqsbaij
#endif
PETSC_EXTERN void matcreateseqsbaij_(MPI_Fint *comm, PetscInt *bs, PetscInt *m, PetscInt *n, PetscInt *nz, const PetscInt nnz[], Mat *A, PetscErrorCode *ierr)
{
  PetscBool null_A = !*(void**) A ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLINTEGER(nnz);
  CHKFORTRANNULLOBJECT(A);
  *ierr = MatCreateSeqSBAIJ(MPI_Comm_f2c(*(comm)), *bs, *m, *n, *nz, nnz, A);
  if (*ierr) return;
  if (! null_A && !*(void**) A) *(void **) A = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscmat.h>
#include <petscmat.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define matcreateseqsbaijwitharrays_ MATCREATESEQSBAIJWITHARRAYS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define matcreateseqsbaijwitharrays_ matcreateseqsbaijwitharrays
#endif
PETSC_EXTERN void matcreateseqsbaijwitharrays_(MPI_Fint *comm, PetscInt *bs, PetscInt *m, PetscInt *n, PetscInt i[], PetscInt j[], PetscScalar a[], Mat *mat, PetscErrorCode *ierr)
{
  PetscBool null_mat = !*(void**) mat ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLINTEGER(i);
  CHKFORTRANNULLINTEGER(j);
  CHKFORTRANNULLSCALAR(a);
  CHKFORTRANNULLOBJECT(mat);
  *ierr = MatCreateSeqSBAIJWithArrays(MPI_Comm_f2c(*(comm)), *bs, *m, *n, i, j, a, mat);
  if (*ierr) return;
  if (! null_mat && !*(void**) mat) *(void **) mat = (void *)-2;
}
