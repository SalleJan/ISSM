#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscsys.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petsccommbuildtwosidedsettype_ PETSCCOMMBUILDTWOSIDEDSETTYPE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petsccommbuildtwosidedsettype_ petsccommbuildtwosidedsettype
#endif
PETSC_EXTERN void petsccommbuildtwosidedsettype_(MPI_Fint *comm, PetscBuildTwoSidedType *twosided, PetscErrorCode *ierr)
{
  *ierr = PetscCommBuildTwoSidedSetType(MPI_Comm_f2c(*(comm)), *twosided);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscsys.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petsccommbuildtwosidedgettype_ PETSCCOMMBUILDTWOSIDEDGETTYPE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petsccommbuildtwosidedgettype_ petsccommbuildtwosidedgettype
#endif
PETSC_EXTERN void petsccommbuildtwosidedgettype_(MPI_Fint *comm, PetscBuildTwoSidedType *twosided, PetscErrorCode *ierr)
{
  *ierr = PetscCommBuildTwoSidedGetType(MPI_Comm_f2c(*(comm)), twosided);
  if (*ierr) return;
}
