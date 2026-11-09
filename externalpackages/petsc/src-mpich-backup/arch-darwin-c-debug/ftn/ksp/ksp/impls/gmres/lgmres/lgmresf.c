#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscksp.h>
#include <petscksp.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define ksplgmressetaugdim_ KSPLGMRESSETAUGDIM
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define ksplgmressetaugdim_ ksplgmressetaugdim
#endif
PETSC_EXTERN void ksplgmressetaugdim_(KSP *ksp, PetscInt *dim, PetscErrorCode *ierr)
{
  *ierr = KSPLGMRESSetAugDim(*ksp, *dim);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscksp.h>
#include <petscksp.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define ksplgmressetconstant_ KSPLGMRESSETCONSTANT
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define ksplgmressetconstant_ ksplgmressetconstant
#endif
PETSC_EXTERN void ksplgmressetconstant_(KSP *ksp, PetscErrorCode *ierr)
{
  *ierr = KSPLGMRESSetConstant(*ksp);
  if (*ierr) return;
}
