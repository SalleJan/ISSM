#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscspace.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscspaceptrimmedsetformdegree_ PETSCSPACEPTRIMMEDSETFORMDEGREE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscspaceptrimmedsetformdegree_ petscspaceptrimmedsetformdegree
#endif
PETSC_EXTERN void petscspaceptrimmedsetformdegree_(PetscSpace *sp, PetscInt *formDegree, PetscErrorCode *ierr)
{
  *ierr = PetscSpacePTrimmedSetFormDegree(*sp, *formDegree);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscdm.h>
#include <petscspace.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscspaceptrimmedgetformdegree_ PETSCSPACEPTRIMMEDGETFORMDEGREE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscspaceptrimmedgetformdegree_ petscspaceptrimmedgetformdegree
#endif
PETSC_EXTERN void petscspaceptrimmedgetformdegree_(PetscSpace *sp, PetscInt *formDegree, PetscErrorCode *ierr)
{
  CHKFORTRANNULLINTEGER(formDegree);
  *ierr = PetscSpacePTrimmedGetFormDegree(*sp, formDegree);
  if (*ierr) return;
}
