#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscvec.h>
#include <petscvec.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define vecgettype_ VECGETTYPE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define vecgettype_ vecgettype
#endif
PETSC_EXTERN void vecgettype_(Vec *vec, char *type, PetscErrorCode *ierr, PETSC_FORTRAN_CHARLEN_T l_type)
{
  char* c_type = PETSC_NULLPTR;
  *ierr = VecGetType(*vec, (const char **)&c_type);
  if (*ierr) return;
  *ierr = PetscStrncpy((char *)type, c_type, l_type);
  if (*ierr) return;
  FIXRETURNCHAR(PETSC_TRUE, type, l_type);
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscvec.h>
#include <petscvec.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define vecsettype_ VECSETTYPE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define vecsettype_ vecsettype
#endif
PETSC_EXTERN void vecsettype_(Vec *vec, char *newType, PetscErrorCode *ierr, PETSC_FORTRAN_CHARLEN_T l_newType)
{
  char* c_newType;
  FIXCHAR(newType, l_newType, c_newType);
  *ierr = VecSetType(*vec, c_newType);
  if (*ierr) return;
  FREECHAR(newType, c_newType);
}
