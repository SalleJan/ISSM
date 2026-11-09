#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscsys.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscsequentialphasebegin_ PETSCSEQUENTIALPHASEBEGIN
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscsequentialphasebegin_ petscsequentialphasebegin
#endif
PETSC_EXTERN void petscsequentialphasebegin_(MPI_Fint *comm, int *ng, PetscErrorCode *ierr)
{
  *ierr = PetscSequentialPhaseBegin(MPI_Comm_f2c(*(comm)), *ng);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscsys.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscsequentialphaseend_ PETSCSEQUENTIALPHASEEND
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscsequentialphaseend_ petscsequentialphaseend
#endif
PETSC_EXTERN void petscsequentialphaseend_(MPI_Fint *comm, int *ng, PetscErrorCode *ierr)
{
  *ierr = PetscSequentialPhaseEnd(MPI_Comm_f2c(*(comm)), *ng);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscsys.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscglobalminmaxint_ PETSCGLOBALMINMAXINT
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscglobalminmaxint_ petscglobalminmaxint
#endif
PETSC_EXTERN void petscglobalminmaxint_(MPI_Fint *comm, const PetscInt minMaxVal[], PetscInt minMaxValGlobal[], PetscErrorCode *ierr)
{
  CHKFORTRANNULLINTEGER(minMaxVal);
  CHKFORTRANNULLINTEGER(minMaxValGlobal);
  *ierr = PetscGlobalMinMaxInt(MPI_Comm_f2c(*(comm)), minMaxVal, minMaxValGlobal);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscsys.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscglobalminmaxreal_ PETSCGLOBALMINMAXREAL
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscglobalminmaxreal_ petscglobalminmaxreal
#endif
PETSC_EXTERN void petscglobalminmaxreal_(MPI_Fint *comm, const PetscReal minMaxVal[], PetscReal minMaxValGlobal[], PetscErrorCode *ierr)
{
  CHKFORTRANNULLREAL(minMaxVal);
  CHKFORTRANNULLREAL(minMaxValGlobal);
  *ierr = PetscGlobalMinMaxReal(MPI_Comm_f2c(*(comm)), minMaxVal, minMaxValGlobal);
  if (*ierr) return;
}
