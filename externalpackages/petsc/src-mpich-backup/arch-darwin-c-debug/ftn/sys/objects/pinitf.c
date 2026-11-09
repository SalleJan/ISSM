#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscsys.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscinitialized_ PETSCINITIALIZED
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscinitialized_ petscinitialized
#endif
PETSC_EXTERN void petscinitialized_(PetscBool *isInitialized, PetscErrorCode *ierr)
{
  CHKFORTRANNULLBOOL(isInitialized);
  *ierr = PetscInitialized(isInitialized);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscsys.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscfinalized_ PETSCFINALIZED
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscfinalized_ petscfinalized
#endif
PETSC_EXTERN void petscfinalized_(PetscBool *isFinalized, PetscErrorCode *ierr)
{
  CHKFORTRANNULLBOOL(isFinalized);
  *ierr = PetscFinalized(isFinalized);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscsys.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscmaxsum_ PETSCMAXSUM
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscmaxsum_ petscmaxsum
#endif
PETSC_EXTERN void petscmaxsum_(MPI_Fint *comm, const PetscInt array[], PetscInt *max, PetscInt *sum, PetscErrorCode *ierr)
{
  CHKFORTRANNULLINTEGER(array);
  CHKFORTRANNULLINTEGER(max);
  CHKFORTRANNULLINTEGER(sum);
  *ierr = PetscMaxSum(MPI_Comm_f2c(*(comm)), array, max, sum);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscsys.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscsetprogramname_ PETSCSETPROGRAMNAME
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscsetprogramname_ petscsetprogramname
#endif
PETSC_EXTERN void petscsetprogramname_(char name[], PetscErrorCode *ierr, PETSC_FORTRAN_CHARLEN_T l_name)
{
  char* c_name;
  FIXCHAR(name, l_name, c_name);
  *ierr = PetscSetProgramName(c_name);
  if (*ierr) return;
  FREECHAR(name, c_name);
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscsys.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscgetprogramname_ PETSCGETPROGRAMNAME
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscgetprogramname_ petscgetprogramname
#endif
PETSC_EXTERN void petscgetprogramname_(char name[], PetscErrorCode *ierr, PETSC_FORTRAN_CHARLEN_T l_name)
{
  *ierr = PetscGetProgramName(name, l_name);
  if (*ierr) return;
  FIXRETURNCHAR(PETSC_TRUE, name, l_name);
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petscsys.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscfinalize_ PETSCFINALIZE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscfinalize_ petscfinalize
#endif
PETSC_EXTERN void petscfinalize_(PetscErrorCode *ierr)
{
  *ierr = PetscFinalize();
  if (*ierr) return;
}
