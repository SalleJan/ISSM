#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscvec.h>
#include <petscvec.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define vecexp_ VECEXP
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define vecexp_ vecexp
#endif
PETSC_EXTERN void vecexp_(Vec *v, PetscErrorCode *ierr)
{
  *ierr = VecExp(*v);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscvec.h>
#include <petscvec.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define veclog_ VECLOG
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define veclog_ veclog
#endif
PETSC_EXTERN void veclog_(Vec *v, PetscErrorCode *ierr)
{
  *ierr = VecLog(*v);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscvec.h>
#include <petscvec.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define vecabs_ VECABS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define vecabs_ vecabs
#endif
PETSC_EXTERN void vecabs_(Vec *v, PetscErrorCode *ierr)
{
  *ierr = VecAbs(*v);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscvec.h>
#include <petscvec.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define vecconjugate_ VECCONJUGATE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define vecconjugate_ vecconjugate
#endif
PETSC_EXTERN void vecconjugate_(Vec *x, PetscErrorCode *ierr)
{
  *ierr = VecConjugate(*x);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscvec.h>
#include <petscvec.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define vecimaginarypart_ VECIMAGINARYPART
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define vecimaginarypart_ vecimaginarypart
#endif
PETSC_EXTERN void vecimaginarypart_(Vec *v, PetscErrorCode *ierr)
{
  *ierr = VecImaginaryPart(*v);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscvec.h>
#include <petscvec.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define vecrealpart_ VECREALPART
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define vecrealpart_ vecrealpart
#endif
PETSC_EXTERN void vecrealpart_(Vec *v, PetscErrorCode *ierr)
{
  *ierr = VecRealPart(*v);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscvec.h>
#include <petscvec.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define vecdotnorm2_ VECDOTNORM2
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define vecdotnorm2_ vecdotnorm2
#endif
PETSC_EXTERN void vecdotnorm2_(Vec *s, Vec *t, PetscScalar *dp, PetscReal *nm, PetscErrorCode *ierr)
{
  CHKFORTRANNULLSCALAR(dp);
  CHKFORTRANNULLREAL(nm);
  *ierr = VecDotNorm2(*s, *t, dp, nm);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscvec.h>
#include <petscvec.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define vecmean_ VECMEAN
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define vecmean_ vecmean
#endif
PETSC_EXTERN void vecmean_(Vec *v, PetscScalar *mean, PetscErrorCode *ierr)
{
  CHKFORTRANNULLSCALAR(mean);
  *ierr = VecMean(*v, mean);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscvec.h>
#include <petscvec.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define vecpermute_ VECPERMUTE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define vecpermute_ vecpermute
#endif
PETSC_EXTERN void vecpermute_(Vec *x, IS *row, PetscBool *inv, PetscErrorCode *ierr)
{
  *ierr = VecPermute(*x, *row, *inv ? PETSC_TRUE : PETSC_FALSE);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscvec.h>
#include <petscvec.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define vecequal_ VECEQUAL
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define vecequal_ vecequal
#endif
PETSC_EXTERN void vecequal_(Vec *vec1, Vec *vec2, PetscBool *flg, PetscErrorCode *ierr)
{
  CHKFORTRANNULLBOOL(flg);
  *ierr = VecEqual(*vec1, *vec2, flg);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscvec.h>
#include <petscvec.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define vecstrideset_ VECSTRIDESET
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define vecstrideset_ vecstrideset
#endif
PETSC_EXTERN void vecstrideset_(Vec *v, PetscInt *start, PetscScalar *s, PetscErrorCode *ierr)
{
  *ierr = VecStrideSet(*v, *start, *s);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscvec.h>
#include <petscvec.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define vecstridescale_ VECSTRIDESCALE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define vecstridescale_ vecstridescale
#endif
PETSC_EXTERN void vecstridescale_(Vec *v, PetscInt *start, PetscScalar *scale, PetscErrorCode *ierr)
{
  *ierr = VecStrideScale(*v, *start, *scale);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscvec.h>
#include <petscvec.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define vecstridenorm_ VECSTRIDENORM
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define vecstridenorm_ vecstridenorm
#endif
PETSC_EXTERN void vecstridenorm_(Vec *v, PetscInt *start, NormType *ntype, PetscReal *nrm, PetscErrorCode *ierr)
{
  CHKFORTRANNULLREAL(nrm);
  *ierr = VecStrideNorm(*v, *start, *ntype, nrm);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscvec.h>
#include <petscvec.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define vecstridemax_ VECSTRIDEMAX
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define vecstridemax_ vecstridemax
#endif
PETSC_EXTERN void vecstridemax_(Vec *v, PetscInt *start, PetscInt *idex, PetscReal *nrm, PetscErrorCode *ierr)
{
  CHKFORTRANNULLINTEGER(idex);
  CHKFORTRANNULLREAL(nrm);
  *ierr = VecStrideMax(*v, *start, idex, nrm);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscvec.h>
#include <petscvec.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define vecstridemin_ VECSTRIDEMIN
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define vecstridemin_ vecstridemin
#endif
PETSC_EXTERN void vecstridemin_(Vec *v, PetscInt *start, PetscInt *idex, PetscReal *nrm, PetscErrorCode *ierr)
{
  CHKFORTRANNULLINTEGER(idex);
  CHKFORTRANNULLREAL(nrm);
  *ierr = VecStrideMin(*v, *start, idex, nrm);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscvec.h>
#include <petscvec.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define vecstridesum_ VECSTRIDESUM
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define vecstridesum_ vecstridesum
#endif
PETSC_EXTERN void vecstridesum_(Vec *v, PetscInt *start, PetscScalar *sum, PetscErrorCode *ierr)
{
  CHKFORTRANNULLSCALAR(sum);
  *ierr = VecStrideSum(*v, *start, sum);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscvec.h>
#include <petscvec.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define vecstridescaleall_ VECSTRIDESCALEALL
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define vecstridescaleall_ vecstridescaleall
#endif
PETSC_EXTERN void vecstridescaleall_(Vec *v, const PetscScalar *scales, PetscErrorCode *ierr)
{
  CHKFORTRANNULLSCALAR(scales);
  *ierr = VecStrideScaleAll(*v, scales);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscvec.h>
#include <petscvec.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define vecstridenormall_ VECSTRIDENORMALL
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define vecstridenormall_ vecstridenormall
#endif
PETSC_EXTERN void vecstridenormall_(Vec *v, NormType *ntype, PetscReal nrm[], PetscErrorCode *ierr)
{
  CHKFORTRANNULLREAL(nrm);
  *ierr = VecStrideNormAll(*v, *ntype, nrm);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscvec.h>
#include <petscvec.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define vecstridemaxall_ VECSTRIDEMAXALL
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define vecstridemaxall_ vecstridemaxall
#endif
PETSC_EXTERN void vecstridemaxall_(Vec *v, PetscInt idex[], PetscReal nrm[], PetscErrorCode *ierr)
{
  CHKFORTRANNULLINTEGER(idex);
  CHKFORTRANNULLREAL(nrm);
  *ierr = VecStrideMaxAll(*v, idex, nrm);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscvec.h>
#include <petscvec.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define vecstrideminall_ VECSTRIDEMINALL
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define vecstrideminall_ vecstrideminall
#endif
PETSC_EXTERN void vecstrideminall_(Vec *v, PetscInt idex[], PetscReal nrm[], PetscErrorCode *ierr)
{
  CHKFORTRANNULLINTEGER(idex);
  CHKFORTRANNULLREAL(nrm);
  *ierr = VecStrideMinAll(*v, idex, nrm);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscvec.h>
#include <petscvec.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define vecstridesumall_ VECSTRIDESUMALL
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define vecstridesumall_ vecstridesumall
#endif
PETSC_EXTERN void vecstridesumall_(Vec *v, PetscScalar sums[], PetscErrorCode *ierr)
{
  CHKFORTRANNULLSCALAR(sums);
  *ierr = VecStrideSumAll(*v, sums);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscvec.h>
#include <petscvec.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define vecstridegatherall_ VECSTRIDEGATHERALL
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define vecstridegatherall_ vecstridegatherall
#endif
PETSC_EXTERN void vecstridegatherall_(Vec *v, Vec s[], InsertMode *addv, PetscErrorCode *ierr)
{
  CHKFORTRANNULLOBJECT(s);
  *ierr = VecStrideGatherAll(*v, s, *addv);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscvec.h>
#include <petscvec.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define vecstridescatterall_ VECSTRIDESCATTERALL
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define vecstridescatterall_ vecstridescatterall
#endif
PETSC_EXTERN void vecstridescatterall_(Vec s[], Vec *v, InsertMode *addv, PetscErrorCode *ierr)
{
  CHKFORTRANNULLOBJECT(s);
  *ierr = VecStrideScatterAll(s, *v, *addv);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscvec.h>
#include <petscvec.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define vecstridegather_ VECSTRIDEGATHER
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define vecstridegather_ vecstridegather
#endif
PETSC_EXTERN void vecstridegather_(Vec *v, PetscInt *start, Vec *s, InsertMode *addv, PetscErrorCode *ierr)
{
  *ierr = VecStrideGather(*v, *start, *s, *addv);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscvec.h>
#include <petscvec.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define vecstridescatter_ VECSTRIDESCATTER
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define vecstridescatter_ vecstridescatter
#endif
PETSC_EXTERN void vecstridescatter_(Vec *s, PetscInt *start, Vec *v, InsertMode *addv, PetscErrorCode *ierr)
{
  *ierr = VecStrideScatter(*s, *start, *v, *addv);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscvec.h>
#include <petscvec.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define vecstridesubsetgather_ VECSTRIDESUBSETGATHER
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define vecstridesubsetgather_ vecstridesubsetgather
#endif
PETSC_EXTERN void vecstridesubsetgather_(Vec *v, PetscInt *nidx, const PetscInt idxv[], const PetscInt idxs[], Vec *s, InsertMode *addv, PetscErrorCode *ierr)
{
  CHKFORTRANNULLINTEGER(idxv);
  CHKFORTRANNULLINTEGER(idxs);
  *ierr = VecStrideSubSetGather(*v, *nidx, idxv, idxs, *s, *addv);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscvec.h>
#include <petscvec.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define vecstridesubsetscatter_ VECSTRIDESUBSETSCATTER
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define vecstridesubsetscatter_ vecstridesubsetscatter
#endif
PETSC_EXTERN void vecstridesubsetscatter_(Vec *s, PetscInt *nidx, const PetscInt idxs[], const PetscInt idxv[], Vec *v, InsertMode *addv, PetscErrorCode *ierr)
{
  CHKFORTRANNULLINTEGER(idxs);
  CHKFORTRANNULLINTEGER(idxv);
  *ierr = VecStrideSubSetScatter(*s, *nidx, idxs, idxv, *v, *addv);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscvec.h>
#include <petscvec.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define vecsqrtabs_ VECSQRTABS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define vecsqrtabs_ vecsqrtabs
#endif
PETSC_EXTERN void vecsqrtabs_(Vec *v, PetscErrorCode *ierr)
{
  *ierr = VecSqrtAbs(*v);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscvec.h>
#include <petscvec.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define vecsum_ VECSUM
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define vecsum_ vecsum
#endif
PETSC_EXTERN void vecsum_(Vec *v, PetscScalar *sum, PetscErrorCode *ierr)
{
  CHKFORTRANNULLSCALAR(sum);
  *ierr = VecSum(*v, sum);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscvec.h>
#include <petscvec.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define vecshift_ VECSHIFT
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define vecshift_ vecshift
#endif
PETSC_EXTERN void vecshift_(Vec *v, PetscScalar *shift, PetscErrorCode *ierr)
{
  *ierr = VecShift(*v, *shift);
  if (*ierr) return;
}
