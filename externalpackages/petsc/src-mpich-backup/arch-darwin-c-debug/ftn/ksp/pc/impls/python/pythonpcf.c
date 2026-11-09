#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscksp.h>
#include <petscpc.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define pcpythonsettype_ PCPYTHONSETTYPE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define pcpythonsettype_ pcpythonsettype
#endif
PETSC_EXTERN void pcpythonsettype_(PC *pc, char pyname[], PetscErrorCode *ierr, PETSC_FORTRAN_CHARLEN_T l_pyname)
{
  char* c_pyname;
  FIXCHAR(pyname, l_pyname, c_pyname);
  *ierr = PCPythonSetType(*pc, c_pyname);
  if (*ierr) return;
  FREECHAR(pyname, c_pyname);
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscksp.h>
#include <petscpc.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define pcpythongettype_ PCPYTHONGETTYPE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define pcpythongettype_ pcpythongettype
#endif
PETSC_EXTERN void pcpythongettype_(PC *pc, char pyname[], PetscErrorCode *ierr, PETSC_FORTRAN_CHARLEN_T l_pyname)
{
  char* c_pyname = PETSC_NULLPTR;
  *ierr = PCPythonGetType(*pc, (const char **)&c_pyname);
  if (*ierr) return;
  *ierr = PetscStrncpy((char *)pyname, c_pyname, l_pyname);
  if (*ierr) return;
  FIXRETURNCHAR(PETSC_TRUE, pyname, l_pyname);
}
