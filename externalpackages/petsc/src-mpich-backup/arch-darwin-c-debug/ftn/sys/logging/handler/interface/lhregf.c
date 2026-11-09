#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petsclog.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscloghandlersettype_ PETSCLOGHANDLERSETTYPE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscloghandlersettype_ petscloghandlersettype
#endif
PETSC_EXTERN void petscloghandlersettype_(PetscLogHandler *handler, char *name, PetscErrorCode *ierr, PETSC_FORTRAN_CHARLEN_T l_name)
{
  char* c_name;
  FIXCHAR(name, l_name, c_name);
  *ierr = PetscLogHandlerSetType(*handler, c_name);
  if (*ierr) return;
  FREECHAR(name, c_name);
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsys.h>
#include <petsclog.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define petscloghandlergettype_ PETSCLOGHANDLERGETTYPE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define petscloghandlergettype_ petscloghandlergettype
#endif
PETSC_EXTERN void petscloghandlergettype_(PetscLogHandler *handler, char *name, PetscErrorCode *ierr, PETSC_FORTRAN_CHARLEN_T l_name)
{
  char* c_name = PETSC_NULLPTR;
  *ierr = PetscLogHandlerGetType(*handler, (const char **)&c_name);
  if (*ierr) return;
  *ierr = PetscStrncpy((char *)name, c_name, l_name);
  if (*ierr) return;
  FIXRETURNCHAR(PETSC_TRUE, name, l_name);
}
