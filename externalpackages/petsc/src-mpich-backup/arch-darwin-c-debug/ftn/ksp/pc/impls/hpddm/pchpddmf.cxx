#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscksp.h>
#include <petscpc.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define pchpddmhasneumannmat_ PCHPDDMHASNEUMANNMAT
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define pchpddmhasneumannmat_ pchpddmhasneumannmat
#endif
PETSC_EXTERN void pchpddmhasneumannmat_(PC *pc, PetscBool *has, PetscErrorCode *ierr)
{
  *ierr = PCHPDDMHasNeumannMat(*pc, *has ? PETSC_TRUE : PETSC_FALSE);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscksp.h>
#include <petscpc.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define pchpddmsetrhsmat_ PCHPDDMSETRHSMAT
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define pchpddmsetrhsmat_ pchpddmsetrhsmat
#endif
PETSC_EXTERN void pchpddmsetrhsmat_(PC *pc, Mat *B, PetscErrorCode *ierr)
{
  *ierr = PCHPDDMSetRHSMat(*pc, *B);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscksp.h>
#include <petscpc.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define pchpddmgetcomplexities_ PCHPDDMGETCOMPLEXITIES
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define pchpddmgetcomplexities_ pchpddmgetcomplexities
#endif
PETSC_EXTERN void pchpddmgetcomplexities_(PC *pc, PetscReal *gc, PetscReal *oc, PetscErrorCode *ierr)
{
  CHKFORTRANNULLREAL(gc);
  CHKFORTRANNULLREAL(oc);
  *ierr = PCHPDDMGetComplexities(*pc, gc, oc);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscksp.h>
#include <petscpc.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define pchpddmsetcoarsecorrectiontype_ PCHPDDMSETCOARSECORRECTIONTYPE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define pchpddmsetcoarsecorrectiontype_ pchpddmsetcoarsecorrectiontype
#endif
PETSC_EXTERN void pchpddmsetcoarsecorrectiontype_(PC *pc, PCHPDDMCoarseCorrectionType *type, PetscErrorCode *ierr)
{
  *ierr = PCHPDDMSetCoarseCorrectionType(*pc, *type);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscksp.h>
#include <petscpc.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define pchpddmgetcoarsecorrectiontype_ PCHPDDMGETCOARSECORRECTIONTYPE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define pchpddmgetcoarsecorrectiontype_ pchpddmgetcoarsecorrectiontype
#endif
PETSC_EXTERN void pchpddmgetcoarsecorrectiontype_(PC *pc, PCHPDDMCoarseCorrectionType *type, PetscErrorCode *ierr)
{
  *ierr = PCHPDDMGetCoarseCorrectionType(*pc, type);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscksp.h>
#include <petscpc.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define pchpddmsetstsharesubksp_ PCHPDDMSETSTSHARESUBKSP
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define pchpddmsetstsharesubksp_ pchpddmsetstsharesubksp
#endif
PETSC_EXTERN void pchpddmsetstsharesubksp_(PC *pc, PetscBool *share, PetscErrorCode *ierr)
{
  *ierr = PCHPDDMSetSTShareSubKSP(*pc, *share ? PETSC_TRUE : PETSC_FALSE);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscksp.h>
#include <petscpc.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define pchpddmgetstsharesubksp_ PCHPDDMGETSTSHARESUBKSP
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define pchpddmgetstsharesubksp_ pchpddmgetstsharesubksp
#endif
PETSC_EXTERN void pchpddmgetstsharesubksp_(PC *pc, PetscBool *share, PetscErrorCode *ierr)
{
  CHKFORTRANNULLBOOL(share);
  *ierr = PCHPDDMGetSTShareSubKSP(*pc, share);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscksp.h>
#include <petscpc.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define pchpddmsetdeflationmat_ PCHPDDMSETDEFLATIONMAT
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define pchpddmsetdeflationmat_ pchpddmsetdeflationmat
#endif
PETSC_EXTERN void pchpddmsetdeflationmat_(PC *pc, IS *is, Mat *U, PetscErrorCode *ierr)
{
  *ierr = PCHPDDMSetDeflationMat(*pc, *is, *U);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscksp.h>
#include <petscpc.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define pchpddminitializepackage_ PCHPDDMINITIALIZEPACKAGE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define pchpddminitializepackage_ pchpddminitializepackage
#endif
PETSC_EXTERN void pchpddminitializepackage_(PetscErrorCode *ierr)
{
  *ierr = PCHPDDMInitializePackage();
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscksp.h>
#include <petscpc.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define pchpddmfinalizepackage_ PCHPDDMFINALIZEPACKAGE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define pchpddmfinalizepackage_ pchpddmfinalizepackage
#endif
PETSC_EXTERN void pchpddmfinalizepackage_(PetscErrorCode *ierr)
{
  *ierr = PCHPDDMFinalizePackage();
  if (*ierr) return;
}
