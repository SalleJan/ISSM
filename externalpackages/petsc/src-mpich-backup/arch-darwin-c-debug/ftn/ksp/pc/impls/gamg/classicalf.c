#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscksp.h>
#include <petscpc.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define pcgamgclassicalsettype_ PCGAMGCLASSICALSETTYPE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define pcgamgclassicalsettype_ pcgamgclassicalsettype
#endif
PETSC_EXTERN void pcgamgclassicalsettype_(PC *pc, char *type, PetscErrorCode *ierr, PETSC_FORTRAN_CHARLEN_T l_type)
{
  char* c_type;
  FIXCHAR(type, l_type, c_type);
  *ierr = PCGAMGClassicalSetType(*pc, c_type);
  if (*ierr) return;
  FREECHAR(type, c_type);
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscksp.h>
#include <petscpc.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define pcgamgclassicalgettype_ PCGAMGCLASSICALGETTYPE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define pcgamgclassicalgettype_ pcgamgclassicalgettype
#endif
PETSC_EXTERN void pcgamgclassicalgettype_(PC *pc, char *type, PetscErrorCode *ierr, PETSC_FORTRAN_CHARLEN_T l_type)
{
  char* c_type = PETSC_NULLPTR;
  *ierr = PCGAMGClassicalGetType(*pc, (const char **)&c_type);
  if (*ierr) return;
  *ierr = PetscStrncpy((char *)type, c_type, l_type);
  if (*ierr) return;
  FIXRETURNCHAR(PETSC_TRUE, type, l_type);
}
