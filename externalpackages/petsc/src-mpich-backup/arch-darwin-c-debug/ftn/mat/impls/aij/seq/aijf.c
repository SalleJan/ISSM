#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscmat.h>
#include <petscmat.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define matseqaijsetvalueslocalfast_ MATSEQAIJSETVALUESLOCALFAST
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define matseqaijsetvalueslocalfast_ matseqaijsetvalueslocalfast
#endif
PETSC_EXTERN void matseqaijsetvalueslocalfast_(Mat *A, PetscInt *m, const PetscInt im[], PetscInt *n, const PetscInt in[], const PetscScalar v[], InsertMode *is, PetscErrorCode *ierr)
{
  CHKFORTRANNULLINTEGER(im);
  CHKFORTRANNULLINTEGER(in);
  CHKFORTRANNULLSCALAR(v);
  *ierr = MatSeqAIJSetValuesLocalFast(*A, *m, im, *n, in, v, *is);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscmat.h>
#include <petscmat.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define matseqaijsettotalpreallocation_ MATSEQAIJSETTOTALPREALLOCATION
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define matseqaijsettotalpreallocation_ matseqaijsettotalpreallocation
#endif
PETSC_EXTERN void matseqaijsettotalpreallocation_(Mat *A, PetscInt *nztotal, PetscErrorCode *ierr)
{
  *ierr = MatSeqAIJSetTotalPreallocation(*A, *nztotal);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscmat.h>
#include <petscmat.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define matseqaijsetcolumnindices_ MATSEQAIJSETCOLUMNINDICES
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define matseqaijsetcolumnindices_ matseqaijsetcolumnindices
#endif
PETSC_EXTERN void matseqaijsetcolumnindices_(Mat *mat, PetscInt *indices, PetscErrorCode *ierr)
{
  CHKFORTRANNULLINTEGER(indices);
  *ierr = MatSeqAIJSetColumnIndices(*mat, indices);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscmat.h>
#include <petscmat.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define matstorevalues_ MATSTOREVALUES
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define matstorevalues_ matstorevalues
#endif
PETSC_EXTERN void matstorevalues_(Mat *mat, PetscErrorCode *ierr)
{
  *ierr = MatStoreValues(*mat);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscmat.h>
#include <petscmat.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define matretrievevalues_ MATRETRIEVEVALUES
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define matretrievevalues_ matretrievevalues
#endif
PETSC_EXTERN void matretrievevalues_(Mat *mat, PetscErrorCode *ierr)
{
  *ierr = MatRetrieveValues(*mat);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscmat.h>
#include <petscmat.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define matcreateseqaij_ MATCREATESEQAIJ
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define matcreateseqaij_ matcreateseqaij
#endif
PETSC_EXTERN void matcreateseqaij_(MPI_Fint *comm, PetscInt *m, PetscInt *n, PetscInt *nz, const PetscInt nnz[], Mat *A, PetscErrorCode *ierr)
{
  PetscBool null_A = !*(void**) A ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLINTEGER(nnz);
  CHKFORTRANNULLOBJECT(A);
  *ierr = MatCreateSeqAIJ(MPI_Comm_f2c(*(comm)), *m, *n, *nz, nnz, A);
  if (*ierr) return;
  if (! null_A && !*(void**) A) *(void **) A = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscmat.h>
#include <petscmat.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define matseqaijsetpreallocation_ MATSEQAIJSETPREALLOCATION
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define matseqaijsetpreallocation_ matseqaijsetpreallocation
#endif
PETSC_EXTERN void matseqaijsetpreallocation_(Mat *B, PetscInt *nz, const PetscInt nnz[], PetscErrorCode *ierr)
{
  CHKFORTRANNULLINTEGER(nnz);
  *ierr = MatSeqAIJSetPreallocation(*B, *nz, nnz);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscmat.h>
#include <petscmat.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define matseqaijsetpreallocationcsr_ MATSEQAIJSETPREALLOCATIONCSR
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define matseqaijsetpreallocationcsr_ matseqaijsetpreallocationcsr
#endif
PETSC_EXTERN void matseqaijsetpreallocationcsr_(Mat *B, const PetscInt i[], const PetscInt j[], const PetscScalar v[], PetscErrorCode *ierr)
{
  CHKFORTRANNULLINTEGER(i);
  CHKFORTRANNULLINTEGER(j);
  CHKFORTRANNULLSCALAR(v);
  *ierr = MatSeqAIJSetPreallocationCSR(*B, i, j, v);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscmat.h>
#include <petscmat.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define matseqaijkron_ MATSEQAIJKRON
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define matseqaijkron_ matseqaijkron
#endif
PETSC_EXTERN void matseqaijkron_(Mat *A, Mat *B, MatReuse *reuse, Mat *C, PetscErrorCode *ierr)
{
  PetscBool null_C = !*(void**) C ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(C);
  *ierr = MatSeqAIJKron(*A, *B, *reuse, C);
  if (*ierr) return;
  if (! null_C && !*(void**) C) *(void **) C = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscmat.h>
#include <petscmat.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define matseqaijgetmaxrownonzeros_ MATSEQAIJGETMAXROWNONZEROS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define matseqaijgetmaxrownonzeros_ matseqaijgetmaxrownonzeros
#endif
PETSC_EXTERN void matseqaijgetmaxrownonzeros_(Mat *A, PetscInt *nz, PetscErrorCode *ierr)
{
  CHKFORTRANNULLINTEGER(nz);
  *ierr = MatSeqAIJGetMaxRowNonzeros(*A, nz);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscmat.h>
#include <petscmat.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define matcreateseqaijwitharrays_ MATCREATESEQAIJWITHARRAYS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define matcreateseqaijwitharrays_ matcreateseqaijwitharrays
#endif
PETSC_EXTERN void matcreateseqaijwitharrays_(MPI_Fint *comm, PetscInt *m, PetscInt *n, PetscInt i[], PetscInt j[], PetscScalar a[], Mat *mat, PetscErrorCode *ierr)
{
  PetscBool null_mat = !*(void**) mat ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLINTEGER(i);
  CHKFORTRANNULLINTEGER(j);
  CHKFORTRANNULLSCALAR(a);
  CHKFORTRANNULLOBJECT(mat);
  *ierr = MatCreateSeqAIJWithArrays(MPI_Comm_f2c(*(comm)), *m, *n, i, j, a, mat);
  if (*ierr) return;
  if (! null_mat && !*(void**) mat) *(void **) mat = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscmat.h>
#include <petscmat.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define matcreateseqaijfromtriple_ MATCREATESEQAIJFROMTRIPLE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define matcreateseqaijfromtriple_ matcreateseqaijfromtriple
#endif
PETSC_EXTERN void matcreateseqaijfromtriple_(MPI_Fint *comm, PetscInt *m, PetscInt *n, PetscInt i[], PetscInt j[], PetscScalar a[], Mat *mat, PetscCount *nz, PetscBool *idx, PetscErrorCode *ierr)
{
  PetscBool null_mat = !*(void**) mat ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLINTEGER(i);
  CHKFORTRANNULLINTEGER(j);
  CHKFORTRANNULLSCALAR(a);
  CHKFORTRANNULLOBJECT(mat);
  *ierr = MatCreateSeqAIJFromTriple(MPI_Comm_f2c(*(comm)), *m, *n, i, j, a, mat, *nz, *idx ? PETSC_TRUE : PETSC_FALSE);
  if (*ierr) return;
  if (! null_mat && !*(void**) mat) *(void **) mat = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscmat.h>
#include <petscmat.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define matseqaijsettype_ MATSEQAIJSETTYPE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define matseqaijsettype_ matseqaijsettype
#endif
PETSC_EXTERN void matseqaijsettype_(Mat *mat, char *matype, PetscErrorCode *ierr, PETSC_FORTRAN_CHARLEN_T l_matype)
{
  char* c_matype;
  FIXCHAR(matype, l_matype, c_matype);
  *ierr = MatSeqAIJSetType(*mat, c_matype);
  if (*ierr) return;
  FREECHAR(matype, c_matype);
}
