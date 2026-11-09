#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petsctao.h>
#include <petsctao.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define taogethessianmatrices_ TAOGETHESSIANMATRICES
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define taogethessianmatrices_ taogethessianmatrices
#endif
PETSC_EXTERN void taogethessianmatrices_(Tao *tao, Mat *H, Mat *Hpre, PetscErrorCode *ierr)
{
  PetscBool null_H = !*(void**) H ? PETSC_TRUE : PETSC_FALSE;
  PetscBool null_Hpre = !*(void**) Hpre ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(H);
  CHKFORTRANNULLOBJECT(Hpre);
  *ierr = TaoGetHessianMatrices(*tao, H, Hpre);
  if (*ierr) return;
  if (! null_H && !*(void**) H) *(void **) H = (void *)-2;
  if (! null_Hpre && !*(void**) Hpre) *(void **) Hpre = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petsctao.h>
#include <petsctao.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define taotesthessian_ TAOTESTHESSIAN
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define taotesthessian_ taotesthessian
#endif
PETSC_EXTERN void taotesthessian_(Tao *tao, PetscErrorCode *ierr)
{
  *ierr = TaoTestHessian(*tao);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petsctao.h>
#include <petsctao.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define taocomputehessian_ TAOCOMPUTEHESSIAN
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define taocomputehessian_ taocomputehessian
#endif
PETSC_EXTERN void taocomputehessian_(Tao *tao, Vec *X, Mat *H, Mat *Hpre, PetscErrorCode *ierr)
{
  *ierr = TaoComputeHessian(*tao, *X, *H, *Hpre);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petsctao.h>
#include <petsctao.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define taocomputejacobian_ TAOCOMPUTEJACOBIAN
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define taocomputejacobian_ taocomputejacobian
#endif
PETSC_EXTERN void taocomputejacobian_(Tao *tao, Vec *X, Mat *J, Mat *Jpre, PetscErrorCode *ierr)
{
  *ierr = TaoComputeJacobian(*tao, *X, *J, *Jpre);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petsctao.h>
#include <petsctao.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define taocomputeresidualjacobian_ TAOCOMPUTERESIDUALJACOBIAN
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define taocomputeresidualjacobian_ taocomputeresidualjacobian
#endif
PETSC_EXTERN void taocomputeresidualjacobian_(Tao *tao, Vec *X, Mat *J, Mat *Jpre, PetscErrorCode *ierr)
{
  *ierr = TaoComputeResidualJacobian(*tao, *X, *J, *Jpre);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petsctao.h>
#include <petsctao.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define taocomputejacobianstate_ TAOCOMPUTEJACOBIANSTATE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define taocomputejacobianstate_ taocomputejacobianstate
#endif
PETSC_EXTERN void taocomputejacobianstate_(Tao *tao, Vec *X, Mat *J, Mat *Jpre, Mat *Jinv, PetscErrorCode *ierr)
{
  *ierr = TaoComputeJacobianState(*tao, *X, *J, *Jpre, *Jinv);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petsctao.h>
#include <petsctao.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define taocomputejacobiandesign_ TAOCOMPUTEJACOBIANDESIGN
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define taocomputejacobiandesign_ taocomputejacobiandesign
#endif
PETSC_EXTERN void taocomputejacobiandesign_(Tao *tao, Vec *X, Mat *J, PetscErrorCode *ierr)
{
  *ierr = TaoComputeJacobianDesign(*tao, *X, *J);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petsctao.h>
#include <petsctao.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define taosetstatedesignis_ TAOSETSTATEDESIGNIS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define taosetstatedesignis_ taosetstatedesignis
#endif
PETSC_EXTERN void taosetstatedesignis_(Tao *tao, IS *s_is, IS *d_is, PetscErrorCode *ierr)
{
  *ierr = TaoSetStateDesignIS(*tao, *s_is, *d_is);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petsctao.h>
#include <petsctao.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define taocomputejacobianequality_ TAOCOMPUTEJACOBIANEQUALITY
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define taocomputejacobianequality_ taocomputejacobianequality
#endif
PETSC_EXTERN void taocomputejacobianequality_(Tao *tao, Vec *X, Mat *J, Mat *Jpre, PetscErrorCode *ierr)
{
  *ierr = TaoComputeJacobianEquality(*tao, *X, *J, *Jpre);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petsctao.h>
#include <petsctao.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define taocomputejacobianinequality_ TAOCOMPUTEJACOBIANINEQUALITY
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define taocomputejacobianinequality_ taocomputejacobianinequality
#endif
PETSC_EXTERN void taocomputejacobianinequality_(Tao *tao, Vec *X, Mat *J, Mat *Jpre, PetscErrorCode *ierr)
{
  *ierr = TaoComputeJacobianInequality(*tao, *X, *J, *Jpre);
  if (*ierr) return;
}
