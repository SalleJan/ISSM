#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscksp.h>
#include <petscksp.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define kspcgsettype_ KSPCGSETTYPE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define kspcgsettype_ kspcgsettype
#endif
PETSC_EXTERN void kspcgsettype_(KSP *ksp, KSPCGType *type, PetscErrorCode *ierr)
{
  *ierr = KSPCGSetType(*ksp, *type);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscksp.h>
#include <petscksp.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define kspcgusesinglereduction_ KSPCGUSESINGLEREDUCTION
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define kspcgusesinglereduction_ kspcgusesinglereduction
#endif
PETSC_EXTERN void kspcgusesinglereduction_(KSP *ksp, PetscBool *flg, PetscErrorCode *ierr)
{
  *ierr = KSPCGUseSingleReduction(*ksp, *flg ? PETSC_TRUE : PETSC_FALSE);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscksp.h>
#include <petscksp.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define kspcgsetradius_ KSPCGSETRADIUS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define kspcgsetradius_ kspcgsetradius
#endif
PETSC_EXTERN void kspcgsetradius_(KSP *ksp, PetscReal *radius, PetscErrorCode *ierr)
{
  *ierr = KSPCGSetRadius(*ksp, *radius);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscksp.h>
#include <petscksp.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define kspcgsetobjectivetarget_ KSPCGSETOBJECTIVETARGET
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define kspcgsetobjectivetarget_ kspcgsetobjectivetarget
#endif
PETSC_EXTERN void kspcgsetobjectivetarget_(KSP *ksp, PetscReal *obj, PetscErrorCode *ierr)
{
  *ierr = KSPCGSetObjectiveTarget(*ksp, *obj);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscksp.h>
#include <petscksp.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define kspcggetnormd_ KSPCGGETNORMD
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define kspcggetnormd_ kspcggetnormd
#endif
PETSC_EXTERN void kspcggetnormd_(KSP *ksp, PetscReal *norm_d, PetscErrorCode *ierr)
{
  CHKFORTRANNULLREAL(norm_d);
  *ierr = KSPCGGetNormD(*ksp, norm_d);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscksp.h>
#include <petscksp.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define kspcggetobjfcn_ KSPCGGETOBJFCN
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define kspcggetobjfcn_ kspcggetobjfcn
#endif
PETSC_EXTERN void kspcggetobjfcn_(KSP *ksp, PetscReal *o_fcn, PetscErrorCode *ierr)
{
  CHKFORTRANNULLREAL(o_fcn);
  *ierr = KSPCGGetObjFcn(*ksp, o_fcn);
  if (*ierr) return;
}
