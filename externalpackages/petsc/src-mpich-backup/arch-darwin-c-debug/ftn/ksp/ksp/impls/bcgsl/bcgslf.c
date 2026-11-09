#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscksp.h>
#include <petscksp.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define kspbcgslsetxres_ KSPBCGSLSETXRES
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define kspbcgslsetxres_ kspbcgslsetxres
#endif
PETSC_EXTERN void kspbcgslsetxres_(KSP *ksp, PetscReal *delta, PetscErrorCode *ierr)
{
  *ierr = KSPBCGSLSetXRes(*ksp, *delta);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscksp.h>
#include <petscksp.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define kspbcgslsetusepseudoinverse_ KSPBCGSLSETUSEPSEUDOINVERSE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define kspbcgslsetusepseudoinverse_ kspbcgslsetusepseudoinverse
#endif
PETSC_EXTERN void kspbcgslsetusepseudoinverse_(KSP *ksp, PetscBool *use_pinv, PetscErrorCode *ierr)
{
  *ierr = KSPBCGSLSetUsePseudoinverse(*ksp, *use_pinv ? PETSC_TRUE : PETSC_FALSE);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscksp.h>
#include <petscksp.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define kspbcgslsetpol_ KSPBCGSLSETPOL
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define kspbcgslsetpol_ kspbcgslsetpol
#endif
PETSC_EXTERN void kspbcgslsetpol_(KSP *ksp, PetscBool *uMROR, PetscErrorCode *ierr)
{
  *ierr = KSPBCGSLSetPol(*ksp, *uMROR ? PETSC_TRUE : PETSC_FALSE);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscksp.h>
#include <petscksp.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define kspbcgslsetell_ KSPBCGSLSETELL
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define kspbcgslsetell_ kspbcgslsetell
#endif
PETSC_EXTERN void kspbcgslsetell_(KSP *ksp, PetscInt *ell, PetscErrorCode *ierr)
{
  *ierr = KSPBCGSLSetEll(*ksp, *ell);
  if (*ierr) return;
}
