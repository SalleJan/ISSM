#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscmat.h>
#include <petscmat.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define matseqbaijsetcolumnindices_ MATSEQBAIJSETCOLUMNINDICES
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define matseqbaijsetcolumnindices_ matseqbaijsetcolumnindices
#endif
PETSC_EXTERN void matseqbaijsetcolumnindices_(Mat *mat, PetscInt *indices, PetscErrorCode *ierr)
{
  CHKFORTRANNULLINTEGER(indices);
  *ierr = MatSeqBAIJSetColumnIndices(*mat, indices);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscmat.h>
#include <petscmat.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define matcreateseqbaij_ MATCREATESEQBAIJ
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define matcreateseqbaij_ matcreateseqbaij
#endif
PETSC_EXTERN void matcreateseqbaij_(MPI_Fint *comm, PetscInt *bs, PetscInt *m, PetscInt *n, PetscInt *nz, const PetscInt nnz[], Mat *A, PetscErrorCode *ierr)
{
  PetscBool null_A = !*(void**) A ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLINTEGER(nnz);
  CHKFORTRANNULLOBJECT(A);
  *ierr = MatCreateSeqBAIJ(MPI_Comm_f2c(*(comm)), *bs, *m, *n, *nz, nnz, A);
  if (*ierr) return;
  if (! null_A && !*(void**) A) *(void **) A = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscmat.h>
#include <petscmat.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define matseqbaijsetpreallocation_ MATSEQBAIJSETPREALLOCATION
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define matseqbaijsetpreallocation_ matseqbaijsetpreallocation
#endif
PETSC_EXTERN void matseqbaijsetpreallocation_(Mat *B, PetscInt *bs, PetscInt *nz, const PetscInt nnz[], PetscErrorCode *ierr)
{
  CHKFORTRANNULLINTEGER(nnz);
  *ierr = MatSeqBAIJSetPreallocation(*B, *bs, *nz, nnz);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscmat.h>
#include <petscmat.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define matseqbaijsetpreallocationcsr_ MATSEQBAIJSETPREALLOCATIONCSR
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define matseqbaijsetpreallocationcsr_ matseqbaijsetpreallocationcsr
#endif
PETSC_EXTERN void matseqbaijsetpreallocationcsr_(Mat *B, PetscInt *bs, const PetscInt i[], const PetscInt j[], const PetscScalar v[], PetscErrorCode *ierr)
{
  CHKFORTRANNULLINTEGER(i);
  CHKFORTRANNULLINTEGER(j);
  CHKFORTRANNULLSCALAR(v);
  *ierr = MatSeqBAIJSetPreallocationCSR(*B, *bs, i, j, v);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscmat.h>
#include <petscmat.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define matcreateseqbaijwitharrays_ MATCREATESEQBAIJWITHARRAYS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define matcreateseqbaijwitharrays_ matcreateseqbaijwitharrays
#endif
PETSC_EXTERN void matcreateseqbaijwitharrays_(MPI_Fint *comm, PetscInt *bs, PetscInt *m, PetscInt *n, PetscInt i[], PetscInt j[], PetscScalar a[], Mat *mat, PetscErrorCode *ierr)
{
  PetscBool null_mat = !*(void**) mat ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLINTEGER(i);
  CHKFORTRANNULLINTEGER(j);
  CHKFORTRANNULLSCALAR(a);
  CHKFORTRANNULLOBJECT(mat);
  *ierr = MatCreateSeqBAIJWithArrays(MPI_Comm_f2c(*(comm)), *bs, *m, *n, i, j, a, mat);
  if (*ierr) return;
  if (! null_mat && !*(void**) mat) *(void **) mat = (void *)-2;
}
