#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscmat.h>
#include <petscmat.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define matdensegetlda_ MATDENSEGETLDA
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define matdensegetlda_ matdensegetlda
#endif
PETSC_EXTERN void matdensegetlda_(Mat *A, PetscInt *lda, PetscErrorCode *ierr)
{
  CHKFORTRANNULLINTEGER(lda);
  *ierr = MatDenseGetLDA(*A, lda);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscmat.h>
#include <petscmat.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define matdensesetlda_ MATDENSESETLDA
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define matdensesetlda_ matdensesetlda
#endif
PETSC_EXTERN void matdensesetlda_(Mat *A, PetscInt *lda, PetscErrorCode *ierr)
{
  *ierr = MatDenseSetLDA(*A, *lda);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscmat.h>
#include <petscmat.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define matcreateseqdense_ MATCREATESEQDENSE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define matcreateseqdense_ matcreateseqdense
#endif
PETSC_EXTERN void matcreateseqdense_(MPI_Fint *comm, PetscInt *m, PetscInt *n, PetscScalar data[], Mat *A, PetscErrorCode *ierr)
{
  PetscBool null_A = !*(void**) A ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLSCALAR(data);
  CHKFORTRANNULLOBJECT(A);
  *ierr = MatCreateSeqDense(MPI_Comm_f2c(*(comm)), *m, *n, data, A);
  if (*ierr) return;
  if (! null_A && !*(void**) A) *(void **) A = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscmat.h>
#include <petscmat.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define matseqdensesetpreallocation_ MATSEQDENSESETPREALLOCATION
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define matseqdensesetpreallocation_ matseqdensesetpreallocation
#endif
PETSC_EXTERN void matseqdensesetpreallocation_(Mat *B, PetscScalar data[], PetscErrorCode *ierr)
{
  CHKFORTRANNULLSCALAR(data);
  *ierr = MatSeqDenseSetPreallocation(*B, data);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscmat.h>
#include <petscmat.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define matdensegetcolumnvec_ MATDENSEGETCOLUMNVEC
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define matdensegetcolumnvec_ matdensegetcolumnvec
#endif
PETSC_EXTERN void matdensegetcolumnvec_(Mat *A, PetscInt *col, Vec *v, PetscErrorCode *ierr)
{
  PetscBool null_v = !*(void**) v ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(v);
  *ierr = MatDenseGetColumnVec(*A, *col, v);
  if (*ierr) return;
  if (! null_v && !*(void**) v) *(void **) v = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscmat.h>
#include <petscmat.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define matdenserestorecolumnvec_ MATDENSERESTORECOLUMNVEC
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define matdenserestorecolumnvec_ matdenserestorecolumnvec
#endif
PETSC_EXTERN void matdenserestorecolumnvec_(Mat *A, PetscInt *col, Vec *v, PetscErrorCode *ierr)
{
  PetscBool null_v = !*(void**) v ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(v);
  *ierr = MatDenseRestoreColumnVec(*A, *col, v);
  if (*ierr) return;
  if (! null_v && !*(void**) v) *(void **) v = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscmat.h>
#include <petscmat.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define matdensegetcolumnvecread_ MATDENSEGETCOLUMNVECREAD
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define matdensegetcolumnvecread_ matdensegetcolumnvecread
#endif
PETSC_EXTERN void matdensegetcolumnvecread_(Mat *A, PetscInt *col, Vec *v, PetscErrorCode *ierr)
{
  PetscBool null_v = !*(void**) v ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(v);
  *ierr = MatDenseGetColumnVecRead(*A, *col, v);
  if (*ierr) return;
  if (! null_v && !*(void**) v) *(void **) v = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscmat.h>
#include <petscmat.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define matdenserestorecolumnvecread_ MATDENSERESTORECOLUMNVECREAD
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define matdenserestorecolumnvecread_ matdenserestorecolumnvecread
#endif
PETSC_EXTERN void matdenserestorecolumnvecread_(Mat *A, PetscInt *col, Vec *v, PetscErrorCode *ierr)
{
  PetscBool null_v = !*(void**) v ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(v);
  *ierr = MatDenseRestoreColumnVecRead(*A, *col, v);
  if (*ierr) return;
  if (! null_v && !*(void**) v) *(void **) v = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscmat.h>
#include <petscmat.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define matdensegetcolumnvecwrite_ MATDENSEGETCOLUMNVECWRITE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define matdensegetcolumnvecwrite_ matdensegetcolumnvecwrite
#endif
PETSC_EXTERN void matdensegetcolumnvecwrite_(Mat *A, PetscInt *col, Vec *v, PetscErrorCode *ierr)
{
  PetscBool null_v = !*(void**) v ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(v);
  *ierr = MatDenseGetColumnVecWrite(*A, *col, v);
  if (*ierr) return;
  if (! null_v && !*(void**) v) *(void **) v = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscmat.h>
#include <petscmat.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define matdenserestorecolumnvecwrite_ MATDENSERESTORECOLUMNVECWRITE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define matdenserestorecolumnvecwrite_ matdenserestorecolumnvecwrite
#endif
PETSC_EXTERN void matdenserestorecolumnvecwrite_(Mat *A, PetscInt *col, Vec *v, PetscErrorCode *ierr)
{
  PetscBool null_v = !*(void**) v ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(v);
  *ierr = MatDenseRestoreColumnVecWrite(*A, *col, v);
  if (*ierr) return;
  if (! null_v && !*(void**) v) *(void **) v = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscmat.h>
#include <petscmat.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define matdensegetsubmatrix_ MATDENSEGETSUBMATRIX
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define matdensegetsubmatrix_ matdensegetsubmatrix
#endif
PETSC_EXTERN void matdensegetsubmatrix_(Mat *A, PetscInt *rbegin, PetscInt *rend, PetscInt *cbegin, PetscInt *cend, Mat *v, PetscErrorCode *ierr)
{
  PetscBool null_v = !*(void**) v ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(v);
  *ierr = MatDenseGetSubMatrix(*A, *rbegin, *rend, *cbegin, *cend, v);
  if (*ierr) return;
  if (! null_v && !*(void**) v) *(void **) v = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscmat.h>
#include <petscmat.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define matdenserestoresubmatrix_ MATDENSERESTORESUBMATRIX
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define matdenserestoresubmatrix_ matdenserestoresubmatrix
#endif
PETSC_EXTERN void matdenserestoresubmatrix_(Mat *A, Mat *v, PetscErrorCode *ierr)
{
  PetscBool null_v = !*(void**) v ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(v);
  *ierr = MatDenseRestoreSubMatrix(*A, v);
  if (*ierr) return;
  if (! null_v && !*(void**) v) *(void **) v = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscmat.h>
#include <petscmat.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define matseqdenseinvert_ MATSEQDENSEINVERT
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define matseqdenseinvert_ matseqdenseinvert
#endif
PETSC_EXTERN void matseqdenseinvert_(Mat *A, PetscErrorCode *ierr)
{
  *ierr = MatSeqDenseInvert(*A);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscmat.h>
#include <petscmat.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define matdensereplacearraywithmemtype_ MATDENSEREPLACEARRAYWITHMEMTYPE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define matdensereplacearraywithmemtype_ matdensereplacearraywithmemtype
#endif
PETSC_EXTERN void matdensereplacearraywithmemtype_(Mat *mat, PetscMemType *mtype, const PetscScalar array[], PetscErrorCode *ierr)
{
  CHKFORTRANNULLSCALAR(array);
  *ierr = MatDenseReplaceArrayWithMemType(*mat, *mtype, array);
  if (*ierr) return;
}
