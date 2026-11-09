#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscmat.h>
#include <petscmat.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define matmpiaijgetnumbernonzeros_ MATMPIAIJGETNUMBERNONZEROS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define matmpiaijgetnumbernonzeros_ matmpiaijgetnumbernonzeros
#endif
PETSC_EXTERN void matmpiaijgetnumbernonzeros_(Mat *A, PetscCount *nz, PetscErrorCode *ierr)
{
  *ierr = MatMPIAIJGetNumberNonzeros(*A, nz);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscmat.h>
#include <petscmat.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define matmpiaijsetusescalableincreaseoverlap_ MATMPIAIJSETUSESCALABLEINCREASEOVERLAP
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define matmpiaijsetusescalableincreaseoverlap_ matmpiaijsetusescalableincreaseoverlap
#endif
PETSC_EXTERN void matmpiaijsetusescalableincreaseoverlap_(Mat *A, PetscBool *sc, PetscErrorCode *ierr)
{
  *ierr = MatMPIAIJSetUseScalableIncreaseOverlap(*A, *sc ? PETSC_TRUE : PETSC_FALSE);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscmat.h>
#include <petscmat.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define matcreatempiaijwithseqaij_ MATCREATEMPIAIJWITHSEQAIJ
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define matcreatempiaijwithseqaij_ matcreatempiaijwithseqaij
#endif
PETSC_EXTERN void matcreatempiaijwithseqaij_(MPI_Fint *comm, PetscInt *M, PetscInt *N, Mat *A, Mat *B, PetscInt *garray, Mat *mat, PetscErrorCode *ierr)
{
  PetscBool null_mat = !*(void**) mat ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLINTEGER(garray);
  CHKFORTRANNULLOBJECT(mat);
  *ierr = MatCreateMPIAIJWithSeqAIJ(MPI_Comm_f2c(*(comm)), *M, *N, *A, *B, garray, mat);
  if (*ierr) return;
  if (! null_mat && !*(void**) mat) *(void **) mat = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscmat.h>
#include <petscmat.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define matmpiaijsetpreallocationcsr_ MATMPIAIJSETPREALLOCATIONCSR
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define matmpiaijsetpreallocationcsr_ matmpiaijsetpreallocationcsr
#endif
PETSC_EXTERN void matmpiaijsetpreallocationcsr_(Mat *B, const PetscInt i[], const PetscInt j[], const PetscScalar v[], PetscErrorCode *ierr)
{
  CHKFORTRANNULLINTEGER(i);
  CHKFORTRANNULLINTEGER(j);
  CHKFORTRANNULLSCALAR(v);
  *ierr = MatMPIAIJSetPreallocationCSR(*B, i, j, v);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscmat.h>
#include <petscmat.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define matmpiaijsetpreallocation_ MATMPIAIJSETPREALLOCATION
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define matmpiaijsetpreallocation_ matmpiaijsetpreallocation
#endif
PETSC_EXTERN void matmpiaijsetpreallocation_(Mat *B, PetscInt *d_nz, const PetscInt d_nnz[], PetscInt *o_nz, const PetscInt o_nnz[], PetscErrorCode *ierr)
{
  CHKFORTRANNULLINTEGER(d_nnz);
  CHKFORTRANNULLINTEGER(o_nnz);
  *ierr = MatMPIAIJSetPreallocation(*B, *d_nz, d_nnz, *o_nz, o_nnz);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscmat.h>
#include <petscmat.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define matcreatempiaijwitharrays_ MATCREATEMPIAIJWITHARRAYS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define matcreatempiaijwitharrays_ matcreatempiaijwitharrays
#endif
PETSC_EXTERN void matcreatempiaijwitharrays_(MPI_Fint *comm, PetscInt *m, PetscInt *n, PetscInt *M_M, PetscInt *M_N, const PetscInt i[], const PetscInt j[], const PetscScalar a[], Mat *mat, PetscErrorCode *ierr)
{
  PetscBool null_mat = !*(void**) mat ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLINTEGER(i);
  CHKFORTRANNULLINTEGER(j);
  CHKFORTRANNULLSCALAR(a);
  CHKFORTRANNULLOBJECT(mat);
  *ierr = MatCreateMPIAIJWithArrays(MPI_Comm_f2c(*(comm)), *m, *n, *M_M, *M_N, i, j, a, mat);
  if (*ierr) return;
  if (! null_mat && !*(void**) mat) *(void **) mat = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscmat.h>
#include <petscmat.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define matupdatempiaijwitharrays_ MATUPDATEMPIAIJWITHARRAYS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define matupdatempiaijwitharrays_ matupdatempiaijwitharrays
#endif
PETSC_EXTERN void matupdatempiaijwitharrays_(Mat *mat, PetscInt *m, PetscInt *n, PetscInt *M_M, PetscInt *M_N, const PetscInt Ii[], const PetscInt J[], const PetscScalar v[], PetscErrorCode *ierr)
{
  CHKFORTRANNULLINTEGER(Ii);
  CHKFORTRANNULLINTEGER(J);
  CHKFORTRANNULLSCALAR(v);
  *ierr = MatUpdateMPIAIJWithArrays(*mat, *m, *n, *M_M, *M_N, Ii, J, v);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscmat.h>
#include <petscmat.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define matupdatempiaijwitharray_ MATUPDATEMPIAIJWITHARRAY
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define matupdatempiaijwitharray_ matupdatempiaijwitharray
#endif
PETSC_EXTERN void matupdatempiaijwitharray_(Mat *mat, const PetscScalar v[], PetscErrorCode *ierr)
{
  CHKFORTRANNULLSCALAR(v);
  *ierr = MatUpdateMPIAIJWithArray(*mat, v);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscmat.h>
#include <petscmat.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define matcreateaij_ MATCREATEAIJ
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define matcreateaij_ matcreateaij
#endif
PETSC_EXTERN void matcreateaij_(MPI_Fint *comm, PetscInt *m, PetscInt *n, PetscInt *M_M, PetscInt *M_N, PetscInt *d_nz, const PetscInt d_nnz[], PetscInt *o_nz, const PetscInt o_nnz[], Mat *A, PetscErrorCode *ierr)
{
  PetscBool null_A = !*(void**) A ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLINTEGER(d_nnz);
  CHKFORTRANNULLINTEGER(o_nnz);
  CHKFORTRANNULLOBJECT(A);
  *ierr = MatCreateAIJ(MPI_Comm_f2c(*(comm)), *m, *n, *M_M, *M_N, *d_nz, d_nnz, *o_nz, o_nnz, A);
  if (*ierr) return;
  if (! null_A && !*(void**) A) *(void **) A = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscmat.h>
#include <petscmat.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define matcreatempiaijsumseqaijnumeric_ MATCREATEMPIAIJSUMSEQAIJNUMERIC
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define matcreatempiaijsumseqaijnumeric_ matcreatempiaijsumseqaijnumeric
#endif
PETSC_EXTERN void matcreatempiaijsumseqaijnumeric_(Mat *seqmat, Mat *mpimat, PetscErrorCode *ierr)
{
  *ierr = MatCreateMPIAIJSumSeqAIJNumeric(*seqmat, *mpimat);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscmat.h>
#include <petscmat.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define matcreatempiaijsumseqaijsymbolic_ MATCREATEMPIAIJSUMSEQAIJSYMBOLIC
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define matcreatempiaijsumseqaijsymbolic_ matcreatempiaijsumseqaijsymbolic
#endif
PETSC_EXTERN void matcreatempiaijsumseqaijsymbolic_(MPI_Fint *comm, Mat *seqmat, PetscInt *m, PetscInt *n, Mat *mpimat, PetscErrorCode *ierr)
{
  PetscBool null_mpimat = !*(void**) mpimat ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(mpimat);
  *ierr = MatCreateMPIAIJSumSeqAIJSymbolic(MPI_Comm_f2c(*(comm)), *seqmat, *m, *n, mpimat);
  if (*ierr) return;
  if (! null_mpimat && !*(void**) mpimat) *(void **) mpimat = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscmat.h>
#include <petscmat.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define matcreatempiaijsumseqaij_ MATCREATEMPIAIJSUMSEQAIJ
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define matcreatempiaijsumseqaij_ matcreatempiaijsumseqaij
#endif
PETSC_EXTERN void matcreatempiaijsumseqaij_(MPI_Fint *comm, Mat *seqmat, PetscInt *m, PetscInt *n, MatReuse *scall, Mat *mpimat, PetscErrorCode *ierr)
{
  PetscBool null_mpimat = !*(void**) mpimat ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(mpimat);
  *ierr = MatCreateMPIAIJSumSeqAIJ(MPI_Comm_f2c(*(comm)), *seqmat, *m, *n, *scall, mpimat);
  if (*ierr) return;
  if (! null_mpimat && !*(void**) mpimat) *(void **) mpimat = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscmat.h>
#include <petscmat.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define mataijgetlocalmat_ MATAIJGETLOCALMAT
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define mataijgetlocalmat_ mataijgetlocalmat
#endif
PETSC_EXTERN void mataijgetlocalmat_(Mat *A, Mat *A_loc, PetscErrorCode *ierr)
{
  PetscBool null_A_loc = !*(void**) A_loc ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(A_loc);
  *ierr = MatAIJGetLocalMat(*A, A_loc);
  if (*ierr) return;
  if (! null_A_loc && !*(void**) A_loc) *(void **) A_loc = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscmat.h>
#include <petscmat.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define matmpiaijgetlocalmat_ MATMPIAIJGETLOCALMAT
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define matmpiaijgetlocalmat_ matmpiaijgetlocalmat
#endif
PETSC_EXTERN void matmpiaijgetlocalmat_(Mat *A, MatReuse *scall, Mat *A_loc, PetscErrorCode *ierr)
{
  PetscBool null_A_loc = !*(void**) A_loc ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(A_loc);
  *ierr = MatMPIAIJGetLocalMat(*A, *scall, A_loc);
  if (*ierr) return;
  if (! null_A_loc && !*(void**) A_loc) *(void **) A_loc = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscmat.h>
#include <petscmat.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define matmpiaijgetlocalmatmerge_ MATMPIAIJGETLOCALMATMERGE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define matmpiaijgetlocalmatmerge_ matmpiaijgetlocalmatmerge
#endif
PETSC_EXTERN void matmpiaijgetlocalmatmerge_(Mat *A, MatReuse *scall, IS *glob, Mat *A_loc, PetscErrorCode *ierr)
{
  PetscBool null_glob = !*(void**) glob ? PETSC_TRUE : PETSC_FALSE;
  PetscBool null_A_loc = !*(void**) A_loc ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(glob);
  CHKFORTRANNULLOBJECT(A_loc);
  *ierr = MatMPIAIJGetLocalMatMerge(*A, *scall, glob, A_loc);
  if (*ierr) return;
  if (! null_glob && !*(void**) glob) *(void **) glob = (void *)-2;
  if (! null_A_loc && !*(void**) A_loc) *(void **) A_loc = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscmat.h>
#include <petscmat.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define matmpiaijgetlocalmatcondensed_ MATMPIAIJGETLOCALMATCONDENSED
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define matmpiaijgetlocalmatcondensed_ matmpiaijgetlocalmatcondensed
#endif
PETSC_EXTERN void matmpiaijgetlocalmatcondensed_(Mat *A, MatReuse *scall, IS *row, IS *col, Mat *A_loc, PetscErrorCode *ierr)
{
  PetscBool null_row = !*(void**) row ? PETSC_TRUE : PETSC_FALSE;
  PetscBool null_col = !*(void**) col ? PETSC_TRUE : PETSC_FALSE;
  PetscBool null_A_loc = !*(void**) A_loc ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(row);
  CHKFORTRANNULLOBJECT(col);
  CHKFORTRANNULLOBJECT(A_loc);
  *ierr = MatMPIAIJGetLocalMatCondensed(*A, *scall, row, col, A_loc);
  if (*ierr) return;
  if (! null_row && !*(void**) row) *(void **) row = (void *)-2;
  if (! null_col && !*(void**) col) *(void **) col = (void *)-2;
  if (! null_A_loc && !*(void**) A_loc) *(void **) A_loc = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscmat.h>
#include <petscmat.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define matgetbrowsofacols_ MATGETBROWSOFACOLS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define matgetbrowsofacols_ matgetbrowsofacols
#endif
PETSC_EXTERN void matgetbrowsofacols_(Mat *A, Mat *B, MatReuse *scall, IS *rowb, IS *colb, Mat *B_seq, PetscErrorCode *ierr)
{
  PetscBool null_rowb = !*(void**) rowb ? PETSC_TRUE : PETSC_FALSE;
  PetscBool null_colb = !*(void**) colb ? PETSC_TRUE : PETSC_FALSE;
  PetscBool null_B_seq = !*(void**) B_seq ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(rowb);
  CHKFORTRANNULLOBJECT(colb);
  CHKFORTRANNULLOBJECT(B_seq);
  *ierr = MatGetBrowsOfAcols(*A, *B, *scall, rowb, colb, B_seq);
  if (*ierr) return;
  if (! null_rowb && !*(void**) rowb) *(void **) rowb = (void *)-2;
  if (! null_colb && !*(void**) colb) *(void **) colb = (void *)-2;
  if (! null_B_seq && !*(void**) B_seq) *(void **) B_seq = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscmat.h>
#include <petscmat.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define matcreatempiaijwithsplitarrays_ MATCREATEMPIAIJWITHSPLITARRAYS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define matcreatempiaijwithsplitarrays_ matcreatempiaijwithsplitarrays
#endif
PETSC_EXTERN void matcreatempiaijwithsplitarrays_(MPI_Fint *comm, PetscInt *m, PetscInt *n, PetscInt *M_M, PetscInt *M_N, PetscInt i[], PetscInt j[], PetscScalar a[], PetscInt oi[], PetscInt oj[], PetscScalar oa[], Mat *mat, PetscErrorCode *ierr)
{
  PetscBool null_mat = !*(void**) mat ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLINTEGER(i);
  CHKFORTRANNULLINTEGER(j);
  CHKFORTRANNULLSCALAR(a);
  CHKFORTRANNULLINTEGER(oi);
  CHKFORTRANNULLINTEGER(oj);
  CHKFORTRANNULLSCALAR(oa);
  CHKFORTRANNULLOBJECT(mat);
  *ierr = MatCreateMPIAIJWithSplitArrays(MPI_Comm_f2c(*(comm)), *m, *n, *M_M, *M_N, i, j, a, oi, oj, oa, mat);
  if (*ierr) return;
  if (! null_mat && !*(void**) mat) *(void **) mat = (void *)-2;
}
