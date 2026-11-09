#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscksp.h>
#include <petscpc.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define pcmgresidualdefault_ PCMGRESIDUALDEFAULT
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define pcmgresidualdefault_ pcmgresidualdefault
#endif
PETSC_EXTERN void pcmgresidualdefault_(Mat *mat, Vec *b, Vec *x, Vec *r, PetscErrorCode *ierr)
{
  *ierr = PCMGResidualDefault(*mat, *b, *x, *r);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscksp.h>
#include <petscpc.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define pcmgresidualtransposedefault_ PCMGRESIDUALTRANSPOSEDEFAULT
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define pcmgresidualtransposedefault_ pcmgresidualtransposedefault
#endif
PETSC_EXTERN void pcmgresidualtransposedefault_(Mat *mat, Vec *b, Vec *x, Vec *r, PetscErrorCode *ierr)
{
  *ierr = PCMGResidualTransposeDefault(*mat, *b, *x, *r);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscksp.h>
#include <petscpc.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define pcmgmatresidualdefault_ PCMGMATRESIDUALDEFAULT
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define pcmgmatresidualdefault_ pcmgmatresidualdefault
#endif
PETSC_EXTERN void pcmgmatresidualdefault_(Mat *mat, Mat *b, Mat *x, Mat *r, PetscErrorCode *ierr)
{
  *ierr = PCMGMatResidualDefault(*mat, *b, *x, *r);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscksp.h>
#include <petscpc.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define pcmgmatresidualtransposedefault_ PCMGMATRESIDUALTRANSPOSEDEFAULT
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define pcmgmatresidualtransposedefault_ pcmgmatresidualtransposedefault
#endif
PETSC_EXTERN void pcmgmatresidualtransposedefault_(Mat *mat, Mat *b, Mat *x, Mat *r, PetscErrorCode *ierr)
{
  *ierr = PCMGMatResidualTransposeDefault(*mat, *b, *x, *r);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscksp.h>
#include <petscksp.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define pcmggetcoarsesolve_ PCMGGETCOARSESOLVE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define pcmggetcoarsesolve_ pcmggetcoarsesolve
#endif
PETSC_EXTERN void pcmggetcoarsesolve_(PC *pc, KSP *ksp, PetscErrorCode *ierr)
{
  PetscBool null_ksp = !*(void**) ksp ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(ksp);
  *ierr = PCMGGetCoarseSolve(*pc, ksp);
  if (*ierr) return;
  if (! null_ksp && !*(void**) ksp) *(void **) ksp = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscksp.h>
#include <petscpc.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define pcmgsetinterpolation_ PCMGSETINTERPOLATION
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define pcmgsetinterpolation_ pcmgsetinterpolation
#endif
PETSC_EXTERN void pcmgsetinterpolation_(PC *pc, PetscInt *l, Mat *mat, PetscErrorCode *ierr)
{
  *ierr = PCMGSetInterpolation(*pc, *l, *mat);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscksp.h>
#include <petscpc.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define pcmgsetoperators_ PCMGSETOPERATORS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define pcmgsetoperators_ pcmgsetoperators
#endif
PETSC_EXTERN void pcmgsetoperators_(PC *pc, PetscInt *l, Mat *Amat, Mat *Pmat, PetscErrorCode *ierr)
{
  *ierr = PCMGSetOperators(*pc, *l, *Amat, *Pmat);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscksp.h>
#include <petscpc.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define pcmggetinterpolation_ PCMGGETINTERPOLATION
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define pcmggetinterpolation_ pcmggetinterpolation
#endif
PETSC_EXTERN void pcmggetinterpolation_(PC *pc, PetscInt *l, Mat *mat, PetscErrorCode *ierr)
{
  PetscBool null_mat = !*(void**) mat ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(mat);
  *ierr = PCMGGetInterpolation(*pc, *l, mat);
  if (*ierr) return;
  if (! null_mat && !*(void**) mat) *(void **) mat = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscksp.h>
#include <petscpc.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define pcmgsetrestriction_ PCMGSETRESTRICTION
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define pcmgsetrestriction_ pcmgsetrestriction
#endif
PETSC_EXTERN void pcmgsetrestriction_(PC *pc, PetscInt *l, Mat *mat, PetscErrorCode *ierr)
{
  *ierr = PCMGSetRestriction(*pc, *l, *mat);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscksp.h>
#include <petscpc.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define pcmggetrestriction_ PCMGGETRESTRICTION
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define pcmggetrestriction_ pcmggetrestriction
#endif
PETSC_EXTERN void pcmggetrestriction_(PC *pc, PetscInt *l, Mat *mat, PetscErrorCode *ierr)
{
  PetscBool null_mat = !*(void**) mat ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(mat);
  *ierr = PCMGGetRestriction(*pc, *l, mat);
  if (*ierr) return;
  if (! null_mat && !*(void**) mat) *(void **) mat = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscksp.h>
#include <petscpc.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define pcmgsetrscale_ PCMGSETRSCALE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define pcmgsetrscale_ pcmgsetrscale
#endif
PETSC_EXTERN void pcmgsetrscale_(PC *pc, PetscInt *l, Vec *rscale, PetscErrorCode *ierr)
{
  *ierr = PCMGSetRScale(*pc, *l, *rscale);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscksp.h>
#include <petscpc.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define pcmggetrscale_ PCMGGETRSCALE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define pcmggetrscale_ pcmggetrscale
#endif
PETSC_EXTERN void pcmggetrscale_(PC *pc, PetscInt *l, Vec *rscale, PetscErrorCode *ierr)
{
  PetscBool null_rscale = !*(void**) rscale ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(rscale);
  *ierr = PCMGGetRScale(*pc, *l, rscale);
  if (*ierr) return;
  if (! null_rscale && !*(void**) rscale) *(void **) rscale = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscksp.h>
#include <petscpc.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define pcmgsetinjection_ PCMGSETINJECTION
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define pcmgsetinjection_ pcmgsetinjection
#endif
PETSC_EXTERN void pcmgsetinjection_(PC *pc, PetscInt *l, Mat *mat, PetscErrorCode *ierr)
{
  *ierr = PCMGSetInjection(*pc, *l, *mat);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscksp.h>
#include <petscpc.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define pcmggetinjection_ PCMGGETINJECTION
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define pcmggetinjection_ pcmggetinjection
#endif
PETSC_EXTERN void pcmggetinjection_(PC *pc, PetscInt *l, Mat *mat, PetscErrorCode *ierr)
{
  PetscBool null_mat = !*(void**) mat ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(mat);
  *ierr = PCMGGetInjection(*pc, *l, mat);
  if (*ierr) return;
  if (! null_mat && !*(void**) mat) *(void **) mat = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscksp.h>
#include <petscksp.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define pcmggetsmoother_ PCMGGETSMOOTHER
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define pcmggetsmoother_ pcmggetsmoother
#endif
PETSC_EXTERN void pcmggetsmoother_(PC *pc, PetscInt *l, KSP *ksp, PetscErrorCode *ierr)
{
  PetscBool null_ksp = !*(void**) ksp ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(ksp);
  *ierr = PCMGGetSmoother(*pc, *l, ksp);
  if (*ierr) return;
  if (! null_ksp && !*(void**) ksp) *(void **) ksp = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscksp.h>
#include <petscksp.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define pcmggetsmootherup_ PCMGGETSMOOTHERUP
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define pcmggetsmootherup_ pcmggetsmootherup
#endif
PETSC_EXTERN void pcmggetsmootherup_(PC *pc, PetscInt *l, KSP *ksp, PetscErrorCode *ierr)
{
  PetscBool null_ksp = !*(void**) ksp ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(ksp);
  *ierr = PCMGGetSmootherUp(*pc, *l, ksp);
  if (*ierr) return;
  if (! null_ksp && !*(void**) ksp) *(void **) ksp = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscksp.h>
#include <petscksp.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define pcmggetsmootherdown_ PCMGGETSMOOTHERDOWN
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define pcmggetsmootherdown_ pcmggetsmootherdown
#endif
PETSC_EXTERN void pcmggetsmootherdown_(PC *pc, PetscInt *l, KSP *ksp, PetscErrorCode *ierr)
{
  PetscBool null_ksp = !*(void**) ksp ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(ksp);
  *ierr = PCMGGetSmootherDown(*pc, *l, ksp);
  if (*ierr) return;
  if (! null_ksp && !*(void**) ksp) *(void **) ksp = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscksp.h>
#include <petscpc.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define pcmgsetcycletypeonlevel_ PCMGSETCYCLETYPEONLEVEL
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define pcmgsetcycletypeonlevel_ pcmgsetcycletypeonlevel
#endif
PETSC_EXTERN void pcmgsetcycletypeonlevel_(PC *pc, PetscInt *l, PCMGCycleType *c, PetscErrorCode *ierr)
{
  *ierr = PCMGSetCycleTypeOnLevel(*pc, *l, *c);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscksp.h>
#include <petscpc.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define pcmgsetrhs_ PCMGSETRHS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define pcmgsetrhs_ pcmgsetrhs
#endif
PETSC_EXTERN void pcmgsetrhs_(PC *pc, PetscInt *l, Vec *c, PetscErrorCode *ierr)
{
  *ierr = PCMGSetRhs(*pc, *l, *c);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscksp.h>
#include <petscpc.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define pcmgsetx_ PCMGSETX
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define pcmgsetx_ pcmgsetx
#endif
PETSC_EXTERN void pcmgsetx_(PC *pc, PetscInt *l, Vec *c, PetscErrorCode *ierr)
{
  *ierr = PCMGSetX(*pc, *l, *c);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscksp.h>
#include <petscpc.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define pcmgsetr_ PCMGSETR
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define pcmgsetr_ pcmgsetr
#endif
PETSC_EXTERN void pcmgsetr_(PC *pc, PetscInt *l, Vec *c, PetscErrorCode *ierr)
{
  *ierr = PCMGSetR(*pc, *l, *c);
  if (*ierr) return;
}
