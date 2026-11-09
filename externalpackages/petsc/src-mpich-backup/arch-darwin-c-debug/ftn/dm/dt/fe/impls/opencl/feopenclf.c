#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscfe.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscfeopenclsetrealtype_ PETSCFEOPENCLSETREALTYPE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscfeopenclsetrealtype_ petscfeopenclsetrealtype
#endif
PETSC_EXTERN void petscfeopenclsetrealtype_(PetscFE *fem, PetscDataType *realType, PetscErrorCode *ierr)
{
  *ierr = PetscFEOpenCLSetRealType(*fem, *realType);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscfe.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscfeopenclgetrealtype_ PETSCFEOPENCLGETREALTYPE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscfeopenclgetrealtype_ petscfeopenclgetrealtype
#endif
PETSC_EXTERN void petscfeopenclgetrealtype_(PetscFE *fem, PetscDataType *realType, PetscErrorCode *ierr)
{
  *ierr = PetscFEOpenCLGetRealType(*fem, realType);
  if (*ierr) return;
}
