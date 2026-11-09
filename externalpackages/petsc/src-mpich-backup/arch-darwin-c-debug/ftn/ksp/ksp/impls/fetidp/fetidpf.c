#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscksp.h>
#include <petscksp.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define kspfetidpsetpressureoperator_ KSPFETIDPSETPRESSUREOPERATOR
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define kspfetidpsetpressureoperator_ kspfetidpsetpressureoperator
#endif
PETSC_EXTERN void kspfetidpsetpressureoperator_(KSP *ksp, Mat *P, PetscErrorCode *ierr)
{
  *ierr = KSPFETIDPSetPressureOperator(*ksp, *P);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscksp.h>
#include <petscksp.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define kspfetidpgetinnerksp_ KSPFETIDPGETINNERKSP
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define kspfetidpgetinnerksp_ kspfetidpgetinnerksp
#endif
PETSC_EXTERN void kspfetidpgetinnerksp_(KSP *ksp, KSP *innerksp, PetscErrorCode *ierr)
{
  PetscBool null_innerksp = !*(void**) innerksp ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(innerksp);
  *ierr = KSPFETIDPGetInnerKSP(*ksp, innerksp);
  if (*ierr) return;
  if (! null_innerksp && !*(void**) innerksp) *(void **) innerksp = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscksp.h>
#include <petscksp.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define kspfetidpgetinnerbddc_ KSPFETIDPGETINNERBDDC
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define kspfetidpgetinnerbddc_ kspfetidpgetinnerbddc
#endif
PETSC_EXTERN void kspfetidpgetinnerbddc_(KSP *ksp, PC *pc, PetscErrorCode *ierr)
{
  PetscBool null_pc = !*(void**) pc ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(pc);
  *ierr = KSPFETIDPGetInnerBDDC(*ksp, pc);
  if (*ierr) return;
  if (! null_pc && !*(void**) pc) *(void **) pc = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscksp.h>
#include <petscksp.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define kspfetidpsetinnerbddc_ KSPFETIDPSETINNERBDDC
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define kspfetidpsetinnerbddc_ kspfetidpsetinnerbddc
#endif
PETSC_EXTERN void kspfetidpsetinnerbddc_(KSP *ksp, PC *pc, PetscErrorCode *ierr)
{
  *ierr = KSPFETIDPSetInnerBDDC(*ksp, *pc);
  if (*ierr) return;
}
