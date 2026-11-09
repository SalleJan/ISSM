#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscksp.h>
#include <petscksp.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define ksphpddmsetdeflationmat_ KSPHPDDMSETDEFLATIONMAT
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define ksphpddmsetdeflationmat_ ksphpddmsetdeflationmat
#endif
PETSC_EXTERN void ksphpddmsetdeflationmat_(KSP *ksp, Mat *U, PetscErrorCode *ierr)
{
  *ierr = KSPHPDDMSetDeflationMat(*ksp, *U);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscksp.h>
#include <petscksp.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define ksphpddmgetdeflationmat_ KSPHPDDMGETDEFLATIONMAT
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define ksphpddmgetdeflationmat_ ksphpddmgetdeflationmat
#endif
PETSC_EXTERN void ksphpddmgetdeflationmat_(KSP *ksp, Mat *U, PetscErrorCode *ierr)
{
  PetscBool null_U = !*(void**) U ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(U);
  *ierr = KSPHPDDMGetDeflationMat(*ksp, U);
  if (*ierr) return;
  if (! null_U && !*(void**) U) *(void **) U = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscksp.h>
#include <petscksp.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define ksphpddmsettype_ KSPHPDDMSETTYPE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define ksphpddmsettype_ ksphpddmsettype
#endif
PETSC_EXTERN void ksphpddmsettype_(KSP *ksp, KSPHPDDMType *type, PetscErrorCode *ierr)
{
  *ierr = KSPHPDDMSetType(*ksp, *type);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscksp.h>
#include <petscksp.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define ksphpddmgettype_ KSPHPDDMGETTYPE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define ksphpddmgettype_ ksphpddmgettype
#endif
PETSC_EXTERN void ksphpddmgettype_(KSP *ksp, KSPHPDDMType *type, PetscErrorCode *ierr)
{
  *ierr = KSPHPDDMGetType(*ksp, type);
  if (*ierr) return;
}
