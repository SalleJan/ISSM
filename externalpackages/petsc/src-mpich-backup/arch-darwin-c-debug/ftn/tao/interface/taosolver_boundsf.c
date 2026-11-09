#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petsctao.h>
#include <petsctao.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define taosetvariablebounds_ TAOSETVARIABLEBOUNDS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define taosetvariablebounds_ taosetvariablebounds
#endif
PETSC_EXTERN void taosetvariablebounds_(Tao *tao, Vec *XL, Vec *XU, PetscErrorCode *ierr)
{
  *ierr = TaoSetVariableBounds(*tao, *XL, *XU);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petsctao.h>
#include <petsctao.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define taogetvariablebounds_ TAOGETVARIABLEBOUNDS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define taogetvariablebounds_ taogetvariablebounds
#endif
PETSC_EXTERN void taogetvariablebounds_(Tao *tao, Vec *XL, Vec *XU, PetscErrorCode *ierr)
{
  PetscBool null_XL = !*(void**) XL ? PETSC_TRUE : PETSC_FALSE;
  PetscBool null_XU = !*(void**) XU ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(XL);
  CHKFORTRANNULLOBJECT(XU);
  *ierr = TaoGetVariableBounds(*tao, XL, XU);
  if (*ierr) return;
  if (! null_XL && !*(void**) XL) *(void **) XL = (void *)-2;
  if (! null_XU && !*(void**) XU) *(void **) XU = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petsctao.h>
#include <petsctao.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define taocomputevariablebounds_ TAOCOMPUTEVARIABLEBOUNDS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define taocomputevariablebounds_ taocomputevariablebounds
#endif
PETSC_EXTERN void taocomputevariablebounds_(Tao *tao, PetscErrorCode *ierr)
{
  *ierr = TaoComputeVariableBounds(*tao);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petsctao.h>
#include <petsctao.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define taosetinequalitybounds_ TAOSETINEQUALITYBOUNDS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define taosetinequalitybounds_ taosetinequalitybounds
#endif
PETSC_EXTERN void taosetinequalitybounds_(Tao *tao, Vec *IL, Vec *IU, PetscErrorCode *ierr)
{
  *ierr = TaoSetInequalityBounds(*tao, *IL, *IU);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petsctao.h>
#include <petsctao.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define taogetinequalitybounds_ TAOGETINEQUALITYBOUNDS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define taogetinequalitybounds_ taogetinequalitybounds
#endif
PETSC_EXTERN void taogetinequalitybounds_(Tao *tao, Vec *IL, Vec *IU, PetscErrorCode *ierr)
{
  PetscBool null_IL = !*(void**) IL ? PETSC_TRUE : PETSC_FALSE;
  PetscBool null_IU = !*(void**) IU ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(IL);
  CHKFORTRANNULLOBJECT(IU);
  *ierr = TaoGetInequalityBounds(*tao, IL, IU);
  if (*ierr) return;
  if (! null_IL && !*(void**) IL) *(void **) IL = (void *)-2;
  if (! null_IU && !*(void**) IU) *(void **) IU = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petsctao.h>
#include <petsctao.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define taocomputeconstraints_ TAOCOMPUTECONSTRAINTS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define taocomputeconstraints_ taocomputeconstraints
#endif
PETSC_EXTERN void taocomputeconstraints_(Tao *tao, Vec *X, Vec *C, PetscErrorCode *ierr)
{
  *ierr = TaoComputeConstraints(*tao, *X, *C);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petsctao.h>
#include <petsctao.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define taocomputedualvariables_ TAOCOMPUTEDUALVARIABLES
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define taocomputedualvariables_ taocomputedualvariables
#endif
PETSC_EXTERN void taocomputedualvariables_(Tao *tao, Vec *DL, Vec *DU, PetscErrorCode *ierr)
{
  *ierr = TaoComputeDualVariables(*tao, *DL, *DU);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petsctao.h>
#include <petsctao.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define taogetdualvariables_ TAOGETDUALVARIABLES
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define taogetdualvariables_ taogetdualvariables
#endif
PETSC_EXTERN void taogetdualvariables_(Tao *tao, Vec *DE, Vec *DI, PetscErrorCode *ierr)
{
  PetscBool null_DE = !*(void**) DE ? PETSC_TRUE : PETSC_FALSE;
  PetscBool null_DI = !*(void**) DI ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(DE);
  CHKFORTRANNULLOBJECT(DI);
  *ierr = TaoGetDualVariables(*tao, DE, DI);
  if (*ierr) return;
  if (! null_DE && !*(void**) DE) *(void **) DE = (void *)-2;
  if (! null_DI && !*(void**) DI) *(void **) DI = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petsctao.h>
#include <petsctao.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define taocomputeequalityconstraints_ TAOCOMPUTEEQUALITYCONSTRAINTS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define taocomputeequalityconstraints_ taocomputeequalityconstraints
#endif
PETSC_EXTERN void taocomputeequalityconstraints_(Tao *tao, Vec *X, Vec *CE, PetscErrorCode *ierr)
{
  *ierr = TaoComputeEqualityConstraints(*tao, *X, *CE);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petsctao.h>
#include <petsctao.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define taocomputeinequalityconstraints_ TAOCOMPUTEINEQUALITYCONSTRAINTS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define taocomputeinequalityconstraints_ taocomputeinequalityconstraints
#endif
PETSC_EXTERN void taocomputeinequalityconstraints_(Tao *tao, Vec *X, Vec *CI, PetscErrorCode *ierr)
{
  *ierr = TaoComputeInequalityConstraints(*tao, *X, *CI);
  if (*ierr) return;
}
