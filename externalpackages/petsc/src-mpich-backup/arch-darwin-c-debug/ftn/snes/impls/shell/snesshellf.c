#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsnes.h>
#include <petscsnes.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define snesshellgetcontextcptr_ SNESSHELLGETCONTEXTCPTR
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define snesshellgetcontextcptr_ snesshellgetcontextcptr
#endif
PETSC_EXTERN void snesshellgetcontextcptr_(SNES *snes, PetscCtxRt ctx, PetscErrorCode *ierr)
{
  *ierr = SNESShellGetContext(*snes, ctx);
  if (*ierr) return;
}
#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/ftnimpl.h"
#include <petscsnes.h>
#include <petscsnes.h>
#if defined(PETSC_HAVE_FORTRAN_CAPS)
  #define snesshellsetcontext_ SNESSHELLSETCONTEXT
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE)
  #define snesshellsetcontext_ snesshellsetcontext
#endif
PETSC_EXTERN void snesshellsetcontext_(SNES *snes, PetscCtx ctx, PetscErrorCode *ierr)
{
  *ierr = SNESShellSetContext(*snes, ctx);
  if (*ierr) return;
}
