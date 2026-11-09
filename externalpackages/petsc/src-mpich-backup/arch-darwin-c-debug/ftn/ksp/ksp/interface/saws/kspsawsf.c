#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscksp.h>
#include <petscksp.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define kspmonitorsawsdestroycptr_ KSPMONITORSAWSDESTROYCPTR
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define kspmonitorsawsdestroycptr_ kspmonitorsawsdestroycptr
#endif
PETSC_EXTERN void kspmonitorsawsdestroycptr_(PetscCtxRt ctx, PetscErrorCode *ierr)
{
  *ierr = KSPMonitorSAWsDestroy(ctx);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscksp.h>
#include <petscksp.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define kspmonitorsaws_ KSPMONITORSAWS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define kspmonitorsaws_ kspmonitorsaws
#endif
PETSC_EXTERN void kspmonitorsaws_(KSP *ksp, PetscInt *n, PetscReal *rnorm, PetscCtx ctx, PetscErrorCode *ierr)
{
  *ierr = KSPMonitorSAWs(*ksp, *n, *rnorm, ctx);
  if (*ierr) return;
}
