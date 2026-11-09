#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscksp.h>
#include <petscpc.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define pcdeflationsetinitonly_ PCDEFLATIONSETINITONLY
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define pcdeflationsetinitonly_ pcdeflationsetinitonly
#endif
PETSC_EXTERN void pcdeflationsetinitonly_(PC *pc, PetscBool *flg, PetscErrorCode *ierr)
{
  *ierr = PCDeflationSetInitOnly(*pc, *flg ? PETSC_TRUE : PETSC_FALSE);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscksp.h>
#include <petscpc.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define pcdeflationsetlevels_ PCDEFLATIONSETLEVELS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define pcdeflationsetlevels_ pcdeflationsetlevels
#endif
PETSC_EXTERN void pcdeflationsetlevels_(PC *pc, PetscInt *max, PetscErrorCode *ierr)
{
  *ierr = PCDeflationSetLevels(*pc, *max);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscksp.h>
#include <petscpc.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define pcdeflationsetreductionfactor_ PCDEFLATIONSETREDUCTIONFACTOR
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define pcdeflationsetreductionfactor_ pcdeflationsetreductionfactor
#endif
PETSC_EXTERN void pcdeflationsetreductionfactor_(PC *pc, PetscInt *red, PetscErrorCode *ierr)
{
  *ierr = PCDeflationSetReductionFactor(*pc, *red);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscksp.h>
#include <petscpc.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define pcdeflationsetcorrectionfactor_ PCDEFLATIONSETCORRECTIONFACTOR
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define pcdeflationsetcorrectionfactor_ pcdeflationsetcorrectionfactor
#endif
PETSC_EXTERN void pcdeflationsetcorrectionfactor_(PC *pc, PetscScalar *fact, PetscErrorCode *ierr)
{
  *ierr = PCDeflationSetCorrectionFactor(*pc, *fact);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscksp.h>
#include <petscpc.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define pcdeflationsetspacetocompute_ PCDEFLATIONSETSPACETOCOMPUTE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define pcdeflationsetspacetocompute_ pcdeflationsetspacetocompute
#endif
PETSC_EXTERN void pcdeflationsetspacetocompute_(PC *pc, PCDeflationSpaceType *type, PetscInt *size, PetscErrorCode *ierr)
{
  *ierr = PCDeflationSetSpaceToCompute(*pc, *type, *size);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscksp.h>
#include <petscpc.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define pcdeflationsetspace_ PCDEFLATIONSETSPACE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define pcdeflationsetspace_ pcdeflationsetspace
#endif
PETSC_EXTERN void pcdeflationsetspace_(PC *pc, Mat *W, PetscBool *transpose, PetscErrorCode *ierr)
{
  *ierr = PCDeflationSetSpace(*pc, *W, *transpose ? PETSC_TRUE : PETSC_FALSE);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscksp.h>
#include <petscpc.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define pcdeflationsetprojectionnullspacemat_ PCDEFLATIONSETPROJECTIONNULLSPACEMAT
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define pcdeflationsetprojectionnullspacemat_ pcdeflationsetprojectionnullspacemat
#endif
PETSC_EXTERN void pcdeflationsetprojectionnullspacemat_(PC *pc, Mat *mat, PetscErrorCode *ierr)
{
  *ierr = PCDeflationSetProjectionNullSpaceMat(*pc, *mat);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscksp.h>
#include <petscpc.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define pcdeflationsetcoarsemat_ PCDEFLATIONSETCOARSEMAT
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define pcdeflationsetcoarsemat_ pcdeflationsetcoarsemat
#endif
PETSC_EXTERN void pcdeflationsetcoarsemat_(PC *pc, Mat *mat, PetscErrorCode *ierr)
{
  *ierr = PCDeflationSetCoarseMat(*pc, *mat);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscksp.h>
#include <petscksp.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define pcdeflationgetcoarseksp_ PCDEFLATIONGETCOARSEKSP
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define pcdeflationgetcoarseksp_ pcdeflationgetcoarseksp
#endif
PETSC_EXTERN void pcdeflationgetcoarseksp_(PC *pc, KSP *ksp, PetscErrorCode *ierr)
{
  PetscBool null_ksp = !*(void**) ksp ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(ksp);
  *ierr = PCDeflationGetCoarseKSP(*pc, ksp);
  if (*ierr) return;
  if (! null_ksp && !*(void**) ksp) *(void **) ksp = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscksp.h>
#include <petscpc.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define pcdeflationgetpc_ PCDEFLATIONGETPC
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define pcdeflationgetpc_ pcdeflationgetpc
#endif
PETSC_EXTERN void pcdeflationgetpc_(PC *pc, PC *apc, PetscErrorCode *ierr)
{
  PetscBool null_apc = !*(void**) apc ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(apc);
  *ierr = PCDeflationGetPC(*pc, apc);
  if (*ierr) return;
  if (! null_apc && !*(void**) apc) *(void **) apc = (void *)-2;
}
