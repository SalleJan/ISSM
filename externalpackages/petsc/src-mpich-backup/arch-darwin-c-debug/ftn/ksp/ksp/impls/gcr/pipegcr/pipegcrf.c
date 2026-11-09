#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscksp.h>
#include <petscksp.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define ksppipegcrsetunrollw_ KSPPIPEGCRSETUNROLLW
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define ksppipegcrsetunrollw_ ksppipegcrsetunrollw
#endif
PETSC_EXTERN void ksppipegcrsetunrollw_(KSP *ksp, PetscBool *unroll_w, PetscErrorCode *ierr)
{
  *ierr = KSPPIPEGCRSetUnrollW(*ksp, *unroll_w ? PETSC_TRUE : PETSC_FALSE);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscksp.h>
#include <petscksp.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define ksppipegcrgetunrollw_ KSPPIPEGCRGETUNROLLW
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define ksppipegcrgetunrollw_ ksppipegcrgetunrollw
#endif
PETSC_EXTERN void ksppipegcrgetunrollw_(KSP *ksp, PetscBool *unroll_w, PetscErrorCode *ierr)
{
  CHKFORTRANNULLBOOL(unroll_w);
  *ierr = KSPPIPEGCRGetUnrollW(*ksp, unroll_w);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscksp.h>
#include <petscksp.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define ksppipegcrsetmmax_ KSPPIPEGCRSETMMAX
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define ksppipegcrsetmmax_ ksppipegcrsetmmax
#endif
PETSC_EXTERN void ksppipegcrsetmmax_(KSP *ksp, PetscInt *mmax, PetscErrorCode *ierr)
{
  *ierr = KSPPIPEGCRSetMmax(*ksp, *mmax);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscksp.h>
#include <petscksp.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define ksppipegcrgetmmax_ KSPPIPEGCRGETMMAX
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define ksppipegcrgetmmax_ ksppipegcrgetmmax
#endif
PETSC_EXTERN void ksppipegcrgetmmax_(KSP *ksp, PetscInt *mmax, PetscErrorCode *ierr)
{
  CHKFORTRANNULLINTEGER(mmax);
  *ierr = KSPPIPEGCRGetMmax(*ksp, mmax);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscksp.h>
#include <petscksp.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define ksppipegcrsetnprealloc_ KSPPIPEGCRSETNPREALLOC
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define ksppipegcrsetnprealloc_ ksppipegcrsetnprealloc
#endif
PETSC_EXTERN void ksppipegcrsetnprealloc_(KSP *ksp, PetscInt *nprealloc, PetscErrorCode *ierr)
{
  *ierr = KSPPIPEGCRSetNprealloc(*ksp, *nprealloc);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscksp.h>
#include <petscksp.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define ksppipegcrgetnprealloc_ KSPPIPEGCRGETNPREALLOC
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define ksppipegcrgetnprealloc_ ksppipegcrgetnprealloc
#endif
PETSC_EXTERN void ksppipegcrgetnprealloc_(KSP *ksp, PetscInt *nprealloc, PetscErrorCode *ierr)
{
  CHKFORTRANNULLINTEGER(nprealloc);
  *ierr = KSPPIPEGCRGetNprealloc(*ksp, nprealloc);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscksp.h>
#include <petscksp.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define ksppipegcrsettruncationtype_ KSPPIPEGCRSETTRUNCATIONTYPE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define ksppipegcrsettruncationtype_ ksppipegcrsettruncationtype
#endif
PETSC_EXTERN void ksppipegcrsettruncationtype_(KSP *ksp, KSPFCDTruncationType *truncstrat, PetscErrorCode *ierr)
{
  *ierr = KSPPIPEGCRSetTruncationType(*ksp, *truncstrat);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscksp.h>
#include <petscksp.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define ksppipegcrgettruncationtype_ KSPPIPEGCRGETTRUNCATIONTYPE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define ksppipegcrgettruncationtype_ ksppipegcrgettruncationtype
#endif
PETSC_EXTERN void ksppipegcrgettruncationtype_(KSP *ksp, KSPFCDTruncationType *truncstrat, PetscErrorCode *ierr)
{
  *ierr = KSPPIPEGCRGetTruncationType(*ksp, truncstrat);
  if (*ierr) return;
}
