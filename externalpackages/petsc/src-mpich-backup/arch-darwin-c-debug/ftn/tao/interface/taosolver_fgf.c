#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petsctao.h>
#include <petsctao.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define taosetsolution_ TAOSETSOLUTION
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define taosetsolution_ taosetsolution
#endif
PETSC_EXTERN void taosetsolution_(Tao *tao, Vec *x0, PetscErrorCode *ierr)
{
  *ierr = TaoSetSolution(*tao, *x0);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petsctao.h>
#include <petsctao.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define taotestgradient_ TAOTESTGRADIENT
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define taotestgradient_ taotestgradient
#endif
PETSC_EXTERN void taotestgradient_(Tao *tao, Vec *x, Vec *g1, PetscErrorCode *ierr)
{
  *ierr = TaoTestGradient(*tao, *x, *g1);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petsctao.h>
#include <petsctao.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define taocomputegradient_ TAOCOMPUTEGRADIENT
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define taocomputegradient_ taocomputegradient
#endif
PETSC_EXTERN void taocomputegradient_(Tao *tao, Vec *X, Vec *G, PetscErrorCode *ierr)
{
  *ierr = TaoComputeGradient(*tao, *X, *G);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petsctao.h>
#include <petsctao.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define taocomputeobjective_ TAOCOMPUTEOBJECTIVE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define taocomputeobjective_ taocomputeobjective
#endif
PETSC_EXTERN void taocomputeobjective_(Tao *tao, Vec *X, PetscReal *f, PetscErrorCode *ierr)
{
  CHKFORTRANNULLREAL(f);
  *ierr = TaoComputeObjective(*tao, *X, f);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petsctao.h>
#include <petsctao.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define taocomputeobjectiveandgradient_ TAOCOMPUTEOBJECTIVEANDGRADIENT
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define taocomputeobjectiveandgradient_ taocomputeobjectiveandgradient
#endif
PETSC_EXTERN void taocomputeobjectiveandgradient_(Tao *tao, Vec *X, PetscReal *f, Vec *G, PetscErrorCode *ierr)
{
  CHKFORTRANNULLREAL(f);
  *ierr = TaoComputeObjectiveAndGradient(*tao, *X, f, *G);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petsctao.h>
#include <petsctao.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define taosetresidualweights_ TAOSETRESIDUALWEIGHTS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define taosetresidualweights_ taosetresidualweights
#endif
PETSC_EXTERN void taosetresidualweights_(Tao *tao, Vec *sigma_v, PetscInt *n, PetscInt *rows, PetscInt *cols, PetscReal *vals, PetscErrorCode *ierr)
{
  CHKFORTRANNULLINTEGER(rows);
  CHKFORTRANNULLINTEGER(cols);
  CHKFORTRANNULLREAL(vals);
  *ierr = TaoSetResidualWeights(*tao, *sigma_v, *n, rows, cols, vals);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petsctao.h>
#include <petsctao.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define taocomputeresidual_ TAOCOMPUTERESIDUAL
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define taocomputeresidual_ taocomputeresidual
#endif
PETSC_EXTERN void taocomputeresidual_(Tao *tao, Vec *X, Vec *F, PetscErrorCode *ierr)
{
  *ierr = TaoComputeResidual(*tao, *X, *F);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petsctao.h>
#include <petsctao.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define taoisobjectivedefined_ TAOISOBJECTIVEDEFINED
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define taoisobjectivedefined_ taoisobjectivedefined
#endif
PETSC_EXTERN void taoisobjectivedefined_(Tao *tao, PetscBool *flg, PetscErrorCode *ierr)
{
  CHKFORTRANNULLBOOL(flg);
  *ierr = TaoIsObjectiveDefined(*tao, flg);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petsctao.h>
#include <petsctao.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define taoisgradientdefined_ TAOISGRADIENTDEFINED
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define taoisgradientdefined_ taoisgradientdefined
#endif
PETSC_EXTERN void taoisgradientdefined_(Tao *tao, PetscBool *flg, PetscErrorCode *ierr)
{
  CHKFORTRANNULLBOOL(flg);
  *ierr = TaoIsGradientDefined(*tao, flg);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petsctao.h>
#include <petsctao.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define taoisobjectiveandgradientdefined_ TAOISOBJECTIVEANDGRADIENTDEFINED
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define taoisobjectiveandgradientdefined_ taoisobjectiveandgradientdefined
#endif
PETSC_EXTERN void taoisobjectiveandgradientdefined_(Tao *tao, PetscBool *flg, PetscErrorCode *ierr)
{
  CHKFORTRANNULLBOOL(flg);
  *ierr = TaoIsObjectiveAndGradientDefined(*tao, flg);
  if (*ierr) return;
}
