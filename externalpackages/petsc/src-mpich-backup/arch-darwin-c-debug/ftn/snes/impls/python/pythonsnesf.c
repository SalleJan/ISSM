#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsnes.h>
#include <petscsnes.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define snespythonsettype_ SNESPYTHONSETTYPE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define snespythonsettype_ snespythonsettype
#endif
PETSC_EXTERN void snespythonsettype_(SNES *snes, char pyname[], PetscErrorCode *ierr, PETSC_FORTRAN_CHARLEN_T l_pyname)
{
  char* c_pyname;
  FIXCHAR(pyname, l_pyname, c_pyname);
  *ierr = SNESPythonSetType(*snes, c_pyname);
  if (*ierr) return;
  FREECHAR(pyname, c_pyname);
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsnes.h>
#include <petscsnes.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define snespythongettype_ SNESPYTHONGETTYPE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define snespythongettype_ snespythongettype
#endif
PETSC_EXTERN void snespythongettype_(SNES *snes, char pyname[], PetscErrorCode *ierr, PETSC_FORTRAN_CHARLEN_T l_pyname)
{
  char* c_pyname = PETSC_NULLPTR;
  *ierr = SNESPythonGetType(*snes, (const char **)&c_pyname);
  if (*ierr) return;
  *ierr = PetscStrncpy((char *)pyname, c_pyname, l_pyname);
  if (*ierr) return;
  FIXRETURNCHAR(PETSC_TRUE, pyname, l_pyname);
}
