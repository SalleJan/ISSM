#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscksp.h>
#include <petscksp.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define kspflexiblemodifypcnochange_ KSPFLEXIBLEMODIFYPCNOCHANGE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define kspflexiblemodifypcnochange_ kspflexiblemodifypcnochange
#endif
PETSC_EXTERN void kspflexiblemodifypcnochange_(KSP *ksp, PetscInt *total_its, PetscInt *loc_its, PetscReal *res_norm, PetscCtx ctx, PetscErrorCode *ierr)
{
  *ierr = KSPFlexibleModifyPCNoChange(*ksp, *total_its, *loc_its, *res_norm, ctx);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscksp.h>
#include <petscksp.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define kspflexiblemodifypcksp_ KSPFLEXIBLEMODIFYPCKSP
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define kspflexiblemodifypcksp_ kspflexiblemodifypcksp
#endif
PETSC_EXTERN void kspflexiblemodifypcksp_(KSP *ksp, PetscInt *total_its, PetscInt *loc_its, PetscReal *res_norm, PetscCtx ctx, PetscErrorCode *ierr)
{
  *ierr = KSPFlexibleModifyPCKSP(*ksp, *total_its, *loc_its, *res_norm, ctx);
  if (*ierr) return;
}
