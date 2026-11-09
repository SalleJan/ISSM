#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petsctao.h>
#include <petsctao.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define taovecgetsubvec_ TAOVECGETSUBVEC
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define taovecgetsubvec_ taovecgetsubvec
#endif
PETSC_EXTERN void taovecgetsubvec_(Vec *vfull, IS *is, TaoSubsetType *reduced_type, PetscReal *maskvalue, Vec *vreduced, PetscErrorCode *ierr)
{
  PetscBool null_vreduced = !*(void**) vreduced ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(vreduced);
  *ierr = TaoVecGetSubVec(*vfull, *is, *reduced_type, *maskvalue, vreduced);
  if (*ierr) return;
  if (! null_vreduced && !*(void**) vreduced) *(void **) vreduced = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petsctao.h>
#include <petsctao.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define taomatgetsubmat_ TAOMATGETSUBMAT
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define taomatgetsubmat_ taomatgetsubmat
#endif
PETSC_EXTERN void taomatgetsubmat_(Mat *M, IS *is, Vec *v1, TaoSubsetType *subset_type, Mat *Msub, PetscErrorCode *ierr)
{
  PetscBool null_Msub = !*(void**) Msub ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(Msub);
  *ierr = TaoMatGetSubMat(*M, *is, *v1, *subset_type, Msub);
  if (*ierr) return;
  if (! null_Msub && !*(void**) Msub) *(void **) Msub = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petsctao.h>
#include <petsctao.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define taoestimateactivebounds_ TAOESTIMATEACTIVEBOUNDS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define taoestimateactivebounds_ taoestimateactivebounds
#endif
PETSC_EXTERN void taoestimateactivebounds_(Vec *X, Vec *XL, Vec *XU, Vec *G, Vec *S, Vec *W, PetscReal *steplen, PetscReal *bound_tol, IS *active_lower, IS *active_upper, IS *active_fixed, IS *active, IS *inactive, PetscErrorCode *ierr)
{
  PetscBool null_active_lower = !*(void**) active_lower ? PETSC_TRUE : PETSC_FALSE;
  PetscBool null_active_upper = !*(void**) active_upper ? PETSC_TRUE : PETSC_FALSE;
  PetscBool null_active_fixed = !*(void**) active_fixed ? PETSC_TRUE : PETSC_FALSE;
  PetscBool null_active = !*(void**) active ? PETSC_TRUE : PETSC_FALSE;
  PetscBool null_inactive = !*(void**) inactive ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLREAL(bound_tol);
  CHKFORTRANNULLOBJECT(active_lower);
  CHKFORTRANNULLOBJECT(active_upper);
  CHKFORTRANNULLOBJECT(active_fixed);
  CHKFORTRANNULLOBJECT(active);
  CHKFORTRANNULLOBJECT(inactive);
  *ierr = TaoEstimateActiveBounds(*X, *XL, *XU, *G, *S, *W, *steplen, bound_tol, active_lower, active_upper, active_fixed, active, inactive);
  if (*ierr) return;
  if (! null_active_lower && !*(void**) active_lower) *(void **) active_lower = (void *)-2;
  if (! null_active_upper && !*(void**) active_upper) *(void **) active_upper = (void *)-2;
  if (! null_active_fixed && !*(void**) active_fixed) *(void **) active_fixed = (void *)-2;
  if (! null_active && !*(void**) active) *(void **) active = (void *)-2;
  if (! null_inactive && !*(void**) inactive) *(void **) inactive = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petsctao.h>
#include <petsctao.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define taoboundstep_ TAOBOUNDSTEP
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define taoboundstep_ taoboundstep
#endif
PETSC_EXTERN void taoboundstep_(Vec *X, Vec *XL, Vec *XU, IS *active_lower, IS *active_upper, IS *active_fixed, PetscReal *scale, Vec *S, PetscErrorCode *ierr)
{
  *ierr = TaoBoundStep(*X, *XL, *XU, *active_lower, *active_upper, *active_fixed, *scale, *S);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petsctao.h>
#include <petsctao.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define taoboundsolution_ TAOBOUNDSOLUTION
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define taoboundsolution_ taoboundsolution
#endif
PETSC_EXTERN void taoboundsolution_(Vec *X, Vec *XL, Vec *XU, PetscReal *bound_tol, PetscInt *nDiff, Vec *Xout, PetscErrorCode *ierr)
{
  CHKFORTRANNULLINTEGER(nDiff);
  *ierr = TaoBoundSolution(*X, *XL, *XU, *bound_tol, nDiff, *Xout);
  if (*ierr) return;
}
