#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscksp.h>
#include <petscksp.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define kspfcgsetmmax_ KSPFCGSETMMAX
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define kspfcgsetmmax_ kspfcgsetmmax
#endif
PETSC_EXTERN void kspfcgsetmmax_(KSP *ksp, PetscInt *mmax, PetscErrorCode *ierr)
{
  *ierr = KSPFCGSetMmax(*ksp, *mmax);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscksp.h>
#include <petscksp.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define kspfcggetmmax_ KSPFCGGETMMAX
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define kspfcggetmmax_ kspfcggetmmax
#endif
PETSC_EXTERN void kspfcggetmmax_(KSP *ksp, PetscInt *mmax, PetscErrorCode *ierr)
{
  CHKFORTRANNULLINTEGER(mmax);
  *ierr = KSPFCGGetMmax(*ksp, mmax);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscksp.h>
#include <petscksp.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define kspfcgsetnprealloc_ KSPFCGSETNPREALLOC
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define kspfcgsetnprealloc_ kspfcgsetnprealloc
#endif
PETSC_EXTERN void kspfcgsetnprealloc_(KSP *ksp, PetscInt *nprealloc, PetscErrorCode *ierr)
{
  *ierr = KSPFCGSetNprealloc(*ksp, *nprealloc);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscksp.h>
#include <petscksp.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define kspfcggetnprealloc_ KSPFCGGETNPREALLOC
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define kspfcggetnprealloc_ kspfcggetnprealloc
#endif
PETSC_EXTERN void kspfcggetnprealloc_(KSP *ksp, PetscInt *nprealloc, PetscErrorCode *ierr)
{
  CHKFORTRANNULLINTEGER(nprealloc);
  *ierr = KSPFCGGetNprealloc(*ksp, nprealloc);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscksp.h>
#include <petscksp.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define kspfcgsettruncationtype_ KSPFCGSETTRUNCATIONTYPE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define kspfcgsettruncationtype_ kspfcgsettruncationtype
#endif
PETSC_EXTERN void kspfcgsettruncationtype_(KSP *ksp, KSPFCDTruncationType *truncstrat, PetscErrorCode *ierr)
{
  *ierr = KSPFCGSetTruncationType(*ksp, *truncstrat);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscksp.h>
#include <petscksp.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define kspfcggettruncationtype_ KSPFCGGETTRUNCATIONTYPE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define kspfcggettruncationtype_ kspfcggettruncationtype
#endif
PETSC_EXTERN void kspfcggettruncationtype_(KSP *ksp, KSPFCDTruncationType *truncstrat, PetscErrorCode *ierr)
{
  *ierr = KSPFCGGetTruncationType(*ksp, truncstrat);
  if (*ierr) return;
}
