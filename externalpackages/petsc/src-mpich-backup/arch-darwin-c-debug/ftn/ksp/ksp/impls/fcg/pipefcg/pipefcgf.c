#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscksp.h>
#include <petscksp.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define ksppipefcgsetmmax_ KSPPIPEFCGSETMMAX
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define ksppipefcgsetmmax_ ksppipefcgsetmmax
#endif
PETSC_EXTERN void ksppipefcgsetmmax_(KSP *ksp, PetscInt *mmax, PetscErrorCode *ierr)
{
  *ierr = KSPPIPEFCGSetMmax(*ksp, *mmax);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscksp.h>
#include <petscksp.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define ksppipefcggetmmax_ KSPPIPEFCGGETMMAX
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define ksppipefcggetmmax_ ksppipefcggetmmax
#endif
PETSC_EXTERN void ksppipefcggetmmax_(KSP *ksp, PetscInt *mmax, PetscErrorCode *ierr)
{
  CHKFORTRANNULLINTEGER(mmax);
  *ierr = KSPPIPEFCGGetMmax(*ksp, mmax);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscksp.h>
#include <petscksp.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define ksppipefcgsetnprealloc_ KSPPIPEFCGSETNPREALLOC
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define ksppipefcgsetnprealloc_ ksppipefcgsetnprealloc
#endif
PETSC_EXTERN void ksppipefcgsetnprealloc_(KSP *ksp, PetscInt *nprealloc, PetscErrorCode *ierr)
{
  *ierr = KSPPIPEFCGSetNprealloc(*ksp, *nprealloc);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscksp.h>
#include <petscksp.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define ksppipefcggetnprealloc_ KSPPIPEFCGGETNPREALLOC
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define ksppipefcggetnprealloc_ ksppipefcggetnprealloc
#endif
PETSC_EXTERN void ksppipefcggetnprealloc_(KSP *ksp, PetscInt *nprealloc, PetscErrorCode *ierr)
{
  CHKFORTRANNULLINTEGER(nprealloc);
  *ierr = KSPPIPEFCGGetNprealloc(*ksp, nprealloc);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscksp.h>
#include <petscksp.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define ksppipefcgsettruncationtype_ KSPPIPEFCGSETTRUNCATIONTYPE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define ksppipefcgsettruncationtype_ ksppipefcgsettruncationtype
#endif
PETSC_EXTERN void ksppipefcgsettruncationtype_(KSP *ksp, KSPFCDTruncationType *truncstrat, PetscErrorCode *ierr)
{
  *ierr = KSPPIPEFCGSetTruncationType(*ksp, *truncstrat);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscksp.h>
#include <petscksp.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define ksppipefcggettruncationtype_ KSPPIPEFCGGETTRUNCATIONTYPE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define ksppipefcggettruncationtype_ ksppipefcggettruncationtype
#endif
PETSC_EXTERN void ksppipefcggettruncationtype_(KSP *ksp, KSPFCDTruncationType *truncstrat, PetscErrorCode *ierr)
{
  *ierr = KSPPIPEFCGGetTruncationType(*ksp, truncstrat);
  if (*ierr) return;
}
