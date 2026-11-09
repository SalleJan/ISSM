#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscmat.h>
#include <petscmat.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define matisgetallowrepeated_ MATISGETALLOWREPEATED
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define matisgetallowrepeated_ matisgetallowrepeated
#endif
PETSC_EXTERN void matisgetallowrepeated_(Mat *A, PetscBool *flg, PetscErrorCode *ierr)
{
  CHKFORTRANNULLBOOL(flg);
  *ierr = MatISGetAllowRepeated(*A, flg);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscmat.h>
#include <petscmat.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define matissetallowrepeated_ MATISSETALLOWREPEATED
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define matissetallowrepeated_ matissetallowrepeated
#endif
PETSC_EXTERN void matissetallowrepeated_(Mat *A, PetscBool *flg, PetscErrorCode *ierr)
{
  *ierr = MatISSetAllowRepeated(*A, *flg ? PETSC_TRUE : PETSC_FALSE);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscmat.h>
#include <petscmat.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define matisstorel2l_ MATISSTOREL2L
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define matisstorel2l_ matisstorel2l
#endif
PETSC_EXTERN void matisstorel2l_(Mat *A, PetscBool *store, PetscErrorCode *ierr)
{
  *ierr = MatISStoreL2L(*A, *store ? PETSC_TRUE : PETSC_FALSE);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscmat.h>
#include <petscmat.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define matisfixlocalempty_ MATISFIXLOCALEMPTY
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define matisfixlocalempty_ matisfixlocalempty
#endif
PETSC_EXTERN void matisfixlocalempty_(Mat *A, PetscBool *fix, PetscErrorCode *ierr)
{
  *ierr = MatISFixLocalEmpty(*A, *fix ? PETSC_TRUE : PETSC_FALSE);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscmat.h>
#include <petscmat.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define matissetpreallocation_ MATISSETPREALLOCATION
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define matissetpreallocation_ matissetpreallocation
#endif
PETSC_EXTERN void matissetpreallocation_(Mat *B, PetscInt *d_nz, const PetscInt d_nnz[], PetscInt *o_nz, const PetscInt o_nnz[], PetscErrorCode *ierr)
{
  CHKFORTRANNULLINTEGER(d_nnz);
  CHKFORTRANNULLINTEGER(o_nnz);
  *ierr = MatISSetPreallocation(*B, *d_nz, d_nnz, *o_nz, o_nnz);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscmat.h>
#include <petscmat.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define matisgetlocalmat_ MATISGETLOCALMAT
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define matisgetlocalmat_ matisgetlocalmat
#endif
PETSC_EXTERN void matisgetlocalmat_(Mat *mat, Mat *local, PetscErrorCode *ierr)
{
  PetscBool null_local = !*(void**) local ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(local);
  *ierr = MatISGetLocalMat(*mat, local);
  if (*ierr) return;
  if (! null_local && !*(void**) local) *(void **) local = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscmat.h>
#include <petscmat.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define matisrestorelocalmat_ MATISRESTORELOCALMAT
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define matisrestorelocalmat_ matisrestorelocalmat
#endif
PETSC_EXTERN void matisrestorelocalmat_(Mat *mat, Mat *local, PetscErrorCode *ierr)
{
  PetscBool null_local = !*(void**) local ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(local);
  *ierr = MatISRestoreLocalMat(*mat, local);
  if (*ierr) return;
  if (! null_local && !*(void**) local) *(void **) local = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscmat.h>
#include <petscmat.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define matissetlocalmattype_ MATISSETLOCALMATTYPE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define matissetlocalmattype_ matissetlocalmattype
#endif
PETSC_EXTERN void matissetlocalmattype_(Mat *mat, char *mtype, PetscErrorCode *ierr, PETSC_FORTRAN_CHARLEN_T l_mtype)
{
  char* c_mtype;
  FIXCHAR(mtype, l_mtype, c_mtype);
  *ierr = MatISSetLocalMatType(*mat, c_mtype);
  if (*ierr) return;
  FREECHAR(mtype, c_mtype);
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscmat.h>
#include <petscmat.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define matissetlocalmat_ MATISSETLOCALMAT
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define matissetlocalmat_ matissetlocalmat
#endif
PETSC_EXTERN void matissetlocalmat_(Mat *mat, Mat *local, PetscErrorCode *ierr)
{
  *ierr = MatISSetLocalMat(*mat, *local);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscmat.h>
#include <petscmat.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define matcreateis_ MATCREATEIS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define matcreateis_ matcreateis
#endif
PETSC_EXTERN void matcreateis_(MPI_Fint *comm, PetscInt *bs, PetscInt *m, PetscInt *n, PetscInt *M_M, PetscInt *M_N, ISLocalToGlobalMapping *rmap, ISLocalToGlobalMapping *cmap, Mat *A, PetscErrorCode *ierr)
{
  PetscBool null_A = !*(void**) A ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(A);
  *ierr = MatCreateIS(MPI_Comm_f2c(*(comm)), *bs, *m, *n, *M_M, *M_N, *rmap, *cmap, A);
  if (*ierr) return;
  if (! null_A && !*(void**) A) *(void **) A = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscmat.h>
#include <petscmat.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define matisgetlocaltoglobalmapping_ MATISGETLOCALTOGLOBALMAPPING
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define matisgetlocaltoglobalmapping_ matisgetlocaltoglobalmapping
#endif
PETSC_EXTERN void matisgetlocaltoglobalmapping_(Mat *A, ISLocalToGlobalMapping *rmapping, ISLocalToGlobalMapping *cmapping, PetscErrorCode *ierr)
{
  PetscBool null_rmapping = !*(void**) rmapping ? PETSC_TRUE : PETSC_FALSE;
  PetscBool null_cmapping = !*(void**) cmapping ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(rmapping);
  CHKFORTRANNULLOBJECT(cmapping);
  *ierr = MatISGetLocalToGlobalMapping(*A, rmapping, cmapping);
  if (*ierr) return;
  if (! null_rmapping && !*(void**) rmapping) *(void **) rmapping = (void *)-2;
  if (! null_cmapping && !*(void**) cmapping) *(void **) cmapping = (void *)-2;
}
