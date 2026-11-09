#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petsctao.h>
#include <petsctao.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define taolmvmrecycle_ TAOLMVMRECYCLE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define taolmvmrecycle_ taolmvmrecycle
#endif
PETSC_EXTERN void taolmvmrecycle_(Tao *tao, PetscBool *flg, PetscErrorCode *ierr)
{
  *ierr = TaoLMVMRecycle(*tao, *flg ? PETSC_TRUE : PETSC_FALSE);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petsctao.h>
#include <petsctao.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define taolmvmseth0_ TAOLMVMSETH0
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define taolmvmseth0_ taolmvmseth0
#endif
PETSC_EXTERN void taolmvmseth0_(Tao *tao, Mat *H0, PetscErrorCode *ierr)
{
  *ierr = TaoLMVMSetH0(*tao, *H0);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petsctao.h>
#include <petsctao.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define taolmvmgeth0_ TAOLMVMGETH0
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define taolmvmgeth0_ taolmvmgeth0
#endif
PETSC_EXTERN void taolmvmgeth0_(Tao *tao, Mat *H0, PetscErrorCode *ierr)
{
  PetscBool null_H0 = !*(void**) H0 ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(H0);
  *ierr = TaoLMVMGetH0(*tao, H0);
  if (*ierr) return;
  if (! null_H0 && !*(void**) H0) *(void **) H0 = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petsctao.h>
#include <petsctao.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define taolmvmgeth0ksp_ TAOLMVMGETH0KSP
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define taolmvmgeth0ksp_ taolmvmgeth0ksp
#endif
PETSC_EXTERN void taolmvmgeth0ksp_(Tao *tao, KSP *ksp, PetscErrorCode *ierr)
{
  PetscBool null_ksp = !*(void**) ksp ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(ksp);
  *ierr = TaoLMVMGetH0KSP(*tao, ksp);
  if (*ierr) return;
  if (! null_ksp && !*(void**) ksp) *(void **) ksp = (void *)-2;
}
