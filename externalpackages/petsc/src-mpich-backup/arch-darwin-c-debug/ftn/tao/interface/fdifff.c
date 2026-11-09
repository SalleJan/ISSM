#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petsctao.h>
#include <petsctao.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define taodefaultcomputegradient_ TAODEFAULTCOMPUTEGRADIENT
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define taodefaultcomputegradient_ taodefaultcomputegradient
#endif
PETSC_EXTERN void taodefaultcomputegradient_(Tao *tao, Vec *Xin, Vec *G, void *dummy, PetscErrorCode *ierr)
{
  *ierr = TaoDefaultComputeGradient(*tao, *Xin, *G, dummy);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petsctao.h>
#include <petsctao.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define taodefaultcomputehessian_ TAODEFAULTCOMPUTEHESSIAN
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define taodefaultcomputehessian_ taodefaultcomputehessian
#endif
PETSC_EXTERN void taodefaultcomputehessian_(Tao *tao, Vec *V, Mat *H, Mat *B, void *dummy, PetscErrorCode *ierr)
{
  *ierr = TaoDefaultComputeHessian(*tao, *V, *H, *B, dummy);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petsctao.h>
#include <petsctao.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define taodefaultcomputehessiancolor_ TAODEFAULTCOMPUTEHESSIANCOLOR
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define taodefaultcomputehessiancolor_ taodefaultcomputehessiancolor
#endif
PETSC_EXTERN void taodefaultcomputehessiancolor_(Tao *tao, Vec *V, Mat *H, Mat *B, PetscCtx ctx, PetscErrorCode *ierr)
{
  *ierr = TaoDefaultComputeHessianColor(*tao, *V, *H, *B, ctx);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petsctao.h>
#include <petsctao.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define taodefaultcomputehessianmffd_ TAODEFAULTCOMPUTEHESSIANMFFD
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define taodefaultcomputehessianmffd_ taodefaultcomputehessianmffd
#endif
PETSC_EXTERN void taodefaultcomputehessianmffd_(Tao *tao, Vec *X, Mat *H, Mat *B, PetscCtx ctx, PetscErrorCode *ierr)
{
  *ierr = TaoDefaultComputeHessianMFFD(*tao, *X, *H, *B, ctx);
  if (*ierr) return;
}
