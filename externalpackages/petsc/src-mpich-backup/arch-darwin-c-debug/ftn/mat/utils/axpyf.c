#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscmat.h>
#include <petscmat.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define mataxpy_ MATAXPY
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define mataxpy_ mataxpy
#endif
PETSC_EXTERN void mataxpy_(Mat *Y, PetscScalar *a, Mat *X, MatStructure *str, PetscErrorCode *ierr)
{
  *ierr = MatAXPY(*Y, *a, *X, *str);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscmat.h>
#include <petscmat.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define matshift_ MATSHIFT
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define matshift_ matshift
#endif
PETSC_EXTERN void matshift_(Mat *Y, PetscScalar *a, PetscErrorCode *ierr)
{
  *ierr = MatShift(*Y, *a);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscmat.h>
#include <petscmat.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define matdiagonalset_ MATDIAGONALSET
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define matdiagonalset_ matdiagonalset
#endif
PETSC_EXTERN void matdiagonalset_(Mat *Y, Vec *D, InsertMode *is, PetscErrorCode *ierr)
{
  *ierr = MatDiagonalSet(*Y, *D, *is);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscmat.h>
#include <petscmat.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define mataypx_ MATAYPX
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define mataypx_ mataypx
#endif
PETSC_EXTERN void mataypx_(Mat *Y, PetscScalar *a, Mat *X, MatStructure *str, PetscErrorCode *ierr)
{
  *ierr = MatAYPX(*Y, *a, *X, *str);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscmat.h>
#include <petscmat.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define matcomputeoperator_ MATCOMPUTEOPERATOR
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define matcomputeoperator_ matcomputeoperator
#endif
PETSC_EXTERN void matcomputeoperator_(Mat *inmat, char *mattype, Mat *mat, PetscErrorCode *ierr, PETSC_FORTRAN_CHARLEN_T l_mattype)
{
  PetscBool null_mat = !*(void**) mat ? PETSC_TRUE : PETSC_FALSE;
  char* c_mattype;
  FIXCHAR(mattype, l_mattype, c_mattype);
  CHKFORTRANNULLOBJECT(mat);
  *ierr = MatComputeOperator(*inmat, c_mattype, mat);
  if (*ierr) return;
  FREECHAR(mattype, c_mattype);
  if (! null_mat && !*(void**) mat) *(void **) mat = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscmat.h>
#include <petscmat.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define matcomputeoperatortranspose_ MATCOMPUTEOPERATORTRANSPOSE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define matcomputeoperatortranspose_ matcomputeoperatortranspose
#endif
PETSC_EXTERN void matcomputeoperatortranspose_(Mat *inmat, char *mattype, Mat *mat, PetscErrorCode *ierr, PETSC_FORTRAN_CHARLEN_T l_mattype)
{
  PetscBool null_mat = !*(void**) mat ? PETSC_TRUE : PETSC_FALSE;
  char* c_mattype;
  FIXCHAR(mattype, l_mattype, c_mattype);
  CHKFORTRANNULLOBJECT(mat);
  *ierr = MatComputeOperatorTranspose(*inmat, c_mattype, mat);
  if (*ierr) return;
  FREECHAR(mattype, c_mattype);
  if (! null_mat && !*(void**) mat) *(void **) mat = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscmat.h>
#include <petscmat.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define matfilter_ MATFILTER
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define matfilter_ matfilter
#endif
PETSC_EXTERN void matfilter_(Mat *A, PetscReal *tol, PetscBool *compress, PetscBool *keep, PetscErrorCode *ierr)
{
  *ierr = MatFilter(*A, *tol, *compress ? PETSC_TRUE : PETSC_FALSE, *keep ? PETSC_TRUE : PETSC_FALSE);
  if (*ierr) return;
}
