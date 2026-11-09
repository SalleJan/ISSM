#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscksp.h>
#include <petscpc.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define pclmvmsetupdatevec_ PCLMVMSETUPDATEVEC
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define pclmvmsetupdatevec_ pclmvmsetupdatevec
#endif
PETSC_EXTERN void pclmvmsetupdatevec_(PC *pc, Vec *X, PetscErrorCode *ierr)
{
  *ierr = PCLMVMSetUpdateVec(*pc, *X);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscksp.h>
#include <petscpc.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define pclmvmsetmatlmvm_ PCLMVMSETMATLMVM
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define pclmvmsetmatlmvm_ pclmvmsetmatlmvm
#endif
PETSC_EXTERN void pclmvmsetmatlmvm_(PC *pc, Mat *B, PetscErrorCode *ierr)
{
  *ierr = PCLMVMSetMatLMVM(*pc, *B);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscksp.h>
#include <petscpc.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define pclmvmgetmatlmvm_ PCLMVMGETMATLMVM
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define pclmvmgetmatlmvm_ pclmvmgetmatlmvm
#endif
PETSC_EXTERN void pclmvmgetmatlmvm_(PC *pc, Mat *B, PetscErrorCode *ierr)
{
  PetscBool null_B = !*(void**) B ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(B);
  *ierr = PCLMVMGetMatLMVM(*pc, B);
  if (*ierr) return;
  if (! null_B && !*(void**) B) *(void **) B = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscksp.h>
#include <petscpc.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define pclmvmsetis_ PCLMVMSETIS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define pclmvmsetis_ pclmvmsetis
#endif
PETSC_EXTERN void pclmvmsetis_(PC *pc, IS *inactive, PetscErrorCode *ierr)
{
  *ierr = PCLMVMSetIS(*pc, *inactive);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscksp.h>
#include <petscpc.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define pclmvmclearis_ PCLMVMCLEARIS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define pclmvmclearis_ pclmvmclearis
#endif
PETSC_EXTERN void pclmvmclearis_(PC *pc, PetscErrorCode *ierr)
{
  *ierr = PCLMVMClearIS(*pc);
  if (*ierr) return;
}
