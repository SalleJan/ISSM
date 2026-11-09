#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscksp.h>
#include <petscksp.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define kspfgmresmodifypcnochange_ KSPFGMRESMODIFYPCNOCHANGE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define kspfgmresmodifypcnochange_ kspfgmresmodifypcnochange
#endif
PETSC_EXTERN void kspfgmresmodifypcnochange_(KSP *ksp, PetscInt *total_its, PetscInt *loc_its, PetscReal *res_norm, PetscCtx ctx, PetscErrorCode *ierr)
{
  *ierr = KSPFGMRESModifyPCNoChange(*ksp, *total_its, *loc_its, *res_norm, ctx);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscksp.h>
#include <petscksp.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define kspfgmresmodifypcksp_ KSPFGMRESMODIFYPCKSP
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define kspfgmresmodifypcksp_ kspfgmresmodifypcksp
#endif
PETSC_EXTERN void kspfgmresmodifypcksp_(KSP *ksp, PetscInt *total_its, PetscInt *loc_its, PetscReal *res_norm, PetscCtx ctx, PetscErrorCode *ierr)
{
  *ierr = KSPFGMRESModifyPCKSP(*ksp, *total_its, *loc_its, *res_norm, ctx);
  if (*ierr) return;
}
