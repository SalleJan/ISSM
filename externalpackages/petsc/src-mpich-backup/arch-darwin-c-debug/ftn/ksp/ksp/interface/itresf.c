#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscksp.h>
#include <petscksp.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define kspinitialresidual_ KSPINITIALRESIDUAL
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define kspinitialresidual_ kspinitialresidual
#endif
PETSC_EXTERN void kspinitialresidual_(KSP *ksp, Vec *vsoln, Vec *vt1, Vec *vt2, Vec *vres, Vec *vb, PetscErrorCode *ierr)
{
  *ierr = KSPInitialResidual(*ksp, *vsoln, *vt1, *vt2, *vres, *vb);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscksp.h>
#include <petscksp.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define kspunwindpreconditioner_ KSPUNWINDPRECONDITIONER
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define kspunwindpreconditioner_ kspunwindpreconditioner
#endif
PETSC_EXTERN void kspunwindpreconditioner_(KSP *ksp, Vec *vsoln, Vec *vt1, PetscErrorCode *ierr)
{
  *ierr = KSPUnwindPreconditioner(*ksp, *vsoln, *vt1);
  if (*ierr) return;
}
