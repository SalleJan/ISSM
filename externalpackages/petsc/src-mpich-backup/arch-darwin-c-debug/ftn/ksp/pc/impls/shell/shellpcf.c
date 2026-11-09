#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscksp.h>
#include <petscpc.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define pcshellgetcontextcptr_ PCSHELLGETCONTEXTCPTR
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define pcshellgetcontextcptr_ pcshellgetcontextcptr
#endif
PETSC_EXTERN void pcshellgetcontextcptr_(PC *pc, PetscCtxRt ctx, PetscErrorCode *ierr)
{
  *ierr = PCShellGetContext(*pc, ctx);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscksp.h>
#include <petscpc.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define pcshellsetcontext_ PCSHELLSETCONTEXT
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define pcshellsetcontext_ pcshellsetcontext
#endif
PETSC_EXTERN void pcshellsetcontext_(PC *pc, PetscCtx ctx, PetscErrorCode *ierr)
{
  *ierr = PCShellSetContext(*pc, ctx);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscksp.h>
#include <petscpc.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define pcshellsetname_ PCSHELLSETNAME
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define pcshellsetname_ pcshellsetname
#endif
PETSC_EXTERN void pcshellsetname_(PC *pc, char name[], PetscErrorCode *ierr, PETSC_FORTRAN_CHARLEN_T l_name)
{
  char* c_name;
  FIXCHAR(name, l_name, c_name);
  *ierr = PCShellSetName(*pc, c_name);
  if (*ierr) return;
  FREECHAR(name, c_name);
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscksp.h>
#include <petscpc.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define pcshellgetname_ PCSHELLGETNAME
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define pcshellgetname_ pcshellgetname
#endif
PETSC_EXTERN void pcshellgetname_(PC *pc, char name[], PetscErrorCode *ierr, PETSC_FORTRAN_CHARLEN_T l_name)
{
  char* c_name = PETSC_NULLPTR;
  *ierr = PCShellGetName(*pc, (const char **)&c_name);
  if (*ierr) return;
  *ierr = PetscStrncpy((char *)name, c_name, l_name);
  if (*ierr) return;
  FIXRETURNCHAR(PETSC_TRUE, name, l_name);
}
