#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscvec.h>
#include <petscvec.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define vecwhichequal_ VECWHICHEQUAL
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define vecwhichequal_ vecwhichequal
#endif
PETSC_EXTERN void vecwhichequal_(Vec *Vec1, Vec *Vec2, IS *S, PetscErrorCode *ierr)
{
  PetscBool null_S = !*(void**) S ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(S);
  *ierr = VecWhichEqual(*Vec1, *Vec2, S);
  if (*ierr) return;
  if (! null_S && !*(void**) S) *(void **) S = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscvec.h>
#include <petscvec.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define vecwhichlessthan_ VECWHICHLESSTHAN
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define vecwhichlessthan_ vecwhichlessthan
#endif
PETSC_EXTERN void vecwhichlessthan_(Vec *Vec1, Vec *Vec2, IS *S, PetscErrorCode *ierr)
{
  PetscBool null_S = !*(void**) S ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(S);
  *ierr = VecWhichLessThan(*Vec1, *Vec2, S);
  if (*ierr) return;
  if (! null_S && !*(void**) S) *(void **) S = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscvec.h>
#include <petscvec.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define vecwhichgreaterthan_ VECWHICHGREATERTHAN
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define vecwhichgreaterthan_ vecwhichgreaterthan
#endif
PETSC_EXTERN void vecwhichgreaterthan_(Vec *Vec1, Vec *Vec2, IS *S, PetscErrorCode *ierr)
{
  PetscBool null_S = !*(void**) S ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(S);
  *ierr = VecWhichGreaterThan(*Vec1, *Vec2, S);
  if (*ierr) return;
  if (! null_S && !*(void**) S) *(void **) S = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscvec.h>
#include <petscvec.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define vecwhichbetween_ VECWHICHBETWEEN
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define vecwhichbetween_ vecwhichbetween
#endif
PETSC_EXTERN void vecwhichbetween_(Vec *VecLow, Vec *V, Vec *VecHigh, IS *S, PetscErrorCode *ierr)
{
  PetscBool null_S = !*(void**) S ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(S);
  *ierr = VecWhichBetween(*VecLow, *V, *VecHigh, S);
  if (*ierr) return;
  if (! null_S && !*(void**) S) *(void **) S = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscvec.h>
#include <petscvec.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define vecwhichbetweenorequal_ VECWHICHBETWEENOREQUAL
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define vecwhichbetweenorequal_ vecwhichbetweenorequal
#endif
PETSC_EXTERN void vecwhichbetweenorequal_(Vec *VecLow, Vec *V, Vec *VecHigh, IS *S, PetscErrorCode *ierr)
{
  PetscBool null_S = !*(void**) S ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(S);
  *ierr = VecWhichBetweenOrEqual(*VecLow, *V, *VecHigh, S);
  if (*ierr) return;
  if (! null_S && !*(void**) S) *(void **) S = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscvec.h>
#include <petscvec.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define vecwhichinactive_ VECWHICHINACTIVE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define vecwhichinactive_ vecwhichinactive
#endif
PETSC_EXTERN void vecwhichinactive_(Vec *VecLow, Vec *V, Vec *D, Vec *VecHigh, PetscBool *Strong, IS *S, PetscErrorCode *ierr)
{
  PetscBool null_S = !*(void**) S ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(S);
  *ierr = VecWhichInactive(*VecLow, *V, *D, *VecHigh, *Strong ? PETSC_TRUE : PETSC_FALSE, S);
  if (*ierr) return;
  if (! null_S && !*(void**) S) *(void **) S = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscvec.h>
#include <petscvec.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define vecisaxpy_ VECISAXPY
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define vecisaxpy_ vecisaxpy
#endif
PETSC_EXTERN void vecisaxpy_(Vec *vfull, IS *is, PetscScalar *alpha, Vec *vreduced, PetscErrorCode *ierr)
{
  *ierr = VecISAXPY(*vfull, *is, *alpha, *vreduced);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscvec.h>
#include <petscvec.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define veciscopy_ VECISCOPY
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define veciscopy_ veciscopy
#endif
PETSC_EXTERN void veciscopy_(Vec *vfull, IS *is, ScatterMode *mode, Vec *vreduced, PetscErrorCode *ierr)
{
  *ierr = VecISCopy(*vfull, *is, *mode, *vreduced);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscvec.h>
#include <petscvec.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define vecisset_ VECISSET
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define vecisset_ vecisset
#endif
PETSC_EXTERN void vecisset_(Vec *V, IS *S, PetscScalar *c, PetscErrorCode *ierr)
{
  *ierr = VecISSet(*V, *S, *c);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscvec.h>
#include <petscvec.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define vecisshift_ VECISSHIFT
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define vecisshift_ vecisshift
#endif
PETSC_EXTERN void vecisshift_(Vec *V, IS *S, PetscScalar *c, PetscErrorCode *ierr)
{
  *ierr = VecISShift(*V, *S, *c);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscvec.h>
#include <petscvec.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define vecboundgradientprojection_ VECBOUNDGRADIENTPROJECTION
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define vecboundgradientprojection_ vecboundgradientprojection
#endif
PETSC_EXTERN void vecboundgradientprojection_(Vec *G, Vec *X, Vec *XL, Vec *XU, Vec *GP, PetscErrorCode *ierr)
{
  *ierr = VecBoundGradientProjection(*G, *X, *XL, *XU, *GP);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscvec.h>
#include <petscvec.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define vecpow_ VECPOW
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define vecpow_ vecpow
#endif
PETSC_EXTERN void vecpow_(Vec *v, PetscScalar *p, PetscErrorCode *ierr)
{
  *ierr = VecPow(*v, *p);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscvec.h>
#include <petscvec.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define vecmedian_ VECMEDIAN
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define vecmedian_ vecmedian
#endif
PETSC_EXTERN void vecmedian_(Vec *Vec1, Vec *Vec2, Vec *Vec3, Vec *VMedian, PetscErrorCode *ierr)
{
  *ierr = VecMedian(*Vec1, *Vec2, *Vec3, *VMedian);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscvec.h>
#include <petscvec.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define vecstepmaxbounded_ VECSTEPMAXBOUNDED
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define vecstepmaxbounded_ vecstepmaxbounded
#endif
PETSC_EXTERN void vecstepmaxbounded_(Vec *X, Vec *DX, Vec *XL, Vec *XU, PetscReal *stepmax, PetscErrorCode *ierr)
{
  CHKFORTRANNULLREAL(stepmax);
  *ierr = VecStepMaxBounded(*X, *DX, *XL, *XU, stepmax);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscvec.h>
#include <petscvec.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define vecstepboundinfo_ VECSTEPBOUNDINFO
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define vecstepboundinfo_ vecstepboundinfo
#endif
PETSC_EXTERN void vecstepboundinfo_(Vec *X, Vec *DX, Vec *XL, Vec *XU, PetscReal *boundmin, PetscReal *wolfemin, PetscReal *boundmax, PetscErrorCode *ierr)
{
  CHKFORTRANNULLREAL(boundmin);
  CHKFORTRANNULLREAL(wolfemin);
  CHKFORTRANNULLREAL(boundmax);
  *ierr = VecStepBoundInfo(*X, *DX, *XL, *XU, boundmin, wolfemin, boundmax);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscvec.h>
#include <petscvec.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define vecstepmax_ VECSTEPMAX
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define vecstepmax_ vecstepmax
#endif
PETSC_EXTERN void vecstepmax_(Vec *X, Vec *DX, PetscReal *step, PetscErrorCode *ierr)
{
  CHKFORTRANNULLREAL(step);
  *ierr = VecStepMax(*X, *DX, step);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscvec.h>
#include <petscvec.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define iscomplementvec_ ISCOMPLEMENTVEC
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define iscomplementvec_ iscomplementvec
#endif
PETSC_EXTERN void iscomplementvec_(IS *S, Vec *V, IS *T, PetscErrorCode *ierr)
{
  PetscBool null_T = !*(void**) T ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(T);
  *ierr = ISComplementVec(*S, *V, T);
  if (*ierr) return;
  if (! null_T && !*(void**) T) *(void **) T = (void *)-2;
}
