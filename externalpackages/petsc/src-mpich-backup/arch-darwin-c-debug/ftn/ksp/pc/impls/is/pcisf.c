#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscksp.h>
#include <petscpc.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define pcissetusestiffnessscaling_ PCISSETUSESTIFFNESSSCALING
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define pcissetusestiffnessscaling_ pcissetusestiffnessscaling
#endif
PETSC_EXTERN void pcissetusestiffnessscaling_(PC *pc, PetscBool *use, PetscErrorCode *ierr)
{
  *ierr = PCISSetUseStiffnessScaling(*pc, *use ? PETSC_TRUE : PETSC_FALSE);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscksp.h>
#include <petscpc.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define pcissetsubdomaindiagonalscaling_ PCISSETSUBDOMAINDIAGONALSCALING
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define pcissetsubdomaindiagonalscaling_ pcissetsubdomaindiagonalscaling
#endif
PETSC_EXTERN void pcissetsubdomaindiagonalscaling_(PC *pc, Vec *scaling_factors, PetscErrorCode *ierr)
{
  *ierr = PCISSetSubdomainDiagonalScaling(*pc, *scaling_factors);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscksp.h>
#include <petscpc.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define pcissetsubdomainscalingfactor_ PCISSETSUBDOMAINSCALINGFACTOR
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define pcissetsubdomainscalingfactor_ pcissetsubdomainscalingfactor
#endif
PETSC_EXTERN void pcissetsubdomainscalingfactor_(PC *pc, PetscScalar *scal, PetscErrorCode *ierr)
{
  *ierr = PCISSetSubdomainScalingFactor(*pc, *scal);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscksp.h>
#include <petscpc.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define pcissetup_ PCISSETUP
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define pcissetup_ pcissetup
#endif
PETSC_EXTERN void pcissetup_(PC *pc, PetscBool *computematrices, PetscBool *computesolvers, PetscErrorCode *ierr)
{
  *ierr = PCISSetUp(*pc, *computematrices ? PETSC_TRUE : PETSC_FALSE, *computesolvers ? PETSC_TRUE : PETSC_FALSE);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscksp.h>
#include <petscpc.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define pcisreset_ PCISRESET
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define pcisreset_ pcisreset
#endif
PETSC_EXTERN void pcisreset_(PC *pc, PetscErrorCode *ierr)
{
  *ierr = PCISReset(*pc);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscksp.h>
#include <petscpc.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define pcisinitialize_ PCISINITIALIZE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define pcisinitialize_ pcisinitialize
#endif
PETSC_EXTERN void pcisinitialize_(PC *pc, PetscErrorCode *ierr)
{
  *ierr = PCISInitialize(*pc);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscksp.h>
#include <petscpc.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define pcisapplyschur_ PCISAPPLYSCHUR
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define pcisapplyschur_ pcisapplyschur
#endif
PETSC_EXTERN void pcisapplyschur_(PC *pc, Vec *v, Vec *vec1_B, Vec *vec2_B, Vec *vec1_D, Vec *vec2_D, PetscErrorCode *ierr)
{
  *ierr = PCISApplySchur(*pc, *v, *vec1_B, *vec2_B, *vec1_D, *vec2_D);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscksp.h>
#include <petscpc.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define pcisscatterarrayntovecb_ PCISSCATTERARRAYNTOVECB
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define pcisscatterarrayntovecb_ pcisscatterarrayntovecb
#endif
PETSC_EXTERN void pcisscatterarrayntovecb_(PC *pc, PetscScalar *array_N, Vec *v_B, InsertMode *imode, ScatterMode *smode, PetscErrorCode *ierr)
{
  CHKFORTRANNULLSCALAR(array_N);
  *ierr = PCISScatterArrayNToVecB(*pc, array_N, *v_B, *imode, *smode);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscksp.h>
#include <petscpc.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define pcisapplyinvschur_ PCISAPPLYINVSCHUR
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define pcisapplyinvschur_ pcisapplyinvschur
#endif
PETSC_EXTERN void pcisapplyinvschur_(PC *pc, Vec *b, Vec *x, Vec *vec1_N, Vec *vec2_N, PetscErrorCode *ierr)
{
  *ierr = PCISApplyInvSchur(*pc, *b, *x, *vec1_N, *vec2_N);
  if (*ierr) return;
}
