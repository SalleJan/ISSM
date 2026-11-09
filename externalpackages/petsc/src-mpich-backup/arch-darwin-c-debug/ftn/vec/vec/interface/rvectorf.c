#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscvec.h>
#include <petscvec.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define vecmaxpointwisedivide_ VECMAXPOINTWISEDIVIDE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define vecmaxpointwisedivide_ vecmaxpointwisedivide
#endif
PETSC_EXTERN void vecmaxpointwisedivide_(Vec *x, Vec *y, PetscReal *max, PetscErrorCode *ierr)
{
  CHKFORTRANNULLREAL(max);
  *ierr = VecMaxPointwiseDivide(*x, *y, max);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscvec.h>
#include <petscvec.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define vecdot_ VECDOT
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define vecdot_ vecdot
#endif
PETSC_EXTERN void vecdot_(Vec *x, Vec *y, PetscScalar *val, PetscErrorCode *ierr)
{
  CHKFORTRANNULLSCALAR(val);
  *ierr = VecDot(*x, *y, val);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscvec.h>
#include <petscvec.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define vecdotrealpart_ VECDOTREALPART
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define vecdotrealpart_ vecdotrealpart
#endif
PETSC_EXTERN void vecdotrealpart_(Vec *x, Vec *y, PetscReal *val, PetscErrorCode *ierr)
{
  CHKFORTRANNULLREAL(val);
  *ierr = VecDotRealPart(*x, *y, val);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscvec.h>
#include <petscvec.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define vecnorm_ VECNORM
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define vecnorm_ vecnorm
#endif
PETSC_EXTERN void vecnorm_(Vec *x, NormType *type, PetscReal *val, PetscErrorCode *ierr)
{
  CHKFORTRANNULLREAL(val);
  *ierr = VecNorm(*x, *type, val);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscvec.h>
#include <petscvec.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define vecnormavailable_ VECNORMAVAILABLE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define vecnormavailable_ vecnormavailable
#endif
PETSC_EXTERN void vecnormavailable_(Vec *x, NormType *type, PetscBool *available, PetscReal *val, PetscErrorCode *ierr)
{
  CHKFORTRANNULLBOOL(available);
  CHKFORTRANNULLREAL(val);
  *ierr = VecNormAvailable(*x, *type, available, val);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscvec.h>
#include <petscvec.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define vecnormalize_ VECNORMALIZE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define vecnormalize_ vecnormalize
#endif
PETSC_EXTERN void vecnormalize_(Vec *x, PetscReal *val, PetscErrorCode *ierr)
{
  CHKFORTRANNULLREAL(val);
  *ierr = VecNormalize(*x, val);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscvec.h>
#include <petscvec.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define vecmax_ VECMAX
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define vecmax_ vecmax
#endif
PETSC_EXTERN void vecmax_(Vec *x, PetscInt *p, PetscReal *val, PetscErrorCode *ierr)
{
  CHKFORTRANNULLINTEGER(p);
  CHKFORTRANNULLREAL(val);
  *ierr = VecMax(*x, p, val);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscvec.h>
#include <petscvec.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define vecmin_ VECMIN
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define vecmin_ vecmin
#endif
PETSC_EXTERN void vecmin_(Vec *x, PetscInt *p, PetscReal *val, PetscErrorCode *ierr)
{
  CHKFORTRANNULLINTEGER(p);
  CHKFORTRANNULLREAL(val);
  *ierr = VecMin(*x, p, val);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscvec.h>
#include <petscvec.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define vectdot_ VECTDOT
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define vectdot_ vectdot
#endif
PETSC_EXTERN void vectdot_(Vec *x, Vec *y, PetscScalar *val, PetscErrorCode *ierr)
{
  CHKFORTRANNULLSCALAR(val);
  *ierr = VecTDot(*x, *y, val);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscvec.h>
#include <petscvec.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define vecaxpy_ VECAXPY
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define vecaxpy_ vecaxpy
#endif
PETSC_EXTERN void vecaxpy_(Vec *y, PetscScalar *alpha, Vec *x, PetscErrorCode *ierr)
{
  *ierr = VecAXPY(*y, *alpha, *x);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscvec.h>
#include <petscvec.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define vecaypx_ VECAYPX
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define vecaypx_ vecaypx
#endif
PETSC_EXTERN void vecaypx_(Vec *y, PetscScalar *beta, Vec *x, PetscErrorCode *ierr)
{
  *ierr = VecAYPX(*y, *beta, *x);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscvec.h>
#include <petscvec.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define vecaxpby_ VECAXPBY
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define vecaxpby_ vecaxpby
#endif
PETSC_EXTERN void vecaxpby_(Vec *y, PetscScalar *alpha, PetscScalar *beta, Vec *x, PetscErrorCode *ierr)
{
  *ierr = VecAXPBY(*y, *alpha, *beta, *x);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscvec.h>
#include <petscvec.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define vecaxpbypcz_ VECAXPBYPCZ
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define vecaxpbypcz_ vecaxpbypcz
#endif
PETSC_EXTERN void vecaxpbypcz_(Vec *z, PetscScalar *alpha, PetscScalar *beta, PetscScalar *gamma, Vec *x, Vec *y, PetscErrorCode *ierr)
{
  *ierr = VecAXPBYPCZ(*z, *alpha, *beta, *gamma, *x, *y);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscvec.h>
#include <petscvec.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define vecwaxpy_ VECWAXPY
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define vecwaxpy_ vecwaxpy
#endif
PETSC_EXTERN void vecwaxpy_(Vec *w, PetscScalar *alpha, Vec *x, Vec *y, PetscErrorCode *ierr)
{
  *ierr = VecWAXPY(*w, *alpha, *x, *y);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscvec.h>
#include <petscvec.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define vecgetvalues_ VECGETVALUES
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define vecgetvalues_ vecgetvalues
#endif
PETSC_EXTERN void vecgetvalues_(Vec *x, PetscInt *ni, const PetscInt ix[], PetscScalar y[], PetscErrorCode *ierr)
{
  CHKFORTRANNULLINTEGER(ix);
  CHKFORTRANNULLSCALAR(y);
  *ierr = VecGetValues(*x, *ni, ix, y);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscvec.h>
#include <petscvec.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define vecmtdot_ VECMTDOT
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define vecmtdot_ vecmtdot
#endif
PETSC_EXTERN void vecmtdot_(Vec *x, PetscInt *nv, const Vec y[], PetscScalar val[], PetscErrorCode *ierr)
{
  CHKFORTRANNULLOBJECT(y);
  CHKFORTRANNULLSCALAR(val);
  *ierr = VecMTDot(*x, *nv, y, val);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscvec.h>
#include <petscvec.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define vecmdot_ VECMDOT
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define vecmdot_ vecmdot
#endif
PETSC_EXTERN void vecmdot_(Vec *x, PetscInt *nv, const Vec y[], PetscScalar val[], PetscErrorCode *ierr)
{
  CHKFORTRANNULLOBJECT(y);
  CHKFORTRANNULLSCALAR(val);
  *ierr = VecMDot(*x, *nv, y, val);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscvec.h>
#include <petscvec.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define vecmaxpy_ VECMAXPY
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define vecmaxpy_ vecmaxpy
#endif
PETSC_EXTERN void vecmaxpy_(Vec *y, PetscInt *nv, const PetscScalar alpha[], Vec x[], PetscErrorCode *ierr)
{
  CHKFORTRANNULLSCALAR(alpha);
  CHKFORTRANNULLOBJECT(x);
  *ierr = VecMAXPY(*y, *nv, alpha, x);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscvec.h>
#include <petscvec.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define vecmaxpby_ VECMAXPBY
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define vecmaxpby_ vecmaxpby
#endif
PETSC_EXTERN void vecmaxpby_(Vec *y, PetscInt *nv, const PetscScalar alpha[], PetscScalar *beta, Vec x[], PetscErrorCode *ierr)
{
  CHKFORTRANNULLSCALAR(alpha);
  CHKFORTRANNULLOBJECT(x);
  *ierr = VecMAXPBY(*y, *nv, alpha, *beta, x);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscvec.h>
#include <petscvec.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define vecgetsubvector_ VECGETSUBVECTOR
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define vecgetsubvector_ vecgetsubvector
#endif
PETSC_EXTERN void vecgetsubvector_(Vec *X, IS *is, Vec *Y, PetscErrorCode *ierr)
{
  PetscBool null_Y = !*(void**) Y ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(Y);
  *ierr = VecGetSubVector(*X, *is, Y);
  if (*ierr) return;
  if (! null_Y && !*(void**) Y) *(void **) Y = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscvec.h>
#include <petscvec.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define vecrestoresubvector_ VECRESTORESUBVECTOR
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define vecrestoresubvector_ vecrestoresubvector
#endif
PETSC_EXTERN void vecrestoresubvector_(Vec *X, IS *is, Vec *Y, PetscErrorCode *ierr)
{
  PetscBool null_Y = !*(void**) Y ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(Y);
  *ierr = VecRestoreSubVector(*X, *is, Y);
  if (*ierr) return;
  if (! null_Y && !*(void**) Y) *(void **) Y = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscvec.h>
#include <petscvec.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define veccreatelocalvector_ VECCREATELOCALVECTOR
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define veccreatelocalvector_ veccreatelocalvector
#endif
PETSC_EXTERN void veccreatelocalvector_(Vec *v, Vec *w, PetscErrorCode *ierr)
{
  PetscBool null_w = !*(void**) w ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(w);
  *ierr = VecCreateLocalVector(*v, w);
  if (*ierr) return;
  if (! null_w && !*(void**) w) *(void **) w = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscvec.h>
#include <petscvec.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define vecgetlocalvectorread_ VECGETLOCALVECTORREAD
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define vecgetlocalvectorread_ vecgetlocalvectorread
#endif
PETSC_EXTERN void vecgetlocalvectorread_(Vec *v, Vec *w, PetscErrorCode *ierr)
{
  *ierr = VecGetLocalVectorRead(*v, *w);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscvec.h>
#include <petscvec.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define vecrestorelocalvectorread_ VECRESTORELOCALVECTORREAD
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define vecrestorelocalvectorread_ vecrestorelocalvectorread
#endif
PETSC_EXTERN void vecrestorelocalvectorread_(Vec *v, Vec *w, PetscErrorCode *ierr)
{
  *ierr = VecRestoreLocalVectorRead(*v, *w);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscvec.h>
#include <petscvec.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define vecgetlocalvector_ VECGETLOCALVECTOR
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define vecgetlocalvector_ vecgetlocalvector
#endif
PETSC_EXTERN void vecgetlocalvector_(Vec *v, Vec *w, PetscErrorCode *ierr)
{
  *ierr = VecGetLocalVector(*v, *w);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscvec.h>
#include <petscvec.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define vecrestorelocalvector_ VECRESTORELOCALVECTOR
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define vecrestorelocalvector_ vecrestorelocalvector
#endif
PETSC_EXTERN void vecrestorelocalvector_(Vec *v, Vec *w, PetscErrorCode *ierr)
{
  *ierr = VecRestoreLocalVector(*v, *w);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscvec.h>
#include <petscvec.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define vecplacearray_ VECPLACEARRAY
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define vecplacearray_ vecplacearray
#endif
PETSC_EXTERN void vecplacearray_(Vec *vec, const PetscScalar array[], PetscErrorCode *ierr)
{
  CHKFORTRANNULLSCALAR(array);
  *ierr = VecPlaceArray(*vec, array);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscvec.h>
#include <petscvec.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define vecreplacearray_ VECREPLACEARRAY
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define vecreplacearray_ vecreplacearray
#endif
PETSC_EXTERN void vecreplacearray_(Vec *vec, const PetscScalar array[], PetscErrorCode *ierr)
{
  CHKFORTRANNULLSCALAR(array);
  *ierr = VecReplaceArray(*vec, array);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscvec.h>
#include <petscvec.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define veclockget_ VECLOCKGET
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define veclockget_ veclockget
#endif
PETSC_EXTERN void veclockget_(Vec *x, PetscInt *state, PetscErrorCode *ierr)
{
  CHKFORTRANNULLINTEGER(state);
  *ierr = VecLockGet(*x, state);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscvec.h>
#include <petscvec.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define veclockgetlocation_ VECLOCKGETLOCATION
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define veclockgetlocation_ veclockgetlocation
#endif
PETSC_EXTERN void veclockgetlocation_(Vec *x, char file[], char func[], int *line, PetscErrorCode *ierr, PETSC_FORTRAN_CHARLEN_T l_file, PETSC_FORTRAN_CHARLEN_T l_func)
{
  char* c_file = PETSC_NULLPTR;
  char* c_func = PETSC_NULLPTR;
  *ierr = VecLockGetLocation(*x, (const char **)&c_file, (const char **)&c_func, line);
  if (*ierr) return;
  *ierr = PetscStrncpy((char *)file, c_file, l_file);
  if (*ierr) return;
  FIXRETURNCHAR(PETSC_TRUE, file, l_file);
  *ierr = PetscStrncpy((char *)func, c_func, l_func);
  if (*ierr) return;
  FIXRETURNCHAR(PETSC_TRUE, func, l_func);
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscvec.h>
#include <petscvec.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define veclockreadpush_ VECLOCKREADPUSH
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define veclockreadpush_ veclockreadpush
#endif
PETSC_EXTERN void veclockreadpush_(Vec *x, PetscErrorCode *ierr)
{
  *ierr = VecLockReadPush(*x);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscvec.h>
#include <petscvec.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define veclockreadpop_ VECLOCKREADPOP
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define veclockreadpop_ veclockreadpop
#endif
PETSC_EXTERN void veclockreadpop_(Vec *x, PetscErrorCode *ierr)
{
  *ierr = VecLockReadPop(*x);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscvec.h>
#include <petscvec.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define veclockwriteset_ VECLOCKWRITESET
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define veclockwriteset_ veclockwriteset
#endif
PETSC_EXTERN void veclockwriteset_(Vec *x, PetscBool *flg, PetscErrorCode *ierr)
{
  *ierr = VecLockWriteSet(*x, *flg ? PETSC_TRUE : PETSC_FALSE);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscvec.h>
#include <petscvec.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define vecscale_ VECSCALE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define vecscale_ vecscale
#endif
PETSC_EXTERN void vecscale_(Vec *x, PetscScalar *alpha, PetscErrorCode *ierr)
{
  *ierr = VecScale(*x, *alpha);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscvec.h>
#include <petscvec.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define vecset_ VECSET
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define vecset_ vecset
#endif
PETSC_EXTERN void vecset_(Vec *x, PetscScalar *alpha, PetscErrorCode *ierr)
{
  *ierr = VecSet(*x, *alpha);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscvec.h>
#include <petscvec.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define vecsetvalues_ VECSETVALUES
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define vecsetvalues_ vecsetvalues
#endif
PETSC_EXTERN void vecsetvalues_(Vec *x, PetscInt *ni, const PetscInt ix[], const PetscScalar y[], InsertMode *iora, PetscErrorCode *ierr)
{
  CHKFORTRANNULLINTEGER(ix);
  CHKFORTRANNULLSCALAR(y);
  *ierr = VecSetValues(*x, *ni, ix, y, *iora);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscvec.h>
#include <petscvec.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define vecsetvaluesblocked_ VECSETVALUESBLOCKED
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define vecsetvaluesblocked_ vecsetvaluesblocked
#endif
PETSC_EXTERN void vecsetvaluesblocked_(Vec *x, PetscInt *ni, const PetscInt ix[], const PetscScalar y[], InsertMode *iora, PetscErrorCode *ierr)
{
  CHKFORTRANNULLINTEGER(ix);
  CHKFORTRANNULLSCALAR(y);
  *ierr = VecSetValuesBlocked(*x, *ni, ix, y, *iora);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscvec.h>
#include <petscvec.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define vecsetvalueslocal_ VECSETVALUESLOCAL
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define vecsetvalueslocal_ vecsetvalueslocal
#endif
PETSC_EXTERN void vecsetvalueslocal_(Vec *x, PetscInt *ni, const PetscInt ix[], const PetscScalar y[], InsertMode *iora, PetscErrorCode *ierr)
{
  CHKFORTRANNULLINTEGER(ix);
  CHKFORTRANNULLSCALAR(y);
  *ierr = VecSetValuesLocal(*x, *ni, ix, y, *iora);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscvec.h>
#include <petscvec.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define vecsetvaluesblockedlocal_ VECSETVALUESBLOCKEDLOCAL
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define vecsetvaluesblockedlocal_ vecsetvaluesblockedlocal
#endif
PETSC_EXTERN void vecsetvaluesblockedlocal_(Vec *x, PetscInt *ni, const PetscInt ix[], const PetscScalar y[], InsertMode *iora, PetscErrorCode *ierr)
{
  CHKFORTRANNULLINTEGER(ix);
  CHKFORTRANNULLSCALAR(y);
  *ierr = VecSetValuesBlockedLocal(*x, *ni, ix, y, *iora);
  if (*ierr) return;
}
