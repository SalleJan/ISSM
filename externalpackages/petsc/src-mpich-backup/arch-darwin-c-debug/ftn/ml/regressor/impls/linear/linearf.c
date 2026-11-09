#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscml.h>
#include <petscregressor.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscregressorlinearsetfitintercept_ PETSCREGRESSORLINEARSETFITINTERCEPT
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscregressorlinearsetfitintercept_ petscregressorlinearsetfitintercept
#endif
PETSC_EXTERN void petscregressorlinearsetfitintercept_(PetscRegressor *regressor, PetscBool *flg, PetscErrorCode *ierr)
{
  *ierr = PetscRegressorLinearSetFitIntercept(*regressor, *flg ? PETSC_TRUE : PETSC_FALSE);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscml.h>
#include <petscregressor.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscregressorlinearsetuseksp_ PETSCREGRESSORLINEARSETUSEKSP
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscregressorlinearsetuseksp_ petscregressorlinearsetuseksp
#endif
PETSC_EXTERN void petscregressorlinearsetuseksp_(PetscRegressor *regressor, PetscBool *flg, PetscErrorCode *ierr)
{
  *ierr = PetscRegressorLinearSetUseKSP(*regressor, *flg ? PETSC_TRUE : PETSC_FALSE);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscml.h>
#include <petscregressor.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscregressorlineargetksp_ PETSCREGRESSORLINEARGETKSP
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscregressorlineargetksp_ petscregressorlineargetksp
#endif
PETSC_EXTERN void petscregressorlineargetksp_(PetscRegressor *regressor, KSP *ksp, PetscErrorCode *ierr)
{
  PetscBool null_ksp = !*(void**) ksp ? PETSC_TRUE : PETSC_FALSE;
  CHKFORTRANNULLOBJECT(ksp);
  *ierr = PetscRegressorLinearGetKSP(*regressor, ksp);
  if (*ierr) return;
  if (! null_ksp && !*(void**) ksp) *(void **) ksp = (void *)-2;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscml.h>
#include <petscregressor.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscregressorlinearsettype_ PETSCREGRESSORLINEARSETTYPE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscregressorlinearsettype_ petscregressorlinearsettype
#endif
PETSC_EXTERN void petscregressorlinearsettype_(PetscRegressor *regressor, PetscRegressorLinearType *type, PetscErrorCode *ierr)
{
  *ierr = PetscRegressorLinearSetType(*regressor, *type);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscml.h>
#include <petscregressor.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscregressorlineargettype_ PETSCREGRESSORLINEARGETTYPE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscregressorlineargettype_ petscregressorlineargettype
#endif
PETSC_EXTERN void petscregressorlineargettype_(PetscRegressor *regressor, PetscRegressorLinearType *type, PetscErrorCode *ierr)
{
  *ierr = PetscRegressorLinearGetType(*regressor, type);
  if (*ierr) return;
}
