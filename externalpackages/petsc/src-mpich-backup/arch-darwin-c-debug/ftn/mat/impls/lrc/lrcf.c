#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscmat.h>
#include <petscmat.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define matlrcgetmats_ MATLRCGETMATS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define matlrcgetmats_ matlrcgetmats
#endif
PETSC_EXTERN void matlrcgetmats_(Mat *N, Mat *A, Mat *U, Vec *c, Mat *V, PetscErrorCode *ierr)
{
  PetscBool null_A = !*(void**) A ? PETSC_TRUE : PETSC_FALSE;
  PetscBool null_U = !*(void**) U ? PETSC_TRUE : PETSC_FALSE;
  PetscBool null_c = !*(void**) c ? PETSC_TRUE : PETSC_FALSE;
  PetscBool null_V = !*(void**) V ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(A);
  CHKFORTRANNULLOBJECT(U);
  CHKFORTRANNULLOBJECT(c);
  CHKFORTRANNULLOBJECT(V);
  *ierr = MatLRCGetMats(*N, A, U, c, V);
  if (*ierr) return;
  if (! null_A && !*(void**) A) *(void **) A = (void *)-2;
  if (! null_U && !*(void**) U) *(void **) U = (void *)-2;
  if (! null_c && !*(void**) c) *(void **) c = (void *)-2;
  if (! null_V && !*(void**) V) *(void **) V = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscmat.h>
#include <petscmat.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define matlrcsetmats_ MATLRCSETMATS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define matlrcsetmats_ matlrcsetmats
#endif
PETSC_EXTERN void matlrcsetmats_(Mat *N, Mat *A, Mat *U, Vec *c, Mat *V, PetscErrorCode *ierr)
{
  *ierr = MatLRCSetMats(*N, *A, *U, *c, *V);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscmat.h>
#include <petscmat.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define matcreatelrc_ MATCREATELRC
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define matcreatelrc_ matcreatelrc
#endif
PETSC_EXTERN void matcreatelrc_(Mat *A, Mat *U, Vec *c, Mat *V, Mat *N, PetscErrorCode *ierr)
{
  PetscBool null_N = !*(void**) N ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(N);
  *ierr = MatCreateLRC(*A, *U, *c, *V, N);
  if (*ierr) return;
  if (! null_N && !*(void**) N) *(void **) N = (void *)-2;
}
