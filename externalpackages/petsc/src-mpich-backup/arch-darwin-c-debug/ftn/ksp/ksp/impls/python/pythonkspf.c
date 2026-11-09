#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscksp.h>
#include <petscksp.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define ksppythonsettype_ KSPPYTHONSETTYPE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define ksppythonsettype_ ksppythonsettype
#endif
PETSC_EXTERN void ksppythonsettype_(KSP *ksp, char pyname[], PetscErrorCode *ierr, PETSC_FORTRAN_CHARLEN_T l_pyname)
{
  char* c_pyname;
  FIXCHAR(pyname, l_pyname, c_pyname);
  *ierr = KSPPythonSetType(*ksp, c_pyname);
  if (*ierr) return;
  FREECHAR(pyname, c_pyname);
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscksp.h>
#include <petscksp.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define ksppythongettype_ KSPPYTHONGETTYPE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define ksppythongettype_ ksppythongettype
#endif
PETSC_EXTERN void ksppythongettype_(KSP *ksp, char pyname[], PetscErrorCode *ierr, PETSC_FORTRAN_CHARLEN_T l_pyname)
{
  char* c_pyname = PETSC_NULLPTR;
  *ierr = KSPPythonGetType(*ksp, (const char **)&c_pyname);
  if (*ierr) return;
  *ierr = PetscStrncpy((char *)pyname, c_pyname, l_pyname);
  if (*ierr) return;
  FIXRETURNCHAR(PETSC_TRUE, pyname, l_pyname);
}
