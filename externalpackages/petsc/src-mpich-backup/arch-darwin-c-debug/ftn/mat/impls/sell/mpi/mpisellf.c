#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscmat.h>
#include <petscmat.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define matmpisellsetpreallocation_ MATMPISELLSETPREALLOCATION
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define matmpisellsetpreallocation_ matmpisellsetpreallocation
#endif
PETSC_EXTERN void matmpisellsetpreallocation_(Mat *B, PetscInt *d_nz, const PetscInt d_nnz[], PetscInt *o_nz, const PetscInt o_nnz[], PetscErrorCode *ierr)
{
  CHKFORTRANNULLINTEGER(d_nnz);
  CHKFORTRANNULLINTEGER(o_nnz);
  *ierr = MatMPISELLSetPreallocation(*B, *d_nz, d_nnz, *o_nz, o_nnz);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscmat.h>
#include <petscmat.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define matcreatesell_ MATCREATESELL
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define matcreatesell_ matcreatesell
#endif
PETSC_EXTERN void matcreatesell_(MPI_Fint *comm, PetscInt *m, PetscInt *n, PetscInt *M_M, PetscInt *M_N, PetscInt *d_rlenmax, const PetscInt d_rlen[], PetscInt *o_rlenmax, const PetscInt o_rlen[], Mat *A, PetscErrorCode *ierr)
{
  PetscBool null_A = !*(void**) A ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLINTEGER(d_rlen);
  CHKFORTRANNULLINTEGER(o_rlen);
  CHKFORTRANNULLOBJECT(A);
  *ierr = MatCreateSELL(MPI_Comm_f2c(*(comm)), *m, *n, *M_M, *M_N, *d_rlenmax, d_rlen, *o_rlenmax, o_rlen, A);
  if (*ierr) return;
  if (! null_A && !*(void**) A) *(void **) A = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscmat.h>
#include <petscmat.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define matmpisellgetlocalmatcondensed_ MATMPISELLGETLOCALMATCONDENSED
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define matmpisellgetlocalmatcondensed_ matmpisellgetlocalmatcondensed
#endif
PETSC_EXTERN void matmpisellgetlocalmatcondensed_(Mat *A, MatReuse *scall, IS *row, IS *col, Mat *A_loc, PetscErrorCode *ierr)
{
  PetscBool null_row = !*(void**) row ? PETSC_TRUE : PETSC_FALSE;
  PetscBool null_col = !*(void**) col ? PETSC_TRUE : PETSC_FALSE;
  PetscBool null_A_loc = !*(void**) A_loc ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(row);
  CHKFORTRANNULLOBJECT(col);
  CHKFORTRANNULLOBJECT(A_loc);
  *ierr = MatMPISELLGetLocalMatCondensed(*A, *scall, row, col, A_loc);
  if (*ierr) return;
  if (! null_row && !*(void**) row) *(void **) row = (void *)-2;
  if (! null_col && !*(void**) col) *(void **) col = (void *)-2;
  if (! null_A_loc && !*(void**) A_loc) *(void **) A_loc = (void *)-2;
}
